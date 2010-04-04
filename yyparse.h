/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
     TYPEVAR = 258,
     ABSTYPE = 259,
     DATA = 260,
     TYPESYM = 261,
     DEC = 262,
     INFIX = 263,
     INFIXR = 264,
     USES = 265,
     PRIVATE = 266,
     DISPLAY = 267,
     SAVE = 268,
     WRITE = 269,
     TO = 270,
     EXIT = 271,
     EDIT = 272,
     HELP = 273,
     DEFEQ = 274,
     OR = 275,
     VALOF = 276,
     IS = 277,
     GIVES = 278,
     THEN = 279,
     FORALL = 280,
     MODSYM = 281,
     PUBCONST = 282,
     PUBFUN = 283,
     PUBTYPE = 284,
     END = 285,
     MU = 286,
     IN = 287,
     WHEREREC = 288,
     WHERE = 289,
     ELSE = 290,
     BIN_BASE = 291,
     LBINARY1 = 292,
     RBINARY1 = 293,
     LBINARY2 = 294,
     RBINARY2 = 295,
     LBINARY3 = 296,
     RBINARY3 = 297,
     LBINARY4 = 298,
     RBINARY4 = 299,
     LBINARY5 = 300,
     RBINARY5 = 301,
     LBINARY6 = 302,
     RBINARY6 = 303,
     LBINARY7 = 304,
     RBINARY7 = 305,
     LBINARY8 = 306,
     RBINARY8 = 307,
     LBINARY9 = 308,
     RBINARY9 = 309,
     NONOP = 310,
     LAMBDA = 311,
     IF = 312,
     LETREC = 313,
     LET = 314,
     CHAR = 315,
     LITERAL = 316,
     NUMBER = 317,
     IDENT = 318,
     APPLY = 319,
     ALWAYS_REDUCE = 320
   };
#endif
/* Tokens.  */
#define TYPEVAR 258
#define ABSTYPE 259
#define DATA 260
#define TYPESYM 261
#define DEC 262
#define INFIX 263
#define INFIXR 264
#define USES 265
#define PRIVATE 266
#define DISPLAY 267
#define SAVE 268
#define WRITE 269
#define TO 270
#define EXIT 271
#define EDIT 272
#define HELP 273
#define DEFEQ 274
#define OR 275
#define VALOF 276
#define IS 277
#define GIVES 278
#define THEN 279
#define FORALL 280
#define MODSYM 281
#define PUBCONST 282
#define PUBFUN 283
#define PUBTYPE 284
#define END 285
#define MU 286
#define IN 287
#define WHEREREC 288
#define WHERE 289
#define ELSE 290
#define BIN_BASE 291
#define LBINARY1 292
#define RBINARY1 293
#define LBINARY2 294
#define RBINARY2 295
#define LBINARY3 296
#define RBINARY3 297
#define LBINARY4 298
#define RBINARY4 299
#define LBINARY5 300
#define RBINARY5 301
#define LBINARY6 302
#define RBINARY6 303
#define LBINARY7 304
#define RBINARY7 305
#define LBINARY8 306
#define RBINARY8 307
#define LBINARY9 308
#define RBINARY9 309
#define NONOP 310
#define LAMBDA 311
#define IF 312
#define LETREC 313
#define LET 314
#define CHAR 315
#define LITERAL 316
#define NUMBER 317
#define IDENT 318
#define APPLY 319
#define ALWAYS_REDUCE 320




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 101 "y.tab.y"
typedef union YYSTYPE {
	Num	numval;
	int	intval;
	Text	*textval;
	String	strval;
	Natural	charval;
	Type	*type;
	TypeList *typelist;
	DefType	*deftype;
	QType	*qtype;
	Expr	*expr;
	Branch	*branch;
	Cons	*cons;
} YYSTYPE;
/* Line 1447 of yacc.c.  */
#line 183 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



