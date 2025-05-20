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
    TYPE = 263,                    /* TYPE  */
    IS = 264,                      /* IS  */
    RETURN = 265,                  /* RETURN  */
    ASSIGN = 266,                  /* ASSIGN  */
    PLUS = 267,                    /* PLUS  */
    MINUS = 268,                   /* MINUS  */
    MULT = 269,                    /* MULT  */
    DIV = 270,                     /* DIV  */
    SEMICOLON = 271,               /* SEMICOLON  */
    LPAREN = 272,                  /* LPAREN  */
    RPAREN = 273,                  /* RPAREN  */
    LBRACE = 274,                  /* LBRACE  */
    RBRACE = 275,                  /* RBRACE  */
    LBRACK = 276,                  /* LBRACK  */
    RBRACK = 277,                  /* RBRACK  */
    IF = 278,                      /* IF  */
    ELIF = 279,                    /* ELIF  */
    ELSE = 280,                    /* ELSE  */
    COLON = 281,                   /* COLON  */
    PASS = 282,                    /* PASS  */
    WHILE = 283,                   /* WHILE  */
    DEF = 284,                     /* DEF  */
    COMMA = 285,                   /* COMMA  */
    ARROW = 286,                   /* ARROW  */
    EQ = 287,                      /* EQ  */
    NEQ = 288,                     /* NEQ  */
    GT = 289,                      /* GT  */
    LT = 290,                      /* LT  */
    GE = 291,                      /* GE  */
    LE = 292,                      /* LE  */
    AND = 293,                     /* AND  */
    OR = 294,                      /* OR  */
    NOT = 295,                     /* NOT  */
    POW = 296,                     /* POW  */
    UMINUS = 297                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "parser.y"

    int num;
    float fnum;
    char* id;
    ASTNode* node;

#line 119 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
