#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void insert_var(Scope* scope, const char* id, const char* type) {
    // בדיקה אם כבר קיים משתנה בשם הזה בסקופ הנוכחי
    Var* current = scope->vars;
    while (current) {
        if (strcmp(current->id, id) == 0) {
            printf("Semantic Error: duplicate variable '%s' in the same scope\n", id);
            exit(1);
        }
        current = current->next;
    }

    // אם לא נמצא כפול — מוסיפים
    Var* new_var = malloc(sizeof(Var));
    new_var->id = strdup(id);
    new_var->type = strdup(type);
    new_var->next = scope->vars;
    scope->vars = new_var;
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

void check_statements(ASTNode* node, Scope* scope) {
    if (!node) return;

    if (strcmp(node->name, "STATEMENTS") == 0) {
        for (int i = 0; i < node->child_count; i++) {
            check_statements(node->children[i], scope);
        }
    }
    else if (strcmp(node->name, "DECL") == 0) {
        const char* type = node->children[0]->name;
        const char* id   = node->children[1]->name;
        insert_var(scope, id, type);  // ✅ כאן
    }
    else if (strcmp(node->name, "BLOCK") == 0) {
        Scope* inner = push_scope(scope);             // ✅ סקופ חדש
        check_statements(node->children[0], inner);   // ניתוח סטייטמנטים
        pop_scope(inner);                             // ✅ יציאה מהסקופ
    }
    // תוכל להוסיף תנאים ל־ASSIGN, IF, WHILE וכו׳
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
    // child[0] is the function name node
    const char* name = func_node->children[0]->name;

    // child[1] is the PARAMS node
    ASTNode* params_node = func_node->children[1];

    // child[2] is the return type node ("int", "float", "bool", or "void")
    const char* ret_type = func_node->children[2]->name;

    // Build a linked list of Var* from the PARAMS AST
    Var* param_list = NULL;

    // Iterate in reverse to maintain original order in the linked list
    for (int i = params_node->child_count - 1; i >= 0; i--) {
        ASTNode* param = params_node->children[i]; // PARAM or PARAM_DEFAULT

        Var* v = malloc(sizeof(Var));

        // param->children[0] = type node, children[1] = identifier
        v->type = strdup(param->children[0]->name);
        v->id = strdup(param->children[1]->name);
        v->next = param_list;      // Prepend to linked list
        param_list = v;
    }

    // Allocate and populate the Func object
    Func* f = malloc(sizeof(Func));
    f->id = strdup(name);
    f->ret_type = (strcmp(ret_type, "void") == 0 ? NULL : strdup(ret_type));
    f->params = param_list;
    f->next = NULL;

    // Perform __main__() validation if needed
    check_main_function(f);

    // Insert into the global function list
    insert_func(f);
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
    }
}

