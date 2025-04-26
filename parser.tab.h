/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "parser.y"

    #include "ast.h"

#line 53 "parser.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    BOOL = 259,                    /* BOOL  */
    FLOAT_LITERAL = 260,           /* FLOAT_LITERAL  */
    IDENTIFIER = 261,              /* IDENTIFIER  */
    STRING_LITERAL = 262,          /* STRING_LITERAL  */
    INT = 263,                     /* INT  */
    FLOAT = 264,                   /* FLOAT  */
    DOUBLE = 265,                  /* DOUBLE  */
    STRING = 266,                  /* STRING  */
    CHAR = 267,                    /* CHAR  */
    RETURN = 268,                  /* RETURN  */
    ASSIGN = 269,                  /* ASSIGN  */
    PLUS = 270,                    /* PLUS  */
    MINUS = 271,                   /* MINUS  */
    MULT = 272,                    /* MULT  */
    DIV = 273,                     /* DIV  */
    SEMICOLON = 274,               /* SEMICOLON  */
    LPAREN = 275,                  /* LPAREN  */
    RPAREN = 276,                  /* RPAREN  */
    LBRACE = 277,                  /* LBRACE  */
    RBRACE = 278,                  /* RBRACE  */
    LBRACK = 279,                  /* LBRACK  */
    RBRACK = 280,                  /* RBRACK  */
    IF = 281,                      /* IF  */
    ELIF = 282,                    /* ELIF  */
    ELSE = 283,                    /* ELSE  */
    COLON = 284,                   /* COLON  */
    PASS = 285,                    /* PASS  */
    WHILE = 286,                   /* WHILE  */
    DEF = 287,                     /* DEF  */
    COMMA = 288,                   /* COMMA  */
    ARROW = 289,                   /* ARROW  */
    EQ = 290,                      /* EQ  */
    NEQ = 291,                     /* NEQ  */
    GT = 292,                      /* GT  */
    LT = 293,                      /* LT  */
    GE = 294,                      /* GE  */
    LE = 295,                      /* LE  */
    AND = 296,                     /* AND  */
    OR = 297,                      /* OR  */
    NOT = 298,                     /* NOT  */
    POW = 299,                     /* POW  */
    UMINUS = 300                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

    int num;
    float fnum;
    char* id;
    ASTNode* node;

#line 122 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
