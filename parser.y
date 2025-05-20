%code requires {
    #include "ast.h"
}

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "semantic.h"

ASTNode* root = NULL;
int yylex();
int yyerror(const char *s);
%}

%union {
    int num;
    float fnum;
    char* id;
    ASTNode* node;
}

%token <num> NUMBER BOOL
%token <fnum> FLOAT_LITERAL
%token <id> IDENTIFIER STRING_LITERAL
%token <id> TYPE
%token IS
%token RETURN ASSIGN PLUS MINUS MULT DIV SEMICOLON
%token LPAREN RPAREN
%token LBRACE RBRACE
%token LBRACK RBRACK
%token IF ELIF ELSE COLON PASS WHILE DEF COMMA ARROW
%token EQ NEQ GT LT GE LE
%token AND OR NOT
%token POW

%type <id> return_type_opt
%type <node> program function_list function_def param_list param_group_list param_group param_decl_list param_decl arg_list block statements statement declaration assignment return_statement expression if_stmt elif_list else_opt while_stmt

%left OR
%left AND
%right NOT
%left EQ NEQ GT GE LT LE
%left PLUS MINUS
%left MULT DIV
%left POW
%nonassoc UMINUS

%%

program:
    function_list {
        root = $1;
        $$ = $1;
    }
;

function_list:
    function_def { $$ = create_node("FUNCS", 1, $1); }
  | function_list function_def {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = $2;
        free($1->children);
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
    }
;

function_def:
    DEF IDENTIFIER LPAREN param_list RPAREN return_type_opt COLON block {
        ASTNode* name = create_node($2, 0);
        ASTNode* return_type = $6 ? create_node($6, 0) : create_node("void", 0);
        ASTNode* func = create_node("FUNC", 4, name, $4, return_type, $8);
        $$ = func;
        free($2);
        if ($6) free($6);
    }
;


return_type_opt:
    /* empty */      { $$ = NULL; }
  | ARROW TYPE       { $$ = $2; }
;

param_list:
    /* empty */ { $$ = create_node("PARAMS", 0); }
  | param_group_list { $$ = $1; }
;

param_group_list:
    param_group { $$ = $1; }
  | param_group_list SEMICOLON param_group {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + $3->child_count));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        for (int i = 0; i < $3->child_count; i++) new_children[$1->child_count + i] = $3->children[i];
        free($1->children); free($3->children);
        $1->children = new_children;
        $1->child_count += $3->child_count;
        $$ = $1;
    }
;

param_group:
    TYPE param_decl_list {
        for (int i = 0; i < $2->child_count; i++) {
            ASTNode* param = $2->children[i];
            if (strcmp(param->children[0]->name, "DUMMY") == 0) {
                free(param->children[0]);
                param->children[0] = create_node($1, 0);
            }
        }
        $$ = $2;
        free($1);
    }
  | param_decl_list {
        $$ = $1;  // for id: type = value style that sets its own type
    }
;

param_decl_list:
    param_decl { $$ = create_node("PARAMS", 1, $1); }
  | param_decl_list COMMA param_decl {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = $3;
        free($1->children);
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
    }
;

param_decl:
    // TYPE-first style
    IDENTIFIER {
        ASTNode* id = create_node($1, 0);
        $$ = create_node("PARAM", 2, create_node("DUMMY", 0), id);
        free($1);
    }
  | IDENTIFIER COLON expression {
        ASTNode* id = create_node($1, 0);
        $$ = create_node("PARAM_DEFAULT", 3, create_node("DUMMY", 0), id, $3);
        free($1);
    }
    // ID-first style
  | IDENTIFIER COLON TYPE {
        ASTNode* type = create_node($3, 0);
        ASTNode* id = create_node($1, 0);
        $$ = create_node("PARAM", 2, type, id);
        free($1); free($3);
    }
  | IDENTIFIER COLON TYPE ASSIGN expression {
        ASTNode* type = create_node($3, 0);
        ASTNode* id = create_node($1, 0);
        $$ = create_node("PARAM_DEFAULT", 3, type, id, $5);
        free($1); free($3);
    }
;






block:
    LBRACE statements RBRACE {
        $$ = create_node("BLOCK", 1, $2);
    }
;

statements:
    statement {
        $$ = create_node("STATEMENTS", 1, $1);
    }
  | statements statement {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = $2;
        free($1->children);
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
    }
;

statement:
      declaration SEMICOLON { $$ = $1; }
    | assignment SEMICOLON { $$ = $1; }
    | return_statement SEMICOLON { $$ = $1; }
    | expression SEMICOLON { $$ = $1; }
    | if_stmt
    | while_stmt
    | PASS SEMICOLON { $$ = create_node("PASS", 0); }
    | block

;

declaration:
    TYPE IDENTIFIER {
        $$ = create_node("DECL", 2, create_node($1, 0), create_node($2, 0));
        free($1);
        free($2);
    }
  | TYPE IDENTIFIER ASSIGN expression {
        ASTNode* type = create_node($1, 0);
        ASTNode* id = create_node($2, 0);
        $$ = create_node("DECL_ASSIGN", 3, type, id, $4);
        free($1);
        free($2);
    }
;




assignment:
    IDENTIFIER ASSIGN expression {
        $$ = create_node("ASSIGN", 2, create_node($1, 0), $3);
        free($1);
    }
;

return_statement:
    RETURN expression {
        $$ = create_node("RETURN", 1, $2);
    }
  | RETURN {
        $$ = create_node("RETURN", 0);  // no children
    }
;


expression:
    NUMBER {
        char buf[16];
        sprintf(buf, "%d", $1);
        $$ = create_node(buf, 0);
    }
  | FLOAT_LITERAL {
        char buf[32];
        sprintf(buf, "%f", $1);
        $$ = create_node(buf, 0);
    }
  | BOOL {
        $$ = create_node($1 ? "True" : "False", 0);
    }
  | STRING_LITERAL {
        $$ = create_node($1, 0);
        free($1);
    }
  | IDENTIFIER {
        $$ = create_node($1, 0);
        free($1);
    }
  | IDENTIFIER LPAREN arg_list RPAREN {
        ASTNode* name = create_node($1, 0);
        $$ = create_node("CALL", 2, name, $3);
        free($1);
    }
  | expression PLUS expression {
        $$ = create_node("+", 2, $1, $3);
    }
  | expression MINUS expression {
        $$ = create_node("-", 2, $1, $3);
    }
  | expression MULT expression {
        $$ = create_node("*", 2, $1, $3);
    }
  | expression DIV expression {
        $$ = create_node("/", 2, $1, $3);
    }
  | expression EQ expression {
        $$ = create_node("==", 2, $1, $3);
    }
  | expression NEQ expression {
        $$ = create_node("!=", 2, $1, $3);
    }
  | expression GT expression {
        $$ = create_node(">", 2, $1, $3);
    }
  | expression GE expression {
        $$ = create_node(">=", 2, $1, $3);
    }
  | expression LT expression {
        $$ = create_node("<", 2, $1, $3);
    }
  | expression LE expression {
        $$ = create_node("<=", 2, $1, $3);
    }
  | expression AND expression {
        $$ = create_node("and", 2, $1, $3);
    }
  | expression OR expression {
        $$ = create_node("or", 2, $1, $3);
    }
  | NOT expression {
        $$ = create_node("not", 1, $2);
    }
  | LPAREN expression RPAREN {
        $$ = $2;
    }
  | expression LBRACK expression RBRACK {
        $$ = create_node("INDEX", 2, $1, $3);
    }
  | expression LBRACK expression COLON expression RBRACK {
        $$ = create_node("SLICE", 3, $1, $3, $5);
    }
  | expression LBRACK COLON expression RBRACK {
        ASTNode* start = create_node("START", 0);
        $$ = create_node("SLICE", 3, $1, start, $4);
    }
  | expression LBRACK expression COLON RBRACK {
        ASTNode* end = create_node("END", 0);
        $$ = create_node("SLICE", 3, $1, $3, end);
    }
  | expression POW expression {
        $$ = create_node("**", 2, $1, $3);
    }
  | expression IS expression {
        $$ = create_node("is", 2, $1, $3);
    }

;

arg_list:
    /* empty */ { $$ = create_node("ARGS", 0); }
  | expression { $$ = create_node("ARGS", 1, $1); }
  | arg_list COMMA expression {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = $3;
        free($1->children);
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
    }
;

if_stmt:
    IF expression COLON block elif_list else_opt {
        $$ = create_node("IF", 3, $2, $4, $5 ? $5 : create_node("PASS", 0));
    }
  | IF expression COLON statement elif_list else_opt {
        ASTNode* block = create_node("BLOCK", 1, create_node("STATEMENTS", 1, $4));
        $$ = create_node("IF", 3, $2, block, $5 ? $5 : create_node("PASS", 0));
    }
;


elif_list:
    /* empty */ { $$ = NULL; }
  | elif_list ELIF expression COLON block {
        ASTNode* elif = create_node("ELIF", 2, $3, $5);
        if ($1 == NULL)
            $$ = create_node("ELIFS", 1, elif);
        else {
            ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
            for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
            new_children[$1->child_count] = elif;
            free($1->children);
            $1->children = new_children;
            $1->child_count++;
            $$ = $1;
        }
    }
;

else_opt:
    /* empty */ { $$ = NULL; }
  | ELSE COLON statement {
        // If it's already a block, use it directly
        if (strcmp($3->name, "BLOCK") == 0) {
            $$ = $3;
        } else {
            $$ = create_node("BLOCK", 1, create_node("STATEMENTS", 1, $3));
        }
    }
;




while_stmt:
    WHILE expression COLON block {
        $$ = create_node("WHILE", 2, $2, $4);
    }
;

%%

int yyerror(const char *s) {
    extern int yylineno;
    extern char *yytext;
    fprintf(stderr, "Syntax error at line %d: unexpected token '%s'\n", yylineno, yytext);
    return 1;
}

int main() {
    if (yyparse() == 0 && root != NULL) {
        check_semantics(root);   // כאן נקרא את הסמנטיקה
        print_ast(root, 0);
        free_ast(root);
    }
    return 0;
}