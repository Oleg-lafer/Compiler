#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ast.h"


typedef struct Var {
    char* id;             // variable name
    char* type;           // type: "int", "float", "bool", "string"
    struct Var* next;     // linked list pointer
} Var;

typedef struct Func {
    char* id;             // function name
    char* ret_type;       // return type (can be NULL)
    Var* params;          // linked list of parameters
    struct Func* next;    // next function in the list
} Func;

typedef struct Scope {
    Var* vars;            // linked list of variables in this scope
    struct Scope* next;   // next scope (stack of scopes)
} Scope;

Func* function_list = NULL;
int found_main = 0;

Scope* push_scope(Scope* current) {
    Scope* new_scope = malloc(sizeof(Scope));
    new_scope->vars = NULL;
    new_scope->next = current;
    return new_scope;
}

Scope* pop_scope(Scope* current) {
    if (!current) return NULL;
    Scope* next = current->next;
    // Free variable list
    Var* v = current->vars;
    while (v) {
        Var* temp = v;
        v = v->next;
        free(temp->id);
        free(temp->type);
        free(temp);
    }
    free(current);
    return next;
}

Var* find_var(Scope* scope, const char* id) {
    while (scope) {
        Var* curr = scope->vars;
        while (curr) {
            if (strcmp(curr->id, id) == 0) return curr;
            curr = curr->next;
        }
        scope = scope->next;
    }
    return NULL;
}

Func* find_func(const char* id) {
    Func* f = function_list;
    while (f) {
        if (strcmp(f->id, id) == 0) return f;
        f = f->next;
    }
    return NULL;
}


int semantic_errors = 0;

void check_var_usage(const char* id, Scope* scope) {
    if (!find_var(scope, id)) {
        printf("Semantic Error: variable '%s' used before declaration\n", id);
        semantic_errors++;
    }
}

void insert_var(Scope* scope, const char* id, const char* type) {
    Var* current = scope->vars;
    while (current) {
        if (strcmp(current->id, id) == 0) {
            printf("Semantic Error: duplicate variable '%s' in the same scope\n", id);
            exit(1);
        }
        current = current->next;
    }

    Var* new_var = malloc(sizeof(Var));
    new_var->id = strdup(id);
    new_var->type = strdup(type);
    new_var->next = scope->vars;
    scope->vars = new_var;
}

const char* evaluate_expr_type(ASTNode* expr, Scope* scope) {
    if (!expr || !expr->name) return NULL;

    // קונסטנט: מספר שלם
    if (isdigit(expr->name[0]) || (expr->name[0] == '-' && isdigit(expr->name[1]))) {
        return "int";
    }

    // קונסטנט: מחרוזת
    if (expr->name[0] == '"' || expr->name[0] == '\'') {
        return "string";
    }

    // true / false
    if (strcmp(expr->name, "true") == 0 || strcmp(expr->name, "false") == 0) {
        return "bool";
    }

    // ביטוי מסוג אופרטור בינארי (כמו GT, LT, EQ, ADD, etc.)
    if (expr->child_count == 2) {
        const char* left_type = evaluate_expr_type(expr->children[0], scope);
        const char* right_type = evaluate_expr_type(expr->children[1], scope);

        if (!left_type || !right_type) return NULL;

        // השוואתיים (מחזירים bool)
        // השוואתיים – מטפלים גם בשמות כמו ">" וגם ב-"GT"
        if (strcmp(expr->name, ">") == 0 || strcmp(expr->name, "GT") == 0 ||
            strcmp(expr->name, "<") == 0 || strcmp(expr->name, "LT") == 0 ||
            strcmp(expr->name, ">=") == 0 || strcmp(expr->name, "GE") == 0 ||
            strcmp(expr->name, "<=") == 0 || strcmp(expr->name, "LE") == 0 ||
            strcmp(expr->name, "==") == 0 || strcmp(expr->name, "EQ") == 0 ||
            strcmp(expr->name, "!=") == 0 || strcmp(expr->name, "NE") == 0) {

            if (strcmp(left_type, right_type) == 0)
                return "bool";
            else
                return NULL;
        }


        // אריתמטיים (ADD, SUB, MUL, DIV)
        if (strcmp(expr->name, "ADD") == 0 ||
            strcmp(expr->name, "SUB") == 0 ||
            strcmp(expr->name, "MUL") == 0 ||
            strcmp(expr->name, "DIV") == 0) {
            if (strcmp(left_type, "int") == 0 && strcmp(right_type, "int") == 0)
                return "int";
        }

        // אופרטורים לוגיים (AND, OR)
        if (strcmp(expr->name, "AND") == 0 || strcmp(expr->name, "OR") == 0) {
            if (strcmp(left_type, "bool") == 0 && strcmp(right_type, "bool") == 0)
                return "bool";
        }
    }

    // משתנה
    Var* v = find_var(scope, expr->name);
    if (v) return v->type;

    return NULL;
}



void check_expression(ASTNode* node, Scope* scope) {
    if (!node) return;

    // קבועים – לא משתנים
    if (strcmp(node->name, "true") == 0 || strcmp(node->name, "false") == 0)
        return;

    if (isdigit(node->name[0]) || (node->name[0] == '-' && isdigit(node->name[1])))
        return;

    if (node->name[0] == '"' || node->name[0] == '\'')
        return;

    // מזהה בלי ילדים – בדוק אם הוכרז כמשתנה
    if (node->child_count == 0) {
        check_var_usage(node->name, scope);
        return;
    }

    // ביטוי עם ילדים – נרוץ רקורסיבית על כולם
    for (int i = 0; i < node->child_count; i++) {
        check_expression(node->children[i], scope);
    }
}

void check_statements(ASTNode* node, Scope* scope, const char* current_return_type) {
    if (!node) return;

    // עוברים על רשימת STATEMENTS
    if (strcmp(node->name, "STATEMENTS") == 0) {
        for (int i = 0; i < node->child_count; i++) {
            check_statements(node->children[i], scope, current_return_type);
        }
    }

    // הצהרת משתנה: DECL -> (type, id)
    else if (strcmp(node->name, "DECL") == 0) {
        const char* type = node->children[0]->name;
        const char* id   = node->children[1]->name;
        insert_var(scope, id, type);
    }
    else if (strcmp(node->name, "DECL_ASSIGN") == 0) {
        const char* type = node->children[0]->name;
        const char* id   = node->children[1]->name;

        insert_var(scope, id, type);                     // הכנס את המשתנה
        check_expression(node->children[2], scope);      // נתח את הביטוי שהושם
    }
    // בלוק חדש: לא פותחים סקופ חדש לגוף פונקציה
    else if (strcmp(node->name, "BLOCK") == 0) {
        check_statements(node->children[0], scope, current_return_type);
    }
    // השמה: ASSIGN -> (id, expression)
    else if (strcmp(node->name, "ASSIGN") == 0) {
        const char* id = node->children[0]->name;
        check_var_usage(id, scope);
        check_expression(node->children[1], scope);  // צד ימין של ההשמה
    }

    else if (strcmp(node->name, "RETURN") == 0 && node->child_count > 0) {
        ASTNode* expr = node->children[0];
        check_expression(expr, scope);

        const char* actual_type = evaluate_expr_type(expr, scope);
        if (current_return_type && actual_type && strcmp(current_return_type, actual_type) != 0) {
            printf("Semantic Error: return type is '%s', but function declares '%s'\n",
                actual_type, current_return_type);
            semantic_errors++;
        }
    }
    else if (strcmp(node->name, "IF") == 0 || strcmp(node->name, "WHILE") == 0) {
        ASTNode* condition = node->children[0];

        check_expression(condition, scope);

        const char* cond_type = evaluate_expr_type(condition, scope);
        if (!cond_type || strcmp(cond_type, "bool") != 0) {
            printf("Semantic Error: condition in '%s' must be of type 'bool', but got '%s'\n",
                node->name, cond_type ? cond_type : "unknown");
            semantic_errors++;
        }

        check_statements(node->children[1], scope, current_return_type);
        if (node->child_count > 2)
            check_statements(node->children[2], scope, current_return_type);
    }

    else if (strcmp(node->name, "CALL") == 0) {
        const char* fname = node->children[0]->name;
        Func* f = find_func(fname);
        if (!f) {
            printf("Semantic Error: call to undefined function '%s'\n", fname);
            semantic_errors++;
            return;
        }

        ASTNode* args = node->children[1];
        int given = args->child_count;

        // ספירת פרמטרים נדרשים
        int expected = 0;
        Var* p = f->params;
        while (p) {
            expected++;
            p = p->next;
        }

        if (given != expected) {
            printf("Semantic Error: function '%s' expects %d argument(s), got %d\n", fname, expected, given);
            semantic_errors++;
        }

        // בדיקת ביטויים בכל ארגומנט והשוואת טיפוסים
        Var* expected_param = f->params;
        for (int i = 0; i < given && expected_param; i++) {
            ASTNode* arg_expr = args->children[i];

            check_expression(arg_expr, scope); // עדיין בודק שימוש במשתנים

            const char* actual_type = evaluate_expr_type(arg_expr, scope);
            const char* expected_type = expected_param->type;

            if (!actual_type || strcmp(actual_type, expected_type) != 0) {
                printf("Semantic Error: argument %d of '%s' has type '%s', expected '%s'\n",
                    i + 1, fname,
                    actual_type ? actual_type : "unknown",
                    expected_type);
                semantic_errors++;
            }

            expected_param = expected_param->next;
        }

        return;  // לא להיכנס עוד רקורסיבית על CALL
    }

}


void insert_func(Func* f) {
    // Check for duplicates
    Func* current = function_list;
    while (current) {
        if (strcmp(current->id, f->id) == 0) {
            printf("Semantic Error: duplicate function '%s'\n", f->id);
            exit(1);
        }
        current = current->next;
    }

    // Prepend to list
    f->next = function_list;
    function_list = f;
}

void check_main_function(Func* f) {
    if (strcmp(f->id, "__main__") != 0) return;

    if (found_main) {
        printf("Semantic Error: multiple definitions of __main__()\n");
        exit(1);
    }
    found_main = 1;

    if (f->ret_type && strcmp(f->ret_type, "") != 0) {
        printf("Semantic Error: __main__() must not have a return type\n");
        exit(1);
    }

    if (f->params != NULL) {
        printf("Semantic Error: __main__() must not have parameters\n");
        exit(1);
    }
}

// Processes a FUNC node from the AST and registers the function in the function table.
void process_func_node(ASTNode* func_node) {
    // קבלת שם הפונקציה
    const char* name = func_node->children[0]->name;

    // קבלת צומת הפרמטרים וצומת טיפוס ההחזרה
    ASTNode* params_node = func_node->children[1];
    const char* ret_type = func_node->children[2]->name;

    // בניית רשימת הפרמטרים מסוג Var*
    Var* param_list = NULL;
    for (int i = params_node->child_count - 1; i >= 0; i--) {
        ASTNode* param = params_node->children[i];

        const char* declared_type = param->children[0]->name;
        const char* param_id = param->children[1]->name;

        // בדיקת טיפוס ערך ברירת מחדל אם יש
        if (strcmp(param->name, "PARAM_DEFAULT") == 0 && param->child_count == 3) {
            ASTNode* default_expr = param->children[2];

            const char* actual_type = evaluate_expr_type(default_expr, NULL); // אין scope בפרמטרים
            if (!actual_type || strcmp(actual_type, declared_type) != 0) {
                printf("Semantic Error: default value for parameter '%s' has type '%s', expected '%s'\n",
                    param_id,
                    declared_type,
                    actual_type ? actual_type : "unknown");
                semantic_errors++;
            }
        }

        Var* v = malloc(sizeof(Var));
        v->id = strdup(param->children[1]->name);    // שם המשתנה
        v->type = strdup(param->children[0]->name);  // טיפוס המשתנה
        v->next = param_list;
        param_list = v;
    }

    // יצירת מבנה הפונקציה
    Func* f = malloc(sizeof(Func));
    f->id = strdup(name);
    f->ret_type = (strcmp(ret_type, "void") == 0 ? NULL : strdup(ret_type));
    f->params = param_list;
    f->next = NULL;

    // בדיקת תקינות __main__
    check_main_function(f);

    // בדיקת כפילות והוספה לטבלת הפונקציות
    insert_func(f);

    // יצירת scope חדש עבור גוף הפונקציה
    Scope* func_scope = push_scope(NULL);

    // הכנסת הפרמטרים לטבלת הסימבולים של הפונקציה
    Var* p = f->params;
    while (p) {
        insert_var(func_scope, p->id, p->type);
        p = p->next;
    }

    // קבלת גוף הפונקציה (child[3]) ובדיקת הצהרות בו
    ASTNode* body = func_node->children[3];
    check_statements(body, func_scope, f->ret_type);

    // סיום הסקופ
    pop_scope(func_scope);
}

void check_semantics(ASTNode* root) {
    if (strcmp(root->name, "FUNCS") == 0) {
        for (int i = 0; i < root->child_count; i++) {
            process_func_node(root->children[i]);
        }

        if (!found_main) {
            printf("Semantic Error: __main__() function is missing\n");
            exit(1);
        }
        if (semantic_errors > 0) {
            printf("Compilation failed with %d semantic error(s).\n", semantic_errors);
            exit(1);
        }
    }
}




