%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yyerror(const char *s);
%}

%union {
    int num;
    char* id;
}

%token <num> NUMBER
%token <id> IDENTIFIER

%token INT RETURN ASSIGN PLUS SEMICOLON

%type <num> expression

%%

program:
    statement_list
;

statement_list:
    statement
    | statement_list statement
;

statement:
    declaration SEMICOLON
    | assignment SEMICOLON
    | return_statement SEMICOLON
;

declaration:
    INT IDENTIFIER { printf("(int %s)\n", $2); free($2); }
;

assignment:
    IDENTIFIER ASSIGN expression { printf("(%s = %d)\n", $1, $3); free($1); }
;

return_statement:
    RETURN IDENTIFIER { printf("(return %s)\n", $2); free($2); }
;

expression:
    NUMBER { $$ = $1; }
    | expression PLUS expression { $$ = $1 + $3; }
;

%%

int yyerror(const char *s) {
    fprintf(stderr, "Parser error: %s\n", s);
    return 1;
}

int main() {
    return yyparse();
}
