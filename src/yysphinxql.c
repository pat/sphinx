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
     TOK_BAD_NUMERIC = 267,
     TOK_AS = 268,
     TOK_ASC = 269,
     TOK_ATTACH = 270,
     TOK_AVG = 271,
     TOK_BEGIN = 272,
     TOK_BETWEEN = 273,
     TOK_BIGINT = 274,
     TOK_BY = 275,
     TOK_CALL = 276,
     TOK_COLLATION = 277,
     TOK_COMMIT = 278,
     TOK_COMMITTED = 279,
     TOK_COUNT = 280,
     TOK_CREATE = 281,
     TOK_DELETE = 282,
     TOK_DESC = 283,
     TOK_DESCRIBE = 284,
     TOK_DISTINCT = 285,
     TOK_DIV = 286,
     TOK_DROP = 287,
     TOK_FALSE = 288,
     TOK_FLOAT = 289,
     TOK_FLUSH = 290,
     TOK_FROM = 291,
     TOK_FUNCTION = 292,
     TOK_GLOBAL = 293,
     TOK_GROUP = 294,
     TOK_ID = 295,
     TOK_IN = 296,
     TOK_INDEX = 297,
     TOK_INSERT = 298,
     TOK_INT = 299,
     TOK_INTO = 300,
     TOK_ISOLATION = 301,
     TOK_LEVEL = 302,
     TOK_LIMIT = 303,
     TOK_MATCH = 304,
     TOK_MAX = 305,
     TOK_META = 306,
     TOK_MIN = 307,
     TOK_MOD = 308,
     TOK_NAMES = 309,
     TOK_NULL = 310,
     TOK_OPTION = 311,
     TOK_ORDER = 312,
     TOK_RAND = 313,
     TOK_READ = 314,
     TOK_REPEATABLE = 315,
     TOK_REPLACE = 316,
     TOK_RETURNS = 317,
     TOK_ROLLBACK = 318,
     TOK_RTINDEX = 319,
     TOK_SELECT = 320,
     TOK_SERIALIZABLE = 321,
     TOK_SET = 322,
     TOK_SESSION = 323,
     TOK_SHOW = 324,
     TOK_SONAME = 325,
     TOK_START = 326,
     TOK_STATUS = 327,
     TOK_SUM = 328,
     TOK_TABLES = 329,
     TOK_TO = 330,
     TOK_TRANSACTION = 331,
     TOK_TRUE = 332,
     TOK_UNCOMMITTED = 333,
     TOK_UPDATE = 334,
     TOK_VALUES = 335,
     TOK_VARIABLES = 336,
     TOK_WARNINGS = 337,
     TOK_WEIGHT = 338,
     TOK_WHERE = 339,
     TOK_WITHIN = 340,
     TOK_OR = 341,
     TOK_AND = 342,
     TOK_NE = 343,
     TOK_GTE = 344,
     TOK_LTE = 345,
     TOK_NOT = 346,
     TOK_NEG = 347
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
#define TOK_BAD_NUMERIC 267
#define TOK_AS 268
#define TOK_ASC 269
#define TOK_ATTACH 270
#define TOK_AVG 271
#define TOK_BEGIN 272
#define TOK_BETWEEN 273
#define TOK_BIGINT 274
#define TOK_BY 275
#define TOK_CALL 276
#define TOK_COLLATION 277
#define TOK_COMMIT 278
#define TOK_COMMITTED 279
#define TOK_COUNT 280
#define TOK_CREATE 281
#define TOK_DELETE 282
#define TOK_DESC 283
#define TOK_DESCRIBE 284
#define TOK_DISTINCT 285
#define TOK_DIV 286
#define TOK_DROP 287
#define TOK_FALSE 288
#define TOK_FLOAT 289
#define TOK_FLUSH 290
#define TOK_FROM 291
#define TOK_FUNCTION 292
#define TOK_GLOBAL 293
#define TOK_GROUP 294
#define TOK_ID 295
#define TOK_IN 296
#define TOK_INDEX 297
#define TOK_INSERT 298
#define TOK_INT 299
#define TOK_INTO 300
#define TOK_ISOLATION 301
#define TOK_LEVEL 302
#define TOK_LIMIT 303
#define TOK_MATCH 304
#define TOK_MAX 305
#define TOK_META 306
#define TOK_MIN 307
#define TOK_MOD 308
#define TOK_NAMES 309
#define TOK_NULL 310
#define TOK_OPTION 311
#define TOK_ORDER 312
#define TOK_RAND 313
#define TOK_READ 314
#define TOK_REPEATABLE 315
#define TOK_REPLACE 316
#define TOK_RETURNS 317
#define TOK_ROLLBACK 318
#define TOK_RTINDEX 319
#define TOK_SELECT 320
#define TOK_SERIALIZABLE 321
#define TOK_SET 322
#define TOK_SESSION 323
#define TOK_SHOW 324
#define TOK_SONAME 325
#define TOK_START 326
#define TOK_STATUS 327
#define TOK_SUM 328
#define TOK_TABLES 329
#define TOK_TO 330
#define TOK_TRANSACTION 331
#define TOK_TRUE 332
#define TOK_UNCOMMITTED 333
#define TOK_UPDATE 334
#define TOK_VALUES 335
#define TOK_VARIABLES 336
#define TOK_WARNINGS 337
#define TOK_WEIGHT 338
#define TOK_WHERE 339
#define TOK_WITHIN 340
#define TOK_OR 341
#define TOK_AND 342
#define TOK_NE 343
#define TOK_GTE 344
#define TOK_LTE 345
#define TOK_NOT 346
#define TOK_NEG 347




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
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   807

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  89
/* YYNRULES -- Number of rules. */
#define YYNRULES  249
/* YYNRULES -- Number of states. */
#define YYNSTATES  461

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   100,    89,     2,
     105,   106,    98,    96,   104,    97,     2,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   103,
      92,    90,    93,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    88,     2,     2,     2,     2,     2,
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
      85,    86,    87,    91,    94,    95,   101,   102
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
     141,   145,   149,   153,   157,   162,   166,   170,   176,   183,
     187,   192,   198,   202,   206,   210,   214,   216,   222,   228,
     234,   238,   242,   244,   246,   251,   255,   257,   259,   262,
     264,   267,   269,   273,   274,   276,   280,   281,   283,   289,
     290,   292,   296,   302,   304,   308,   310,   313,   316,   317,
     319,   322,   327,   328,   330,   333,   335,   339,   343,   347,
     353,   360,   364,   366,   370,   374,   376,   378,   380,   382,
     384,   386,   389,   392,   396,   400,   404,   408,   412,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   456,
     460,   464,   466,   471,   476,   481,   485,   492,   499,   501,
     505,   507,   509,   512,   514,   516,   518,   520,   522,   524,
     526,   528,   530,   534,   539,   544,   549,   553,   558,   566,
     572,   574,   576,   578,   580,   582,   584,   586,   588,   590,
     593,   600,   602,   604,   605,   609,   611,   615,   617,   621,
     625,   627,   631,   633,   635,   637,   641,   644,   652,   662,
     669,   671,   675,   677,   681,   683,   687,   688,   691,   693,
     697,   701,   702,   704,   706,   708,   711,   713,   715,   718,
     724,   726,   730,   734,   738,   744,   749,   754,   755,   757,
     760,   762,   766,   770,   773,   780,   781,   783,   785,   788,
     791,   794,   796,   804,   806,   808,   810,   814,   821,   825
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     108,     0,    -1,   109,    -1,   110,    -1,   110,   103,    -1,
     157,    -1,   165,    -1,   151,    -1,   152,    -1,   155,    -1,
     166,    -1,   175,    -1,   177,    -1,   178,    -1,   181,    -1,
     186,    -1,   190,    -1,   192,    -1,   193,    -1,   194,    -1,
     187,    -1,   195,    -1,   111,    -1,   110,   103,   111,    -1,
     112,    -1,   147,    -1,    65,   113,    36,   117,   118,   127,
     129,   131,   135,   137,    -1,   114,    -1,   113,   104,   114,
      -1,    98,    -1,   116,   115,    -1,    -1,     3,    -1,    13,
       3,    -1,   143,    -1,    16,   105,   143,   106,    -1,    50,
     105,   143,   106,    -1,    52,   105,   143,   106,    -1,    73,
     105,   143,   106,    -1,    25,   105,    98,   106,    -1,    83,
     105,   106,    -1,    25,   105,    30,     3,   106,    -1,     3,
      -1,   117,   104,     3,    -1,    -1,   119,    -1,    84,   120,
      -1,   122,    -1,   120,    87,   120,    -1,   105,   120,   106,
      -1,   123,    90,   125,    -1,   123,    91,   125,    -1,   123,
      93,   125,    -1,   123,    92,   125,    -1,    49,   105,     8,
     106,    -1,   123,    90,   124,    -1,   123,    91,   124,    -1,
     123,    41,   105,   126,   106,    -1,   123,   101,    41,   105,
     126,   106,    -1,   123,    41,     9,    -1,   123,   101,    41,
       9,    -1,   123,    18,   124,    87,   124,    -1,   123,    93,
     124,    -1,   123,    92,   124,    -1,   123,    94,   124,    -1,
     123,    95,   124,    -1,   121,    -1,   123,    18,   125,    87,
     125,    -1,   123,    18,   124,    87,   125,    -1,   123,    18,
     125,    87,   124,    -1,   123,    94,   125,    -1,   123,    95,
     125,    -1,     3,    -1,     4,    -1,    25,   105,    98,   106,
      -1,    83,   105,   106,    -1,    40,    -1,     5,    -1,    97,
       5,    -1,     6,    -1,    97,     6,    -1,   124,    -1,   126,
     104,   124,    -1,    -1,   128,    -1,    39,    20,   123,    -1,
      -1,   130,    -1,    85,    39,    57,    20,   133,    -1,    -1,
     132,    -1,    57,    20,   133,    -1,    57,    20,    58,   105,
     106,    -1,   134,    -1,   133,   104,   134,    -1,   123,    -1,
     123,    14,    -1,   123,    28,    -1,    -1,   136,    -1,    48,
       5,    -1,    48,     5,   104,     5,    -1,    -1,   138,    -1,
      56,   139,    -1,   140,    -1,   139,   104,   140,    -1,     3,
      90,     3,    -1,     3,    90,     5,    -1,     3,    90,   105,
     141,   106,    -1,     3,    90,     3,   105,     8,   106,    -1,
       3,    90,     8,    -1,   142,    -1,   141,   104,   142,    -1,
       3,    90,   124,    -1,     3,    -1,     4,    -1,    40,    -1,
       5,    -1,     6,    -1,     9,    -1,    97,   143,    -1,   101,
     143,    -1,   143,    96,   143,    -1,   143,    97,   143,    -1,
     143,    98,   143,    -1,   143,    99,   143,    -1,   143,    92,
     143,    -1,   143,    93,   143,    -1,   143,    89,   143,    -1,
     143,    88,   143,    -1,   143,   100,   143,    -1,   143,    31,
     143,    -1,   143,    53,   143,    -1,   143,    95,   143,    -1,
     143,    94,   143,    -1,   143,    90,   143,    -1,   143,    91,
     143,    -1,   143,    87,   143,    -1,   143,    86,   143,    -1,
     105,   143,   106,    -1,   144,    -1,     3,   105,   145,   106,
      -1,    41,   105,   145,   106,    -1,    19,   105,   145,   106,
      -1,     3,   105,   106,    -1,    52,   105,   143,   104,   143,
     106,    -1,    50,   105,   143,   104,   143,   106,    -1,   146,
      -1,   145,   104,   146,    -1,   143,    -1,     8,    -1,    69,
     148,    -1,    82,    -1,    72,    -1,    51,    -1,     3,    -1,
      55,    -1,     8,    -1,     5,    -1,     6,    -1,   149,    -1,
     150,    97,   149,    -1,    67,     3,    90,   154,    -1,    67,
       3,    90,   153,    -1,    67,     3,    90,    55,    -1,    67,
      54,   150,    -1,    67,    10,    90,   150,    -1,    67,    38,
       9,    90,   105,   126,   106,    -1,    67,    38,     3,    90,
     153,    -1,     3,    -1,     8,    -1,    77,    -1,    33,    -1,
     124,    -1,    23,    -1,    63,    -1,   156,    -1,    17,    -1,
      71,    76,    -1,   158,    45,     3,   159,    80,   161,    -1,
      43,    -1,    61,    -1,    -1,   105,   160,   106,    -1,   123,
      -1,   160,   104,   123,    -1,   162,    -1,   161,   104,   162,
      -1,   105,   163,   106,    -1,   164,    -1,   163,   104,   164,
      -1,   124,    -1,   125,    -1,     8,    -1,   105,   126,   106,
      -1,   105,   106,    -1,    27,    36,     3,    84,    40,    90,
     124,    -1,    27,    36,     3,    84,    40,    41,   105,   126,
     106,    -1,    21,     3,   105,   167,   170,   106,    -1,   168,
      -1,   167,   104,   168,    -1,   164,    -1,   105,   169,   106,
      -1,     8,    -1,   169,   104,     8,    -1,    -1,   104,   171,
      -1,   172,    -1,   171,   104,   172,    -1,   164,   173,   174,
      -1,    -1,    13,    -1,     3,    -1,    48,    -1,   176,     3,
      -1,    29,    -1,    28,    -1,    69,    74,    -1,    79,   117,
      67,   179,   119,    -1,   180,    -1,   179,   104,   180,    -1,
       3,    90,   124,    -1,     3,    90,   125,    -1,     3,    90,
     105,   126,   106,    -1,     3,    90,   105,   106,    -1,    69,
     188,    81,   182,    -1,    -1,   183,    -1,    84,   184,    -1,
     185,    -1,   184,    86,   185,    -1,     3,    90,     8,    -1,
      69,    22,    -1,    67,   188,    76,    46,    47,   189,    -1,
      -1,    38,    -1,    68,    -1,    59,    78,    -1,    59,    24,
      -1,    60,    59,    -1,    66,    -1,    26,    37,     3,    62,
     191,    70,     8,    -1,    44,    -1,    19,    -1,    34,    -1,
      32,    37,     3,    -1,    15,    42,     3,    75,    64,     3,
      -1,    35,    64,     3,    -1,    65,    10,   135,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   121,   121,   122,   123,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   149,   150,   154,   155,   159,   174,   175,   179,
     180,   183,   185,   186,   190,   191,   192,   193,   194,   195,
     196,   197,   201,   202,   205,   207,   211,   215,   216,   217,
     221,   222,   223,   224,   228,   233,   240,   248,   256,   265,
     270,   275,   280,   285,   290,   295,   300,   305,   310,   315,
     320,   325,   333,   334,   339,   345,   351,   360,   361,   372,
     373,   377,   383,   389,   391,   395,   401,   403,   407,   413,
     415,   419,   423,   430,   431,   435,   436,   437,   440,   442,
     446,   451,   458,   460,   464,   468,   469,   473,   478,   483,
     489,   494,   502,   507,   514,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   545,   546,   547,   548,
     549,   550,   554,   555,   556,   557,   558,   559,   563,   564,
     568,   569,   575,   579,   580,   581,   587,   588,   589,   590,
     591,   595,   596,   600,   605,   610,   615,   616,   620,   625,
     633,   634,   638,   639,   640,   654,   655,   656,   660,   661,
     667,   675,   676,   679,   681,   685,   686,   690,   691,   695,
     699,   700,   704,   705,   706,   707,   708,   714,   720,   732,
     740,   744,   751,   752,   759,   769,   775,   777,   781,   786,
     790,   797,   799,   803,   804,   810,   818,   819,   825,   831,
     839,   840,   844,   848,   852,   856,   866,   872,   873,   877,
     881,   882,   886,   890,   897,   903,   904,   905,   909,   910,
     911,   912,   918,   929,   930,   931,   935,   946,   958,   969
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
  "TOK_BAD_NUMERIC", "TOK_AS", "TOK_ASC", "TOK_ATTACH", "TOK_AVG", 
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BIGINT", "TOK_BY", "TOK_CALL", 
  "TOK_COLLATION", "TOK_COMMIT", "TOK_COMMITTED", "TOK_COUNT", 
  "TOK_CREATE", "TOK_DELETE", "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", 
  "TOK_DIV", "TOK_DROP", "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", 
  "TOK_FROM", "TOK_FUNCTION", "TOK_GLOBAL", "TOK_GROUP", "TOK_ID", 
  "TOK_IN", "TOK_INDEX", "TOK_INSERT", "TOK_INT", "TOK_INTO", 
  "TOK_ISOLATION", "TOK_LEVEL", "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", 
  "TOK_META", "TOK_MIN", "TOK_MOD", "TOK_NAMES", "TOK_NULL", "TOK_OPTION", 
  "TOK_ORDER", "TOK_RAND", "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE", 
  "TOK_RETURNS", "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", 
  "TOK_SERIALIZABLE", "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", 
  "TOK_START", "TOK_STATUS", "TOK_SUM", "TOK_TABLES", "TOK_TO", 
  "TOK_TRANSACTION", "TOK_TRUE", "TOK_UNCOMMITTED", "TOK_UPDATE", 
  "TOK_VALUES", "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", 
  "TOK_WHERE", "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", 
  "TOK_NE", "'<'", "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "TOK_NOT", "TOK_NEG", "';'", "','", "'('", "')'", 
  "$accept", "request", "statement", "multi_stmt_list", "multi_stmt", 
  "select_from", "select_items_list", "select_item", "opt_alias", 
  "select_expr", "ident_list", "opt_where_clause", "where_clause", 
  "where_expr", "expr_float_unhandled", "where_item", "expr_ident", 
  "const_int", "const_float", "const_list", "opt_group_clause", 
  "group_clause", "opt_group_order_clause", "group_order_clause", 
  "opt_order_clause", "order_clause", "order_items_list", "order_item", 
  "opt_limit_clause", "limit_clause", "opt_option_clause", 
  "option_clause", "option_list", "option_item", "named_const_list", 
  "named_const", "expr", "function", "arglist", "arg", "show_stmt", 
  "show_what", "simple_set_value", "set_value", "set_stmt", 
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
     335,   336,   337,   338,   339,   340,   341,   342,   124,    38,
      61,   343,    60,    62,   344,   345,    43,    45,    42,    47,
      37,   346,   347,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   107,   108,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   120,   120,   120,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   132,   132,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   138,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   144,   144,   144,   144,   144,   144,   145,   145,
     146,   146,   147,   148,   148,   148,   149,   149,   149,   149,
     149,   150,   150,   151,   151,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   155,   156,   156,
     157,   158,   158,   159,   159,   160,   160,   161,   161,   162,
     163,   163,   164,   164,   164,   164,   164,   165,   165,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   173,   173,   174,   174,   175,   176,   176,   177,   178,
     179,   179,   180,   180,   180,   180,   181,   182,   182,   183,
     184,   184,   185,   186,   187,   188,   188,   188,   189,   189,
     189,   189,   190,   191,   191,   191,   192,   193,   194,   195
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,    10,     1,     3,     1,
       2,     0,     1,     2,     1,     4,     4,     4,     4,     4,
       3,     5,     1,     3,     0,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     5,     6,     3,
       4,     5,     3,     3,     3,     3,     1,     5,     5,     5,
       3,     3,     1,     1,     4,     3,     1,     1,     2,     1,
       2,     1,     3,     0,     1,     3,     0,     1,     5,     0,
       1,     3,     5,     1,     3,     1,     2,     2,     0,     1,
       2,     4,     0,     1,     2,     1,     3,     3,     3,     5,
       6,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     4,     4,     3,     6,     6,     1,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     4,     3,     4,     7,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       6,     1,     1,     0,     3,     1,     3,     1,     3,     3,
       1,     3,     1,     1,     1,     3,     2,     7,     9,     6,
       1,     3,     1,     3,     1,     3,     0,     2,     1,     3,
       3,     0,     1,     1,     1,     2,     1,     1,     2,     5,
       1,     3,     3,     3,     5,     4,     4,     0,     1,     2,
       1,     3,     3,     2,     6,     0,     1,     1,     2,     2,
       2,     1,     7,     1,     1,     1,     3,     6,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,   178,     0,   175,     0,     0,   217,   216,     0,
       0,   181,   182,   176,     0,   235,   235,     0,     0,     0,
       2,     3,    22,    24,    25,     7,     8,     9,   177,     5,
       0,     6,    10,    11,     0,    12,    13,    14,    15,    20,
      16,    17,    18,    19,    21,     0,     0,     0,     0,     0,
       0,   115,   116,   118,   119,   120,    98,     0,     0,     0,
     117,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,    27,    31,    34,   141,     0,     0,   236,     0,   237,
       0,   233,   236,   155,   154,   218,   153,   152,     0,   179,
      42,     0,     1,     4,     0,   215,     0,     0,     0,     0,
     246,   248,     0,     0,   249,    99,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,     0,     0,
       0,    32,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   156,   159,   160,   158,   157,
     161,   166,     0,   227,     0,     0,     0,     0,    23,   183,
       0,    77,    79,   194,     0,     0,   192,   193,   202,   206,
     200,     0,     0,   151,   145,   150,     0,   148,   100,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
     140,    44,    28,    33,   132,   133,   139,   138,   130,   129,
     136,   137,   127,   128,   135,   134,   123,   124,   125,   126,
     131,   170,   171,   173,   165,   172,     0,   174,   164,   163,
     167,     0,     0,     0,     0,     0,   226,   228,     0,     0,
     220,    43,     0,     0,     0,    78,    80,   204,   196,    81,
       0,     0,     0,     0,   244,   245,   243,     0,     0,     0,
     142,     0,    35,   144,     0,    39,   143,     0,    36,     0,
      37,    38,     0,     0,     0,    83,    45,   169,     0,   162,
       0,     0,   229,   230,     0,     0,   219,    72,    73,     0,
      76,     0,   185,     0,     0,   247,     0,   195,     0,   203,
     202,   201,   207,   208,   199,     0,     0,     0,   149,   101,
      41,     0,     0,     0,     0,    46,    66,    47,     0,     0,
      86,    84,     0,     0,     0,   241,   234,     0,     0,     0,
     222,   223,   221,     0,     0,     0,   184,     0,   180,   187,
      82,   205,   212,     0,     0,   242,     0,   197,   147,   146,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    89,    87,   168,   239,   238,   240,
     232,   231,   225,     0,     0,    75,   186,     0,     0,   190,
       0,   213,   214,   210,   211,   209,     0,     0,    49,    48,
       0,     0,    59,     0,    55,    50,    56,    51,    63,    53,
      62,    52,    64,    70,    65,    71,     0,    85,     0,     0,
      98,    90,   224,    74,     0,   189,   188,   198,    54,     0,
       0,     0,    60,     0,     0,     0,   102,   191,    61,    68,
      69,    67,    57,     0,     0,     0,    95,    91,    93,     0,
      26,   103,    58,    88,     0,    96,    97,     0,     0,   104,
     105,    92,    94,     0,     0,   107,   108,   111,     0,   106,
       0,     0,     0,   112,     0,     0,     0,   109,   110,   114,
     113
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    70,    71,   123,    72,
      91,   265,   266,   305,   306,   307,   308,   239,   167,   240,
     310,   311,   354,   355,   400,   401,   427,   428,   104,   105,
     430,   431,   439,   440,   452,   453,   175,    74,   176,   177,
      24,    87,   150,   151,    25,    26,   218,   219,    27,    28,
      29,    30,   233,   283,   328,   329,   368,   168,    31,    32,
     169,   170,   241,   243,   292,   293,   333,   373,    33,    34,
      35,    36,   229,   230,    37,   226,   227,   272,   273,    38,
      39,    80,   316,    40,   247,    41,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -276
static const short yypact[] =
{
     728,   -11,  -276,    53,  -276,    35,    79,  -276,  -276,   125,
      25,  -276,  -276,  -276,   188,   173,    13,    85,   170,   174,
    -276,    92,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
     164,  -276,  -276,  -276,   218,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   219,   121,   233,   239,   244,
     266,   178,  -276,  -276,  -276,  -276,   227,   179,   182,   186,
    -276,   187,   203,   204,   205,   206,   320,  -276,   320,   320,
     -30,  -276,    40,   545,  -276,   224,   225,    93,    33,  -276,
     255,  -276,  -276,  -276,  -276,  -276,  -276,  -276,   249,  -276,
    -276,   -34,  -276,    87,   317,  -276,   258,    15,   273,   252,
    -276,  -276,   138,   333,  -276,  -276,   320,   313,    -8,   313,
     320,   320,   320,   251,   257,   259,  -276,  -276,   373,   170,
     254,  -276,   363,  -276,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   200,    33,   277,   278,  -276,  -276,  -276,  -276,  -276,
    -276,   272,   325,   289,   371,   372,   254,   124,  -276,   271,
     321,  -276,  -276,  -276,    42,     0,  -276,  -276,  -276,   280,
    -276,   136,   346,  -276,  -276,   545,    65,  -276,   283,   400,
      78,   403,   302,   108,   303,   352,   423,  -276,   320,   320,
    -276,   -54,  -276,  -276,  -276,  -276,   568,   594,   617,   250,
     642,   642,   119,   119,   119,   119,   -16,   -16,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,   406,  -276,  -276,  -276,
     272,    97,   307,    33,   366,   412,  -276,  -276,   326,   -52,
    -276,  -276,    21,   339,   417,  -276,  -276,  -276,  -276,  -276,
     128,   158,    15,   316,  -276,  -276,  -276,   353,     1,   313,
    -276,   419,  -276,  -276,   322,  -276,  -276,   320,  -276,   320,
    -276,  -276,   497,   520,     9,   388,  -276,  -276,     2,  -276,
     165,   340,   343,  -276,    63,   371,  -276,  -276,  -276,   327,
    -276,   328,  -276,   161,   329,  -276,     2,  -276,   427,  -276,
     151,  -276,   332,  -276,  -276,   429,   350,     2,  -276,  -276,
    -276,   449,   472,   369,     9,   370,  -276,  -276,   287,   455,
     392,  -276,   168,    16,   422,  -276,  -276,   470,   412,     4,
    -276,  -276,  -276,   384,   377,    21,  -276,    54,   380,  -276,
    -276,  -276,  -276,     7,    54,  -276,     2,  -276,  -276,  -276,
     477,   -61,     9,    22,    -7,    22,    22,    22,    22,    22,
      22,   460,    21,   465,   448,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,   172,   401,  -276,  -276,    52,   176,  -276,
     329,  -276,  -276,  -276,   495,  -276,   184,   418,  -276,  -276,
     439,   440,  -276,     2,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,     8,  -276,   473,   511,
     227,  -276,  -276,  -276,    54,  -276,  -276,  -276,  -276,    22,
      22,   192,  -276,     2,   512,   162,   478,  -276,  -276,  -276,
    -276,  -276,  -276,   195,    21,   428,   153,   450,  -276,   549,
    -276,  -276,  -276,   450,   447,  -276,  -276,    21,   466,   453,
    -276,  -276,  -276,    11,   549,   469,  -276,  -276,   572,  -276,
     569,   489,   196,  -276,   474,     2,   572,  -276,  -276,  -276,
    -276
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -276,  -276,  -276,  -276,   488,  -276,  -276,   462,  -276,  -276,
     481,  -276,   374,  -275,  -276,  -276,  -214,   -97,  -270,  -265,
    -276,  -276,  -276,  -276,  -276,  -276,   180,   185,   202,  -276,
    -276,  -276,  -276,   183,  -276,   149,    -3,  -276,   159,   379,
    -276,  -276,   407,   484,  -276,  -276,   402,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   276,  -276,  -241,  -276,  -276,
    -276,   387,  -276,  -276,  -276,   315,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,   375,  -276,  -276,  -276,  -276,   334,  -276,
    -276,   635,  -276,  -276,  -276,  -276,  -276,  -276,  -276
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -212
static const short yytable[] =
{
     166,   290,   382,   312,   321,   161,   119,   161,   237,   161,
     371,    73,   277,   278,   445,   124,   446,   412,   282,   447,
     161,   162,   181,   163,   277,   278,   342,   161,   162,   341,
     264,    45,   264,   154,   279,    81,   145,   125,   146,   147,
     357,   148,   296,   121,   217,   378,   279,   235,   236,   280,
     155,    82,   275,   122,   363,   372,    46,   161,   303,   161,
     162,   280,   163,   116,    83,   117,   118,   379,   161,   162,
     155,   376,    47,   381,   120,   385,   387,   389,   391,   393,
     395,    79,   138,   139,   140,    84,   369,    85,   149,    50,
     182,   297,   281,   374,   358,    86,   143,   216,   383,   216,
     211,   216,   144,   179,   281,   212,   238,   184,   185,   186,
     362,   366,   164,   413,   304,    48,   448,    73,   411,   164,
     165,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   397,   419,
     421,    51,    52,    53,    54,   166,   173,    55,   423,   216,
     124,   164,   156,    73,  -211,   244,   157,    58,   238,   367,
     164,    89,    49,   417,   332,   277,   278,   435,   319,   249,
     245,   250,   125,    90,    92,    83,    75,   320,    60,    61,
     246,   436,   249,    76,   253,   262,   263,   279,   114,   330,
     115,    51,    52,    53,    54,    93,    84,    55,    56,  -211,
     337,   426,   280,   211,    57,   161,    86,    58,   212,    94,
     426,    77,   249,    59,   256,   136,   137,   138,   139,   140,
     425,    95,    96,   426,   313,   314,    97,    78,    60,    61,
     166,   315,   286,   213,   287,    66,    98,   166,    62,    68,
      63,    79,    99,    69,   174,   281,   380,   100,   384,   386,
     388,   390,   392,   394,   301,   214,   302,    51,    52,    53,
      54,    64,   288,    55,   289,   325,   180,   326,   183,   101,
      57,    65,   286,    58,   356,   103,   286,   215,   402,    59,
     404,   124,   405,   102,   106,    66,    67,   107,   286,    68,
     407,   108,   109,    69,    60,    61,   286,   216,   422,   286,
     456,   432,   457,   125,    62,   343,    63,   166,   110,   111,
     112,   113,   418,   420,   141,   142,    51,    52,    53,    54,
     159,   173,    55,    51,    52,    53,    54,    64,   344,    55,
     153,   152,    58,   160,   124,   171,   172,    65,   178,    58,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    66,    67,    60,    61,    68,   125,   187,   459,    69,
      60,    61,   188,   114,   189,   115,   193,   221,   222,   223,
     114,   224,   115,   225,   228,   231,   232,   345,   346,   347,
     348,   349,   350,   124,   242,   234,   248,   251,   351,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   124,   125,   254,   257,   255,   258,
      66,   235,   268,   270,    68,   271,   274,    66,    69,   284,
     285,    68,   294,   295,   299,    69,   125,   309,   300,   318,
     317,   124,   323,   324,   327,   331,   334,   335,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   125,   124,   336,   259,   342,   260,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   340,   352,   125,   353,   360,   190,
     124,   359,   364,   365,   370,   377,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   396,   125,   124,   398,   399,   252,   403,   332,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   408,   125,   409,   410,   124,   261,
     414,   415,   424,   434,   429,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     125,   124,   438,   441,   437,   338,   443,   444,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   125,   450,   451,   124,   454,   339,   455,
     458,   158,   192,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   125,   124,
     191,   257,   416,   276,   433,   460,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   125,   442,   267,   259,   124,   220,   449,   298,   291,
     269,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   406,   125,   124,   375,
     322,    88,   361,     0,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,     0,
     125,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     1,     0,     2,     0,     0,     0,     3,
       0,     4,     0,     0,     5,     6,     7,     8,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,    13,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,     0,     0,     0,     0,     0,    18
};

static const short yycheck[] =
{
      97,   242,     9,   268,   274,     5,    36,     5,     8,     5,
       3,    14,     3,     4,     3,    31,     5,     9,   232,     8,
       5,     6,    30,     8,     3,     4,    87,     5,     6,   304,
      84,    42,    84,    67,    25,    22,     3,    53,     5,     6,
      24,     8,    41,     3,   141,   106,    25,     5,     6,    40,
     104,    38,   104,    13,   319,    48,     3,     5,    49,     5,
       6,    40,     8,    66,    51,    68,    69,   342,     5,     6,
     104,   336,    37,   343,   104,   345,   346,   347,   348,   349,
     350,    68,    98,    99,   100,    72,   327,    74,    55,    64,
      98,    90,    83,   334,    78,    82,     3,    97,   105,    97,
       3,    97,     9,   106,    83,     8,   106,   110,   111,   112,
     106,   325,    97,   105,   105,    36,   105,   120,   383,    97,
     105,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   352,   409,
     410,     3,     4,     5,     6,   242,     8,     9,   413,    97,
      31,    97,    65,   156,     3,    19,    69,    19,   106,   105,
      97,    76,    37,   404,    13,     3,     4,    14,   105,   104,
      34,   106,    53,     3,     0,    51,     3,   274,    40,    41,
      44,    28,   104,    10,   106,   188,   189,    25,    50,   286,
      52,     3,     4,     5,     6,   103,    72,     9,    10,    48,
     297,   415,    40,     3,    16,     5,    82,    19,     8,    45,
     424,    38,   104,    25,   106,    96,    97,    98,    99,   100,
      58,     3,     3,   437,    59,    60,   105,    54,    40,    41,
     327,    66,   104,    33,   106,    97,     3,   334,    50,   101,
      52,    68,     3,   105,   106,    83,   343,     3,   345,   346,
     347,   348,   349,   350,   257,    55,   259,     3,     4,     5,
       6,    73,   104,     9,   106,   104,   107,   106,   109,     3,
      16,    83,   104,    19,   106,    48,   104,    77,   106,    25,
     104,    31,   106,   105,   105,    97,    98,   105,   104,   101,
     106,   105,   105,   105,    40,    41,   104,    97,   106,   104,
     104,   106,   106,    53,    50,    18,    52,   404,   105,   105,
     105,   105,   409,   410,    90,    90,     3,     4,     5,     6,
       3,     8,     9,     3,     4,     5,     6,    73,    41,     9,
      81,    76,    19,    75,    31,    62,    84,    83,     5,    19,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    97,    98,    40,    41,   101,    53,   106,   455,   105,
      40,    41,   105,    50,   105,    52,     3,    90,    90,    97,
      50,    46,    52,    84,     3,     3,   105,    90,    91,    92,
      93,    94,    95,    31,   104,    64,    40,   104,   101,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,    31,    53,     3,   104,   106,   106,
      97,     5,   105,    47,   101,     3,    90,    97,   105,    80,
       3,   101,   106,    70,     5,   105,    53,    39,   106,    86,
      90,    31,   105,   105,   105,     8,   104,     8,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    53,    31,   105,   104,    87,   106,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   105,    20,    53,    85,     8,   106,
      31,    59,    98,   106,   104,     8,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    41,    53,    31,    39,    57,   106,   106,    13,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   106,    53,    87,    87,    31,   106,
      57,    20,    20,   105,    56,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      53,    31,     3,   106,   104,   106,    90,   104,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    53,   105,     3,    31,     8,   106,    90,
     106,    93,   120,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    53,    31,
     119,   104,   400,   229,   424,   456,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    53,   437,   221,   104,    31,   142,   444,   249,   242,
     223,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   370,    53,    31,   334,
     275,    16,   318,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      53,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    15,    -1,    17,    -1,    -1,    -1,    21,
      -1,    23,    -1,    -1,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    -1,    65,    -1,    67,    -1,    69,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    15,    17,    21,    23,    26,    27,    28,    29,    32,
      35,    43,    61,    63,    65,    67,    69,    71,    79,   108,
     109,   110,   111,   112,   147,   151,   152,   155,   156,   157,
     158,   165,   166,   175,   176,   177,   178,   181,   186,   187,
     190,   192,   193,   194,   195,    42,     3,    37,    36,    37,
      64,     3,     4,     5,     6,     9,    10,    16,    19,    25,
      40,    41,    50,    52,    73,    83,    97,    98,   101,   105,
     113,   114,   116,   143,   144,     3,    10,    38,    54,    68,
     188,    22,    38,    51,    72,    74,    82,   148,   188,    76,
       3,   117,     0,   103,    45,     3,     3,   105,     3,     3,
       3,     3,   105,    48,   135,   136,   105,   105,   105,   105,
     105,   105,   105,   105,    50,    52,   143,   143,   143,    36,
     104,     3,    13,   115,    31,    53,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,    90,    90,     3,     9,     3,     5,     6,     8,    55,
     149,   150,    76,    81,    67,   104,    65,    69,   111,     3,
      75,     5,     6,     8,    97,   105,   124,   125,   164,   167,
     168,    62,    84,     8,   106,   143,   145,   146,     5,   143,
     145,    30,    98,   145,   143,   143,   143,   106,   105,   105,
     106,   117,   114,     3,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,     3,     8,    33,    55,    77,    97,   124,   153,   154,
     150,    90,    90,    97,    46,    84,   182,   183,     3,   179,
     180,     3,   105,   159,    64,     5,     6,     8,   106,   124,
     126,   169,   104,   170,    19,    34,    44,   191,    40,   104,
     106,   104,   106,   106,     3,   106,   106,   104,   106,   104,
     106,   106,   143,   143,    84,   118,   119,   153,   105,   149,
      47,     3,   184,   185,    90,   104,   119,     3,     4,    25,
      40,    83,   123,   160,    80,     3,   104,   106,   104,   106,
     164,   168,   171,   172,   106,    70,    41,    90,   146,     5,
     106,   143,   143,    49,   105,   120,   121,   122,   123,    39,
     127,   128,   126,    59,    60,    66,   189,    90,    86,   105,
     124,   125,   180,   105,   105,   104,   106,   105,   161,   162,
     124,     8,    13,   173,   104,     8,   105,   124,   106,   106,
     105,   120,    87,    18,    41,    90,    91,    92,    93,    94,
      95,   101,    20,    85,   129,   130,   106,    24,    78,    59,
       8,   185,   106,   126,    98,   106,   123,   105,   163,   164,
     104,     3,    48,   174,   164,   172,   126,     8,   106,   120,
     124,   125,     9,   105,   124,   125,   124,   125,   124,   125,
     124,   125,   124,   125,   124,   125,    41,   123,    39,    57,
     131,   132,   106,   106,   104,   106,   162,   106,   106,    87,
      87,   126,     9,   105,    57,    20,   135,   164,   124,   125,
     124,   125,   106,   126,    20,    58,   123,   133,   134,    56,
     137,   138,   106,   133,   105,    14,    28,   104,     3,   139,
     140,   106,   134,    90,   104,     3,     5,     8,   105,   140,
     105,     3,   141,   142,     8,    90,   104,   106,   106,   124,
     142
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
			pFilter->m_dValues.Uniq();
		;}
    break;

  case 58:

    {
			CSphFilterSettings * pFilter = pParser->AddValuesFilter ( yyvsp[-5] );
			if ( !pFilter )
				YYERROR;
			pFilter->m_dValues = *yyvsp[-1].m_pValues.Ptr();
			pFilter->m_bExclude = true;
			pFilter->m_dValues.Uniq();
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
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_iValue, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 69:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-4].m_sValue, yyvsp[-2].m_fValue, yyvsp[0].m_iValue ) )
				YYERROR;
		;}
    break;

  case 70:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, yyvsp[0].m_fValue, FLT_MAX ) )
				YYERROR;
		;}
    break;

  case 71:

    {
			if ( !pParser->AddFloatRangeFilter ( yyvsp[-2].m_sValue, -FLT_MAX, yyvsp[0].m_fValue ) )
				YYERROR;
		;}
    break;

  case 73:

    {
			if ( !pParser->SetOldSyntax() )
				YYERROR;
		;}
    break;

  case 74:

    {
			yyval.m_sValue = "@count";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 75:

    {
			yyval.m_sValue = "@weight";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 76:

    {
			yyval.m_sValue = "@id";
			if ( !pParser->SetNewSyntax() )
				YYERROR;
		;}
    break;

  case 77:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 78:

    {
			yyval.m_iInstype = TOK_CONST_INT;
			if ( (uint64_t)yyvsp[0].m_iValue > (uint64_t)LLONG_MAX )
				yyval.m_iValue = LLONG_MIN;
			else
				yyval.m_iValue = -yyvsp[0].m_iValue;
		;}
    break;

  case 79:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 80:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = -yyvsp[0].m_fValue; ;}
    break;

  case 81:

    {
			assert ( !yyval.m_pValues.Ptr() );
			yyval.m_pValues = new RefcountedVector_c<SphAttr_t> ();
			yyval.m_pValues->Add ( yyvsp[0].m_iValue ); 
		;}
    break;

  case 82:

    {
			yyval.m_pValues->Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 85:

    {
			pParser->SetGroupBy ( yyvsp[0].m_sValue );
		;}
    break;

  case 88:

    {
			pParser->m_pQuery->m_sSortBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 91:

    {
			pParser->m_pQuery->m_sOrderBy.SetBinary ( pParser->m_pBuf+yyvsp[0].m_iStart, yyvsp[0].m_iEnd-yyvsp[0].m_iStart );
		;}
    break;

  case 92:

    {
			pParser->m_pQuery->m_sOrderBy = "@random";
		;}
    break;

  case 94:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 96:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 97:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 100:

    {
			pParser->m_pQuery->m_iOffset = 0;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 101:

    {
			pParser->m_pQuery->m_iOffset = yyvsp[-2].m_iValue;
			pParser->m_pQuery->m_iLimit = yyvsp[0].m_iValue;
		;}
    break;

  case 107:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 108:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 109:

    {
			if ( !pParser->AddOption ( yyvsp[-4], pParser->GetNamedVec ( yyvsp[-1].m_iValue ) ) )
				YYERROR;
			pParser->FreeNamedVec ( yyvsp[-1].m_iValue );
		;}
    break;

  case 110:

    {
			if ( !pParser->AddOption ( yyvsp[-5], yyvsp[-2], yyvsp[-1].m_sValue ) )
				YYERROR;
		;}
    break;

  case 111:

    {
			if ( !pParser->AddOption ( yyvsp[-2], yyvsp[0] ) )
				YYERROR;
		;}
    break;

  case 112:

    {
			yyval.m_iValue = pParser->AllocNamedVec ();
			pParser->AddConst ( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 113:

    {
			pParser->AddConst( yyval.m_iValue, yyvsp[0] );
		;}
    break;

  case 114:

    {
			yyval.m_sValue = yyvsp[-2].m_sValue;
			yyval.m_iValue = yyvsp[0].m_iValue;
		;}
    break;

  case 116:

    { if ( !pParser->SetOldSyntax() ) YYERROR; ;}
    break;

  case 117:

    { if ( !pParser->SetNewSyntax() ) YYERROR; ;}
    break;

  case 121:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 122:

    { yyval = yyvsp[-1]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
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

  case 139:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 140:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 142:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 143:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 144:

    { yyval = yyvsp[-3]; yyval.m_iEnd = yyvsp[0].m_iEnd; ;}
    break;

  case 145:

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 146:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 147:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 153:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 154:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 155:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 163:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 164:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 165:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 166:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 167:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 168:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 169:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 172:

    { yyval.m_iValue = 1; ;}
    break;

  case 173:

    { yyval.m_iValue = 0; ;}
    break;

  case 174:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 177:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 180:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 181:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 182:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 185:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 186:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 189:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 190:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 191:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 192:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 193:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 194:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 195:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 196:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 197:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 198:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 199:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 200:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 201:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 203:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 204:

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

  case 205:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 208:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 210:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 214:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 215:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 218:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 219:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-3] ) )
				YYERROR;
		;}
    break;

  case 222:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 223:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 224:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 225:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 226:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 233:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 234:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 242:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 243:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 244:

    { yyval.m_iValue = SPH_ATTR_BIGINT; ;}
    break;

  case 245:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 246:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 247:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sSetName = yyvsp[0].m_sValue;
		;}
    break;

  case 248:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 249:

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

