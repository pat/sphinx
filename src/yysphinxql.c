/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOK_IDENT = 258,
     TOK_ATIDENT = 259,
     TOK_CONST_INT = 260,
     TOK_CONST_FLOAT = 261,
     TOK_CONST_MVA = 262,
     TOK_QUOTED_STRING = 263,
     TOK_USERVAR = 264,
     TOK_SYSVAR = 265,
     TOK_CONST_STRINGS = 266,
     TOK_AS = 267,
     TOK_ASC = 268,
     TOK_ATTACH = 269,
     TOK_AVG = 270,
     TOK_BEGIN = 271,
     TOK_BETWEEN = 272,
     TOK_BY = 273,
     TOK_CALL = 274,
     TOK_COLLATION = 275,
     TOK_COMMIT = 276,
     TOK_COMMITTED = 277,
     TOK_COUNT = 278,
     TOK_CREATE = 279,
     TOK_DELETE = 280,
     TOK_DESC = 281,
     TOK_DESCRIBE = 282,
     TOK_DISTINCT = 283,
     TOK_DIV = 284,
     TOK_DROP = 285,
     TOK_FALSE = 286,
     TOK_FLOAT = 287,
     TOK_FLUSH = 288,
     TOK_FROM = 289,
     TOK_FUNCTION = 290,
     TOK_GLOBAL = 291,
     TOK_GROUP = 292,
     TOK_ID = 293,
     TOK_IN = 294,
     TOK_INDEX = 295,
     TOK_INSERT = 296,
     TOK_INT = 297,
     TOK_INTO = 298,
     TOK_ISOLATION = 299,
     TOK_LEVEL = 300,
     TOK_LIMIT = 301,
     TOK_MATCH = 302,
     TOK_MAX = 303,
     TOK_META = 304,
     TOK_MIN = 305,
     TOK_MOD = 306,
     TOK_NAMES = 307,
     TOK_NULL = 308,
     TOK_OPTION = 309,
     TOK_ORDER = 310,
     TOK_RAND = 311,
     TOK_READ = 312,
     TOK_REPEATABLE = 313,
     TOK_REPLACE = 314,
     TOK_RETURNS = 315,
     TOK_ROLLBACK = 316,
     TOK_RTINDEX = 317,
     TOK_SELECT = 318,
     TOK_SERIALIZABLE = 319,
     TOK_SET = 320,
     TOK_SESSION = 321,
     TOK_SHOW = 322,
     TOK_SONAME = 323,
     TOK_START = 324,
     TOK_STATUS = 325,
     TOK_SUM = 326,
     TOK_TABLES = 327,
     TOK_TO = 328,
     TOK_TRANSACTION = 329,
     TOK_TRUE = 330,
     TOK_UNCOMMITTED = 331,
     TOK_UPDATE = 332,
     TOK_VALUES = 333,
     TOK_VARIABLES = 334,
     TOK_WARNINGS = 335,
     TOK_WEIGHT = 336,
     TOK_WHERE = 337,
     TOK_WITHIN = 338,
     TOK_OR = 339,
     TOK_AND = 340,
     TOK_NE = 341,
     TOK_GTE = 342,
     TOK_LTE = 343,
     TOK_NOT = 344,
     TOK_NEG = 345
   };
#endif
#define TOK_IDENT 258
#define TOK_ATIDENT 259
#define TOK_CONST_INT 260
#define TOK_CONST_FLOAT 261
#define TOK_CONST_MVA 262
#define TOK_QUOTED_STRING 263
#define TOK_USERVAR 264
#define TOK_SYSVAR 265
#define TOK_CONST_STRINGS 266
#define TOK_AS 267
#define TOK_ASC 268
#define TOK_ATTACH 269
#define TOK_AVG 270
#define TOK_BEGIN 271
#define TOK_BETWEEN 272
#define TOK_BY 273
#define TOK_CALL 274
#define TOK_COLLATION 275
#define TOK_COMMIT 276
#define TOK_COMMITTED 277
#define TOK_COUNT 278
#define TOK_CREATE 279
#define TOK_DELETE 280
#define TOK_DESC 281
#define TOK_DESCRIBE 282
#define TOK_DISTINCT 283
#define TOK_DIV 284
#define TOK_DROP 285
#define TOK_FALSE 286
#define TOK_FLOAT 287
#define TOK_FLUSH 288
#define TOK_FROM 289
#define TOK_FUNCTION 290
#define TOK_GLOBAL 291
#define TOK_GROUP 292
#define TOK_ID 293
#define TOK_IN 294
#define TOK_INDEX 295
#define TOK_INSERT 296
#define TOK_INT 297
#define TOK_INTO 298
#define TOK_ISOLATION 299
#define TOK_LEVEL 300
#define TOK_LIMIT 301
#define TOK_MATCH 302
#define TOK_MAX 303
#define TOK_META 304
#define TOK_MIN 305
#define TOK_MOD 306
#define TOK_NAMES 307
#define TOK_NULL 308
#define TOK_OPTION 309
#define TOK_ORDER 310
#define TOK_RAND 311
#define TOK_READ 312
#define TOK_REPEATABLE 313
#define TOK_REPLACE 314
#define TOK_RETURNS 315
#define TOK_ROLLBACK 316
#define TOK_RTINDEX 317
#define TOK_SELECT 318
#define TOK_SERIALIZABLE 319
#define TOK_SET 320
#define TOK_SESSION 321
#define TOK_SHOW 322
#define TOK_SONAME 323
#define TOK_START 324
#define TOK_STATUS 325
#define TOK_SUM 326
#define TOK_TABLES 327
#define TOK_TO 328
#define TOK_TRANSACTION 329
#define TOK_TRUE 330
#define TOK_UNCOMMITTED 331
#define TOK_UPDATE 332
#define TOK_VALUES 333
#define TOK_VARIABLES 334
#define TOK_WARNINGS 335
#define TOK_WEIGHT 336
#define TOK_WHERE 337
#define TOK_WITHIN 338
#define TOK_OR 339
#define TOK_AND 340
#define TOK_NE 341
#define TOK_GTE 342
#define TOK_LTE 343
#define TOK_NOT 344
#define TOK_NEG 345




/* Copy the first part of user declarations.  */


#if USE_WINDOWS
#pragma warning(push,1)
#pragma warning(disable:4702) // unreachable code
#endif


// some helpers
#include <float.h> // for FLT_MAX



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  91
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   794

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  105
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  89
/* YYNRULES -- Number of rules. */
#define YYNRULES  245
/* YYNRULES -- Number of states. */
#define YYNSTATES  452

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   345

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    98,    87,     2,
     103,   104,    96,    94,   102,    95,     2,    97,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   101,
      90,    88,    91,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    86,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    89,    92,    93,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    50,    52,    54,    65,    67,    71,
      73,    76,    77,    79,    82,    84,    89,    94,    99,   104,
     109,   113,   119,   121,   125,   126,   128,   131,   133,   137,
     138,   142,   146,   150,   154,   159,   163,   167,   173,   180,
     184,   189,   195,   199,   203,   207,   211,   213,   219,   223,
     227,   229,   231,   236,   240,   242,   244,   247,   249,   252,
     254,   258,   259,   261,   265,   266,   268,   274,   275,   277,
     281,   287,   289,   293,   295,   298,   301,   302,   304,   307,
     312,   313,   315,   318,   320,   324,   328,   332,   338,   345,
     349,   351,   355,   359,   361,   363,   365,   367,   369,   371,
     374,   377,   381,   385,   389,   393,   397,   401,   405,   409,
     413,   417,   421,   425,   429,   433,   437,   441,   445,   449,
     451,   456,   461,   465,   472,   479,   481,   485,   487,   489,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   510,
     514,   519,   524,   529,   533,   538,   546,   552,   554,   556,
     558,   560,   562,   564,   566,   568,   570,   573,   580,   582,
     584,   585,   589,   591,   595,   597,   601,   605,   607,   611,
     613,   615,   617,   621,   624,   632,   642,   649,   651,   655,
     657,   661,   663,   667,   668,   671,   673,   677,   681,   682,
     684,   686,   688,   691,   693,   695,   698,   704,   706,   710,
     714,   718,   724,   729,   734,   735,   737,   740,   742,   746,
     750,   753,   760,   761,   763,   765,   768,   771,   774,   776,
     784,   786,   788,   792,   799,   803
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     106,     0,    -1,   107,    -1,   108,    -1,   108,   101,    -1,
     155,    -1,   163,    -1,   149,    -1,   150,    -1,   153,    -1,
     164,    -1,   173,    -1,   175,    -1,   176,    -1,   179,    -1,
     184,    -1,   188,    -1,   190,    -1,   191,    -1,   192,    -1,
     185,    -1,   193,    -1,   109,    -1,   108,   101,   109,    -1,
     110,    -1,   145,    -1,    63,   111,    34,   115,   116,   125,
     127,   129,   133,   135,    -1,   112,    -1,   111,   102,   112,
      -1,    96,    -1,   114,   113,    -1,    -1,     3,    -1,    12,
       3,    -1,   141,    -1,    15,   103,   141,   104,    -1,    48,
     103,   141,   104,    -1,    50,   103,   141,   104,    -1,    71,
     103,   141,   104,    -1,    23,   103,    96,   104,    -1,    81,
     103,   104,    -1,    23,   103,    28,     3,   104,    -1,     3,
      -1,   115,   102,     3,    -1,    -1,   117,    -1,    82,   118,
      -1,   120,    -1,   118,    85,   120,    -1,    -1,   121,    88,
     123,    -1,   121,    89,   123,    -1,   121,    91,   123,    -1,
     121,    90,   123,    -1,    47,   103,     8,   104,    -1,   121,
      88,   122,    -1,   121,    89,   122,    -1,   121,    39,   103,
     124,   104,    -1,   121,    99,    39,   103,   124,   104,    -1,
     121,    39,     9,    -1,   121,    99,    39,     9,    -1,   121,
      17,   122,    85,   122,    -1,   121,    91,   122,    -1,   121,
      90,   122,    -1,   121,    92,   122,    -1,   121,    93,   122,
      -1,   119,    -1,   121,    17,   123,    85,   123,    -1,   121,
      92,   123,    -1,   121,    93,   123,    -1,     3,    -1,     4,
      -1,    23,   103,    96,   104,    -1,    81,   103,   104,    -1,
      38,    -1,     5,    -1,    95,     5,    -1,     6,    -1,    95,
       6,    -1,   122,    -1,   124,   102,   122,    -1,    -1,   126,
      -1,    37,    18,   121,    -1,    -1,   128,    -1,    83,    37,
      55,    18,   131,    -1,    -1,   130,    -1,    55,    18,   131,
      -1,    55,    18,    56,   103,   104,    -1,   132,    -1,   131,
     102,   132,    -1,   121,    -1,   121,    13,    -1,   121,    26,
      -1,    -1,   134,    -1,    46,     5,    -1,    46,     5,   102,
       5,    -1,    -1,   136,    -1,    54,   137,    -1,   138,    -1,
     137,   102,   138,    -1,     3,    88,     3,    -1,     3,    88,
       5,    -1,     3,    88,   103,   139,   104,    -1,     3,    88,
       3,   103,     8,   104,    -1,     3,    88,     8,    -1,   140,
      -1,   139,   102,   140,    -1,     3,    88,   122,    -1,     3,
      -1,     4,    -1,    38,    -1,     5,    -1,     6,    -1,     9,
      -1,    95,   141,    -1,    99,   141,    -1,   141,    94,   141,
      -1,   141,    95,   141,    -1,   141,    96,   141,    -1,   141,
      97,   141,    -1,   141,    90,   141,    -1,   141,    91,   141,
      -1,   141,    87,   141,    -1,   141,    86,   141,    -1,   141,
      98,   141,    -1,   141,    29,   141,    -1,   141,    51,   141,
      -1,   141,    93,   141,    -1,   141,    92,   141,    -1,   141,
      88,   141,    -1,   141,    89,   141,    -1,   141,    85,   141,
      -1,   141,    84,   141,    -1,   103,   141,   104,    -1,   142,
      -1,     3,   103,   143,   104,    -1,    39,   103,   143,   104,
      -1,     3,   103,   104,    -1,    50,   103,   141,   102,   141,
     104,    -1,    48,   103,   141,   102,   141,   104,    -1,   144,
      -1,   143,   102,   144,    -1,   141,    -1,     8,    -1,    67,
     146,    -1,    80,    -1,    70,    -1,    49,    -1,     3,    -1,
      53,    -1,     8,    -1,     5,    -1,     6,    -1,   147,    -1,
     148,    95,   147,    -1,    65,     3,    88,   152,    -1,    65,
       3,    88,   151,    -1,    65,     3,    88,    53,    -1,    65,
      52,   148,    -1,    65,    10,    88,   148,    -1,    65,    36,
       9,    88,   103,   124,   104,    -1,    65,    36,     3,    88,
     151,    -1,     3,    -1,     8,    -1,    75,    -1,    31,    -1,
     122,    -1,    21,    -1,    61,    -1,   154,    -1,    16,    -1,
      69,    74,    -1,   156,    43,     3,   157,    78,   159,    -1,
      41,    -1,    59,    -1,    -1,   103,   158,   104,    -1,   121,
      -1,   158,   102,   121,    -1,   160,    -1,   159,   102,   160,
      -1,   103,   161,   104,    -1,   162,    -1,   161,   102,   162,
      -1,   122,    -1,   123,    -1,     8,    -1,   103,   124,   104,
      -1,   103,   104,    -1,    25,    34,     3,    82,    38,    88,
     122,    -1,    25,    34,     3,    82,    38,    39,   103,   124,
     104,    -1,    19,     3,   103,   165,   168,   104,    -1,   166,
      -1,   165,   102,   166,    -1,   162,    -1,   103,   167,   104,
      -1,     8,    -1,   167,   102,     8,    -1,    -1,   102,   169,
      -1,   170,    -1,   169,   102,   170,    -1,   162,   171,   172,
      -1,    -1,    12,    -1,     3,    -1,    46,    -1,   174,     3,
      -1,    27,    -1,    26,    -1,    67,    72,    -1,    77,   115,
      65,   177,   117,    -1,   178,    -1,   177,   102,   178,    -1,
       3,    88,   122,    -1,     3,    88,   123,    -1,     3,    88,
     103,   124,   104,    -1,     3,    88,   103,   104,    -1,    67,
     186,    79,   180,    -1,    -1,   181,    -1,    82,   182,    -1,
     183,    -1,   182,    84,   183,    -1,     3,    88,     8,    -1,
      67,    20,    -1,    65,   186,    74,    44,    45,   187,    -1,
      -1,    36,    -1,    66,    -1,    57,    76,    -1,    57,    22,
      -1,    58,    57,    -1,    64,    -1,    24,    35,     3,    60,
     189,    68,     8,    -1,    42,    -1,    32,    -1,    30,    35,
       3,    -1,    14,    40,     3,    73,    62,     3,    -1,    33,
      62,     3,    -1,    63,    10,   133,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   119,   119,   120,   121,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   147,   148,   152,   153,   157,   172,   173,   177,
     178,   181,   183,   184,   188,   189,   190,   191,   192,   193,
     194,   195,   199,   200,   203,   205,   209,   213,   214,   217,
     218,   219,   220,   221,   225,   230,   237,   245,   253,   262,
     267,   272,   277,   282,   287,   292,   297,   302,   307,   312,
     320,   321,   326,   332,   338,   347,   348,   359,   360,   364,
     370,   376,   378,   382,   388,   390,   394,   400,   402,   406,
     410,   417,   418,   422,   423,   424,   427,   429,   433,   438,
     445,   447,   451,   455,   456,   460,   465,   470,   476,   481,
     489,   494,   501,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     541,   542,   543,   544,   545,   549,   550,   554,   555,   561,
     565,   566,   567,   573,   574,   575,   576,   577,   581,   582,
     586,   591,   596,   601,   602,   606,   611,   619,   620,   624,
     625,   626,   640,   641,   642,   646,   647,   653,   661,   662,
     665,   667,   671,   672,   676,   677,   681,   685,   686,   690,
     691,   692,   693,   694,   700,   706,   718,   726,   730,   737,
     738,   745,   755,   761,   763,   767,   772,   776,   783,   785,
     789,   790,   796,   804,   805,   811,   817,   825,   826,   830,
     834,   838,   842,   852,   858,   859,   863,   867,   868,   872,
     876,   883,   889,   890,   891,   895,   896,   897,   898,   904,
     915,   916,   920,   931,   943,   954
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_IDENT", "TOK_ATIDENT", 
  "TOK_CONST_INT", "TOK_CONST_FLOAT", "TOK_CONST_MVA", 
  "TOK_QUOTED_STRING", "TOK_USERVAR", "TOK_SYSVAR", "TOK_CONST_STRINGS", 
  "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_AVG", "TOK_BEGIN", 
  "TOK_BETWEEN", "TOK_BY", "TOK_CALL", "TOK_COLLATION", "TOK_COMMIT", 
  "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", "TOK_DESC", 
  "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", "TOK_FALSE", 
  "TOK_FLOAT", "TOK_FLUSH", "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", 
  "TOK_GROUP", "TOK_ID", "TOK_IN", "TOK_INDEX", "TOK_INSERT", "TOK_INT", 
  "TOK_INTO", "TOK_ISOLATION", "TOK_LEVEL", "TOK_LIMIT", "TOK_MATCH", 
  "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_NAMES", "TOK_NULL", 
  "TOK_OPTION", "TOK_ORDER", "TOK_RAND", "TOK_READ", "TOK_REPEATABLE", 
  "TOK_REPLACE", "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", 
  "TOK_SELECT", "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", 
  "TOK_SONAME", "TOK_START", "TOK_STATUS", "TOK_SUM", "TOK_TABLES", 
  "TOK_TO", "TOK_TRANSACTION", "TOK_TRUE", "TOK_UNCOMMITTED", 
  "TOK_UPDATE", "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", 
  "TOK_WEIGHT", "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", 
  "'&'", "'='", "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", 
  "'-'", "'*'", "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "','", "'('", 
  "')'", "$accept", "request", "statement", "multi_stmt_list", 
  "multi_stmt", "select_from", "select_items_list", "select_item", 
  "opt_alias", "select_expr", "ident_list", "opt_where_clause", 
  "where_clause", "where_expr", "expr_float_unhandled", "where_item", 
  "expr_ident", "const_int", "const_float", "const_list", 
  "opt_group_clause", "group_clause", "opt_group_order_clause", 
  "group_order_clause", "opt_order_clause", "order_clause", 
  "order_items_list", "order_item", "opt_limit_clause", "limit_clause", 
  "opt_option_clause", "option_clause", "option_list", "option_item", 
  "named_const_list", "named_const", "expr", "function", "arglist", "arg", 
  "show_stmt", "show_what", "simple_set_value", "set_value", "set_stmt", 
  "set_global_stmt", "set_string_value", "boolean_value", "transact_op", 
  "start_transaction", "insert_into", "insert_or_replace", 
  "opt_column_list", "column_list", "insert_rows_list", "insert_row", 
  "insert_vals_list", "insert_val", "delete_from", "call_proc", 
  "call_args_list", "call_arg", "const_string_list", "opt_call_opts_list", 
  "call_opts_list", "call_opt", "opt_as", "call_opt_name", "describe", 
  "describe_tok", "show_tables", "update", "update_items_list", 
  "update_item", "show_variables", "opt_show_variables_where", 
  "show_variables_where", "show_variables_where_list", 
  "show_variables_where_entry", "show_collation", "set_transaction", 
  "opt_scope", "isolation_level", "create_function", "udf_type", 
  "drop_function", "attach_index", "flush_rtindex", "select_sysvar", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   124,    38,    61,   341,
      60,    62,   342,   343,    43,    45,    42,    47,    37,   344,
     345,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   105,   106,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   116,   116,   117,   118,   118,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   121,   121,   121,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   127,   127,   128,   129,   129,   130,
     130,   131,   131,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   142,   142,   142,   143,   143,   144,   144,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   148,   148,
     149,   149,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   154,   154,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   161,   161,   162,
     162,   162,   162,   162,   163,   163,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   172,   173,   174,   174,   175,   176,   177,   177,   178,
     178,   178,   178,   179,   180,   180,   181,   182,   182,   183,
     184,   185,   186,   186,   186,   187,   187,   187,   187,   188,
     189,   189,   190,   191,   192,   193
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,    10,     1,     3,     1,
       2,     0,     1,     2,     1,     4,     4,     4,     4,     4,
       3,     5,     1,     3,     0,     1,     2,     1,     3,     0,
       3,     3,     3,     3,     4,     3,     3,     5,     6,     3,
       4,     5,     3,     3,     3,     3,     1,     5,     3,     3,
       1,     1,     4,     3,     1,     1,     2,     1,     2,     1,
       3,     0,     1,     3,     0,     1,     5,     0,     1,     3,
       5,     1,     3,     1,     2,     2,     0,     1,     2,     4,
       0,     1,     2,     1,     3,     3,     3,     5,     6,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       4,     4,     3,     6,     6,     1,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     4,     4,     3,     4,     7,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     6,     1,     1,
       0,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     3,     2,     7,     9,     6,     1,     3,     1,
       3,     1,     3,     0,     2,     1,     3,     3,     0,     1,
       1,     1,     2,     1,     1,     2,     5,     1,     3,     3,
       3,     5,     4,     4,     0,     1,     2,     1,     3,     3,
       2,     6,     0,     1,     1,     2,     2,     2,     1,     7,
       1,     1,     3,     6,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,   175,     0,   172,     0,     0,   214,   213,     0,
       0,   178,   179,   173,     0,   232,   232,     0,     0,     0,
       2,     3,    22,    24,    25,     7,     8,     9,   174,     5,
       0,     6,    10,    11,     0,    12,    13,    14,    15,    20,
      16,    17,    18,    19,    21,     0,     0,     0,     0,     0,
       0,   113,   114,   116,   117,   118,    96,     0,     0,   115,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
      27,    31,    34,   139,     0,     0,   233,     0,   234,     0,
     230,   233,   152,   151,   215,   150,   149,     0,   176,    42,
       0,     1,     4,     0,   212,     0,     0,     0,     0,   242,
     244,     0,     0,   245,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,     0,     0,     0,    32,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   156,   157,   155,   154,   158,   163,
       0,   224,     0,     0,     0,     0,    23,   180,     0,    75,
      77,   191,     0,     0,   189,   190,   199,   203,   197,     0,
       0,   148,   142,   147,     0,   145,    98,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,   138,    44,    28,
      33,   130,   131,   137,   136,   128,   127,   134,   135,   125,
     126,   133,   132,   121,   122,   123,   124,   129,   167,   168,
     170,   162,   169,     0,   171,   161,   160,   164,     0,     0,
       0,     0,     0,   223,   225,     0,     0,   217,    43,     0,
       0,     0,    76,    78,   201,   193,    79,     0,     0,     0,
       0,   241,   240,     0,     0,     0,   140,     0,    35,     0,
      39,   141,     0,    36,     0,    37,    38,     0,     0,    49,
      81,    45,   166,     0,   159,     0,     0,   226,   227,     0,
       0,   216,    70,    71,     0,    74,     0,   182,     0,     0,
     243,     0,   192,     0,   200,   199,   198,   204,   205,   196,
       0,     0,     0,   146,    99,    41,     0,     0,     0,    46,
      66,    47,     0,     0,    84,    82,     0,     0,     0,   238,
     231,     0,     0,     0,   219,   220,   218,     0,     0,     0,
     181,     0,   177,   184,    80,   202,   209,     0,     0,   239,
       0,   194,   144,   143,     0,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    87,    85,   165,
     236,   235,   237,   229,   228,   222,     0,     0,    73,   183,
       0,     0,   187,     0,   210,   211,   207,   208,   206,     0,
       0,    48,     0,     0,    59,     0,    55,    50,    56,    51,
      63,    53,    62,    52,    64,    68,    65,    69,     0,    83,
       0,     0,    96,    88,   221,    72,     0,   186,   185,   195,
      54,     0,     0,     0,    60,     0,     0,     0,   100,   188,
      61,     0,    67,    57,     0,     0,     0,    93,    89,    91,
       0,    26,   101,    58,    86,     0,    94,    95,     0,     0,
     102,   103,    90,    92,     0,     0,   105,   106,   109,     0,
     104,     0,     0,     0,   110,     0,     0,     0,   107,   108,
     112,   111
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    69,    70,   121,    71,
      90,   260,   261,   299,   300,   301,   417,   236,   165,   237,
     304,   305,   347,   348,   392,   393,   418,   419,   103,   104,
     421,   422,   430,   431,   443,   444,    72,    73,   174,   175,
      24,    86,   148,   149,    25,    26,   215,   216,    27,    28,
      29,    30,   230,   278,   322,   323,   361,   166,    31,    32,
     167,   168,   238,   240,   287,   288,   327,   366,    33,    34,
      35,    36,   226,   227,    37,   223,   224,   267,   268,    38,
      39,    79,   310,    40,   243,    41,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -255
static const short yypact[] =
{
     717,   -21,  -255,    89,  -255,    56,    60,  -255,  -255,    84,
      72,  -255,  -255,  -255,   160,   136,   699,    21,   139,   187,
    -255,    70,  -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,
     151,  -255,  -255,  -255,   190,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   204,    97,   209,   210,   216,
     217,   119,  -255,  -255,  -255,  -255,   183,   127,   130,  -255,
     131,   145,   146,   155,   158,   271,  -255,   271,   271,    14,
    -255,   118,   510,  -255,   165,   178,   148,   171,  -255,   207,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,   192,  -255,  -255,
     -49,  -255,   -45,   275,  -255,   218,    25,   222,   219,  -255,
    -255,   102,   289,  -255,  -255,   271,    49,   264,   271,   271,
     271,   194,   224,   225,  -255,  -255,   342,   139,   212,  -255,
     317,  -255,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   128,
     171,   241,   242,  -255,  -255,  -255,  -255,  -255,  -255,   236,
     288,   251,   331,   332,   212,   243,  -255,   233,   276,  -255,
    -255,  -255,    75,     5,  -255,  -255,  -255,   235,  -255,   105,
     301,  -255,  -255,   510,   -46,  -255,   238,   363,   338,   244,
      51,   293,   314,   390,  -255,   271,   271,  -255,   -50,  -255,
    -255,  -255,  -255,   536,   559,   584,   607,   632,   632,   590,
     590,   590,   590,   228,   228,  -255,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,   340,  -255,  -255,  -255,   236,   159,   246,
     171,   302,   343,  -255,  -255,   263,    47,  -255,  -255,    17,
     274,   350,  -255,  -255,  -255,  -255,  -255,    52,    82,    25,
     250,  -255,  -255,   287,   -10,   264,  -255,   351,  -255,   253,
    -255,  -255,   271,  -255,   271,  -255,  -255,   462,   487,   157,
     321,  -255,  -255,     6,  -255,    -7,   272,   277,  -255,     1,
     331,  -255,  -255,  -255,   259,  -255,   265,  -255,    88,   266,
    -255,     6,  -255,   356,  -255,   132,  -255,   270,  -255,  -255,
     365,   273,     6,  -255,  -255,  -255,   413,   439,   291,   290,
    -255,  -255,   197,   378,   330,  -255,   107,    27,   358,  -255,
    -255,   409,   343,    22,  -255,  -255,  -255,   324,   318,    17,
    -255,    29,   319,  -255,  -255,  -255,  -255,    33,    29,  -255,
       6,  -255,  -255,  -255,   415,   157,    18,    -6,    18,    18,
      18,    18,    18,    18,   385,    17,   388,   389,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,   124,   339,  -255,  -255,
      23,   135,  -255,   266,  -255,  -255,  -255,   433,  -255,   150,
     359,  -255,   377,   380,  -255,     6,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,  -255,  -255,  -255,    -1,  -255,
     411,   451,   183,  -255,  -255,  -255,    29,  -255,  -255,  -255,
    -255,     6,    19,   193,  -255,     6,   452,   261,   417,  -255,
    -255,   466,  -255,  -255,   202,    17,   370,    28,   387,  -255,
     489,  -255,  -255,  -255,   387,   391,  -255,  -255,    17,   405,
     394,  -255,  -255,  -255,     9,   489,   412,  -255,  -255,   509,
    -255,   506,   430,   214,  -255,   416,     6,   509,  -255,  -255,
    -255,  -255
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -255,  -255,  -255,  -255,   427,  -255,  -255,   403,  -255,  -255,
     423,  -255,   296,  -255,  -255,   206,  -220,   -96,  -254,  -237,
    -255,  -255,  -255,  -255,  -255,  -255,   129,   114,   153,  -255,
    -255,  -255,  -255,   133,  -255,   115,   -63,  -255,   456,   322,
    -255,  -255,   346,   429,  -255,  -255,   352,  -255,  -255,  -255,
    -255,  -255,  -255,  -255,  -255,   223,  -255,  -238,  -255,  -255,
    -255,   353,  -255,  -255,  -255,   262,  -255,  -255,  -255,  -255,
    -255,  -255,  -255,   323,  -255,  -255,  -255,  -255,   279,  -255,
    -255,   593,  -255,  -255,  -255,  -255,  -255,  -255,  -255
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -209
static const short yytable[] =
{
     164,   285,   114,   374,   115,   116,   159,   160,   404,   277,
     159,   159,   436,   234,   437,   315,   152,   438,   154,    45,
     272,   273,   155,   159,   160,   160,   306,   159,   159,   291,
     159,   160,   259,   161,   159,   160,   364,   161,   173,   302,
     274,   426,   177,   214,   173,   181,   182,   183,   117,   350,
     307,   308,   153,   153,   427,   275,   245,   309,   246,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   356,   178,   292,   365,
     232,   233,   373,   362,   377,   379,   381,   383,   385,   387,
     367,    47,    46,   369,    48,    88,   162,   375,   276,   359,
     213,   213,   405,   351,   313,    51,    52,    53,    54,   235,
     171,    55,   439,   162,   411,   302,   118,   213,   213,    49,
     162,   119,   257,   258,   162,   389,   355,   235,   163,   259,
     120,   208,   360,   159,    50,  -208,   209,   241,   403,    74,
      59,    60,    89,   164,   326,   179,    75,   242,   412,   270,
     112,   141,   113,   245,   281,   251,   282,   142,   409,   210,
     272,   273,   208,    51,    52,    53,    54,   209,   414,    55,
      56,    92,    76,   314,   143,    57,   144,   145,  -208,   146,
     274,   211,   173,    58,   283,   324,   284,    91,    77,   296,
     319,   297,   320,    94,    93,   275,   331,    65,    59,    60,
      96,    67,    78,   212,   298,    68,   172,    95,    61,   281,
      62,   349,    97,    98,   336,    51,    52,    53,    54,    99,
     100,    55,   101,   213,   147,   164,   281,    57,   394,   102,
     105,    63,   164,   106,   107,    58,   337,   396,   276,   397,
     372,    64,   376,   378,   380,   382,   384,   386,   108,   109,
      59,    60,   281,   139,   399,    65,    66,   122,   110,    67,
      61,   111,    62,    68,   272,   273,   140,    51,    52,    53,
      54,   151,   171,    55,    51,    52,    53,    54,   157,   123,
      55,   150,   169,    63,   274,   338,   339,   340,   341,   342,
     343,   158,    82,    64,   176,   281,   344,   413,   184,   275,
     164,   170,    59,    60,   281,   410,   423,    65,    66,    59,
      60,    67,   112,    83,   113,    68,   447,   416,   448,   112,
     190,   113,   122,    85,   136,   137,   138,   185,   186,   218,
     219,   220,   221,   222,   225,   228,   229,   239,   231,   244,
     247,   249,   276,   122,   123,   232,   266,   265,   250,   263,
     450,   269,   279,   280,   289,   290,   294,   295,   303,    65,
     311,   312,   317,    67,   325,   123,    65,    68,   318,   321,
      67,   122,   328,   329,    68,   335,   330,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   122,   123,   334,   252,   345,   253,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   346,   123,   352,   254,   353,   255,   122,
     357,   363,   358,   370,   388,   390,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   123,   122,   395,   391,   326,   187,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   401,   400,   123,   402,   406,   248,   122,   407,
     415,   420,   233,   425,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   428,
     123,   122,   429,   434,   256,   432,   435,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   442,   123,   445,   441,   122,   332,   446,   156,
     449,   189,   271,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   123,   122,
     188,   371,   433,   333,   424,   408,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   123,   451,   180,   252,   122,   264,   293,   440,   217,
     262,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   398,   123,   122,   254,
     368,   354,   286,   316,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    87,
     123,     0,     0,   122,     0,     0,     0,     0,     0,   122,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   123,   122,     0,     0,     0,
       0,   123,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   123,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   123,   134,   135,   136,   137,   138,     0,
       0,     0,     0,     0,     0,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
       0,     0,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     1,     0,     2,     0,    81,     3,     0,     4,     0,
       0,     5,     6,     7,     8,     0,     0,     9,    82,     0,
      10,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    78,     0,     0,     0,    83,
       0,    84,     0,     0,     0,     0,    12,     0,    13,    85,
      14,     0,    15,     0,    16,     0,    17,     0,     0,     0,
       0,     0,     0,     0,    18
};

static const short yycheck[] =
{
      96,   239,    65,     9,    67,    68,     5,     6,     9,   229,
       5,     5,     3,     8,     5,   269,    65,     8,    63,    40,
       3,     4,    67,     5,     6,     6,   263,     5,     5,    39,
       5,     6,    82,     8,     5,     6,     3,     8,   101,   259,
      23,    13,   105,   139,   107,   108,   109,   110,    34,    22,
      57,    58,   102,   102,    26,    38,   102,    64,   104,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   313,    28,    88,    46,
       5,     6,   336,   321,   338,   339,   340,   341,   342,   343,
     328,    35,     3,   330,    34,    74,    95,   103,    81,   319,
      95,    95,   103,    76,   103,     3,     4,     5,     6,   104,
       8,     9,   103,    95,    95,   335,   102,    95,    95,    35,
      95,     3,   185,   186,    95,   345,   104,   104,   103,    82,
      12,     3,   103,     5,    62,     3,     8,    32,   375,     3,
      38,    39,     3,   239,    12,    96,    10,    42,   402,   102,
      48,     3,    50,   102,   102,   104,   104,     9,   396,    31,
       3,     4,     3,     3,     4,     5,     6,     8,   405,     9,
      10,   101,    36,   269,     3,    15,     5,     6,    46,     8,
      23,    53,   245,    23,   102,   281,   104,     0,    52,   252,
     102,   254,   104,     3,    43,    38,   292,    95,    38,    39,
     103,    99,    66,    75,    47,   103,   104,     3,    48,   102,
      50,   104,     3,     3,    17,     3,     4,     5,     6,     3,
       3,     9,   103,    95,    53,   321,   102,    15,   104,    46,
     103,    71,   328,   103,   103,    23,    39,   102,    81,   104,
     336,    81,   338,   339,   340,   341,   342,   343,   103,   103,
      38,    39,   102,    88,   104,    95,    96,    29,   103,    99,
      48,   103,    50,   103,     3,     4,    88,     3,     4,     5,
       6,    79,     8,     9,     3,     4,     5,     6,     3,    51,
       9,    74,    60,    71,    23,    88,    89,    90,    91,    92,
      93,    73,    49,    81,     5,   102,    99,   104,   104,    38,
     396,    82,    38,    39,   102,   401,   104,    95,    96,    38,
      39,    99,    48,    70,    50,   103,   102,    56,   104,    48,
       3,    50,    29,    80,    96,    97,    98,   103,   103,    88,
      88,    95,    44,    82,     3,     3,   103,   102,    62,    38,
     102,     3,    81,    29,    51,     5,     3,    45,   104,   103,
     446,    88,    78,     3,   104,    68,     5,   104,    37,    95,
      88,    84,   103,    99,     8,    51,    95,   103,   103,   103,
      99,    29,   102,     8,   103,    85,   103,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    29,    51,   103,   102,    18,   104,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    83,    51,    57,   102,     8,   104,    29,
      96,   102,   104,     8,    39,    37,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    51,    29,   104,    55,    12,   104,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    85,   104,    51,    85,    55,   104,    29,    18,
      18,    54,     6,   103,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   102,
      51,    29,     3,    88,   104,   104,   102,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     3,    51,     8,   103,    29,   104,    88,    92,
     104,   118,   226,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    51,    29,
     117,   335,   428,   104,   415,   392,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    51,   447,   107,   102,    29,   220,   245,   435,   140,
     218,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   363,    51,    29,   102,
     328,   312,   239,   270,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    16,
      51,    -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    51,    29,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    51,    -1,
      -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    51,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    14,    -1,    16,    -1,    36,    19,    -1,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    49,    -1,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    70,
      -1,    72,    -1,    -1,    -1,    -1,    59,    -1,    61,    80,
      63,    -1,    65,    -1,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    14,    16,    19,    21,    24,    25,    26,    27,    30,
      33,    41,    59,    61,    63,    65,    67,    69,    77,   106,
     107,   108,   109,   110,   145,   149,   150,   153,   154,   155,
     156,   163,   164,   173,   174,   175,   176,   179,   184,   185,
     188,   190,   191,   192,   193,    40,     3,    35,    34,    35,
      62,     3,     4,     5,     6,     9,    10,    15,    23,    38,
      39,    48,    50,    71,    81,    95,    96,    99,   103,   111,
     112,   114,   141,   142,     3,    10,    36,    52,    66,   186,
      20,    36,    49,    70,    72,    80,   146,   186,    74,     3,
     115,     0,   101,    43,     3,     3,   103,     3,     3,     3,
       3,   103,    46,   133,   134,   103,   103,   103,   103,   103,
     103,   103,    48,    50,   141,   141,   141,    34,   102,     3,
      12,   113,    29,    51,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    88,
      88,     3,     9,     3,     5,     6,     8,    53,   147,   148,
      74,    79,    65,   102,    63,    67,   109,     3,    73,     5,
       6,     8,    95,   103,   122,   123,   162,   165,   166,    60,
      82,     8,   104,   141,   143,   144,     5,   141,    28,    96,
     143,   141,   141,   141,   104,   103,   103,   104,   115,   112,
       3,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,     3,     8,
      31,    53,    75,    95,   122,   151,   152,   148,    88,    88,
      95,    44,    82,   180,   181,     3,   177,   178,     3,   103,
     157,    62,     5,     6,     8,   104,   122,   124,   167,   102,
     168,    32,    42,   189,    38,   102,   104,   102,   104,     3,
     104,   104,   102,   104,   102,   104,   104,   141,   141,    82,
     116,   117,   151,   103,   147,    45,     3,   182,   183,    88,
     102,   117,     3,     4,    23,    38,    81,   121,   158,    78,
       3,   102,   104,   102,   104,   162,   166,   169,   170,   104,
      68,    39,    88,   144,     5,   104,   141,   141,    47,   118,
     119,   120,   121,    37,   125,   126,   124,    57,    58,    64,
     187,    88,    84,   103,   122,   123,   178,   103,   103,   102,
     104,   103,   159,   160,   122,     8,    12,   171,   102,     8,
     103,   122,   104,   104,   103,    85,    17,    39,    88,    89,
      90,    91,    92,    93,    99,    18,    83,   127,   128,   104,
      22,    76,    57,     8,   183,   104,   124,    96,   104,   121,
     103,   161,   162,   102,     3,    46,   172,   162,   170,   124,
       8,   120,   122,   123,     9,   103,   122,   123,   122,   123,
     122,   123,   122,   123,   122,   123,   122,   123,    39,   121,
      37,    55,   129,   130,   104,   104,   102,   104,   160,   104,
     104,    85,    85,   124,     9,   103,    55,    18,   133,   162,
     122,    95,   123,   104,   124,    18,    56,   121,   131,   132,
      54,   135,   136,   104,   131,   103,    13,    26,   102,     3,
     137,   138,   104,   132,    88,   102,     3,     5,     8,   103,
     138,   103,     3,   139,   140,     8,    88,   102,   104,   104,
     122,   140
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror (pParser, "syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, pParser)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse ( SqlParser_c * pParser );
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse ( SqlParser_c * pParser )
#else
int
yyparse (pParser)
     SqlParser_c * pParser ;
#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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

    { pParser->PushQuery(); ;}
    break;

  case 22:

    { pParser->PushQuery(); ;}
    break;

  case 23:

    { pParser->PushQuery(); ;}
    break;

  case 26:

    {
			pParser->m_pStmt->m_eStmt = STMT_SELECT;
			pParser->m_pQuery->m_sIndexes.SetBinary ( pParser->m_pBuf+yyvsp[-6].m_iStart, yyvsp[-6].m_iEnd-yyvsp[-6].m_iStart );
		;}
    break;

  case 29:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 32:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 33:

    { pParser->AliasLastItem ( &yyvsp[0] ); ;}
    break;

  case 34:

    { pParser->AddItem ( &yyvsp[0] ); ;}
    break;

  case 35:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_AVG, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 36:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MAX, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 37:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_MIN, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 38:

    { pParser->AddItem ( &yyvsp[-1], SPH_AGGR_SUM, &yyvsp[-3], &yyvsp[0] ); ;}
    break;

  case 39:

    { if ( !pParser->AddItem ( "count(*)", &yyvsp[-3], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 40:

    { if ( !pParser->AddItem ( "weight()", &yyvsp[-2], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 41:

    { if ( !pParser->AddDistinct ( &yyvsp[-1], &yyvsp[-4], &yyvsp[0] ) ) YYERROR; ;}
    break;

  case 43:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 54:

    {
			if ( !pParser->SetMatch(yyvsp[-1]) )
				YYERROR;
		;}
    break;

  case 55:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 56:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-2] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues.Add ( yyvsp[0].m_iValue );
			pFilter->m_bExclude = true;
		;}
    break;

  case 57:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-4] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_dValues.Sort();
		;}
    break;

  case 58:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Sort();
		;}
    break;

  case 59:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_sValue, false ) )
				YYERROR;
		;}
    break;

  case 60:

    {
			if ( !pParser->AddUservarFilter ( yyvsp[-3].m_sValue, yyvsp[0].m_sValue, true ) )
				YYERROR;
		;}
    break;

  case 61:

    {
			if ( !pParser->AddIntRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 62:

    {
			if ( !pParser->AddIntFilterGTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue+1 ) )
				YYERROR;
		;}
    break;

  case 63:

    {
			if ( !pParser->AddIntFilterLTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue-1 ) )
				YYERROR;
		;}
    break;

  case 64:

    {
			if ( !pParser->AddIntFilterGTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 65:

    {
			if ( !pParser->AddIntFilterLTE ( yyvsp[-2].m_sValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 66:

    {
			yyerror ( pParser, "only >=, <=, and BETWEEN floating-point filter types are supported in this version" );
			YYERROR;
		;}
    break;

  case 67:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 68:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 72:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 73:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 74:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 75:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 76:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 77:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 78:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 79:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 80:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 83:

    {
			pParser->SetGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 86:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 89:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 90:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 92:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 94:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 95:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 98:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 99:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 105:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 106:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 107:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 108:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 109:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 110:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 111:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 112:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 114:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 115:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 119:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 120:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 121:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 123:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 124:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 125:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 126:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 127:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 128:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 129:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 130:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 131:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 132:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 133:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 134:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 135:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 136:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 137:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 138:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 140:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 141:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 142:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 143:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 144:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 150:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 151:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 152:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 160:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 161:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 162:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 163:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 164:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 165:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 166:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 169:

    { yyval.m_iValue = 1; ;}
    break;

  case 170:

    { yyval.m_iValue = 0; ;}
    break;

  case 171:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 172:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 173:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 177:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 178:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 179:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 182:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 183:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 186:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 187:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 188:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 189:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 190:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 191:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 192:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 193:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 194:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 195:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 196:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 197:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 198:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 200:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 201:

    {
			// FIXME? for now, one such array per CALL statement, tops
			if ( pParser->m_pStmt->m_dCallStrings.GetLength() )
			{
				yyerror ( pParser, "unexpected constant string list" );
				YYERROR;
			}
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 202:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 205:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 207:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 211:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 212:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 215:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 216:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-3] ) )
				YYERROR;
		;}
    break;

  case 219:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 220:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 221:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 222:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 223:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 230:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 231:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 239:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 240:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 241:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 242:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 243:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sSetName = yyvsp[0].m_sValue;
		;}
    break;

  case 244:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 245:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;


    }

/* Line 991 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 4)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      else
		{
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			snprintf (yyp, (int)(yysize - (yyp - yymsg)), ", expecting %s (or %d other tokens)", yytname[yyx], yycount - 1);
			while (*yyp++);
			break;
		      }
		}

	      yyerror (pParser, yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror (pParser, "syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (pParser, "syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__)
//  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror (pParser, "parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}





#if USE_WINDOWS
#pragma warning(pop)
#endif

