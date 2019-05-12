/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 11 "lingzhang.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <stack>
#include "SymbolTable.h"
#include <math.h>
#include <cmath>
using namespace std;

#define ARITHMETIC_OP   1
#define LOGICAL_OP      2
#define RELATIONAL_OP   3
#define ARITHMETIC_OP_MOD 4
#define ARITHMETIC_OP_DIV 5
#define ARITHMETIC_OP_MUL 6
#define ARITHMETIC_OP_ADD 7
#define ARITHMETIC_OP_SUB 8
#define ARITHMETIC_OP_POW 9
#define RELATIONAL_OP_LESS   10
#define RELATIONAL_OP_GREATER   11
#define RELATIONAL_OP_LEQ   12
#define RELATIONAL_OP_GEQ   13
#define RELATIONAL_OP_NEQ   14
#define RELATIONAL_OP_EQL   15
#define LOGICAL_OP_OR   16
#define LOGICAL_OP_AND  17



#define ERR_CANNOT_BE_FUNCT_NULL_LIST_OR_STR	0
#define ERR_CANNOT_BE_FUNCT					1 
#define ERR_CANNOT_BE_FUNCT_OR_NULL			2
#define ERR_CANNOT_BE_FUNCT_OR_NULL_OR_LIST		3
#define ERR_CANNOT_BE_LIST					4 
#define ERR_MUST_BE_LIST					5
#define ERR_MUST_BE_FUNCT					6
#define ERR_MUST_BE_INTEGER					7
#define ERR_MUST_BE_INT_FLOAT_OR_BOOL			8
#define ERR_TOO_FEW_PARAMS					9
#define ERR_TOO_MANY_PARAMS					10
#define ERR_NON_INT_FUNCT_PARAM				11
#define ERR_MULTIPLY_DEFINED_IDENT			12
#define ERR_UNDEFINED_IDENT					13
#define ERR_ERROR						14

const int NUM_ERR_MESSAGES = 15;  // should be ERR_ERROR + 1

const string ERR_MSG[NUM_ERR_MESSAGES] = {
"cannot be function or null or list or string",
"cannot be function",
"cannot be function or null",
"cannot be function or null or list",
"cannot be list",
"must be list",
"must be function",
"must be integer",
"must be integer or float or bool",
"Too few parameters in function call",
"Too many parameters in function call",
"Function parameters must be integer",
"Multiply defined identifier",
"Undefined identifier",
"<undefined error>"
};

// constant to suppress token printing
const bool suppressTokenOutput = true;

int line_num = 1;
int numExprs = 0;

stack<SYMBOL_TABLE> scopeStack; // stack of scope hashtables

bool isIntOrFloatOrBoolCompatible(const int theType);
bool isIntCompatible(const int theType);
bool isBoolCompatible(const int theType);
bool isFloatCompatible(const int theType);
bool isListCompatible(const int theType);
bool isInvalidOperandType(const int theType);
bool isArithmetic(const int theType);
bool isRelational(const int theType);
bool isLogical(const int theType);
void beginScope();
void endScope();
void cleanUp();
void printValue(TYPE_INFO type_info);
TYPE_INFO findEntryInAnyScope(const string the_name);

void semanticError(const int argNum, const int errNum);

void printTokenInfo(const char* token_type, const char* lexeme);

void printRule(const char *, const char *);

int yyerror(const char *s) 
{
    printf("Line %d: %s\n", line_num, s);
    cleanUp();
    exit(1);
}

extern "C" 
{
    int yyparse(void);
    int yylex(void);
    int yywrap() { return 1; }
}



/* Line 189 of yacc.c  */
#line 186 "lingzhang.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IDENT = 258,
     T_INTCONST = 259,
     T_FLOATCONST = 260,
     T_UNKNOWN = 261,
     T_STRCONST = 262,
     T_IF = 263,
     T_ELSE = 264,
     T_WHILE = 265,
     T_FUNCTION = 266,
     T_FOR = 267,
     T_IN = 268,
     T_NEXT = 269,
     T_BREAK = 270,
     T_TRUE = 271,
     T_FALSE = 272,
     T_QUIT = 273,
     T_PRINT = 274,
     T_CAT = 275,
     T_READ = 276,
     T_LPAREN = 277,
     T_RPAREN = 278,
     T_LBRACE = 279,
     T_RBRACE = 280,
     T_LBRACKET = 281,
     T_RBRACKET = 282,
     T_SEMICOLON = 283,
     T_COMMA = 284,
     T_ADD = 285,
     T_SUB = 286,
     T_MULT = 287,
     T_DIV = 288,
     T_MOD = 289,
     T_POW = 290,
     T_LT = 291,
     T_LE = 292,
     T_GT = 293,
     T_GE = 294,
     T_EQ = 295,
     T_NE = 296,
     T_NOT = 297,
     T_AND = 298,
     T_OR = 299,
     T_ASSIGN = 300,
     T_LIST = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 124 "lingzhang.y"

    char* text;
    int num;
    bool flag;
    TYPE_INFO typeInfo;



/* Line 214 of yacc.c  */
#line 277 "lingzhang.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 289 "lingzhang.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    44,    48,    49,    53,    59,    63,    65,    66,    73,
      74,    75,    85,    90,    94,    96,    97,   103,   109,   110,
     114,   119,   124,   128,   129,   130,   138,   140,   142,   143,
     145,   149,   154,   156,   158,   159,   161,   162,   167,   169,
     173,   176,   180,   181,   184,   188,   189,   191,   193,   197,
     200,   202,   204,   206,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    53,    -1,    56,    -1,    58,
      -1,    51,    -1,    80,    -1,    63,    -1,    67,    -1,    68,
      -1,    61,    -1,    69,    -1,    75,    -1,    66,    -1,     4,
      -1,     7,    -1,     5,    -1,    16,    -1,    17,    -1,    24,
      49,    52,    25,    -1,    28,    49,    52,    -1,    -1,    54,
      23,    55,    -1,    54,    23,    55,     9,    49,    -1,     8,
      22,    49,    -1,    49,    -1,    -1,    10,    22,    49,    57,
      23,    49,    -1,    -1,    -1,    12,    22,     3,    59,    13,
      49,    60,    23,    49,    -1,    46,    22,    62,    23,    -1,
      50,    29,    62,    -1,    50,    -1,    -1,     3,    65,    64,
      45,    49,    -1,    26,    26,    49,    27,    27,    -1,    -1,
      18,    22,    23,    -1,    19,    22,    49,    23,    -1,    20,
      22,    49,    23,    -1,    21,    22,    23,    -1,    -1,    -1,
      11,    70,    22,    72,    71,    23,    51,    -1,    74,    -1,
      73,    -1,    -1,     3,    -1,     3,    29,    74,    -1,     3,
      22,    76,    23,    -1,    78,    -1,    77,    -1,    -1,    49,
      -1,    -1,    49,    79,    29,    78,    -1,    81,    -1,    81,
      88,    81,    -1,    83,    82,    -1,    86,    83,    82,    -1,
      -1,    85,    84,    -1,    87,    85,    84,    -1,    -1,    89,
      -1,    50,    -1,    22,    49,    23,    -1,    42,    85,    -1,
      30,    -1,    31,    -1,    44,    -1,    32,    -1,    33,    -1,
      43,    -1,    34,    -1,    35,    -1,    36,    -1,    38,    -1,
      37,    -1,    39,    -1,    40,    -1,    41,    -1,    91,    -1,
      90,    -1,     3,    26,    26,    49,    27,    27,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   170,   170,   179,   188,   198,   208,   245,   259,   296,
     334,   344,   353,   363,   373,   386,   395,   404,   413,   422,
     433,   504,   579,   589,   609,   641,   659,   671,   670,   698,
     727,   697,   741,   761,   776,   795,   794,  1019,  1029,  1035,
    1046,  1094,  1111,  1144,  1151,  1143,  1166,  1170,  1177,  1182,
    1201,  1221,  1242,  1248,  1257,  1262,  1272,  1271,  1285,  1303,
    1361,  1483,  1620,  1630,  1783,  1936,  1947,  1996,  2004,  2039,
    2057,  2062,  2067,  2074,  2080,  2085,  2090,  2095,  2102,  2107,
    2112,  2117,  2122,  2127,  2134,  2146,  2160,  2197
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENT", "T_INTCONST", "T_FLOATCONST",
  "T_UNKNOWN", "T_STRCONST", "T_IF", "T_ELSE", "T_WHILE", "T_FUNCTION",
  "T_FOR", "T_IN", "T_NEXT", "T_BREAK", "T_TRUE", "T_FALSE", "T_QUIT",
  "T_PRINT", "T_CAT", "T_READ", "T_LPAREN", "T_RPAREN", "T_LBRACE",
  "T_RBRACE", "T_LBRACKET", "T_RBRACKET", "T_SEMICOLON", "T_COMMA",
  "T_ADD", "T_SUB", "T_MULT", "T_DIV", "T_MOD", "T_POW", "T_LT", "T_LE",
  "T_GT", "T_GE", "T_EQ", "T_NE", "T_NOT", "T_AND", "T_OR", "T_ASSIGN",
  "T_LIST", "$accept", "N_START", "N_EXPR", "N_CONST", "N_COMPOUND_EXPR",
  "N_EXPR_LIST", "N_IF_EXPR", "N_COND_IF", "N_THEN_EXPR", "N_WHILE_EXPR",
  "$@1", "N_FOR_EXPR", "$@2", "$@3", "N_LIST_EXPR", "N_CONST_LIST",
  "N_ASSIGNMENT_EXPR", "@4", "N_INDEX", "N_QUIT_EXPR", "N_OUTPUT_EXPR",
  "N_INPUT_EXPR", "N_FUNCTION_DEF", "$@5", "@6", "N_PARAM_LIST",
  "N_NO_PARAMS", "N_PARAMS", "N_FUNCTION_CALL", "N_ARG_LIST", "N_NO_ARGS",
  "N_ARGS", "$@7", "N_ARITHLOGIC_EXPR", "N_SIMPLE_ARITHLOGIC",
  "N_ADD_OP_LIST", "N_TERM", "N_MULT_OP_LIST", "N_FACTOR", "N_ADD_OP",
  "N_MULT_OP", "N_REL_OP", "N_VAR", "N_SINGLE_ELEMENT", "N_ENTIRE_VAR", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      51,    52,    52,    53,    53,    54,    55,    57,    56,    59,
      60,    58,    61,    62,    62,    64,    63,    65,    65,    66,
      67,    67,    68,    70,    71,    69,    72,    72,    73,    74,
      74,    75,    76,    76,    77,    78,    79,    78,    80,    80,
      81,    82,    82,    83,    84,    84,    85,    85,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     3,     5,     3,     1,     0,     6,     0,
       0,     9,     4,     3,     1,     0,     5,     5,     0,     3,
       4,     4,     3,     0,     0,     7,     1,     1,     0,     1,
       3,     4,     1,     1,     0,     1,     0,     4,     1,     3,
       2,     3,     0,     2,     3,     0,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    87,    15,    17,    16,     0,     0,    43,     0,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,    67,     6,     3,     0,     4,     5,    11,     8,    14,
       9,    10,    12,    13,     7,    58,    62,    65,    66,    85,
      84,    54,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    87,    69,     0,     1,     0,    78,
      80,    79,    81,    82,    83,     0,    70,    71,    72,    60,
       0,    73,    74,    76,    77,    75,    63,     0,    55,     0,
      53,    52,     0,     0,    25,    27,    48,    29,    39,     0,
       0,    42,    68,     0,     0,     0,    34,     0,    26,    23,
      59,    62,    65,     0,    51,     0,     0,     0,    49,    44,
      47,    46,     0,    40,    41,    22,    20,     0,     0,    32,
       0,    61,    64,     0,     0,    36,     0,     0,     0,     0,
      21,     0,    33,    24,    57,    86,    28,    50,     0,    30,
       0,    45,     0,    86,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    78,    21,    22,    94,    23,    24,    99,    25,
     107,    26,   112,   142,    27,    97,    28,    83,    43,    29,
      30,    31,    32,    46,   128,   109,   110,   111,    33,    79,
      80,    81,   103,    34,    35,    69,    36,    76,    37,    70,
      77,    65,    38,    39,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int8 yypact[] =
{
       1,   -19,   -56,   -56,   -56,   -12,    -8,   -56,     2,   -56,
     -56,     8,    10,    11,    14,     1,     1,    24,    15,    38,
     -56,   -56,   -56,   -56,    16,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,    36,     4,    35,   -56,   -56,
     -56,     1,    25,   -56,     1,     1,    20,    51,    33,     1,
       1,    34,    37,    31,    45,   -56,    48,   -56,     1,   -56,
     -56,   -56,   -56,   -56,   -56,    24,   -56,   -56,   -56,   -56,
      24,   -56,   -56,   -56,   -56,   -56,   -56,    24,    32,    56,
     -56,   -56,     1,    39,   -56,   -56,    77,   -56,   -56,    58,
      60,   -56,   -56,     1,    61,    59,    62,    64,   -56,    79,
     -56,     4,    35,    63,   -56,    67,     1,    66,    68,   -56,
     -56,   -56,    82,   -56,   -56,    31,   -56,     1,    48,   -56,
       1,   -56,   -56,     1,    69,   -56,     1,    77,    75,     1,
     -56,    72,   -56,   -56,   -56,    55,   -56,   -56,    78,   -56,
      74,   -56,    80,   -56,     1,   -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,     0,   -55,   -48,   -11,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -13,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -20,   -56,   -56,
     -56,   -14,   -56,   -56,    43,     9,    41,    12,   -15,   -56,
     -56,   -56,   -56,   -56,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -57
static const yytype_int16 yytable[] =
{
      20,    96,    55,    41,     1,     2,     3,    42,     4,     5,
      44,     6,     7,     8,    45,    52,    53,     9,    10,    11,
      12,    13,    14,    15,    47,    16,   -38,    54,     2,     3,
      48,     4,    49,    50,    66,    67,    51,    56,    57,    58,
       9,    10,    86,    17,    84,    85,    15,    18,    68,    89,
      90,    82,     2,     3,    87,     4,    88,    91,    98,    93,
      92,   -56,   102,    96,     9,    10,    17,    71,    72,    73,
      74,    95,    59,    60,    61,    62,    63,    64,    75,   104,
     108,   113,   105,   114,   106,   117,   116,   119,   120,   126,
     141,   118,   123,   115,   124,   129,   135,   127,   138,   140,
     -37,   143,    16,   144,   130,   132,   125,   137,   100,   134,
     121,   101,     0,     0,   122,     0,     0,   131,     0,     0,
     133,     0,     0,     0,     0,     0,   136,     0,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   145
};

static const yytype_int16 yycheck[] =
{
       0,    56,    17,    22,     3,     4,     5,    26,     7,     8,
      22,    10,    11,    12,    22,    15,    16,    16,    17,    18,
      19,    20,    21,    22,    22,    24,    45,     3,     4,     5,
      22,     7,    22,    22,    30,    31,    22,    22,     0,    23,
      16,    17,    22,    42,    44,    45,    22,    46,    44,    49,
      50,    26,     4,     5,     3,     7,    23,    23,    58,    28,
      23,    29,    77,   118,    16,    17,    42,    32,    33,    34,
      35,    26,    36,    37,    38,    39,    40,    41,    43,    23,
       3,    23,    82,    23,    45,    26,    25,    23,     9,    23,
     138,    29,    29,    93,    27,    13,    27,    29,    23,    27,
      45,    27,    24,    23,   115,   118,   106,   127,    65,   123,
     101,    70,    -1,    -1,   102,    -1,    -1,   117,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   144
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    16,
      17,    18,    19,    20,    21,    22,    24,    42,    46,    48,
      49,    50,    51,    53,    54,    56,    58,    61,    63,    66,
      67,    68,    69,    75,    80,    81,    83,    85,    89,    90,
      91,    22,    26,    65,    22,    22,    70,    22,    22,    22,
      22,    22,    49,    49,     3,    85,    22,     0,    23,    36,
      37,    38,    39,    40,    41,    88,    30,    31,    44,    82,
      86,    32,    33,    34,    35,    43,    84,    87,    49,    76,
      77,    78,    26,    64,    49,    49,    22,     3,    23,    49,
      49,    23,    23,    28,    52,    26,    50,    62,    49,    55,
      81,    83,    85,    79,    23,    49,    45,    57,     3,    72,
      73,    74,    59,    23,    23,    49,    25,    26,    29,    23,
       9,    82,    84,    29,    27,    49,    23,    29,    71,    13,
      52,    49,    62,    49,    78,    27,    49,    74,    23,    49,
      27,    51,    60,    27,    23,    49
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1464 of yacc.c  */
#line 171 "lingzhang.y"
    {
                    printRule("START", "EXPR");
                    printf("\n---- Completed parsing ----\n");
                    printf("\nValue of the expression is: ");
                    printValue((yyvsp[(1) - (1)].typeInfo));
                    return 0;
                ;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 180 "lingzhang.y"
    {
                    printRule("EXPR", "IF_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
                ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 189 "lingzhang.y"
    {
                    printRule("EXPR", "WHILE_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
                    
                ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 199 "lingzhang.y"
    {
                    printRule("EXPR", "FOR_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    

                    ;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 209 "lingzhang.y"
    {
                    printRule("EXPR", "COMPOUND_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;                        
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (1)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        
                        

                        
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    

                    ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 246 "lingzhang.y"
    {
                    printRule("EXPR", "ARITHLOGIC_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;                        

                    ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 260 "lingzhang.y"
    {
                    printRule("EXPR", "ASSIGNMENT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;                        
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (1)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        
                        

                        
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    

                    ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 297 "lingzhang.y"
    {
                    printRule("EXPR", "OUTPUT_EXPR");
                    
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (1)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
   
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
                    ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 335 "lingzhang.y"
    {
                    printRule("EXPR", "INPUT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
 
                ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 345 "lingzhang.y"
    {
                    printRule("EXPR", "LIST_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
                    ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 354 "lingzhang.y"
    {
                    printRule("EXPR", "FUNCTION_DEF");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    

                    ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 364 "lingzhang.y"
    {
                    printRule("EXPR", "FUNCTION_CALL");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    

                    ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 374 "lingzhang.y"
    {
                    printRule("EXPR", "QUIT_EXPR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    

                    exit(1);
                ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 387 "lingzhang.y"
    {
                    printRule("CONST", "INTCONST");
                    (yyval.typeInfo).type = INT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).val_int = atoi((yyvsp[(1) - (1)].text));
                ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 396 "lingzhang.y"
    {
                    printRule("CONST", "STRCONST");
                    (yyval.typeInfo).type = STR;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].text));
                ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 405 "lingzhang.y"
    {
                    printRule("CONST", "FLOATCONST");
                    (yyval.typeInfo).type = FLOAT;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).val_float = atof((yyvsp[(1) - (1)].text));
                ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 414 "lingzhang.y"
    {
                    printRule("CONST", "TRUE");
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).val_bool = true;
                ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 423 "lingzhang.y"
    {
                    printRule("CONST", "FALSE");
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).val_bool = false;
                ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 434 "lingzhang.y"
    {
                    printRule("COMPOUND_EXPR",
                              "{ EXPR EXPR_LIST }");
			    if ((yyvsp[(3) - (4)].typeInfo).type == NOT_APPLICABLE)
			    {
                    (yyval.typeInfo).type = (yyvsp[(2) - (4)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(2) - (4)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(2) - (4)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(2) - (4)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(2) - (4)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(2) - (4)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(2) - (4)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(2) - (4)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(2) - (4)].typeInfo).is_null;                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(2) - (4)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
   
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
			    }
			    else
			    {
                    (yyval.typeInfo).type = (yyvsp[(3) - (4)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(3) - (4)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(3) - (4)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (4)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(3) - (4)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(3) - (4)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(3) - (4)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (4)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(3) - (4)].typeInfo).is_null;                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(3) - (4)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
   
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
			    }
                ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 505 "lingzhang.y"
    {
                    printRule("EXPR_LIST", "; EXPR EXPR_LIST");
			    if ((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)
			    {
                    (yyval.typeInfo).type = (yyvsp[(2) - (3)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(2) - (3)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(2) - (3)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(2) - (3)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(2) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(2) - (3)].typeInfo).is_null; 
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(2) - (3)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        
                        

                        
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
			    }
			    else
			    {
                    (yyval.typeInfo).type = (yyvsp[(3) - (3)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(3) - (3)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(3) - (3)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (3)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(3) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(3) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(3) - (3)].typeInfo).is_null;      
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(3) - (3)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {
                        
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        
                        

                        
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
			    }
                ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 579 "lingzhang.y"
    {
                    printRule("EXPR_LIST", "epsilon");
                    (yyval.typeInfo).type = NOT_APPLICABLE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).is_null = true;
                ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 590 "lingzhang.y"
    {
                    printRule("IF_EXPR", "IF ( EXPR ) EXPR");
                    
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (3)].typeInfo).isParam;
                    if((yyvsp[(1) - (3)].typeInfo).val_bool || (yyvsp[(1) - (3)].typeInfo).val_int != 0 || (yyvsp[(1) - (3)].typeInfo).val_float != 0){
                        (yyval.typeInfo).type = (yyvsp[(3) - (3)].typeInfo).type;
                        (yyval.typeInfo).isParam = (yyvsp[(3) - (3)].typeInfo).isParam;
                        (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool;
                        (yyval.typeInfo).val_int = (yyvsp[(3) - (3)].typeInfo).val_int;
                        (yyval.typeInfo).val_float = (yyvsp[(3) - (3)].typeInfo).val_float;
                        strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (3)].typeInfo).val_string);
                        (yyval.typeInfo).is_null= (yyvsp[(3) - (3)].typeInfo).is_null;                     
                    }else{
                        (yyval.typeInfo).type = NULL_TYPE;
                        (yyval.typeInfo).is_null = true;
                    }
			;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 610 "lingzhang.y"
    {
                    printRule("IF_EXPR", 
                              "IF ( EXPR ) EXPR ELSE EXPR");
                    if((yyvsp[(5) - (5)].typeInfo).type == FUNCTION)
                     semanticError(3, ERR_CANNOT_BE_FUNCT);
                    (yyval.typeInfo).type = (yyvsp[(3) - (5)].typeInfo).type ^ (yyvsp[(5) - (5)].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (5)].typeInfo).isParam || (yyvsp[(5) - (5)].typeInfo).isParam;
                    
                    if((yyvsp[(1) - (5)].typeInfo).val_bool || (yyvsp[(1) - (5)].typeInfo).val_int != 0 || (yyvsp[(1) - (5)].typeInfo).val_float != 0){
                        (yyval.typeInfo).type = (yyvsp[(3) - (5)].typeInfo).type;
                        (yyval.typeInfo).isParam = (yyvsp[(3) - (5)].typeInfo).isParam;
                        (yyval.typeInfo).val_bool = (yyvsp[(3) - (5)].typeInfo).val_bool;
                        (yyval.typeInfo).val_int = (yyvsp[(3) - (5)].typeInfo).val_int;
                        (yyval.typeInfo).val_float = (yyvsp[(3) - (5)].typeInfo).val_float;
                        strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (5)].typeInfo).val_string);
                        (yyval.typeInfo).is_null= (yyvsp[(3) - (5)].typeInfo).is_null;  
                    }else{
                        (yyval.typeInfo).type = (yyvsp[(5) - (5)].typeInfo).type;
                        (yyval.typeInfo).isParam = (yyvsp[(5) - (5)].typeInfo).isParam;
                        (yyval.typeInfo).val_bool = (yyvsp[(5) - (5)].typeInfo).val_bool;
                        (yyval.typeInfo).val_int = (yyvsp[(5) - (5)].typeInfo).val_int;
                        (yyval.typeInfo).val_float = (yyvsp[(5) - (5)].typeInfo).val_float;
                        strcpy((yyval.typeInfo).val_string, (yyvsp[(5) - (5)].typeInfo).val_string);
                        (yyval.typeInfo).is_null= (yyvsp[(5) - (5)].typeInfo).is_null;                     
                    
                    }
                ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 642 "lingzhang.y"
    {
                    if(((yyvsp[(3) - (3)].typeInfo).type == FUNCTION) 
                       || ((yyvsp[(3) - (3)].typeInfo).type == LIST)
                       || ((yyvsp[(3) - (3)].typeInfo).type == NULL_TYPE) 
                       || ((yyvsp[(3) - (3)].typeInfo).type == STR)) {
                    printValue((yyvsp[(3) - (3)].typeInfo));
                     semanticError(1,
                       ERR_CANNOT_BE_FUNCT_NULL_LIST_OR_STR);}
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(3) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(3) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(3) - (3)].typeInfo).is_null;                      
			;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 660 "lingzhang.y"
    {
                    if((yyvsp[(1) - (1)].typeInfo).type == FUNCTION)
                     semanticError(2, ERR_CANNOT_BE_FUNCT);
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
			;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 671 "lingzhang.y"
    {
                    printRule("WHILE_EXPR",
                              "WHILE ( EXPR ) EXPR");
                    cout<<(yyvsp[(3) - (3)].typeInfo).type<<endl;
					if((yyvsp[(3) - (3)].typeInfo).is_null==true)
						yyerror("NULL while loop");
					if(((yyvsp[(3) - (3)].typeInfo).type == FUNCTION) 
                       || ((yyvsp[(3) - (3)].typeInfo).type == LIST)
                       || ((yyvsp[(3) - (3)].typeInfo).type == NULL_TYPE) 
                       || ((yyvsp[(3) - (3)].typeInfo).type == STR)) 
                     semanticError(1,
                       ERR_CANNOT_BE_FUNCT_NULL_LIST_OR_STR);
                ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 685 "lingzhang.y"
    {
                    if((yyvsp[(6) - (6)].typeInfo).type==NULL_TYPE)
						yyerror("NULL while loop");
					(yyval.typeInfo).type = (yyvsp[(6) - (6)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(6) - (6)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(6) - (6)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(6) - (6)].typeInfo).isParam;
                    
                    (yyval.typeInfo).is_null = true;
                ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 698 "lingzhang.y"
    {
                    printRule("FOR_EXPR", 
                              "FOR ( IDENT IN EXPR ) EXPR");
                    string lexeme = string((yyvsp[(3) - (3)].text));
                    if((yyvsp[(3) - (3)].text)==NULL)
						yyerror("NULL for");
					TYPE_INFO exprTypeInfo = 
                      scopeStack.top().findEntry(lexeme);
                    if(exprTypeInfo.type == UNDEFINED) 
                    {
                        if(!suppressTokenOutput)
                            printf("___Adding %s to symbol"
                                   " table\n", (yyvsp[(3) - (3)].text));
                        scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme,
                            {INT_OR_STR_OR_FLOAT_OR_BOOL,
				       NOT_APPLICABLE, NOT_APPLICABLE,
					 false}));
			   }
			   else
			   { 
			    if((exprTypeInfo.type == FUNCTION) || 
                       (exprTypeInfo.type == NULL_TYPE) ||
                       (exprTypeInfo.type == LIST))
				semanticError(1, 
 				 ERR_CANNOT_BE_FUNCT_OR_NULL_OR_LIST);
			   }
                ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 727 "lingzhang.y"
    {
                    if((yyvsp[(6) - (6)].typeInfo).type != LIST) 
				semanticError(2, ERR_MUST_BE_LIST);
			;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 732 "lingzhang.y"
    {
                    (yyval.typeInfo).type = (yyvsp[(9) - (9)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(9) - (9)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(9) - (9)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(9) - (9)].typeInfo).isParam;
                    (yyval.typeInfo).is_null = true;
			;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 742 "lingzhang.y"
    {
                    printRule("LIST_EXPR", 
                              "LIST ( CONST_LIST )");
                    (yyval.typeInfo).type = LIST;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).rlist = (yyvsp[(3) - (4)].typeInfo).rlist;
                    
                    /*
                    RList *temp = $3.rlist;
                    while(temp!=NULL)
                    {
                        printf("%d\n", temp->val_int);
                        temp = temp->rlist;
                    }*/
                ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 762 "lingzhang.y"
    {
                    printRule("CONST_LIST", 
                              "CONST, CONST_LIST");
                    RList *alist = NULL;
                    alist = new RList;
                    alist->type = (yyvsp[(1) - (3)].typeInfo).type;
                    alist->val_bool = (yyvsp[(1) - (3)].typeInfo).val_bool;
                    alist->val_int = (yyvsp[(1) - (3)].typeInfo).val_int;
                    alist->val_float = (yyvsp[(1) - (3)].typeInfo).val_float;
                    strcpy(alist->val_string, (yyvsp[(1) - (3)].typeInfo).val_string);
                    alist->rlist = (yyvsp[(3) - (3)].typeInfo).rlist;
                    alist->length = (yyvsp[(3) - (3)].typeInfo).rlist->length+1;
                    (yyval.typeInfo).rlist = alist;
                ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 777 "lingzhang.y"
    {
                    RList *alist = NULL;
                    alist = new RList;

                    alist->type = (yyvsp[(1) - (1)].typeInfo).type;
                    alist->val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    alist->val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    alist->val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy(alist->val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    alist->rlist = NULL;
                    alist->length = 1;
                    (yyval.typeInfo).rlist = alist;
                    
                    printRule("CONST_LIST", "CONST");
                ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 795 "lingzhang.y"
    {
                    printRule("ASSIGNMENT_EXPR", 
                              "IDENT INDEX ASSIGN EXPR");
                    string lexeme = string((yyvsp[(1) - (2)].text));
                    TYPE_INFO exprTypeInfo =
                        scopeStack.top().findEntry(lexeme);
                        
                        
                        
                    if(exprTypeInfo.type == UNDEFINED) 
                    {
                      if(!suppressTokenOutput)
                        printf("___Adding %s to symbol table\n", 
                               (yyvsp[(1) - (2)].text));
                      // add in as N/A type until the
                      // N_EXPR can be processed below to 
                      // get the correct type
                      scopeStack.top().addEntry(
                            SYMBOL_TABLE_ENTRY(lexeme,
                            {NOT_APPLICABLE, NOT_APPLICABLE,
                             NOT_APPLICABLE, false}));
                      // set flag that ident didn't already 
                        // exist
                         (yyval.flag) = false;
                    }
                    else 
			   {
                     // set flag that ident already existed
				(yyval.flag) = true;
                    }
                ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 827 "lingzhang.y"
    {
                    string lexeme = string((yyvsp[(1) - (5)].text));
                    TYPE_INFO exprTypeInfo = 
                        scopeStack.top().findEntry(lexeme);
                    if(((yyvsp[(2) - (5)].typeInfo).isIndex) &&
				 (!isListCompatible( 
                          exprTypeInfo.type))) 
				semanticError(1, ERR_MUST_BE_LIST);
			    if ((yyvsp[(3) - (5)].flag))  // ident already existed 
                    {
				if (exprTypeInfo.isParam && !isIntCompatible((yyvsp[(5) - (5)].typeInfo).type))
                     semanticError(1, ERR_MUST_BE_INTEGER);
                  
                  if(!(yyvsp[(2) - (5)].typeInfo).isIndex)
                  {
                    TYPE_INFO type_info;
                    type_info.type = (yyvsp[(5) - (5)].typeInfo).type;
                    type_info.numParams = (yyvsp[(5) - (5)].typeInfo).numParams;
                    type_info.returnType = (yyvsp[(5) - (5)].typeInfo).returnType;
                    type_info.isParam = (yyvsp[(5) - (5)].typeInfo).isParam;
                    type_info.val_bool = (yyvsp[(5) - (5)].typeInfo).val_bool;
                    type_info.val_int = (yyvsp[(5) - (5)].typeInfo).val_int;
                    type_info.val_float = (yyvsp[(5) - (5)].typeInfo).val_float;
                    strcpy(type_info.val_string, (yyvsp[(5) - (5)].typeInfo).val_string);
                    type_info.is_null= (yyvsp[(5) - (5)].typeInfo).is_null;
                    
                    type_info.rlist = new RList;
                    RList *temp = (yyvsp[(5) - (5)].typeInfo).rlist;
                    RList *temp_new = type_info.rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
                    
                    scopeStack.top().changeEntry(
                         SYMBOL_TABLE_ENTRY(lexeme,
                           type_info));
                  }
                  else
                  {
                        if((yyvsp[(2) - (5)].typeInfo).val_int<1 || (yyvsp[(2) - (5)].typeInfo).val_int>exprTypeInfo.rlist->length)
                        {
                            yyerror("Subscript out of bounds");
                        }
                        
                    //printValue(exprTypeInfo);
                    
                    TYPE_INFO type_info;
                    type_info.type = exprTypeInfo.type;
                    type_info.numParams = exprTypeInfo.numParams;
                    type_info.returnType = exprTypeInfo.returnType;
                    type_info.isParam = exprTypeInfo.isParam;
                    type_info.val_bool = exprTypeInfo.val_bool;
                    type_info.val_int = exprTypeInfo.val_int;
                    type_info.val_float = exprTypeInfo.val_float;
                    strcpy(type_info.val_string, exprTypeInfo.val_string);
                    type_info.is_null= exprTypeInfo.is_null;
                    
                    type_info.rlist = new RList;
                    RList *temp = exprTypeInfo.rlist;
                    RList *temp_new = type_info.rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }       

                    int count = (yyvsp[(2) - (5)].typeInfo).val_int;
                    RList* node = type_info.rlist;
                    while(count > 1)
                    {
                        node = node->rlist;
                        count -= 1;
                    }
                    node->type = (yyvsp[(5) - (5)].typeInfo).type;
                    node->val_bool = (yyvsp[(5) - (5)].typeInfo).val_bool;
                    node->val_int = (yyvsp[(5) - (5)].typeInfo).val_int;
                    node->val_float = (yyvsp[(5) - (5)].typeInfo).val_float;
                    strcpy(node->val_string, (yyvsp[(5) - (5)].typeInfo).val_string);
                    scopeStack.top().changeEntry(
                         SYMBOL_TABLE_ENTRY(lexeme,
                           type_info));
                    exprTypeInfo = 
                        scopeStack.top().findEntry(lexeme);
                    //printValue(exprTypeInfo);
                  }
                      
                    
                }
                else 
                {
                      // if ident didn't already exist, 
                      // just change the type
                        TYPE_INFO type_info;
                        type_info.type = (yyvsp[(5) - (5)].typeInfo).type;
                        type_info.numParams = (yyvsp[(5) - (5)].typeInfo).numParams;
                        type_info.returnType = (yyvsp[(5) - (5)].typeInfo).returnType;
                        type_info.isParam = (yyvsp[(5) - (5)].typeInfo).isParam;
                        type_info.val_bool = (yyvsp[(5) - (5)].typeInfo).val_bool;
                        type_info.val_int = (yyvsp[(5) - (5)].typeInfo).val_int;
                        type_info.val_float = (yyvsp[(5) - (5)].typeInfo).val_float;
                        strcpy(type_info.val_string, (yyvsp[(5) - (5)].typeInfo).val_string);
                        type_info.is_null= (yyvsp[(5) - (5)].typeInfo).is_null;
                        
                        type_info.rlist = new RList;
                        RList *temp = (yyvsp[(5) - (5)].typeInfo).rlist;
                        RList *temp_new = type_info.rlist;
                        while(temp!=NULL)
                        {   
                            temp_new->type = temp->type;
                            temp_new->val_bool = temp->val_bool;
                            temp_new->val_int = temp->val_int;
                            temp_new->val_float = temp->val_float;
                            strcpy(temp_new->val_string, temp->val_string);
                            temp_new->length = temp->length;
                            temp = temp->rlist;
                            if(temp!=NULL)
                                temp_new->rlist = new RList;
                            else
                                temp_new->rlist = NULL;
                            temp_new = temp_new->rlist;
                        }
                        /*
                        temp = type_info.rlist;
                        while(temp!=NULL){
                            printf("result list length: %d\n", temp->length);
                            temp = temp->rlist;
                        }*/
                        

                      
                      
                      scopeStack.top().changeEntry(
                            SYMBOL_TABLE_ENTRY(lexeme,
                            type_info));
                    }
			    if (((yyvsp[(2) - (5)].typeInfo).isIndex) && 
			        ((yyvsp[(5) - (5)].typeInfo).type == LIST))
				semanticError(1, ERR_CANNOT_BE_LIST);
                    (yyval.typeInfo).type = (yyvsp[(5) - (5)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(5) - (5)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(5) - (5)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(5) - (5)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(5) - (5)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(5) - (5)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(5) - (5)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(5) - (5)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(5) - (5)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(5) - (5)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
                ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 1021 "lingzhang.y"
    {
                    printRule("INDEX", " [[ EXPR ]]");
                    (yyval.typeInfo).isIndex = true;
                    (yyval.typeInfo).type = INT;
                    (yyval.typeInfo).val_int = (yyvsp[(3) - (5)].typeInfo).val_int;
                    
			;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 1029 "lingzhang.y"
    {
                    printRule("INDEX", " epsilon");
			    (yyval.typeInfo).isIndex = false;
                ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 1036 "lingzhang.y"
    {
                    printRule("QUIT_EXPR", "QUIT()");
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).is_null = true;
                ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 1047 "lingzhang.y"
    {
                    printRule("OUTPUT_EXPR", 
                              "PRINT ( EXPR )");
                    if(((yyvsp[(3) - (4)].typeInfo).type == FUNCTION) || 
                      ((yyvsp[(3) - (4)].typeInfo).type == NULL_TYPE)) 
				semanticError(1,
				 ERR_CANNOT_BE_FUNCT_OR_NULL);
                 
                 
                 printValue((yyvsp[(3) - (4)].typeInfo));
                    (yyval.typeInfo).type = (yyvsp[(3) - (4)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(3) - (4)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(3) - (4)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (4)].typeInfo).isParam;
                    (yyval.typeInfo).type = (yyvsp[(3) - (4)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(3) - (4)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(3) - (4)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (4)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(3) - (4)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(3) - (4)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(3) - (4)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(3) - (4)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(3) - (4)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(3) - (4)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                     
                    
                    
                    
                ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 1095 "lingzhang.y"
    {
                    printRule("OUTPUT_EXPR", 
                              "CAT ( EXPR )");
                    if(((yyvsp[(3) - (4)].typeInfo).type == FUNCTION) || 
                       ((yyvsp[(3) - (4)].typeInfo).type == NULL_TYPE)) 
				semanticError(1,
				 ERR_CANNOT_BE_FUNCT_OR_NULL);
                    printValue((yyvsp[(3) - (4)].typeInfo));
                    (yyval.typeInfo).type = NULL_TYPE;
                    (yyval.typeInfo).numParams = (yyvsp[(3) - (4)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(3) - (4)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(3) - (4)].typeInfo).isParam;
                    (yyval.typeInfo).is_null=true;
                ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 1112 "lingzhang.y"
    {
                    printRule("INPUT_EXPR", "READ ( )");
                    string buffer;
                    getline(std::cin, buffer);
                    if(buffer[0]=='+' || buffer[0]=='-' || isdigit(buffer[0]))
                    {
                        (yyval.typeInfo).type = INT;
                        (yyval.typeInfo).val_int = stoi(buffer);
                        for(int i=1;i<buffer.length();i++)
                        {
                            if(buffer[i] == '.')
                            {
                                (yyval.typeInfo).type = FLOAT;
                                (yyval.typeInfo).val_float = stof(buffer);
                                break;
                            }
                        }
                        
                        
                    }else{
                        (yyval.typeInfo).type = STR;
                        strcpy((yyval.typeInfo).val_string, buffer.c_str());
                    }
                    //printf("%d %f %s", $$.val_int, $$.val_float, $$.val_string);
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;

                    ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 1144 "lingzhang.y"
    {
			    printRule("FUNCTION_DEF",
                              "FUNCTION ( PARAM_LIST )"
                              " COMPOUND_EXPR");
                	    beginScope();
                ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 1151 "lingzhang.y"
    {
			    (yyval.num) = scopeStack.top().getNumEntries();
   		     ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 1155 "lingzhang.y"
    {
                    endScope();
                    if((yyvsp[(7) - (7)].typeInfo).type == FUNCTION) 
				semanticError(2, ERR_CANNOT_BE_FUNCT);
                    (yyval.typeInfo).type = FUNCTION;
                    (yyval.typeInfo).numParams = (yyvsp[(5) - (7)].num);
                    (yyval.typeInfo).returnType = (yyvsp[(7) - (7)].typeInfo).type;
                    (yyval.typeInfo).isParam = false;
                ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 1167 "lingzhang.y"
    {
                    printRule("PARAM_LIST", "PARAMS");
                ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 1171 "lingzhang.y"
    {
                    printRule("PARAM_LIST", "NO PARAMS");
                ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 1177 "lingzhang.y"
    {
                    printRule("NO_PARAMS", "epsilon");
                ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 1183 "lingzhang.y"
    {
                    printRule("PARAMS", "IDENT");
                    string lexeme = string((yyvsp[(1) - (1)].text));
                    if(!suppressTokenOutput)
                      printf("___Adding %s to symbol table\n",
                             (yyvsp[(1) - (1)].text));
                    // assuming params are ints
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,
                      true};
                    bool success = 
                     scopeStack.top().
                      addEntry(SYMBOL_TABLE_ENTRY
                        (lexeme, exprTypeInfo));
                    if(!success) 
				semanticError(0,
				 ERR_MULTIPLY_DEFINED_IDENT);
                ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 1202 "lingzhang.y"
    {
                    printRule("PARAMS", "IDENT, PARAMS");
                    string lexeme = string((yyvsp[(1) - (3)].text));
                    if(!suppressTokenOutput)
                     printf("___Adding %s to symbol table\n",
                           (yyvsp[(1) - (3)].text));
                    // assuming params are ints 
                    TYPE_INFO exprTypeInfo = 
                     {INT, NOT_APPLICABLE, NOT_APPLICABLE,
				true};
                    bool success =
                     scopeStack.top().addEntry(
                      SYMBOL_TABLE_ENTRY(lexeme, exprTypeInfo));
                    if(!success) 
				semanticError(0,
				 ERR_MULTIPLY_DEFINED_IDENT);
                ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 1222 "lingzhang.y"
    {
                    printRule("FUNCTION_CALL", "IDENT"
                              " ( ARG_LIST )");
                    TYPE_INFO exprTypeInfo = 
                     findEntryInAnyScope(string((yyvsp[(1) - (4)].text)));
                    if (exprTypeInfo.type == UNDEFINED) 
                      semanticError(0, ERR_UNDEFINED_IDENT);
                    if(exprTypeInfo.type != FUNCTION) 
				semanticError(1, ERR_MUST_BE_FUNCT);
                    if((yyvsp[(3) - (4)].num) > exprTypeInfo.numParams) 
				semanticError(0, ERR_TOO_MANY_PARAMS);
                    if((yyvsp[(3) - (4)].num) < exprTypeInfo.numParams) 
				semanticError(0, ERR_TOO_FEW_PARAMS);
                    (yyval.typeInfo).type = exprTypeInfo.returnType;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 1243 "lingzhang.y"
    {
                    printRule("ARG_LIST", "ARGS");
                    (yyval.num) = (yyvsp[(1) - (1)].num);
                    numExprs = 0;
                ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 1249 "lingzhang.y"
    {
                    printRule("ARG_LIST", "NO_ARGS");
                    numExprs = 0;
                    (yyval.num) = numExprs;
                ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 1257 "lingzhang.y"
    {
                    printRule("NO_ARGS", "epsilon");
                ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 1263 "lingzhang.y"
    {
                    printRule("ARGS", "EXPR");
                    numExprs++;
                    if(!isIntCompatible((yyvsp[(1) - (1)].typeInfo).type)) 
				semanticError(0,
				              ERR_NON_INT_FUNCT_PARAM);
			    (yyval.num) = numExprs;
                ;}
    break;

  case 56:

/* Line 1464 of yacc.c  */
#line 1272 "lingzhang.y"
    {
                    printRule("ARGS", "EXPR, ARGS");
                    numExprs++;
                    if(!isIntCompatible((yyvsp[(1) - (1)].typeInfo).type)) 
				semanticError(0,
				              ERR_NON_INT_FUNCT_PARAM);
                ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 1280 "lingzhang.y"
    {
			    (yyval.num) = numExprs;
			;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 1286 "lingzhang.y"
    {
                    printRule("ARITHLOGIC_EXPR",
                              "SIMPLE_ARITHLOGIC");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;
                    
                    

                ;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 1305 "lingzhang.y"
    {
                    printRule("ARITHLOGIC_EXPR",
                              "SIMPLE_ARITHLOGIC REL_OP "
                              "SIMPLE_ARITHLOGIC");
                    if(isInvalidOperandType((yyvsp[(1) - (3)].typeInfo).type))
                    	semanticError(1,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                    if(isInvalidOperandType((yyvsp[(3) - (3)].typeInfo).type)) 
                   	semanticError(2,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                    
                    //printf("in expression %f and %f\n", $1.val_float, $3.val_float);
                    (yyval.typeInfo).type = BOOL; 
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    
                    if((yyvsp[(1) - (3)].typeInfo).type == BOOL && (yyvsp[(1) - (3)].typeInfo).val_bool){
                        (yyvsp[(1) - (3)].typeInfo).val_float = 1;
                    }else if((yyvsp[(1) - (3)].typeInfo).type == BOOL && !((yyvsp[(1) - (3)].typeInfo).val_bool)){
                        (yyvsp[(1) - (3)].typeInfo).val_float = 0;
                    }
                    if((yyvsp[(3) - (3)].typeInfo).type == BOOL && (yyvsp[(3) - (3)].typeInfo).val_bool){
                        (yyvsp[(3) - (3)].typeInfo).val_float = 1;
                    }else if((yyvsp[(3) - (3)].typeInfo).type == BOOL && !((yyvsp[(3) - (3)].typeInfo).val_bool)){
                        (yyvsp[(3) - (3)].typeInfo).val_float = 0;
                    }                        
                    if((yyvsp[(1) - (3)].typeInfo).type == INT){
                        (yyvsp[(1) - (3)].typeInfo).val_float = (yyvsp[(1) - (3)].typeInfo).val_int;
                    }
                    if((yyvsp[(3) - (3)].typeInfo).type == INT){
                        (yyvsp[(3) - (3)].typeInfo).val_float = (yyvsp[(3) - (3)].typeInfo).val_int;
                    }
                    if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_EQL){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float == (yyvsp[(3) - (3)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_NEQ){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float != (yyvsp[(3) - (3)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_GEQ){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float >= (yyvsp[(3) - (3)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_LEQ){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float <= (yyvsp[(3) - (3)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_LESS){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float < (yyvsp[(3) - (3)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (3)].num) == RELATIONAL_OP_GREATER){
                        (yyval.typeInfo).val_bool = ((yyvsp[(1) - (3)].typeInfo).val_float > (yyvsp[(3) - (3)].typeInfo).val_float);
                    }
                        
                        
                        
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (3)].typeInfo).is_null;                    
                ;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 1362 "lingzhang.y"
    {
                    printRule("SIMPLE_ARITHLOGIC",
                              "TERM ADD_OP_LIST");
			    if ((yyvsp[(2) - (2)].typeInfo).type != NOT_APPLICABLE)
			    {
                    //printf("it 1 is optype logical %d", $2.opType);
                      if(isInvalidOperandType((yyvsp[(1) - (2)].typeInfo).type))
                        semanticError(1,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                      if(isInvalidOperandType((yyvsp[(2) - (2)].typeInfo).type))
                        semanticError(2,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                                     if((yyvsp[(2) - (2)].typeInfo).type==BOOL){
                                        if((yyvsp[(2) - (2)].typeInfo).val_bool){
                                            (yyvsp[(2) - (2)].typeInfo).val_int = 1;
                                            (yyvsp[(2) - (2)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(2) - (2)].typeInfo).val_int = 0;
                                            (yyvsp[(2) - (2)].typeInfo).val_float = 0;                                                
                                        }
                                    }
                                    if((yyvsp[(1) - (2)].typeInfo).type==BOOL){
                                        if((yyvsp[(1) - (2)].typeInfo).val_bool){
                                            (yyvsp[(1) - (2)].typeInfo).val_int = 1;
                                            (yyvsp[(1) - (2)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(1) - (2)].typeInfo).val_int = 0;
                                            (yyvsp[(1) - (2)].typeInfo).val_float = 0;                                                
                                        }
                                    }
                if(isLogical((yyvsp[(2) - (2)].typeInfo).opType)){
                    //printf("it 2 is optype logical %d", $2.opType);
                    (yyval.typeInfo).type = BOOL;
                    if(((yyvsp[(1) - (2)].typeInfo).type == FLOAT and (yyvsp[(1) - (2)].typeInfo).val_float == 0) 
                        || ((yyvsp[(1) - (2)].typeInfo).type == INT and (yyvsp[(1) - (2)].typeInfo).val_int == 0)){
                            (yyvsp[(1) - (2)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(1) - (2)].typeInfo).val_bool = true;
                        }
                    if(((yyvsp[(2) - (2)].typeInfo).type == FLOAT and (yyvsp[(2) - (2)].typeInfo).val_float == 0) 
                        || ((yyvsp[(2) - (2)].typeInfo).type == INT and (yyvsp[(2) - (2)].typeInfo).val_int == 0)){
                            (yyvsp[(2) - (2)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(2) - (2)].typeInfo).val_bool = true;
                        } 
                    if((yyvsp[(2) - (2)].typeInfo).opType == LOGICAL_OP_AND){
                        (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool && (yyvsp[(2) - (2)].typeInfo).val_bool;
                      }else if((yyvsp[(2) - (2)].typeInfo).opType == LOGICAL_OP_OR){
                        (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool || (yyvsp[(2) - (2)].typeInfo).val_bool;
                     }
                 }
				else if (isIntCompatible((yyvsp[(1) - (2)].typeInfo).type) &&
				         isIntCompatible((yyvsp[(2) - (2)].typeInfo).type))
                            { 
                            
                            //printf("int calculation here!!!!\n");
                        
                                    (yyval.typeInfo).type = INT;
                                    if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_ADD){
                                        (yyval.typeInfo).val_int=(yyvsp[(1) - (2)].typeInfo).val_int+(yyvsp[(2) - (2)].typeInfo).val_int;
                                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_SUB){
                                        (yyval.typeInfo).val_int=(yyvsp[(1) - (2)].typeInfo).val_int-(yyvsp[(2) - (2)].typeInfo).val_int;
                                    }
                            }
				else{
                        (yyval.typeInfo).type = FLOAT;
                        if((yyvsp[(1) - (2)].typeInfo).type == INT){
                            (yyvsp[(1) - (2)].typeInfo).val_float = (float)(yyvsp[(1) - (2)].typeInfo).val_int;
                        }
                        if((yyvsp[(2) - (2)].typeInfo).type == INT){
                            (yyvsp[(2) - (2)].typeInfo).val_float = (float)(yyvsp[(2) - (2)].typeInfo).val_int;
                        }
                        if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_ADD){
                            (yyval.typeInfo).val_float=(yyvsp[(1) - (2)].typeInfo).val_float+(yyvsp[(2) - (2)].typeInfo).val_float;
                        }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_SUB){
                            (yyval.typeInfo).val_float=(yyvsp[(1) - (2)].typeInfo).val_float-(yyvsp[(2) - (2)].typeInfo).val_float;
                        }   
                }
                //printf("float calculation here: %f %d %f = %f\n", $1.val_float, $2.opType, $2.val_float, $$.val_float);
                //printf("int calculation here: %d %d %d = %d\n", $1.val_int, $2.opType, $2.val_int, $$.val_int);
				(yyval.typeInfo).numParams = NOT_APPLICABLE;
				(yyval.typeInfo).returnType = NOT_APPLICABLE;
                     	(yyval.typeInfo).isParam = false;
			    }
                    else 
			    {
                    (yyval.typeInfo).type = (yyvsp[(1) - (2)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (2)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (2)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (2)].typeInfo).isParam;
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (2)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (2)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (2)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (2)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (2)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
			    }
                (yyval.typeInfo).opType = (yyvsp[(2) - (2)].typeInfo).opType;
                ;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 1484 "lingzhang.y"
    {
                    printRule("ADD_OP_LIST",
                              "ADD_OP TERM ADD_OP_LIST");
			    int argWithErr =
				((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)? 2: 1;
                    if(isInvalidOperandType((yyvsp[(2) - (3)].typeInfo).type))                                          				semanticError(argWithErr,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
			    (yyval.typeInfo).numParams = NOT_APPLICABLE;
			    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
                
                //printf("it 3 is optype logical %d \n", $3.opType);
                //printf("is logical %s\n", isLogical($3.opType)?"TRUE":"FALSE");
			    if (isLogical((yyvsp[(3) - (3)].typeInfo).opType))
                {
                //printf("55555 %f\n", $3.val_float);
                //printf("here 55555");
                    (yyval.typeInfo).type = BOOL;
                    if(((yyvsp[(3) - (3)].typeInfo).type == FLOAT and (yyvsp[(3) - (3)].typeInfo).val_float == 0) 
                        || ((yyvsp[(3) - (3)].typeInfo).type == INT and (yyvsp[(3) - (3)].typeInfo).val_int == 0)){
                            (yyvsp[(3) - (3)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(3) - (3)].typeInfo).val_bool = true;
                        }
                    if(((yyvsp[(2) - (3)].typeInfo).type == FLOAT and (yyvsp[(2) - (3)].typeInfo).val_float == 0) 
                        || ((yyvsp[(2) - (3)].typeInfo).type == INT and (yyvsp[(2) - (3)].typeInfo).val_int == 0)){
                            (yyvsp[(2) - (3)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(2) - (3)].typeInfo).val_bool = true;
                        }                     
                    if ((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)
                    {
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                    }else{

                        if((yyvsp[(3) - (3)].typeInfo).opType == LOGICAL_OP_AND){
                            (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool && (yyvsp[(2) - (3)].typeInfo).val_bool;
                          }else if((yyvsp[(3) - (3)].typeInfo).opType == LOGICAL_OP_OR){
                            (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool || (yyvsp[(2) - (3)].typeInfo).val_bool;
                         }
                    }
                }
                else
			    {
                                //printf("here 66666");

				if ((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)
                {
                    (yyval.typeInfo).type = (yyvsp[(2) - (3)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(2) - (3)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(2) - (3)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(2) - (3)].typeInfo).isParam;
                    (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
                    (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(2) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(2) - (3)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(2) - (3)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
				}
                else
				{
                    //printf("Convert bool to float and int \n");
                                     if((yyvsp[(2) - (3)].typeInfo).type==BOOL){
                                        if((yyvsp[(2) - (3)].typeInfo).val_bool){
                                            (yyvsp[(2) - (3)].typeInfo).val_int = 1;
                                            (yyvsp[(2) - (3)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(2) - (3)].typeInfo).val_int = 0;
                                            (yyvsp[(2) - (3)].typeInfo).val_float = 0;                                                
                                        }
                                    }
                                    if((yyvsp[(3) - (3)].typeInfo).type==BOOL){
                                        if((yyvsp[(3) - (3)].typeInfo).val_bool){
                                            (yyvsp[(3) - (3)].typeInfo).val_int = 1;
                                            (yyvsp[(3) - (3)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(3) - (3)].typeInfo).val_int = 0;
                                            (yyvsp[(3) - (3)].typeInfo).val_float = 0;                                                
                                        }
                                    }               
                    if (isIntCompatible((yyvsp[(2) - (3)].typeInfo).type) &&
                             isIntCompatible((yyvsp[(3) - (3)].typeInfo).type))
                                { 

                                    (yyval.typeInfo).type = INT;
                                    if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_ADD){
                                        (yyval.typeInfo).val_int=(yyvsp[(2) - (3)].typeInfo).val_int+(yyvsp[(3) - (3)].typeInfo).val_int;
                                    }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_SUB){
                                        (yyval.typeInfo).val_int=(yyvsp[(2) - (3)].typeInfo).val_int-(yyvsp[(3) - (3)].typeInfo).val_int;
                                    }
                                }
                    else {
                        (yyval.typeInfo).type = FLOAT;
                        if((yyvsp[(2) - (3)].typeInfo).type == INT){
                            (yyvsp[(2) - (3)].typeInfo).val_float = (float)(yyvsp[(2) - (3)].typeInfo).val_int;
                        }
                        if((yyvsp[(3) - (3)].typeInfo).type == INT){
                            (yyvsp[(3) - (3)].typeInfo).val_float = (float)(yyvsp[(3) - (3)].typeInfo).val_int;
                        }
                        if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_ADD){
                            (yyval.typeInfo).val_float=(yyvsp[(2) - (3)].typeInfo).val_float+(yyvsp[(3) - (3)].typeInfo).val_float;
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_SUB){
                            (yyval.typeInfo).val_float=(yyvsp[(2) - (3)].typeInfo).val_float-(yyvsp[(3) - (3)].typeInfo).val_float;
                        }                        
                    }
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
                        
				}
                //printf("%d, %f \n", $$.val_int, $$.val_float);
                    }
                ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 1620 "lingzhang.y"
    {
                    printRule("ADD_OP_LIST", "epsilon");
			    (yyval.typeInfo).type = NOT_APPLICABLE;
			    (yyval.typeInfo).numParams = NOT_APPLICABLE;
			    (yyval.typeInfo).returnType = NOT_APPLICABLE;
			    (yyval.typeInfo).isParam = false;
                
                ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 1631 "lingzhang.y"
    {
                    printRule("TERM",
                              "FACTOR MULT_OP_LIST");
                  
			    if ((yyvsp[(2) - (2)].typeInfo).type != NOT_APPLICABLE)
			    {
                //printf("HERE 1111\n");
				if(isInvalidOperandType((yyvsp[(1) - (2)].typeInfo).type))
                        semanticError(1,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                     	if(isInvalidOperandType((yyvsp[(2) - (2)].typeInfo).type))
                        semanticError(2,
				    ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                     	(yyval.typeInfo).numParams = NOT_APPLICABLE;
                     	(yyval.typeInfo).returnType = NOT_APPLICABLE;
                    	(yyval.typeInfo).isParam = false;
				if (isLogical((yyvsp[(2) - (2)].typeInfo).opType)){
                  (yyval.typeInfo).type = BOOL;
                  //printf("1 and 2: %s and %s\n\n", $1.val_bool?"TRUE":"FALSE", $2.val_bool?"TRUE":"FALSE");
                        if(((yyvsp[(1) - (2)].typeInfo).type == FLOAT and (yyvsp[(1) - (2)].typeInfo).val_float == 0) 
                        || ((yyvsp[(1) - (2)].typeInfo).type == INT and (yyvsp[(1) - (2)].typeInfo).val_int == 0)){
                            (yyvsp[(1) - (2)].typeInfo).val_bool = false;
                        }else if(((yyvsp[(1) - (2)].typeInfo).type == FLOAT and (yyvsp[(1) - (2)].typeInfo).val_float != 0) 
                        || ((yyvsp[(1) - (2)].typeInfo).type == INT and (yyvsp[(1) - (2)].typeInfo).val_int != 0)){
                            (yyvsp[(1) - (2)].typeInfo).val_bool = true;
                        }
                    if(((yyvsp[(2) - (2)].typeInfo).type == FLOAT and (yyvsp[(2) - (2)].typeInfo).val_float == 0) 
                        || ((yyvsp[(2) - (2)].typeInfo).type == INT and (yyvsp[(2) - (2)].typeInfo).val_int == 0)){
                            (yyvsp[(2) - (2)].typeInfo).val_bool = false;
                        }else if(((yyvsp[(2) - (2)].typeInfo).type == FLOAT and (yyvsp[(2) - (2)].typeInfo).val_float != 0) 
                        || ((yyvsp[(2) - (2)].typeInfo).type == INT and (yyvsp[(2) - (2)].typeInfo).val_int != 0)){
                            (yyvsp[(2) - (2)].typeInfo).val_bool = true;
                        } 
                        //printf("type 1 and 2: %d and %d\n\n", $1.type, $2.type);
                  //printf("1 and 2: %s and %s\n\n", $1.val_bool?"TRUE":"FALSE", $2.val_bool?"TRUE":"FALSE");
                  if((yyvsp[(2) - (2)].typeInfo).opType == LOGICAL_OP_AND){
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool && (yyvsp[(2) - (2)].typeInfo).val_bool;
                  }else if((yyvsp[(2) - (2)].typeInfo).opType == LOGICAL_OP_OR){
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool || (yyvsp[(2) - (2)].typeInfo).val_bool;
                  }
                  //printf("it 4 is opType: %d\n", $2.opType);
                  //printf("the boolean value here is %s", $$.val_bool?"TRUE":"FALSE");
                }
				else
				{
                //printf("two values here!!!!!\n %f %f type is: %d %d \n", $1.val_float, $2.val_float, $1.type, $2.type);
                                     if((yyvsp[(2) - (2)].typeInfo).type==BOOL){
                                        if((yyvsp[(2) - (2)].typeInfo).val_bool){
                                            (yyvsp[(2) - (2)].typeInfo).val_int = 1;
                                            (yyvsp[(2) - (2)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(2) - (2)].typeInfo).val_int = 0;
                                            (yyvsp[(2) - (2)].typeInfo).val_float = 0;                                                
                                        }
                                    }
                                    if((yyvsp[(1) - (2)].typeInfo).type==BOOL){
                                        if((yyvsp[(1) - (2)].typeInfo).val_bool){
                                            (yyvsp[(1) - (2)].typeInfo).val_int = 1;
                                            (yyvsp[(1) - (2)].typeInfo).val_float = 1;    
                                        }else{
                                            (yyvsp[(1) - (2)].typeInfo).val_int = 0;
                                            (yyvsp[(1) - (2)].typeInfo).val_float = 0;                                                
                                        }
                                    }                
				  if (isIntCompatible((yyvsp[(1) - (2)].typeInfo).type) &&
				      isIntCompatible((yyvsp[(2) - (2)].typeInfo).type))
                      {
                     
				    (yyval.typeInfo).type = INT;
                    if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_MUL){
                        (yyval.typeInfo).val_int = (yyvsp[(1) - (2)].typeInfo).val_int * (yyvsp[(2) - (2)].typeInfo).val_int;
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_DIV){
                        //printf("Doing division here!!!!!\n %f %f", $1.val_float, $2.val_float);
                        if((yyvsp[(2) - (2)].typeInfo).val_int == 0){
                            yyerror("Attempted division by zero");                          
                        }else{
                            (yyval.typeInfo).val_int = (yyvsp[(1) - (2)].typeInfo).val_int / (yyvsp[(2) - (2)].typeInfo).val_int;
                        }
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_MOD){
                        (yyval.typeInfo).val_int = (yyvsp[(1) - (2)].typeInfo).val_int % (yyvsp[(2) - (2)].typeInfo).val_int;
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_POW){
                        //printf("INT POWER %d %d\n", $1.val_int,$2.val_int);
                        (yyval.typeInfo).val_int = pow((yyvsp[(1) - (2)].typeInfo).val_int,(yyvsp[(2) - (2)].typeInfo).val_int);
                    }
                       }
                       else{
                    (yyval.typeInfo).type = FLOAT;
                    if((yyvsp[(1) - (2)].typeInfo).type == INT){
                        (yyvsp[(1) - (2)].typeInfo).val_float = (float)(yyvsp[(1) - (2)].typeInfo).val_int;
                    }
                    if((yyvsp[(2) - (2)].typeInfo).type == INT){
                        (yyvsp[(2) - (2)].typeInfo).val_float = (float)(yyvsp[(2) - (2)].typeInfo).val_int;
                    }                    
                    if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_MUL){
                        (yyval.typeInfo).val_float = (yyvsp[(1) - (2)].typeInfo).val_float * (yyvsp[(2) - (2)].typeInfo).val_float;
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_DIV){
                        if((yyvsp[(2) - (2)].typeInfo).val_float == 0){
                            yyerror("Attempted division by zero");                          
                        }else{
                            (yyval.typeInfo).val_float = (yyvsp[(1) - (2)].typeInfo).val_float / (yyvsp[(2) - (2)].typeInfo).val_float;
                        }
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_MOD){
                        (yyval.typeInfo).val_float = fmod((yyvsp[(1) - (2)].typeInfo).val_float, (yyvsp[(2) - (2)].typeInfo).val_float);
                    }else if((yyvsp[(2) - (2)].typeInfo).opType == ARITHMETIC_OP_POW){
                        //printf("INT POWER %d %d\n", $1.val_int,$2.val_int);
                        //printf("INT POWER %f %f\n", $1.val_float,$2.val_float);
                        (yyval.typeInfo).val_float = pow((yyvsp[(1) - (2)].typeInfo).val_float,(yyvsp[(2) - (2)].typeInfo).val_float);
                    }    
				}
                }
			    }
                    else 
			    {
                //printf("HERE 2222\n");
                    (yyval.typeInfo).type = (yyvsp[(1) - (2)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (2)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (2)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (2)].typeInfo).isParam;
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (2)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (2)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (2)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (2)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (2)].typeInfo).is_null;
                    
                    if((yyval.typeInfo).type == INT){
                        (yyval.typeInfo).val_float = (float)(yyval.typeInfo).val_int;
                    }
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (2)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
			    }
                (yyval.typeInfo).opType = (yyvsp[(2) - (2)].typeInfo).opType;
                ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 1784 "lingzhang.y"
    {
                    printRule("MULT_OP_LIST",
                              "MULT_OP FACTOR MULT_OP_LIST");
			    int argWithErr = 
				((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)? 2: 1;
                    if(isInvalidOperandType((yyvsp[(2) - (3)].typeInfo).type))                    				semanticError(argWithErr,
				  ERR_MUST_BE_INT_FLOAT_OR_BOOL);
			    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
			    (yyval.typeInfo).isParam = false;
                (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
			    if (isLogical((yyvsp[(3) - (3)].typeInfo).opType))
                {
                    (yyval.typeInfo).type = BOOL;
                    if(((yyvsp[(3) - (3)].typeInfo).type == FLOAT and (yyvsp[(3) - (3)].typeInfo).val_float == 0) 
                        || ((yyvsp[(3) - (3)].typeInfo).type == INT and (yyvsp[(3) - (3)].typeInfo).val_int == 0)){
                            (yyvsp[(3) - (3)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(3) - (3)].typeInfo).val_bool = true;
                        }
                    if(((yyvsp[(2) - (3)].typeInfo).type == FLOAT and (yyvsp[(2) - (3)].typeInfo).val_float == 0) 
                        || ((yyvsp[(2) - (3)].typeInfo).type == INT and (yyvsp[(2) - (3)].typeInfo).val_int == 0)){
                            (yyvsp[(2) - (3)].typeInfo).val_bool = false;
                        }else{
                            (yyvsp[(2) - (3)].typeInfo).val_bool = true;
                        }                        
                    if ((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE)
                    {
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                    }else{

                        if((yyvsp[(3) - (3)].typeInfo).opType == LOGICAL_OP_AND){
                            (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool && (yyvsp[(2) - (3)].typeInfo).val_bool;
                          }else if((yyvsp[(3) - (3)].typeInfo).opType == LOGICAL_OP_OR){
                            (yyval.typeInfo).val_bool = (yyvsp[(3) - (3)].typeInfo).val_bool || (yyvsp[(2) - (3)].typeInfo).val_bool;
                         }
                    }
                }
                else
			    {                
                    if ((yyvsp[(3) - (3)].typeInfo).type == NOT_APPLICABLE){
                        //printf("%s %d\n", "HERE the factor got is ", $2.val_int);
                        (yyval.typeInfo).type = (yyvsp[(2) - (3)].typeInfo).type;
                        (yyval.typeInfo).numParams = (yyvsp[(2) - (3)].typeInfo).numParams;
                        (yyval.typeInfo).returnType = (yyvsp[(2) - (3)].typeInfo).returnType;
                        (yyval.typeInfo).isParam = (yyvsp[(2) - (3)].typeInfo).isParam;
                        (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                        (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int;
                        (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float;
                        strcpy((yyval.typeInfo).val_string, (yyvsp[(2) - (3)].typeInfo).val_string);
                        (yyval.typeInfo).is_null= (yyvsp[(2) - (3)].typeInfo).is_null;
                        
                        if((yyval.typeInfo).type == INT){
                            (yyval.typeInfo).val_float = (float)(yyval.typeInfo).val_int;
                        }
                        (yyval.typeInfo).rlist = new RList;
                        RList *temp = (yyvsp[(2) - (3)].typeInfo).rlist;
                        RList *temp_new = (yyval.typeInfo).rlist;
                        while(temp!=NULL)
                        {   
                            temp_new->type = temp->type;
                            temp_new->val_bool = temp->val_bool;
                            temp_new->val_int = temp->val_int;
                            temp_new->val_float = temp->val_float;
                            strcpy(temp_new->val_string, temp->val_string);
                            temp_new->length = temp->length;
                            temp = temp->rlist;
                            if(temp!=NULL)
                                temp_new->rlist = new RList;
                            else
                                temp_new->rlist = NULL;
                            temp_new = temp_new->rlist;
                        }
                    }
                    else
                    {
                        //printf("%s\n", "HEre 2");
                          if(isInvalidOperandType((yyvsp[(3) - (3)].typeInfo).type))                    				  semanticError(argWithErr,
                        ERR_MUST_BE_INT_FLOAT_OR_BOOL);
                      if (isLogical((yyvsp[(1) - (3)].num)))
                      (yyval.typeInfo).type = BOOL;
                      else
                      {
                                         if((yyvsp[(2) - (3)].typeInfo).type==BOOL){
                                            if((yyvsp[(2) - (3)].typeInfo).val_bool){
                                                (yyvsp[(2) - (3)].typeInfo).val_int = 1;
                                                (yyvsp[(2) - (3)].typeInfo).val_float = 1;    
                                            }else{
                                                (yyvsp[(2) - (3)].typeInfo).val_int = 0;
                                                (yyvsp[(2) - (3)].typeInfo).val_float = 0;                                                
                                            }
                                        }
                                        if((yyvsp[(3) - (3)].typeInfo).type==BOOL){
                                            if((yyvsp[(3) - (3)].typeInfo).val_bool){
                                                (yyvsp[(3) - (3)].typeInfo).val_int = 1;
                                                (yyvsp[(3) - (3)].typeInfo).val_float = 1;    
                                            }else{
                                                (yyvsp[(3) - (3)].typeInfo).val_int = 0;
                                                (yyvsp[(3) - (3)].typeInfo).val_float = 0;                                                
                                            }
                                        }                      
                      if (isIntCompatible((yyvsp[(2) - (3)].typeInfo).type) &&
                          isIntCompatible((yyvsp[(3) - (3)].typeInfo).type))
                          {
                     
                        (yyval.typeInfo).type = INT;
                        if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_MUL){
                            (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int * (yyvsp[(3) - (3)].typeInfo).val_int;
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_DIV){
                            if((yyvsp[(3) - (3)].typeInfo).val_int == 0){
                                yyerror("Attempted division by zero");                          
                            }else{
                                (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int / (yyvsp[(3) - (3)].typeInfo).val_int;
                            }
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_MOD){
                            (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int % (yyvsp[(3) - (3)].typeInfo).val_int;
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_POW){
                            (yyval.typeInfo).val_int = pow((yyvsp[(2) - (3)].typeInfo).val_int,(yyvsp[(3) - (3)].typeInfo).val_int);
                        }
                        
                        }
                      else{
                        (yyval.typeInfo).type = FLOAT;
                        if((yyvsp[(2) - (3)].typeInfo).type == INT){
                            (yyvsp[(2) - (3)].typeInfo).val_float = (float)(yyvsp[(2) - (3)].typeInfo).val_int;
                        }
                        if((yyvsp[(3) - (3)].typeInfo).type == INT){
                            (yyvsp[(3) - (3)].typeInfo).val_float = (float)(yyvsp[(3) - (3)].typeInfo).val_int;
                        }                    
                        if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_MUL){
                            (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float * (yyvsp[(3) - (3)].typeInfo).val_float;
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_DIV){
                            if((yyvsp[(3) - (3)].typeInfo).val_float == 0){
                                yyerror("Attempted division by zero");                          
                            }else{
                                (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float / (yyvsp[(3) - (3)].typeInfo).val_float;
                            }
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_MOD){
                            (yyval.typeInfo).val_float = fmod((yyvsp[(2) - (3)].typeInfo).val_float, (yyvsp[(3) - (3)].typeInfo).val_float);
                        }else if((yyvsp[(3) - (3)].typeInfo).opType == ARITHMETIC_OP_POW){
                            (yyval.typeInfo).val_float = pow((yyvsp[(2) - (3)].typeInfo).val_float,(yyvsp[(3) - (3)].typeInfo).val_float);
                        }                    
                        }
                      }
                      (yyval.typeInfo).opType = (yyvsp[(1) - (3)].num);
                        }
                    }
                    //printf("1 and: %s and\n\n", $2.val_bool?"TRUE":"FALSE");

                ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 1936 "lingzhang.y"
    {
                    printRule("MULT_OP_LIST", "epsilon");
			    (yyval.typeInfo).type = NOT_APPLICABLE;
			    (yyval.typeInfo).numParams = NOT_APPLICABLE;
			    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                    
                    
                ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 1948 "lingzhang.y"
    {
                    printRule("FACTOR", "VAR");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    
                    if((yyvsp[(1) - (1)].typeInfo).type == INT){
                        (yyval.typeInfo).val_float = (float)(yyvsp[(1) - (1)].typeInfo).val_int;
                    }
                    
                    if((yyvsp[(1) - (1)].typeInfo).type==BOOL){
                        if((yyvsp[(1) - (1)].typeInfo).val_bool){
                            (yyvsp[(1) - (1)].typeInfo).val_int = 1;
                            (yyvsp[(1) - (1)].typeInfo).val_float = 1;    
                        }else{
                            (yyvsp[(1) - (1)].typeInfo).val_int = 0;
                            (yyvsp[(1) - (1)].typeInfo).val_float = 0;                                                
                        }
                    }
                    
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(1) - (1)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(1) - (1)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
                ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 1997 "lingzhang.y"
    {
                    printRule("FACTOR", "CONST");
                    (yyval.typeInfo).type = (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 2005 "lingzhang.y"
    {
                    printRule("FACTOR", "( EXPR )");
                    //printf("Factor is got here!!!%d\n", $2.val_int);
                    (yyval.typeInfo).type = (yyvsp[(2) - (3)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(2) - (3)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(2) - (3)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(2) - (3)].typeInfo).isParam;
                    
                    (yyval.typeInfo).val_bool = (yyvsp[(2) - (3)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(2) - (3)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(2) - (3)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(2) - (3)].typeInfo).val_string);
                    (yyval.typeInfo).is_null= (yyvsp[(2) - (3)].typeInfo).is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = (yyvsp[(2) - (3)].typeInfo).rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }                    
                ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 2040 "lingzhang.y"
    {
                    printRule("FACTOR", "! FACTOR");
                    (yyval.typeInfo).type = BOOL;
                    (yyval.typeInfo).numParams = (yyvsp[(2) - (2)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(2) - (2)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(2) - (2)].typeInfo).isParam;
                    if((yyvsp[(2) - (2)].typeInfo).type == BOOL){
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (2)].typeInfo).val_bool?false:true;
                    }else if((yyvsp[(2) - (2)].typeInfo).type == INT){
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (2)].typeInfo).val_int!=0?false:true;
                    }else if((yyvsp[(2) - (2)].typeInfo).type == FLOAT){
                        (yyval.typeInfo).val_bool = (yyvsp[(2) - (2)].typeInfo).val_float==0?true:false;
                    }
                    //printf("The final answer %s\n, after NOT %s\n", $2.val_bool?"true":"false", $2.val_bool?"false":"true");
                ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 2058 "lingzhang.y"
    {
                    printRule("ADD_OP", "+");
                    (yyval.num) = ARITHMETIC_OP_ADD;
                ;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 2063 "lingzhang.y"
    {
                    printRule("ADD_OP", "-");
                    (yyval.num) = ARITHMETIC_OP_SUB;
                ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 2068 "lingzhang.y"
    {
                    printRule("ADD_OP", "|");
                    (yyval.num) = LOGICAL_OP_OR;
                ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 2075 "lingzhang.y"
    {
                    printRule("MULT_OP", "*");
                    (yyval.num) = ARITHMETIC_OP_MUL;
                    
                ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 2081 "lingzhang.y"
    {
                    printRule("MULT_OP", "/");
                    (yyval.num) = ARITHMETIC_OP_DIV;
                ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 2086 "lingzhang.y"
    {
                    printRule("MULT_OP", "&");
                    (yyval.num) = LOGICAL_OP_AND;
                ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 2091 "lingzhang.y"
    {
                    printRule("MULT_OP", "\%\%");
                    (yyval.num) = ARITHMETIC_OP_MOD;
                ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 2096 "lingzhang.y"
    {
                    printRule("MULT_OP", "^");
                    (yyval.num) = ARITHMETIC_OP_POW;
                ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 2103 "lingzhang.y"
    {
                    printRule("REL_OP", "<");
                    (yyval.num) = RELATIONAL_OP_LESS;
                ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 2108 "lingzhang.y"
    {
                    printRule("REL_OP", ">");
                    (yyval.num) = RELATIONAL_OP_GREATER;
                ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 2113 "lingzhang.y"
    {
                    printRule("REL_OP", "<=");
                    (yyval.num) = RELATIONAL_OP_LEQ;
                ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 2118 "lingzhang.y"
    {
                    printRule("REL_OP", ">=");
                    (yyval.num) = RELATIONAL_OP_GEQ;
                ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 2123 "lingzhang.y"
    {
                    printRule("REL_OP", "==");
                    (yyval.num) = RELATIONAL_OP_EQL;
                ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 2128 "lingzhang.y"
    {
                    printRule("REL_OP", "!=");
                    (yyval.num) = RELATIONAL_OP_NEQ;
                ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 2135 "lingzhang.y"
    {
                    printRule("VAR", "ENTIRE_VAR");
                    (yyval.typeInfo).type == (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);                    
                ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 2147 "lingzhang.y"
    {
                    printRule("VAR", "SINGLE_ELEMENT");
                    (yyval.typeInfo).type == (yyvsp[(1) - (1)].typeInfo).type;
                    (yyval.typeInfo).numParams = (yyvsp[(1) - (1)].typeInfo).numParams;
                    (yyval.typeInfo).returnType = (yyvsp[(1) - (1)].typeInfo).returnType;
                    (yyval.typeInfo).isParam = (yyvsp[(1) - (1)].typeInfo).isParam;
                    (yyval.typeInfo).val_bool = (yyvsp[(1) - (1)].typeInfo).val_bool;
                    (yyval.typeInfo).val_int = (yyvsp[(1) - (1)].typeInfo).val_int;
                    (yyval.typeInfo).val_float = (yyvsp[(1) - (1)].typeInfo).val_float;
                    strcpy((yyval.typeInfo).val_string, (yyvsp[(1) - (1)].typeInfo).val_string);                    
                ;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 2162 "lingzhang.y"
    {
                    printRule("SINGLE_ELEMENT", "IDENT"
                              " [[ EXPR ]]");
                    TYPE_INFO exprTypeInfo =
                      findEntryInAnyScope((yyvsp[(1) - (6)].text));
                    if(exprTypeInfo.type == UNDEFINED) 
				semanticError(0, ERR_UNDEFINED_IDENT);
                    if(!isListCompatible(exprTypeInfo.type)) 
				semanticError(1, ERR_MUST_BE_LIST);

                    if((yyvsp[(4) - (6)].typeInfo).val_int<1 || (yyvsp[(4) - (6)].typeInfo).val_int>exprTypeInfo.rlist->length)
                        {
                            yyerror("Subscript out of bounds");
                        }
                        
                    int count = (yyvsp[(4) - (6)].typeInfo).val_int;
                    RList* node = exprTypeInfo.rlist;
                    while(count > 1)
                    {
                        node = node->rlist;
                        count -= 1;
                    }
                    (yyval.typeInfo).type = node->type;
                    (yyval.typeInfo).val_bool = node->val_bool;
                    (yyval.typeInfo).val_int = node->val_int;
                    (yyval.typeInfo).val_float = node->val_float;
                    strcpy((yyval.typeInfo).val_string, node->val_string);

                    
                    (yyval.typeInfo).numParams = NOT_APPLICABLE;
                    (yyval.typeInfo).returnType = NOT_APPLICABLE;
                    (yyval.typeInfo).isParam = false;
                ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 2198 "lingzhang.y"
    {
                    printRule("ENTIRE_VAR", "IDENT");
                    TYPE_INFO exprTypeInfo = 
                      findEntryInAnyScope(string((yyvsp[(1) - (1)].text)));
                    if(exprTypeInfo.type == UNDEFINED)
                      semanticError(0, ERR_UNDEFINED_IDENT);
                    (yyval.typeInfo).type = exprTypeInfo.type;
                    (yyval.typeInfo).numParams = exprTypeInfo.numParams;
                    (yyval.typeInfo).returnType = exprTypeInfo.returnType;
                    (yyval.typeInfo).isParam = exprTypeInfo.isParam;
                    
                    (yyval.typeInfo).val_bool = exprTypeInfo.val_bool;
                    (yyval.typeInfo).val_int = exprTypeInfo.val_int;
                    (yyval.typeInfo).val_float = exprTypeInfo.val_float;
                    strcpy((yyval.typeInfo).val_string, exprTypeInfo.val_string);
                    (yyval.typeInfo).is_null= exprTypeInfo.is_null;
                    
                    
                    (yyval.typeInfo).rlist = new RList;
                    RList *temp = exprTypeInfo.rlist;
                    RList *temp_new = (yyval.typeInfo).rlist;
                    while(temp!=NULL)
                    {   
                        temp_new->type = temp->type;
                        temp_new->val_bool = temp->val_bool;
                        temp_new->val_int = temp->val_int;
                        temp_new->val_float = temp->val_float;
                        strcpy(temp_new->val_string, temp->val_string);
                        temp_new->length = temp->length;
                        temp = temp->rlist;
                        if(temp!=NULL)
                            temp_new->rlist = new RList;
                        else
                            temp_new->rlist = NULL;
                        temp_new = temp_new->rlist;
                    }
                    
                ;}
    break;



/* Line 1464 of yacc.c  */
#line 4054 "lingzhang.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 2238 "lingzhang.y"


#include "lex.yy.c"
extern FILE *yyin;

//  Construct a string as an argument number (argNum, 0
//  if no argument number in message) and message (errNum is
//  index position in ERR_MSG[]). Then call yyerror with that
//  string.
void semanticError(const int argNum, const int errNum)
{
  string errorMsg;
  int errNo = errNum;

  if ((errNum < 0) || (errNum > NUM_ERR_MESSAGES-1))
    errNo = ERR_ERROR;
  if (argNum > 0)
    errorMsg = "Arg " + to_string(argNum) + " ";
  else errorMsg = "";
  errorMsg += ERR_MSG[errNo];
  yyerror(errorMsg.c_str());
}

// Output type and lexeme.
void printTokenInfo(const char* token_type, const char* lexeme)
{
  if(!suppressTokenOutput) 
  {
    printf("TOKEN: %s \t\t LEXEME: %s\n", token_type, lexeme);
  }
}

// Output production info as nonterm on left-hand side (1st
// param) and symbols on right-hand side (2nd param).
void printRule(const char *lhs, const char *rhs)
{
  if(!suppressTokenOutput) 
  {
    printf("%s -> %s\n", lhs, rhs);
  }
  return;
}

// Determine whether given type is compatible with INT, FLOAT,
// or BOOL.
bool isIntOrFloatOrBoolCompatible(const int theType)
{
    return(isIntCompatible(theType) ||
           isFloatCompatible(theType) ||
		isBoolCompatible(theType)); 
}

bool isArithmetic(const int theType)
{
    return theType == ARITHMETIC_OP_ADD ||  
        theType == ARITHMETIC_OP_SUB || 
        theType == ARITHMETIC_OP_MUL ||
        theType == ARITHMETIC_OP_DIV ||
        theType == ARITHMETIC_OP_POW ||
        theType == ARITHMETIC_OP_MOD;
}

bool isRelational(const int theType)
{
    return theType == RELATIONAL_OP_EQL ||
        RELATIONAL_OP_NEQ ||
        RELATIONAL_OP_LESS ||
        RELATIONAL_OP_GREATER ||
        RELATIONAL_OP_LEQ ||
        RELATIONAL_OP_GEQ;
}

bool isLogical(const int theType)
{
    return theType == LOGICAL_OP_AND ||
        theType == LOGICAL_OP_OR;
}

// Determine whether given type is compatible with INT.
bool isIntCompatible(const int theType)
{
    return(isBoolCompatible(theType) ||
           ((theType & INT) == INT));
}

// Determine whether given type is compatible with BOOL.
bool isBoolCompatible(const int theType)
{
    return((theType & BOOL) == BOOL);
}

// Determine whether given type is compatible with FLOAT.
bool isFloatCompatible(const int theType)
{
    return((theType & FLOAT) == FLOAT);
}

// Determine whether given type is compatible with LIST.
bool isListCompatible(const int theType)
{
    return((theType & LIST) == LIST);
}

// Determine whether given type is considered an invalid
// operand type.
bool isInvalidOperandType(const int theType)
{
    return((theType == FUNCTION) ||
		(theType == NULL_TYPE) ||
		(theType == LIST) ||
		(theType == STR));
}

// Push a new SYMBOL_TABLE onto scopeStack.
void beginScope() 
{
    scopeStack.push(SYMBOL_TABLE());
    if(!suppressTokenOutput)
        printf("\n___Entering new scope...\n\n");
}

// Pop a SYMBOL_TABLE from scopeStack.
void endScope() 
{
    scopeStack.pop();
    if(!suppressTokenOutput)
        printf("\n___Exiting scope...\n\n");
}

// Pop all SYMBOL_TABLE's from scopeStack.
void cleanUp() 
{
    if (scopeStack.empty())
        return;
    else {
        scopeStack.pop();
        cleanUp();
    }
}

void printValue(TYPE_INFO type_info)
{
        if(type_info.type == INT)
        {
            printf("%d\n", type_info.val_int);
        }else if(type_info.type == STR)
        {
            printf("%s\n", type_info.val_string);
        }else if(type_info.type == FLOAT)
        {
            printf("%6.2f\n", type_info.val_float);
        }else if(type_info.type == BOOL)
        {
            printf("%s\n",type_info.val_bool?"TRUE":"FALSE");
        }else if(type_info.type == NULL_TYPE)
        {
            printf("%s\n", "NULL");
        }else if(type_info.type == LIST){
            printf("%s","(");
            RList *temp = type_info.rlist;
            while(temp != NULL)
            {
                    if(temp->type == INT)
                    {
                        printf(" %d", temp->val_int);
                    }else if(temp->type == STR)
                    {
                        printf(" %s", temp->val_string);
                    }else if(temp->type == FLOAT)
                    {
                        printf(" %.2f", temp->val_float);
                    }else if(temp->type == BOOL)
                    {
                        printf(" %s",temp->val_bool?"TRUE":"FALSE");
                    }else if(temp->type == NULL_TYPE)
                    {
                        printf(" %s", "NULL");
                    }
                    temp = temp->rlist;
            };
            printf("%s\n"," )");
        }
}

// If the_name exists in any SYMBOL_TABLE in scopeStack, return
// its TYPE_INFO; otherwise, return a TYPE_INFO that contains
// type UNDEFINED.
TYPE_INFO findEntryInAnyScope(const string the_name) 
{
    TYPE_INFO info = {UNDEFINED, NOT_APPLICABLE, NOT_APPLICABLE};
    if (scopeStack.empty()) return(info);
    info = scopeStack.top().findEntry(the_name);
    if (info.type != UNDEFINED) 
      return(info);
    else 
    { // check in "next higher" scope
        SYMBOL_TABLE symbolTable = scopeStack.top();
        scopeStack.pop();
        info = findEntryInAnyScope(the_name);
        scopeStack.push(symbolTable); // restore the stack
        return(info);
    }
}

int main(int argc, char** argv) 
{
    if (argc < 2) 
    {
        printf("You must specify a file in the command line!\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");
    beginScope();
    do 
    {
        yyparse();
    } while(!feof(yyin));
    endScope();
    return 0;
}

