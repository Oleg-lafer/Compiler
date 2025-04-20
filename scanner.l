%{
#include "parser.tab.h"
#include "ast.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
%}

%%
"int"           { return INT; }
"return"        { return RETURN; }
[0-9]+          { yylval.num = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.id = strdup(yytext); return IDENTIFIER; }
"="             { return ASSIGN; }
"+"             { return PLUS; }
";"             { return SEMICOLON; }
[ \t\r\n]+      { /* skip whitespace */ }
.               { printf("Unknown character: %s\n", yytext); return 0; }
%%

int yywrap() {
    return 1;
}
