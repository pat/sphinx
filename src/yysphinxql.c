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
     TOK_BY = 274,
     TOK_CALL = 275,
     TOK_COLLATION = 276,
     TOK_COMMIT = 277,
     TOK_COMMITTED = 278,
     TOK_COUNT = 279,
     TOK_CREATE = 280,
     TOK_DELETE = 281,
     TOK_DESC = 282,
     TOK_DESCRIBE = 283,
     TOK_DISTINCT = 284,
     TOK_DIV = 285,
     TOK_DROP = 286,
     TOK_FALSE = 287,
     TOK_FLOAT = 288,
     TOK_FLUSH = 289,
     TOK_FROM = 290,
     TOK_FUNCTION = 291,
     TOK_GLOBAL = 292,
     TOK_GROUP = 293,
     TOK_ID = 294,
     TOK_IN = 295,
     TOK_INDEX = 296,
     TOK_INSERT = 297,
     TOK_INT = 298,
     TOK_INTO = 299,
     TOK_ISOLATION = 300,
     TOK_LEVEL = 301,
     TOK_LIMIT = 302,
     TOK_MATCH = 303,
     TOK_MAX = 304,
     TOK_META = 305,
     TOK_MIN = 306,
     TOK_MOD = 307,
     TOK_NAMES = 308,
     TOK_NULL = 309,
     TOK_OPTION = 310,
     TOK_ORDER = 311,
     TOK_RAND = 312,
     TOK_READ = 313,
     TOK_REPEATABLE = 314,
     TOK_REPLACE = 315,
     TOK_RETURNS = 316,
     TOK_ROLLBACK = 317,
     TOK_RTINDEX = 318,
     TOK_SELECT = 319,
     TOK_SERIALIZABLE = 320,
     TOK_SET = 321,
     TOK_SESSION = 322,
     TOK_SHOW = 323,
     TOK_SONAME = 324,
     TOK_START = 325,
     TOK_STATUS = 326,
     TOK_SUM = 327,
     TOK_TABLES = 328,
     TOK_TO = 329,
     TOK_TRANSACTION = 330,
     TOK_TRUE = 331,
     TOK_UNCOMMITTED = 332,
     TOK_UPDATE = 333,
     TOK_VALUES = 334,
     TOK_VARIABLES = 335,
     TOK_WARNINGS = 336,
     TOK_WEIGHT = 337,
     TOK_WHERE = 338,
     TOK_WITHIN = 339,
     TOK_OR = 340,
     TOK_AND = 341,
     TOK_NE = 342,
     TOK_GTE = 343,
     TOK_LTE = 344,
     TOK_NOT = 345,
     TOK_NEG = 346
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
#define TOK_BY 274
#define TOK_CALL 275
#define TOK_COLLATION 276
#define TOK_COMMIT 277
#define TOK_COMMITTED 278
#define TOK_COUNT 279
#define TOK_CREATE 280
#define TOK_DELETE 281
#define TOK_DESC 282
#define TOK_DESCRIBE 283
#define TOK_DISTINCT 284
#define TOK_DIV 285
#define TOK_DROP 286
#define TOK_FALSE 287
#define TOK_FLOAT 288
#define TOK_FLUSH 289
#define TOK_FROM 290
#define TOK_FUNCTION 291
#define TOK_GLOBAL 292
#define TOK_GROUP 293
#define TOK_ID 294
#define TOK_IN 295
#define TOK_INDEX 296
#define TOK_INSERT 297
#define TOK_INT 298
#define TOK_INTO 299
#define TOK_ISOLATION 300
#define TOK_LEVEL 301
#define TOK_LIMIT 302
#define TOK_MATCH 303
#define TOK_MAX 304
#define TOK_META 305
#define TOK_MIN 306
#define TOK_MOD 307
#define TOK_NAMES 308
#define TOK_NULL 309
#define TOK_OPTION 310
#define TOK_ORDER 311
#define TOK_RAND 312
#define TOK_READ 313
#define TOK_REPEATABLE 314
#define TOK_REPLACE 315
#define TOK_RETURNS 316
#define TOK_ROLLBACK 317
#define TOK_RTINDEX 318
#define TOK_SELECT 319
#define TOK_SERIALIZABLE 320
#define TOK_SET 321
#define TOK_SESSION 322
#define TOK_SHOW 323
#define TOK_SONAME 324
#define TOK_START 325
#define TOK_STATUS 326
#define TOK_SUM 327
#define TOK_TABLES 328
#define TOK_TO 329
#define TOK_TRANSACTION 330
#define TOK_TRUE 331
#define TOK_UNCOMMITTED 332
#define TOK_UPDATE 333
#define TOK_VALUES 334
#define TOK_VARIABLES 335
#define TOK_WARNINGS 336
#define TOK_WEIGHT 337
#define TOK_WHERE 338
#define TOK_WITHIN 339
#define TOK_OR 340
#define TOK_AND 341
#define TOK_NE 342
#define TOK_GTE 343
#define TOK_LTE 344
#define TOK_NOT 345
#define TOK_NEG 346




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
#define YYLAST   783

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  106
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  89
/* YYNRULES -- Number of rules. */
#define YYNRULES  247
/* YYNRULES -- Number of states. */
#define YYNSTATES  456

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   346

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    99,    88,     2,
     104,   105,    97,    95,   103,    96,     2,    98,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   102,
      91,    89,    92,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    87,     2,     2,     2,     2,     2,
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
      85,    86,    90,    93,    94,   100,   101
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
     460,   464,   466,   471,   476,   480,   487,   494,   496,   500,
     502,   504,   507,   509,   511,   513,   515,   517,   519,   521,
     523,   525,   529,   534,   539,   544,   548,   553,   561,   567,
     569,   571,   573,   575,   577,   579,   581,   583,   585,   588,
     595,   597,   599,   600,   604,   606,   610,   612,   616,   620,
     622,   626,   628,   630,   632,   636,   639,   647,   657,   664,
     666,   670,   672,   676,   678,   682,   683,   686,   688,   692,
     696,   697,   699,   701,   703,   706,   708,   710,   713,   719,
     721,   725,   729,   733,   739,   744,   749,   750,   752,   755,
     757,   761,   765,   768,   775,   776,   778,   780,   783,   786,
     789,   791,   799,   801,   803,   807,   814,   818
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     107,     0,    -1,   108,    -1,   109,    -1,   109,   102,    -1,
     156,    -1,   164,    -1,   150,    -1,   151,    -1,   154,    -1,
     165,    -1,   174,    -1,   176,    -1,   177,    -1,   180,    -1,
     185,    -1,   189,    -1,   191,    -1,   192,    -1,   193,    -1,
     186,    -1,   194,    -1,   110,    -1,   109,   102,   110,    -1,
     111,    -1,   146,    -1,    64,   112,    35,   116,   117,   126,
     128,   130,   134,   136,    -1,   113,    -1,   112,   103,   113,
      -1,    97,    -1,   115,   114,    -1,    -1,     3,    -1,    13,
       3,    -1,   142,    -1,    16,   104,   142,   105,    -1,    49,
     104,   142,   105,    -1,    51,   104,   142,   105,    -1,    72,
     104,   142,   105,    -1,    24,   104,    97,   105,    -1,    82,
     104,   105,    -1,    24,   104,    29,     3,   105,    -1,     3,
      -1,   116,   103,     3,    -1,    -1,   118,    -1,    83,   119,
      -1,   121,    -1,   119,    86,   119,    -1,   104,   119,   105,
      -1,   122,    89,   124,    -1,   122,    90,   124,    -1,   122,
      92,   124,    -1,   122,    91,   124,    -1,    48,   104,     8,
     105,    -1,   122,    89,   123,    -1,   122,    90,   123,    -1,
     122,    40,   104,   125,   105,    -1,   122,   100,    40,   104,
     125,   105,    -1,   122,    40,     9,    -1,   122,   100,    40,
       9,    -1,   122,    18,   123,    86,   123,    -1,   122,    92,
     123,    -1,   122,    91,   123,    -1,   122,    93,   123,    -1,
     122,    94,   123,    -1,   120,    -1,   122,    18,   124,    86,
     124,    -1,   122,    18,   123,    86,   124,    -1,   122,    18,
     124,    86,   123,    -1,   122,    93,   124,    -1,   122,    94,
     124,    -1,     3,    -1,     4,    -1,    24,   104,    97,   105,
      -1,    82,   104,   105,    -1,    39,    -1,     5,    -1,    96,
       5,    -1,     6,    -1,    96,     6,    -1,   123,    -1,   125,
     103,   123,    -1,    -1,   127,    -1,    38,    19,   122,    -1,
      -1,   129,    -1,    84,    38,    56,    19,   132,    -1,    -1,
     131,    -1,    56,    19,   132,    -1,    56,    19,    57,   104,
     105,    -1,   133,    -1,   132,   103,   133,    -1,   122,    -1,
     122,    14,    -1,   122,    27,    -1,    -1,   135,    -1,    47,
       5,    -1,    47,     5,   103,     5,    -1,    -1,   137,    -1,
      55,   138,    -1,   139,    -1,   138,   103,   139,    -1,     3,
      89,     3,    -1,     3,    89,     5,    -1,     3,    89,   104,
     140,   105,    -1,     3,    89,     3,   104,     8,   105,    -1,
       3,    89,     8,    -1,   141,    -1,   140,   103,   141,    -1,
       3,    89,   123,    -1,     3,    -1,     4,    -1,    39,    -1,
       5,    -1,     6,    -1,     9,    -1,    96,   142,    -1,   100,
     142,    -1,   142,    95,   142,    -1,   142,    96,   142,    -1,
     142,    97,   142,    -1,   142,    98,   142,    -1,   142,    91,
     142,    -1,   142,    92,   142,    -1,   142,    88,   142,    -1,
     142,    87,   142,    -1,   142,    99,   142,    -1,   142,    30,
     142,    -1,   142,    52,   142,    -1,   142,    94,   142,    -1,
     142,    93,   142,    -1,   142,    89,   142,    -1,   142,    90,
     142,    -1,   142,    86,   142,    -1,   142,    85,   142,    -1,
     104,   142,   105,    -1,   143,    -1,     3,   104,   144,   105,
      -1,    40,   104,   144,   105,    -1,     3,   104,   105,    -1,
      51,   104,   142,   103,   142,   105,    -1,    49,   104,   142,
     103,   142,   105,    -1,   145,    -1,   144,   103,   145,    -1,
     142,    -1,     8,    -1,    68,   147,    -1,    81,    -1,    71,
      -1,    50,    -1,     3,    -1,    54,    -1,     8,    -1,     5,
      -1,     6,    -1,   148,    -1,   149,    96,   148,    -1,    66,
       3,    89,   153,    -1,    66,     3,    89,   152,    -1,    66,
       3,    89,    54,    -1,    66,    53,   149,    -1,    66,    10,
      89,   149,    -1,    66,    37,     9,    89,   104,   125,   105,
      -1,    66,    37,     3,    89,   152,    -1,     3,    -1,     8,
      -1,    76,    -1,    32,    -1,   123,    -1,    22,    -1,    62,
      -1,   155,    -1,    17,    -1,    70,    75,    -1,   157,    44,
       3,   158,    79,   160,    -1,    42,    -1,    60,    -1,    -1,
     104,   159,   105,    -1,   122,    -1,   159,   103,   122,    -1,
     161,    -1,   160,   103,   161,    -1,   104,   162,   105,    -1,
     163,    -1,   162,   103,   163,    -1,   123,    -1,   124,    -1,
       8,    -1,   104,   125,   105,    -1,   104,   105,    -1,    26,
      35,     3,    83,    39,    89,   123,    -1,    26,    35,     3,
      83,    39,    40,   104,   125,   105,    -1,    20,     3,   104,
     166,   169,   105,    -1,   167,    -1,   166,   103,   167,    -1,
     163,    -1,   104,   168,   105,    -1,     8,    -1,   168,   103,
       8,    -1,    -1,   103,   170,    -1,   171,    -1,   170,   103,
     171,    -1,   163,   172,   173,    -1,    -1,    13,    -1,     3,
      -1,    47,    -1,   175,     3,    -1,    28,    -1,    27,    -1,
      68,    73,    -1,    78,   116,    66,   178,   118,    -1,   179,
      -1,   178,   103,   179,    -1,     3,    89,   123,    -1,     3,
      89,   124,    -1,     3,    89,   104,   125,   105,    -1,     3,
      89,   104,   105,    -1,    68,   187,    80,   181,    -1,    -1,
     182,    -1,    83,   183,    -1,   184,    -1,   183,    85,   184,
      -1,     3,    89,     8,    -1,    68,    21,    -1,    66,   187,
      75,    45,    46,   188,    -1,    -1,    37,    -1,    67,    -1,
      58,    77,    -1,    58,    23,    -1,    59,    58,    -1,    65,
      -1,    25,    36,     3,    61,   190,    69,     8,    -1,    43,
      -1,    33,    -1,    31,    36,     3,    -1,    15,    41,     3,
      74,    63,     3,    -1,    34,    63,     3,    -1,    64,    10,
     134,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   120,   120,   121,   122,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   148,   149,   153,   154,   158,   173,   174,   178,
     179,   182,   184,   185,   189,   190,   191,   192,   193,   194,
     195,   196,   200,   201,   204,   206,   210,   214,   215,   216,
     220,   221,   222,   223,   227,   232,   239,   247,   255,   264,
     269,   274,   279,   284,   289,   294,   299,   304,   309,   314,
     319,   324,   332,   333,   338,   344,   350,   359,   360,   371,
     372,   376,   382,   388,   390,   394,   400,   402,   406,   412,
     414,   418,   422,   429,   430,   434,   435,   436,   439,   441,
     445,   450,   457,   459,   463,   467,   468,   472,   477,   482,
     488,   493,   501,   506,   513,   523,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   553,   554,   555,   556,   557,   561,   562,   566,
     567,   573,   577,   578,   579,   585,   586,   587,   588,   589,
     593,   594,   598,   603,   608,   613,   614,   618,   623,   631,
     632,   636,   637,   638,   652,   653,   654,   658,   659,   665,
     673,   674,   677,   679,   683,   684,   688,   689,   693,   697,
     698,   702,   703,   704,   705,   706,   712,   718,   730,   738,
     742,   749,   750,   757,   767,   773,   775,   779,   784,   788,
     795,   797,   801,   802,   808,   816,   817,   823,   829,   837,
     838,   842,   846,   850,   854,   864,   870,   871,   875,   879,
     880,   884,   888,   895,   901,   902,   903,   907,   908,   909,
     910,   916,   927,   928,   932,   943,   955,   966
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
  "TOK_BEGIN", "TOK_BETWEEN", "TOK_BY", "TOK_CALL", "TOK_COLLATION", 
  "TOK_COMMIT", "TOK_COMMITTED", "TOK_COUNT", "TOK_CREATE", "TOK_DELETE", 
  "TOK_DESC", "TOK_DESCRIBE", "TOK_DISTINCT", "TOK_DIV", "TOK_DROP", 
  "TOK_FALSE", "TOK_FLOAT", "TOK_FLUSH", "TOK_FROM", "TOK_FUNCTION", 
  "TOK_GLOBAL", "TOK_GROUP", "TOK_ID", "TOK_IN", "TOK_INDEX", 
  "TOK_INSERT", "TOK_INT", "TOK_INTO", "TOK_ISOLATION", "TOK_LEVEL", 
  "TOK_LIMIT", "TOK_MATCH", "TOK_MAX", "TOK_META", "TOK_MIN", "TOK_MOD", 
  "TOK_NAMES", "TOK_NULL", "TOK_OPTION", "TOK_ORDER", "TOK_RAND", 
  "TOK_READ", "TOK_REPEATABLE", "TOK_REPLACE", "TOK_RETURNS", 
  "TOK_ROLLBACK", "TOK_RTINDEX", "TOK_SELECT", "TOK_SERIALIZABLE", 
  "TOK_SET", "TOK_SESSION", "TOK_SHOW", "TOK_SONAME", "TOK_START", 
  "TOK_STATUS", "TOK_SUM", "TOK_TABLES", "TOK_TO", "TOK_TRANSACTION", 
  "TOK_TRUE", "TOK_UNCOMMITTED", "TOK_UPDATE", "TOK_VALUES", 
  "TOK_VARIABLES", "TOK_WARNINGS", "TOK_WEIGHT", "TOK_WHERE", 
  "TOK_WITHIN", "TOK_OR", "TOK_AND", "'|'", "'&'", "'='", "TOK_NE", "'<'", 
  "'>'", "TOK_GTE", "TOK_LTE", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "TOK_NOT", "TOK_NEG", "';'", "','", "'('", "')'", "$accept", "request", 
  "statement", "multi_stmt_list", "multi_stmt", "select_from", 
  "select_items_list", "select_item", "opt_alias", "select_expr", 
  "ident_list", "opt_where_clause", "where_clause", "where_expr", 
  "expr_float_unhandled", "where_item", "expr_ident", "const_int", 
  "const_float", "const_list", "opt_group_clause", "group_clause", 
  "opt_group_order_clause", "group_order_clause", "opt_order_clause", 
  "order_clause", "order_items_list", "order_item", "opt_limit_clause", 
  "limit_clause", "opt_option_clause", "option_clause", "option_list", 
  "option_item", "named_const_list", "named_const", "expr", "function", 
  "arglist", "arg", "show_stmt", "show_what", "simple_set_value", 
  "set_value", "set_stmt", "set_global_stmt", "set_string_value", 
  "boolean_value", "transact_op", "start_transaction", "insert_into", 
  "insert_or_replace", "opt_column_list", "column_list", 
  "insert_rows_list", "insert_row", "insert_vals_list", "insert_val", 
  "delete_from", "call_proc", "call_args_list", "call_arg", 
  "const_string_list", "opt_call_opts_list", "call_opts_list", "call_opt", 
  "opt_as", "call_opt_name", "describe", "describe_tok", "show_tables", 
  "update", "update_items_list", "update_item", "show_variables", 
  "opt_show_variables_where", "show_variables_where", 
  "show_variables_where_list", "show_variables_where_entry", 
  "show_collation", "set_transaction", "opt_scope", "isolation_level", 
  "create_function", "udf_type", "drop_function", "attach_index", 
  "flush_rtindex", "select_sysvar", 0
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
     335,   336,   337,   338,   339,   340,   341,   124,    38,    61,
     342,    60,    62,   343,   344,    43,    45,    42,    47,    37,
     345,   346,    59,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,   106,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   109,   109,   110,   110,   111,   112,   112,   113,
     113,   114,   114,   114,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   119,   119,   119,
     120,   120,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   122,   122,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   128,   128,   129,   130,
     130,   131,   131,   132,   132,   133,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   138,   138,   139,   139,   139,
     139,   139,   140,   140,   141,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   143,   143,   143,   144,   144,   145,
     145,   146,   147,   147,   147,   148,   148,   148,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   162,
     162,   163,   163,   163,   163,   163,   164,   164,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     172,   172,   173,   173,   174,   175,   175,   176,   177,   178,
     178,   179,   179,   179,   179,   180,   181,   181,   182,   183,
     183,   184,   185,   186,   187,   187,   187,   188,   188,   188,
     188,   189,   190,   190,   191,   192,   193,   194
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
       3,     1,     4,     4,     3,     6,     6,     1,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     3,     4,     7,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     6,
       1,     1,     0,     3,     1,     3,     1,     3,     3,     1,
       3,     1,     1,     1,     3,     2,     7,     9,     6,     1,
       3,     1,     3,     1,     3,     0,     2,     1,     3,     3,
       0,     1,     1,     1,     2,     1,     1,     2,     5,     1,
       3,     3,     3,     5,     4,     4,     0,     1,     2,     1,
       3,     3,     2,     6,     0,     1,     1,     2,     2,     2,
       1,     7,     1,     1,     3,     6,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,   177,     0,   174,     0,     0,   216,   215,     0,
       0,   180,   181,   175,     0,   234,   234,     0,     0,     0,
       2,     3,    22,    24,    25,     7,     8,     9,   176,     5,
       0,     6,    10,    11,     0,    12,    13,    14,    15,    20,
      16,    17,    18,    19,    21,     0,     0,     0,     0,     0,
       0,   115,   116,   118,   119,   120,    98,     0,     0,   117,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
      27,    31,    34,   141,     0,     0,   235,     0,   236,     0,
     232,   235,   154,   153,   217,   152,   151,     0,   178,    42,
       0,     1,     4,     0,   214,     0,     0,     0,     0,   244,
     246,     0,     0,   247,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,     0,     0,     0,    32,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,   158,   159,   157,   156,   160,   165,
       0,   226,     0,     0,     0,     0,    23,   182,     0,    77,
      79,   193,     0,     0,   191,   192,   201,   205,   199,     0,
       0,   150,   144,   149,     0,   147,   100,     0,     0,     0,
       0,     0,     0,     0,    40,     0,     0,   140,    44,    28,
      33,   132,   133,   139,   138,   130,   129,   136,   137,   127,
     128,   135,   134,   123,   124,   125,   126,   131,   169,   170,
     172,   164,   171,     0,   173,   163,   162,   166,     0,     0,
       0,     0,     0,   225,   227,     0,     0,   219,    43,     0,
       0,     0,    78,    80,   203,   195,    81,     0,     0,     0,
       0,   243,   242,     0,     0,     0,   142,     0,    35,     0,
      39,   143,     0,    36,     0,    37,    38,     0,     0,     0,
      83,    45,   168,     0,   161,     0,     0,   228,   229,     0,
       0,   218,    72,    73,     0,    76,     0,   184,     0,     0,
     245,     0,   194,     0,   202,   201,   200,   206,   207,   198,
       0,     0,     0,   148,   101,    41,     0,     0,     0,     0,
      46,    66,    47,     0,     0,    86,    84,     0,     0,     0,
     240,   233,     0,     0,     0,   221,   222,   220,     0,     0,
       0,   183,     0,   179,   186,    82,   204,   211,     0,     0,
     241,     0,   196,   146,   145,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    89,
      87,   167,   238,   237,   239,   231,   230,   224,     0,     0,
      75,   185,     0,     0,   189,     0,   212,   213,   209,   210,
     208,     0,     0,    49,    48,     0,     0,    59,     0,    55,
      50,    56,    51,    63,    53,    62,    52,    64,    70,    65,
      71,     0,    85,     0,     0,    98,    90,   223,    74,     0,
     188,   187,   197,    54,     0,     0,     0,    60,     0,     0,
       0,   102,   190,    61,    68,    69,    67,    57,     0,     0,
       0,    95,    91,    93,     0,    26,   103,    58,    88,     0,
      96,    97,     0,     0,   104,   105,    92,    94,     0,     0,
     107,   108,   111,     0,   106,     0,     0,     0,   112,     0,
       0,     0,   109,   110,   114,   113
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,    19,    20,    21,    22,    23,    69,    70,   121,    71,
      90,   260,   261,   300,   301,   302,   303,   236,   165,   237,
     305,   306,   349,   350,   395,   396,   422,   423,   103,   104,
     425,   426,   434,   435,   447,   448,    72,    73,   174,   175,
      24,    86,   148,   149,    25,    26,   215,   216,    27,    28,
      29,    30,   230,   278,   323,   324,   363,   166,    31,    32,
     167,   168,   238,   240,   287,   288,   328,   368,    33,    34,
      35,    36,   226,   227,    37,   223,   224,   267,   268,    38,
      39,    79,   311,    40,   243,    41,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -293
static const short yypact[] =
{
     705,    98,  -293,   152,  -293,   131,   144,  -293,  -293,   162,
     139,  -293,  -293,  -293,   214,   147,   687,   117,   202,   235,
    -293,   114,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     199,  -293,  -293,  -293,   247,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,   248,   163,   268,   271,   275,
     276,   193,  -293,  -293,  -293,  -293,   241,   197,   201,  -293,
     203,   209,   211,   212,   213,   132,  -293,   132,   132,   -16,
    -293,    20,   498,  -293,   217,   231,   166,   356,  -293,   249,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,   242,  -293,  -293,
     -41,  -293,   -28,   320,  -293,   252,    29,   266,   245,  -293,
    -293,    49,   324,  -293,  -293,   132,    -7,   107,   132,   132,
     132,   225,   227,   228,  -293,  -293,   330,   202,   253,  -293,
     333,  -293,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   267,
     356,   250,   255,  -293,  -293,  -293,  -293,  -293,  -293,   251,
     292,   262,   335,   343,   253,    71,  -293,   244,   288,  -293,
    -293,  -293,   216,    12,  -293,  -293,  -293,   263,  -293,   127,
     313,  -293,  -293,   498,   -77,  -293,   281,   353,   355,   260,
      -9,   282,   303,   379,  -293,   132,   132,  -293,   -62,  -293,
    -293,  -293,  -293,   524,   547,   572,   595,   620,   620,   -14,
     -14,   -14,   -14,   243,   243,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,   351,  -293,  -293,  -293,   251,    36,   299,
     356,   340,   401,  -293,  -293,   318,    37,  -293,  -293,   173,
     332,   409,  -293,  -293,  -293,  -293,  -293,    25,    75,    29,
     308,  -293,  -293,   345,   -30,   107,  -293,   425,  -293,   328,
    -293,  -293,   132,  -293,   132,  -293,  -293,   450,   475,   186,
     396,  -293,  -293,    22,  -293,   129,   347,   352,  -293,    55,
     335,  -293,  -293,  -293,   349,  -293,   357,  -293,    96,   358,
    -293,    22,  -293,   447,  -293,   121,  -293,   360,  -293,  -293,
     448,   377,    22,  -293,  -293,  -293,   402,   427,   378,   186,
     373,  -293,  -293,   191,   441,   399,  -293,   103,   -21,   428,
    -293,  -293,   477,   401,    26,  -293,  -293,  -293,   406,   403,
     173,  -293,   156,   407,  -293,  -293,  -293,  -293,    44,   156,
    -293,    22,  -293,  -293,  -293,   496,    43,   186,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    -1,   466,   173,   471,   455,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,   110,   424,
    -293,  -293,    27,   124,  -293,   358,  -293,  -293,  -293,   517,
    -293,   134,   426,  -293,  -293,   465,   469,  -293,    22,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,     5,  -293,   478,   514,   241,  -293,  -293,  -293,   156,
    -293,  -293,  -293,  -293,    -1,    -1,   161,  -293,    22,   533,
     237,   501,  -293,  -293,  -293,  -293,  -293,  -293,   184,   173,
     453,    -3,   456,  -293,   555,  -293,  -293,  -293,   456,   470,
    -293,  -293,   173,   490,   479,  -293,  -293,  -293,    10,   555,
     476,  -293,  -293,   578,  -293,   590,   511,   195,  -293,   499,
      22,   578,  -293,  -293,  -293,  -293
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -293,  -293,  -293,  -293,   509,  -293,  -293,   485,  -293,  -293,
     488,  -293,   380,  -292,  -293,  -293,  -228,   -96,  -239,  -234,
    -293,  -293,  -293,  -293,  -293,  -293,   188,   176,   232,  -293,
    -293,  -293,  -293,   170,  -293,   175,   -59,  -293,   521,   384,
    -293,  -293,   410,   491,  -293,  -293,   414,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,   283,  -293,  -236,  -293,  -293,
    -293,   394,  -293,  -293,  -293,   322,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,   382,  -293,  -293,  -293,  -293,   336,  -293,
    -293,   637,  -293,  -293,  -293,  -293,  -293,  -293,  -293
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -211
static const short yytable[] =
{
     164,   277,   352,   285,   159,   160,   114,   336,   115,   116,
     291,   430,   377,   440,   407,   441,   122,   159,   442,   117,
     234,   259,   178,   119,   431,   152,   245,   159,   246,   307,
     316,   159,   159,   120,   159,   160,   154,   161,   123,   208,
     155,   153,   173,   214,   209,   374,   177,   366,   173,   181,
     182,   183,    51,    52,    53,    54,   353,   171,    55,   292,
     159,   160,   153,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     358,   134,   135,   136,   137,   138,   364,   118,    59,    60,
     179,   367,   361,   369,   245,   162,   251,   371,   112,   376,
     113,   380,   382,   384,   386,   388,   390,   378,   213,   408,
      51,    52,    53,    54,   443,   171,    55,   235,   213,   392,
     259,    82,   213,   213,  -210,   162,   257,   258,   281,   337,
     282,   357,   235,   163,   327,    51,    52,    53,    54,    45,
     270,    55,    83,   164,   406,    65,    59,    60,   373,    67,
      74,   162,    85,    68,   172,    46,   112,    75,   113,   314,
     241,   159,   160,   412,   161,   414,   416,    47,  -210,   141,
     242,    59,    60,   315,   418,   142,   272,   273,   283,    48,
     284,   112,   421,   113,    76,   325,   173,   308,   309,   272,
     273,   421,    88,   296,   310,   297,   332,   274,    49,   320,
      77,   321,    50,    65,   421,    89,   281,    67,   351,   338,
     274,    68,   275,   281,    78,   397,    92,    51,    52,    53,
      54,   232,   233,    55,    56,   275,   164,   399,    65,   400,
      57,   339,    67,   164,   298,    91,    68,   281,    58,   402,
     272,   273,   375,    93,   379,   381,   383,   385,   387,   389,
      94,    95,   162,    59,    60,   276,    51,    52,    53,    54,
     362,   274,    55,    61,   281,    62,   417,    96,   276,    57,
     208,    97,   159,   122,    98,   209,   275,    58,    99,   100,
     340,   341,   342,   343,   344,   345,    63,   281,   102,   427,
     299,   346,    59,    60,   420,   123,    64,   101,   451,   210,
     452,   105,    61,   164,    62,   106,   139,   107,   413,   415,
      65,    66,   122,   108,    67,   109,   110,   111,    68,   276,
     140,   211,   151,   157,   150,    63,   158,   169,   170,   176,
     184,   185,   186,   122,   123,    64,   190,   221,   225,   218,
     136,   137,   138,   212,   219,   222,   228,   220,   229,    65,
      66,   231,   244,    67,   454,   123,   232,    68,   249,   143,
     122,   144,   145,   213,   146,   250,   239,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   123,   122,   247,   252,   265,   253,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   263,   266,   123,   254,   269,   255,   122,
     147,   279,   280,   289,   290,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     294,   123,   122,   295,   304,   187,   312,   313,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   318,   123,   326,   330,   122,   248,   337,
     347,   319,   322,   329,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   123,
     122,   331,   335,   348,   256,   355,   354,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   123,   359,   372,   122,   391,   333,   360,   393,
     365,   394,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   123,   122,   398,
     327,   403,   334,   410,   409,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     123,   404,   419,   252,   122,   405,   424,   429,   433,   432,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   436,   123,   122,   254,   438,
     445,   446,   439,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   449,   123,
     450,   156,   122,   189,   453,   188,   271,   428,   437,   444,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   123,   122,   455,   411,   180,   293,
     264,   217,   262,   286,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   123,   401,   356,
     122,   370,   317,    87,     0,     0,     0,     0,     0,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,   130,   131,   132,   133,   134,   135,   136,   137,   138,
       1,     0,     2,     0,    81,     3,     0,     4,     0,     0,
       5,     6,     7,     8,     0,     0,     9,    82,     0,    10,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,    78,     0,     0,     0,    83,     0,
      84,     0,     0,     0,     0,    12,     0,    13,    85,    14,
       0,    15,     0,    16,     0,    17,     0,     0,     0,     0,
       0,     0,     0,    18
};

static const short yycheck[] =
{
      96,   229,    23,   239,     5,     6,    65,   299,    67,    68,
      40,    14,     9,     3,     9,     5,    30,     5,     8,    35,
       8,    83,    29,     3,    27,    66,   103,     5,   105,   263,
     269,     5,     5,    13,     5,     6,    64,     8,    52,     3,
      68,   103,   101,   139,     8,   337,   105,     3,   107,   108,
     109,   110,     3,     4,     5,     6,    77,     8,     9,    89,
       5,     6,   103,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     314,    95,    96,    97,    98,    99,   322,   103,    39,    40,
      97,    47,   320,   329,   103,    96,   105,   331,    49,   338,
      51,   340,   341,   342,   343,   344,   345,   104,    96,   104,
       3,     4,     5,     6,   104,     8,     9,   105,    96,   347,
      83,    50,    96,    96,     3,    96,   185,   186,   103,    86,
     105,   105,   105,   104,    13,     3,     4,     5,     6,    41,
     103,     9,    71,   239,   378,    96,    39,    40,   105,   100,
       3,    96,    81,   104,   105,     3,    49,    10,    51,   104,
      33,     5,     6,   399,     8,   404,   405,    36,    47,     3,
      43,    39,    40,   269,   408,     9,     3,     4,   103,    35,
     105,    49,   410,    51,    37,   281,   245,    58,    59,     3,
       4,   419,    75,   252,    65,   254,   292,    24,    36,   103,
      53,   105,    63,    96,   432,     3,   103,   100,   105,    18,
      24,   104,    39,   103,    67,   105,   102,     3,     4,     5,
       6,     5,     6,     9,    10,    39,   322,   103,    96,   105,
      16,    40,   100,   329,    48,     0,   104,   103,    24,   105,
       3,     4,   338,    44,   340,   341,   342,   343,   344,   345,
       3,     3,    96,    39,    40,    82,     3,     4,     5,     6,
     104,    24,     9,    49,   103,    51,   105,   104,    82,    16,
       3,     3,     5,    30,     3,     8,    39,    24,     3,     3,
      89,    90,    91,    92,    93,    94,    72,   103,    47,   105,
     104,   100,    39,    40,    57,    52,    82,   104,   103,    32,
     105,   104,    49,   399,    51,   104,    89,   104,   404,   405,
      96,    97,    30,   104,   100,   104,   104,   104,   104,    82,
      89,    54,    80,     3,    75,    72,    74,    61,    83,     5,
     105,   104,   104,    30,    52,    82,     3,    45,     3,    89,
      97,    98,    99,    76,    89,    83,     3,    96,   104,    96,
      97,    63,    39,   100,   450,    52,     5,   104,     3,     3,
      30,     5,     6,    96,     8,   105,   103,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    52,    30,   103,   103,    46,   105,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   104,     3,    52,   103,    89,   105,    30,
      54,    79,     3,   105,    69,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       5,    52,    30,   105,    38,   105,    89,    85,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   104,    52,     8,     8,    30,   105,    86,
      19,   104,   104,   103,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    52,
      30,   104,   104,    84,   105,     8,    58,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    52,    97,     8,    30,    40,   105,   105,    38,
     103,    56,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    52,    30,   105,
      13,   105,   105,    19,    56,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      52,    86,    19,   103,    30,    86,    55,   104,     3,   103,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   105,    52,    30,   103,    89,
     104,     3,   103,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,     8,    52,
      89,    92,    30,   118,   105,   117,   226,   419,   432,   439,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,    52,    30,   451,   395,   107,   245,
     220,   140,   218,   239,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    52,   365,   313,
      30,   329,   270,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      15,    -1,    17,    -1,    37,    20,    -1,    22,    -1,    -1,
      25,    26,    27,    28,    -1,    -1,    31,    50,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,    -1,
      73,    -1,    -1,    -1,    -1,    60,    -1,    62,    81,    64,
      -1,    66,    -1,    68,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    15,    17,    20,    22,    25,    26,    27,    28,    31,
      34,    42,    60,    62,    64,    66,    68,    70,    78,   107,
     108,   109,   110,   111,   146,   150,   151,   154,   155,   156,
     157,   164,   165,   174,   175,   176,   177,   180,   185,   186,
     189,   191,   192,   193,   194,    41,     3,    36,    35,    36,
      63,     3,     4,     5,     6,     9,    10,    16,    24,    39,
      40,    49,    51,    72,    82,    96,    97,   100,   104,   112,
     113,   115,   142,   143,     3,    10,    37,    53,    67,   187,
      21,    37,    50,    71,    73,    81,   147,   187,    75,     3,
     116,     0,   102,    44,     3,     3,   104,     3,     3,     3,
       3,   104,    47,   134,   135,   104,   104,   104,   104,   104,
     104,   104,    49,    51,   142,   142,   142,    35,   103,     3,
      13,   114,    30,    52,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    89,
      89,     3,     9,     3,     5,     6,     8,    54,   148,   149,
      75,    80,    66,   103,    64,    68,   110,     3,    74,     5,
       6,     8,    96,   104,   123,   124,   163,   166,   167,    61,
      83,     8,   105,   142,   144,   145,     5,   142,    29,    97,
     144,   142,   142,   142,   105,   104,   104,   105,   116,   113,
       3,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,     3,     8,
      32,    54,    76,    96,   123,   152,   153,   149,    89,    89,
      96,    45,    83,   181,   182,     3,   178,   179,     3,   104,
     158,    63,     5,     6,     8,   105,   123,   125,   168,   103,
     169,    33,    43,   190,    39,   103,   105,   103,   105,     3,
     105,   105,   103,   105,   103,   105,   105,   142,   142,    83,
     117,   118,   152,   104,   148,    46,     3,   183,   184,    89,
     103,   118,     3,     4,    24,    39,    82,   122,   159,    79,
       3,   103,   105,   103,   105,   163,   167,   170,   171,   105,
      69,    40,    89,   145,     5,   105,   142,   142,    48,   104,
     119,   120,   121,   122,    38,   126,   127,   125,    58,    59,
      65,   188,    89,    85,   104,   123,   124,   179,   104,   104,
     103,   105,   104,   160,   161,   123,     8,    13,   172,   103,
       8,   104,   123,   105,   105,   104,   119,    86,    18,    40,
      89,    90,    91,    92,    93,    94,   100,    19,    84,   128,
     129,   105,    23,    77,    58,     8,   184,   105,   125,    97,
     105,   122,   104,   162,   163,   103,     3,    47,   173,   163,
     171,   125,     8,   105,   119,   123,   124,     9,   104,   123,
     124,   123,   124,   123,   124,   123,   124,   123,   124,   123,
     124,    40,   122,    38,    56,   130,   131,   105,   105,   103,
     105,   161,   105,   105,    86,    86,   125,     9,   104,    56,
      19,   134,   163,   123,   124,   123,   124,   105,   125,    19,
      57,   122,   132,   133,    55,   136,   137,   105,   132,   104,
      14,    27,   103,     3,   138,   139,   105,   133,    89,   103,
       3,     5,     8,   104,   139,   104,     3,   140,   141,     8,
      89,   103,   105,   105,   123,   141
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

    { yyval = yyvsp[-2]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 145:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 146:

    { yyval = yyvsp[-5]; yyval.m_iEnd = yyvsp[0].m_iEnd ;}
    break;

  case 152:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_WARNINGS; ;}
    break;

  case 153:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_STATUS; ;}
    break;

  case 154:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_META; ;}
    break;

  case 162:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_iSetValue = yyvsp[0].m_iValue;
		;}
    break;

  case 163:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 164:

    {
			pParser->SetStatement ( yyvsp[-2], SET_LOCAL );
			pParser->m_pStmt->m_bSetNull = true;
		;}
    break;

  case 165:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 166:

    { pParser->m_pStmt->m_eStmt = STMT_DUMMY; ;}
    break;

  case 167:

    {
			pParser->SetStatement ( yyvsp[-4], SET_GLOBAL_UVAR );
			pParser->m_pStmt->m_dSetValues = *yyvsp[-1].m_pValues.Ptr();
		;}
    break;

  case 168:

    {
			pParser->SetStatement ( yyvsp[-2], SET_GLOBAL_SVAR );
			pParser->m_pStmt->m_sSetValue = yyvsp[0].m_sValue;
		;}
    break;

  case 171:

    { yyval.m_iValue = 1; ;}
    break;

  case 172:

    { yyval.m_iValue = 0; ;}
    break;

  case 173:

    {
			yyval.m_iValue = yyvsp[0].m_iValue;
			if ( yyval.m_iValue!=0 && yyval.m_iValue!=1 )
			{
				yyerror ( pParser, "only 0 and 1 could be used as boolean values" );
				YYERROR;
			}
		;}
    break;

  case 174:

    { pParser->m_pStmt->m_eStmt = STMT_COMMIT; ;}
    break;

  case 175:

    { pParser->m_pStmt->m_eStmt = STMT_ROLLBACK; ;}
    break;

  case 176:

    { pParser->m_pStmt->m_eStmt = STMT_BEGIN; ;}
    break;

  case 179:

    {
			// everything else is pushed directly into parser within the rules
			pParser->m_pStmt->m_sIndex = yyvsp[-3].m_sValue;
		;}
    break;

  case 180:

    { pParser->m_pStmt->m_eStmt = STMT_INSERT; ;}
    break;

  case 181:

    { pParser->m_pStmt->m_eStmt = STMT_REPLACE; ;}
    break;

  case 184:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 185:

    { if ( !pParser->AddSchemaItem ( &yyvsp[0] ) ) { yyerror ( pParser, "unknown field" ); YYERROR; } ;}
    break;

  case 188:

    { if ( !pParser->m_pStmt->CheckInsertIntegrity() ) { yyerror ( pParser, "wrong number of values here" ); YYERROR; } ;}
    break;

  case 189:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 190:

    { AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] ); ;}
    break;

  case 191:

    { yyval.m_iInstype = TOK_CONST_INT; yyval.m_iValue = yyvsp[0].m_iValue; ;}
    break;

  case 192:

    { yyval.m_iInstype = TOK_CONST_FLOAT; yyval.m_fValue = yyvsp[0].m_fValue; ;}
    break;

  case 193:

    { yyval.m_iInstype = TOK_QUOTED_STRING; yyval.m_sValue = yyvsp[0].m_sValue; ;}
    break;

  case 194:

    { yyval.m_iInstype = TOK_CONST_MVA; yyval.m_pValues = yyvsp[-1].m_pValues; ;}
    break;

  case 195:

    { yyval.m_iInstype = TOK_CONST_MVA; ;}
    break;

  case 196:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-4].m_sValue;
			pParser->m_pStmt->m_dDeleteIds.Add ( yyvsp[0].m_iValue );
		;}
    break;

  case 197:

    {
			pParser->m_pStmt->m_eStmt = STMT_DELETE;
			pParser->m_pStmt->m_sIndex = yyvsp[-6].m_sValue;
			for ( int i=0; i<yyvsp[-1].m_pValues.Ptr()->GetLength(); i++ )
				pParser->m_pStmt->m_dDeleteIds.Add ( (*yyvsp[-1].m_pValues.Ptr())[i] );
		;}
    break;

  case 198:

    {
			pParser->m_pStmt->m_eStmt = STMT_CALL;
			pParser->m_pStmt->m_sCallProc = yyvsp[-4].m_sValue;
		;}
    break;

  case 199:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 200:

    {
			AddInsval ( pParser->m_pStmt->m_dInsertValues, yyvsp[0] );
		;}
    break;

  case 202:

    {
			yyval.m_iInstype = TOK_CONST_STRINGS;
		;}
    break;

  case 203:

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

  case 204:

    {
			pParser->m_pStmt->m_dCallStrings.Add ( yyvsp[0].m_sValue );
		;}
    break;

  case 207:

    {
			assert ( pParser->m_pStmt->m_dCallOptNames.GetLength()==1 );
			assert ( pParser->m_pStmt->m_dCallOptValues.GetLength()==1 );
		;}
    break;

  case 209:

    {
			pParser->m_pStmt->m_dCallOptNames.Add ( yyvsp[0].m_sValue );
			AddInsval ( pParser->m_pStmt->m_dCallOptValues, yyvsp[-2] );
		;}
    break;

  case 213:

    { yyval.m_sValue = "limit"; ;}
    break;

  case 214:

    {
			pParser->m_pStmt->m_eStmt = STMT_DESC;
			pParser->m_pStmt->m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 217:

    { pParser->m_pStmt->m_eStmt = STMT_SHOW_TABLES; ;}
    break;

  case 218:

    {
			if ( !pParser->UpdateStatement ( &yyvsp[-3] ) )
				YYERROR;
		;}
    break;

  case 221:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0] );
		;}
    break;

  case 222:

    {
			pParser->UpdateAttr ( yyvsp[-2].m_sValue, &yyvsp[0], SPH_ATTR_FLOAT);
		;}
    break;

  case 223:

    {
			pParser->UpdateMVAAttr ( yyvsp[-4].m_sValue, yyvsp[-1] );
		;}
    break;

  case 224:

    {
			SqlNode_t tNoValues;
			pParser->UpdateMVAAttr ( yyvsp[-3].m_sValue, tNoValues );
		;}
    break;

  case 225:

    {
			pParser->m_pStmt->m_eStmt = STMT_SHOW_VARIABLES;
		;}
    break;

  case 232:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 233:

    {
			pParser->m_pStmt->m_eStmt = STMT_DUMMY;
		;}
    break;

  case 241:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_CREATE_FUNC;
			tStmt.m_sUdfName = yyvsp[-4].m_sValue;
			tStmt.m_sUdfLib = yyvsp[0].m_sValue;
			tStmt.m_eUdfType = (ESphAttr) yyvsp[-2].m_iValue;
		;}
    break;

  case 242:

    { yyval.m_iValue = SPH_ATTR_INTEGER; ;}
    break;

  case 243:

    { yyval.m_iValue = SPH_ATTR_FLOAT; ;}
    break;

  case 244:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_DROP_FUNC;
			tStmt.m_sUdfName = yyvsp[0].m_sValue;
		;}
    break;

  case 245:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_ATTACH_INDEX;
			tStmt.m_sIndex = yyvsp[-3].m_sValue;
			tStmt.m_sSetName = yyvsp[0].m_sValue;
		;}
    break;

  case 246:

    {
			SqlStmt_t & tStmt = *pParser->m_pStmt;
			tStmt.m_eStmt = STMT_FLUSH_RTINDEX;
			tStmt.m_sIndex = yyvsp[0].m_sValue;
		;}
    break;

  case 247:

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

