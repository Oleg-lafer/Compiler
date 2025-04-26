%code requires {
    #include "ast.h"
}

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

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
%token INT FLOAT DOUBLE STRING CHAR
%token RETURN ASSIGN PLUS MINUS MULT DIV SEMICOLON
%token LPAREN RPAREN
%token LBRACE RBRACE
%token LBRACK RBRACK
%token IF ELIF ELSE COLON PASS WHILE DEF COMMA ARROW
%token EQ NEQ GT LT GE LE
%token AND OR NOT
%token POW

%type <node> program function_list function_def param_list param_decl_list arg_list block statements statement declaration assignment return_statement expression if_stmt elif_list else_opt while_stmt

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
    DEF IDENTIFIER LPAREN param_list RPAREN COLON block {
        ASTNode* name = create_node($2, 0);
        $$ = create_node("FUNC", 3, name, $4, $7);
        free($2);
    }
;

param_list:
    /* empty */ { $$ = create_node("PARAMS", 0); }
  | param_decl_list { $$ = $1; }
;

param_decl_list:
    IDENTIFIER {
        $$ = create_node("PARAMS", 1, create_node($1, 0));
        free($1);
    }
  | param_decl_list COMMA IDENTIFIER {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = create_node($3, 0);
        free($1->children);
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
        free($3);
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
;

declaration:
      INT IDENTIFIER {
        $$ = create_node("DECL", 2, create_node("int", 0), create_node($2, 0));
        free($2);
    }
    | FLOAT IDENTIFIER {
        $$ = create_node("DECL", 2, create_node("float", 0), create_node($2, 0));
        free($2);
    }
    | DOUBLE IDENTIFIER {
        $$ = create_node("DECL", 2, create_node("double", 0), create_node($2, 0));
        free($2);
    }
    | STRING IDENTIFIER {
        $$ = create_node("DECL", 2, create_node("string", 0), create_node($2, 0));
        free($2);
    }
    | CHAR IDENTIFIER {
        $$ = create_node("DECL", 2, create_node("char", 0), create_node($2, 0));
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
  | ELSE COLON block {
        $$ = $3;
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
        print_ast(root, 0);
        free_ast(root);
    }
    return 0;
}
