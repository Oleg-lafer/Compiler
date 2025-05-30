%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
extern int yylineno;
%}

int yylineno = 1;
%%

"def"           { return DEF; }
"int"           { yylval.id = strdup("int"); return TYPE; }
"float"         { yylval.id = strdup("float"); return TYPE; }
"double"        { yylval.id = strdup("double"); return TYPE; }
"string"        { yylval.id = strdup("string"); return TYPE; }
"char"          { yylval.id = strdup("char"); return TYPE; }
"bool"          { yylval.id = strdup("bool"); return TYPE; }

"return"        { return RETURN; }
"if"            { return IF; }
"elif"          { return ELIF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"pass"          { return PASS; }
"is"            { return IS; }

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
\'([^\'\\\n])*\'     { yylval.id = strdup(yytext); return STRING_LITERAL; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.id = strdup(yytext); return IDENTIFIER; }

[ \t\r]+         ;
\n                { yylineno++; }
\#[^\n]*    ;  // skip single-line comments starting with #

.                 { printf("Unknown char: %s\n", yytext); return 0; }

%%
