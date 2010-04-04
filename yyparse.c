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

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */

#include "defs.h"
#include "memory.h"
#include "typevar.h"
#include "op.h"
#include "newstring.h"
#include "module.h"
#include "expr.h"
#include "deftype.h"
#include "cons.h"
#include "eval.h"
#include "error.h"
#include "text.h"


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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
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
/* Line 196 of yacc.c.  */
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */

/* Traditional yacc provides a global variable yyerrflag, which is
   non-zero when the parser is attempting to recover from an error.
   We use this for simple error recovery for interactive sessions
   in yylex().
 */
extern	int	yyerrflag;

global Bool
recovering(void)
{
	return yyerrflag != 0;
}

#ifdef	YYBISON
/* Bison defines a corresponding variable yyerrstatus local to
   yyparse().  To kludge around this, the Makefile comments out
   the local definition, and we supply a global one.
 */
int	yyerrflag;
#define yyerrstatus yyerrflag
#endif


/* Line 219 of yacc.c.  */

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1739

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  41
/* YYNRULES -- Number of rules. */
#define YYNRULES  203
/* YYNRULES -- Number of states. */
#define YYNSTATES  402

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    72,     2,     2,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,    70,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    33,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    13,    16,    19,    22,
      25,    30,    35,    37,    40,    42,    47,    51,    55,    57,
      60,    65,    67,    70,    73,    75,    78,    80,    82,    85,
      88,    91,    94,    96,    97,   101,   103,   105,   109,   111,
     115,   119,   123,   127,   129,   131,   135,   137,   141,   143,
     145,   148,   153,   158,   162,   166,   170,   174,   178,   182,
     186,   190,   194,   198,   202,   206,   210,   214,   218,   222,
     226,   230,   231,   234,   236,   238,   242,   244,   246,   250,
     253,   258,   262,   266,   270,   274,   278,   282,   286,   290,
     294,   298,   302,   306,   310,   314,   318,   322,   326,   330,
     333,   338,   342,   346,   350,   354,   358,   362,   366,   370,
     374,   378,   382,   386,   390,   394,   398,   402,   406,   410,
     415,   419,   420,   423,   425,   429,   431,   433,   437,   439,
     441,   445,   449,   452,   453,   455,   459,   463,   465,   467,
     469,   471,   476,   481,   485,   489,   492,   495,   499,   503,
     507,   511,   515,   519,   523,   527,   531,   535,   539,   543,
     547,   551,   555,   559,   563,   567,   571,   578,   585,   592,
     598,   604,   609,   611,   615,   617,   621,   625,   631,   633,
     634,   636,   638,   640,   642,   646,   649,   651,   653,   655,
     657,   659,   661,   663,   665,   667,   669,   671,   673,   675,
     677,   679,   681,   683
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      75,     0,    -1,    75,    76,    -1,    -1,    77,    70,    -1,
       1,    70,    -1,     3,    79,    -1,     8,    81,    -1,     9,
      82,    -1,     4,    86,    -1,     6,    88,    19,    95,    -1,
       5,    88,    19,    93,    -1,    11,    -1,     7,   101,    -1,
     102,    -1,    21,   106,    22,   107,    -1,   106,    22,   107,
      -1,   106,    19,   107,    -1,   107,    -1,    14,   106,    -1,
      14,   106,    15,    65,    -1,    12,    -1,    10,    84,    -1,
      13,   113,    -1,    17,    -1,    17,   113,    -1,    18,    -1,
      16,    -1,    26,   113,    -1,    27,    78,    -1,    28,    78,
      -1,    29,    78,    -1,    30,    -1,    -1,    78,    32,   113,
      -1,   113,    -1,    80,    -1,    79,    32,    80,    -1,   113,
      -1,    67,    71,    83,    -1,    67,    32,    81,    -1,    67,
      71,    83,    -1,    67,    32,    82,    -1,    66,    -1,    85,
      -1,    84,    32,    85,    -1,   113,    -1,    86,    32,    87,
      -1,    87,    -1,    88,    -1,   113,    89,    -1,   113,    57,
      92,    72,    -1,   113,    57,    91,    72,    -1,    92,    39,
      92,    -1,    92,    40,    92,    -1,    92,    41,    92,    -1,
      92,    42,    92,    -1,    92,    43,    92,    -1,    92,    44,
      92,    -1,    92,    45,    92,    -1,    92,    46,    92,    -1,
      92,    47,    92,    -1,    92,    48,    92,    -1,    92,    49,
      92,    -1,    92,    50,    92,    -1,    92,    51,    92,    -1,
      92,    52,    92,    -1,    92,    53,    92,    -1,    92,    54,
      92,    -1,    92,    55,    92,    -1,    92,    56,    92,    -1,
      -1,    92,    89,    -1,    92,    -1,    91,    -1,    92,    32,
      90,    -1,   113,    -1,    94,    -1,    94,    20,    93,    -1,
     113,    96,    -1,   113,    57,    99,    72,    -1,    95,    39,
      95,    -1,    95,    40,    95,    -1,    95,    41,    95,    -1,
      95,    42,    95,    -1,    95,    43,    95,    -1,    95,    44,
      95,    -1,    95,    45,    95,    -1,    95,    46,    95,    -1,
      95,    47,    95,    -1,    95,    48,    95,    -1,    95,    49,
      95,    -1,    95,    50,    95,    -1,    95,    51,    95,    -1,
      95,    52,    95,    -1,    95,    53,    95,    -1,    95,    54,
      95,    -1,    95,    55,    95,    -1,    95,    56,    95,    -1,
     113,    96,    -1,   113,    57,    99,    72,    -1,    95,    39,
      95,    -1,    95,    40,    95,    -1,    95,    41,    95,    -1,
      95,    42,    95,    -1,    95,    43,    95,    -1,    95,    44,
      95,    -1,    95,    45,    95,    -1,    95,    46,    95,    -1,
      95,    47,    95,    -1,    95,    48,    95,    -1,    95,    49,
      95,    -1,    95,    50,    95,    -1,    95,    51,    95,    -1,
      95,    52,    95,    -1,    95,    53,    95,    -1,    95,    54,
      95,    -1,    95,    55,    95,    -1,    95,    56,    95,    -1,
      31,   100,    23,    95,    -1,    57,    95,    72,    -1,    -1,
      97,    96,    -1,   113,    -1,    57,    95,    72,    -1,    95,
      -1,    99,    -1,    95,    32,    98,    -1,   113,    -1,   102,
      -1,   112,    32,   101,    -1,   112,    71,   103,    -1,   104,
      95,    -1,    -1,   113,    -1,   105,    32,   105,    -1,    57,
     105,    72,    -1,   113,    -1,    66,    -1,    65,    -1,    64,
      -1,    57,   106,   114,    72,    -1,    57,   114,   106,    72,
      -1,    57,   107,    72,    -1,    58,   108,    73,    -1,    58,
      73,    -1,   106,   106,    -1,   106,    39,   106,    -1,   106,
      40,   106,    -1,   106,    41,   106,    -1,   106,    42,   106,
      -1,   106,    43,   106,    -1,   106,    44,   106,    -1,   106,
      45,   106,    -1,   106,    46,   106,    -1,   106,    47,   106,
      -1,   106,    48,   106,    -1,   106,    49,   106,    -1,   106,
      50,   106,    -1,   106,    51,   106,    -1,   106,    52,   106,
      -1,   106,    53,   106,    -1,   106,    54,   106,    -1,   106,
      55,   106,    -1,   106,    56,   106,    -1,    60,   109,   111,
      -1,    61,   106,    24,   107,    37,   106,    -1,    63,   107,
      19,   107,    34,   106,    -1,    62,   105,    19,   107,    34,
     106,    -1,   106,    36,   107,    19,   106,    -1,   106,    35,
     105,    19,   106,    -1,    31,   105,    23,   106,    -1,   106,
      -1,   106,    32,   107,    -1,   106,    -1,   106,    32,   108,
      -1,   110,    23,   106,    -1,   110,    23,   106,    33,   109,
      -1,   107,    -1,    -1,    30,    -1,   113,    -1,   114,    -1,
      67,    -1,    57,   114,    72,    -1,    59,   114,    -1,    39,
      -1,    40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   177,   177,   178,   181,   182,   185,   186,   187,   189,
     190,   192,   194,   195,   196,   197,   199,   201,   203,   204,
     205,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   222,   223,   226,   227,   230,   233,
     235,   239,   241,   245,   248,   249,   252,   255,   256,   259,
     262,   263,   266,   268,   272,   276,   280,   284,   288,   292,
     296,   300,   304,   308,   312,   316,   320,   324,   328,   332,
     336,   342,   343,   346,   347,   350,   353,   356,   357,   365,
     367,   369,   374,   379,   384,   389,   394,   399,   404,   409,
     414,   419,   424,   429,   434,   439,   444,   449,   454,   462,
     464,   466,   471,   476,   481,   486,   491,   496,   501,   506,
     511,   516,   521,   526,   531,   536,   541,   546,   551,   556,
     558,   561,   562,   566,   568,   571,   572,   575,   579,   582,
     583,   586,   589,   592,   595,   596,   597,   600,   601,   602,
     603,   604,   606,   608,   610,   612,   613,   615,   619,   623,
     627,   631,   635,   639,   643,   647,   651,   655,   659,   663,
     667,   671,   675,   679,   683,   687,   689,   691,   693,   695,
     697,   699,   703,   704,   708,   711,   715,   717,   730,   741,
     742,   745,   746,   749,   750,   751,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   767,
     768,   769,   770,   771
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPEVAR", "ABSTYPE", "DATA", "TYPESYM",
  "DEC", "INFIX", "INFIXR", "USES", "PRIVATE", "DISPLAY", "SAVE", "WRITE",
  "TO", "EXIT", "EDIT", "HELP", "DEFEQ", "OR", "VALOF", "IS", "GIVES",
  "THEN", "FORALL", "MODSYM", "PUBCONST", "PUBFUN", "PUBTYPE", "END", "MU",
  "','", "'|'", "IN", "WHEREREC", "WHERE", "ELSE", "BIN_BASE", "LBINARY1",
  "RBINARY1", "LBINARY2", "RBINARY2", "LBINARY3", "RBINARY3", "LBINARY4",
  "RBINARY4", "LBINARY5", "RBINARY5", "LBINARY6", "RBINARY6", "LBINARY7",
  "RBINARY7", "LBINARY8", "RBINARY8", "LBINARY9", "RBINARY9", "'('", "'['",
  "NONOP", "LAMBDA", "IF", "LETREC", "LET", "CHAR", "LITERAL", "NUMBER",
  "IDENT", "APPLY", "ALWAYS_REDUCE", "';'", "':'", "')'", "']'", "$accept",
  "lines", "line", "cmd", "idlist", "newtvlist", "newtv", "infixlist",
  "infixrlist", "precedence", "uselist", "use", "abstypelist", "abstype",
  "newtype", "tvargs", "tvlist", "tvpair", "tv", "constypelist",
  "constype", "type", "typeargs", "typearg", "typelist", "typepair",
  "mu_tv", "decl", "simple_decl", "q_type", "start_dec", "tuple", "expr",
  "exprbody", "exprlist", "rulelist", "formals", "optend", "name", "ident",
  "binop", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,    44,   124,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,    40,    91,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
      59,    58,    41,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    74,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    80,    81,
      81,    82,    82,    83,    84,    84,    85,    86,    86,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    90,    91,    92,    93,    93,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    97,    97,    98,    98,    99,   100,   101,
     101,   102,   103,   104,   105,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   111,
     111,   112,   112,   113,   113,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     2,     2,     2,
       4,     4,     1,     2,     1,     4,     3,     3,     1,     2,
       4,     1,     2,     2,     1,     2,     1,     1,     2,     2,
       2,     2,     1,     0,     3,     1,     1,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     1,     3,     1,     1,
       2,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     0,     2,     1,     1,     3,     1,     1,     3,     2,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       3,     0,     2,     1,     3,     1,     1,     3,     1,     1,
       3,     3,     2,     0,     1,     3,     3,     1,     1,     1,
       1,     4,     4,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     6,     6,     6,     5,
       5,     4,     1,     3,     1,     3,     3,     5,     1,     0,
       1,     1,     1,     1,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    21,     0,     0,    27,    24,    26,     0,
       0,     0,     0,     0,    32,     0,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,     0,     0,
       0,   140,   139,   138,   183,     2,     0,    14,   172,    18,
       0,   137,   182,     5,     0,     6,    36,    38,     9,    48,
      49,     0,    76,     0,     0,    13,   129,     0,   181,     0,
       7,     0,     8,    22,    44,    46,    23,    19,   137,    25,
       0,    28,    29,    35,    30,    31,     0,     0,   134,   172,
       0,     0,   145,   174,     0,   185,   172,   178,   179,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,    71,    76,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,   143,   184,     0,
       0,   144,   180,   165,     0,     0,     0,     0,    17,    16,
     173,     0,     0,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   131,     0,    37,    47,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,    72,     0,     0,    11,    77,
       0,   121,    10,   121,   130,    40,    43,    39,    42,    41,
      45,    20,    15,    34,   136,   171,   135,   141,   142,   175,
     176,     0,     0,     0,     0,     0,   132,    52,     0,    51,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,   121,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
     170,   169,    75,    74,    73,     0,   120,    78,    81,    82,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,     0,     0,     0,   122,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,     0,   177,
     166,   168,   167,   119,     0,   124,   100,     0,   100,   125,
     127,   126
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     1,    55,    56,    92,    65,    66,    80,    82,   267,
      83,    84,    68,    69,    70,   161,   342,   253,    71,   258,
     259,   260,   313,   314,   400,   367,   290,    75,    76,   231,
     232,    97,   137,   107,   104,   108,   109,   203,    77,    88,
     139
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -334
static const short int yypact[] =
{
    -334,   647,  -334,   -41,   -29,   -29,   -29,   -29,  1365,   -21,
     -18,   -29,  -334,  -334,   -29,  1209,  -334,   -29,  -334,  1209,
     -29,   -29,   -29,   -29,  -334,   -26,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  1145,   217,  1543,  1209,  1209,   -26,
    1209,  -334,  -334,  -334,  -334,  -334,   -16,  -334,   800,  -334,
      37,    49,  -334,  -334,  1543,    32,  -334,  -334,    34,  -334,
    -334,  1561,    -7,    75,   111,  -334,  -334,    38,  -334,   100,
    -334,   104,  -334,    99,  -334,  -334,  -334,   700,  -334,  -334,
     846,  -334,   103,  -334,   103,   103,  1394,     3,  -334,  1034,
      65,   964,  -334,  1071,    89,  -334,  1108,  -334,   108,   155,
     890,     4,   158,  -334,  1209,  1209,  1209,   -26,  1209,  1209,
    1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,
    1209,  1209,  1209,  1209,  1209,  1209,  1209,  -334,  -334,   107,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
    1365,  -334,   -29,  -334,   -20,   -20,  1365,   -21,   115,   -18,
     115,   -29,   117,  1209,   -29,   -17,  1209,   -26,  1209,  1209,
    1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,  1209,
    1209,  1209,  1209,  1209,  1209,  1209,   112,  -334,  -334,   927,
    1209,  -334,  -334,  -334,  1209,  1209,  1209,  1209,  -334,  -334,
    -334,     8,   166,  1422,  1422,  1448,  1448,  1472,  1472,  1494,
    1494,  1514,  1514,  1568,  1568,  1198,  1198,   299,   299,   424,
     424,  -334,   -20,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,   114,   -14,  -334,   -29,  1182,  -334,   167,
    1597,   -25,  1615,    60,  -334,  -334,  -334,  -334,  -334,  -334,
    -334,  -334,  -334,  -334,  -334,  1307,   171,  -334,  -334,  -334,
    1244,   178,   185,   186,  1209,  1209,  1615,  -334,   -29,  -334,
     198,  -334,   961,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,  1182,    23,    67,  -334,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,  1182,  -334,  1209,  1209,  1209,  1209,
    1336,  1336,  -334,  -334,   190,   -20,  -334,  -334,  1633,  1651,
     146,   191,   350,   575,   748,   759,    48,   422,   154,   371,
     197,   319,   113,   203,   -11,    -3,  1000,   153,  1182,  -334,
    1668,  1668,  1683,  1683,   674,   674,   447,   447,   584,   584,
     363,   363,   216,   216,    59,    59,   170,   170,   156,  -334,
    1336,  1307,  1307,  1615,   -20,  -334,    36,  1273,  -334,   557,
    -334,  -334
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -334,  -334,  -334,  -334,    88,  -334,    90,    62,    63,    84,
    -334,    92,  -334,   123,   122,   124,  -334,   -23,   -70,   -27,
    -334,   247,  -249,  -334,  -334,  -333,  -334,   119,   287,  -334,
    -334,    -5,   333,     7,    91,   -47,  -334,  -334,   311,    -1,
      61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -182
static const short int yytable[] =
{
      61,   388,   162,    67,    72,    72,    72,    78,    59,   -97,
      85,   256,   -71,    86,   335,   177,    89,   -98,   288,    91,
      93,    93,    93,   206,    98,   -71,   176,   284,    64,    63,
      46,    96,   312,    46,    46,   177,   177,   257,    54,    46,
     177,    54,    54,   -79,   111,   333,    79,    54,    98,    81,
     160,   100,    46,   333,   113,   274,   -80,   112,   289,   -97,
      54,   401,    62,   -71,   140,   369,   141,   -98,   -89,    62,
     166,   163,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     254,   175,   162,   -79,   164,    98,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   101,   -80,   105,   138,   138,
      94,    95,   211,   331,   332,   333,    98,   334,   -89,    46,
    -181,   208,   209,   210,   368,   212,    46,    54,    73,    74,
     165,   171,   167,   -95,    54,   174,   169,   197,   202,    67,
      72,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     196,   163,   201,   261,   263,    78,   -83,   331,   332,   333,
      85,   168,   276,   273,   -91,   170,    98,   207,   204,   198,
     272,   266,   271,   -95,   277,   285,   287,   293,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   177,   327,   328,   329,   330,   331,   332,
     333,   -84,   281,   282,   283,   337,   -83,   -93,   344,   338,
     339,   345,   288,   -96,   -91,   396,   333,    62,   398,   265,
     233,   263,   268,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    25,   329,
     330,   331,   332,   333,   269,   291,   263,   331,   332,   333,
     315,   -84,   315,   270,   234,   343,   347,   -93,   329,   330,
     331,   332,   333,   -96,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   264,   255,   163,    57,   389,
     102,   279,   261,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,    60,   315,     0,   263,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   263,   263,    58,     0,     0,     0,     0,   -94,
       0,     0,     0,     0,   263,     0,     0,     0,    87,     0,
       0,     0,    90,   134,   135,   136,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   263,     0,     0,
     -85,   329,   330,   331,   332,   333,     0,    99,   103,     0,
     106,   110,     0,   106,     0,     0,     0,     0,     0,   -94,
       0,   -92,     0,   263,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,     0,     0,
       0,     0,   262,   327,   328,   329,   330,   331,   332,   333,
     -85,   327,   328,   329,   330,   331,   332,   333,     0,     0,
       0,     0,     0,     0,   199,     0,     0,     0,     0,     0,
       0,   -92,   -90,     0,     0,     0,     0,   106,   106,   106,
       0,   106,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   286,
     136,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   -90,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   292,     0,   106,     0,     0,   275,
       0,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,     0,
       0,     0,     0,   103,     0,     0,     0,   280,   106,   106,
     106,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
       0,     0,     0,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   366,     0,     0,     0,     0,     0,     0,     0,   394,
       0,     0,   393,     0,     0,   -86,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,     0,   397,     0,   340,   341,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   399,     0,     0,     0,   -86,     0,     2,     3,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,    17,    18,     0,     0,    19,   106,
     390,   391,   392,    20,    21,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   172,     0,   -33,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    25,     0,     0,     0,   117,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   -87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,     0,     0,   -87,   114,
       0,     0,   115,     0,     0,     0,     0,     0,     0,   -88,
       0,    25,   116,     0,     0,   117,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   173,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,   117,   118,     0,     0,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   205,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,   117,   118,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    25,     0,
       0,     0,   117,   118,     0,     0,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    25,     0,     0,     0,   278,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,     0,     0,
       0,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   394,   346,     0,     0,   198,     0,     0,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,     0,     0,
       0,     0,     0,     0,     0,    25,   116,     0,     0,   117,
     118,     0,   395,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    25,   200,     0,     0,   117,   118,     0,     0,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    25,
     116,     0,     0,   117,   118,     0,     0,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    25,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   256,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,   257,
      25,    46,     0,     0,     0,     0,     0,     0,     0,    54,
     132,   133,   134,   135,   136,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   336,     0,   117,
     118,     0,     0,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,   118,     0,   395,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    64,     0,    46,     0,     0,     0,     0,     0,
       0,     0,    54,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    96,     0,    46,     0,     0,     0,     0,     0,     0,
       0,    54,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   130,   131,
     132,   133,   134,   135,   136,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   294,   295,   296,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,  -101,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
    -102,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333
};

static const short int yycheck[] =
{
       1,   334,    72,     4,     5,     6,     7,     8,     1,    20,
      11,    31,    19,    14,   263,    32,    17,    20,    32,    20,
      21,    22,    23,    19,    25,    32,    23,    19,    57,    70,
      59,    57,    57,    59,    59,    32,    32,    57,    67,    59,
      32,    67,    67,    20,    49,    56,    67,    67,    49,    67,
      57,    44,    59,    56,    70,    72,    20,    50,    72,    70,
      67,   394,     1,    70,    32,   314,    32,    70,    20,     8,
      32,    72,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,    96,   162,    70,    19,    96,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    44,    70,    46,    71,    71,
      22,    23,   117,    54,    55,    56,   117,    57,    70,    59,
      71,   114,   115,   116,    57,   118,    59,    67,     6,     7,
      19,    32,    32,    20,    67,    32,    32,    72,    30,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
      99,   162,    73,   164,   165,   166,    20,    54,    55,    56,
     171,    71,   177,   174,    20,    71,   177,    19,    23,    72,
     173,    66,    65,    70,    72,    19,    72,    20,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    32,    50,    51,    52,    53,    54,    55,
      56,    20,   205,   206,   207,    37,    70,    20,   288,    34,
      34,    23,    32,    20,    70,    72,    56,   166,    72,   167,
     140,   232,   169,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    31,    52,
      53,    54,    55,    56,   170,   256,   257,    54,    55,    56,
     261,    70,   263,   171,   141,   288,   293,    70,    52,    53,
      54,    55,    56,    70,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,   166,   162,   288,     1,   336,
      73,   200,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     1,   314,    -1,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,     1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    15,    -1,
      -1,    -1,    19,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,   368,    -1,    -1,
      20,    52,    53,    54,    55,    56,    -1,    44,    45,    -1,
      47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    20,    -1,   394,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,   165,    50,    51,    52,    53,    54,    55,    56,
      70,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    20,    -1,    -1,    -1,    -1,   114,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      48,    49,    50,    51,    52,    53,    54,    55,    56,   232,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    70,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,   257,    -1,   173,    -1,    -1,   176,
      -1,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,    -1,
      -1,    -1,    -1,   200,    -1,    -1,    -1,   204,   205,   206,
     207,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
      -1,    -1,    -1,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,   345,    -1,    -1,    20,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,   368,    -1,   284,   285,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    48,    49,    50,    51,    52,    53,    54,    55,
      56,   394,    -1,    -1,    -1,    70,    -1,     0,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    -1,    -1,    21,   336,
     337,   338,   339,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    15,    -1,    70,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    70,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      -1,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    31,    -1,    -1,    -1,    72,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    32,    72,    -1,    -1,    72,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    72,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    31,    32,    -1,    -1,    35,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      31,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    33,    -1,    35,
      36,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    72,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    75,     0,     1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    16,    17,    18,    21,
      26,    27,    28,    29,    30,    31,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    76,    77,   102,   106,   107,
     112,   113,   114,    70,    57,    79,    80,   113,    86,    87,
      88,    92,   113,    88,    88,   101,   102,   112,   113,    67,
      81,    67,    82,    84,    85,   113,   113,   106,   113,   113,
     106,   113,    78,   113,    78,    78,    57,   105,   113,   106,
     107,   114,    73,   106,   108,   114,   106,   107,   109,   110,
     106,   105,   107,    70,    19,    22,    32,    35,    36,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,   106,    71,   114,
      32,    32,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    89,    92,   113,    19,    19,    32,    32,    71,    32,
      71,    32,    15,    22,    32,   105,    23,    32,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,   114,    72,    72,   106,
      32,    73,    30,   111,    23,    24,    19,    19,   107,   107,
     107,   105,   107,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   103,   104,    80,    87,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    91,    92,    89,    31,    57,    93,    94,
      95,   113,    95,   113,   101,    81,    66,    83,    82,    83,
      85,    65,   107,   113,    72,   106,   105,    72,    72,   108,
     106,   107,   107,   107,    19,    19,    95,    72,    32,    72,
     100,   113,    95,    20,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    96,    97,   113,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    96,    33,    37,    34,    34,
     106,   106,    90,    91,    92,    23,    72,    93,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    99,    57,    96,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    99,   109,
     106,   106,   106,    95,    32,    72,    72,    95,    72,    95,
      98,    99
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
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
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
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
  const char *yys = yystr;

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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



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
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
/*   int yyerrstatus; */
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



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
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
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
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

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
    { erroneous = FALSE; }
    break;

  case 3:
    { erroneous = FALSE; }
    break;

  case 4:
    { clean_slate(); mod_fetch(); }
    break;

  case 5:
    { clean_slate(); yyerrok; }
    break;

  case 7:
    { preserve(); }
    break;

  case 8:
    { preserve(); }
    break;

  case 10:
    { type_syn((yyvsp[-2].deftype), (yyvsp[0].type)); }
    break;

  case 11:
    { decl_type((yyvsp[-2].deftype), (yyvsp[0].cons)); }
    break;

  case 12:
    { mod_private(); }
    break;

  case 14:
    {;}
    break;

  case 15:
    { def_value((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 16:
    { def_value((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 17:
    { def_value((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 18:
    { eval_expr((yyvsp[0].expr)); }
    break;

  case 19:
    { wr_expr((yyvsp[0].expr), (const char *)0); }
    break;

  case 20:
    { wr_expr((yyvsp[-2].expr), (const char *)((yyvsp[0].textval)->t_start)); }
    break;

  case 21:
    { display(); }
    break;

  case 22:
    { preserve(); }
    break;

  case 23:
    { mod_save((yyvsp[0].strval)); }
    break;

  case 24:
    { edit((String)0); }
    break;

  case 25:
    { edit((yyvsp[0].strval)); }
    break;

  case 26:
    { help(); }
    break;

  case 27:
    { YYACCEPT; }
    break;

  case 35:
    {;}
    break;

  case 38:
    { tv_declare((yyvsp[0].strval)); }
    break;

  case 39:
    { op_declare((yyvsp[-2].strval), (yyvsp[0].intval), ASSOC_LEFT); (yyval.intval) = (yyvsp[0].intval); }
    break;

  case 40:
    { op_declare((yyvsp[-2].strval), (yyvsp[0].intval), ASSOC_LEFT); (yyval.intval) = (yyvsp[0].intval); }
    break;

  case 41:
    { op_declare((yyvsp[-2].strval), (yyvsp[0].intval), ASSOC_RIGHT); (yyval.intval) = (yyvsp[0].intval); }
    break;

  case 42:
    { op_declare((yyvsp[-2].strval), (yyvsp[0].intval), ASSOC_RIGHT); (yyval.intval) = (yyvsp[0].intval); }
    break;

  case 43:
    { (yyval.intval) = (int)(yyvsp[0].numval); }
    break;

  case 46:
    { mod_use((yyvsp[0].strval)); }
    break;

  case 49:
    { abstype((yyvsp[0].deftype)); }
    break;

  case 50:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), FALSE, (yyvsp[0].typelist)); }
    break;

  case 51:
    { (yyval.deftype) = new_deftype((yyvsp[-3].strval), FALSE,
						cons_type((yyvsp[-1].type), NULL)); }
    break;

  case 52:
    { (yyval.deftype) = new_deftype((yyvsp[-3].strval), TRUE, (yyvsp[-1].typelist)); }
    break;

  case 53:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 54:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 55:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 56:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 57:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 58:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 59:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 60:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 61:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 62:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 63:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 64:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 65:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 66:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 67:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 68:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 69:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 70:
    { (yyval.deftype) = new_deftype((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
					    cons_type((yyvsp[0].type),
						(TypeList *)NULL))); }
    break;

  case 71:
    { (yyval.typelist) = NULL; }
    break;

  case 72:
    { (yyval.typelist) = cons_type((yyvsp[-1].type), (yyvsp[0].typelist)); }
    break;

  case 73:
    { (yyval.typelist) = cons_type((yyvsp[0].type), (TypeList *)NULL); }
    break;

  case 74:
    { (yyval.typelist) = (yyvsp[0].typelist); }
    break;

  case 75:
    { (yyval.typelist) = cons_type((yyvsp[-2].type), (yyvsp[0].typelist)); }
    break;

  case 76:
    { (yyval.type) = new_tv((yyvsp[0].strval)); }
    break;

  case 77:
    { (yyval.cons) = alt_cons((yyvsp[0].cons), (Cons *)NULL); }
    break;

  case 78:
    { (yyval.cons) = alt_cons((yyvsp[-2].cons), (yyvsp[0].cons)); }
    break;

  case 79:
    { (yyval.cons) = constructor((yyvsp[-1].strval), FALSE, (yyvsp[0].typelist)); }
    break;

  case 80:
    { (yyval.cons) = constructor((yyvsp[-3].strval), TRUE, (yyvsp[-1].typelist)); }
    break;

  case 81:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 82:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 83:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 84:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 85:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 86:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 87:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 88:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 89:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 90:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 91:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 92:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 93:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 94:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 95:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 96:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 97:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 98:
    { (yyval.cons) = constructor((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 99:
    { (yyval.type) = new_type((yyvsp[-1].strval), FALSE, (yyvsp[0].typelist)); }
    break;

  case 100:
    { (yyval.type) = new_type((yyvsp[-3].strval), TRUE, (yyvsp[-1].typelist)); }
    break;

  case 101:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 102:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 103:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 104:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 105:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 106:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 107:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 108:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 109:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 110:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 111:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 112:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 113:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 114:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 115:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 116:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 117:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 118:
    { (yyval.type) = new_type((yyvsp[-1].strval), TRUE,
					cons_type((yyvsp[-2].type),
						cons_type((yyvsp[0].type),
							(TypeList *)NULL))); }
    break;

  case 119:
    { (yyval.type) = mu_type((yyvsp[0].type)); }
    break;

  case 120:
    { (yyval.type) = (yyvsp[-1].type); }
    break;

  case 121:
    { (yyval.typelist) = (TypeList *)NULL; }
    break;

  case 122:
    { (yyval.typelist) = cons_type((yyvsp[-1].type), (yyvsp[0].typelist)); }
    break;

  case 123:
    { (yyval.type) = new_type((yyvsp[0].strval), FALSE,
						(TypeList *)NULL); }
    break;

  case 124:
    { (yyval.type) = (yyvsp[-1].type); }
    break;

  case 125:
    { (yyval.typelist) = cons_type((yyvsp[0].type), (TypeList *)NULL); }
    break;

  case 126:
    { (yyval.typelist) = (yyvsp[0].typelist); }
    break;

  case 127:
    { (yyval.typelist) = cons_type((yyvsp[-2].type), (yyvsp[0].typelist)); }
    break;

  case 128:
    { enter_mu_tv((yyvsp[0].strval)); }
    break;

  case 129:
    { (yyval.qtype) = (yyvsp[0].qtype); }
    break;

  case 130:
    { decl_value((yyvsp[-2].strval), (yyvsp[0].qtype)); (yyval.qtype) = (yyvsp[0].qtype); }
    break;

  case 131:
    { decl_value((yyvsp[-2].strval), (yyvsp[0].qtype)); (yyval.qtype) = (yyvsp[0].qtype); }
    break;

  case 132:
    { (yyval.qtype) = qualified_type((yyvsp[0].type)); }
    break;

  case 133:
    { start_dec_type(); }
    break;

  case 134:
    { (yyval.expr) = id_expr((yyvsp[0].strval)); }
    break;

  case 135:
    { (yyval.expr) = pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 136:
    { (yyval.expr) = (yyvsp[-1].expr); }
    break;

  case 137:
    { (yyval.expr) = id_expr((yyvsp[0].strval)); }
    break;

  case 138:
    { (yyval.expr) = num_expr((yyvsp[0].numval)); }
    break;

  case 139:
    { (yyval.expr) = text_expr((yyvsp[0].textval)->t_start, (yyvsp[0].textval)->t_length); }
    break;

  case 140:
    { (yyval.expr) = char_expr((yyvsp[0].charval)); }
    break;

  case 141:
    { (yyval.expr) = presection((yyvsp[-1].strval), (yyvsp[-2].expr)); }
    break;

  case 142:
    { (yyval.expr) = postsection((yyvsp[-2].strval), (yyvsp[-1].expr)); }
    break;

  case 143:
    { (yyval.expr) = (yyvsp[-1].expr); }
    break;

  case 144:
    { (yyval.expr) = (yyvsp[-1].expr); }
    break;

  case 145:
    { (yyval.expr) = e_nil; }
    break;

  case 146:
    { (yyval.expr) = apply_expr((yyvsp[-1].expr), (yyvsp[0].expr)); }
    break;

  case 147:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 148:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 149:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 150:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 151:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 152:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 153:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 154:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 155:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 156:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 157:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 158:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 159:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 160:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 161:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 162:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 163:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 164:
    { (yyval.expr) = apply_expr(id_expr((yyvsp[-1].strval)),
						pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)));
				}
    break;

  case 165:
    { (yyval.expr) = func_expr((yyvsp[-1].branch)); }
    break;

  case 166:
    { (yyval.expr) = ite_expr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 167:
    { (yyval.expr) = let_expr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr), FALSE); }
    break;

  case 168:
    { (yyval.expr) = let_expr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr), TRUE); }
    break;

  case 169:
    { (yyval.expr) = where_expr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr), FALSE); }
    break;

  case 170:
    { (yyval.expr) = where_expr((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].expr), TRUE); }
    break;

  case 171:
    { (yyval.expr) = mu_expr((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 172:
    { (yyval.expr) = (yyvsp[0].expr); }
    break;

  case 173:
    { (yyval.expr) = pair_expr((yyvsp[-2].expr), (yyvsp[0].expr)); }
    break;

  case 174:
    { (yyval.expr) = apply_expr(e_cons,
						  pair_expr((yyvsp[0].expr), e_nil));
				}
    break;

  case 175:
    { (yyval.expr) = apply_expr(e_cons, pair_expr((yyvsp[-2].expr), (yyvsp[0].expr))); }
    break;

  case 176:
    { (yyval.branch) = new_branch((yyvsp[-2].expr), (yyvsp[0].expr), (Branch *)0); }
    break;

  case 177:
    { (yyval.branch) = new_branch((yyvsp[-4].expr), (yyvsp[-2].expr), (yyvsp[0].branch)); }
    break;

  case 178:
    { (yyval.expr) = apply_expr((Expr *)0, (yyvsp[0].expr)); }
    break;

  case 181:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 182:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 183:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 184:
    { (yyval.strval) = (yyvsp[-1].strval); }
    break;

  case 185:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 186:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 187:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 188:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 189:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 190:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 191:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 192:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 193:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 194:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 195:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 196:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 197:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 198:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 199:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 200:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 201:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 202:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;

  case 203:
    { (yyval.strval) = (yyvsp[0].strval); }
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */

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
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}




