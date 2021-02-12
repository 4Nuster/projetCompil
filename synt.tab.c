
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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"

	#include<stdlib.h>
	#include<stdio.h>
	#include<string.h>

	typedef struct{
		char NomEntite[20];
		char CodeEntite[20];
		char TypeEntite[20];
		int taille;
		int ConstEntite;
	} TypeTS;

	typedef struct{
		char NomFonction[20];
		char ReturnFonction[20];
		char parametres[20][20];
		int nbParams;
	} TypeTF;

	extern int yylineno;
	extern TypeTS ts[100];
	extern TypeTF tf[100];
	extern int CpTabTemp;
	extern int nbcol;
	
	char ayylmao[3][20];
	int arithmeToggled,inOutToggled;

	char temparams[50][20];
	int temparamsSize;
	int indexF;

	char expectedReturn[20];
	char expectedAffect[20];
	char ReturnFonct[20];
	char actual[20];
	char actual2[20];


/* Line 189 of yacc.c  */
#line 114 "synt.tab.c"

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
     idf = 258,
     cst = 259,
     aff = 260,
     pvg = 261,
     algo = 262,
     var = 263,
     mc_const = 264,
     vg = 265,
     deb = 266,
     fin = 267,
     dp = 268,
     entier = 269,
     chaine = 270,
     reel = 271,
     akbar = 272,
     asghar = 273,
     asghar2 = 274,
     include = 275,
     InOut = 276,
     Arithme = 277,
     op = 278,
     cp = 279,
     ocro = 280,
     ccro = 281,
     fonction = 282,
     tantque = 283,
     faire = 284,
     fait = 285,
     egale = 286,
     ecrire = 287,
     lire = 288,
     retu = 289,
     excla = 290,
     oplus = 291,
     ominus = 292,
     omultiply = 293,
     odivide = 294,
     entiertt = 295,
     reeltt = 296,
     chainett = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 48 "synt.y"

	int   entierttt;
	char* chainettt;
	float reelttt;



/* Line 214 of yacc.c  */
#line 200 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "synt.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   307

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,    15,    24,    33,    38,    43,
      44,    45,    46,    61,    62,    63,    78,    79,    80,    95,
      96,    97,   104,   105,   112,   113,   120,   121,   122,   129,
     130,   137,   138,   145,   149,   153,   157,   160,   161,   166,
     171,   176,   182,   188,   194,   198,   200,   207,   212,   216,
     217,   223,   224,   233,   237,   243,   245,   250,   252,   254,
     256,   258,   260,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   284,   294,   295,   300,   303,   306,   309,
     312,   314,   316,   318,   323,   325,   327,   329,   331,   333,
     335,   336,   341,   343,   349,   355,   356,   361,   363,   364,
     372,   377,   378,   383,   385,   386,   391,   393,   394,   399,
     401,   402,   407,   409,   410,   415,   417,   418,   423,   425,
     426,   427,   432,   434,   435,   443,   448,   449,   454,   456,
     457,   462,   464,   465,   470,   472,   473,   478,   480,   481,
     486,   488,   489,   494,   496,   497,   503,   507,   508,   512,
     513,   517,   518,   522,   523,   527,   528,   533,   534,   538
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,    -1,    -1,    45,    47,     7,     3,     8,
      48,    63,    46,    66,    -1,    20,    17,    21,    19,    20,
      17,    22,    19,    -1,    20,    17,    22,    19,    20,    17,
      21,    19,    -1,    20,    17,    21,    19,    -1,    20,    17,
      22,    19,    -1,    -1,    -1,    -1,    27,     3,    23,    55,
      24,    13,    14,    49,     8,    63,    66,     6,    50,    48,
      -1,    -1,    -1,    27,     3,    23,    55,    24,    13,    16,
      51,     8,    63,    66,     6,    52,    48,    -1,    -1,    -1,
      27,     3,    23,    55,    24,    13,    15,    53,     8,    63,
      66,     6,    54,    48,    -1,    -1,    -1,     3,    13,    14,
      10,    56,    59,    -1,    -1,     3,    13,    16,    10,    57,
      59,    -1,    -1,     3,    13,    15,    10,    58,    59,    -1,
      -1,    -1,     3,    13,    14,    10,    60,    59,    -1,    -1,
       3,    13,    16,    10,    61,    59,    -1,    -1,     3,    13,
      15,    10,    62,    59,    -1,     3,    13,    14,    -1,     3,
      13,    16,    -1,     3,    13,    15,    -1,    64,    63,    -1,
      -1,    65,    13,    14,     6,    -1,    65,    13,    16,     6,
      -1,    65,    13,    15,     6,    -1,     9,    65,    13,    14,
       6,    -1,     9,    65,    13,    16,     6,    -1,     9,    65,
      13,    15,     6,    -1,     3,    10,    65,    -1,     3,    -1,
       3,    25,     4,    26,    10,    65,    -1,     3,    25,     4,
      26,    -1,    11,   105,    12,    -1,    -1,     3,    68,     5,
      79,     6,    -1,    -1,     3,    25,     4,    26,    69,     5,
      79,     6,    -1,    71,    73,    72,    -1,    23,    71,    73,
      72,    24,    -1,     3,    -1,     3,    25,     4,    26,    -1,
      41,    -1,    40,    -1,     4,    -1,   102,    -1,     3,    -1,
       3,    25,     4,    26,    -1,    41,    -1,    40,    -1,     4,
      -1,    70,    -1,   102,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    -1,    28,    23,    76,    24,    29,    75,
     105,    30,     6,    -1,    -1,    79,    78,    77,    79,    -1,
      31,    31,    -1,    35,    31,    -1,    18,    31,    -1,    17,
      31,    -1,    17,    -1,    18,    -1,     3,    -1,     3,    25,
       4,    26,    -1,    70,    -1,     4,    -1,    40,    -1,    41,
      -1,    42,    -1,   102,    -1,    -1,    79,    81,    10,    80,
      -1,    79,    -1,    33,    23,    80,    24,     6,    -1,    32,
      23,    80,    24,     6,    -1,    -1,     3,    10,    85,    93,
      -1,     3,    -1,    -1,     3,    25,     4,    26,    10,    86,
      93,    -1,     3,    25,     4,    26,    -1,    -1,    70,    87,
      10,    93,    -1,    70,    -1,    -1,     4,    10,    88,    93,
      -1,     4,    -1,    -1,    40,    10,    89,    93,    -1,    40,
      -1,    -1,    41,    10,    90,    93,    -1,    41,    -1,    -1,
      42,    10,    91,    93,    -1,    42,    -1,    -1,   102,    10,
      92,    93,    -1,   102,    -1,    -1,    -1,     3,    10,    94,
      93,    -1,     3,    -1,    -1,     3,    25,     4,    26,    10,
      95,    93,    -1,     3,    25,     4,    26,    -1,    -1,    70,
      10,    96,    93,    -1,    70,    -1,    -1,     4,    10,    97,
      93,    -1,     4,    -1,    -1,    40,    10,    98,    93,    -1,
      40,    -1,    -1,    41,    10,    99,    93,    -1,    41,    -1,
      -1,    42,    10,   100,    93,    -1,    42,    -1,    -1,   102,
      10,   101,    93,    -1,   102,    -1,    -1,     3,   103,    23,
      84,    24,    -1,    34,    79,     6,    -1,    -1,    67,   106,
     105,    -1,    -1,    82,   107,   105,    -1,    -1,    83,   108,
     105,    -1,    -1,   104,   109,   105,    -1,    -1,   102,     6,
     110,   105,    -1,    -1,    74,   111,   105,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    56,    54,    63,    66,    69,    72,    75,
      80,    80,    80,    86,    86,    86,    92,    92,    92,    98,
     101,   101,   102,   102,   103,   103,   104,   107,   107,   108,
     108,   109,   109,   110,   111,   112,   115,   116,   119,   120,
     121,   122,   123,   124,   126,   127,   128,   129,   132,   134,
     134,   150,   150,   170,   171,   174,   189,   207,   217,   227,
     237,   248,   263,   281,   291,   301,   311,   316,   327,   328,
     329,   330,   332,   332,   334,   334,   340,   341,   342,   343,
     344,   345,   348,   356,   367,   372,   375,   378,   381,   384,
     388,   388,   391,   395,   401,   407,   407,   411,   415,   415,
     422,   429,   429,   436,   443,   443,   447,   451,   451,   455,
     459,   459,   463,   467,   467,   471,   475,   475,   479,   483,
     485,   485,   489,   493,   493,   500,   507,   507,   514,   521,
     521,   525,   529,   529,   533,   537,   537,   541,   545,   545,
     549,   553,   553,   557,   562,   562,   586,   594,   594,   597,
     597,   600,   600,   603,   603,   606,   606,   609,   609,   612
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "idf", "cst", "aff", "pvg", "algo",
  "var", "mc_const", "vg", "deb", "fin", "dp", "entier", "chaine", "reel",
  "akbar", "asghar", "asghar2", "include", "InOut", "Arithme", "op", "cp",
  "ocro", "ccro", "fonction", "tantque", "faire", "fait", "egale",
  "ecrire", "lire", "retu", "excla", "oplus", "ominus", "omultiply",
  "odivide", "entiertt", "reeltt", "chainett", "$accept", "S", "$@1",
  "$@2", "INCLUDE", "FONCTION", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "PARAMS", "$@9", "$@10", "$@11", "PARAMS2", "$@12", "$@13", "$@14",
  "LISTE_DEC", "DEC", "LISTE_IDFS", "CORPS", "AFFECTATION", "$@15", "$@16",
  "EXP", "NIQUEL", "NIQUEL2", "OPERAND", "BOUCLE", "$@17", "COND", "$@18",
  "OP_PARAM", "COND_PARAM", "LISTE_COND_PARAM", "$@19", "LIRE", "ECRIRE",
  "LISTE_IDFS_NMF", "$@20", "$@21", "$@22", "$@23", "$@24", "$@25", "$@26",
  "$@27", "LISTE_IDFS_NMF2", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "NMF", "$@36", "RETURN", "LISTE_INSTS", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", 0
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
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    45,    46,    44,    47,    47,    47,    47,    47,
      49,    50,    48,    51,    52,    48,    53,    54,    48,    48,
      56,    55,    57,    55,    58,    55,    55,    60,    59,    61,
      59,    62,    59,    59,    59,    59,    63,    63,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    66,    68,
      67,    69,    67,    70,    70,    71,    71,    71,    71,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    73,    73,
      73,    73,    75,    74,    77,    76,    78,    78,    78,    78,
      78,    78,    79,    79,    79,    79,    79,    79,    79,    79,
      81,    80,    80,    82,    83,    85,    84,    84,    86,    84,
      84,    87,    84,    84,    88,    84,    84,    89,    84,    84,
      90,    84,    84,    91,    84,    84,    92,    84,    84,    84,
      94,    93,    93,    95,    93,    93,    96,    93,    93,    97,
      93,    93,    98,    93,    93,    99,    93,    93,   100,    93,
      93,   101,    93,    93,   103,   102,   104,   106,   105,   107,
     105,   108,   105,   109,   105,   110,   105,   111,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     9,     8,     8,     4,     4,     0,
       0,     0,    14,     0,     0,    14,     0,     0,    14,     0,
       0,     6,     0,     6,     0,     6,     0,     0,     6,     0,
       6,     0,     6,     3,     3,     3,     2,     0,     4,     4,
       4,     5,     5,     5,     3,     1,     6,     4,     3,     0,
       5,     0,     8,     3,     5,     1,     4,     1,     1,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     9,     0,     4,     2,     2,     2,     2,
       1,     1,     1,     4,     1,     1,     1,     1,     1,     1,
       0,     4,     1,     5,     5,     0,     4,     1,     0,     7,
       4,     0,     4,     1,     0,     4,     1,     0,     4,     1,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       0,     4,     1,     0,     7,     4,     0,     4,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     0,     4,
       1,     0,     4,     1,     0,     5,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     0,     4,     0,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     9,     1,     0,     0,     0,     0,     0,     0,
       0,     7,     8,    19,     0,     0,     0,    37,     0,     0,
       0,    45,     0,     3,    37,     0,     0,     0,    26,     0,
       0,     0,     0,    36,     0,     5,     6,     0,     0,    44,
       0,     0,   159,     4,     0,     0,     0,     0,     0,    47,
       0,     0,     0,    49,     0,     0,     0,     0,   147,   157,
     149,   151,     0,   153,     0,    38,    40,    39,     0,     0,
       0,     0,     0,    41,    43,    42,     0,     0,     0,     0,
       0,     0,    82,    85,     0,    86,    87,    88,    84,     0,
       0,    89,   159,   159,   159,   159,   155,   159,    48,    20,
      24,    22,    10,    16,    13,    46,     0,     0,   119,     0,
       0,    90,     0,     0,     0,    55,    59,    58,    57,     0,
      60,    68,    69,    70,    71,     0,   146,   148,   158,   150,
     152,   159,   154,     0,     0,     0,     0,     0,     0,    51,
       0,    55,    59,    58,    57,   115,   101,     0,    60,     0,
      80,    81,     0,     0,    74,     0,     0,     0,     0,     0,
       0,    61,    65,    64,    63,    66,    53,    67,   156,     0,
      21,    25,    23,    37,    37,    37,     0,    50,    95,     0,
     104,   107,   110,   113,     0,   145,   116,    72,    79,    78,
      76,    77,     0,     0,    94,    93,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   159,    75,    91,    56,    54,     0,    33,
      35,    34,     0,     0,     0,     0,    55,    59,    58,    57,
     140,   128,    96,    60,    56,   105,   108,   111,   114,   102,
     117,     0,    62,    27,    31,    29,    11,    17,    14,    52,
     120,     0,   129,   132,   135,   138,   126,   141,    98,     0,
       0,     0,     0,    19,    19,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    28,    32,    30,    12,
      18,    15,   121,    56,   130,   133,   136,   139,   127,   142,
      99,   123,     0,   124
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    32,     5,    17,   136,   263,   138,   265,
     137,   264,    38,   133,   135,   134,   170,   260,   262,   261,
      23,    24,    25,    43,    58,    77,   176,   231,    89,   166,
     125,    59,   213,   109,   192,   154,   111,   112,   155,    60,
      61,   147,   205,   274,   184,   207,   208,   209,   210,   212,
     232,   266,   292,   272,   268,   269,   270,   271,   273,   233,
      78,    63,    64,    92,    94,    95,    97,   131,    93
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const yytype_int16 yypact[] =
{
    -134,    21,    29,  -134,    52,    22,   194,    72,    69,    97,
      88,   100,   137,   146,   166,   168,   193,    11,   195,   197,
     196,     3,   217,  -134,    11,   208,   203,   204,   221,   217,
     222,   212,   216,  -134,     2,  -134,  -134,   215,   205,  -134,
     206,     9,    65,  -134,   224,   225,   227,    76,   223,   228,
     229,   231,   233,   188,   211,   218,   219,    31,  -134,  -134,
    -134,  -134,   234,  -134,   232,  -134,  -134,  -134,   235,   236,
     237,   125,   217,  -134,  -134,  -134,   239,   243,   226,    31,
      31,    31,    94,   139,    41,   143,   152,  -134,  -134,   156,
     244,   161,    65,    65,    65,    65,  -134,    65,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,   230,    31,    37,   238,
      39,   240,   241,   242,   247,   189,  -134,  -134,  -134,   156,
    -134,  -134,  -134,  -134,  -134,    23,  -134,  -134,  -134,  -134,
    -134,    65,  -134,   249,   249,   249,   245,   246,   250,  -134,
     251,    85,    12,    70,    77,   253,   248,   252,   102,   254,
     255,   256,   257,   258,  -134,   259,   261,   262,   264,   266,
      23,    98,   139,   143,   152,  -134,  -134,   161,  -134,   260,
    -134,  -134,  -134,    11,    11,    11,   269,  -134,  -134,   267,
    -134,  -134,  -134,  -134,   265,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,    31,    31,  -134,  -134,   165,   268,   271,   273,
     133,   216,   216,   216,    31,    44,   270,    44,    44,    44,
      44,    44,    44,    65,  -134,  -134,  -134,  -134,   272,   274,
     275,   281,   276,   286,   287,   291,    90,   114,   132,   135,
     289,   290,  -134,   150,   160,  -134,  -134,  -134,  -134,  -134,
    -134,   277,   165,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,   297,  -134,  -134,  -134,  -134,  -134,  -134,  -134,   296,
     249,   249,   249,   146,   146,   146,    44,   278,    44,    44,
      44,    44,    44,    44,    44,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,   162,  -134,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,    44,  -134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,  -134,  -134,   -58,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -133,  -134,  -134,  -134,
     -21,  -134,   -10,     7,  -134,  -134,  -134,   -49,   171,    99,
     141,  -134,  -134,  -134,  -134,  -134,   -46,   -71,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,
    -105,  -134,  -134,  -134,  -134,  -134,  -134,  -134,  -134,   -42,
    -134,  -134,   -88,  -134,  -134,  -134,  -134,  -134,  -134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -145
static const yytype_int16 yytable[] =
{
      62,   171,   172,    33,   127,   128,   129,   130,    88,   132,
     113,    90,    31,    29,    21,    91,    44,    45,    46,    39,
      22,     3,   180,    50,    51,    52,   161,   162,    30,     7,
      88,    88,    88,   110,    82,    83,  -106,    91,    91,    91,
     141,   142,   120,   168,   115,   116,    84,   226,   227,     4,
      62,    62,    62,    62,    84,    62,   150,   151,    88,   146,
      84,   140,   105,   163,   164,    91,   148,    84,    53,     6,
     152,    85,    86,    87,   153,    10,   165,   143,   144,   145,
     181,   117,   118,   167,   228,   229,   230,   182,    11,    62,
      68,    69,    70,    54,  -109,   178,    13,    55,    56,    57,
     250,  -112,   235,   236,   237,   238,   239,   240,  -144,   -97,
     179,   165,   186,  -144,  -122,   251,    12,  -144,   167,   114,
      14,  -144,   215,   199,   252,   241,  -118,   276,   277,   278,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,  -131,   102,
     103,   104,   253,    88,    88,   254,   214,   219,   220,   221,
      91,    91,   201,   202,   203,    88,  -134,    15,   225,  -137,
     257,   282,    91,   284,   285,   286,   287,   288,   289,   290,
     258,    62,   291,    16,  -143,   -59,   -59,   -59,   -59,   -58,
     -58,   -58,   -58,    18,  -100,    19,  -125,   293,   -57,   -57,
     -57,   -57,   121,   122,   123,   124,    20,   -60,   -60,   -60,
     -60,   -56,   -56,   -56,   -56,   279,   280,   281,   222,   223,
     224,  -144,  -144,    76,   159,     8,     9,    26,    27,    28,
      21,    34,    35,    36,    37,    41,    40,    42,    47,    48,
      65,    66,    49,    67,    79,    73,    71,    74,    72,    75,
      96,    80,    81,   106,    98,    99,   100,   101,   107,   108,
     126,   158,   169,   173,   174,   119,   139,   177,   175,   198,
     160,     0,   149,   183,   -92,   156,   157,   194,   195,   193,
     197,   206,  -103,   200,   204,   211,   185,   218,     0,     0,
       0,     0,   246,   187,   243,   244,   188,   189,   190,   191,
     196,   245,   247,   248,   216,   217,   234,   249,   242,   255,
     256,   267,   275,     0,   283,     0,     0,   259
};

static const yytype_int16 yycheck[] =
{
      42,   134,   135,    24,    92,    93,    94,    95,    57,    97,
      81,    57,    22,    10,     3,    57,    14,    15,    16,    29,
       9,     0,    10,    14,    15,    16,     3,     4,    25,     7,
      79,    80,    81,    79,     3,     4,    24,    79,    80,    81,
       3,     4,    84,   131,     3,     4,    23,     3,     4,    20,
      92,    93,    94,    95,    23,    97,    17,    18,   107,   108,
      23,   107,    72,    40,    41,   107,   108,    23,     3,    17,
      31,    40,    41,    42,    35,     3,   125,    40,    41,    42,
      10,    40,    41,   125,    40,    41,    42,    10,    19,   131,
      14,    15,    16,    28,    24,    10,     8,    32,    33,    34,
      10,    24,   207,   208,   209,   210,   211,   212,    23,    24,
      25,   160,    10,    23,    24,    25,    19,    23,   160,    25,
      20,    23,   193,    25,    10,   213,    24,   260,   261,   262,
      36,    37,    38,    39,    36,    37,    38,    39,    24,    14,
      15,    16,    10,   192,   193,    10,   192,    14,    15,    16,
     192,   193,   173,   174,   175,   204,    24,    20,   204,    24,
      10,   266,   204,   268,   269,   270,   271,   272,   273,   274,
      10,   213,    10,    27,    24,    36,    37,    38,    39,    36,
      37,    38,    39,    17,    24,    17,    24,   292,    36,    37,
      38,    39,    36,    37,    38,    39,     3,    36,    37,    38,
      39,    36,    37,    38,    39,   263,   264,   265,   201,   202,
     203,    23,    23,    25,    25,    21,    22,    22,    21,    23,
       3,    13,    19,    19,     3,    13,     4,    11,    13,    24,
       6,     6,    26,     6,    23,     6,    13,     6,    10,     6,
       6,    23,    23,     4,    12,    10,    10,    10,     5,    23,
       6,     4,     3,     8,     8,    84,    26,     6,     8,   160,
     119,    -1,    24,    10,    24,    24,    24,     6,     6,    10,
       4,     4,    24,    13,     5,    10,    24,     4,    -1,    -1,
      -1,    -1,     6,    29,    10,    10,    31,    31,    31,    31,
      26,    10,     6,     6,    26,    24,    26,     6,    26,    10,
      10,     4,     6,    -1,    26,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,    45,     0,    20,    47,    17,     7,    21,    22,
       3,    19,    19,     8,    20,    20,    27,    48,    17,    17,
       3,     3,     9,    63,    64,    65,    22,    21,    23,    10,
      25,    65,    46,    63,    13,    19,    19,     3,    55,    65,
       4,    13,    11,    66,    14,    15,    16,    13,    24,    26,
      14,    15,    16,     3,    28,    32,    33,    34,    67,    74,
      82,    83,   102,   104,   105,     6,     6,     6,    14,    15,
      16,    13,    10,     6,     6,     6,    25,    68,   103,    23,
      23,    23,     3,     4,    23,    40,    41,    42,    70,    71,
      79,   102,   106,   111,   107,   108,     6,   109,    12,    10,
      10,    10,    14,    15,    16,    65,     4,     5,    23,    76,
      79,    79,    80,    80,    25,     3,     4,    40,    41,    71,
     102,    36,    37,    38,    39,    73,     6,   105,   105,   105,
     105,   110,   105,    56,    58,    57,    49,    53,    51,    26,
      79,     3,     4,    40,    41,    42,    70,    84,   102,    24,
      17,    18,    31,    35,    78,    81,    24,    24,     4,    25,
      73,     3,     4,    40,    41,    70,    72,   102,   105,     3,
      59,    59,    59,     8,     8,     8,    69,     6,    10,    25,
      10,    10,    10,    10,    87,    24,    10,    29,    31,    31,
      31,    31,    77,    10,     6,     6,    26,     4,    72,    25,
      13,    63,    63,    63,     5,    85,     4,    88,    89,    90,
      91,    10,    92,    75,    79,    80,    26,    24,     4,    14,
      15,    16,    66,    66,    66,    79,     3,     4,    40,    41,
      42,    70,    93,   102,    26,    93,    93,    93,    93,    93,
      93,   105,    26,    10,    10,    10,     6,     6,     6,     6,
      10,    25,    10,    10,    10,    10,    10,    10,    10,    30,
      60,    62,    61,    50,    54,    52,    94,     4,    97,    98,
      99,   100,    96,   101,    86,     6,    59,    59,    59,    48,
      48,    48,    93,    26,    93,    93,    93,    93,    93,    93,
      93,    10,    95,    93
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 56 "synt.y"
    {
	strcpy(expectedReturn,"empty");
;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 58 "synt.y"
    {
	printf("seikai syntakkusu desu");YYACCEPT;
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 63 "synt.y"
    {
	arithmeToggled=1;inOutToggled=1;
;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 66 "synt.y"
    {
	arithmeToggled=1;inOutToggled=1;
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 69 "synt.y"
    {
	arithmeToggled=0;inOutToggled=1;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "synt.y"
    {
	arithmeToggled=1;inOutToggled=0;
;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 75 "synt.y"
    {
	arithmeToggled=0;inOutToggled=0;
;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "synt.y"
    {strcpy(expectedReturn,(yyvsp[(7) - (7)].chainettt));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 80 "synt.y"
    {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,(yyvsp[(2) - (12)].chainettt));
	}
	insererF((yyvsp[(2) - (12)].chainettt),(yyvsp[(7) - (12)].chainettt));
;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 86 "synt.y"
    {strcpy(expectedReturn,(yyvsp[(7) - (7)].chainettt));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 86 "synt.y"
    {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,(yyvsp[(2) - (12)].chainettt));
	}
	insererF((yyvsp[(2) - (12)].chainettt),(yyvsp[(7) - (12)].chainettt));
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 92 "synt.y"
    {strcpy(expectedReturn,(yyvsp[(7) - (7)].chainettt));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 92 "synt.y"
    {
	if(strcmp(expectedReturn,"empty")!=0){
		printf("Erreur Semantique ligne %d colonne %d : expected return pour la fonction : %s\n",yylineno,nbcol,(yyvsp[(2) - (12)].chainettt));
	}
	insererF((yyvsp[(2) - (12)].chainettt),(yyvsp[(7) - (12)].chainettt));
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 101 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 102 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 103 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 107 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 108 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 109 "synt.y"
    {insererTemp((yyvsp[(3) - (4)].chainettt));;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 110 "synt.y"
    {insererTemp((yyvsp[(3) - (3)].chainettt));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 111 "synt.y"
    {insererTemp((yyvsp[(3) - (3)].chainettt));;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 112 "synt.y"
    {insererTemp((yyvsp[(3) - (3)].chainettt));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 119 "synt.y"
    {fixer2((yyvsp[(3) - (4)].chainettt),0);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 120 "synt.y"
    {fixer2((yyvsp[(3) - (4)].chainettt),0);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 121 "synt.y"
    {fixer2((yyvsp[(3) - (4)].chainettt),0);;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 122 "synt.y"
    {fixer2((yyvsp[(4) - (5)].chainettt),1);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 123 "synt.y"
    {fixer2((yyvsp[(4) - (5)].chainettt),1);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 124 "synt.y"
    {fixer2((yyvsp[(4) - (5)].chainettt),1);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 126 "synt.y"
    {inserer2((yyvsp[(1) - (3)].chainettt),"idf","nigger",1,2);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 127 "synt.y"
    {inserer2((yyvsp[(1) - (1)].chainettt),"idf","nigger",1,2);;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 128 "synt.y"
    {inserer2((yyvsp[(1) - (6)].chainettt),"idf","nigger",(yyvsp[(3) - (6)].entierttt),2);;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 129 "synt.y"
    {inserer2((yyvsp[(1) - (4)].chainettt),"idf","nigger",(yyvsp[(3) - (4)].entierttt),2);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 134 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (1)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
	}
	else{
		strcpy(expectedAffect,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]);
		if(getIdfConst(recherche2((yyvsp[(1) - (1)].chainettt)))){
			printf("Erreur Semantique ligne %d colonne %d : affectation dans le constant : %s\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
		}
	}
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 144 "synt.y"
    {
	if(strcmp(expectedAffect,actual)!=0){
		printf("expected %s but %s \n",expectedAffect,actual);
		printf("Erreur Semantique ligne %d colonne %d : incompatible types of : %s and the affected value\n",yylineno,nbcol,(yyvsp[(1) - (5)].chainettt));
	}
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 150 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (4)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	else{
		if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
		}
		strcpy(expectedAffect,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
		if(getIdfConst(recherche2((yyvsp[(1) - (4)].chainettt)))){
			printf("Erreur Semantique ligne %d colonne %d : affectation dans le constant : %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
		}
	}
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 163 "synt.y"
    {
	if(strcmp(expectedAffect,actual)!=0){
		printf("expected %s but %s \n",expectedAffect,actual);
		printf("Erreur Semantique ligne %d colonne %d : incompatible types of %s and the affected value\n",yylineno,nbcol,(yyvsp[(1) - (8)].chainettt));
	}
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 174 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (1)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
	}
	else{
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
			}
		}
	}
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (4)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	else{
		if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
		}
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
			}
		}
	}
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 207 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"REEL");
	}
	else{
		if(strcmp(actual,"REEL")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %f est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].reelttt));
		}
	}
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 217 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].entierttt));
		}
	}	
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 227 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].entierttt));
		}
	}
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 237 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,ReturnFonct);
	}
	else{
		if(strcmp(actual,ReturnFonct)!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de return de la fonction %s est incompatible avec l'instruction\n",yylineno,nbcol,tf[indexF].NomFonction);
		}
	}
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 248 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (1)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
	}
	else{
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
			}
		}
	}
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 263 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (4)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	else{
		if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
		}
		if(strcmp(actual,"empty")==0){
			strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
		}
		else{
			if(strcmp(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))])!=0){
				printf("Erreur Semantique ligne %d colonne %d : le type de la variable %s est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
			}
		}
	}
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 281 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"REEL");
	}
	else{
		if(strcmp(actual,"REEL")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %f est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].reelttt));
		}
	}
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 291 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].entierttt));
		}
	}	
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 301 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,"ENTIER");
	}
	else{
		if(strcmp(actual,"ENTIER")!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de la valeur %d est incompatible avec l'instruction\n",yylineno,nbcol,(yyvsp[(1) - (1)].entierttt));
		}
	}
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 311 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 316 "synt.y"
    {
	if(strcmp(actual,"empty")==0){
		strcpy(actual,ReturnFonct);
	}
	else{
		if(strcmp(actual,ReturnFonct)!=0){
			printf("Erreur Semantique ligne %d colonne %d : le type de return de la fonction %s est incompatible avec l'instruction\n",yylineno,nbcol,tf[indexF].NomFonction);
		}
	}
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 332 "synt.y"
    {strcpy(actual,"empty");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 334 "synt.y"
    {strcpy(actual2,actual);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 334 "synt.y"
    {
	if(strcmp(actual2,actual)!=0){
		printf("Erreur Semantique ligne %d colonne %d : parametres incorrectes pour la condition\n",yylineno,nbcol);
	}
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 348 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (1)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
	}
	else{
		strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]);
	}
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 356 "synt.y"
    {
	if(recherche2((yyvsp[(1) - (4)].chainettt))==(-1)){
		printf("Erreur Semantique ligne %d colonne %d : variable %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	else{
		if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
			printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
		}
		strcpy(actual,ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
	}
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 367 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 372 "synt.y"
    {
	strcpy(actual,"ENTIER");
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 375 "synt.y"
    {
	strcpy(actual,"ENTIER");
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 378 "synt.y"
    {
	strcpy(actual,"REEL");
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 381 "synt.y"
    {
	strcpy(actual,"CHAINE");
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 384 "synt.y"
    {
	strcpy(actual,ReturnFonct);
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 388 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 391 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 395 "synt.y"
    {
	if(!inOutToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque InOut n'est pas incluse pour la fonction LIRE\n",yylineno,nbcol);
	}
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 401 "synt.y"
    {
	if(!inOutToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque InOut n'est pas incluse pour la fonction ECRIRE\n",yylineno,nbcol);
	}
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 407 "synt.y"
    {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (2)].chainettt)))]); 
	temparamsSize++;
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 411 "synt.y"
    {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]); 
	temparamsSize++;
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 415 "synt.y"
    {
	if((yyvsp[(3) - (5)].entierttt) > getTableSize2((yyvsp[(1) - (5)].chainettt))){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (5)].chainettt));
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (5)].chainettt)))]); 
	temparamsSize++;
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 422 "synt.y"
    {
	if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table : %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
	temparamsSize++;
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 429 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 436 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 443 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 447 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 451 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 455 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 459 "synt.y"
    {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 463 "synt.y"
    {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 467 "synt.y"
    {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 471 "synt.y"
    {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 475 "synt.y"
    {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 479 "synt.y"
    {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 485 "synt.y"
    {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (2)].chainettt)))]);
	temparamsSize++;
;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 489 "synt.y"
    {
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (1)].chainettt)))]);
	temparamsSize++;
;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 493 "synt.y"
    {
	if((yyvsp[(3) - (5)].entierttt) > getTableSize2((yyvsp[(1) - (5)].chainettt))){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table: %s\n",yylineno,nbcol,(yyvsp[(1) - (5)].chainettt));
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (5)].chainettt)))]);
	temparamsSize++;
;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 500 "synt.y"
    {
	if((yyvsp[(3) - (4)].entierttt) > getTableSize2((yyvsp[(1) - (4)].chainettt))){
		printf("Erreur Semantique ligne %d colonne %d : indexe hors limite de la table : %s\n",yylineno,nbcol,(yyvsp[(1) - (4)].chainettt));
	}
	strcpy(temparams[temparamsSize],ayylmao[getIdfType(recherche2((yyvsp[(1) - (4)].chainettt)))]);
	temparamsSize++;
;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 507 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 514 "synt.y"
    {
	if(!arithmeToggled){
		printf("Erreur Semantique ligne %d colonne %d : la bibliotheque Arithme n'est pas incluse pour l'expression arithmetique\n",yylineno,nbcol);
	}
	strcpy(temparams[temparamsSize],actual);
	temparamsSize++;
;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 521 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 525 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;
;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 529 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 533 "synt.y"
    {
	strcpy(temparams[temparamsSize],"ENTIER");
	temparamsSize++;	
;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 537 "synt.y"
    {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 541 "synt.y"
    {
	strcpy(temparams[temparamsSize],"REEL");
	temparamsSize++;
;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 545 "synt.y"
    {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 549 "synt.y"
    {
	strcpy(temparams[temparamsSize],"CHAINE");
	temparamsSize++;
;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 553 "synt.y"
    {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 557 "synt.y"
    {
	strcpy(temparams[temparamsSize],ReturnFonct);
	temparamsSize++;
;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 562 "synt.y"
    {
	if(rechercheF((yyvsp[(1) - (1)].chainettt))==-1){
		printf("Erreur Semantique ligne %d colonne %d : la fonction %s n'est pas declare\n",yylineno,nbcol,(yyvsp[(1) - (1)].chainettt));
	}
	else{
		indexF=rechercheF((yyvsp[(1) - (1)].chainettt));
		temparamsSize=0;
	}
;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 570 "synt.y"
    {
	int i;
	if(temparamsSize!=tf[indexF].nbParams){
		printf("Erreur Semantique ligne %d colonne %d : parameters don't match with the fonction %s (size issue)\n",yylineno,nbcol,(yyvsp[(1) - (5)].chainettt));
	}
	else{
		for(i=0;i<temparamsSize;i++){
			if(strcmp(temparams[i],tf[indexF].parametres[i])!=0){
				printf("expected %s but got %s\n",tf[indexF].parametres[i],temparams[i]);
				printf("Erreur Semantique ligne %d colonne %d : parameters don't match with the fonction %s (type issue)\n",yylineno,nbcol,(yyvsp[(1) - (5)].chainettt));
			}
		}
	}
	strcpy(ReturnFonct,tf[indexF].ReturnFonction);
;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 586 "synt.y"
    {
	if(strcmp(expectedReturn,actual)!=0){
		printf("expected %s but %s \n",expectedReturn,actual);
		printf("Erreur Semantique ligne %d colonne %d : le type de la valeur retourne est incompatible avec le type de retourne de la fonction\n",yylineno,nbcol);
	}
	strcpy(expectedReturn,"empty");
;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 594 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 597 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 600 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 603 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 606 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 609 "synt.y"
    {
	strcpy(actual,"empty");
;}
    break;



/* Line 1455 of yacc.c  */
#line 2883 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 614 "synt.y"

#include <stdlib.h>
#include <stdio.h>

main() {
	strcpy(ayylmao[0],"ENTIER");
	strcpy(ayylmao[1],"REEL");
	strcpy(ayylmao[2],"CHAINE");
	
	yyparse();
	
	afficher2();
	printf("\n");
	afficherF();
}
yywrap()
{}

