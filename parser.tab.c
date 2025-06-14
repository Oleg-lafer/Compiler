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
#include "semantic.h"

ASTNode* root = NULL;
int yylex();
int yyerror(const char *s);

#line 83 "parser.tab.c"

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
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_IS = 9,                         /* IS  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_ASSIGN = 11,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 12,                      /* PLUS  */
  YYSYMBOL_MINUS = 13,                     /* MINUS  */
  YYSYMBOL_MULT = 14,                      /* MULT  */
  YYSYMBOL_DIV = 15,                       /* DIV  */
  YYSYMBOL_SEMICOLON = 16,                 /* SEMICOLON  */
  YYSYMBOL_LPAREN = 17,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 18,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 19,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 20,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 21,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 22,                    /* RBRACK  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ELIF = 24,                      /* ELIF  */
  YYSYMBOL_ELSE = 25,                      /* ELSE  */
  YYSYMBOL_COLON = 26,                     /* COLON  */
  YYSYMBOL_PASS = 27,                      /* PASS  */
  YYSYMBOL_WHILE = 28,                     /* WHILE  */
  YYSYMBOL_DEF = 29,                       /* DEF  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_ARROW = 31,                     /* ARROW  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_NEQ = 33,                       /* NEQ  */
  YYSYMBOL_GT = 34,                        /* GT  */
  YYSYMBOL_LT = 35,                        /* LT  */
  YYSYMBOL_GE = 36,                        /* GE  */
  YYSYMBOL_LE = 37,                        /* LE  */
  YYSYMBOL_AND = 38,                       /* AND  */
  YYSYMBOL_OR = 39,                        /* OR  */
  YYSYMBOL_NOT = 40,                       /* NOT  */
  YYSYMBOL_POW = 41,                       /* POW  */
  YYSYMBOL_UMINUS = 42,                    /* UMINUS  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_function_list = 45,             /* function_list  */
  YYSYMBOL_function_def = 46,              /* function_def  */
  YYSYMBOL_return_type_opt = 47,           /* return_type_opt  */
  YYSYMBOL_param_list = 48,                /* param_list  */
  YYSYMBOL_param_group_list = 49,          /* param_group_list  */
  YYSYMBOL_param_group = 50,               /* param_group  */
  YYSYMBOL_param_decl_list = 51,           /* param_decl_list  */
  YYSYMBOL_param_decl = 52,                /* param_decl  */
  YYSYMBOL_block = 53,                     /* block  */
  YYSYMBOL_statements = 54,                /* statements  */
  YYSYMBOL_statement = 55,                 /* statement  */
  YYSYMBOL_declaration = 56,               /* declaration  */
  YYSYMBOL_assignment = 57,                /* assignment  */
  YYSYMBOL_return_statement = 58,          /* return_statement  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_arg_list = 60,                  /* arg_list  */
  YYSYMBOL_if_stmt = 61,                   /* if_stmt  */
  YYSYMBOL_elif_list = 62,                 /* elif_list  */
  YYSYMBOL_else_opt = 63,                  /* else_opt  */
  YYSYMBOL_while_stmt = 64                 /* while_stmt  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    60,    61,    73,    85,    86,    90,    91,
      95,    96,   108,   117,   126,   127,   139,   145,   151,   156,
     162,   167,   178,   184,   187,   199,   200,   201,   202,   203,
     204,   205,   206,   211,   216,   229,   236,   239,   246,   251,
     256,   259,   263,   267,   272,   275,   278,   281,   284,   287,
     290,   293,   296,   299,   302,   305,   308,   311,   314,   317,
     320,   324,   328,   331,   338,   339,   340,   352,   355,   363,
     364,   381,   382,   396
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
  "FLOAT_LITERAL", "IDENTIFIER", "STRING_LITERAL", "TYPE", "IS", "RETURN",
  "ASSIGN", "PLUS", "MINUS", "MULT", "DIV", "SEMICOLON", "LPAREN",
  "RPAREN", "LBRACE", "RBRACE", "LBRACK", "RBRACK", "IF", "ELIF", "ELSE",
  "COLON", "PASS", "WHILE", "DEF", "COMMA", "ARROW", "EQ", "NEQ", "GT",
  "LT", "GE", "LE", "AND", "OR", "NOT", "POW", "UMINUS", "$accept",
  "program", "function_list", "function_def", "return_type_opt",
  "param_list", "param_group_list", "param_group", "param_decl_list",
  "param_decl", "block", "statements", "statement", "declaration",
  "assignment", "return_statement", "expression", "arg_list", "if_stmt",
  "elif_list", "else_opt", "while_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-80)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-19)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -19,    19,    45,   -19,   -80,    34,   -80,   -80,    -5,    26,
      13,    35,    72,   -80,   -80,     1,    36,    63,    60,   -80,
      64,    -5,   -80,   -80,   -80,    77,   -80,    86,   129,   129,
     367,   129,    88,    40,    92,    75,   -80,   129,   129,   171,
     408,   129,   129,   129,   129,   129,   105,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   367,   -80,   -80,    84,
     367,    49,   367,   -80,   367,   150,   150,     3,     3,   129,
     140,   181,   181,   181,   181,   181,   181,   408,   398,    83,
      79,   -80,   -80,   129,   202,   -80,   120,     0,   107,   129,
     129,    99,   129,   -80,    53,   -80,   100,   101,   102,   233,
     -80,   -80,   367,   -80,   -80,   264,   129,   109,   367,   295,
     -80,   326,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   367,
     129,    79,    84,   367,   -80,   -80,   -80,    25,    25,   129,
      95,   -80,   -80,   357,    79,    84,   -80,   -80
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     8,    18,
       0,     0,     9,    10,    13,     0,    16,     0,    12,    14,
       6,     0,    38,    40,    39,    42,    41,    19,     0,     0,
      20,     0,    16,     0,     0,     0,    11,    64,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    17,    15,     7,     0,
      65,     0,    21,    57,    63,    44,    45,    46,    47,     0,
       0,    48,    49,    50,    52,    51,    53,    54,    55,    62,
       0,     5,    43,     0,     0,    58,     0,    42,     0,    37,
       0,     0,     0,    32,     0,    23,     0,     0,     0,     0,
      29,    30,    66,    60,    61,     0,     0,    33,    36,     0,
      31,     0,    22,    24,    25,    26,    27,    28,    59,    35,
       0,     0,     0,    34,    32,    69,    73,    71,    71,     0,
       0,    67,    68,     0,     0,     0,    72,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   -80,   -80,   125,   -80,   -80,   -80,   108,   -80,    10,
     -57,   -80,   -79,   -80,   -80,   -80,   -15,   -80,   -80,     5,
      11,   -80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     4,    35,    11,    12,    13,    18,    14,
      93,    94,    95,    96,    97,    98,    99,    61,   100,   127,
     131,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,     9,    81,    10,    22,    23,    24,    25,    26,    27,
       1,   106,    41,    39,    40,   113,    56,    37,    28,    16,
      19,    17,    60,    62,    46,     5,    64,    65,    66,    67,
      68,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    29,   125,    57,    55,     6,     9,    31,    17,   129,
     130,     8,    15,    20,    84,   136,    22,    23,    24,    87,
      26,    88,    15,    89,   124,   126,   -18,    82,   102,    32,
      28,   105,    80,   112,   108,   109,    90,   111,   137,    83,
      91,    92,    22,    23,    24,    87,    26,    88,    21,    89,
      33,   119,    41,    29,    37,    34,    28,    38,    80,    31,
      58,    59,    90,    80,    46,   123,    91,    92,    22,    23,
      24,    25,    26,   107,   133,   110,   114,   115,   116,    29,
     120,   134,    28,    22,    23,    24,    25,    26,     7,    36,
     128,    69,    22,    23,    24,    25,    26,    28,     0,   132,
       0,     0,   104,     0,     0,    29,    28,     0,     0,    41,
       0,     0,    42,    43,    44,    45,     0,     0,     0,    41,
      29,    46,    85,     0,    44,    45,    86,     0,     0,    29,
       0,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      41,    55,     0,    42,    43,    44,    45,     0,     0,    63,
      41,    55,    46,    42,    43,    44,    45,     0,     0,     0,
       0,     0,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    41,    55,     0,    42,    43,    44,    45,     0,     0,
       0,     0,    55,    46,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    54,    41,    55,     0,    42,    43,    44,    45,   117,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    48,    49,    50,    51,
      52,    53,    54,    41,    55,     0,    42,    43,    44,    45,
       0,     0,     0,     0,     0,    46,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    54,    41,    55,     0,    42,    43,    44,
      45,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    54,    41,    55,     0,    42,    43,
      44,    45,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,   122,     0,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    55,     0,    42,
      43,    44,    45,     0,     0,     0,    41,     0,    46,    42,
      43,    44,    45,   135,     0,     0,     0,     0,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    55,    47,
      48,    49,    50,    51,    52,    53,    54,    41,    55,     0,
      42,    43,    44,    45,     0,     0,     0,    41,     0,    46,
      42,    43,    44,    45,     0,     0,     0,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    55,
      47,    48,    49,    50,    51,    52,     0,     0,     0,    55
};

static const yytype_int16 yycheck[] =
{
      15,     6,    59,     8,     3,     4,     5,     6,     7,     8,
      29,    11,     9,    28,    29,    94,    31,    17,    17,     6,
      10,     8,    37,    38,    21,     6,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    40,   121,    33,    41,     0,     6,    11,     8,    24,
      25,    17,    26,    18,    69,   134,     3,     4,     5,     6,
       7,     8,    26,    10,   121,   122,    30,    18,    83,     6,
      17,    86,    19,    20,    89,    90,    23,    92,   135,    30,
      27,    28,     3,     4,     5,     6,     7,     8,    16,    10,
      30,   106,     9,    40,    17,    31,    17,    11,    19,    11,
       8,    26,    23,    19,    21,   120,    27,    28,     3,     4,
       5,     6,     7,     6,   129,    16,    16,    16,    16,    40,
      11,    26,    17,     3,     4,     5,     6,     7,     3,    21,
     125,    26,     3,     4,     5,     6,     7,    17,    -1,   128,
      -1,    -1,    22,    -1,    -1,    40,    17,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    15,    -1,    -1,    -1,     9,
      40,    21,    22,    -1,    14,    15,    26,    -1,    -1,    40,
      -1,    21,    32,    33,    34,    35,    36,    37,    38,    39,
       9,    41,    -1,    12,    13,    14,    15,    -1,    -1,    18,
       9,    41,    21,    12,    13,    14,    15,    -1,    -1,    -1,
      -1,    -1,    21,    32,    33,    34,    35,    36,    37,    38,
      39,     9,    41,    -1,    12,    13,    14,    15,    -1,    -1,
      -1,    -1,    41,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,     9,    41,    -1,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,     9,    41,    -1,    12,    13,    14,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,     9,    41,    -1,    12,    13,    14,
      15,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,     9,    41,    -1,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,     9,    41,    -1,    12,
      13,    14,    15,    -1,    -1,    -1,     9,    -1,    21,    12,
      13,    14,    15,    26,    -1,    -1,    -1,    -1,    21,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    32,
      33,    34,    35,    36,    37,    38,    39,     9,    41,    -1,
      12,    13,    14,    15,    -1,    -1,    -1,     9,    -1,    21,
      12,    13,    14,    15,    -1,    -1,    -1,    -1,    -1,    21,
      32,    33,    34,    35,    36,    37,    38,    -1,    -1,    41,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    44,    45,    46,     6,     0,    46,    17,     6,
       8,    48,    49,    50,    52,    26,     6,     8,    51,    52,
      18,    16,     3,     4,     5,     6,     7,     8,    17,    40,
      59,    11,     6,    30,    31,    47,    50,    17,    11,    59,
      59,     9,    12,    13,    14,    15,    21,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    59,    52,     8,    26,
      59,    60,    59,    18,    59,    59,    59,    59,    59,    26,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      19,    53,    18,    30,    59,    22,    26,     6,     8,    10,
      23,    27,    28,    53,    54,    55,    56,    57,    58,    59,
      61,    64,    59,    22,    22,    59,    11,     6,    59,    59,
      16,    59,    20,    55,    16,    16,    16,    16,    22,    59,
      11,    26,    26,    59,    53,    55,    53,    62,    62,    24,
      25,    63,    63,    59,    26,    26,    55,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    47,    47,    48,    48,
      49,    49,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    52,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     8,     0,     2,     0,     1,
       1,     3,     2,     1,     1,     3,     2,     4,     1,     3,
       3,     5,     3,     1,     2,     2,     2,     2,     2,     1,
       1,     2,     1,     2,     4,     3,     2,     1,     1,     1,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     3,     4,     6,
       5,     5,     3,     3,     0,     1,     3,     6,     6,     0,
       5,     0,     3,     4
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
#line 53 "parser.y"
                  {
        root = (yyvsp[0].node);
        (yyval.node) = (yyvsp[0].node);
    }
#line 1288 "parser.tab.c"
    break;

  case 3: /* function_list: function_def  */
#line 60 "parser.y"
                 { (yyval.node) = create_node("FUNCS", 1, (yyvsp[0].node)); }
#line 1294 "parser.tab.c"
    break;

  case 4: /* function_list: function_list function_def  */
#line 61 "parser.y"
                               {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-1].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-1].node)->child_count; i++) new_children[i] = (yyvsp[-1].node)->children[i];
        new_children[(yyvsp[-1].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-1].node)->children);
        (yyvsp[-1].node)->children = new_children;
        (yyvsp[-1].node)->child_count++;
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1308 "parser.tab.c"
    break;

  case 5: /* function_def: DEF IDENTIFIER LPAREN param_list RPAREN return_type_opt COLON block  */
#line 73 "parser.y"
                                                                        {
        ASTNode* name = create_node((yyvsp[-6].id), 0);
        ASTNode* return_type = (yyvsp[-2].id) ? create_node((yyvsp[-2].id), 0) : create_node("void", 0);
        ASTNode* func = create_node("FUNC", 4, name, (yyvsp[-4].node), return_type, (yyvsp[0].node));
        (yyval.node) = func;
        free((yyvsp[-6].id));
        if ((yyvsp[-2].id)) free((yyvsp[-2].id));
    }
#line 1321 "parser.tab.c"
    break;

  case 6: /* return_type_opt: %empty  */
#line 85 "parser.y"
                     { (yyval.id) = NULL; }
#line 1327 "parser.tab.c"
    break;

  case 7: /* return_type_opt: ARROW TYPE  */
#line 86 "parser.y"
                     { (yyval.id) = (yyvsp[0].id); }
#line 1333 "parser.tab.c"
    break;

  case 8: /* param_list: %empty  */
#line 90 "parser.y"
                { (yyval.node) = create_node("PARAMS", 0); }
#line 1339 "parser.tab.c"
    break;

  case 9: /* param_list: param_group_list  */
#line 91 "parser.y"
                     { (yyval.node) = (yyvsp[0].node); }
#line 1345 "parser.tab.c"
    break;

  case 10: /* param_group_list: param_group  */
#line 95 "parser.y"
                { (yyval.node) = (yyvsp[0].node); }
#line 1351 "parser.tab.c"
    break;

  case 11: /* param_group_list: param_group_list SEMICOLON param_group  */
#line 96 "parser.y"
                                           {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-2].node)->child_count + (yyvsp[0].node)->child_count));
        for (int i = 0; i < (yyvsp[-2].node)->child_count; i++) new_children[i] = (yyvsp[-2].node)->children[i];
        for (int i = 0; i < (yyvsp[0].node)->child_count; i++) new_children[(yyvsp[-2].node)->child_count + i] = (yyvsp[0].node)->children[i];
        free((yyvsp[-2].node)->children); free((yyvsp[0].node)->children);
        (yyvsp[-2].node)->children = new_children;
        (yyvsp[-2].node)->child_count += (yyvsp[0].node)->child_count;
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1365 "parser.tab.c"
    break;

  case 12: /* param_group: TYPE param_decl_list  */
#line 108 "parser.y"
                         {
        for (int i = 0; i < (yyvsp[0].node)->child_count; i++) {
            ASTNode* param = (yyvsp[0].node)->children[i];
            free(param->children[0]);
            param->children[0] = create_node((yyvsp[-1].id), 0); // grouped type
        }
        (yyval.node) = (yyvsp[0].node);
        free((yyvsp[-1].id));
    }
#line 1379 "parser.tab.c"
    break;

  case 13: /* param_group: param_decl  */
#line 117 "parser.y"
               {
        (yyval.node) = create_node("PARAMS", 1, (yyvsp[0].node));
    }
#line 1387 "parser.tab.c"
    break;

  case 14: /* param_decl_list: param_decl  */
#line 126 "parser.y"
               { (yyval.node) = create_node("PARAMS", 1, (yyvsp[0].node)); }
#line 1393 "parser.tab.c"
    break;

  case 15: /* param_decl_list: param_decl_list COMMA param_decl  */
#line 127 "parser.y"
                                     {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-2].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-2].node)->child_count; i++) new_children[i] = (yyvsp[-2].node)->children[i];
        new_children[(yyvsp[-2].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-2].node)->children);
        (yyvsp[-2].node)->children = new_children;
        (yyvsp[-2].node)->child_count++;
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1407 "parser.tab.c"
    break;

  case 16: /* param_decl: TYPE IDENTIFIER  */
#line 139 "parser.y"
                    {
        ASTNode* type = create_node((yyvsp[-1].id), 0);
        ASTNode* id = create_node((yyvsp[0].id), 0);
        (yyval.node) = create_node("PARAM", 2, type, id);
        free((yyvsp[-1].id)); free((yyvsp[0].id));
    }
#line 1418 "parser.tab.c"
    break;

  case 17: /* param_decl: TYPE IDENTIFIER ASSIGN expression  */
#line 145 "parser.y"
                                      {
        ASTNode* type = create_node((yyvsp[-3].id), 0);
        ASTNode* id = create_node((yyvsp[-2].id), 0);
        (yyval.node) = create_node("PARAM_DEFAULT", 3, type, id, (yyvsp[0].node));
        free((yyvsp[-3].id)); free((yyvsp[-2].id));
    }
#line 1429 "parser.tab.c"
    break;

  case 18: /* param_decl: IDENTIFIER  */
#line 151 "parser.y"
               {
        ASTNode* id = create_node((yyvsp[0].id), 0);
        (yyval.node) = create_node("PARAM", 2, create_node("DUMMY", 0), id);
        free((yyvsp[0].id));
    }
#line 1439 "parser.tab.c"
    break;

  case 19: /* param_decl: IDENTIFIER COLON TYPE  */
#line 156 "parser.y"
                          {
        ASTNode* type = create_node((yyvsp[0].id), 0);
        ASTNode* id = create_node((yyvsp[-2].id), 0);
        (yyval.node) = create_node("PARAM", 2, type, id);
        free((yyvsp[-2].id)); free((yyvsp[0].id));
    }
#line 1450 "parser.tab.c"
    break;

  case 20: /* param_decl: IDENTIFIER COLON expression  */
#line 162 "parser.y"
                                {
        ASTNode* id = create_node((yyvsp[-2].id), 0);
        (yyval.node) = create_node("PARAM_DEFAULT", 3, create_node("DUMMY", 0), id, (yyvsp[0].node));
        free((yyvsp[-2].id));
    }
#line 1460 "parser.tab.c"
    break;

  case 21: /* param_decl: IDENTIFIER COLON TYPE ASSIGN expression  */
#line 167 "parser.y"
                                            {
        ASTNode* type = create_node((yyvsp[-2].id), 0);
        ASTNode* id = create_node((yyvsp[-4].id), 0);
        (yyval.node) = create_node("PARAM_DEFAULT", 3, type, id, (yyvsp[0].node));
        free((yyvsp[-4].id)); free((yyvsp[-2].id));
    }
#line 1471 "parser.tab.c"
    break;

  case 22: /* block: LBRACE statements RBRACE  */
#line 178 "parser.y"
                             {
        (yyval.node) = create_node("BLOCK", 1, (yyvsp[-1].node));
    }
#line 1479 "parser.tab.c"
    break;

  case 23: /* statements: statement  */
#line 184 "parser.y"
              {
        (yyval.node) = create_node("STATEMENTS", 1, (yyvsp[0].node));
    }
#line 1487 "parser.tab.c"
    break;

  case 24: /* statements: statements statement  */
#line 187 "parser.y"
                         {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-1].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-1].node)->child_count; i++) new_children[i] = (yyvsp[-1].node)->children[i];
        new_children[(yyvsp[-1].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-1].node)->children);
        (yyvsp[-1].node)->children = new_children;
        (yyvsp[-1].node)->child_count++;
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1501 "parser.tab.c"
    break;

  case 25: /* statement: declaration SEMICOLON  */
#line 199 "parser.y"
                            { (yyval.node) = (yyvsp[-1].node); }
#line 1507 "parser.tab.c"
    break;

  case 26: /* statement: assignment SEMICOLON  */
#line 200 "parser.y"
                           { (yyval.node) = (yyvsp[-1].node); }
#line 1513 "parser.tab.c"
    break;

  case 27: /* statement: return_statement SEMICOLON  */
#line 201 "parser.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 1519 "parser.tab.c"
    break;

  case 28: /* statement: expression SEMICOLON  */
#line 202 "parser.y"
                           { (yyval.node) = (yyvsp[-1].node); }
#line 1525 "parser.tab.c"
    break;

  case 31: /* statement: PASS SEMICOLON  */
#line 205 "parser.y"
                     { (yyval.node) = create_node("PASS", 0); }
#line 1531 "parser.tab.c"
    break;

  case 33: /* declaration: TYPE IDENTIFIER  */
#line 211 "parser.y"
                    {
        (yyval.node) = create_node("DECL", 2, create_node((yyvsp[-1].id), 0), create_node((yyvsp[0].id), 0));
        free((yyvsp[-1].id));
        free((yyvsp[0].id));
    }
#line 1541 "parser.tab.c"
    break;

  case 34: /* declaration: TYPE IDENTIFIER ASSIGN expression  */
#line 216 "parser.y"
                                      {
        ASTNode* type = create_node((yyvsp[-3].id), 0);
        ASTNode* id = create_node((yyvsp[-2].id), 0);
        (yyval.node) = create_node("DECL_ASSIGN", 3, type, id, (yyvsp[0].node));
        free((yyvsp[-3].id));
        free((yyvsp[-2].id));
    }
#line 1553 "parser.tab.c"
    break;

  case 35: /* assignment: IDENTIFIER ASSIGN expression  */
#line 229 "parser.y"
                                 {
        (yyval.node) = create_node("ASSIGN", 2, create_node((yyvsp[-2].id), 0), (yyvsp[0].node));
        free((yyvsp[-2].id));
    }
#line 1562 "parser.tab.c"
    break;

  case 36: /* return_statement: RETURN expression  */
#line 236 "parser.y"
                      {
        (yyval.node) = create_node("RETURN", 1, (yyvsp[0].node));
    }
#line 1570 "parser.tab.c"
    break;

  case 37: /* return_statement: RETURN  */
#line 239 "parser.y"
           {
        (yyval.node) = create_node("RETURN", 0);  // no children
    }
#line 1578 "parser.tab.c"
    break;

  case 38: /* expression: NUMBER  */
#line 246 "parser.y"
           {
        char buf[16];
        sprintf(buf, "%d", (yyvsp[0].num));
        (yyval.node) = create_node(buf, 0);
    }
#line 1588 "parser.tab.c"
    break;

  case 39: /* expression: FLOAT_LITERAL  */
#line 251 "parser.y"
                  {
        char buf[32];
        sprintf(buf, "%f", (yyvsp[0].fnum));
        (yyval.node) = create_node(buf, 0);
    }
#line 1598 "parser.tab.c"
    break;

  case 40: /* expression: BOOL  */
#line 256 "parser.y"
         {
        (yyval.node) = create_node((yyvsp[0].num) ? "True" : "False", 0);
    }
#line 1606 "parser.tab.c"
    break;

  case 41: /* expression: STRING_LITERAL  */
#line 259 "parser.y"
                   {
        (yyval.node) = create_node((yyvsp[0].id), 0);
        free((yyvsp[0].id));
    }
#line 1615 "parser.tab.c"
    break;

  case 42: /* expression: IDENTIFIER  */
#line 263 "parser.y"
               {
        (yyval.node) = create_node((yyvsp[0].id), 0);
        free((yyvsp[0].id));
    }
#line 1624 "parser.tab.c"
    break;

  case 43: /* expression: IDENTIFIER LPAREN arg_list RPAREN  */
#line 267 "parser.y"
                                      {
        ASTNode* name = create_node((yyvsp[-3].id), 0);
        (yyval.node) = create_node("CALL", 2, name, (yyvsp[-1].node));
        free((yyvsp[-3].id));
    }
#line 1634 "parser.tab.c"
    break;

  case 44: /* expression: expression PLUS expression  */
#line 272 "parser.y"
                               {
        (yyval.node) = create_node("+", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1642 "parser.tab.c"
    break;

  case 45: /* expression: expression MINUS expression  */
#line 275 "parser.y"
                                {
        (yyval.node) = create_node("-", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1650 "parser.tab.c"
    break;

  case 46: /* expression: expression MULT expression  */
#line 278 "parser.y"
                               {
        (yyval.node) = create_node("*", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1658 "parser.tab.c"
    break;

  case 47: /* expression: expression DIV expression  */
#line 281 "parser.y"
                              {
        (yyval.node) = create_node("/", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1666 "parser.tab.c"
    break;

  case 48: /* expression: expression EQ expression  */
#line 284 "parser.y"
                             {
        (yyval.node) = create_node("==", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1674 "parser.tab.c"
    break;

  case 49: /* expression: expression NEQ expression  */
#line 287 "parser.y"
                              {
        (yyval.node) = create_node("!=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1682 "parser.tab.c"
    break;

  case 50: /* expression: expression GT expression  */
#line 290 "parser.y"
                             {
        (yyval.node) = create_node(">", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1690 "parser.tab.c"
    break;

  case 51: /* expression: expression GE expression  */
#line 293 "parser.y"
                             {
        (yyval.node) = create_node(">=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1698 "parser.tab.c"
    break;

  case 52: /* expression: expression LT expression  */
#line 296 "parser.y"
                             {
        (yyval.node) = create_node("<", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1706 "parser.tab.c"
    break;

  case 53: /* expression: expression LE expression  */
#line 299 "parser.y"
                             {
        (yyval.node) = create_node("<=", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1714 "parser.tab.c"
    break;

  case 54: /* expression: expression AND expression  */
#line 302 "parser.y"
                              {
        (yyval.node) = create_node("and", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1722 "parser.tab.c"
    break;

  case 55: /* expression: expression OR expression  */
#line 305 "parser.y"
                             {
        (yyval.node) = create_node("or", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1730 "parser.tab.c"
    break;

  case 56: /* expression: NOT expression  */
#line 308 "parser.y"
                   {
        (yyval.node) = create_node("not", 1, (yyvsp[0].node));
    }
#line 1738 "parser.tab.c"
    break;

  case 57: /* expression: LPAREN expression RPAREN  */
#line 311 "parser.y"
                             {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 1746 "parser.tab.c"
    break;

  case 58: /* expression: expression LBRACK expression RBRACK  */
#line 314 "parser.y"
                                        {
        (yyval.node) = create_node("INDEX", 2, (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1754 "parser.tab.c"
    break;

  case 59: /* expression: expression LBRACK expression COLON expression RBRACK  */
#line 317 "parser.y"
                                                         {
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    }
#line 1762 "parser.tab.c"
    break;

  case 60: /* expression: expression LBRACK COLON expression RBRACK  */
#line 320 "parser.y"
                                              {
        ASTNode* start = create_node("START", 0);
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-4].node), start, (yyvsp[-1].node));
    }
#line 1771 "parser.tab.c"
    break;

  case 61: /* expression: expression LBRACK expression COLON RBRACK  */
#line 324 "parser.y"
                                              {
        ASTNode* end = create_node("END", 0);
        (yyval.node) = create_node("SLICE", 3, (yyvsp[-4].node), (yyvsp[-2].node), end);
    }
#line 1780 "parser.tab.c"
    break;

  case 62: /* expression: expression POW expression  */
#line 328 "parser.y"
                              {
        (yyval.node) = create_node("**", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1788 "parser.tab.c"
    break;

  case 63: /* expression: expression IS expression  */
#line 331 "parser.y"
                             {
        (yyval.node) = create_node("is", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1796 "parser.tab.c"
    break;

  case 64: /* arg_list: %empty  */
#line 338 "parser.y"
                { (yyval.node) = create_node("ARGS", 0); }
#line 1802 "parser.tab.c"
    break;

  case 65: /* arg_list: expression  */
#line 339 "parser.y"
               { (yyval.node) = create_node("ARGS", 1, (yyvsp[0].node)); }
#line 1808 "parser.tab.c"
    break;

  case 66: /* arg_list: arg_list COMMA expression  */
#line 340 "parser.y"
                              {
        ASTNode** new_children = malloc(sizeof(ASTNode*) * ((yyvsp[-2].node)->child_count + 1));
        for (int i = 0; i < (yyvsp[-2].node)->child_count; i++) new_children[i] = (yyvsp[-2].node)->children[i];
        new_children[(yyvsp[-2].node)->child_count] = (yyvsp[0].node);
        free((yyvsp[-2].node)->children);
        (yyvsp[-2].node)->children = new_children;
        (yyvsp[-2].node)->child_count++;
        (yyval.node) = (yyvsp[-2].node);
    }
#line 1822 "parser.tab.c"
    break;

  case 67: /* if_stmt: IF expression COLON block elif_list else_opt  */
#line 352 "parser.y"
                                                 {
        (yyval.node) = create_node("IF", 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[-1].node) ? (yyvsp[-1].node) : create_node("PASS", 0));
    }
#line 1830 "parser.tab.c"
    break;

  case 68: /* if_stmt: IF expression COLON statement elif_list else_opt  */
#line 355 "parser.y"
                                                     {
        ASTNode* block = create_node("BLOCK", 1, create_node("STATEMENTS", 1, (yyvsp[-2].node)));
        (yyval.node) = create_node("IF", 3, (yyvsp[-4].node), block, (yyvsp[-1].node) ? (yyvsp[-1].node) : create_node("PASS", 0));
    }
#line 1839 "parser.tab.c"
    break;

  case 69: /* elif_list: %empty  */
#line 363 "parser.y"
                { (yyval.node) = NULL; }
#line 1845 "parser.tab.c"
    break;

  case 70: /* elif_list: elif_list ELIF expression COLON block  */
#line 364 "parser.y"
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
#line 1864 "parser.tab.c"
    break;

  case 71: /* else_opt: %empty  */
#line 381 "parser.y"
                { (yyval.node) = NULL; }
#line 1870 "parser.tab.c"
    break;

  case 72: /* else_opt: ELSE COLON statement  */
#line 382 "parser.y"
                         {
        // If it's already a block, use it directly
        if (strcmp((yyvsp[0].node)->name, "BLOCK") == 0) {
            (yyval.node) = (yyvsp[0].node);
        } else {
            (yyval.node) = create_node("BLOCK", 1, create_node("STATEMENTS", 1, (yyvsp[0].node)));
        }
    }
#line 1883 "parser.tab.c"
    break;

  case 73: /* while_stmt: WHILE expression COLON block  */
#line 396 "parser.y"
                                 {
        (yyval.node) = create_node("WHILE", 2, (yyvsp[-2].node), (yyvsp[0].node));
    }
#line 1891 "parser.tab.c"
    break;


#line 1895 "parser.tab.c"

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

#line 401 "parser.y"


int yyerror(const char *s) {
    extern int yylineno;
    extern char *yytext;
    fprintf(stderr, "Syntax error at line %d: unexpected token '%s'\n", yylineno, yytext);
    return 1;
}

int main() {
    if (yyparse() == 0 && root != NULL) {
        check_semantics(root);   // כאן נקרא את הסמנטיקה
        print_ast(root, 0);
        free_ast(root);
    }
    return 0;
}
