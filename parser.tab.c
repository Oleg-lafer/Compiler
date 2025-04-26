/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 5 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

ASTNode* root = NULL;
int yylex();
int yyerror(const char *s);

#line 82 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_BOOL = 4,                       /* BOOL  */
  YYSYMBOL_FLOAT_LITERAL = 5,              /* FLOAT_LITERAL  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 7,             /* STRING_LITERAL  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_FLOAT = 9,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 10,                    /* DOUBLE  */
  YYSYMBOL_STRING = 11,                    /* STRING  */
  YYSYMBOL_CHAR = 12,                      /* CHAR  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_MULT = 17,                      /* MULT  */
  YYSYMBOL_DIV = 18,                       /* DIV  */
  YYSYMBOL_SEMICOLON = 19,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 20,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 21,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 22,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 23,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 24,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 25,                    /* RBRACK  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_ELIF = 27,                      /* ELIF  */
  YYSYMBOL_ELSE = 28,                      /* ELSE  */
  YYSYMBOL_COLON = 29,                     /* COLON  */
  YYSYMBOL_PASS = 30,                      /* PASS  */
  YYSYMBOL_WHILE = 31,                     /* WHILE  */
  YYSYMBOL_DEF = 32,                       /* DEF  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_ARROW = 34,                     /* ARROW  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_NEQ = 36,                       /* NEQ  */
  YYSYMBOL_GT = 37,                        /* GT  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GE = 39,                        /* GE  */
  YYSYMBOL_LE = 40,                        /* LE  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_POW = 44,                       /* POW  */
  YYSYMBOL_UMINUS = 45,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_function_list = 48,             /* function_list  */
  YYSYMBOL_function_def = 49,              /* function_def  */
  YYSYMBOL_param_list = 50,                /* param_list  */
  YYSYMBOL_param_decl_list = 51,           /* param_decl_list  */
  YYSYMBOL_block = 52,                     /* block  */
  YYSYMBOL_statements = 53,                /* statements  */
  YYSYMBOL_statement = 54,                 /* statement  */
  YYSYMBOL_declaration = 55,               /* declaration  */
  YYSYMBOL_assignment = 56,                /* assignment  */
  YYSYMBOL_return_statement = 57,          /* return_statement  */
  YYSYMBOL_expression = 58,                /* expression  */
  YYSYMBOL_arg_list = 59,                  /* arg_list  */
  YYSYMBOL_if_stmt = 60,                   /* if_stmt  */
  YYSYMBOL_elif_list = 61,                 /* elif_list  */
  YYSYMBOL_else_opt = 62,                  /* else_opt  */
  YYSYMBOL_while_stmt = 63                 /* while_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   396

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    50,    50,    57,    58,    70,    78,    79,    83,    87,
     100,   106,   109,   121,   122,   123,   124,   125,   126,   130,
     134,   138,   142,   146,   153,   160,   166,   171,   176,   179,
     183,   187,   192,   195,   198,   201,   204,   207,   210,   213,
     216,   219,   222,   225,   228,   231,   234,   237,   240,   244,
     248,   255,   256,   257,   269,   275,   276,   293,   294,   300
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "BOOL",
  "FLOAT_LITERAL", "IDENTIFIER", "STRING_LITERAL", "INT", "FLOAT",
  "DOUBLE", "STRING", "CHAR", "RETURN", "ASSIGN", "PLUS", "MINUS", "MULT",
  "DIV", "SEMICOLON", "LPAREN", "RPAREN", "LBRACE", "RBRACE", "LBRACK",
  "RBRACK", "IF", "ELIF", "ELSE", "COLON", "PASS", "WHILE", "DEF", "COMMA",
  "ARROW", "EQ", "NEQ", "GT", "LT", "GE", "LE", "AND", "OR", "NOT", "POW",
  "UMINUS", "$accept", "program", "function_list", "function_def",
  "param_list", "param_decl_list", "block", "statements", "statement",
  "declaration", "assignment", "return_statement", "expression",
  "arg_list", "if_stmt", "elif_list", "else_opt", "while_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,    15,    22,   -14,   -64,     6,   -64,   -64,    21,   -64,
       8,     2,     1,    41,    26,   -64,    83,   -64,   -64,   -64,
     -64,    -3,   -64,    45,    46,    47,    48,    49,   101,   101,
     101,   101,   101,    54,   -64,    50,    51,    52,   142,   -64,
     -64,   101,   101,   -64,   -64,   -64,   -64,   -64,    55,   312,
     152,   182,   212,   352,   -64,   -64,   -64,   -64,   -64,   101,
     101,   101,   101,   -64,    95,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   312,   312,    -9,   -64,    26,    26,
      99,    99,   -19,   -19,   101,   112,   247,   247,   247,   247,
     247,   247,   352,   342,    57,   -64,   101,   -64,   -64,   242,
     -64,     3,   312,    -8,   -64,   -64,   272,   101,    43,   -64,
     -64,   302,    26,    26,   -64,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     6,     8,
       0,     7,     0,     0,     0,     9,     0,     5,    26,    28,
      27,    30,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,    17,
      18,     0,    51,    19,    20,    21,    22,    23,    30,    25,
       0,     0,     0,    44,    10,    12,    13,    14,    15,     0,
       0,     0,     0,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    24,    52,     0,    45,     0,     0,
      32,    33,    34,    35,     0,     0,    36,    37,    38,    40,
      39,    41,    42,    43,    50,    31,     0,    55,    59,     0,
      46,     0,    53,    57,    48,    49,     0,     0,     0,    54,
      47,     0,     0,     0,    58,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,   -64,    73,   -64,   -64,   -63,   -64,    77,   -64,
     -64,   -64,   -28,   -64,   -64,   -64,   -64,   -64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    10,    11,    17,    33,    34,    35,
      36,    37,    38,    76,    39,   103,   109,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      49,    50,    51,    52,    53,    64,    18,    19,    20,    48,
      22,    41,    95,    74,    75,    97,    98,    42,     1,   107,
     108,     5,     6,    29,    96,    73,     8,     9,   105,    12,
      14,    80,    81,    82,    83,    13,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    32,    15,    16,   114,
     115,    43,    44,    45,    46,    47,    99,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   102,    56,
      57,    58,   112,   106,    29,    42,     7,    54,     0,   111,
      30,    64,     0,     0,     0,    31,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    32,    18,    19,
      20,    48,    22,    29,    18,    19,    20,    48,    22,    30,
      55,     0,     0,     0,    31,    29,    61,    62,     0,     0,
       0,    29,     0,    64,    84,     0,    32,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,   100,    32,     0,
       0,   101,     0,    73,    32,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,    63,     0,     0,     0,     0,    64,    59,    60,    61,
      62,     0,     0,    77,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,     0,     0,     0,
       0,    78,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,     0,     0,     0,
       0,    79,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,     0,    59,    60,    61,    62,    64,   104,     0,     0,
       0,    64,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,    73,     0,     0,     0,     0,    64,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,    59,    60,    61,
      62,   113,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,     0,    73,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    73
};

static const yytype_int8 yycheck[] =
{
      28,    29,    30,    31,    32,    24,     3,     4,     5,     6,
       7,    14,    21,    41,    42,    78,    79,    20,    32,    27,
      28,     6,     0,    20,    33,    44,    20,     6,    25,    21,
      29,    59,    60,    61,    62,    33,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    43,     6,    22,   112,
     113,     6,     6,     6,     6,     6,    84,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    96,    19,
      19,    19,    29,   101,    20,    20,     3,    23,    -1,   107,
      26,    24,    -1,    -1,    -1,    31,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    43,     3,     4,
       5,     6,     7,    20,     3,     4,     5,     6,     7,    26,
      33,    -1,    -1,    -1,    31,    20,    17,    18,    -1,    -1,
      -1,    20,    -1,    24,    29,    -1,    43,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    43,    -1,
      -1,    29,    -1,    44,    43,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    24,    15,    16,    17,
      18,    -1,    -1,    21,    -1,    -1,    24,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    -1,    15,    16,    17,    18,    24,    25,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    44,    -1,    -1,    -1,    -1,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    15,    16,    17,
      18,    29,    -1,    -1,    -1,    -1,    24,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    15,    16,    17,
      18,    -1,    -1,    -1,    -1,    -1,    24,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    47,    48,    49,     6,     0,    49,    20,     6,
      50,    51,    21,    33,    29,     6,    22,    52,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    20,
      26,    31,    43,    53,    54,    55,    56,    57,    58,    60,
      63,    14,    20,     6,     6,     6,     6,     6,     6,    58,
      58,    58,    58,    58,    23,    54,    19,    19,    19,    15,
      16,    17,    18,    19,    24,    35,    36,    37,    38,    39,
      40,    41,    42,    44,    58,    58,    59,    21,    29,    29,
      58,    58,    58,    58,    29,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    21,    33,    52,    52,    58,
      25,    29,    58,    61,    25,    25,    58,    27,    28,    62,
      25,    58,    29,    29,    52,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    50,    50,    51,    51,
      52,    53,    53,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    56,    57,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    60,    61,    61,    62,    62,    63
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     7,     0,     1,     1,     3,
       3,     1,     2,     2,     2,     2,     2,     1,     1,     2,
       2,     2,     2,     2,     3,     2,     1,     1,     1,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     4,     6,     5,     5,
       3,     0,     1,     3,     6,     0,     5,     0,     3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: function_list  */
#line 50 "parser.y"
                  {
        root = (yyvsp[0].node);
        (yyval.node) = (yyvsp[0].node);
    }
#line 1262 "parser.tab.c"
    break;

  case 3: /* function_list: function_def  */
#line 57 "parser.y"
                 { (yyval.node) = create_node("FUNCS", 1, (yyvsp[0].node)); }
#line 1268 "parser.tab.c"
    break;

  case 4: /* function_list: function_list function_def  */
#line 58 "parser.y"
                               {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-1].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-1].node)->child_count; i++) new_children[i] = (yyvsp[-1].node)->children[i];
        new_children[(yyvsp[-1].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-1].node)->children);
        (yyvsp[-1].node)->children = new_children;
        (yyvsp[-1].node)->child_count++;
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1282 "parser.tab.c"
    break;

  case 5: /* function_def: DEF IDENTIFIER LPAREN param_list RPAREN COLON block  */
#line 70 "parser.y"
                                                        {
        ASTNode* name = create_node((yyvsp[-5].id), 0);
        (yyval.node) = create_node("FUNC", 3, name, (yyvsp[-3].node), (yyvsp[0].node));
        free((yyvsp[-5].id));
    }
#line 1292 "parser.tab.c"
    break;

  case 6: /* param_list: %empty  */
#line 78 "parser.y"
                { (yyval.node) = create_node("PARAMS", 0); }
#line 1298 "parser.tab.c"
    break;

  case 7: /* param_list: param_decl_list  */
#line 79 "parser.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 1304 "parser.tab.c"
    break;

  case 8: /* param_decl_list: IDENTIFIER  */
#line 83 "parser.y"
               {
        (yyval.node) = create_node("PARAMS", 1, create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1313 "parser.tab.c"
    break;

  case 9: /* param_decl_list: param_decl_list COMMA IDENTIFIER  */
#line 87 "parser.y"
                                     {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-2].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-2].node)->child_count; i++) new_children[i] = (yyvsp[-2].node)->children[i];
        new_children[(yyvsp[-2].node)->child_count] = create_node((yyvsp[0].id), 0);
        free((yyvsp[-2].node)->children);
        (yyvsp[-2].node)->children = new_children;
        (yyvsp[-2].node)->child_count++;
        (yyval.node) = (yyvsp[-2].node);
        free((yyvsp[0].id));
    }
#line 1328 "parser.tab.c"
    break;

  case 10: /* block: LBRACE statements RBRACE  */
#line 100 "parser.y"
                             {
        (yyval.node) = create_node("BLOCK", 1, (yyvsp[-1].node));
    }
#line 1336 "parser.tab.c"
    break;

  case 11: /* statements: statement  */
#line 106 "parser.y"
              {
        (yyval.node) = create_node("STATEMENTS", 1, (yyvsp[0].node));
    }
#line 1344 "parser.tab.c"
    break;

  case 12: /* statements: statements statement  */
#line 109 "parser.y"
                         {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-1].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-1].node)->child_count; i++) new_children[i] = (yyvsp[-1].node)->children[i];
        new_children[(yyvsp[-1].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-1].node)->children);
        (yyvsp[-1].node)->children = new_children;
        (yyvsp[-1].node)->child_count++;
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1358 "parser.tab.c"
    break;

  case 13: /* statement: declaration SEMICOLON  */
#line 121 "parser.y"
                            { (yyval.node) = (yyvsp[-1].node); }
#line 1364 "parser.tab.c"
    break;

  case 14: /* statement: assignment SEMICOLON  */
#line 122 "parser.y"
                           { (yyval.node) = (yyvsp[-1].node); }
#line 1370 "parser.tab.c"
    break;

  case 15: /* statement: return_statement SEMICOLON  */
#line 123 "parser.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 1376 "parser.tab.c"
    break;

  case 16: /* statement: expression SEMICOLON  */
#line 124 "parser.y"
                           { (yyval.node) = (yyvsp[-1].node); }
#line 1382 "parser.tab.c"
    break;

  case 19: /* declaration: INT IDENTIFIER  */
#line 130 "parser.y"
                     {
        (yyval.node) = create_node("DECL", 2, create_node("int", 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1391 "parser.tab.c"
    break;

  case 20: /* declaration: FLOAT IDENTIFIER  */
#line 134 "parser.y"
                       {
        (yyval.node) = create_node("DECL", 2, create_node("float", 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1400 "parser.tab.c"
    break;

  case 21: /* declaration: DOUBLE IDENTIFIER  */
#line 138 "parser.y"
                        {
        (yyval.node) = create_node("DECL", 2, create_node("double", 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1409 "parser.tab.c"
    break;

  case 22: /* declaration: STRING IDENTIFIER  */
#line 142 "parser.y"
                        {
        (yyval.node) = create_node("DECL", 2, create_node("string", 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1418 "parser.tab.c"
    break;

  case 23: /* declaration: CHAR IDENTIFIER  */
#line 146 "parser.y"
                      {
        (yyval.node) = create_node("DECL", 2, create_node("char", 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[0].id));
    }
#line 1427 "parser.tab.c"
    break;

  case 24: /* assignment: IDENTIFIER ASSIGN expression  */
#line 153 "parser.y"
                                 {
        (yyval.node) = create_node("ASSIGN", 2, create_node((yyvsp[-2].id), 0), (yyvsp[0].node));
        free((yyvsp[-2].id));
    }
#line 1436 "parser.tab.c"
    break;

  case 25: /* return_statement: RETURN expression  */
#line 160 "parser.y"
                      {
        (yyval.node) = create_node("RETURN", 1, (yyvsp[0].node));
    }
#line 1444 "parser.tab.c"
    break;

  case 26: /* expression: NUMBER  */
#line 166 "parser.y"
           {
        char buf[16];
        sprintf(buf, "%d", (yyvsp[0].num));
        (yyval.node) = create_node(buf, 0);
    }
#line 1454 "parser.tab.c"
    break;

  case 27: /* expression: FLOAT_LITERAL  */
#line 171 "parser.y"
                  {
        char buf[32];
        sprintf(buf, "%f", (yyvsp[0].fnum));
        (yyval.node) = create_node(buf, 0);
    }
#line 1464 "parser.tab.c"
    break;

  case 28: /* expression: BOOL  */
#line 176 "parser.y"
         {
        (yyval.node) = create_node((yyvsp[0].num) ? "True" : "False", 0);
    }
#line 1472 "parser.tab.c"
    break;

  case 29: /* expression: STRING_LITERAL  */
#line 179 "parser.y"
                   {
        (yyval.node) = create_node((yyvsp[0].id), 0);
        free((yyvsp[0].id));
    }
#line 1481 "parser.tab.c"
    break;

  case 30: /* expression: IDENTIFIER  */
#line 183 "parser.y"
               {
        (yyval.node) = create_node((yyvsp[0].id), 0);
        free((yyvsp[0].id));
    }
#line 1490 "parser.tab.c"
    break;

  case 31: /* expression: IDENTIFIER LPAREN arg_list RPAREN  */
#line 187 "parser.y"
                                      {
        ASTNode* name = create_node((yyvsp[-3].id), 0);
        (yyval.node) = create_node("CALL", 2, name, (yyvsp[-1].node));
        free((yyvsp[-3].id));
    }
#line 1500 "parser.tab.c"
    break;

  case 32: /* expression: expression PLUS expression  */
#line 192 "parser.y"
                               {
        (yyval.node) = create_node("+", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1508 "parser.tab.c"
    break;

  case 33: /* expression: expression MINUS expression  */
#line 195 "parser.y"
                                {
        (yyval.node) = create_node("-", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1516 "parser.tab.c"
    break;

  case 34: /* expression: expression MULT expression  */
#line 198 "parser.y"
                               {
        (yyval.node) = create_node("*", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1524 "parser.tab.c"
    break;

  case 35: /* expression: expression DIV expression  */
#line 201 "parser.y"
                              {
        (yyval.node) = create_node("/", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1532 "parser.tab.c"
    break;

  case 36: /* expression: expression EQ expression  */
#line 204 "parser.y"
                             {
        (yyval.node) = create_node("==", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1540 "parser.tab.c"
    break;

  case 37: /* expression: expression NEQ expression  */
#line 207 "parser.y"
                              {
        (yyval.node) = create_node("!=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1548 "parser.tab.c"
    break;

  case 38: /* expression: expression GT expression  */
#line 210 "parser.y"
                             {
        (yyval.node) = create_node(">", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1556 "parser.tab.c"
    break;

  case 39: /* expression: expression GE expression  */
#line 213 "parser.y"
                             {
        (yyval.node) = create_node(">=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1564 "parser.tab.c"
    break;

  case 40: /* expression: expression LT expression  */
#line 216 "parser.y"
                             {
        (yyval.node) = create_node("<", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1572 "parser.tab.c"
    break;

  case 41: /* expression: expression LE expression  */
#line 219 "parser.y"
                             {
        (yyval.node) = create_node("<=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1580 "parser.tab.c"
    break;

  case 42: /* expression: expression AND expression  */
#line 222 "parser.y"
                              {
        (yyval.node) = create_node("and", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1588 "parser.tab.c"
    break;

  case 43: /* expression: expression OR expression  */
#line 225 "parser.y"
                             {
        (yyval.node) = create_node("or", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1596 "parser.tab.c"
    break;

  case 44: /* expression: NOT expression  */
#line 228 "parser.y"
                   {
        (yyval.node) = create_node("not", 1, (yyvsp[0].node));
    }
#line 1604 "parser.tab.c"
    break;

  case 45: /* expression: LPAREN expression RPAREN  */
#line 231 "parser.y"
                             {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1612 "parser.tab.c"
    break;

  case 46: /* expression: expression LBRACK expression RBRACK  */
#line 234 "parser.y"
                                        {
        (yyval.node) = create_node("INDEX", 2, (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1620 "parser.tab.c"
    break;

  case 47: /* expression: expression LBRACK expression COLON expression RBRACK  */
#line 237 "parser.y"
                                                         {
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1628 "parser.tab.c"
    break;

  case 48: /* expression: expression LBRACK COLON expression RBRACK  */
#line 240 "parser.y"
                                              {
        ASTNode* start = create_node("START", 0);
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-4].node), start, (yyvsp[-1].node));
    }
#line 1637 "parser.tab.c"
    break;

  case 49: /* expression: expression LBRACK expression COLON RBRACK  */
#line 244 "parser.y"
                                              {
        ASTNode* end = create_node("END", 0);
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-4].node), (yyvsp[-2].node), end);
    }
#line 1646 "parser.tab.c"
    break;

  case 50: /* expression: expression POW expression  */
#line 248 "parser.y"
                              {
        (yyval.node) = create_node("**", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1654 "parser.tab.c"
    break;

  case 51: /* arg_list: %empty  */
#line 255 "parser.y"
                { (yyval.node) = create_node("ARGS", 0); }
#line 1660 "parser.tab.c"
    break;

  case 52: /* arg_list: expression  */
#line 256 "parser.y"
               { (yyval.node) = create_node("ARGS", 1, (yyvsp[0].node)); }
#line 1666 "parser.tab.c"
    break;

  case 53: /* arg_list: arg_list COMMA expression  */
#line 257 "parser.y"
                              {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-2].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-2].node)->child_count; i++) new_children[i] = (yyvsp[-2].node)->children[i];
        new_children[(yyvsp[-2].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-2].node)->children);
        (yyvsp[-2].node)->children = new_children;
        (yyvsp[-2].node)->child_count++;
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1680 "parser.tab.c"
    break;

  case 54: /* if_stmt: IF expression COLON block elif_list else_opt  */
#line 269 "parser.y"
                                                 {
        (yyval.node) = create_node("IF", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node) ? (yyvsp[-1].node) : create_node("PASS", 0));
    }
#line 1688 "parser.tab.c"
    break;

  case 55: /* elif_list: %empty  */
#line 275 "parser.y"
                { (yyval.node) = NULL; }
#line 1694 "parser.tab.c"
    break;

  case 56: /* elif_list: elif_list ELIF expression COLON block  */
#line 276 "parser.y"
                                          {
        ASTNode* elif = create_node("ELIF", 2, (yyvsp[-2].node), (yyvsp[0].node));
        if ((yyvsp[-4].node) == NULL)
            (yyval.node) = create_node("ELIFS", 1, elif);
        else {
            ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-4].node)->child_count + 1));
            for (int i = 0; i < (yyvsp[-4].node)->child_count; i++) new_children[i] = (yyvsp[-4].node)->children[i];
            new_children[(yyvsp[-4].node)->child_count] = elif;
            free((yyvsp[-4].node)->children);
            (yyvsp[-4].node)->children = new_children;
            (yyvsp[-4].node)->child_count++;
            (yyval.node) = (yyvsp[-4].node);
        }
    }
#line 1713 "parser.tab.c"
    break;

  case 57: /* else_opt: %empty  */
#line 293 "parser.y"
                { (yyval.node) = NULL; }
#line 1719 "parser.tab.c"
    break;

  case 58: /* else_opt: ELSE COLON block  */
#line 294 "parser.y"
                     {
        (yyval.node) = (yyvsp[0].node);
    }
#line 1727 "parser.tab.c"
    break;

  case 59: /* while_stmt: WHILE expression COLON block  */
#line 300 "parser.y"
                                 {
        (yyval.node) = create_node("WHILE", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1735 "parser.tab.c"
    break;


#line 1739 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 305 "parser.y"


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
