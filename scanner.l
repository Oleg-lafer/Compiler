%{
#include "parser.tab.h"
#include <stdlib.h>
#include <string.h>
%}

%%

"int"       { return INT; }
"return"    { return RETURN; }

[0-9]+      { yylval.num = atoi(yytext); return NUMBER; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.id = strdup(yytext); return IDENTIFIER; }

"="         { return ASSIGN; }
"+"         { return PLUS; }
";"         { return SEMICOLON; }

[ \t\r\n]+  ; // דילוג על רווחים

.           { return yytext[0]; }

%%
