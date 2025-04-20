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
    char* id;
    ASTNode* node;
}

%token <num> NUMBER
%token <id> IDENTIFIER
%token INT RETURN ASSIGN PLUS SEMICOLON

%type <node> program statement_list statement declaration assignment return_statement expression

%%

program:
    statement_list { root = $1; $$ = $1; }
;

statement_list:
    statement { $$ = create_node("STATEMENTS", 1, $1); }
    | statement_list statement {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ($1->child_count + 1));
        for (int i = 0; i < $1->child_count; i++) new_children[i] = $1->children[i];
        new_children[$1->child_count] = $2;
        $1->children = new_children;
        $1->child_count++;
        $$ = $1;
    }
;

statement:
    declaration SEMICOLON { $$ = $1; }
    | assignment SEMICOLON { $$ = $1; }
    | return_statement SEMICOLON { $$ = $1; }
;

declaration:
    INT IDENTIFIER {
        ASTNode* id_node = create_node($2, 0);
        $$ = create_node("DECL", 1, id_node);
        free($2);
    }
;

assignment:
    IDENTIFIER ASSIGN expression {
        ASTNode* id_node = create_node($1, 0);
        $$ = create_node("ASSIGN", 2, id_node, $3);
        free($1);
    }
;

return_statement:
    RETURN IDENTIFIER {
        ASTNode* id_node = create_node($2, 0);
        $$ = create_node("RETURN", 1, id_node);
        free($2);
    }
;

expression:
    NUMBER {
        char buf[16];
        sprintf(buf, "%d", $1);
        $$ = create_node(buf, 0);
    }
    | expression PLUS expression {
        $$ = create_node("+", 2, $1, $3);
    }
;

%%

int yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
    return 1;
}

int main() {
    if (yyparse() == 0 && root != NULL) {
        print_ast(root, 0);
        free_ast(root);
    }
    return 0;
}
