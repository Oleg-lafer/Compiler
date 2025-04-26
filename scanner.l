%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
extern int yylineno;
%}

int yylineno = 1;
%%

"def"           { return DEF; }
"int"           { return INT; }
"float"         { return FLOAT; }
"double"        { return DOUBLE; }
"string"        { return STRING; }
"char"          { return CHAR; }
"return"        { return RETURN; }
"if"            { return IF; }
"elif"          { return ELIF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"pass"          { return PASS; }

"=="            { return EQ; }
"!="            { return NEQ; }
">="            { return GE; }
"<="            { return LE; }
">"             { return GT; }
"<"             { return LT; }

"and"           { return AND; }
"or"            { return OR; }
"not"           { return NOT; }

"True"          { yylval.num = 1; return BOOL; }
"False"         { yylval.num = 0; return BOOL; }

"="             { return ASSIGN; }
"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULT; }
"/"             { return DIV; }
"**"            { return POW; }

"("             { return LPAREN; }
")"             { return RPAREN; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
":"             { return COLON; }
";"             { return SEMICOLON; }
","             { return COMMA; }
"->"            { return ARROW; }
"["             { return LBRACK; }
"]"             { return RBRACK; }

[0-9]+\.[0-9]+   { yylval.fnum = atof(yytext); return FLOAT_LITERAL; }
[0-9]+           { yylval.num = atoi(yytext); return NUMBER; }

\"([^\"\\]|\\.)*\"   { yylval.id = strdup(yytext); return STRING_LITERAL; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.id = strdup(yytext); return IDENTIFIER; }

[ \t\r]+         ;
\n                { yylineno++; }

.                 { printf("Unknown char: %s\n", yytext); return 0; }

%%
