/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1098 "mini_l.y" /* yacc.c:339  */

#include "heading.h"
//global
int yyerror (char* s);
int yylex (void);
int tmpcount = 0;
int lblcount = 0;
int paramVal = 0;
ofstream out_stream;
const char* tok[] = {"chicken","function","beginparams","endparams","beginlocals","endlocals","beginbody","integer","array",
						"of","if","then","endif","else","while","do","foreach","in","beginloop","endloop","continue",
						"read","write","true","false","semicolon","colon","comma","lparen","rparen","lsquare","rsquare",
						"assign","return"};
						
vector<string> tokens(tok, tok + 33); 
bool param_open = false;
bool error = false;
stringstream ss;
// structures
vector <string> param_vector;
vector <string> function_vector;
vector <string> identifier_vector;
vector <string> identifier_type_vector;
vector <string> operands;
vector <string> statement_vector;
vector <vector <string> > if_label_vector;
vector <vector <string> > loop_label_vector;
vector <vector <string> > for_loop_label_vector;
stack <string> param_stack;
stack <string> read_stack;
//functions
string genTmpVar();
string genLblVar();
bool unDeclaredVariable(string);
bool wasDeclared(string);
bool mainExists(vector<string>);
bool arrSizeZero(int);
bool functionNotDeclared(string);
bool usingReservedKeyword(string, vector<string>);
bool isArrayUsedAsNotArray(string);
bool isNotArrayUsedAsArray(string);
bool usedContinueOutsideOfLoop(vector <vector <string> >);

#line 110 "mini_l.tab.c" /* yacc.c:339  */

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
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
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
    FUNCTION = 258,
    BEGINPARAMS = 259,
    ENDPARAMS = 260,
    BEGINLOCALS = 261,
    ENDLOCALS = 262,
    BEGINBODY = 263,
    ENDBODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOREACH = 274,
    IN = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    LPAREN = 286,
    RPAREN = 287,
    LSQUARE = 288,
    RSQUARE = 289,
    ASSIGN = 290,
    RETURN = 291,
    NUMBER = 292,
    IDENTIFIER = 293,
    MULT = 294,
    DIV = 295,
    MOD = 296,
    ADD = 297,
    SUB = 298,
    LT = 299,
    LTE = 300,
    GT = 301,
    GTE = 302,
    EQ = 303,
    NEQ = 304,
    NOT = 305,
    AND = 306,
    OR = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 1141 "mini_l.y" /* yacc.c:355  */

int val;
string* op_val;

#line 208 "mini_l.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 223 "mini_l.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  182

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1155,  1155,  1165,  1166,  1168,  1183,  1186,  1189,  1230,
    1231,  1233,  1258,  1277,  1297,  1308,  1314,  1315,  1316,  1317,
    1318,  1319,  1320,  1321,  1322,  1324,  1345,  1364,  1372,  1381,
    1382,  1385,  1398,  1431,  1444,  1462,  1482,  1494,  1503,  1521,
    1535,  1554,  1575,  1577,  1596,  1617,  1629,  1642,  1645,  1646,
    1648,  1662,  1689,  1698,  1699,  1722,  1723,  1803,  1804,  1822,
    1823,  1838,  1855,  1857,  1882,  1906,  1930,  1954,  1978,  2003,
    2005,  2029,  2053,  2055,  2057,  2081,  2104,  2128,  2130,  2134,
    2138,  2157,  2184,  2189,  2194,  2221,  2238,  2251,  2262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGINPARAMS", "ENDPARAMS",
  "BEGINLOCALS", "ENDLOCALS", "BEGINBODY", "ENDBODY", "INTEGER", "ARRAY",
  "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH", "IN",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE", "FALSE",
  "SEMICOLON", "COLON", "COMMA", "LPAREN", "RPAREN", "LSQUARE", "RSQUARE",
  "ASSIGN", "RETURN", "NUMBER", "IDENTIFIER", "MULT", "DIV", "MOD", "ADD",
  "SUB", "LT", "LTE", "GT", "GTE", "EQ", "NEQ", "NOT", "AND", "OR",
  "$accept", "program", "functions", "function_help", "beginparam",
  "endparam", "function", "dec", "declaration", "dec1", "dec2",
  "statement", "statement1", "statement2", "state2help1",
  "else_if_statement", "if_statement", "statement3", "while_start",
  "while_statement", "statement4", "do_check", "do_while", "statement5",
  "foreachstart", "foreachstatement", "forexpr", "statement6",
  "read_variables", "state6help", "statement7", "statement8", "statement9",
  "bool_exp", "relationHelp", "relationexpr", "relationExprHelper", "comp",
  "expression", "multExprHelper", "multiplicative_expr", "termHelper",
  "term", "identifierTerm", "identifierHelp", "varTerm", "var", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -151,    13,    14,  -151,     5,    21,  -151,  -151,    62,  -151,
      52,    64,    92,    77,    86,    52,  -151,   110,    52,    17,
    -151,    52,  -151,  -151,    84,  -151,   111,    82,   112,    87,
      -3,   113,    49,  -151,   101,  -151,  -151,    85,     3,   -12,
      65,    98,  -151,  -151,   118,    -3,    -3,  -151,    -3,    49,
    -151,   114,    -3,  -151,    -3,    90,  -151,  -151,  -151,  -151,
     119,  -151,  -151,    49,  -151,    60,     3,    58,    -7,    79,
    -151,  -151,  -151,    12,    39,    38,  -151,  -151,  -151,  -151,
      34,   -12,   100,   104,  -151,   -12,   -12,    -3,  -151,   120,
      94,   115,   -15,    49,   116,   117,   121,   122,  -151,   -20,
       6,   -12,   -12,  -151,  -151,  -151,    49,    49,   -12,   -12,
     -12,   -12,   -12,   -12,   -12,   -12,  -151,   -12,   -12,   -12,
    -151,   102,   -12,  -151,   123,     3,  -151,   108,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,    93,  -151,  -151,   106,  -151,
    -151,  -151,   124,   125,   126,    79,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,    39,    39,    38,    38,    38,    35,   127,
     104,   128,  -151,   -12,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,   -12,  -151,   129,  -151,   -12,  -151,   130,  -151,  -151,
     129,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     3,     5,     0,     6,
      10,    13,     0,     0,     0,     0,     7,     0,    10,     0,
      12,    10,     9,    15,     0,    11,     0,     0,     0,     0,
       0,     0,     0,    35,     0,    41,    51,     0,     0,     0,
       0,     0,    16,    17,     0,     0,     0,    18,     0,     0,
      19,     0,     0,    20,     0,     0,    21,    22,    23,    24,
       0,    60,    61,     0,    85,    87,     0,     0,     0,    53,
      55,    57,    59,     0,    72,    77,    78,    79,    84,    38,
      47,     0,    87,    49,    52,     0,     0,    30,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,    80,    58,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
      73,     0,     0,    43,     0,     0,    50,     0,    25,    29,
      28,    27,    31,    33,    34,    36,    37,    39,     0,    40,
      62,    86,    83,     0,     0,    54,    56,    65,    67,    66,
      68,    63,    64,    72,    72,    77,    77,    77,    47,     0,
      49,     0,    42,     0,    81,    88,    70,    71,    74,    75,
      76,     0,    45,    47,    48,     0,    82,     0,    44,    26,
      47,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,  -151,  -151,  -151,  -151,  -151,    18,  -151,   131,
    -151,  -151,  -151,  -151,   -43,  -151,  -151,  -151,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,  -151,  -151,  -150,   -13,
    -151,  -151,  -151,   -45,    42,    43,    89,  -151,   -39,   -42,
      -1,   -53,   -11,  -151,   -14,   -37,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,    10,    17,     6,    12,    13,    14,
      25,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    97,    56,   123,   126,
      57,    58,    59,    68,    69,    70,    71,    72,    73,   116,
      74,   120,    75,    76,   143,    77,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      84,    83,    89,    90,    92,    91,   134,   105,   172,    94,
      32,    95,   140,     3,    33,    34,    35,     4,    99,    81,
      36,    37,    38,   178,   100,    64,    65,    23,    24,   103,
     181,    66,   106,    39,    81,    40,    22,   106,   141,    26,
      64,    82,   124,     7,   129,   106,   127,   128,   135,     8,
     108,   109,   110,   111,   112,   113,   108,   109,   110,   111,
     112,   113,   142,   144,   121,   121,     9,   122,   171,   147,
     148,   149,   150,   151,   152,    61,    62,   117,   118,   119,
      63,   114,   115,   159,    61,    62,    64,    65,   160,    63,
      11,   101,    66,   102,    15,    64,    65,    16,    85,    67,
      86,    66,   168,   169,   170,    18,   155,   156,   157,   131,
     132,   166,   167,   153,   154,    19,    21,    27,    28,    29,
      30,    31,    79,    80,   142,    60,    87,    88,    96,    98,
     107,    93,   177,   102,   125,   130,   179,   133,   136,   137,
     158,   138,   161,   139,   162,   106,    20,   174,   145,   176,
     146,     0,     0,     0,   163,   141,   104,   164,     0,   121,
     165,   173,     0,   175,   180
};

static const yytype_int16 yycheck[] =
{
      39,    38,    45,    46,    49,    48,    21,    14,   158,    52,
      13,    54,    32,     0,    17,    18,    19,     3,    63,    31,
      23,    24,    25,   173,    63,    37,    38,    10,    11,    66,
     180,    43,    52,    36,    31,    38,    18,    52,    32,    21,
      37,    38,    81,    38,    87,    52,    85,    86,    93,    28,
      44,    45,    46,    47,    48,    49,    44,    45,    46,    47,
      48,    49,   101,   102,    30,    30,     4,    33,    33,   108,
     109,   110,   111,   112,   113,    26,    27,    39,    40,    41,
      31,    42,    43,   122,    26,    27,    37,    38,   125,    31,
      38,    31,    43,    33,    30,    37,    38,     5,    33,    50,
      35,    43,   155,   156,   157,    28,   117,   118,   119,    15,
      16,   153,   154,   114,   115,    29,     6,    33,     7,    37,
       8,    34,    21,    38,   163,    12,    28,     9,    38,    10,
      51,    17,   171,    33,    30,    15,   175,    22,    22,    22,
      38,    20,    34,    21,    38,    52,    15,   160,   106,   163,
     107,    -1,    -1,    -1,    30,    32,    67,    32,    -1,    30,
      34,    34,    -1,    35,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,     3,    56,    59,    38,    28,     4,
      57,    38,    60,    61,    62,    30,     5,    58,    28,    29,
      62,     6,    60,    10,    11,    63,    60,    33,     7,    37,
       8,    34,    13,    17,    18,    19,    23,    24,    25,    36,
      38,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    80,    83,    84,    85,
      12,    26,    27,    31,    37,    38,    43,    50,    86,    87,
      88,    89,    90,    91,    93,    95,    96,    98,    99,    21,
      38,    31,    38,    98,    91,    33,    35,    28,     9,    67,
      67,    67,    86,    17,    67,    67,    38,    79,    10,    86,
      91,    31,    33,    98,    89,    14,    52,    51,    44,    45,
      46,    47,    48,    49,    42,    43,    92,    39,    40,    41,
      94,    30,    33,    81,    91,    30,    82,    91,    91,    67,
      15,    15,    16,    22,    21,    86,    22,    22,    20,    21,
      32,    32,    91,    97,    91,    87,    88,    91,    91,    91,
      91,    91,    91,    93,    93,    95,    95,    95,    38,    91,
      98,    34,    38,    30,    32,    34,    92,    92,    94,    94,
      94,    33,    81,    34,    82,    35,    97,    91,    81,    91,
      34,    81
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    57,    58,    59,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    80,    81,    81,    81,    82,    82,
      83,    84,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90,    91,
      92,    92,    92,    93,    94,    94,    94,    94,    95,    95,
      95,    96,    97,    97,    98,    98,    98,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     2,     1,     1,    11,     3,
       0,     3,     3,     1,     6,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     6,     3,     3,     3,
       2,     3,     3,     3,     3,     1,     3,     3,     2,     3,
       3,     1,     3,     3,     6,     3,     6,     0,     3,     0,
       3,     1,     2,     1,     3,     1,     3,     1,     2,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     0,     2,     3,     3,     3,     0,     1,     1,
       2,     4,     3,     1,     1,     1,     3,     1,     4
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
#line 1156 "mini_l.y" /* yacc.c:1646  */
    {
				out_stream.close();
				if(!mainExists(function_vector)) {
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();
            	}
			}
#line 1438 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 1169 "mini_l.y" /* yacc.c:1646  */
    {
			// out_stream.open("test1.mil", fstream::app);
			if(!out_stream.is_open()) {
				if(!error)
				{
					out_stream.open("test1.mil");
				}
			}
			
			function_vector.push_back(*((yyvsp[0].op_val)));
			cout << "func " << *((yyvsp[0].op_val)) << endl;
			out_stream << "func " << *((yyvsp[0].op_val)) << endl;
		}
#line 1456 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 1184 "mini_l.y" /* yacc.c:1646  */
    { param_open = true;}
#line 1462 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 1187 "mini_l.y" /* yacc.c:1646  */
    { param_open = false;}
#line 1468 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 1190 "mini_l.y" /* yacc.c:1646  */
    {
				// 	int num_param = 0;
				// 	for(int i=0; i < identifier_vector.size(); i++)
				// 	{
				// 		// identifier_type_vector.at(i) = INTEGER if int or N from [N] if array
				// 		if(identifier_type_vector.at(i) == "INTEGER"){
				// 			cout<<". " << identifier_vector.at(i) << endl;
				// 			out_stream<<". " << identifier_vector.at(i) << endl;
				// 		}
				// 		else{	// would be an array
				// 			cout <<".[] "<< identifier_vector.at(i)<< ", " << identifier_type_vector.at(i) <<endl;
				// 			out_stream <<".[] "<< identifier_vector.at(i)<< ", " << identifier_type_vector.at(i) <<endl;
				// 		}
				// 	}
				// 	identifier_vector.clear();
				// 	identifier_type_vector.clear();
				// 	while(!param_vector.empty())
				// 	{
				// 		string paramVecFront = param_vector.front();
				// 		cout << "= " << paramVecFront<< ", $" << num_param << endl;
				// 		out_stream<< "= " << paramVecFront<< ", $" << num_param << endl;
				// 		param_vector.erase(param_vector.begin());
				// 		num_param++;
				// 	} 
				// for(int i=0;i<statement_vector.size();i++)
				// {
    //             	cout<<statement_vector.at(i)<<endl;
				// }
	            cout << "endfunc" << endl;
	            out_stream << "endfunc" << endl;
				identifier_vector.clear();
            	identifier_type_vector.clear();	            
	            statement_vector.clear();
	            param_vector.clear();
				if(error) {
            	out_stream.open("test1.mil", ofstream::trunc);
            	out_stream.close();
            	}
			}
#line 1512 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 1234 "mini_l.y" /* yacc.c:1646  */
    {
					int num_param = 0;
					for(int i=0; i < identifier_vector.size(); i++)
					{
						// identifier_type_vector.at(i) = INTEGER if int or N from [N] if array
						if(identifier_type_vector.at(i) == "INTEGER"){
							cout<<". " << identifier_vector.at(i) << endl;
							out_stream<<". " << identifier_vector.at(i) << endl;
						}
						else{	// would be an array
							cout <<".[] "<< identifier_vector.at(i)<< ", " << identifier_type_vector.at(i) <<endl;
							out_stream <<".[] "<< identifier_vector.at(i)<< ", " << identifier_type_vector.at(i) <<endl;
						}
					}
					while(!param_vector.empty())
					{
						string paramVecFront = param_vector.front();
						cout << "= " << paramVecFront<< ", $" << num_param << endl;
						out_stream<< "= " << paramVecFront<< ", $" << num_param << endl;
						param_vector.erase(param_vector.begin());
						num_param++;
					}					
				}
#line 1540 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 1259 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_"+ *((yyvsp[-2].op_val));
				if(wasDeclared(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();					
				}
				// ~~~~~~~~~ CHECK DIS ~~~~~~~~~~ //
				if(usingReservedKeyword(*((yyvsp[-2].op_val)), tokens)){
					error = true;
					out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();	
				}
				string int_type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(int_type);
			}
#line 1563 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 1278 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_" + *((yyvsp[0].op_val));
				if(wasDeclared(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();						
				}
				if(usingReservedKeyword(*((yyvsp[0].op_val)), tokens)){
					error = true;
					out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();	
				}
				identifier_vector.push_back(temp);
				if(param_open){
					param_vector.push_back(temp);
				}
			}
#line 1586 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 1298 "mini_l.y" /* yacc.c:1646  */
    {
				stringstream num;
				num << (yyvsp[-3].val);
				int temps = ((yyvsp[-3].val));
				if(arrSizeZero(temps)){
					error = true;
				}
				string tempSpace = num.str();
				identifier_type_vector.push_back(num.str());
			}
#line 1601 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 1309 "mini_l.y" /* yacc.c:1646  */
    {
				string int_type = "INTEGER";
				identifier_type_vector.push_back(int_type);
			}
#line 1610 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1325 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_" + *((yyvsp[-2].op_val));
				string identifier_statement = "= " + temp + ", " + operands.at(operands.size() - 1);
				if(isArrayUsedAsNotArray(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();					
				}
				if(unDeclaredVariable(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();					
				}
				statement_vector.push_back(identifier_statement);
				cout << identifier_statement << endl;
				out_stream << identifier_statement << endl;
				operands.pop_back();
			}
#line 1635 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1346 "mini_l.y" /* yacc.c:1646  */
    {
				string array_name = "_" + *((yyvsp[-5].op_val));
				string array_source = operands.at(operands.size() - 1);
				operands.pop_back();
				string array_index = operands.at(operands.size() - 1);
				operands.pop_back();
				if(isNotArrayUsedAsArray(array_name))
				{
					error = true;
					out_stream.open("test1.mil", ofstream::trunc);
					out_stream.close();
				}
				string array_statement = "[]= " + array_name + ", " + array_index + ", " + array_source;
				statement_vector.push_back(array_statement);
				cout << array_statement << endl;
				out_stream << array_statement << endl;
			}
#line 1657 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 1365 "mini_l.y" /* yacc.c:1646  */
    {
				string if_end = ": " + if_label_vector.back().at(1);
				statement_vector.push_back(if_end);
				cout << if_end << endl;
				out_stream << if_end << endl;
				if_label_vector.pop_back(); // End of if statements
			}
#line 1669 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1373 "mini_l.y" /* yacc.c:1646  */
    {
				string if_end = ": " + if_label_vector.back().at(2);
				statement_vector.push_back(if_end);
				cout << if_end << endl;
				out_stream << if_end << endl;
				if_label_vector.pop_back();
			}
#line 1681 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 1386 "mini_l.y" /* yacc.c:1646  */
    {
						string end_if_statement = ":= " + if_label_vector.back().at(2);
						statement_vector.push_back(end_if_statement);
						cout << end_if_statement << endl;
						out_stream << end_if_statement << endl;
						
						string else_if_declare_statement = ": " + if_label_vector.back().at(1);
						statement_vector.push_back(else_if_declare_statement);
						cout << else_if_declare_statement << endl;
						out_stream << else_if_declare_statement << endl;
					}
#line 1697 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 1399 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genLblVar();
					temp = temp;
					string if_true = "if_condition_true_" + temp;
		            string if_false = "if_condition_false_" + temp;
		            string end_if = "end_if_"  + temp;
		            
		            vector<string> label_statements;
		            label_statements.push_back(if_true);
		            label_statements.push_back(if_false);
		            label_statements.push_back(end_if);
		            if_label_vector.push_back(label_statements);
		            
		            string if_true_statement = "?:= " + if_true + ", " + operands.at(operands.size() - 1);
		            statement_vector.push_back(if_true_statement); // adds if_true label to statement vector
		            cout << if_true_statement << endl;
		            out_stream << if_true_statement << endl;
		            operands.pop_back();
		            
		            string if_false_statement = ":= " + if_false;
		            statement_vector.push_back(if_false_statement); // adds if_false label to statement vector
		            cout << if_false_statement << endl;
		            out_stream << if_false_statement << endl;
		            
		            string if_declare_statement = ": " + if_true;
		            statement_vector.push_back(if_declare_statement);// adds if_declare statment to statement vector
		            cout << if_declare_statement << endl;
		            out_stream << if_declare_statement << endl;
		            
		            // does declare > false > true in order so it prints out this way.
				}
#line 1733 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1432 "mini_l.y" /* yacc.c:1646  */
    {
				string while_loop_label = ":= " + loop_label_vector.back().at(0);
				string while_loop_end = ": " + loop_label_vector.back().at(2);
				statement_vector.push_back(while_loop_label);
				cout << while_loop_label << endl;
				out_stream << while_loop_label << endl;
				statement_vector.push_back(while_loop_end);
				cout << while_loop_end << endl;
				out_stream << while_loop_end << endl;
				loop_label_vector.pop_back();
			}
#line 1749 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1445 "mini_l.y" /* yacc.c:1646  */
    {
				string while_in = "?:= " + loop_label_vector.back().at(1) + ", " +  operands.at(operands.size() - 1);
				operands.pop_back();
				string while_end = ":= " + loop_label_vector.back().at(2);
				string while_start = ": " + loop_label_vector.back().at(1);
	
				statement_vector.push_back(while_in);
				statement_vector.push_back(while_end);
				statement_vector.push_back(while_start);
				cout << while_in << endl;
				out_stream << while_in << endl;
				cout << while_end << endl;
				out_stream << while_end << endl;
				cout << while_start << endl;
				out_stream << while_start << endl;
			}
#line 1770 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 1463 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genLblVar();
		            string while_loop = "while_loop" + temp;
		            string cond_true = "conditional_true" + temp;
		            string cond_false = "conditional_false" + temp; 
		            
		            vector<string> while_statements;
		            while_statements.push_back(while_loop);
		            while_statements.push_back(cond_true);
		            while_statements.push_back(cond_false);
		            
		            
		            loop_label_vector.push_back(while_statements);
		            string while_declare = ": " + while_loop;
		            statement_vector.push_back(while_declare);
		            cout << while_declare << endl;
		            out_stream << while_declare << endl;
				}
#line 1793 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 1483 "mini_l.y" /* yacc.c:1646  */
    {
				string do_while_done = "?:= " + loop_label_vector.back().at(0) + ", " + operands.at(operands.size() - 1);
				cout << do_while_done << endl;
				out_stream << do_while_done << endl;
				statement_vector.push_back(do_while_done);
				operands.pop_back();
				loop_label_vector.pop_back();
			}
#line 1806 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1495 "mini_l.y" /* yacc.c:1646  */
    {
				string do_while_cond_check = ": " + loop_label_vector.back().at(1); 
				statement_vector.push_back(do_while_cond_check);
				cout << do_while_cond_check << endl;
				out_stream << do_while_cond_check << endl;
				// makes the continue check declare
			}
#line 1818 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1504 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genLblVar();
				string do_while = "do_while" + temp;
				string do_while_check = "do_while_check" + temp;
				
				vector<string> do_while_statements;
				do_while_statements.push_back(do_while);
				do_while_statements.push_back(do_while_check);
				
				loop_label_vector.push_back(do_while_statements);
				
				string do_while_declare = ": " + do_while;
				statement_vector.push_back(do_while_declare);
				cout << do_while_declare << endl;
				out_stream << do_while_declare << endl;
			}
#line 1839 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 1522 "mini_l.y" /* yacc.c:1646  */
    {
				string foreach_loop_label = ":= " + for_loop_label_vector.back().at(0);
				string foreach_loop_end = ": " + for_loop_label_vector.back().at(2);
				
				statement_vector.push_back(foreach_loop_label);
				cout << foreach_loop_label << endl;
				out_stream << foreach_loop_label << endl;
				statement_vector.push_back(foreach_loop_end);
				cout << foreach_loop_end << endl;
				out_stream << foreach_loop_end << endl;
			}
#line 1855 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 1536 "mini_l.y" /* yacc.c:1646  */
    {
				string foreach_in = "?:= " + for_loop_label_vector.back().at(1) + ", " +  operands.at(operands.size() - 1);
				operands.pop_back();
				string foreach_end = ":= " + for_loop_label_vector.back().at(2);
				string foreach_start = ": " + for_loop_label_vector.back().at(1);
	
				statement_vector.push_back(foreach_in);
				statement_vector.push_back(foreach_end);
				statement_vector.push_back(foreach_start);
				cout << foreach_in << endl;
				out_stream << foreach_in << endl;
				cout << foreach_end << endl;
				out_stream << foreach_end << endl;
				cout << foreach_start << endl;
				out_stream << foreach_start << endl;
			}
#line 1876 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1555 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genLblVar();
				temp = temp;
	            string foreach_loop = "foreach_loop" + temp;
	            string cond_true = "conditional_true" + temp;
	            string cond_false = "conditional_false" + temp; 
	            
	            vector<string> foreach_statements;
	            foreach_statements.push_back(foreach_loop);
	            foreach_statements.push_back(cond_true);
	            foreach_statements.push_back(cond_false);
	            
	            
	            for_loop_label_vector.push_back(foreach_statements);
	            string foreach_declare = ": " + foreach_loop;
	            statement_vector.push_back(foreach_declare);
	            cout << foreach_declare << endl;
	            out_stream << foreach_declare << endl;
			}
#line 1900 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 1578 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_" + *((yyvsp[-1].op_val));
				string temp_statement = ".< " + temp;
				if(unDeclaredVariable(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();						
				}
				read_stack.push(temp_statement);
				while(read_stack.size() != 0)
				{
					statement_vector.push_back(read_stack.top());
					cout << read_stack.top() << endl;
					out_stream << read_stack.top() << endl;
					read_stack.pop();
				}
			}
#line 1923 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1597 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string temp_statement = ".< " + temp;
				string temp_array_statement = "[]= _" + *((yyvsp[-4].op_val)) + ", " + operands.at(operands.size() - 1) + ", " + temp; 
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back("INTEGER");
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				read_stack.push(temp_statement);
				read_stack.push(temp_array_statement);
				operands.pop_back();
				while(read_stack.size() != 0)
				{
					statement_vector.push_back(read_stack.top());
					cout << read_stack.top() << endl;
					out_stream << read_stack.top() << endl;
					read_stack.pop();
				}
			}
#line 1947 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 1618 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_" + *((yyvsp[-1].op_val));
				string read_statement = ".< " + temp;
				if(unDeclaredVariable(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();						
				}
				read_stack.push(read_statement);
			}
#line 1963 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1630 "mini_l.y" /* yacc.c:1646  */
    {
				string generated_temp = genTmpVar();
				identifier_vector.push_back(generated_temp);
				identifier_type_vector.push_back("INTEGER");
				cout << ". " << generated_temp << endl;
				out_stream << ". " << generated_temp << endl;
				string temp_statement = ".< " + generated_temp;
				string temp_array_statement = "[]= " + *((yyvsp[-4].op_val)) + ", " + operands.at(operands.size() - 1) + ", " + generated_temp;
				read_stack.push(temp_statement);
				read_stack.push(temp_array_statement);
				operands.pop_back();
			}
#line 1980 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 1649 "mini_l.y" /* yacc.c:1646  */
    {
				while(operands.size() != 0) 
				{
					string start = operands.at(0);
					string write_statement = ".> " + start;
					statement_vector.push_back(write_statement);
					cout << write_statement << endl;
					out_stream << write_statement << endl;
					operands.erase(operands.begin());
				}
				operands.clear();
			}
#line 1997 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 1663 "mini_l.y" /* yacc.c:1646  */
    {
				if(usedContinueOutsideOfLoop(loop_label_vector))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();					
				}
				if(loop_label_vector.size() != 0) 
				{
					if(loop_label_vector.back().at(0) == "d")
					{
						string continue_statement = ":= " + loop_label_vector.back().at(0);
						statement_vector.push_back(continue_statement);
						cout << continue_statement << endl;
						out_stream << continue_statement << endl;
					}
					else
					{
						string not_continue_statement = ":= " + loop_label_vector.back().at(1);
						statement_vector.push_back(not_continue_statement);
						cout << not_continue_statement << endl;
						out_stream << not_continue_statement << endl;
					}
				}
			}
#line 2027 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 1690 "mini_l.y" /* yacc.c:1646  */
    {
				string return_statement = "ret " + operands.at(operands.size() - 1);
				statement_vector.push_back(return_statement);
				cout << return_statement << endl;
				out_stream << return_statement << endl;
				operands.pop_back();
			}
#line 2039 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1700 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				string push_item = "|| " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2066 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 1724 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genTmpVar();
					string type = "INTEGER";
					identifier_vector.push_back(temp);
					identifier_type_vector.push_back(type);
					
					cout << ". " << temp << endl;
					out_stream << ". " << temp << endl;
					
					string operand1 = operands.at(operands.size()-1);
					string operand2 = operands.at(operands.size()-2);
					
					
					string push_item = "&& " + temp + ", " + operand2 + ", " + operand1;
					
					statement_vector.push_back(push_item);
					cout << push_item << endl;
					out_stream << push_item << endl;
					
					operands.pop_back();
					operands.pop_back();
					
					operands.push_back(temp);	
				}
#line 2095 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 1805 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				temp = temp;
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back("INTEGER");
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				string operand1 = operands.back();
				operands.pop_back();
				string not_statement = "! " + temp + ", " + operand1;
				statement_vector.push_back(not_statement);
				cout << not_statement << endl;
				out_stream << not_statement << endl;
				
				operands.push_back(temp);
			}
#line 2116 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1824 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genTmpVar();
					string type = "INTEGER";
					identifier_vector.push_back(temp);
					identifier_type_vector.push_back(type);
					cout << ". " << temp << endl;
					out_stream << ". " << temp << endl;
					string push_item = "= " + temp + ", 1";
					
					statement_vector.push_back(push_item);
					cout << push_item << endl;
					out_stream << push_item << endl;
					operands.push_back(temp);
				}
#line 2135 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 1839 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genTmpVar();
					string type = "INTEGER";
					identifier_vector.push_back(temp);
					identifier_type_vector.push_back(type);
					cout << ". " << temp << endl;
					out_stream << ". " << temp << endl;
					
					string push_item = "= " + temp + ", 0";
					
					statement_vector.push_back(push_item);
					cout << push_item << endl;
					out_stream << push_item << endl;
					
					operands.push_back(temp);
				}
#line 2156 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 1858 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "== " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2185 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 1883 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "!= " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2213 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1907 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "< " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2241 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1931 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "> "  + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2269 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 1955 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "<= " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2297 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1979 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = ">= " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);			
		}
#line 2325 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 2006 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "+ " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2353 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 2030 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "- " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2381 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 2058 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "* " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2409 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 2082 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				string push_item = "/ " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2436 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 2105 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				
				string operand1 = operands.at(operands.size()-1);
				string operand2 = operands.at(operands.size()-2);
				
				
				string push_item = "% " + temp + ", " + operand2 + ", " + operand1;
				
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
				
				operands.pop_back();
				operands.pop_back();
				
				operands.push_back(temp);
			}
#line 2464 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 2131 "mini_l.y" /* yacc.c:1646  */
    {
				// ?????????????? think its done
			}
#line 2472 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 2135 "mini_l.y" /* yacc.c:1646  */
    {
				// empty
			}
#line 2480 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 2139 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				string operand1 = operands.at(operands.size()-1);
				
				string push_item = "- " + temp + ", 0, " + operand1; 
				cout << push_item << endl;
				out_stream << push_item << endl;
				statement_vector.push_back(push_item);
				operands.pop_back();
				operands.push_back(temp);
			}
#line 2502 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 2158 "mini_l.y" /* yacc.c:1646  */
    {
					string temp = genTmpVar(); // makes temp variable
					identifier_vector.push_back(temp); // this line and line below adds to table to output later
					identifier_type_vector.push_back("INTEGER");
					cout << ". " << temp << endl;
					out_stream << ". " << temp << endl;
					
					while(!param_stack.empty()) 
					{
						string temp = "param " + param_stack.top();
						statement_vector.push_back(temp);
						cout << temp << endl;
						param_stack.pop();
					}
					if(functionNotDeclared(*((yyvsp[-3].op_val)))) {
						error = true;
		            	out_stream.open("test1.mil", ofstream::trunc);
		            	out_stream.close();						
					}
					string identifier_statement = "call " + *((yyvsp[-3].op_val)) + ", " + temp;
					statement_vector.push_back(identifier_statement); // adds for statement
					cout << identifier_statement << endl;
					out_stream << identifier_statement << endl;
					operands.push_back(temp); // pushes the temp variable number into operands for going into param stack
				}
#line 2532 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 2185 "mini_l.y" /* yacc.c:1646  */
    {
				param_stack.push(operands.at(operands.size() - 1));
				operands.pop_back();
			}
#line 2541 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 2190 "mini_l.y" /* yacc.c:1646  */
    {
				param_stack.push(operands.at(operands.size() - 1));
				operands.pop_back();
			}
#line 2550 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 2195 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				string operand1 = operands.at(operands.size()-1);
				operands.pop_back();
				
				if(operand1.at(0) == '['){	//we know its an array
					string push_item = "=[] " + temp + ", " + operand1.substr(2);
					// CHECK THIS 
					statement_vector.push_back(push_item);
					cout << push_item << endl;
					out_stream << push_item << endl;
				}
				else {	// has to be an integer
					string push_item = "= " + temp + ", " + operand1;
					statement_vector.push_back(push_item);
					cout << push_item << endl;
					out_stream << push_item << endl;
				}
				operands.push_back(temp);
			}
#line 2581 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 2222 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = genTmpVar();
				string type = "INTEGER";
				identifier_vector.push_back(temp);
				identifier_type_vector.push_back(type);
				cout << ". " << temp << endl;
				out_stream << ". " << temp << endl;
				operands.push_back(temp);
				
				stringstream num;
				num << (yyvsp[0].val);
				string push_item = "= " + temp + ", " + num.str();
				statement_vector.push_back(push_item);
				cout << push_item << endl;
				out_stream << push_item << endl;
			}
#line 2602 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 2239 "mini_l.y" /* yacc.c:1646  */
    {
				while(param_stack.size() != 0)
                {
                	string temp = param_stack.top();
                	param_stack.pop();
                	string push_item = "param " + temp;
                    statement_vector.push_back(push_item);
                    cout << push_item << endl;
                    out_stream << push_item << endl;
                }
			}
#line 2618 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 2252 "mini_l.y" /* yacc.c:1646  */
    {
				string temp = "_" + *((yyvsp[0].op_val));
				if(unDeclaredVariable(temp))
				{
					error = true;
	            	out_stream.open("test1.mil", ofstream::trunc);
	            	out_stream.close();						
				}
				operands.push_back(temp);
			}
#line 2633 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 2263 "mini_l.y" /* yacc.c:1646  */
    {
				string operandLatest = operands.at(operands.size() - 1);
				string temp = "_" + *((yyvsp[-3].op_val));
				operands.pop_back();
				string operandStatement = "[]" + temp + "," + operandLatest;
				operands.push_back(operandStatement);
			}
#line 2645 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2649 "mini_l.tab.c" /* yacc.c:1646  */
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
#line 2271 "mini_l.y" /* yacc.c:1906  */

int yyerror(string s)
{
  extern int row, column;
  extern char *yytext;		
  
  cerr << "Error at line "<<row<<", column "<<column<<"  Unexpected Symbol: \""<<yytext<<"\""<<endl;
  exit(1);
}
int yyerror(char *s)
{
  return yyerror(string(s));
}
// define functions here
string genTmpVar(){
	ss.str("");
	ss.clear();
	ss << tmpcount;
	string temp = "_tmp_"+ ss.str();
	++tmpcount;
	return temp;
}
string genLblVar(){
	
	ss.str("");
	ss.clear();
	ss << lblcount;
	string temp = "_lbl_"+ ss.str();
	++lblcount;
	return temp;
}
bool unDeclaredVariable(string var)
{
	extern int row;
	bool undeclared = true;
	for(unsigned int i = 0; i < identifier_vector.size(); ++i)
	{
		if(identifier_vector.at(i) == var)
		{
			undeclared = false;
		}
	}
	if(undeclared)
	{
		cerr << "Semantic error: undeclared variable \"" << var << "\" was used on line " << row << endl;
		return true;
	}
	return false;
}
bool wasDeclared(string var)
{
	extern int row;
	for(unsigned int i = 0; i < identifier_vector.size(); ++i) {
		if(identifier_vector.at(i) == var) {
			cerr << "Semantic error: symbol \"" << var << "\" has already been declared on line" << row  << endl;
			return true;
		}
	} 
	return false;
}
bool mainExists(vector<string> v){
	for(unsigned int i = 0; i < function_vector.size(); ++i){
		if(function_vector.at(i) == "main"){
			return true;
		}
	}
	cerr << "Semantic error: did not define main function" << endl;
	return false;
}
bool arrSizeZero(int i){
	if(i <= 0){
		cerr << "Semantic error: declared array of size <= 0" << endl;
		return true;
	}
	return false;
}
bool functionNotDeclared(string var)
{
	extern int row;
	for(unsigned int i  = 0; i < function_vector.size(); ++i)
	{
		if(function_vector.at(i) == var)
		{
			return false;
		}
	}
	cerr << "Semantic error: function \"" << var << "\" was not declared on line " << row << endl;
	return true;
}
bool usingReservedKeyword(string s, vector<string> v){
	extern int row;
	for(unsigned int i = 0; i < v.size(); ++i){
		if(s == v.at(i)){
			cerr << "Semantic error: using reserved keyword for variable on line" << row << endl;
			return true;
		}
	}
	return false;
}
bool isArrayUsedAsNotArray(string var)
{
	extern int row;
	for(unsigned int i = 0; i < identifier_type_vector.size(); ++i)
	{
		if(identifier_vector.at(i) == var)
		{
			if(identifier_type_vector.at(i) != "INTEGER")
			{
				cerr << "Semantic error: using an array without specifiying index on line " << row << endl;
				return true;
			}
		}
	}
	return false;
}
bool isNotArrayUsedAsArray(string var)
{
	extern int row;
	for(unsigned int i = 0; i < identifier_type_vector.size(); ++i)
	{
		if(identifier_vector.at(i) == var)
		{
			if(identifier_type_vector.at(i) == "INTEGER")
			{
				cerr << "Semantic error: specifying an index on an integer on line " << row << endl;
				return true;
			}
		}
	}
	return false;
}
bool usedContinueOutsideOfLoop(vector<vector <string> > label_loop)
{
	extern int row;
	if(label_loop.size() == 0)
	{
		cerr << "Semantic error: used continue outside of loop on line " << row << endl;
		return true;
	}
	return false;
}
