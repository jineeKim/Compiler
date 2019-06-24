/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "bar.y" /* yacc.c:339  */

#include "util.h"
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
int yyerror(char*);

#line 74 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    REAL = 259,
    INT = 260,
    VOID = 261,
    CHAR = 262,
    FLOAT = 263,
    STRING = 264,
    IF = 265,
    ELSE = 266,
    SWITCH = 267,
    CASE = 268,
    DEFAULT = 269,
    BREAK = 270,
    RETURN = 271,
    ID = 272,
    STRUCT = 273,
    FOR = 274,
    WHILE = 275,
    NSC = 276,
    SC = 277,
    S = 278,
    DOT = 279,
    LS = 280,
    RS = 281,
    LB = 282,
    RB = 283,
    LL = 284,
    RL = 285,
    OR = 286,
    AND = 287,
    PLUPLU = 288,
    MINMIN = 289,
    MINAIG = 290,
    DIVAIG = 291,
    PLUAIG = 292,
    MLUAIG = 293,
    MODAIG = 294,
    ASIGN = 295,
    EQUAL = 296,
    NEQUAL = 297,
    LESS = 298,
    GREATER = 299,
    LESSEQUAL = 300,
    GREATEREQUAL = 301,
    MUL = 302,
    DIV = 303,
    MOD = 304,
    PLUSE = 305,
    MINUS = 306
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define INT 260
#define VOID 261
#define CHAR 262
#define FLOAT 263
#define STRING 264
#define IF 265
#define ELSE 266
#define SWITCH 267
#define CASE 268
#define DEFAULT 269
#define BREAK 270
#define RETURN 271
#define ID 272
#define STRUCT 273
#define FOR 274
#define WHILE 275
#define NSC 276
#define SC 277
#define S 278
#define DOT 279
#define LS 280
#define RS 281
#define LB 282
#define RB 283
#define LL 284
#define RL 285
#define OR 286
#define AND 287
#define PLUPLU 288
#define MINMIN 289
#define MINAIG 290
#define DIVAIG 291
#define PLUAIG 292
#define MLUAIG 293
#define MODAIG 294
#define ASIGN 295
#define EQUAL 296
#define NEQUAL 297
#define LESS 298
#define GREATER 299
#define LESSEQUAL 300
#define GREATEREQUAL 301
#define MUL 302
#define DIV 303
#define MOD 304
#define PLUSE 305
#define MINUS 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "bar.y" /* yacc.c:355  */

	int iVal;
	float rVal;
	char cVal;
	char *sVal;

#line 223 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 240 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    60,    71,    73,    74,    75,    77,    86,
      97,    99,   115,   117,   129,   140,   147,   156,   162,   168,
     173,   184,   186,   195,   196,   197,   198,   199,   201,   202,
     204,   211,   220,   233,   238,   251,   256,   257,   259,   260,
     261,   262,   263,   264,   265,   266,   277,   285,   296,   312,
     328,   337,   343,   348,   354,   359,   364,   365,   367,   368,
     370,   379,   380,   389,   399,   406,   412,   419,   427,   429,
     437,   439,   447,   449,   450,   451,   452,   453,   454,   456,
     464,   466,   467,   469,   477,   479,   480,   481,   483,   484,
     485,   491,   492,   500,   508,   510,   514,   516,   517,   519,
     527,   534,   544,   557,   566,   572,   574,   585,   596,   597,
     599,   600,   601,   602,   603,   604
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "INT", "VOID", "CHAR",
  "FLOAT", "STRING", "IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "BREAK",
  "RETURN", "ID", "STRUCT", "FOR", "WHILE", "NSC", "SC", "S", "DOT", "LS",
  "RS", "LB", "RB", "LL", "RL", "OR", "AND", "PLUPLU", "MINMIN", "MINAIG",
  "DIVAIG", "PLUAIG", "MLUAIG", "MODAIG", "ASIGN", "EQUAL", "NEQUAL",
  "LESS", "GREATER", "LESSEQUAL", "GREATEREQUAL", "MUL", "DIV", "MOD",
  "PLUSE", "MINUS", "$accept", "Program", "DeclarationList", "Declaration",
  "VarDeclaration", "IDs", "Value", "FuncDeclaration", "StructDeclaration",
  "StructTypeDeclaration", "Params", "ParamList", "Param", "TypeSpecifier",
  "StructType", "StructTypeReference", "CompoundStatement",
  "LocalDeclarationList", "StatementList", "Statement", "MatchedStatement",
  "OpenStatement", "SwitchStatement", "CaseList", "DefaultCase",
  "ReturnStatement", "BreakStatement", "ExpressionStatement", "Expression",
  "AssignExpression", "Variable", "SelectorList", "Selector",
  "SimpleExpression", "AndExpression", "RelExpression", "RelOperator",
  "AddExpression", "Oper1", "Term", "Oper2", "Factor", "NumberLiteral",
  "IncDec", "WhileStatement", "ForStatement", "FunctionCall", "Arguments",
  "ArgumentList", "Assign", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,  -141,  -141,  -141,  -141,    -6,    17,    40,  -141,  -141,
    -141,  -141,    19,    42,  -141,  -141,    35,  -141,  -141,  -141,
      44,    -3,    53,  -141,   140,  -141,    63,    86,     7,    75,
    -141,    77,    88,  -141,    63,  -141,    53,    89,  -141,  -141,
      63,    10,    40,    53,  -141,  -141,  -141,  -141,  -141,    40,
      51,  -141,  -141,   116,   119,   127,    91,     2,   125,   130,
    -141,   103,  -141,  -141,  -141,   103,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,   131,  -141,   128,   121,   124,   129,
      50,     4,  -141,  -141,   152,  -141,  -141,  -141,   103,   103,
    -141,  -141,   154,   161,   106,   103,    48,  -141,   103,   103,
     153,    84,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,   103,   103,   103,  -141,  -141,  -141,  -141,  -141,  -141,
     103,  -141,  -141,   103,  -141,  -141,  -141,   103,    48,  -141,
     155,   156,  -141,  -141,  -141,  -141,   157,   162,   150,  -141,
     164,   158,  -141,  -141,   124,   129,    50,     4,  -141,    71,
     160,  -141,   126,  -141,   103,    99,  -141,   177,   176,  -141,
    -141,   168,  -141,  -141,    71,   188,   120,   103,  -141,  -141,
     171,   190,   173,   167,   170,  -141,   178,  -141,  -141,   105,
      71,  -141,    71,  -141,  -141,    71
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,    24,    25,    26,     0,     0,     2,     4,     5,
       6,     7,    28,     0,    27,    29,    30,     1,     3,    15,
      12,     0,    10,    33,    19,     8,     0,     0,     0,    18,
      28,     0,    17,    21,     0,    12,     9,     0,    16,    32,
       0,     0,     0,    22,    11,    14,    33,    13,    20,    35,
       0,    95,    96,     0,     0,     0,     0,    61,     0,     0,
      57,     0,    31,    97,    98,     0,    42,    34,    36,    37,
      44,    41,    43,    38,     0,    58,    91,    59,    68,    70,
      72,    80,    84,    94,     0,    40,    39,    89,     0,     0,
      55,    54,     0,     0,   105,     0,    62,    64,     0,     0,
       0,    91,    90,    56,   111,   114,   112,   113,   115,   110,
      92,     0,     0,     0,    77,    78,    73,    75,    74,    76,
       0,    81,    82,     0,    85,    86,    87,     0,    61,    93,
       0,     0,    53,    65,   109,   108,     0,   104,     0,    63,
       0,     0,    88,    60,    67,    69,    71,    79,    83,     0,
       0,   103,     0,    66,     0,     0,    46,    36,     0,   107,
     106,     0,   100,    99,     0,     0,    52,     0,    45,    47,
       0,     0,     0,     0,     0,    35,     0,    35,    48,     0,
      50,    35,    51,   101,   102,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,   191,   -21,  -141,   -16,  -141,  -141,    16,
    -141,  -141,   159,   -20,  -141,  -141,   -41,   151,  -139,    54,
    -140,    36,  -141,  -141,  -141,  -141,  -141,  -141,   -55,  -141,
     -63,  -141,   108,  -141,    90,    92,  -141,    87,  -141,    83,
    -141,   -62,  -141,   -71,  -141,  -141,  -141,  -141,  -141,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    21,    22,    10,    11,    30,
      31,    32,    33,    13,    14,    15,    66,    28,    50,    67,
      68,    69,    70,   166,   173,    71,    72,    73,    74,    75,
      76,    96,    97,    77,    78,    79,   120,    80,   123,    81,
     127,    82,    83,    84,    85,    86,    87,   136,   137,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    92,   101,   102,    34,   110,   100,    39,    40,   157,
      36,    16,     1,     2,     3,     4,    12,    17,    43,    25,
      26,   129,    34,    12,   168,     5,    93,    94,    39,    40,
     110,    95,    45,   130,   131,    38,   180,    46,   182,   135,
     138,    19,   185,   140,   141,     1,     2,     3,     4,   101,
     101,   124,   125,   126,    51,    52,   143,   101,     5,    20,
     101,    53,    23,    54,   101,   148,    55,    56,    57,    24,
      58,    59,    93,    60,    51,    52,    61,    95,    46,    62,
      35,    53,    27,    54,    63,    64,    55,    56,    57,    37,
      58,    59,   -24,    60,    51,    52,    61,   160,    46,   161,
     121,   122,    65,    41,    63,    64,    51,    52,    57,    51,
      52,    42,   174,    91,   163,   134,    61,    63,    64,    44,
      57,   162,    65,    57,    63,    64,    46,   183,    61,    51,
      52,    61,    46,   171,   172,   159,    63,    64,   184,    63,
      64,    88,    65,    57,    89,     1,    29,     3,     4,    90,
      98,    61,   112,   103,    65,    99,   113,    65,     5,    63,
      64,    63,    64,   104,   105,   106,   107,   108,   109,   128,
     114,   115,   116,   117,   118,   119,   132,    65,   133,   142,
     153,   149,   150,   151,   155,   152,   154,   158,   164,   165,
     167,   170,   175,   176,   177,   178,   179,    49,    18,   181,
     169,    48,   144,   156,   139,   145,   147,   146
};

static const yytype_uint8 yycheck[] =
{
      41,    56,    65,    65,    24,    76,    61,    28,    28,   149,
      26,    17,     5,     6,     7,     8,     0,     0,    34,    22,
      23,    84,    42,     7,   164,    18,    24,    25,    49,    49,
     101,    29,    22,    88,    89,    28,   175,    27,   177,    94,
      95,    22,   181,    98,    99,     5,     6,     7,     8,   112,
     113,    47,    48,    49,     3,     4,   111,   120,    18,    17,
     123,    10,    27,    12,   127,   127,    15,    16,    17,    25,
      19,    20,    24,    22,     3,     4,    25,    29,    27,    28,
      17,    10,    29,    12,    33,    34,    15,    16,    17,     3,
      19,    20,    17,    22,     3,     4,    25,   152,    27,   154,
      50,    51,    51,    26,    33,    34,     3,     4,    17,     3,
       4,    23,   167,    22,   155,     9,    25,    33,    34,    30,
      17,    22,    51,    17,    33,    34,    27,    22,    25,     3,
       4,    25,    27,    13,    14,     9,    33,    34,   179,    33,
      34,    25,    51,    17,    25,     5,     6,     7,     8,    22,
      25,    25,    31,    22,    51,    25,    32,    51,    18,    33,
      34,    33,    34,    35,    36,    37,    38,    39,    40,    17,
      41,    42,    43,    44,    45,    46,    22,    51,    17,    26,
      30,    26,    26,    26,    26,    23,    22,    27,    11,    13,
      22,     3,    21,     3,    21,    28,    26,    46,     7,    21,
     164,    42,   112,   149,    96,   113,   123,   120
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,    18,    53,    54,    55,    56,
      59,    60,    61,    65,    66,    67,    17,     0,    55,    22,
      17,    57,    58,    27,    25,    22,    23,    29,    69,     6,
      61,    62,    63,    64,    65,    17,    58,     3,    28,    56,
      65,    26,    23,    58,    30,    22,    27,    68,    64,    69,
      70,     3,     4,    10,    12,    15,    16,    17,    19,    20,
      22,    25,    28,    33,    34,    51,    68,    71,    72,    73,
      74,    77,    78,    79,    80,    81,    82,    85,    86,    87,
      89,    91,    93,    94,    95,    96,    97,    98,    25,    25,
      22,    22,    80,    24,    25,    29,    83,    84,    25,    25,
      80,    82,    93,    22,    35,    36,    37,    38,    39,    40,
      95,   101,    31,    32,    41,    42,    43,    44,    45,    46,
      88,    50,    51,    90,    47,    48,    49,    92,    17,    82,
      80,    80,    22,    17,     9,    80,    99,   100,    80,    84,
      80,    80,    26,    80,    86,    87,    89,    91,    93,    26,
      26,    26,    23,    30,    22,    26,    71,    72,    27,     9,
      80,    80,    22,    68,    11,    13,    75,    22,    72,    73,
       3,    13,    14,    76,    80,    21,     3,    21,    28,    26,
      70,    21,    70,    22,    68,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    55,    55,    56,    57,
      57,    58,    58,    59,    59,    60,    61,    62,    62,    62,
      63,    63,    64,    65,    65,    65,    65,    65,    66,    66,
      67,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    73,    74,    75,
      75,    76,    76,    77,    77,    78,    79,    79,    80,    80,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    99,    99,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     3,
       1,     4,     1,     6,     6,     2,     5,     1,     1,     0,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     2,     0,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     5,     7,     8,     5,
       4,     3,     0,     3,     2,     2,     2,     1,     1,     1,
       3,     1,     2,     2,     1,     2,     3,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       2,     1,     2,     2,     1,     1,     1,     1,     1,     5,
       5,     9,     9,     4,     1,     0,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 53 "bar.y" /* yacc.c:1646  */
    {
		NODE *declList = pop(); 
		NODE *prog = nodeS("Program", nonterminal, _PROG); 
		mkSubtree(prog, declList); 
		push(prog);
		 }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "bar.y" /* yacc.c:1646  */
    {
			NODE *dec = pop(); 
			NODE *decList = pop(); 
			NODE *temp;
        	        temp = decList;
	                // Traverse to the last node
                	while(temp->sibling != NULL)
        	            temp = temp->sibling;
	                mkSibling(temp, dec);
			push(decList);
			}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 77 "bar.y" /* yacc.c:1646  */
    {
		NODE *ids = pop(); 
		NODE *type = pop(); 
	       	NODE *varDecl = nodeS("VarDeclaration", nonterminal, _VARDEC); 
		mkSubtree(varDecl, type); 
		mkSibling(type, ids); 
		push(varDecl);
		}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 86 "bar.y" /* yacc.c:1646  */
    {
	NODE *val = pop(); 
	NODE *ids = pop();
	NODE *temp;
	temp = ids;
        // Traverse to the last node
        while(temp->sibling != NULL)
        	temp = temp->sibling;
        mkSibling(temp, val);
        push(ids);
	}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 99 "bar.y" /* yacc.c:1646  */
    {
	NODE *node = pop(); 
    	NODE *intNode = nodeI((yyvsp[-1].iVal), terminal); 
	if(node->child == NULL){
		NODE *id_arr = nodeS("IdArray", nonterminal, _ID_ARR); 
		mkSubtree(id_arr, node); 
		mkSibling(node, intNode); 
		push(id_arr);
	} else if(node->child != NULL){
		NODE* temp; 
		temp = node->child; 
		while(temp->sibling != NULL)  
			temp = temp->sibling; 
		mkSibling(temp, intNode); 
		push(node);}
	}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 115 "bar.y" /* yacc.c:1646  */
    {NODE *id = nodeS((yyvsp[0].sVal), terminal, _ID); push(id);}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 117 "bar.y" /* yacc.c:1646  */
    {
		NODE *cpdStmt = pop(); 
		NODE *params = pop(); 
		NODE *id = nodeS((yyvsp[-4].sVal), terminal, _ID); 
		NODE *type=pop(); 
		NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
                mkSubtree(funDec, type);
               	mkSibling(type, id);
               	mkSibling(id, params);
               	mkSibling(params, cpdStmt);
		push(funDec);
		}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "bar.y" /* yacc.c:1646  */
    {
			NODE *params = pop(); 
			NODE *id = nodeS((yyvsp[-4].sVal), terminal, _ID); 
			NODE *type=pop(); 
			NODE *funDec = nodeS("FuncDeclaration", nonterminal, _FUNDEC); 
			mkSubtree(funDec, type);
                        mkSibling(type, id);
                        mkSibling(id, params);
			push(funDec);
			}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 140 "bar.y" /* yacc.c:1646  */
    {
		  	NODE *strDec = nodeS("StructDeclaration", nonterminal, _STRDEC); 
			NODE *strType = pop(); 
			mkSubtree(strDec, strType); 
			push(strDec);
			}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "bar.y" /* yacc.c:1646  */
    {
			NODE *ldecList = pop();
		     	NODE *id  = nodeS((yyvsp[-3].sVal), terminal, _ID); 
			NODE *strType = nodeS("StructType", nonterminal, _STRTYPE); 
			mkSubtree(strType, id);
                        mkSibling(id,ldecList);
			push(strType);
			}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 156 "bar.y" /* yacc.c:1646  */
    {
	NODE *paramList = pop(); 
       	NODE *params = nodeS("Params", nonterminal, _PARAM); 
	mkSubtree(params, paramList); 
	push(params);
	}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 162 "bar.y" /* yacc.c:1646  */
    {
	NODE *voidNode = nodeS("void", terminal, _TYPE); 
	NODE *params = nodeS("Params", nonterminal, _PARAM); 
	mkSubtree(params, voidNode); 
	push(params);
	}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 168 "bar.y" /* yacc.c:1646  */
    {
		NODE *params = nodeS("Params", nonterminal, _PARAM); 
		push(params);
		}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 173 "bar.y" /* yacc.c:1646  */
    {
	  	NODE *param = pop();
		NODE *paramList = pop();  
		NODE *temp;
	        temp = paramList;
        	// Traverse to the last node
	        while(temp->sibling != NULL)
        	        temp = temp->sibling;
                mkSibling(temp, param);
                push(paramList);
		}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 186 "bar.y" /* yacc.c:1646  */
    {
	NODE *val = pop(); 
	NODE *type = pop(); 
      	NODE *param = nodeS("Param", nonterminal, _PARAM); 
	mkSubtree(param, type); 
	mkSibling(type, val); 
	push(param);
	}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 195 "bar.y" /* yacc.c:1646  */
    {NODE *intNode = nodeS("int", terminal, _TYPE); push(intNode);}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 196 "bar.y" /* yacc.c:1646  */
    {NODE *voidNode = nodeS("void", terminal, _TYPE); push(voidNode);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 197 "bar.y" /* yacc.c:1646  */
    {NODE *charNode = nodeS("char", terminal, _TYPE); push(charNode);}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 198 "bar.y" /* yacc.c:1646  */
    {NODE *floatNode = nodeS("float", terminal, _TYPE); push(floatNode);}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 204 "bar.y" /* yacc.c:1646  */
    {
			NODE *strType = nodeS("StructType", nonterminal, _STRTYPE); 
			NODE *id = nodeS((yyvsp[0].sVal), terminal, _ID); 
			mkSubtree(strType, id); 
			push(strType); 
			}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 211 "bar.y" /* yacc.c:1646  */
    {
			NODE *stmtList = pop(); 
		  	NODE *ldecList = pop(); 
			NODE *cpdStmt = nodeS("CompoundStatement", nonterminal, _CPDSTMT); 			
			mkSubtree(cpdStmt, ldecList);
                        mkSibling(ldecList, stmtList);
			push(cpdStmt);
			}
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 220 "bar.y" /* yacc.c:1646  */
    {
			NODE *var = pop(); 
			NODE *ldecList = pop();
			if(ldecList->child != NULL){
				NODE* temp; temp = ldecList->child; 
	                        while(temp->sibling != NULL)
        	                        temp = temp->sibling;
                	        mkSibling(temp, var);
			}else{
                        	mkSubtree(ldecList, var);
			} 
			push(ldecList);
			}
#line 1725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 233 "bar.y" /* yacc.c:1646  */
    {
			NODE *ldecList = nodeS("LocalDeclarationList", nonterminal, _LDECLIST); 
			push(ldecList);
			}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 238 "bar.y" /* yacc.c:1646  */
    {
		NODE *stmt = pop();
		NODE *stmtList = pop();
		if(stmtList->child != NULL){
			NODE* temp; temp = stmtList->child;
	                while(temp->sibling != NULL)
        	                temp = temp->sibling;
                	mkSibling(temp, stmt);
		}else{
			mkSubtree(stmtList, stmt);
		}
		push(stmtList);
		}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 251 "bar.y" /* yacc.c:1646  */
    {
		NODE *statList = nodeS("StatmentList", nonterminal, _STMTLIST); 
		push(statList);
		}
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 266 "bar.y" /* yacc.c:1646  */
    {
			NODE *stmt2 = pop(); 
			NODE *stmt1 = pop(); 
			NODE *exp = pop(); 
			NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
			mkSubtree(ifStmt, exp); 
			mkSibling(exp, stmt1); 
			mkSibling(stmt1, stmt2); 
			push(ifStmt);
			}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 277 "bar.y" /* yacc.c:1646  */
    {
		NODE *stmt1 = pop(); 
		NODE *exp = pop(); 
	      	NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
		mkSubtree(ifStmt, exp); 
		mkSibling(exp, stmt1); 
		push(ifStmt);
		}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 285 "bar.y" /* yacc.c:1646  */
    {
		NODE *stmt2 = pop(); 
		NODE *stmt1 = pop(); 
		NODE *exp = pop(); 
		NODE *ifStmt = nodeS("If Statment", nonterminal, _IFSTMT); 
		mkSubtree(ifStmt, exp); 
		mkSibling(exp, stmt1); 
		mkSibling(stmt1, stmt2); 
		push(ifStmt);
		}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 296 "bar.y" /* yacc.c:1646  */
    {
			NODE *defaultNode = pop(); 
			NODE *caseList = pop(); 
			NODE *exp = pop(); 
			NODE *swStmt = nodeS("SwitchStatement", nonterminal, _SWSTMT); 
			mkSubtree(swStmt, exp);
                        mkSibling(exp, caseList);
			NODE *temp;
	                temp = caseList;
        	        // Traverse to the last node
        	        while(temp->sibling != NULL)
                	    temp = temp->sibling;
                        mkSibling(temp, defaultNode);
			push(swStmt);
			}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 312 "bar.y" /* yacc.c:1646  */
    {
		NODE *stmtList = pop(); 
	 	NODE *intNode = nodeI((yyvsp[-2].iVal), terminal); 
		NODE *caseNode = nodeS("Case", terminal, _CASE); 
		NODE *caseList = pop(); 
		NODE *temp;
        	temp = caseList;
	        // Traverse to the last node
        	while(temp->sibling != NULL)
        	    temp = temp->sibling;
		mkSibling(temp, caseNode); 
		mkSubtree(caseNode, intNode); 
		mkSibling(intNode, stmtList); 			

		push(caseList);
		}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 328 "bar.y" /* yacc.c:1646  */
    {
		NODE *intNode = nodeI((yyvsp[-2].iVal), terminal); 
		NODE *caseNode = nodeS("Case", terminal, _CASE); 
		NODE *stmtList = pop(); 
		mkSubtree(caseNode, intNode); 
		mkSibling(intNode, stmtList); 
		push(caseNode);
		}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 337 "bar.y" /* yacc.c:1646  */
    {
		NODE *stmList = pop(); 
		NODE *defaultNode = nodeS("Default", terminal, _DEFAULT); 
		mkSubtree(defaultNode, stmList); 
		push(defaultNode);
		}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 343 "bar.y" /* yacc.c:1646  */
    {
		NODE *defaultNode = nodeS("Default", nonterminal, _DEFAULT); 
		push(defaultNode);
		}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 348 "bar.y" /* yacc.c:1646  */
    {
			NODE *exp = pop(); 
			NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); 
			mkSubtree(reStmt, exp); 
			push(reStmt);
			}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 354 "bar.y" /* yacc.c:1646  */
    {
			NODE *reStmt = nodeS("ReturnStatement", nonterminal, _RTSTMT); 
			push(reStmt);
			}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 359 "bar.y" /* yacc.c:1646  */
    {
		NODE *brkStmt=nodeS("BreakStatment", nonterminal, _BRKSTMT); 
		push(brkStmt);
		}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 370 "bar.y" /* yacc.c:1646  */
    {
			NODE *exp = pop(); 
			NODE *assign = pop(); 
			NODE *var = pop(); 
			mkSubtree(assign, var); 
			mkSibling(var, exp); 
			push(assign);
			}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 379 "bar.y" /* yacc.c:1646  */
    {NODE *id = nodeS((yyvsp[0].sVal), terminal, _ID); push(id);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 380 "bar.y" /* yacc.c:1646  */
    {
		NODE *sltList = pop(); 
		NODE *id = nodeS((yyvsp[-1].sVal), terminal, _ID); 
		NODE *id_slt = nodeS("IdSelectorList", nonterminal, _ID_SLTS); 
		mkSubtree(id_slt, id); 
		mkSibling(id, sltList); 
		push(id_slt);
		}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 389 "bar.y" /* yacc.c:1646  */
    {
		NODE *selector = pop(); 
		NODE *sltList = pop(); 
		NODE* temp; 
		temp = sltList->child; 
		while(temp->sibling != NULL)  
			temp = temp->sibling; 
		mkSibling(temp,selector); 
		push(sltList);
		}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 399 "bar.y" /* yacc.c:1646  */
    {
		NODE *sltList = nodeS("SelectorList", nonterminal, _SLTLIST); 
		NODE *selector = pop(); 
		mkSubtree(sltList, selector);
		push(sltList);
		}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 406 "bar.y" /* yacc.c:1646  */
    {
		NODE *id = nodeS((yyvsp[0].sVal), terminal, _ID); 
		NODE *selector = nodeS("StructMember", nonterminal, _STRMBR); 
		mkSubtree(selector, id); 
		push(selector);
		}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 412 "bar.y" /* yacc.c:1646  */
    {
		NODE *arrIndex = nodeS("ArrIndex", nonterminal, _ARRINDEX); 
		NODE *exp = pop(); 
		mkSubtree(arrIndex, exp); 
		push(arrIndex);
		}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 419 "bar.y" /* yacc.c:1646  */
    {
			NODE *andExp = pop(); 
			NODE *or = nodeS("||", terminal, _OPER);
			NODE *simpleExp = pop(); 
			mkSubtree(or, simpleExp); 
			mkSibling(simpleExp, andExp); 
			push(or);
			}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 429 "bar.y" /* yacc.c:1646  */
    {
		NODE *relExp = pop(); 
		NODE *and = nodeS("&&", terminal, _OPER); 
		NODE *andExp = pop(); 
		mkSubtree(and, andExp); 
		mkSibling(andExp, relExp); 
		push(and);
		}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 439 "bar.y" /* yacc.c:1646  */
    {
		NODE *addExp = pop(); 
		NODE *relOper = pop(); 
		NODE *relExp = pop(); 
		mkSubtree(relOper, relExp); 
		mkSibling(relExp, addExp); 
		push(relOper);
		}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 449 "bar.y" /* yacc.c:1646  */
    {NODE *less = nodeS("<", terminal, _OPER); push(less);}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 450 "bar.y" /* yacc.c:1646  */
    {NODE *lequal = nodeS("<=", terminal, _OPER); push(lequal);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 451 "bar.y" /* yacc.c:1646  */
    {NODE *greater = nodeS(">", terminal, _OPER); push(greater);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 452 "bar.y" /* yacc.c:1646  */
    {NODE *gequal = nodeS(">=", terminal, _OPER); push(gequal);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 453 "bar.y" /* yacc.c:1646  */
    {NODE *equal = nodeS("==", terminal, _OPER); push(equal);}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 454 "bar.y" /* yacc.c:1646  */
    {NODE *nequal = nodeS("!=", terminal, _OPER); push(nequal);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 456 "bar.y" /* yacc.c:1646  */
    {
		NODE *term = pop(); 
		NODE *oper1 = pop(); 
		NODE *addExp = pop(); 
		mkSubtree(oper1, addExp); 
		mkSibling(addExp, term); 
		push(addExp);
		}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 466 "bar.y" /* yacc.c:1646  */
    {NODE *plu = nodeS("+", terminal, _OPER); push(plu);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 467 "bar.y" /* yacc.c:1646  */
    {NODE *min = nodeS("-", terminal, _OPER); push(min);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 469 "bar.y" /* yacc.c:1646  */
    {
	NODE *factor = pop(); 
	NODE *oper2 = pop(); 
	NODE *term = pop(); 
	mkSubtree(oper2, term); 
	mkSibling(term, factor); 
	push(oper2);
	}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 479 "bar.y" /* yacc.c:1646  */
    {NODE *mul = nodeS("*", terminal, _OPER); push(mul);}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 480 "bar.y" /* yacc.c:1646  */
    {NODE *div = nodeS("/", terminal, _OPER); push(div);}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 481 "bar.y" /* yacc.c:1646  */
    {NODE *mod = nodeS("%", terminal, _OPER); push(mod);}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 485 "bar.y" /* yacc.c:1646  */
    {
		NODE *factor = pop(); 
		NODE *min = pop(); 
		mkSubtree(min, factor); 
		push(min);
		}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 492 "bar.y" /* yacc.c:1646  */
    {
	NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); 
	NODE *incDec= pop(); 
	NODE *var = pop(); 
	mkSubtree(incDecExp, var); 
	mkSibling(var, incDec); 
	push(incDecExp);
	}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 500 "bar.y" /* yacc.c:1646  */
    {
	NODE *incDecExp = nodeS("IncDecExpression", nonterminal, _INCDEC_EXP); 
	NODE *var = pop(); 
	NODE *incDec = pop(); 
	mkSubtree(incDecExp, incDec); 
	mkSibling(incDec, var); 
	push(incDecExp);
	}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 510 "bar.y" /* yacc.c:1646  */
    {
		NODE *intNode = nodeI((yyvsp[0].iVal), terminal); 
		push(intNode);
		}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 514 "bar.y" /* yacc.c:1646  */
    {NODE *realNode = nodeR((yyvsp[0].rVal), terminal); push(realNode);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 516 "bar.y" /* yacc.c:1646  */
    {NODE *pluplu = nodeS("++", terminal, _OPER); push(pluplu);}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 517 "bar.y" /* yacc.c:1646  */
    {NODE *minmin = nodeS("--", terminal, _OPER); push(minmin);}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 519 "bar.y" /* yacc.c:1646  */
    {
		NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); 
		NODE *cpdStmt = pop(); 
		NODE *exp = pop(); 
		mkSubtree(whlStmt, exp); 
		mkSibling(exp, cpdStmt); 
		push(whlStmt);
		}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 527 "bar.y" /* yacc.c:1646  */
    {
		NODE *whlStmt = nodeS("WhileStatement", nonterminal, _WHLSTMT); 
		NODE *exp = pop(); 
		mkSubtree(whlStmt, exp); 
		push(whlStmt);
		}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 534 "bar.y" /* yacc.c:1646  */
    {
		NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); 
		NODE *exp3 = pop(); 
		NODE *exp2 = pop(); 
		NODE *exp1 = pop(); 
		mkSubtree(forStmt, exp1); 
		mkSibling(exp1, exp2); 
		mkSibling(exp2, exp3); 
		push(forStmt);
		}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 544 "bar.y" /* yacc.c:1646  */
    {
		NODE *forStmt = nodeS("ForStatement", nonterminal, _FORSTMT); 
		NODE *cpdStmt = pop(); 
		NODE *exp3 = pop(); 
		NODE *exp2 = pop(); 
		NODE *exp1 = pop(); 
		mkSubtree(forStmt, exp1);
		mkSibling(exp1, exp2); 
		mkSibling(exp2, exp3); 
		mkSibling(exp3, cpdStmt); 
		push(forStmt);
		}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 557 "bar.y" /* yacc.c:1646  */
    {
		NODE *funCall = nodeS("FunctionCall", nonterminal, _FUNCALL); 
		NODE *id = nodeS((yyvsp[-3].sVal), terminal, _ID); 
		NODE *argmentNode = pop();
		mkSubtree(funCall, id);
	        mkSibling(id, argmentNode);
		push(funCall);
		}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 566 "bar.y" /* yacc.c:1646  */
    {
	  	NODE *args = nodeS("Args", nonterminal, _ARGS); 
		NODE *argumentList = pop();  
		mkSubtree(args, argumentList); 
		push(args);
		}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 572 "bar.y" /* yacc.c:1646  */
    {NODE *argsNode = nodeS("Args", nonterminal, _ARGS); push(argsNode);}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 574 "bar.y" /* yacc.c:1646  */
    {
		NODE *expNode = pop(); 
		NODE *argList = pop();
		NODE* temp;
        	temp = argList;
	        // Traverse to the last node
        	while(temp->sibling != NULL)
	            temp = temp->sibling;
		mkSibling(temp, expNode);
		push(argList);
		}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 585 "bar.y" /* yacc.c:1646  */
    {
			NODE *strNode = nodeS((yyvsp[0].sVal), terminal, _STRING);
			NODE *argList = pop();
			NODE* temp;
                	temp = argList;
        	        // Traverse to the last node
	                while(temp->sibling != NULL)
                	    temp = temp->sibling;
        	        mkSibling(temp, strNode);
	                push(argList);
			}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 597 "bar.y" /* yacc.c:1646  */
    {NODE *stringNode = nodeS((yyvsp[0].sVal), terminal, _STRING); push(stringNode);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 599 "bar.y" /* yacc.c:1646  */
    {NODE *asignNode = nodeS("=", terminal, _OPER); push(asignNode);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 600 "bar.y" /* yacc.c:1646  */
    {NODE *minaigNode = nodeS("-=", terminal, _OPER); push(minaigNode);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 601 "bar.y" /* yacc.c:1646  */
    {NODE *pluaigNode = nodeS("+=", terminal, _OPER); push(pluaigNode);}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 602 "bar.y" /* yacc.c:1646  */
    {NODE *mluaigNode = nodeS("*=", terminal, _OPER); push(mluaigNode);}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 603 "bar.y" /* yacc.c:1646  */
    {NODE *divaigNode = nodeS("/=", terminal, _OPER); push(divaigNode);}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 604 "bar.y" /* yacc.c:1646  */
    {NODE *modaigNode = nodeS("%=", terminal, _OPER); push(modaigNode);}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2346 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 606 "bar.y" /* yacc.c:1906  */

int main(int argc, char* argv[]){
	if(argc == 1)	exit(0);
	extern FILE *yyin;
	initStack();
	yyin = fopen(argv[1], "r");
	yyparse();
	printTree(pop());
	fclose(yyin);
	return 0;
}
