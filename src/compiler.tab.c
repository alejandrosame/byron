/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "syntacticAnalyzer.y"

///////////////////////////////////////////////////
// Instructions of use:
//  - bison sintacticAnalizer.y 
//  - bison -d syntacticAnalyzer.y -o compiler.tab.c

/////////////////////////////
// C declarations
#include <stdio.h> 
#include "symbolsTable.h" 
#include "codeGenerationQ.h" 

extern FILE *yyin, *yyout; 	// Input stream , declared by lexical analyzer
extern int line;   	// Read line, values are given by lexical analyzer
extern int column;  // Read column, values are given by lexical analyzer
extern char* yytext;
extern YYABORT;

//#define  YYDEBUG 1  // Debug mode if -t is passed
int yydebug=1;
FILE *yyout;		// Compiled file

/////////////////////////////////////////////
// Variables used to work with symbols table
symbolsTable sT;
registerStruct *auxRegister, *auxRegisterList;
qMachine Q;

int errorCode, nRegisters;
char errorString[500];
char string1[15], string2[15];
int nOthers;

int stackScope;
int anonymousId = 0;
char anonymousIdString[500];

int errorCompiling;


/////////////////////////////////////////////
// Methods
void generateAnonymousId();



/* Line 268 of yacc.c  */
#line 118 "compiler.tab.c"

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
     AND = 258,
     ARRAY = 259,
     BEGIN_ = 260,
     CASE = 261,
     CONSTANT = 262,
     ELSE = 263,
     ELSIF = 264,
     END = 265,
     FUNCTION = 266,
     IF = 267,
     IDENTIFIER = 268,
     IN = 269,
     IS = 270,
     LOOP = 271,
     NOT = 272,
     NULL_ = 273,
     OF = 274,
     OR = 275,
     OTHERS = 276,
     OUT = 277,
     PROCEDURE = 278,
     RECORD = 279,
     RETURN = 280,
     THEN = 281,
     TYPE = 282,
     WHEN = 283,
     WHILE = 284,
     ARROW = 285,
     ASSIGNMENT_OP = 286,
     NOT_EQUAL_OP = 287,
     GREATER_EQUAL_OP = 288,
     LESSER_EQUAL_OP = 289,
     POWER_OP = 290,
     PUT = 291,
     GET = 292,
     LENGTH = 293,
     NEW_LINE = 294,
     CONCAT = 295,
     INTEGER_TYPE = 296,
     REAL_TYPE = 297,
     CHARACTER_TYPE = 298,
     BOOLEAN_TYPE = 299,
     INTEGER_LITERAL = 300,
     FLOAT_LITERAL = 301,
     CHARACTER_LITERAL = 302,
     STRING_LITERAL = 303,
     BOOLEAN_LITERAL = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 51 "syntacticAnalyzer.y"

	int integer; 
	char op;
	char string[50];
	registerStruct* regStruct;
	symbolType typeSymbol;
	symbolsTable symbolsList;
	variableType typeVariable;



/* Line 293 of yacc.c  */
#line 215 "compiler.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 227 "compiler.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   261

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    56,    37,    35,    54,    36,    65,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    53,
      63,    62,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
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
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    15,    17,    21,    24,    25,    30,
      38,    41,    42,    47,    50,    51,    56,    58,    60,    68,
      73,    76,    77,    84,    87,    89,    91,    93,    95,    97,
      99,   100,   102,   104,   107,   109,   112,   113,   115,   117,
     121,   123,   126,   127,   128,   132,   133,   134,   135,   144,
     145,   149,   153,   154,   156,   160,   163,   168,   169,   172,
     175,   181,   185,   186,   187,   188,   189,   204,   210,   212,
     214,   215,   216,   228,   230,   233,   235,   236,   238,   240,
     243,   251,   258,   262,   263,   265,   267,   269,   271,   273,
     275,   277,   279,   283,   287,   293,   299,   305,   308,   312,
     317,   319,   323,   324,   325,   331,   332,   334,   336,   338,
     340,   342,   344,   347,   351,   355,   357,   360,   361,   366,
     369,   370,   374,   376,   378,   380,   382,   384,   386,   389,
     397,   404,   406,   408,   410,   414,   420,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    -1,    23,    13,    15,    86,     5,    68,
     129,    10,    13,    53,    -1,    95,    -1,    69,    54,    95,
      -1,    55,    56,    -1,    -1,    55,    71,    69,    56,    -1,
       4,    55,    95,    97,    56,    19,   140,    -1,    31,    95,
      -1,    -1,   142,    31,    95,    53,    -1,    77,   138,    -1,
      -1,    77,   138,    76,    75,    -1,    35,    -1,    36,    -1,
       6,    13,    15,    80,    10,     6,    53,    -1,    28,    88,
      30,   129,    -1,    80,    79,    -1,    -1,    13,   102,    57,
     140,    73,    53,    -1,    81,    82,    -1,    81,    -1,   103,
      -1,   109,    -1,    78,    -1,    74,    -1,     7,    -1,    -1,
     139,    -1,   115,    -1,   137,    53,    -1,   136,    -1,    85,
      86,    -1,    -1,   118,    -1,    21,    -1,    88,    58,    87,
      -1,    87,    -1,    89,    92,    -1,    -1,    -1,     8,    91,
     129,    -1,    -1,    -1,    -1,     9,    93,    55,    95,    56,
      94,    26,   129,    -1,    -1,   122,    96,   123,    -1,    54,
      95,    97,    -1,    -1,   118,    -1,   118,    38,   118,    -1,
      17,   118,    -1,    55,   116,   117,    56,    -1,    -1,    13,
      70,    -1,    13,    41,    -1,    11,    13,    99,    25,   140,
      -1,    54,    13,   102,    -1,    -1,    -1,    -1,    -1,    12,
     104,    55,    95,    56,   105,    26,   129,   106,    89,    90,
      10,    12,    53,    -1,    13,    59,    95,    97,    60,    -1,
       3,    -1,    20,    -1,    -1,    -1,    29,   110,    55,    95,
      56,   111,    16,   129,    10,    16,    53,    -1,    22,    -1,
      14,    22,    -1,    14,    -1,    -1,    37,    -1,    61,    -1,
      18,    53,    -1,    13,   102,    57,    84,   140,    73,    53,
      -1,    13,   102,    57,   112,   140,    73,    -1,    53,   116,
     117,    -1,    -1,    48,    -1,    49,    -1,    50,    -1,    52,
      -1,    18,    -1,    51,    -1,   142,    -1,   100,    -1,    55,
      95,    56,    -1,    13,    70,    53,    -1,    39,    55,    51,
      56,    53,    -1,    39,    55,   142,    56,    53,    -1,    40,
      55,   142,    56,    53,    -1,    42,    53,    -1,    23,    13,
      99,    -1,    24,    82,    10,    24,    -1,   130,    -1,   130,
     126,   130,    -1,    -1,    -1,   108,   124,   122,   125,   123,
      -1,    -1,    62,    -1,    63,    -1,    64,    -1,    32,    -1,
      34,    -1,    33,    -1,    25,    53,    -1,    25,   130,    53,
      -1,   142,    65,    13,    -1,   134,    -1,   134,   129,    -1,
      -1,   141,   138,   131,    75,    -1,   141,   138,    -1,    -1,
     138,   132,    75,    -1,   138,    -1,   114,    -1,   127,    -1,
     119,    -1,   133,    -1,    83,    -1,   137,    15,    -1,   135,
      86,     5,   129,    10,    13,    53,    -1,   135,    86,     5,
     129,    10,    53,    -1,   120,    -1,   101,    -1,    98,    -1,
     138,   113,    98,    -1,    27,    13,    15,   140,    53,    -1,
      44,    -1,    45,    -1,    46,    -1,    47,    -1,    72,    -1,
     121,    -1,    13,    -1,    35,    -1,    36,    -1,    13,    -1,
     107,    -1,   128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   173,   186,   199,   235,   237,   237,   242,
     247,   248,   253,   290,   309,   309,   334,   335,   340,   357,
     378,   379,   384,   393,   394,   399,   400,   401,   402,   407,
     408,   413,   414,   415,   416,   433,   434,   438,   446,   459,
     467,   475,   476,   482,   481,   487,   492,   497,   492,   512,
     512,   524,   530,   537,   538,   539,   544,   548,   553,   554,
     559,   569,   570,   575,   580,   590,   575,   598,   603,   604,
     609,   610,   609,   627,   628,   629,   630,   635,   636,   641,
     646,   675,   684,   685,   690,   702,   714,   724,   735,   742,
     749,   750,   751,   756,   781,   786,   797,   808,   816,   853,
     860,   861,   890,   892,   889,   917,   929,   930,   931,   932,
     933,   934,   939,   940,   945,   952,   953,   958,   958,   977,
     997,   997,  1018,  1023,  1024,  1025,  1030,  1031,  1036,  1052,
    1057,  1066,  1067,  1072,  1073,  1109,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1137,  1138,  1142,  1150,  1151
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "BEGIN_", "CASE",
  "CONSTANT", "ELSE", "ELSIF", "END", "FUNCTION", "IF", "IDENTIFIER", "IN",
  "IS", "LOOP", "NOT", "NULL_", "OF", "OR", "OTHERS", "OUT", "PROCEDURE",
  "RECORD", "RETURN", "THEN", "TYPE", "WHEN", "WHILE", "ARROW",
  "ASSIGNMENT_OP", "NOT_EQUAL_OP", "GREATER_EQUAL_OP", "LESSER_EQUAL_OP",
  "'+'", "'-'", "'*'", "POWER_OP", "PUT", "GET", "LENGTH", "NEW_LINE",
  "CONCAT", "INTEGER_TYPE", "REAL_TYPE", "CHARACTER_TYPE", "BOOLEAN_TYPE",
  "INTEGER_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "BOOLEAN_LITERAL", "';'", "','", "'('", "')'", "':'",
  "'|'", "'['", "']'", "'/'", "'='", "'<'", "'>'", "'.'", "$accept",
  "main", "$@1", "actual_parameter_list", "actual_parameter_part", "$@2",
  "array_type_definition", "assign_expression", "assignment_statement",
  "binary_adding_list", "@3", "binary_adding_operator", "case_statement",
  "case_statement_alternative", "case_statement_alternative_list",
  "component_item", "component_list", "compound_statement", "constant",
  "declarative_item", "declarative_part", "discrete_choice",
  "discrete_choice_list", "elsif_list", "else_statement", "$@4",
  "elsif_statement", "@5", "$@6", "expression", "@7", "expression_list",
  "factor", "formal_part", "function_call", "function_specification",
  "identifier_list", "if_statement", "@8", "$@9", "$@10",
  "indexed_component", "logical_operator", "loop_statement", "@11", "$@12",
  "mode", "multiplying_operator", "null_statement", "object_declaration",
  "parameter_specification", "parameter_specification_list", "primary",
  "procedure_call_statement", "procedure_specification",
  "record_type_definition", "relation", "relation_list", "$@13", "@14",
  "relational_operator", "return_statement", "selected_component",
  "sequence_of_statements", "simple_expression", "@15", "@16",
  "simple_statement", "statement", "subprogram_body_", "subprogram_body",
  "subprogram_specification", "term", "type_declaration",
  "type_definition", "unary_adding_operator", "variable", 0
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
     285,   286,   287,   288,   289,    43,    45,    42,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,    59,    44,    40,    41,    58,   124,    91,
      93,    47,    61,    60,    62,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    67,    69,    69,    70,    71,    70,    72,
      73,    73,    74,    75,    76,    75,    77,    77,    78,    79,
      80,    80,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    91,    90,    90,    93,    94,    92,    96,
      95,    97,    97,    98,    98,    98,    99,    99,   100,   100,
     101,   102,   102,   104,   105,   106,   103,   107,   108,   108,
     110,   111,   109,   112,   112,   112,   112,   113,   113,   114,
     115,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   119,   120,   121,
     122,   122,   124,   125,   123,   123,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   129,   129,   131,   130,   130,
     132,   130,   130,   133,   133,   133,   134,   134,   135,   136,
     136,   137,   137,   138,   138,   139,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    10,     1,     3,     2,     0,     4,     7,
       2,     0,     4,     2,     0,     4,     1,     1,     7,     4,
       2,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     2,     1,     2,     0,     1,     1,     3,
       1,     2,     0,     0,     3,     0,     0,     0,     8,     0,
       3,     3,     0,     1,     3,     2,     4,     0,     2,     2,
       5,     3,     0,     0,     0,     0,    14,     5,     1,     1,
       0,     0,    11,     1,     2,     1,     0,     1,     1,     2,
       7,     6,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     5,     2,     3,     4,
       1,     3,     0,     0,     5,     0,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     2,     0,     4,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     2,     7,
       6,     1,     1,     1,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    36,     0,    62,     0,     0,
      36,     0,   132,    32,   131,    36,    34,     0,    31,    57,
       0,     0,    57,     0,    35,     2,     0,   128,    33,     0,
       0,    62,    30,    98,     0,     0,     0,    62,    83,     0,
      61,    29,     0,     0,   142,     0,   136,   137,   138,   139,
     140,   141,     0,     0,    63,   145,     0,     0,    70,     0,
       0,     0,    28,    27,   127,    25,   146,    26,   123,   125,
     124,   147,     0,   126,   115,     0,     0,     0,     0,     0,
      60,    11,     0,    62,    24,     0,   135,     0,     0,     7,
       0,     0,    79,   145,     0,    88,   143,   144,    84,    85,
      86,    89,    87,   112,     0,   133,    91,    53,     0,   122,
       0,    90,     0,     0,     0,    97,     0,   116,     0,     0,
       0,    76,    83,    56,     0,     0,    52,    49,   100,     0,
      23,     0,    21,     0,     6,     0,    52,    93,    59,    58,
      55,     0,     0,   113,    77,    78,     0,     0,   119,     0,
     145,     0,     0,     0,     0,     0,   114,     0,   130,    75,
      73,     0,    82,    10,    80,     0,     0,   105,   109,   111,
     110,   106,   107,   108,     0,     0,    99,     0,     0,     0,
       4,     0,    92,    54,   134,    16,    17,   121,     0,     0,
       0,     0,     0,     0,     3,    12,   129,    74,    11,    52,
       0,    68,    69,   102,    50,   101,    11,     0,     0,    20,
      64,     0,     8,    67,    13,   118,    71,    94,    95,    96,
      81,    51,     0,     0,     0,     0,    38,    40,     0,    37,
       0,     5,     0,     0,     9,   103,    22,    18,     0,     0,
       0,    15,     0,   105,    19,    39,    65,     0,   104,    42,
       0,    45,     0,    43,    46,     0,    41,    72,     0,     0,
       0,    44,     0,     0,     0,    66,    47,     0,     0,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,   179,    91,   135,    50,   125,    62,   187,
     232,   188,    63,   209,   177,    84,    85,    64,    42,    10,
      11,   227,   228,   251,   255,   258,   256,   259,   267,   126,
     167,   166,   105,    30,   106,    12,    21,    65,    88,   230,
     249,    66,   203,    67,   112,   233,   161,   146,    68,    13,
      38,    79,   107,    69,    14,    51,   127,   204,   223,   243,
     174,    70,    71,    72,   128,   189,   147,    73,    74,    15,
      16,    17,   109,    18,    52,   110,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
     -10,    31,    71,    66,  -175,     9,    83,    41,    99,   100,
       9,   119,  -175,  -175,  -175,     9,  -175,    11,  -175,    80,
     124,    89,    80,   125,  -175,  -175,   142,  -175,  -175,   136,
     143,    41,   154,  -175,    10,   145,   145,    41,   114,    10,
    -175,  -175,    10,   116,  -175,   156,  -175,  -175,  -175,  -175,
    -175,  -175,   120,   159,  -175,    68,   122,    52,  -175,   121,
     123,   127,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,   167,  -175,   145,   -19,   171,   126,   136,   132,
    -175,   151,    25,    41,   156,   179,  -175,   176,   137,   138,
      25,   140,  -175,    79,   104,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,    25,  -175,  -175,   157,   144,    48,
      81,   131,   146,    12,   185,  -175,   186,  -175,    25,   187,
      -2,    94,   114,  -175,    25,   149,   155,  -175,   -15,   153,
    -175,   188,  -175,    25,  -175,    25,   155,  -175,  -175,  -175,
    -175,   158,   104,  -175,  -175,  -175,    81,    -6,    54,    25,
     152,   160,   -32,   -28,   162,   164,  -175,   165,  -175,   191,
    -175,    10,  -175,  -175,  -175,    25,   163,    90,  -175,  -175,
    -175,  -175,  -175,  -175,    25,    10,  -175,    17,   166,   106,
    -175,   161,  -175,  -175,  -175,  -175,  -175,  -175,    81,    -6,
     169,   173,   174,   175,  -175,  -175,  -175,  -175,   151,   155,
     201,  -175,  -175,  -175,  -175,  -175,   151,   223,    93,  -175,
    -175,    25,  -175,  -175,   129,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,    10,    25,   177,   178,  -175,  -175,     1,  -175,
     206,  -175,    -6,   219,  -175,  -175,  -175,  -175,   145,    93,
     145,  -175,   145,    90,  -175,  -175,  -175,   226,  -175,  -175,
     221,    59,   189,  -175,  -175,   228,  -175,  -175,   145,   184,
     229,  -175,    25,   190,   192,  -175,  -175,   214,   145,  -175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,   168,  -175,  -175,   -80,  -175,  -174,
    -175,  -175,  -175,  -175,  -175,  -175,   170,  -175,  -175,  -175,
      82,     5,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   -83,
    -175,  -127,   101,   224,  -175,  -175,   -21,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     172,   130,   -89,  -175,  -175,  -175,    22,     6,  -175,  -175,
    -175,  -175,  -175,   -34,   -53,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -102,  -175,   -36,  -175,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -121
static const yytype_int16 yytable[] =
{
      75,    75,    76,    80,   108,   140,    81,   136,   148,   181,
      40,   157,   118,     1,    43,   215,    77,   168,   169,   170,
       6,   141,     7,    44,   192,   150,    27,   207,   193,   185,
     186,   238,     8,   119,    45,   155,     9,   119,    93,    75,
     117,   163,    94,    95,     3,   208,   119,   171,   172,   173,
     178,   158,   180,   183,    46,    47,    48,    49,   241,   239,
      96,    97,   129,   151,    28,    93,   190,   253,   254,    94,
      95,     4,   221,    98,    99,   100,   101,   102,   152,   153,
     104,     5,   199,  -120,  -120,   144,   214,    96,    97,  -117,
    -117,   144,    24,   201,    93,    20,    19,    26,    94,    95,
      98,    99,   100,   101,   102,   103,    93,   104,   159,   145,
     202,    95,    22,    23,   226,   145,   160,    93,   220,   229,
     138,   205,    95,    89,    25,   198,   224,    90,   231,    98,
      99,   100,   101,   102,    89,    29,   104,    31,    90,   206,
      34,    98,    99,   100,   101,   102,    32,    36,   104,    37,
     229,    53,    98,    99,   100,   101,   102,    54,    55,   104,
     211,    41,   212,    56,   -14,   -14,   144,    78,    39,    83,
      57,    82,    87,    86,    58,    92,   113,   116,   114,   264,
     115,   120,   124,   121,    59,    60,   234,    61,   123,   131,
     145,   132,   133,   137,   134,   142,   119,   143,   150,   154,
     156,   149,   164,    75,   244,    75,   246,    75,   247,   165,
     175,    90,   176,   197,   182,   194,   191,   195,   196,   200,
     222,   213,   210,    75,   261,   216,   217,   218,   219,   225,
     236,   237,   240,    75,   269,   242,   250,   252,   260,   262,
     268,   263,   257,   265,   245,   235,    33,   184,   266,   248,
     122,     0,   162,     0,   130,     0,     0,     0,     0,     0,
       0,   139
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-175))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      35,    36,    36,    39,    57,    94,    42,    90,   110,   136,
      31,    13,    31,    23,     4,   189,    37,    32,    33,    34,
      11,   104,    13,    13,    56,    13,    15,    10,    56,    35,
      36,    30,    23,    65,    24,   118,    27,    65,    13,    74,
      74,   124,    17,    18,    13,    28,    65,    62,    63,    64,
     133,    53,   135,   142,    44,    45,    46,    47,   232,    58,
      35,    36,    83,    51,    53,    13,   149,     8,     9,    17,
      18,     0,   199,    48,    49,    50,    51,    52,   113,   114,
      55,    15,   165,    35,    36,    37,   188,    35,    36,    35,
      36,    37,    10,     3,    13,    54,    13,    15,    17,    18,
      48,    49,    50,    51,    52,    53,    13,    55,    14,    61,
      20,    18,    13,    13,    21,    61,    22,    13,   198,   208,
      41,   174,    18,    55,     5,   161,   206,    59,   211,    48,
      49,    50,    51,    52,    55,    55,    55,    13,    59,   175,
      15,    48,    49,    50,    51,    52,    57,     5,    55,    13,
     239,     6,    48,    49,    50,    51,    52,    12,    13,    55,
      54,     7,    56,    18,    35,    36,    37,    53,    25,    13,
      25,    55,    13,    53,    29,    53,    55,    10,    55,   262,
      53,    10,    31,    57,    39,    40,   222,    42,    56,    10,
      61,    15,    55,    53,    56,    38,    65,    53,    13,    13,
      13,    55,    53,   238,   238,   240,   240,   242,   242,    54,
      57,    59,    24,    22,    56,    53,    56,    53,    53,    56,
      19,    60,    56,   258,   258,    56,    53,    53,    53,     6,
      53,    53,    26,   268,   268,    16,    10,    16,    10,    55,
      26,    12,    53,    53,   239,   223,    22,   146,    56,   243,
      78,    -1,   122,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    67,    13,     0,    15,    11,    13,    23,    27,
      85,    86,   101,   115,   120,   135,   136,   137,   139,    13,
      54,   102,    13,    13,    86,     5,    86,    15,    53,    55,
      99,    13,    57,    99,    15,    68,     5,    13,   116,    25,
     102,     7,    84,     4,    13,    24,    44,    45,    46,    47,
      72,   121,   140,     6,    12,    13,    18,    25,    29,    39,
      40,    42,    74,    78,    83,   103,   107,   109,   114,   119,
     127,   128,   129,   133,   134,   142,   129,   102,    53,   117,
     140,   140,    55,    13,    81,    82,    53,    13,   104,    55,
      59,    70,    53,    13,    17,    18,    35,    36,    48,    49,
      50,    51,    52,    53,    55,    98,   100,   118,   130,   138,
     141,   142,   110,    55,    55,    53,    10,   129,    31,    65,
      10,    57,   116,    56,    31,    73,    95,   122,   130,   102,
      82,    10,    15,    55,    56,    71,    95,    53,    41,    70,
     118,    95,    38,    53,    37,    61,   113,   132,   138,    55,
      13,    51,   142,   142,    13,    95,    13,    13,    53,    14,
      22,   112,   117,    95,    53,    54,    97,    96,    32,    33,
      34,    62,    63,    64,   126,    57,    24,    80,    95,    69,
      95,    97,    56,   118,    98,    35,    36,    75,    77,   131,
      95,    56,    56,    56,    53,    53,    53,    22,   140,    95,
      56,     3,    20,   108,   123,   130,   140,    10,    28,    79,
      56,    54,    56,    60,   138,    75,    56,    53,    53,    53,
      73,    97,    19,   124,    73,     6,    21,    87,    88,   118,
     105,    95,    76,   111,   140,   122,    53,    53,    30,    58,
      26,    75,    16,   125,   129,    87,   129,   129,   123,   106,
      10,    89,    16,     8,     9,    90,    92,    53,    91,    93,
      10,   129,    55,    12,    95,    53,    56,    94,    26,   129
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 177 "syntacticAnalyzer.y"
    { 
			fprintf( yyout, "CODE(%d)\nL 0:\n", Q.nextCodeNumber++ ); 
			Q.stat = 1;
		}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 187 "syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(1) - (1)].regStruct)->key.id, (yyvsp[(1) - (1)].regStruct)->key.scope, 
																		(yyvsp[(1) - (1)].regStruct)->typeSymbol, (yyvsp[(1) - (1)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//$$ = auxRegisterList;
		}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 200 "syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(3) - (3)].regStruct)->key.id, (yyvsp[(3) - (3)].regStruct)->key.scope, 
																		(yyvsp[(3) - (3)].regStruct)->typeSymbol, (yyvsp[(3) - (3)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//addRegisterToList( &auxRegisterList, $3 );
			//$$ = auxRegisterList;
		}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 235 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 237 "syntacticAnalyzer.y"
    {auxRegisterList = NULL;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 237 "syntacticAnalyzer.y"
    { (yyval.regStruct) = auxRegisterList;  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 254 "syntacticAnalyzer.y"
    { 
		errorCode = checkAssignmentType((yyvsp[(1) - (4)].regStruct), (yyvsp[(3) - (4)].regStruct));

		if (errorCode == -1){
			getSymbolTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeSymbol );

			sprintf(errorString,"Left side assignment isn't of variable type. Type is %s", string1);
			yyerror(errorString);
		
		} else if(errorCode == -2){
			getSymbolTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeSymbol );
			getSymbolTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeSymbol );

			sprintf(errorString,"Cannot assign right part of type %s", string2);
			yyerror(errorString);
		} else if(errorCode == -3){
			getVariableTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeVariable );
			getVariableTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeVariable );

			sprintf(errorString,"Cannot assign right part of typeVariable %s", string2);
			yyerror(errorString);
		} 

		if(errorCode) YYABORT;

		getVariableTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeVariable );
		getVariableTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeVariable );
		//printf("Assigning type %s := type %s.\n", string1, string2);
		// In code generation, force casting if variable types are different

		generateCodeAssignment( yyout, &Q, (yyvsp[(1) - (4)].regStruct), (yyvsp[(3) - (4)].regStruct) );
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 291 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (2)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateCodeAddition( yyout, &Q, (yyvsp[(-1) - (2)].regStruct), (yyvsp[(2) - (2)].regStruct), (yyvsp[(1) - (2)].op) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(-1) - (2)].regStruct), (yyvsp[(2) - (2)].regStruct))
																	);	
			if((yyvsp[(2) - (2)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (2)].regStruct));
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 309 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 310 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateCodeAddition( yyout, &Q, (yyvsp[(-1) - (4)].regStruct), (yyvsp[(4) - (4)].regStruct), (yyvsp[(1) - (4)].op) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(-1) - (4)].regStruct), (yyvsp[(4) - (4)].regStruct))
																	);	

			if((yyvsp[(2) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (4)].regStruct));
			if((yyvsp[(4) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(4) - (4)].regStruct));
			//destroyRegister($4);
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 334 "syntacticAnalyzer.y"
    {	(yyval.op) = '+'; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 335 "syntacticAnalyzer.y"
    {	(yyval.op) = '-'; }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 343 "syntacticAnalyzer.y"
    {
		// Get register of the identifier
		auxRegister = getSymbol(&sT, (yyvsp[(2) - (7)].string), sT.currentScope);
		errorCode = checkIfNumeric(errorString, auxRegister, 5);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
		nOthers = 0;
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 359 "syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 5);
		if(errorCode && (yyvsp[(2) - (4)].regStruct)->typeVariable!=Void){ // others have Void as varaible type
			yyerror(errorString);
			YYABORT;
		}
		
		if( (yyvsp[(2) - (4)].regStruct)->typeVariable == Void ){
			if ( nOthers > 0 ){
				yyerror("Duplicated others in case statement");
				YYABORT;
			}
			nOthers++;
		}
	}
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 385 "syntacticAnalyzer.y"
    {
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  Field, (yyvsp[(4) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister );
	}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 415 "syntacticAnalyzer.y"
    { /*destroyRegister( $1 );*/ }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 417 "syntacticAnalyzer.y"
    { markSubprogramAsDefined( (yyvsp[(1) - (1)].regStruct) );
		//destroyRegister( $1 ); 
	  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 439 "syntacticAnalyzer.y"
    {			
			errorCode = checkIfDiscreteChoice(errorString, (yyvsp[(1) - (1)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 447 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 460 "syntacticAnalyzer.y"
    {
			errorCode = checkIfOthers(errorString, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 468 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 482 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
			fprintf(yyout,"\t// Open else block \n");

	  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 492 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
  				fprintf(yyout,"\t// Open elsif block \n");
					(yyval.integer)=Q.nextLabel++;
				 }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 497 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 507 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 512 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 512 "syntacticAnalyzer.y"
    {

		if((yyvsp[(3) - (3)].regStruct)->typeVariable == Void ){ // There's no list
			(yyval.regStruct) = (yyvsp[(1) - (3)].regStruct);
			destroyRegister((yyvsp[(3) - (3)].regStruct));
		}else {
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct);
		}
	}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 525 "syntacticAnalyzer.y"
    {
		addRegisterToList( &auxRegisterList, (yyvsp[(2) - (3)].regStruct) );
		(yyval.regStruct) = auxRegisterList;
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 530 "syntacticAnalyzer.y"
    {
		(yyval.regStruct) = NULL;
	}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 537 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 538 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(1) - (3)].regStruct); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 539 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 545 "syntacticAnalyzer.y"
    { 
		(yyval.regStruct) = auxRegisterList; 
	}
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 548 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 560 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Function, (yyvsp[(5) - (5)].typeVariable) ); 
	  addRegister( &sT, auxRegister );
	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 575 "syntacticAnalyzer.y"
    {  fprintf(yyout,"\t//////////////////////////////////\n");
  			fprintf(yyout,"\t// Open if block \n");
				(yyval.integer)=Q.nextLabel++; 
			}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 580 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 590 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 603 "syntacticAnalyzer.y"
    { (yyval.op) = '*'; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 604 "syntacticAnalyzer.y"
    { (yyval.op) = '+'; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 609 "syntacticAnalyzer.y"
    { (yyval.integer)=generateCodeOpenWhile( yyout, &Q ); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 610 "syntacticAnalyzer.y"
    { generateCodeEvaluateWhile( yyout, &Q, (yyvsp[(2) - (5)].integer) ); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 614 "syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (11)].regStruct), 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

	  generateCodeCloseWhile( yyout, &Q, (yyvsp[(2) - (11)].integer) );
	}
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 627 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = Out; }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 628 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = InOut; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 629 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 630 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 635 "syntacticAnalyzer.y"
    { (yyval.op)='*'; }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 636 "syntacticAnalyzer.y"
    { (yyval.op)='/'; }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 647 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (7)].string), sT.currentScope,  Variable, (yyvsp[(5) - (7)].typeVariable) ); 
	  errorCode = addRegister( &sT, auxRegister ); 
	  if(errorCode){
			yyerror();
			YYABORT;
		} 

		errorCode = getVarStaticAddress( &Q, auxRegister );
		if( errorCode == -1 ){
			yyerror("Symbol created is not a variable");
			YYABORT;
		}
		if( errorCode == -2){
			yyerror("Case for object_declaration not implemented yet");
			YYABORT;
		}

		errorCode = generateCodeVarStatic( yyout, &Q, auxRegister, "0" );
		if( errorCode == -1 ){
			yyerror("Symbol created is not a variable");
			YYABORT;
		}
	}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 676 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  (yyvsp[(4) - (6)].typeSymbol), (yyvsp[(5) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); 
	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 690 "syntacticAnalyzer.y"
    { generateAnonymousId();

										auxRegister = createRegister( anonymousIdString, 
																									sT.currentScope, Literal, 
																									Integer
																								);

										getVarStaticAddress(  &Q, auxRegister );
										generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

										(yyval.regStruct) = auxRegister;
									}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 702 "syntacticAnalyzer.y"
    { generateAnonymousId();

												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Real
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 714 "syntacticAnalyzer.y"
    { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 724 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Bool
																										);

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 735 "syntacticAnalyzer.y"
    {	
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Void
																										);	
												(yyval.regStruct) = auxRegister;	
											}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 742 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												(yyval.regStruct) = auxRegister;
											}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 749 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 750 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 751 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(2) - (3)].regStruct);	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 757 "syntacticAnalyzer.y"
    { 
		//printf( "line %d -- id '%s' -- scope %d\n", line, $1, sT.currentScope );
		
		errorCode = searchProcedure( &sT, (yyvsp[(1) - (3)].string), sT.currentScope );
	  if ( errorCode!=0 ){
	  	yyerror("Procedure call error: %s", (yyvsp[(1) - (3)].string));
	  	YYABORT;
		} 
    
		// Check actual parameters against defined arguments
		// (Same number and type of parameters).
		auxRegister = getProcedure( &sT, (yyvsp[(1) - (3)].string), sT.currentScope );
		
	
  	if( checkParametersSubprogramCall( (yyvsp[(2) - (3)].regStruct), auxRegister ) ) { //Change it for checkActual call
  	  yyerror("CheckParameterSubprogram error");
  	  YYABORT;
  	}
  	
  	// It sets auxRegisterList as NULL
		deleteRegisterList( &auxRegisterList );
		// Generate code		
	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 782 "syntacticAnalyzer.y"
    {
			// Generate code
			generateCodePutStringLiteral( yyout, &Q, (yyvsp[(3) - (5)].string) );
		}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 787 "syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Put' parameter: %s", errorString);
		  	YYABORT;
			} 

			// Generate code
			generateCodePutVariable( yyout, &Q, (yyvsp[(3) - (5)].regStruct) );
		}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 798 "syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Get' parameter: %s", errorString);
		  	YYABORT;
			} 
			
			// Generate code
			generateCodeGetVariable( yyout, &Q, (yyvsp[(3) - (5)].regStruct) );
		}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 809 "syntacticAnalyzer.y"
    {
			generateCodeNewLine( yyout, &Q );
		}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 817 "syntacticAnalyzer.y"
    { auxRegister = createRegister( (yyvsp[(2) - (3)].string), sT.currentScope,  Procedure, Void ); 
	  if ( addRegister( &sT, auxRegister ) ) { // Procedure has been already specified, but not defined
	  	free(auxRegister);
	  	auxRegister = getProcedure( &sT, (yyvsp[(2) - (3)].string), sT.currentScope );

	  	if( auxRegister->defined == 1 ) { // Defined procedure, error due to double definition
	      sprintf(errorString, "!! - Double definition of procedure '%s'\n", auxRegister->key.id);
	      yyerror(errorString);
	  	}

	  	// Check that specification and definition have same number 
	  	// and type of parameters,
	  	if( checkParametersSubprogram( (yyvsp[(3) - (3)].regStruct), auxRegister ) ){
	  	  yyerror("CheckParameterSubprogram is incomplete");
	  	}

	  	//addParametersToSubprogram( &sT, $3, auxRegister );
	  }
	  else{ // Adding the list of parameters
	  	//sT.currentScope = stackScope;
	  	auxRegister = getProcedure( &sT, (yyvsp[(2) - (3)].string), sT.currentScope );

	  	//addParametersToSubprogram( &sT, $3, auxRegister );
	  	//auxRegisterList = NULL;

	  }

	  addParametersToSubprogram( &sT, (yyvsp[(3) - (3)].regStruct), auxRegister );
	  auxRegisterList = NULL;

	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 860 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 862 "syntacticAnalyzer.y"
    {	//yyerror("Incomple simple expression");
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for relation */
			generateCodeRelation( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), (yyvsp[(2) - (3)].string) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Bool
																	);	
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 890 "syntacticAnalyzer.y"
    { fprintf(yyout,"\tR1=R0;\t\t\t//Saving R0 for relation call\n");; }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 892 "syntacticAnalyzer.y"
    { 
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct); 

			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for relation */
			// R1 has the evaluation of the previous expression
			generateCodeLogical( yyout, &Q, (yyvsp[(1) - (3)].op) );
		}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 906 "syntacticAnalyzer.y"
    {

		generateAnonymousId();
		auxRegister = createRegister( anonymousIdString, 
																	sT.currentScope, Auxiliar, 
																	getFactorVariableType((yyvsp[(-1) - (5)].regStruct), (yyvsp[(3) - (5)].regStruct))
																);	
		if((yyvsp[(3) - (5)].regStruct)->typeSymbol==Auxiliar)destroyRegister((yyvsp[(3) - (5)].regStruct));
		(yyval.regStruct) = auxRegister;
	}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 917 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister; 
		}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 929 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "==");  }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 930 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "<");  }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 931 "syntacticAnalyzer.y"
    { strcpy((yyval.string), ">");  }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 932 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "!="); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 933 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 934 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 958 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 959 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			/* Generate code for addition */

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(2) - (4)].regStruct), (yyvsp[(4) - (4)].regStruct))
																	);	
			if((yyvsp[(2) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (4)].regStruct));
			if((yyvsp[(4) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(4) - (4)].regStruct));
			
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 978 "syntacticAnalyzer.y"
    { 
				errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (2)].regStruct), 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				/*
				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			$2->typeVariable
																		);	
				*/
				
				(yyval.regStruct) = (yyvsp[(2) - (2)].regStruct);
		 	}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 997 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct) ; }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 998 "syntacticAnalyzer.y"
    { 	
				errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																		);

				if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
				if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));
	
				(yyval.regStruct) = auxRegister;
			}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1018 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1037 "syntacticAnalyzer.y"
    {
		enterScope ( &sT );

		errorCode = addParametersToSymbolsTable(&sT, (yyvsp[(1) - (2)].regStruct));
		if ( errorCode!=0 ){
	  	yyerror("Error adding parameters of subprogram %s", (yyvsp[(1) - (2)].regStruct)->key.id);
	  	YYABORT;
		}

		(yyval.regStruct) = (yyvsp[(1) - (2)].regStruct);
	}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1056 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (7)].regStruct); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1061 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (6)].regStruct); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1066 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1067 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1072 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1074 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 0);
			if(errorCode) {
				printRegister(*(yyvsp[(3) - (3)].regStruct));
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 0);
			if(errorCode){
				printRegister(*(yyvsp[(1) - (3)].regStruct));
				yyerror(errorString);
				YYABORT;
			} 

			getVariableTypeName(string1, (yyvsp[(1) - (3)].regStruct)->typeVariable);
  		getVariableTypeName(string2, (yyvsp[(3) - (3)].regStruct)->typeVariable);
  		//printf("4##########\n");
  		//printf("####%s - %s\n", string1, string2);

  		generateCodeMultiply( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), (yyvsp[(2) - (3)].op) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																	);	
			if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
			if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));

			(yyval.regStruct) = auxRegister;
		}
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1114 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Integer; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1115 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Real; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1116 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Character; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1117 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Bool; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1118 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = ArrayVariable; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1119 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Record; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1121 "syntacticAnalyzer.y"
    { 
			auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);

		 	/* check if type really exists */
			if(auxRegister == NULL){
				sprintf(errorString, "Type '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
				yyerror(errorString);
				YYABORT; // Serious compiler error
			}

			(yyval.typeVariable) = CustomType; 
		}
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 1142 "syntacticAnalyzer.y"
    { auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							(yyval.regStruct) = auxRegister; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 1150 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> indexed_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1151 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> selected_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;



/* Line 1806 of yacc.c  */
#line 2936 "compiler.tab.c"
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 1154 "syntacticAnalyzer.y"


//Codigo C adicional

void generateAnonymousId(){
  sprintf(anonymousIdString, "%d", anonymousId++);
}

int main(int argc, char** argv){
	errorCompiling = 0;

	auxRegisterList = NULL;
	nOthers = 0; // Counter for case
	//nRegisters = 0;
	stackScope = 1;

	printf("-- Initializing symbols table\n\n");
    
  symbolsTableInit( &sT );
  qMachineInit( &Q );

	if (argc>1){
		yyin=fopen(argv[1], "r");

		//Out file
		memcpy( anonymousIdString, argv[1], strlen(argv[1])-4);
		sprintf( anonymousIdString, "%s.q.c", anonymousIdString );
		yyout=fopen(anonymousIdString, "w");

		generateCodeStart( yyout, &Q );

		printf("-- Starting parsing.\n");

		yyparse();

		printf("-- Parsing finished.\n\n");

		generateCodeEnd( yyout );

		fclose(yyin);
		fclose(yyout);
	}
	else printf("-- Please specify a file to compile\n\n");

///////
	
  printf("Starting hash table tests\n\n");

	printSymbolsTable( sT );
	printf("\n");
	
	destroySymbolsTable( &sT );
	printSymbolsTable( sT );
	printf("\n");

}

int yyerror(char* message){
	printf("-- Error ocurred in line %i, column %i: %s. Last read token is '%s'\n", line, column, message, yytext);

	errorCompiling = 1;
	//sprintf(errorString,"");
	return 0;
}

