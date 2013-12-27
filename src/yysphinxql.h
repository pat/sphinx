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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif





