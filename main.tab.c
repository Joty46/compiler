
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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
#line 1 "main.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>

	extern FILE *yyin;
	extern FILE *yyout;
	int yyparse();
	int yylex();
	int yyerror();

    int vptr = 0;
    int val[1000];
    char variables[1000][1000];

    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable is not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }
    int setval(char str[], int newval){
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int swdone = 0;
	int swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];



/* Line 189 of yacc.c  */
#line 138 "main.tab.c"

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
     Id = 258,
     Num = 259,
     Str = 260,
     Main = 261,
     Eol = 262,
     Start = 263,
     End = 264,
     Nl = 265,
     Int = 266,
     Float = 267,
     Char = 268,
     Cin = 269,
     Cout = 270,
     Not = 271,
     And = 272,
     Xor = 273,
     Or = 274,
     Fact = 275,
     Sin = 276,
     Cos = 277,
     Tan = 278,
     Sqrt = 279,
     Log = 280,
     Ln = 281,
     Pow = 282,
     If = 283,
     Elif = 284,
     Else = 285,
     Switch = 286,
     Default = 287,
     Case = 288,
     Eq = 289,
     Fors = 290,
     Fore = 291,
     Movby = 292,
     Do = 293,
     Until = 294,
     Pplus = 295,
     Mminus = 296,
     Lt = 297,
     Lte = 298,
     Gt = 299,
     Gte = 300,
     Ckeq = 301,
     Noteq = 302,
     Plus = 303,
     Minus = 304,
     Mul = 305,
     Div = 306,
     Mod = 307,
     Max = 308,
     Min = 309,
     Comment = 310,
     Greeq = 311,
     Gre = 312,
     Lesseq = 313,
     Less = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 66 "main.y"

	int i;
	double d;
	char s[1000];



/* Line 214 of yacc.c  */
#line 241 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 253 "main.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1121

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  168

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,     2,    66,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,    64,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    17,    21,    25,    28,
      31,    35,    38,    40,    42,    44,    48,    50,    52,    56,
      60,    65,    70,    75,    80,    85,    87,    89,    92,    96,
     100,   104,   108,   112,   116,   120,   124,   128,   132,   136,
     140,   144,   148,   152,   155,   159,   164,   169,   174,   179,
     184,   189,   196,   203,   206,   209,   212,   221,   223,   224,
     233,   239,   255
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,     6,     8,    69,     9,    -1,    -1,    69,
      70,     7,    -1,    69,    74,     7,    -1,    69,    76,     7,
      -1,    69,    75,     7,    -1,    69,    78,    -1,    69,    81,
      -1,    69,    77,     7,    -1,    71,    72,    -1,    11,    -1,
      12,    -1,    13,    -1,    73,    60,    72,    -1,    73,    -1,
       3,    -1,     3,    34,    77,    -1,     3,    34,    77,    -1,
      15,    61,     3,    62,    -1,    15,    61,    77,    62,    -1,
      15,    61,     5,    62,    -1,    15,    61,    10,    62,    -1,
      14,    61,     3,    62,    -1,     4,    -1,     3,    -1,    49,
      77,    -1,    77,    48,    77,    -1,    77,    49,    77,    -1,
      77,    50,    77,    -1,    77,    51,    77,    -1,    77,    52,
      77,    -1,    77,    27,    77,    -1,    77,    42,    77,    -1,
      77,    44,    77,    -1,    77,    43,    77,    -1,    77,    45,
      77,    -1,    77,    46,    77,    -1,    77,    47,    77,    -1,
      77,    17,    77,    -1,    77,    19,    77,    -1,    77,    18,
      77,    -1,    16,    77,    -1,    61,    77,    62,    -1,    21,
      61,    77,    62,    -1,    22,    61,    77,    62,    -1,    23,
      61,    77,    62,    -1,    25,    61,    77,    62,    -1,    26,
      61,    77,    62,    -1,    24,    61,    77,    62,    -1,    53,
      61,    77,    60,    77,    62,    -1,    54,    61,    77,    60,
      77,    62,    -1,    77,    40,    -1,    77,    41,    -1,    77,
      20,    -1,    28,    61,    79,    62,    63,    69,    64,    80,
      -1,    77,    -1,    -1,    80,    29,    61,    77,    62,    63,
      69,    64,    -1,    80,    30,    63,    69,    64,    -1,    35,
      65,    77,    66,    36,    65,    77,    66,    37,    65,    77,
      66,    63,    69,    64,    -1,    39,    65,    77,    66,    38,
      63,    69,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   105,   106,   107,   108,   109,   110,   111,
     114,   117,   119,   119,   119,   121,   122,   124,   133,   145,
     157,   168,   172,   178,   184,   192,   193,   203,   205,   207,
     209,   211,   222,   233,   235,   237,   239,   241,   243,   245,
     247,   249,   251,   253,   255,   257,   259,   261,   263,   265,
     267,   269,   277,   286,   290,   294,   302,   309,   323,   324,
     335,   348,   361
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Id", "Num", "Str", "Main", "Eol",
  "Start", "End", "Nl", "Int", "Float", "Char", "Cin", "Cout", "Not",
  "And", "Xor", "Or", "Fact", "Sin", "Cos", "Tan", "Sqrt", "Log", "Ln",
  "Pow", "If", "Elif", "Else", "Switch", "Default", "Case", "Eq", "Fors",
  "Fore", "Movby", "Do", "Until", "Pplus", "Mminus", "Lt", "Lte", "Gt",
  "Gte", "Ckeq", "Noteq", "Plus", "Minus", "Mul", "Div", "Mod", "Max",
  "Min", "Comment", "Greeq", "Gre", "Lesseq", "Less", "','", "'('", "')'",
  "'{'", "'}'", "'<'", "'>'", "$accept", "code", "statement",
  "declaration", "type", "var", "vars", "assignment", "output", "input",
  "expr", "ifstatement", "ifexpr", "elseif", "loop", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      44,    40,    41,   123,   125,    60,    62
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    75,    75,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    78,    79,    80,    80,
      80,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     3,     3,     3,     2,     2,
       3,     2,     1,     1,     1,     3,     1,     1,     3,     3,
       4,     4,     4,     4,     4,     1,     1,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     4,     4,     4,     4,     4,
       4,     6,     6,     2,     2,     2,     8,     1,     0,     8,
       5,    15,     8
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    26,    25,     2,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     9,     0,     0,     0,    26,
      43,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     4,    17,    11,    16,     5,     7,
       6,    10,     0,     0,     0,    55,     0,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,    44,     0,
       0,    40,    42,    41,    33,    34,    36,    35,    37,    38,
      39,    28,    29,    30,    31,    32,    24,    20,    22,    23,
      21,    45,    46,    47,    50,    48,    49,     0,     0,     0,
       0,     0,    18,    15,     3,     0,     0,     0,     0,     0,
       0,     3,    51,    52,    58,     0,     0,    56,     0,    62,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
      60,     0,     3,     3,     0,     0,    59,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    28,    29,    56,    57,    30,    31,    32,
      33,    34,    93,   147,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
      -2,    -5,     5,  -119,  -119,   307,   -27,  -119,  -119,  -119,
    -119,  -119,   -55,   -53,    50,   -52,   -50,   -49,   -47,   -46,
     -43,   -42,   -45,   -44,    50,   -36,   -35,    50,    36,    43,
      40,    44,    60,   529,  -119,  -119,    50,    65,   348,  -119,
      -3,    50,    50,    50,    50,    50,    50,    50,    50,    50,
     363,    50,    50,   565,  -119,    49,  -119,    24,  -119,  -119,
    -119,  -119,    50,    50,    50,  -119,    50,  -119,  -119,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
    1033,    31,    33,    34,    35,   601,   637,   673,   709,   745,
     781,   817,  1033,    38,   371,   407,   961,   997,  -119,    50,
      43,    -3,    -3,    -3,   363,  1033,  1033,  1033,  1033,  1069,
    1069,   363,   363,   363,   363,   363,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,    23,    62,    64,
      50,    50,  1033,  -119,  -119,    41,    45,   853,   889,    66,
      50,  -119,  -119,  -119,  -119,   443,   121,   -28,    70,  -119,
      48,    47,    53,    50,  -119,    50,   925,   165,   479,    51,
    -119,    58,  -119,  -119,   209,   253,  -119,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -119,  -119,  -118,  -119,  -119,    12,  -119,  -119,  -119,  -119,
     -14,  -119,  -119,  -119,  -119
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      40,   150,   151,     3,     1,     4,    37,    36,    38,    41,
      50,    42,    43,    53,    44,    45,   139,    65,    46,    47,
      48,    49,    80,   146,    85,    51,    52,    86,    87,    88,
      89,    90,    91,    92,    94,    95,   157,    96,    97,    69,
      70,    71,    72,    54,   164,   165,    55,    58,   101,   102,
     103,    59,   104,    39,     7,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    14,    60,    81,     6,
       7,    15,    16,    17,    18,    19,    20,     9,    10,    11,
      12,    13,    14,    99,   100,   132,   134,    15,    16,    17,
      18,    19,    20,   116,    21,   117,   118,   119,   135,    24,
     127,    22,   136,    25,    26,    23,   140,   152,   141,   153,
     154,    27,   133,     0,   162,    24,   137,   138,   155,    25,
      26,   163,     0,     0,     6,     7,   145,    27,     0,     0,
     144,     0,     9,    10,    11,    12,    13,    14,     0,   156,
       0,   158,    15,    16,    17,    18,    19,    20,     0,    21,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     6,     7,
      24,     0,     0,     0,    25,    26,     9,    10,    11,    12,
      13,    14,    27,     0,     0,   149,    15,    16,    17,    18,
      19,    20,     0,    21,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     6,     7,    24,     0,     0,     0,    25,    26,
       9,    10,    11,    12,    13,    14,    27,     0,     0,   160,
      15,    16,    17,    18,    19,    20,     0,    21,     0,     0,
       0,     0,     0,     0,    22,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     6,     7,    24,     0,
       0,     0,    25,    26,     9,    10,    11,    12,    13,    14,
      27,     0,     0,   166,    15,    16,    17,    18,    19,    20,
       0,    21,     0,     0,     0,     0,     0,     0,    22,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,    25,    26,     0,     0,
       6,     7,     0,     0,    27,     0,     8,   167,     9,    10,
      11,    12,    13,    14,     0,     0,     0,     0,    15,    16,
      17,    18,    19,    20,     0,    21,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,    23,     0,     0,     0,
       0,    82,     7,    83,     0,     0,    24,     0,    84,     0,
      25,    26,     0,     0,    14,     0,     0,     0,    27,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
      62,    63,    64,    65,     0,     0,     0,     0,    62,    63,
      64,    65,     0,     0,     0,     0,     0,    24,    66,     0,
       0,    25,    26,    67,    68,    69,    70,    71,    72,    27,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,    66,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
      66,     0,     0,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,    66,     0,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,    61,     0,     0,     0,
       0,     0,     0,     0,     0,   161,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    62,    63,
      64,    65,     0,     0,     0,     0,     0,    98,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    62,    63,    64,    65,     0,     0,
       0,     0,     0,   120,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      62,    63,    64,    65,     0,     0,     0,     0,     0,   121,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    62,    63,    64,    65,
       0,     0,     0,     0,     0,   122,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    62,    63,    64,    65,     0,     0,     0,     0,
       0,   123,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    62,    63,
      64,    65,     0,     0,     0,     0,     0,   124,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    62,    63,    64,    65,     0,     0,
       0,     0,     0,   125,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      62,    63,    64,    65,     0,     0,     0,     0,     0,   126,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    62,    63,    64,    65,
       0,     0,     0,     0,     0,   142,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    62,    63,    64,    65,     0,     0,     0,     0,
       0,   143,    66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    62,    63,
      64,    65,     0,     0,     0,     0,     0,   159,    66,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    62,    63,    64,    65,     0,     0,
       0,   130,     0,     0,    66,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      62,    63,    64,    65,     0,     0,     0,   131,     0,     0,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,    66,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,     0,     0,    75,    76,    77,
      78,    79
};

static const yytype_int16 yycheck[] =
{
      14,    29,    30,     8,     6,     0,    61,    34,    61,    61,
      24,    61,    61,    27,    61,    61,   134,    20,    61,    61,
      65,    65,    36,   141,    38,    61,    61,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   154,    51,    52,    42,
      43,    44,    45,     7,   162,   163,     3,     7,    62,    63,
      64,     7,    66,     3,     4,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    16,     7,     3,     3,
       4,    21,    22,    23,    24,    25,    26,    11,    12,    13,
      14,    15,    16,    34,    60,    99,    63,    21,    22,    23,
      24,    25,    26,    62,    28,    62,    62,    62,    36,    49,
      62,    35,    38,    53,    54,    39,    65,    37,    63,    61,
      63,    61,   100,    -1,    63,    49,   130,   131,    65,    53,
      54,    63,    -1,    -1,     3,     4,   140,    61,    -1,    -1,
      64,    -1,    11,    12,    13,    14,    15,    16,    -1,   153,
      -1,   155,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      49,    -1,    -1,    -1,    53,    54,    11,    12,    13,    14,
      15,    16,    61,    -1,    -1,    64,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    49,    -1,    -1,    -1,    53,    54,
      11,    12,    13,    14,    15,    16,    61,    -1,    -1,    64,
      21,    22,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    49,    -1,
      -1,    -1,    53,    54,    11,    12,    13,    14,    15,    16,
      61,    -1,    -1,    64,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
       3,     4,    -1,    -1,    61,    -1,     9,    64,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    49,    -1,    10,    -1,
      53,    54,    -1,    -1,    16,    -1,    -1,    -1,    61,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    49,    27,    -1,
      -1,    53,    54,    40,    41,    42,    43,    44,    45,    61,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    62,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    62,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    62,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    62,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    62,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    62,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    62,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    62,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    62,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    62,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    62,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    17,    18,    19,    20,    -1,    -1,
      -1,    60,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      17,    18,    19,    20,    -1,    -1,    -1,    60,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    68,     8,     0,    69,     3,     4,     9,    11,
      12,    13,    14,    15,    16,    21,    22,    23,    24,    25,
      26,    28,    35,    39,    49,    53,    54,    61,    70,    71,
      74,    75,    76,    77,    78,    81,    34,    61,    61,     3,
      77,    61,    61,    61,    61,    61,    61,    61,    65,    65,
      77,    61,    61,    77,     7,     3,    72,    73,     7,     7,
       7,     7,    17,    18,    19,    20,    27,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      77,     3,     3,     5,    10,    77,    77,    77,    77,    77,
      77,    77,    77,    79,    77,    77,    77,    77,    62,    34,
      60,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    66,    66,
      60,    60,    77,    72,    63,    36,    38,    77,    77,    69,
      65,    63,    62,    62,    64,    77,    69,    80,    66,    64,
      29,    30,    37,    61,    63,    65,    77,    69,    77,    62,
      64,    66,    63,    63,    69,    69,    64,    64
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

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
# if YYLTYPE_IS_TRIVIAL
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

/* Line 1455 of yacc.c  */
#line 103 "main.y"
    { printf("Compilation Successful!!!\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 106 "main.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 107 "main.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 108 "main.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 109 "main.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 110 "main.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 111 "main.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 114 "main.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 117 "main.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "main.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 121 "main.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 122 "main.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 125 "main.y"
    {
						int a = addval((yyvsp[(1) - (1)].s),0);
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}

					;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 134 "main.y"
    {
						int a = addval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
						if(!a) {
							printf(" %s is already exist\n",(yyvsp[(1) - (3)].s));
							exit(-1);
							}
					;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 146 "main.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].s));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
						}
				    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 158 "main.y"
    {
					if(!ifExists((yyvsp[(3) - (4)].s))){
							printf("%s is not declared\n",(yyvsp[(3) - (4)].s));
							exit(-1);
						}
						else{
							int a = getval((yyvsp[(3) - (4)].s));
							printf("%d",a);
						}
				;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 169 "main.y"
    {
					printf("%lf",(yyvsp[(3) - (4)].d));
				;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 173 "main.y"
    {
					int len = strlen((yyvsp[(3) - (4)].s));
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",(yyvsp[(3) - (4)].s)[i]);
				;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 179 "main.y"
    {
					printf("\n");
				;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 185 "main.y"
    {
					int a;
					scanf("%d",&a);
					setval((yyvsp[(3) - (4)].s),a);
					
				;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 192 "main.y"
    {(yyval.d) = (yyvsp[(1) - (1)].i);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 194 "main.y"
    {
						if(!ifExists((yyvsp[(1) - (1)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}
						else{
							(yyval.d) = getval((yyvsp[(1) - (1)].s));
						}
				 	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 204 "main.y"
    {(yyval.d) = - (yyvsp[(2) - (2)].d);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 206 "main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 208 "main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 210 "main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 212 "main.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 223 "main.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 234 "main.y"
    {(yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 236 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 238 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 240 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 242 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 244 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 246 "main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 248 "main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 250 "main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 252 "main.y"
    {(yyval.d) = ((int)(yyvsp[(1) - (3)].d) ^ (int)(yyvsp[(3) - (3)].d));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 254 "main.y"
    {(yyval.d) = !(yyvsp[(2) - (2)].d);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 256 "main.y"
    {(yyval.d) = (yyvsp[(2) - (3)].d);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 258 "main.y"
    {(yyval.d) = sin((yyvsp[(3) - (4)].d));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 260 "main.y"
    {(yyval.d) = cos((yyvsp[(3) - (4)].d));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 262 "main.y"
    {(yyval.d) = tan((yyvsp[(3) - (4)].d));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 264 "main.y"
    {(yyval.d) = log10((yyvsp[(3) - (4)].d));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 266 "main.y"
    {(yyval.d) = log((yyvsp[(3) - (4)].d));;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 268 "main.y"
    {(yyval.d) = sqrt((yyvsp[(3) - (4)].d));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 270 "main.y"
    {if((yyvsp[(3) - (6)].d) <= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 278 "main.y"
    {
							if((yyvsp[(3) - (6)].d) >= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 287 "main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) + 1;
						;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 291 "main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) - 1;
						;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 295 "main.y"
    {
							long long x = 1;
							for(long long i=1;i<=(yyvsp[(1) - (2)].d);i++) x*=i;
							(yyval.d) = x;
						;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 303 "main.y"
    {

							ifdone[ifptr] = 0;
							ifptr--;
						;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 310 "main.y"
    {
							ifptr++;
							ifdone[ifptr] = 0;
							if((yyvsp[(1) - (1)].d)){
								printf("\nIf block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nIf block:False\n");
							}
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 325 "main.y"
    {
							if((yyvsp[(4) - (8)].d) && ifdone[ifptr] == 0){
								printf("\nElse if block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse if block:False\n");
							}
						;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 336 "main.y"
    {
							if(ifdone[ifptr] == 0){
								printf("\nElse block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse block:False\n");
							}
						;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 349 "main.y"
    {
						int srt = (yyvsp[(3) - (15)].d);
						int end = (yyvsp[(7) - (15)].d);
						int diff = (yyvsp[(11) - (15)].d);
						int cnt = 0;
						int i = 0;
						for(i = srt; i <= end; i += diff){
							cnt++;
							printf("Step no : %d\n",i);
						}	
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 362 "main.y"
    {
						int i=0;
						int cnt = 0;
						for(i=(yyvsp[(3) - (8)].d);i>0;i--)
						{
							cnt++;
							printf("Step no :%d\n",i);
						}
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;



/* Line 1455 of yacc.c  */
#line 2316 "main.tab.c"
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



/* Line 1675 of yacc.c  */
#line 375 "main.y"

int main(int argc, char **argv)
{
//yydebug= 1;
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	//yyin = fopen (argv[1],"r");
    printf("\n\n     -------Starting Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 
