%{
#include <stdio.h>
%}

%%

"if"        { printf("KEYWORD: if\n"); }
"elif"      { printf("KEYWORD: elif\n"); }
"else"      { printf("KEYWORD: else\n"); }
"while"     { printf("KEYWORD: while\n"); }
"return"    { printf("KEYWORD: return\n"); }
"and"       { printf("KEYWORD: and\n"); }
"or"        { printf("KEYWORD: or\n"); }
"not"       { printf("KEYWORD: not\n"); }
"pass"      { printf("KEYWORD: pass\n"); }
"def"       { printf("KEYWORD: def\n"); }
"bool"      { printf("KEYWORD: bool\n"); }
"int"       { printf("KEYWORD: int\n"); }
"string"    { printf("KEYWORD: string\n"); }

"=="        { printf("OPERATOR: ==\n"); }
">="        { printf("OPERATOR: >=\n"); }
"<="        { printf("OPERATOR: <=\n"); }
"!="        { printf("OPERATOR: !=\n"); }
">"         { printf("OPERATOR: >\n"); }
"<"         { printf("OPERATOR: <\n"); }
"**"        { printf("OPERATOR: **\n"); }
"+"         { printf("OPERATOR: +\n"); }
"-"         { printf("OPERATOR: -\n"); }
"*"         { printf("OPERATOR: *\n"); }
"/"         { printf("OPERATOR: /\n"); }
"="         { printf("ASSIGN: =\n"); }

";"         { printf("SEMICOLON: ;\n"); }
","         { printf("COMMA: ,\n"); }
"{"         { printf("LBRACE: {\n"); }
"}"         { printf("RBRACE: }\n"); }
"("         { printf("LPAREN: (\n"); }
")"         { printf("RPAREN: )\n"); }
"->"        { printf("ARROW: ->\n"); }
":"         { printf("COLON: :\n"); }
"["         { printf("LBRACKET: [\n"); }
"]"         { printf("RBRACKET: ]\n"); }

[0-9]+\.[0-9]+       { printf("FLOAT_LITERAL: %s\n", yytext); }
[0-9]+               { printf("INT_LITERAL: %s\n", yytext); }
"True"|"False"       { printf("BOOL_LITERAL: %s\n", yytext); }
\"[^\n\"]*\"         { printf("STRING_LITERAL: %s\n", yytext); }
\'[^\n\']*\'         { printf("STRING_LITERAL: %s\n", yytext); }

[_a-zA-Z][_a-zA-Z0-9]*   { printf("IDENTIFIER: %s\n", yytext); }

"#"[^\n]*           { /* תגובה – התעלם */ }
[ \t\r\n]+          { /* התעלם מרווחים */ }

.                   { printf("UNKNOWN CHARACTER: %s\n", yytext); }

%%

int main(int argc, char **argv) {
    yylex();
    return 0;
}
