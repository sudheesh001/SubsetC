/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
#define YYBISON_VERSION "2.3"

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
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INT = 274,
     LONG = 275,
     REGISTER = 276,
     RETURN = 277,
     SHORT = 278,
     SIGNED = 279,
     SIZEOF = 280,
     STATIC = 281,
     STRUCT = 282,
     SWITCH = 283,
     TYPEDEF = 284,
     UNION = 285,
     UNSIGNED = 286,
     VOID = 287,
     VOLATILE = 288,
     WHILE = 289,
     IDENTIFIER = 290,
     NUMBER = 291,
     REAL_NUMBER = 292,
     EXP_NUMBER = 293,
     CHAR_CONSTANT = 294,
     STRING_CONSTANT = 295,
     DOT = 296,
     COLON = 297,
     EQUALS = 298,
     SEMI_COLON = 299,
     HASH = 300,
     DOUBLE_QUOTES = 301,
     SINGLE_QUOTES = 302,
     OPEN_PARANTHESES = 303,
     CLOSE_PARANTHESES = 304,
     OPEN_BRACES = 305,
     CLOSE_BRACES = 306,
     COMMA = 307,
     OPEN_SQ_BRACKET = 308,
     CLOSE_SQ_BRACKET = 309,
     THREE_DOT = 310,
     INCREMENT = 311,
     DECREMENT = 312,
     ADD = 313,
     SUBTRACT = 314,
     MULTIPLY = 315,
     DIVIDE = 316,
     MOD = 317,
     NOT = 318,
     AND = 319,
     OR = 320,
     LESS_THAN = 321,
     LESS_THAN_EQUAL = 322,
     GREATER_THAN = 323,
     GREATER_THAN_EQUAL = 324,
     IS_EQUAL_TO = 325,
     NOT_EQUAL_TO = 326,
     BITWISE_AND = 327,
     BITWISE_OR = 328,
     NEGATION = 329,
     XOR = 330,
     R_SHIFT = 331,
     L_SHIFT = 332,
     SHORTHAND_ADD = 333,
     SHORTHAND_SUB = 334,
     SHORTHAND_MUL = 335,
     SHORTHAND_DIV = 336,
     SHORTHAND_MOD = 337,
     SHORTHAND_AND = 338,
     SHORTHAND_XOR = 339,
     SHORTHAND_OR = 340,
     SHORTHAND_LSHIFT = 341,
     SHORTHAND_RSHIFT = 342,
     TERNARY = 343,
     LINK = 344
   };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INT 274
#define LONG 275
#define REGISTER 276
#define RETURN 277
#define SHORT 278
#define SIGNED 279
#define SIZEOF 280
#define STATIC 281
#define STRUCT 282
#define SWITCH 283
#define TYPEDEF 284
#define UNION 285
#define UNSIGNED 286
#define VOID 287
#define VOLATILE 288
#define WHILE 289
#define IDENTIFIER 290
#define NUMBER 291
#define REAL_NUMBER 292
#define EXP_NUMBER 293
#define CHAR_CONSTANT 294
#define STRING_CONSTANT 295
#define DOT 296
#define COLON 297
#define EQUALS 298
#define SEMI_COLON 299
#define HASH 300
#define DOUBLE_QUOTES 301
#define SINGLE_QUOTES 302
#define OPEN_PARANTHESES 303
#define CLOSE_PARANTHESES 304
#define OPEN_BRACES 305
#define CLOSE_BRACES 306
#define COMMA 307
#define OPEN_SQ_BRACKET 308
#define CLOSE_SQ_BRACKET 309
#define THREE_DOT 310
#define INCREMENT 311
#define DECREMENT 312
#define ADD 313
#define SUBTRACT 314
#define MULTIPLY 315
#define DIVIDE 316
#define MOD 317
#define NOT 318
#define AND 319
#define OR 320
#define LESS_THAN 321
#define LESS_THAN_EQUAL 322
#define GREATER_THAN 323
#define GREATER_THAN_EQUAL 324
#define IS_EQUAL_TO 325
#define NOT_EQUAL_TO 326
#define BITWISE_AND 327
#define BITWISE_OR 328
#define NEGATION 329
#define XOR 330
#define R_SHIFT 331
#define L_SHIFT 332
#define SHORTHAND_ADD 333
#define SHORTHAND_SUB 334
#define SHORTHAND_MUL 335
#define SHORTHAND_DIV 336
#define SHORTHAND_MOD 337
#define SHORTHAND_AND 338
#define SHORTHAND_XOR 339
#define SHORTHAND_OR 340
#define SHORTHAND_LSHIFT 341
#define SHORTHAND_RSHIFT 342
#define TERNARY 343
#define LINK 344




/* Copy the first part of user declarations.  */
#line 1 "Compiler.y"

    #include <string.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#define int_a 0x1
	#define char_a 0x2
	#define float_a 0x4
	#define double_a 0x8
	#define long_a 0x10
	#define short_a 0x20
	#define unsigned_a 0x100
	#define signed_a 0x200

	extern int lines;
	extern char *yytext;
	extern int flag;
	extern char initial_list[100];
	extern int mark;
	extern int size_not_given;

    FILE *fp;
    FILE *fptr;


	struct node
	{
		char name[50],datatype[50],initial[50],size[50];
		int line,no_dimen;

	}table[205];

    struct node1
    {
        char op1[50],op2[50],operator[50],result[50];
    }quad[205];


	int id=0,i,j,num,curr_cnt,comma_cnt,l,right,top,top1,top2,top3,idx=0,temp_cnt=0;
	char str[50],temp[50],dimen[50],tname[50],s1[50],s2[50],s3[50],s4[50],num_string[50],label[100][50],label1[100][50],label2[100][50],label3[100][50],temp_var[200][200];
	int auto_a,static_a,extern_a,typedef_a,register_a,sum,i,num,res,c,end=0,may_be_size=-1,cnt[1024];
	int arr[]={0x1,0x2,0x4,0x8,0x20,0x100,0x200};
	int valid[]={0x1,0x2,0x4,0x8,0x10,0x11,0x18,0x20,0x21,0x100,0x101,0x102,0x110,0x111,0x120,0x121,0x200,0x201,0x202,0x210,0x211,0x220,0x221};

	void check(char s_name[]);
	void insert(char s_name[],char s_type[],int l);
	void lookup();
	void generate();
	void int_to_str(int);
	void generate_code();
    void check_arr(char ch_ar1[],char ch_ar2[]);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 54 "Compiler.y"
{
	char varname[50];
	int val;
}
/* Line 193 of yacc.c.  */
#line 332 "Compiler.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 345 "Compiler.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  380

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    17,    21,    25,
      28,    32,    35,    37,    40,    43,    45,    48,    50,    53,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    97,
     102,   105,   107,   109,   111,   114,   116,   120,   122,   126,
     130,   133,   135,   138,   140,   142,   146,   148,   152,   155,
     161,   166,   169,   171,   175,   177,   181,   184,   186,   188,
     192,   197,   201,   206,   211,   215,   218,   220,   224,   227,
     229,   232,   234,   238,   240,   244,   247,   250,   252,   254,
     258,   260,   264,   269,   271,   275,   278,   280,   282,   285,
     287,   291,   296,   300,   304,   307,   312,   316,   320,   323,
     325,   327,   329,   331,   333,   335,   339,   344,   348,   351,
     353,   358,   362,   366,   369,   371,   374,   375,   383,   389,
     390,   391,   395,   396,   397,   405,   413,   423,   432,   441,
     449,   458,   466,   474,   481,   485,   488,   491,   495,   498,
     500,   504,   506,   510,   512,   514,   516,   518,   520,   522,
     524,   526,   528,   530,   532,   534,   540,   542,   544,   548,
     550,   554,   556,   560,   562,   566,   568,   572,   574,   578,
     582,   584,   588,   592,   596,   600,   602,   606,   610,   612,
     616,   620,   622,   626,   630,   634,   636,   641,   643,   646,
     649,   652,   655,   660,   662,   664,   666,   668,   670,   672,
     674,   679,   684,   688,   692,   696,   699,   702,   704,   706,
     708,   712,   714,   718,   720,   722,   724
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    92,    -1,    91,    92,    -1,    93,    -1,
      94,    -1,    96,   112,    95,   128,    -1,   112,    95,   128,
      -1,    96,   112,   128,    -1,   112,   128,    -1,    96,   103,
      44,    -1,    96,    44,    -1,    94,    -1,    95,    94,    -1,
      97,    96,    -1,    97,    -1,    98,    96,    -1,    98,    -1,
      99,    96,    -1,    99,    -1,     3,    -1,    21,    -1,    26,
      -1,    14,    -1,    29,    -1,    32,    -1,     6,    -1,    23,
      -1,    19,    -1,    20,    -1,    15,    -1,    11,    -1,    24,
      -1,    31,    -1,   100,    -1,   109,    -1,     7,    -1,    33,
      -1,   101,    35,    50,   102,    51,    -1,   101,    50,   102,
      51,    -1,   101,    35,    -1,    27,    -1,    30,    -1,   105,
      -1,   102,   105,    -1,   104,    -1,   103,    52,   104,    -1,
     112,    -1,   112,    43,   120,    -1,   106,   107,    44,    -1,
      98,   106,    -1,    98,    -1,    99,   106,    -1,    99,    -1,
     108,    -1,   107,    52,   108,    -1,   112,    -1,   112,    42,
     142,    -1,    42,   142,    -1,    13,    35,    50,   110,    51,
      -1,    13,    50,   110,    51,    -1,    13,    35,    -1,   111,
      -1,   110,    52,   111,    -1,    35,    -1,    35,    43,   142,
      -1,   114,   113,    -1,   113,    -1,    35,    -1,    48,   112,
      49,    -1,   113,    53,   142,    54,    -1,   113,    53,    54,
      -1,   113,    48,   116,    49,    -1,   113,    48,   119,    49,
      -1,   113,    48,    49,    -1,    60,   115,    -1,    60,    -1,
      60,   115,   114,    -1,    60,   114,    -1,    99,    -1,   115,
      99,    -1,   117,    -1,   117,    52,    55,    -1,   118,    -1,
     117,    52,   118,    -1,    96,   112,    -1,    96,   123,    -1,
      96,    -1,    35,    -1,   119,    52,    35,    -1,   139,    -1,
      50,   121,    51,    -1,    50,   121,    52,    51,    -1,   120,
      -1,   121,    52,   120,    -1,   106,   123,    -1,   106,    -1,
     114,    -1,   114,   124,    -1,   124,    -1,    48,   123,    49,
      -1,   124,    53,   142,    54,    -1,    53,   142,    54,    -1,
     124,    53,    54,    -1,    53,    54,    -1,   124,    48,   116,
      49,    -1,    48,   116,    49,    -1,   124,    48,    49,    -1,
      48,    49,    -1,   126,    -1,   127,    -1,   128,    -1,   130,
      -1,   134,    -1,   137,    -1,    35,    42,   125,    -1,     5,
     142,    42,   125,    -1,     9,    42,   125,    -1,   138,    44,
      -1,    44,    -1,    50,    95,   129,    51,    -1,    50,    95,
      51,    -1,    50,   129,    51,    -1,    50,    51,    -1,   125,
      -1,   129,   125,    -1,    -1,    18,    48,   138,    49,   131,
     125,   132,    -1,    28,    48,   138,    49,   125,    -1,    -1,
      -1,    12,   133,   125,    -1,    -1,    -1,   135,    34,    48,
     138,    49,   136,   125,    -1,    10,   125,    34,    48,   138,
      49,    44,    -1,    16,    48,   138,    44,   138,    44,   138,
      49,   125,    -1,    16,    48,   138,    44,   138,    44,    49,
     125,    -1,    16,    48,   138,    44,    44,   138,    49,   125,
      -1,    16,    48,   138,    44,    44,    49,   125,    -1,    16,
      48,    44,   138,    44,   138,    49,   125,    -1,    16,    48,
      44,   138,    44,    49,   125,    -1,    16,    48,    44,    44,
     138,    49,   125,    -1,    16,    48,    44,    44,    49,   125,
      -1,    17,    35,    44,    -1,     8,    44,    -1,     4,    44,
      -1,    22,   138,    44,    -1,    22,    44,    -1,   139,    -1,
     138,    52,   139,    -1,   141,    -1,   154,   140,   139,    -1,
      43,    -1,    80,    -1,    81,    -1,    82,    -1,    78,    -1,
      79,    -1,    86,    -1,    87,    -1,    83,    -1,    84,    -1,
      85,    -1,   143,    -1,   143,    88,   138,    42,   141,    -1,
     141,    -1,   144,    -1,   143,    65,   144,    -1,   145,    -1,
     144,    64,   145,    -1,   146,    -1,   145,    73,   146,    -1,
     147,    -1,   146,    75,   147,    -1,   148,    -1,   147,    72,
     148,    -1,   149,    -1,   148,    70,   149,    -1,   148,    71,
     149,    -1,   150,    -1,   149,    66,   150,    -1,   149,    68,
     150,    -1,   149,    67,   150,    -1,   149,    69,   150,    -1,
     151,    -1,   150,    77,   151,    -1,   150,    76,   151,    -1,
     152,    -1,   151,    58,   152,    -1,   151,    59,   152,    -1,
     153,    -1,   152,    60,   153,    -1,   152,    61,   153,    -1,
     152,    62,   153,    -1,   154,    -1,    48,   122,    49,   153,
      -1,   156,    -1,    56,   154,    -1,    57,   154,    -1,   155,
     153,    -1,    25,   154,    -1,    25,    48,   122,    49,    -1,
      72,    -1,    60,    -1,    58,    -1,    59,    -1,    74,    -1,
      63,    -1,   157,    -1,   156,    53,   138,    54,    -1,   156,
      48,   158,    49,    -1,   156,    48,    49,    -1,   156,    41,
      35,    -1,   156,    89,    35,    -1,   156,    56,    -1,   156,
      57,    -1,    35,    -1,   159,    -1,    40,    -1,    48,   138,
      49,    -1,   139,    -1,   158,    52,   139,    -1,    36,    -1,
      39,    -1,    37,    -1,    38,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    85,    89,    91,    96,    98,   100,   102,
     107,   154,   158,   159,   163,   170,   171,   217,   218,   220,
     224,   225,   226,   227,   228,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   246,   247,   251,   253,
     255,   259,   260,   264,   265,   270,   271,   276,   277,   287,
     292,   294,   295,   297,   302,   303,   308,   309,   310,   314,
     316,   318,   322,   323,   327,   328,   332,   333,   337,   345,
     346,   353,   355,   357,   359,   364,   365,   366,   367,   371,
     372,   376,   377,   381,   382,   386,   387,   389,   393,   394,
     398,   399,   409,   413,   414,   418,   419,   423,   424,   425,
     429,   431,   433,   435,   437,   439,   441,   443,   445,   451,
     452,   453,   454,   455,   456,   460,   461,   462,   466,   467,
     471,   472,   473,   474,   478,   479,   483,   482,   496,   500,
     509,   508,   535,   547,   535,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   586,   587,   588,   589,   590,   594,
     599,   603,   608,   683,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   702,   707,   711,   719,   724,   739,
     744,   759,   764,   779,   784,   799,   804,   818,   823,   842,
     861,   866,   883,   899,   915,   934,   939,   951,   966,   971,
     983,   998,  1003,  1015,  1027,  1042,  1047,  1051,  1056,  1072,
    1088,  1099,  1100,  1105,  1106,  1107,  1108,  1110,  1111,  1115,
    1120,  1255,  1257,  1259,  1260,  1261,  1273,  1287,  1307,  1308,
    1323,  1331,  1332,  1336,  1344,  1351,  1358
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "IDENTIFIER", "NUMBER",
  "REAL_NUMBER", "EXP_NUMBER", "CHAR_CONSTANT", "STRING_CONSTANT", "DOT",
  "COLON", "EQUALS", "SEMI_COLON", "HASH", "DOUBLE_QUOTES",
  "SINGLE_QUOTES", "OPEN_PARANTHESES", "CLOSE_PARANTHESES", "OPEN_BRACES",
  "CLOSE_BRACES", "COMMA", "OPEN_SQ_BRACKET", "CLOSE_SQ_BRACKET",
  "THREE_DOT", "INCREMENT", "DECREMENT", "ADD", "SUBTRACT", "MULTIPLY",
  "DIVIDE", "MOD", "NOT", "AND", "OR", "LESS_THAN", "LESS_THAN_EQUAL",
  "GREATER_THAN", "GREATER_THAN_EQUAL", "IS_EQUAL_TO", "NOT_EQUAL_TO",
  "BITWISE_AND", "BITWISE_OR", "NEGATION", "XOR", "R_SHIFT", "L_SHIFT",
  "SHORTHAND_ADD", "SHORTHAND_SUB", "SHORTHAND_MUL", "SHORTHAND_DIV",
  "SHORTHAND_MOD", "SHORTHAND_AND", "SHORTHAND_XOR", "SHORTHAND_OR",
  "SHORTHAND_LSHIFT", "SHORTHAND_RSHIFT", "TERNARY", "LINK", "$accept",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_list",
  "selection_statement", "@1", "leftfactor", "@2", "iteration_statement",
  "@3", "@4", "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_OR_expression", "logical_AND_expression",
  "inclusive_OR_expression", "exclusive_OR_expression", "AND_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     106,   106,   106,   106,   107,   107,   108,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   113,   114,   114,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   123,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     125,   125,   125,   125,   125,   126,   126,   126,   127,   127,
     128,   128,   128,   128,   129,   129,   131,   130,   130,   132,
     133,   132,   135,   136,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   137,   137,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   141,   141,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     149,   149,   149,   149,   149,   150,   150,   150,   151,   151,
     151,   152,   152,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   155,   155,   155,   155,   155,   155,   156,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   157,
     157,   158,   158,   159,   159,   159,   159
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     3,     3,     2,
       3,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     1,     3,     1,     3,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       4,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     4,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     1,
       4,     3,     3,     2,     1,     2,     0,     7,     5,     0,
       0,     3,     0,     0,     7,     7,     9,     8,     8,     7,
       8,     7,     7,     6,     3,     2,     2,     3,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    26,    36,    31,     0,    23,    30,    28,    29,
      21,    27,    32,    22,    41,    24,    42,    33,    25,    37,
      68,     0,    76,     0,     2,     4,     5,     0,    15,    17,
      19,    34,     0,    35,     0,    67,     0,    61,     0,     0,
      79,    78,    75,     1,     3,    11,     0,    45,    47,    14,
      16,    18,    40,     0,   132,    12,     0,     0,     9,     0,
       0,    66,     0,    64,     0,    62,    69,    80,    77,    10,
       0,     0,     0,     8,     0,    51,    53,     0,    43,     0,
       0,     0,     0,     0,   132,     0,     0,     0,     0,     0,
       0,   217,   223,   225,   226,   224,   219,   119,     0,   123,
       0,     0,   205,   206,   204,   208,   203,   207,   132,   124,
     109,   110,   111,   132,   112,   113,     0,   114,     0,   149,
     151,   164,   167,   169,   171,   173,   175,   177,   180,   185,
     188,   191,   195,     0,   197,   209,   218,    13,     7,    47,
      88,    74,    87,     0,    81,    83,     0,   217,    71,   166,
       0,   195,     0,     0,    60,     0,    46,     0,    48,    90,
       6,     0,    50,    52,    39,    44,     0,     0,    54,    56,
     146,     0,   145,   132,     0,     0,     0,     0,   148,     0,
       0,   201,     0,   132,    96,     0,     0,     0,   198,   199,
     121,   132,   122,   125,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   157,   158,   154,
     155,   156,   161,   162,   163,   159,   160,     0,   200,     0,
       0,     0,   215,   216,     0,     0,     0,    85,    97,    86,
      99,    72,     0,    73,     0,    70,    59,    65,    63,    93,
       0,    38,    58,    49,     0,     0,   132,   117,     0,     0,
       0,   144,     0,   147,     0,     0,   115,     0,    97,    95,
       0,   220,   120,     0,   150,   168,     0,   170,   172,   174,
     176,   178,   179,   181,   183,   182,   184,   187,   186,   189,
     190,   192,   193,   194,   152,   213,   212,   221,     0,     0,
     214,   108,     0,     0,   104,     0,    98,     0,     0,    82,
      84,    89,    91,     0,    55,    57,   116,     0,     0,     0,
       0,   126,   202,   132,   196,     0,     0,   211,     0,   210,
     106,   100,   102,   107,     0,   103,     0,    92,    94,     0,
     132,     0,     0,     0,     0,   132,   128,   133,   165,   222,
     105,   101,     0,   143,   132,   132,     0,   132,     0,     0,
     129,   132,   135,   142,   141,   132,   139,   132,   132,     0,
     130,   127,   134,   140,   138,   137,   132,   132,   136,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    23,    24,    25,    55,    56,    57,    28,    29,    30,
      31,    32,    77,    46,    47,    78,    79,   167,   168,    33,
      64,    65,    34,    35,    36,    42,   302,   144,   145,   146,
     158,   250,   185,   303,   240,   109,   110,   111,   112,   113,
     114,   345,   371,   377,   115,   116,   361,   117,   118,   119,
     227,   120,   150,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   298,   136
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -217
static const yytype_int16 yypact[] =
{
     823,  -217,  -217,  -217,  -217,     3,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,
    -217,    54,     1,   697,  -217,  -217,  -217,    14,   165,   165,
     165,  -217,    10,  -217,  1407,    31,   -24,   -33,     2,    26,
    -217,  -217,     1,  -217,  -217,  -217,    24,  -217,  1374,  -217,
    -217,  -217,    66,  1556,   325,  -217,  1407,    14,  -217,  1439,
     864,    31,     2,    38,    97,  -217,  -217,  -217,  -217,  -217,
      54,   894,  1407,  -217,  1556,  1556,  1556,  1498,  -217,    82,
      33,  1254,    87,    91,   577,   110,   134,   133,   923,  1283,
     135,   158,  -217,  -217,  -217,  -217,  -217,  -217,   635,  -217,
    1312,  1312,  -217,  -217,  -217,  -217,  -217,  -217,   397,  -217,
    -217,  -217,  -217,   457,  -217,  -217,   159,  -217,    75,  -217,
    -217,   -44,   139,   154,   132,   162,   173,   163,   244,   264,
     199,  -217,   693,  1254,    65,  -217,  -217,  -217,  -217,   193,
    -217,  -217,    90,   219,   224,  -217,   -39,  -217,  -217,  -217,
     228,  -217,   315,  1254,  -217,     2,  -217,   894,  -217,  -217,
    -217,  1527,  -217,  -217,  -217,  -217,  1254,    84,  -217,   242,
    -217,   260,  -217,   577,   272,   952,   254,  1254,  -217,    85,
     635,  -217,  1254,   577,    86,   275,   153,  1254,  -217,  -217,
    -217,   517,  -217,  -217,   278,  -217,  1254,  1254,  1254,  1254,
    1254,  1254,  1254,  1254,  1254,  1254,  1254,  1254,  1254,  1254,
    1254,  1254,  1254,  1254,  1254,  1254,  -217,  -217,  -217,  -217,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  1254,  -217,   324,
     981,  1254,  -217,  -217,   333,   735,  1010,  -217,    34,  -217,
     114,  -217,   861,  -217,   337,  -217,  -217,  -217,  -217,  -217,
     319,  -217,  -217,  -217,    82,  1254,   577,  -217,   326,  1050,
     101,  -217,   203,  -217,   340,   204,  -217,   779,   151,  -217,
    1254,  -217,  -217,  1254,  -217,   139,    28,   154,   132,   162,
     173,   163,   163,   244,   244,   244,   244,   264,   264,   199,
     199,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   205,    -6,
    -217,  -217,   341,   342,  -217,   338,   114,  1470,  1079,  -217,
    -217,  -217,  -217,   253,  -217,  -217,  -217,  1254,  1109,   103,
    1138,  -217,  -217,   577,  -217,   225,  1254,  -217,  1254,  -217,
    -217,  -217,  -217,  -217,   344,  -217,   355,  -217,  -217,   247,
     577,   248,  1167,  1196,   121,   577,  -217,  -217,  -217,  -217,
    -217,  -217,   350,  -217,   577,   577,   256,   577,   265,  1225,
     383,   577,  -217,  -217,  -217,   577,  -217,   577,   577,   266,
    -217,  -217,  -217,  -217,  -217,  -217,   577,   577,  -217,  -217
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -217,  -217,   373,  -217,    27,    50,     0,  -217,   -20,   -10,
    -217,  -217,   357,  -217,   328,   -71,   -57,  -217,   184,  -217,
     377,   285,    15,   -32,    -2,  -217,   -56,  -217,   200,  -217,
    -152,  -217,   263,  -133,  -216,   -82,  -217,  -217,    -9,   336,
    -217,  -217,  -217,  -217,  -217,  -217,  -217,  -217,   -72,   -64,
    -217,   -46,   -80,  -217,   249,   250,   251,   257,   261,   174,
      32,   170,   175,  -118,    11,  -217,  -217,  -217,  -217,  -217
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,   171,   174,   143,    61,   249,   165,   159,     3,   239,
     243,    20,    40,   244,   149,   228,   179,    62,   162,   163,
      41,   197,   306,    27,    21,    58,   186,    26,    49,    50,
      51,   193,    67,    75,    19,   149,    39,    63,    37,    73,
      68,   184,    48,    76,   198,    52,   196,   138,   329,    20,
      26,   269,   306,    38,    75,    75,    75,    75,    45,   142,
      53,    22,    21,   160,    76,    76,    76,    76,    69,    20,
     326,   151,   139,   247,    22,    66,    70,   170,    75,    59,
     196,   153,   235,   137,    60,   139,   252,   236,    76,    20,
     165,   257,   151,   159,   169,   291,   292,   293,    72,   137,
     181,   266,    21,   260,   108,   262,   229,   149,   186,   193,
     265,   188,   189,   230,    22,   186,    74,    20,   231,   195,
     149,   232,   233,   184,   166,    20,   276,   196,   253,   263,
      21,   172,   274,   173,   267,   137,   254,   196,   235,   236,
     238,    75,    22,   236,   151,   320,    22,   342,   154,   155,
      22,    76,   324,   196,   234,   196,   305,   237,   175,   299,
      75,   338,   307,   294,   151,   359,   297,   308,     1,   176,
      76,     2,     3,   196,   316,   315,     4,   151,     5,     6,
       7,   177,   268,   182,     8,     9,    10,   319,    11,    12,
     149,    13,    14,   194,    15,    16,    17,    18,    19,   267,
     183,   325,   271,   199,   236,   196,    61,   201,   151,   149,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   200,   336,   205,
     206,   207,   208,   238,   202,   142,    71,   283,   284,   285,
     286,   346,   142,   203,   204,   339,   341,   151,   344,   159,
      39,   334,   321,   323,   327,   196,   196,   328,   353,   213,
     214,   215,   149,   360,   349,   268,   151,   142,   241,   169,
     356,   358,   363,   364,   347,   366,   242,   196,    89,   372,
     348,   151,   245,   373,   255,   374,   375,   369,   147,    92,
      93,    94,    95,    96,   378,   379,   352,   354,   261,   196,
     196,    98,   256,   157,   337,   365,   258,   142,   196,   100,
     101,   102,   103,   104,   367,   376,   105,   196,   196,   151,
     209,   210,   211,   212,   270,   106,   273,   107,     1,    80,
      81,     2,     3,    82,    83,    84,     4,   151,     5,     6,
       7,    85,    86,    87,     8,     9,    10,    88,    11,    12,
      89,    13,    14,    90,    15,    16,    17,    18,    19,   295,
      91,    92,    93,    94,    95,    96,   246,   155,   300,    97,
     312,   313,   311,    98,   317,    54,    99,   281,   282,   287,
     288,   100,   101,   102,   103,   104,   289,   290,   105,   322,
     330,   331,   332,   350,   362,   370,    44,   106,   156,   107,
       1,    80,    81,     2,     3,    82,    83,    84,     4,   351,
       5,     6,     7,    85,    86,    87,     8,     9,    10,    88,
      11,    12,    89,    13,    14,    90,    15,    16,    17,    18,
      19,   161,    91,    92,    93,    94,    95,    96,   314,   152,
     248,    97,   310,   264,   191,    98,   275,    54,   190,   277,
       0,   278,     0,   100,   101,   102,   103,   104,   279,     0,
     105,    80,    81,   280,     0,    82,    83,    84,     0,   106,
       0,   107,     0,    85,    86,    87,     0,     0,     0,    88,
       0,     0,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,    97,     0,     0,     0,    98,     0,    54,   192,     0,
       0,     0,     0,   100,   101,   102,   103,   104,     0,     0,
     105,    80,    81,     0,     0,    82,    83,    84,     0,   106,
       0,   107,     0,    85,    86,    87,     0,     0,     0,    88,
       0,     0,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,    97,     0,     0,     0,    98,     0,    54,   272,     0,
       0,     0,     0,   100,   101,   102,   103,   104,     0,     0,
     105,    80,    81,     0,     0,    82,    83,    84,     0,   106,
       0,   107,     0,    85,    86,    87,     0,     0,     0,    88,
       0,     0,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,    97,     0,     0,     0,    98,     0,    54,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,     0,     0,
     105,     2,     3,     0,     0,     0,     4,     0,     5,   106,
       7,   107,     0,     0,     8,     9,     0,     0,    11,    12,
      89,     0,    14,     0,     0,    16,    17,    18,    19,     0,
     147,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,     0,    43,   105,     0,
       1,     0,     0,     2,     3,     0,     0,   106,     4,   107,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,    20,     0,     0,     0,   216,     0,     1,     0,
       0,     2,     3,     0,     0,    21,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    22,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
      20,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,     1,   235,   301,     2,     3,     0,   236,     0,
       4,     0,     5,     6,     7,    22,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,   267,   301,     2,
       3,     0,   236,     0,     4,     0,     5,     6,     7,    22,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     1,     0,     0,     2,     3,     0,
       0,    21,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    22,    11,    12,     0,    13,    14,    89,
      15,    16,    17,    18,    19,     0,     0,     0,     0,   147,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   309,     0,   148,    89,
     100,   101,   102,   103,   104,     0,     0,   105,     0,   147,
      92,    93,    94,    95,    96,     0,   106,     0,   107,     0,
       0,     0,    98,     0,   157,     0,     0,     0,    89,     0,
     100,   101,   102,   103,   104,     0,     0,   105,   147,    92,
      93,    94,    95,    96,     0,     0,   106,   178,   107,     0,
       0,    98,     0,     0,     0,     0,     0,    89,     0,   100,
     101,   102,   103,   104,     0,     0,   105,   147,    92,    93,
      94,    95,    96,     0,     0,   106,   259,   107,     0,     0,
      98,     0,     0,     0,     0,     0,    89,     0,   100,   101,
     102,   103,   104,     0,     0,   105,   147,    92,    93,    94,
      95,    96,     0,     0,   106,     0,   107,     0,     0,    98,
     296,     0,     0,     0,     0,    89,     0,   100,   101,   102,
     103,   104,     0,     0,   105,   147,    92,    93,    94,    95,
      96,     0,     0,   106,     0,   107,     0,     0,    98,     0,
       0,     0,     0,     0,   304,     0,   100,   101,   102,   103,
     104,     0,     0,   105,     0,    89,     0,     0,     0,     0,
       0,     0,   106,     0,   107,   147,    92,    93,    94,    95,
      96,     0,     0,     0,   318,     0,     0,     0,    98,     0,
       0,     0,     0,     0,    89,     0,   100,   101,   102,   103,
     104,     0,     0,   105,   147,    92,    93,    94,    95,    96,
       0,     0,   106,     0,   107,     0,     0,    98,     0,     0,
       0,     0,     0,   335,    89,   100,   101,   102,   103,   104,
       0,     0,   105,     0,   147,    92,    93,    94,    95,    96,
       0,   106,     0,   107,     0,     0,     0,    98,   340,     0,
       0,     0,     0,    89,     0,   100,   101,   102,   103,   104,
       0,     0,   105,   147,    92,    93,    94,    95,    96,     0,
       0,   106,   343,   107,     0,     0,    98,     0,     0,     0,
       0,     0,    89,     0,   100,   101,   102,   103,   104,     0,
       0,   105,   147,    92,    93,    94,    95,    96,     0,     0,
     106,     0,   107,     0,     0,    98,   355,     0,     0,     0,
       0,    89,     0,   100,   101,   102,   103,   104,     0,     0,
     105,   147,    92,    93,    94,    95,    96,     0,     0,   106,
       0,   107,     0,     0,    98,   357,     0,     0,     0,     0,
      89,     0,   100,   101,   102,   103,   104,     0,     0,   105,
     147,    92,    93,    94,    95,    96,     0,     0,   106,     0,
     107,     0,     0,    98,   368,     0,     0,     0,     0,    89,
       0,   100,   101,   102,   103,   104,     0,     0,   105,   147,
      92,    93,    94,    95,    96,     0,     0,   106,     0,   107,
       0,     0,    98,     0,     0,     0,     0,     0,    89,     0,
     100,   101,   102,   103,   104,     0,     0,   105,   147,    92,
      93,    94,    95,    96,     0,     0,   106,     0,   107,     0,
       0,   180,     0,     0,     0,     0,     0,    89,     0,   100,
     101,   102,   103,   104,     0,     0,   105,   147,    92,    93,
      94,    95,    96,     0,     0,   106,     0,   107,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,     0,     0,   105,     0,     1,     0,     0,
       2,     3,     0,     0,   106,     4,   107,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,     0,
       1,     0,     0,     2,     3,     0,     0,    71,     4,     0,
       5,     6,     7,     0,    54,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,    54,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     1,   140,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,   141,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     2,     3,     0,     0,     0,     4,
       0,     5,     0,     7,     0,     0,     0,     8,     9,   333,
       0,    11,    12,     0,     0,    14,     0,     0,    16,    17,
      18,    19,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     8,     9,     0,   164,
      11,    12,     0,     0,    14,     0,     0,    16,    17,    18,
      19,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,   251,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    81,    84,    59,    36,   157,    77,    71,     7,   142,
      49,    35,    22,    52,    60,   133,    88,    50,    75,    76,
      22,    65,   238,    23,    48,    34,    98,     0,    28,    29,
      30,   113,    42,    53,    33,    81,    21,    35,    35,    48,
      42,    98,    27,    53,    88,    35,    52,    56,    54,    35,
      23,   184,   268,    50,    74,    75,    76,    77,    44,    59,
      50,    60,    48,    72,    74,    75,    76,    77,    44,    35,
      42,    60,    57,   153,    60,    49,    52,    44,    98,    48,
      52,    43,    48,    56,    53,    70,   166,    53,    98,    35,
     161,   173,    81,   157,    79,   213,   214,   215,    48,    72,
      89,   183,    48,   175,    54,   177,    41,   153,   180,   191,
     182,   100,   101,    48,    60,   187,    50,    35,    53,    44,
     166,    56,    57,   180,    42,    35,   198,    52,    44,    44,
      48,    44,   196,    42,    48,   108,    52,    52,    48,    53,
     142,   161,    60,    53,   133,    44,    60,    44,    51,    52,
      60,   161,   270,    52,    89,    52,   236,   142,    48,   231,
     180,   313,    48,   227,   153,    44,   230,    53,     3,    35,
     180,     6,     7,    52,   256,   255,    11,   166,    13,    14,
      15,    48,   184,    48,    19,    20,    21,   259,    23,    24,
     236,    26,    27,    34,    29,    30,    31,    32,    33,    48,
      42,   273,    49,    64,    53,    52,   238,    75,   197,   255,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,    73,   308,    66,
      67,    68,    69,   235,    72,   235,    43,   205,   206,   207,
     208,   323,   242,    70,    71,   317,   318,   236,   320,   313,
     235,   307,    49,    49,    49,    52,    52,    52,   340,    60,
      61,    62,   308,   345,   328,   267,   255,   267,    49,   254,
     342,   343,   354,   355,    49,   357,    52,    52,    25,   361,
     326,   270,    54,   365,    42,   367,   368,   359,    35,    36,
      37,    38,    39,    40,   376,   377,    49,    49,    44,    52,
      52,    48,    42,    50,    51,    49,    34,   307,    52,    56,
      57,    58,    59,    60,    49,    49,    63,    52,    52,   308,
      76,    77,    58,    59,    49,    72,    48,    74,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   326,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    35,
      35,    36,    37,    38,    39,    40,    51,    52,    35,    44,
      51,    52,    35,    48,    48,    50,    51,   203,   204,   209,
     210,    56,    57,    58,    59,    60,   211,   212,    63,    49,
      49,    49,    54,    49,    44,    12,    23,    72,    70,    74,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    54,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    74,    35,    36,    37,    38,    39,    40,   254,    62,
     155,    44,   242,   180,   108,    48,   197,    50,    51,   199,
      -1,   200,    -1,    56,    57,    58,    59,    60,   201,    -1,
      63,     4,     5,   202,    -1,     8,     9,    10,    -1,    72,
      -1,    74,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    -1,    -1,
      63,     4,     5,    -1,    -1,     8,     9,    10,    -1,    72,
      -1,    74,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    51,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    -1,    -1,
      63,     4,     5,    -1,    -1,     8,     9,    10,    -1,    72,
      -1,    74,    -1,    16,    17,    18,    -1,    -1,    -1,    22,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    -1,    -1,
      63,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    72,
      15,    74,    -1,    -1,    19,    20,    -1,    -1,    23,    24,
      25,    -1,    27,    -1,    -1,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    -1,     0,    63,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    72,    11,    74,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    -1,    43,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    48,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    60,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,     3,    48,    49,     6,     7,    -1,    53,    -1,
      11,    -1,    13,    14,    15,    60,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    48,    49,     6,
       7,    -1,    53,    -1,    11,    -1,    13,    14,    15,    60,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    48,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    60,    23,    24,    -1,    26,    27,    25,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    55,    -1,    54,    25,
      56,    57,    58,    59,    60,    -1,    -1,    63,    -1,    35,
      36,    37,    38,    39,    40,    -1,    72,    -1,    74,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    25,    -1,
      56,    57,    58,    59,    60,    -1,    -1,    63,    35,    36,
      37,    38,    39,    40,    -1,    -1,    72,    44,    74,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    25,    -1,    56,
      57,    58,    59,    60,    -1,    -1,    63,    35,    36,    37,
      38,    39,    40,    -1,    -1,    72,    44,    74,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    25,    -1,    56,    57,
      58,    59,    60,    -1,    -1,    63,    35,    36,    37,    38,
      39,    40,    -1,    -1,    72,    -1,    74,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    25,    -1,    56,    57,    58,
      59,    60,    -1,    -1,    63,    35,    36,    37,    38,    39,
      40,    -1,    -1,    72,    -1,    74,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    59,
      60,    -1,    -1,    63,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    35,    36,    37,    38,    39,
      40,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    56,    57,    58,    59,
      60,    -1,    -1,    63,    35,    36,    37,    38,    39,    40,
      -1,    -1,    72,    -1,    74,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    25,    56,    57,    58,    59,    60,
      -1,    -1,    63,    -1,    35,    36,    37,    38,    39,    40,
      -1,    72,    -1,    74,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    25,    -1,    56,    57,    58,    59,    60,
      -1,    -1,    63,    35,    36,    37,    38,    39,    40,    -1,
      -1,    72,    44,    74,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    56,    57,    58,    59,    60,    -1,
      -1,    63,    35,    36,    37,    38,    39,    40,    -1,    -1,
      72,    -1,    74,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    25,    -1,    56,    57,    58,    59,    60,    -1,    -1,
      63,    35,    36,    37,    38,    39,    40,    -1,    -1,    72,
      -1,    74,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      25,    -1,    56,    57,    58,    59,    60,    -1,    -1,    63,
      35,    36,    37,    38,    39,    40,    -1,    -1,    72,    -1,
      74,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    25,
      -1,    56,    57,    58,    59,    60,    -1,    -1,    63,    35,
      36,    37,    38,    39,    40,    -1,    -1,    72,    -1,    74,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      56,    57,    58,    59,    60,    -1,    -1,    63,    35,    36,
      37,    38,    39,    40,    -1,    -1,    72,    -1,    74,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    25,    -1,    56,
      57,    58,    59,    60,    -1,    -1,    63,    35,    36,    37,
      38,    39,    40,    -1,    -1,    72,    -1,    74,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    -1,    -1,    63,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    72,    11,    74,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    -1,
       3,    -1,    -1,     6,     7,    -1,    -1,    43,    11,    -1,
      13,    14,    15,    -1,    50,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    50,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,     3,    35,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    49,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    -1,    15,    -1,    -1,    -1,    19,    20,    49,
      -1,    23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,
      32,    33,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,    51,
      23,    24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,
      33,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    51,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    48,    60,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   109,   112,   113,   114,    35,    50,   112,
      99,   114,   115,     0,    92,    44,   103,   104,   112,    96,
      96,    96,    35,    50,    50,    94,    95,    96,   128,    48,
      53,   113,    50,    35,   110,   111,    49,    99,   114,    44,
      52,    43,    95,   128,    50,    98,    99,   102,   105,   106,
       4,     5,     8,     9,    10,    16,    17,    18,    22,    25,
      28,    35,    36,    37,    38,    39,    40,    44,    48,    51,
      56,    57,    58,    59,    60,    63,    72,    74,    95,   125,
     126,   127,   128,   129,   130,   134,   135,   137,   138,   139,
     141,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   159,    94,   128,   112,
      35,    49,    96,   116,   117,   118,   119,    35,    54,   141,
     142,   154,   110,    43,    51,    52,   104,    50,   120,   139,
     128,   102,   106,   106,    51,   105,    42,   107,   108,   112,
      44,   142,    44,    42,   125,    48,    35,    48,    44,   138,
      48,   154,    48,    42,   106,   122,   138,    48,   154,   154,
      51,   129,    51,   125,    34,    44,    52,    65,    88,    64,
      73,    75,    72,    70,    71,    66,    67,    68,    69,    76,
      77,    58,    59,    60,    61,    62,    43,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   140,   153,    41,
      48,    53,    56,    57,    89,    48,    53,   112,   114,   123,
     124,    49,    52,    49,    52,    54,    51,   142,   111,   120,
     121,    51,   142,    44,    52,    42,    42,   125,    34,    44,
     138,    44,   138,    44,   122,   138,   125,    48,   114,   123,
      49,    49,    51,    48,   139,   144,   138,   145,   146,   147,
     148,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   139,    35,    49,   139,   158,   138,
      35,    49,   116,   123,    54,   142,   124,    48,    53,    55,
     118,    35,    51,    52,   108,   142,   125,    48,    44,   138,
      44,    49,    49,    49,   153,   138,    42,    49,    52,    54,
      49,    49,    54,    49,   116,    54,   142,    51,   120,   138,
      49,   138,    44,    44,   138,   131,   125,    49,   141,   139,
      49,    54,    49,   125,    49,    49,   138,    49,   138,    44,
     125,   136,    44,   125,   125,    49,   125,    49,    49,   138,
      12,   132,   125,   125,   125,   125,    49,   133,   125,   125
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 84 "Compiler.y"
    {printf("\tReduced : translation_unit -> external_declaration\n");;}
    break;

  case 3:
#line 85 "Compiler.y"
    {printf("\tReduced : translation_unit -> translation_unit external_declaration\n");;}
    break;

  case 4:
#line 90 "Compiler.y"
    {printf("\tReduced : external_declaration -> function_definition\n");;}
    break;

  case 5:
#line 92 "Compiler.y"
    {printf("\tReduced : external_declaration -> declaration\n");;}
    break;

  case 6:
#line 97 "Compiler.y"
    {printf("\tReduced : function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");;}
    break;

  case 7:
#line 99 "Compiler.y"
    {printf("\tReduced : function_definition -> declarator declaration_list compound_statement\n");;}
    break;

  case 8:
#line 101 "Compiler.y"
    {printf("\tReduced : function_definition -> declaration_specifiers declarator compound_statement\n");;}
    break;

  case 9:
#line 103 "Compiler.y"
    {printf("\tReduced : function_definition -> declarator compound_statement\n");;}
    break;

  case 10:
#line 108 "Compiler.y"
    {
			printf("\tReduced : declaration -> declaration_specifiers init_declarator_list SEMI_COLON\n");


			if(cnt[signed_a]==1)
			strcat(str,"signed ");
			if(cnt[unsigned_a]==1)
			strcat(str,"unsigned ");
			if(cnt[long_a]==1)
			strcat(str,"long ");
			if(cnt[long_a]==2)
			strcat(str,"long long ");
			if(cnt[short_a]==1)
			strcat(str,"short ");
			if(cnt[char_a]==1)
			strcat(str,"char ");
			if(cnt[int_a]==1)
			strcat(str,"int ");
		        if(cnt[float_a]==1)
			strcat(str,"float ");
			if(cnt[double_a]==1)
			strcat(str,"double ");




			for(i=0;i<id;i++)
			{
                l=strlen(table[i].size);
                table[i].no_dimen=0;
                for(j=0;j<l;j++)
                {
                    if(table[i].size[j]==',')
                        table[i].no_dimen++;
                }
                if(!strcmp(table[i].datatype,"NULL") && table[i].line==lines)
				strcpy(table[i].datatype,str);
			}

			for(i=0;i<7;i++)
			cnt[arr[i]]=0;
			cnt[long_a]=0;

			memset(str,0,strlen(str));
			auto_a=0;extern_a=0;typedef_a=0;static_a=0;register_a=0;sum=0;
		    ;}
    break;

  case 11:
#line 154 "Compiler.y"
    {printf("\tReduced : declaration -> declaration_specifiers SEMI_COLON\n");for(i=0;i<=8;i++)cnt[arr[i]]=0;cnt[long_a]=0;auto_a=0;extern_a=0;typedef_a=0;static_a=0;register_a=0;sum=0;id=0;;}
    break;

  case 12:
#line 158 "Compiler.y"
    {printf("\tReduced : declaration_list -> declaration\n");;}
    break;

  case 13:
#line 159 "Compiler.y"
    {printf("\tReduced : declaration_list -> declaration_list declaration\n");;}
    break;

  case 14:
#line 164 "Compiler.y"
    {
						printf("\tReduced : declaration_specifiers -> storage_class_specifier declaration_specifiers\n");
						sum=auto_a+register_a+static_a+typedef_a+extern_a;
						if(auto_a>1 || register_a>1 || static_a>1 || extern_a>1 || typedef_a>1 || sum>1)
						yyerror();
					  ;}
    break;

  case 15:
#line 170 "Compiler.y"
    {printf("\tReduced : declaration_specifiers -> storage_class_specifier\n");;}
    break;

  case 16:
#line 172 "Compiler.y"
    {
						printf("\tReduced : declaration_specifiers -> type_specifier declaration_specifiers\n");

						/*NONE OF THE DATA TYPE SHOULD BE PRESENT TWICE Ex:INT INT IS WRONG */

						for(i=0;i<7;i++)
						{
							if(cnt[arr[i]]>1)
							{
							printf("\n*****ERROR: Wrong Data Type *****\n");
							exit(0);
							}
						}
						if(cnt[long_a]>2)
						{
						printf("\n*****ERROR: long cannot occur more than twice in Data Type *****\n ");
						exit(0);
						}

						res=0;
						for(i=0;i<7;i++)
						{
							if(cnt[arr[i]]==1)
							res=res|arr[i];
						}

						if(cnt[long_a]==1 || cnt[long_a]==2)
						res=res|long_a;

						c=0;

						for(i=0;i<=22;i++)
						{
							if(res==valid[i])
							{c=1;break;}
						}



						if(c==0)
						{
						printf("\n*****ERROR: Wrong Data Type given in Line No. %d*****\n",lines);
						exit(0);
						}
					  ;}
    break;

  case 17:
#line 217 "Compiler.y"
    {printf("\tReduced : declaration_specifiers -> type_specifier\n");;}
    break;

  case 18:
#line 219 "Compiler.y"
    {printf("\tReduced : declaration_specifiers -> type_qualifier declaration_specifiers\n");;}
    break;

  case 19:
#line 220 "Compiler.y"
    {printf("\tReduced : declaration_specifiers -> type_qualifier\n");;}
    break;

  case 20:
#line 224 "Compiler.y"
    {printf("\tReduced : storage_class_specifier -> AUTO\n");auto_a++;;}
    break;

  case 21:
#line 225 "Compiler.y"
    {printf("\tReduced : storage_class_specifier -> REGISTER\n");register_a++;;}
    break;

  case 22:
#line 226 "Compiler.y"
    {printf("\tReduced : storage_class_specifier -> STATIC\n");static_a++;;}
    break;

  case 23:
#line 227 "Compiler.y"
    {printf("\tReduced : storage_class_specifier -> EXTERN\n");extern_a++;;}
    break;

  case 24:
#line 228 "Compiler.y"
    {printf("\tReduced : storage_class_specifier -> TYPEDEF\n");typedef_a++;;}
    break;

  case 25:
#line 232 "Compiler.y"
    {printf("\tReduced : type_specifier -> VOID\n");;}
    break;

  case 26:
#line 233 "Compiler.y"
    {printf("\tReduced : type_specifier -> CHAR\n");cnt[char_a]++;;}
    break;

  case 27:
#line 234 "Compiler.y"
    {printf("\tReduced : type_specifier -> SHORT\n");cnt[short_a]++;;}
    break;

  case 28:
#line 235 "Compiler.y"
    {printf("\tReduced : type_specifier -> INT\n");cnt[int_a]++;;}
    break;

  case 29:
#line 236 "Compiler.y"
    {printf("\tReduced : type_specifier -> LONG\n");cnt[long_a]++;;}
    break;

  case 30:
#line 237 "Compiler.y"
    {printf("\tReduced : type_specifier -> FLOAT\n");cnt[float_a]++;;}
    break;

  case 31:
#line 238 "Compiler.y"
    {printf("\tReduced : type_specifier -> DOUBLE\n");cnt[double_a]++;;}
    break;

  case 32:
#line 239 "Compiler.y"
    {printf("\tReduced : type_specifier -> SIGNED\n");cnt[signed_a]++;;}
    break;

  case 33:
#line 240 "Compiler.y"
    {printf("\tReduced : type_specifier -> UNSIGNED\n");cnt[unsigned_a]++;;}
    break;

  case 34:
#line 241 "Compiler.y"
    {printf("\tReduced : type_specifier -> struct_or_union_specifier\n");;}
    break;

  case 35:
#line 242 "Compiler.y"
    {printf("\tReduced : type_specifier -> enum_specifier\n");;}
    break;

  case 36:
#line 246 "Compiler.y"
    {printf("\tReduced : type_qualifier -> CONST\n");;}
    break;

  case 37:
#line 247 "Compiler.y"
    {printf("\tReduced : type_qualifier -> VOLATILE\n");;}
    break;

  case 38:
#line 252 "Compiler.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER OPEN_BRACES struct_declaration_list CLOSE_BRACES\n");;}
    break;

  case 39:
#line 254 "Compiler.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union OPEN_BRACES struct_declaration_list CLOSE_BRACES\n");;}
    break;

  case 40:
#line 255 "Compiler.y"
    {printf("\tReduced : struct_or_union_specifier -> struct_or_union IDENTIFIER\n");;}
    break;

  case 41:
#line 259 "Compiler.y"
    {printf("\tReduced : struct_or_union -> STRUCT\n");;}
    break;

  case 42:
#line 260 "Compiler.y"
    {printf("\tReduced : struct_or_union -> UNION\n");;}
    break;

  case 43:
#line 264 "Compiler.y"
    {printf("\tReduced : struct_declaration_list -> struct_declaration\n");;}
    break;

  case 44:
#line 266 "Compiler.y"
    {printf("\tReduced : struct_declaration_list -> struct_declaration_list struct_declaration\n");;}
    break;

  case 45:
#line 270 "Compiler.y"
    {printf("\tReduced : init_declarator_list -> init_declarator\n");;}
    break;

  case 46:
#line 272 "Compiler.y"
    {printf("\tReduced : init_declarator_list -> init_declarator_list COMMA init_declarator\n");;}
    break;

  case 47:
#line 276 "Compiler.y"
    {printf("\tReduced : init_declarator -> declarator\n");;}
    break;

  case 48:
#line 278 "Compiler.y"
    {
				printf("\tReduced : init_declarator -> declarator EQUALS initializer\n");
				if(!strcmp(table[id-1].initial,"0"))
				strcpy(table[id-1].initial,temp);

			   ;}
    break;

  case 49:
#line 288 "Compiler.y"
    {printf("\tReduced : struct_declaration -> specifier_qualifier_list struct_declarator_list SEMI_COLON\n");;}
    break;

  case 50:
#line 293 "Compiler.y"
    {printf("\tReduced : specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");;}
    break;

  case 51:
#line 294 "Compiler.y"
    {printf("\tReduced : specifier_qualifier_list -> type_specifier\n");;}
    break;

  case 52:
#line 296 "Compiler.y"
    {printf("\tReduced : specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");;}
    break;

  case 53:
#line 298 "Compiler.y"
    {printf("\tReduced : specifier_qualifier_list -> type_qualifier\n");;}
    break;

  case 54:
#line 302 "Compiler.y"
    {printf("\tReduced : struct_declarator_list -> struct_declarator\n");;}
    break;

  case 55:
#line 304 "Compiler.y"
    {printf("\tReduced : struct_declarator_list -> struct_declarator_list COMMA struct_declarator\n");;}
    break;

  case 56:
#line 308 "Compiler.y"
    {printf("\tReduced : struct_declarator -> declarator\n");;}
    break;

  case 57:
#line 309 "Compiler.y"
    {printf("\tReduced : struct_declarator -> declarator COLON constant_expression\n");;}
    break;

  case 58:
#line 310 "Compiler.y"
    {printf("\tReduced : struct_declarator -> COLON constant_expression\n");;}
    break;

  case 59:
#line 315 "Compiler.y"
    {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER OPEN_BRACES enumerator_list CLOSE_BRACES\n");;}
    break;

  case 60:
#line 317 "Compiler.y"
    {printf("\tReduced : enum_specifier -> ENUM OPEN_BRACES enumerator_list CLOSE_BRACES\n");;}
    break;

  case 61:
#line 318 "Compiler.y"
    {printf("\tReduced : enum_specifier -> ENUM IDENTIFIER\n");;}
    break;

  case 62:
#line 322 "Compiler.y"
    {printf("\tReduced : enumerator_list -> enumerator\n");;}
    break;

  case 63:
#line 323 "Compiler.y"
    {printf("\tReduced : enumerator_list -> enumerator_list COMMA enumerator\n");;}
    break;

  case 64:
#line 327 "Compiler.y"
    {printf("\tReduced : enumerator -> IDENTIFIER\n");;}
    break;

  case 65:
#line 328 "Compiler.y"
    {printf("\tReduced : enumerator -> IDENTIFIER EQUALS constant_expression\n");;}
    break;

  case 66:
#line 332 "Compiler.y"
    {printf("\tReduced : declarator -> pointer direct_declarator\n");;}
    break;

  case 67:
#line 333 "Compiler.y"
    {printf("\tReduced : declarator -> direct_declarator\n");strcat(table[id-1].size,"");;}
    break;

  case 68:
#line 338 "Compiler.y"
    {
					printf("\tReduced : direct_declarator -> IDENTIFIER\n");

					check((yyvsp[(1) - (1)].varname));
				    insert((yyvsp[(1) - (1)].varname),"NULL",lines);

				 ;}
    break;

  case 69:
#line 345 "Compiler.y"
    {printf("\tReduced : direct_declarator -> OPEN_PARANTHESES declarator CLOSE_PARANTHESES\n");;}
    break;

  case 70:
#line 347 "Compiler.y"
    {
                    printf("\tReduced : direct_declarator -> direct_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");
                    printf("%s\n",(yyvsp[(3) - (4)].varname));
                    strcat(table[id-1].size,(yyvsp[(3) - (4)].varname));
                    strcat(table[id-1].size,",");
                 ;}
    break;

  case 71:
#line 354 "Compiler.y"
    {printf("\tReduced : direct_declarator -> direct_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");;}
    break;

  case 72:
#line 356 "Compiler.y"
    {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");;}
    break;

  case 73:
#line 358 "Compiler.y"
    {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES identifier_list CLOSE_PARANTHESES\n");;}
    break;

  case 74:
#line 360 "Compiler.y"
    {printf("\tReduced : direct_declarator -> direct_declarator OPEN_PARANTHESES CLOSE_PARANTHESES\n");;}
    break;

  case 75:
#line 364 "Compiler.y"
    {printf("\tReduced : pointer -> MULTIPLY type_qualifier_list\n");;}
    break;

  case 76:
#line 365 "Compiler.y"
    {printf("\tReduced : pointer -> MULTIPLY\n");;}
    break;

  case 77:
#line 366 "Compiler.y"
    {printf("\tReduced : pointer -> MULTIPLY type_qualifier_list pointer\n");;}
    break;

  case 78:
#line 367 "Compiler.y"
    {printf("\tReduced : pointer -> MULTIPLY pointer\n");;}
    break;

  case 79:
#line 371 "Compiler.y"
    {printf("\tReduced : type_qualifier_list -> type_qualifier\n");;}
    break;

  case 80:
#line 372 "Compiler.y"
    {printf("\tReduced : type_qualifier_list -> type_qualifier_list type_qualifier\n");;}
    break;

  case 81:
#line 376 "Compiler.y"
    {printf("\tReduced : parameter_type_list -> parameter_list\n");;}
    break;

  case 82:
#line 377 "Compiler.y"
    {printf("\tReduced : parameter_type_list -> parameter_list COMMA THREE_DOT\n");;}
    break;

  case 83:
#line 381 "Compiler.y"
    {printf("\tReduced : parameter_list -> parameter_declaration\n");;}
    break;

  case 84:
#line 382 "Compiler.y"
    {printf("\tReduced : parameter_list -> parameter_list COMMA parameter_declaration\n");;}
    break;

  case 85:
#line 386 "Compiler.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers declarator\n");;}
    break;

  case 86:
#line 388 "Compiler.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers abstract_declarator\n");;}
    break;

  case 87:
#line 389 "Compiler.y"
    {printf("\tReduced : parameter_declaration -> declaration_specifiers\n");;}
    break;

  case 88:
#line 393 "Compiler.y"
    {printf("\tReduced : identifier_list -> IDENTIFIER\n");;}
    break;

  case 89:
#line 394 "Compiler.y"
    {printf("\tReduced : identifier_list -> identifier_list COMMA IDENTIFIER\n");;}
    break;

  case 90:
#line 398 "Compiler.y"
    {printf("\tReduced : initializer -> assignment_expression\n");;}
    break;

  case 91:
#line 400 "Compiler.y"
    {
            printf("\tReduced : initializer -> OPEN_BRACES initializer_list CLOSE_BRACES\n");
            strcpy(table[id-1].initial,initial_list);printf("%s\n",initial_list);
            if(!strcmp(table[id-1].size,""))
            {
                table[id-1].size[0]=(char)(size_not_given+48);
                table[id-1].size[1]='\0';
            }
           ;}
    break;

  case 92:
#line 409 "Compiler.y"
    {printf("\tReduced : initializer -> OPEN_BRACES initializer_list COMMA CLOSE_BRACES\n");;}
    break;

  case 93:
#line 413 "Compiler.y"
    {printf("\tReduced : initializer_list -> initializer\n");;}
    break;

  case 94:
#line 414 "Compiler.y"
    {printf("\tReduced : initializer_list -> initializer_list COMMA initializer\n");;}
    break;

  case 95:
#line 418 "Compiler.y"
    {printf("\tReduced : type_name -> specifier_qualifier_list abstract_declarator\n");;}
    break;

  case 96:
#line 419 "Compiler.y"
    {printf("\tReduced : type_name -> specifier_qualifier_list\n");;}
    break;

  case 97:
#line 423 "Compiler.y"
    {printf("\tReduced : abstract_declarator ->  pointer\n");;}
    break;

  case 98:
#line 424 "Compiler.y"
    {printf("\tReduced : abstract_declarator ->  pointer direct_abstract_declarator\n");;}
    break;

  case 99:
#line 425 "Compiler.y"
    {printf("\tReduced : abstract_declarator -> direct_abstract_declarator\n");;}
    break;

  case 100:
#line 430 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES abstract_declarator CLOSE_PARANTHESES\n");;}
    break;

  case 101:
#line 432 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");;}
    break;

  case 102:
#line 434 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> OPEN_SQ_BRACKET constant_expression CLOSE_SQ_BRACKET\n");;}
    break;

  case 103:
#line 436 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");;}
    break;

  case 104:
#line 438 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> OPEN_SQ_BRACKET CLOSE_SQ_BRACKET\n");;}
    break;

  case 105:
#line 440 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");;}
    break;

  case 106:
#line 442 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES parameter_type_list CLOSE_PARANTHESES\n");;}
    break;

  case 107:
#line 444 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> direct_abstract_declarator OPEN_PARANTHESES CLOSE_PARANTHESES\n");;}
    break;

  case 108:
#line 446 "Compiler.y"
    {printf("\tReduced : direct_abstract_declarator -> OPEN_PARANTHESES CLOSE_PARANTHESES\n");;}
    break;

  case 109:
#line 451 "Compiler.y"
    {printf("\tReduced : statement -> labeled_statement\n");;}
    break;

  case 110:
#line 452 "Compiler.y"
    {printf("\tReduced : statement -> expression_statement\n");;}
    break;

  case 111:
#line 453 "Compiler.y"
    {printf("\tReduced : statement -> compound_statement\n");;}
    break;

  case 112:
#line 454 "Compiler.y"
    {printf("\tReduced : statement -> selection_statement\n");;}
    break;

  case 113:
#line 455 "Compiler.y"
    {printf("\tReduced : statement -> iteration_statement\n");;}
    break;

  case 114:
#line 456 "Compiler.y"
    {printf("\tReduced : statement -> jump_statement\n");;}
    break;

  case 115:
#line 460 "Compiler.y"
    {printf("\tReduced : labeled_statement -> IDENTIFIER COLON statement\n");;}
    break;

  case 116:
#line 461 "Compiler.y"
    {printf("\tReduced : labeled_statement -> CASE constant_expression COLON statement\n");;}
    break;

  case 117:
#line 462 "Compiler.y"
    {printf("\tReduced : labeled_statement -> DEFAULT COLON statement\n");;}
    break;

  case 118:
#line 466 "Compiler.y"
    {printf("\tReduced : expression_statement -> expression SEMI_COLON\n");;}
    break;

  case 119:
#line 467 "Compiler.y"
    {printf("\tReduced : expression_statement -> SEMI_COLON\n");;}
    break;

  case 120:
#line 471 "Compiler.y"
    {printf("\tReduced : compound_statement -> OPEN_BRACES declaration_list statement_list CLOSE_BRACES\n");;}
    break;

  case 121:
#line 472 "Compiler.y"
    {printf("\tReduced : compound_statement -> OPEN_BRACES declaration_list CLOSE_BRACES\n");;}
    break;

  case 122:
#line 473 "Compiler.y"
    {printf("\tReduced : compound_statement -> OPEN_BRACES statement_list CLOSE_BRACES\n");;}
    break;

  case 123:
#line 474 "Compiler.y"
    {printf("\tReduced : compound_statement -> OPEN_BRACES CLOSE_BRACES\n");;}
    break;

  case 124:
#line 478 "Compiler.y"
    {printf("\tReduced : statement_list -> statement\n");;}
    break;

  case 125:
#line 479 "Compiler.y"
    {printf("\tReduced : statement_list -> statement_list statement\n");;}
    break;

  case 126:
#line 483 "Compiler.y"
    {
                    generate();
                    tname[0]='L';
                    fprintf(fp,"IF FALSE %s, goto %s\n",(yyvsp[(3) - (4)].varname),tname);
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(3) - (4)].varname));
                    strcpy(quad[idx].operator,"IF");
                    idx++;
                    top++;
                    strcpy(label[top],tname);
                    printf("\t selection_statement -> IF OPEN_PARANTHESES expression CLOSE_PARANTHESES statement leftfactor\n");
                    ;}
    break;

  case 128:
#line 497 "Compiler.y"
    {printf("\tReduced : selection_statement -> SWITCH OPEN_PARANTHESES expression CLOSE_PARANTHESES statement\n");;}
    break;

  case 129:
#line 500 "Compiler.y"
    {
            fprintf(fp,"%s :\n",label[top]);
            strcpy(quad[idx].operator,"LABEL");
            strcpy(quad[idx].result,label[top]);
            idx++;
            top--;
            printf("\tReduced : leftfactor -> action\n");
            ;}
    break;

  case 130:
#line 509 "Compiler.y"
    {
                 generate();
                 tname[0]='L';
                 fprintf(fp,"goto %s\n",tname);
                 strcpy(quad[idx].operator,"GOTO");
                 top1++;
                 strcpy(label1[top1],tname);
                 fprintf(fp,"%s :\n",label[top]);
                  strcpy(quad[idx].operator,"LABEL");
                 strcpy(quad[idx].result,label[top]);
                 idx++;
                 top--;
                 printf("\tReduced : leftfactor -> action ELSE statement\n");
            ;}
    break;

  case 131:
#line 524 "Compiler.y"
    {

                fprintf(fp,"%s :\n",label1[top1]);
                strcpy(quad[idx].operator,"LABEL");
                strcpy(quad[idx].result,label1[top1]);
                idx++;
                top1--;
            ;}
    break;

  case 132:
#line 535 "Compiler.y"
    {
				      generate();
                      tname[0]='L';
                      fprintf(fp,"%s:\n",tname);

                       strcpy(quad[idx].result,tname);
                       strcpy(quad[idx].operator,"LABEL");
                      idx++;
                      top2++;
                      strcpy(label2[top2],tname);
                    ;}
    break;

  case 133:
#line 547 "Compiler.y"
    {
				       generate();
                       tname[0]='L';
                       fprintf(fp,"IF FALSE %s, goto %s\n",(yyvsp[(4) - (5)].varname),tname);
                       strcpy(quad[idx].result,tname);
                       strcpy(quad[idx].op1,(yyvsp[(4) - (5)].varname));
                       strcpy(quad[idx].operator,"IF");
                        idx++;
                       top3++;
                       strcpy(label3[top3],tname);
                    ;}
    break;

  case 134:
#line 559 "Compiler.y"
    {
                        printf("\tReduced : iteration_statement -> WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES statement\n");
                        fprintf(fp,"goto %s\n",label2[top2]);
                        strcpy(quad[idx].result,label2[top2]);
                        strcpy(quad[idx].operator,"GOTO");
                        idx++;

                        top2--;
                        fprintf(fp,"%s:\n",label3[top3]);
                        strcpy(quad[idx].result,label3[top3]);
                         strcpy(quad[idx].operator,"LABEL");

                       idx++;
                        top3--;
                    ;}
    break;

  case 135:
#line 574 "Compiler.y"
    {printf("\tReduced : iteration_statement -> DO statement WHILE OPEN_PARANTHESES expression CLOSE_PARANTHESES SEMI_COLON\n");;}
    break;

  case 136:
#line 575 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement\n");;}
    break;

  case 137:
#line 576 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement\n");;}
    break;

  case 138:
#line 577 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement\n");;}
    break;

  case 139:
#line 578 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES expression SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement\n");;}
    break;

  case 140:
#line 579 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON expression CLOSE_PARANTHESES statement\n");;}
    break;

  case 141:
#line 580 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON expression SEMI_COLON CLOSE_PARANTHESES statement\n");;}
    break;

  case 142:
#line 581 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON expression CLOSE_PARANTHESES statement\n");;}
    break;

  case 143:
#line 582 "Compiler.y"
    {printf("\tReduced : iteration_statement -> FOR OPEN_PARANTHESES SEMI_COLON SEMI_COLON CLOSE_PARANTHESES statement\n");;}
    break;

  case 144:
#line 586 "Compiler.y"
    {printf("\tReduced : jump_statement -> GOTO IDENTIFIER SEMI_COLON\n");;}
    break;

  case 145:
#line 587 "Compiler.y"
    {printf("\tReduced : jump_statement -> CONTINUE SEMI_COLON\n");;}
    break;

  case 146:
#line 588 "Compiler.y"
    {printf("\tReduced : jump_statement -> BREAK SEMI_COLON\n");;}
    break;

  case 147:
#line 589 "Compiler.y"
    {printf("\tReduced : jump_statement -> RETURN expression SEMI_COLON\n");;}
    break;

  case 148:
#line 590 "Compiler.y"
    {printf("\tReduced : jump_statement -> RETURN SEMI_COLON\n");;}
    break;

  case 149:
#line 595 "Compiler.y"
    {
            printf("\tReduced : expression -> assignment_expression\n");
            strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
          ;}
    break;

  case 150:
#line 599 "Compiler.y"
    {printf("\tReduced : expression -> expression COMMA assignment_expression\n");;}
    break;

  case 151:
#line 604 "Compiler.y"
    {
                        printf("\tReduced : assignment_expression -> conditional_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                     ;}
    break;

  case 152:
#line 609 "Compiler.y"
    {
                        printf("\tReduced : assignment_expression -> unary_expression assignment_operator assignment_expression\n");
                        printf("%s %s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        for(i=0;i<id;i++)
                        {
                               printf("%s %d\n",table[i].name,table[i].no_dimen);
                            if(((!strcmp(table[i].name,(yyvsp[(1) - (3)].varname))) && table[i].no_dimen>0) || ((!strcmp(table[i].name,(yyvsp[(3) - (3)].varname))) && table[i].no_dimen>0))
                            {
                                fprintf(fp,"Dimension Mismatch Exiting....\n");
                                printf("Dimension Mismatch Exiting....\n");
                                exit(0);
                            }
                        }
                        if(!strcmp((yyvsp[(2) - (3)].varname),"="))
                        {
                            fprintf(fp,"%s = %s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(3) - (3)].varname));

                            idx++;
                        }

                        else if(!strcmp((yyvsp[(2) - (3)].varname),"*="))
                        {
                            fprintf(fp,"$s = %s*%s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"*");
                            idx++;
                        }

                        else if(!strcmp((yyvsp[(2) - (3)].varname),"/="))
                        {
                            fprintf(fp,"$s = %s/%s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"/");
                            idx++;
                        }
                        else if(!strcmp((yyvsp[(2) - (3)].varname),"-="))
                        {
                            fprintf(fp,"$s = %s-%s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"-");
                            idx++;
                        }
                        else if(!strcmp((yyvsp[(2) - (3)].varname),"+="))
                        {
                            fprintf(fp,"%s = %s+%s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"+");
                            idx++;
                        }
                        else if(!strcmp((yyvsp[(2) - (3)].varname),"%="))
                        {
                            fprintf(fp,"$s = %s %% %s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"%");
                            idx++;
                        }

                         right=0;
                     ;}
    break;

  case 153:
#line 684 "Compiler.y"
    {
                        printf("\tReduced : assignment_operator -> EQUALS\n");
                        strcpy((yyval.varname),"=");
                        right=1;
                   ;}
    break;

  case 154:
#line 689 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_MUL\n");strcpy((yyval.varname),"*=");;}
    break;

  case 155:
#line 690 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_DIV\n");strcpy((yyval.varname),"/=");;}
    break;

  case 156:
#line 691 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_MOD\n");strcpy((yyval.varname),"%=");;}
    break;

  case 157:
#line 692 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_ADD\n");strcpy((yyval.varname),"+=");;}
    break;

  case 158:
#line 693 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_SUB\n");strcpy((yyval.varname),"-=");;}
    break;

  case 159:
#line 694 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_LSHIFT\n");;}
    break;

  case 160:
#line 695 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_RSHIFT\n");;}
    break;

  case 161:
#line 696 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_AND\n");;}
    break;

  case 162:
#line 697 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_XOR\n");;}
    break;

  case 163:
#line 698 "Compiler.y"
    {printf("\tReduced : assignment_operator -> SHORTHAND_OR\n");;}
    break;

  case 164:
#line 703 "Compiler.y"
    {
                        printf("\tReduced : conditional_expression -> logical_OR_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
					  ;}
    break;

  case 165:
#line 707 "Compiler.y"
    {printf("\tReduced : conditional_expression -> logical_OR_expression TERNARY expression COLON conditional_expression\n");;}
    break;

  case 166:
#line 712 "Compiler.y"
    {
                    printf("\tReduced : constant_expression -> conditional_expression\n");
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                   ;}
    break;

  case 167:
#line 720 "Compiler.y"
    {
                        printf("\tReduced : logical_OR_expression -> logical_AND_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                     ;}
    break;

  case 168:
#line 725 "Compiler.y"
    {
                        printf("\tReduced : logical_OR_expression -> logical_OR_expression OR logical_AND_expression\n");
                        generate();
                        fprintf(fp,"%s = %s OR %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                        strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].operator,"||");
                        idx++;
                        strcpy((yyval.varname),tname);
                     ;}
    break;

  case 169:
#line 740 "Compiler.y"
    {
                        printf("\tReduced : logical_AND_expression -> inclusive_OR_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                      ;}
    break;

  case 170:
#line 745 "Compiler.y"
    {
                        printf("\tReduced : logical_AND_expression -> logical_AND_expression AND inclusive_OR_expression\n");
                        generate();
                        fprintf(fp,"%s = %s AND %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                        strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].operator,"&&");
                        idx++;
                        strcpy((yyval.varname),tname);
                      ;}
    break;

  case 171:
#line 760 "Compiler.y"
    {
                        printf("\tReduced : inclusive_OR_expression -> exclusive_OR_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                       ;}
    break;

  case 172:
#line 765 "Compiler.y"
    {
                            printf("\tReduced : inclusive_OR_expression -> inclusive_OR_expression BITWISE_OR exclusive_OR_expression\n");
                            generate();
                            fprintf(fp,"%s = %s BITWISE_OR %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"|");
                            idx++;
                            strcpy((yyval.varname),tname);
                       ;}
    break;

  case 173:
#line 780 "Compiler.y"
    {
                            printf("\tReduced : exclusive_OR_expression -> AND_expression\n");
                            strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                       ;}
    break;

  case 174:
#line 785 "Compiler.y"
    {
                            printf("\tReduced : exclusive_OR_expression -> exclusive_OR_expression XOR AND_expression\n");
                            generate();
                            fprintf(fp,"%s = %s XOR %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"^");
                            idx++;
                            strcpy((yyval.varname),tname);
                       ;}
    break;

  case 175:
#line 800 "Compiler.y"
    {
                    printf("\tReduced : AND_expression -> equality_expression\n");
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
              ;}
    break;

  case 176:
#line 805 "Compiler.y"
    {
                    printf("\tReduced : AND_expression -> AND_expression BITWISE_AND equality_expression\n");
                    generate();
                    fprintf(fp,"%s = %s BITWISE_AND %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                    strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].operator,"&");
                    idx++;
                    strcpy((yyval.varname),tname);
              ;}
    break;

  case 177:
#line 819 "Compiler.y"
    {
                        printf("\tReduced : equality_expression -> relational_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                   ;}
    break;

  case 178:
#line 824 "Compiler.y"
    {
                        printf("\tReduced : equality_expression -> equality_expression IS_EQUAL_TO relational_expression\n");
                        printf("%s==%s\n",(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"==");
                        idx++;
                        strcpy((yyval.varname),tname);


                    ;}
    break;

  case 179:
#line 843 "Compiler.y"
    {
                        printf("\tReduced : equality_expression -> equality_expression NOT_EQUAL_TO relational_expression\n");
                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s NE %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"!=");
                        idx++;
                        strcpy((yyval.varname),tname);
                   ;}
    break;

  case 180:
#line 862 "Compiler.y"
    {
                        printf("\tReduced : relational_expression -> shift_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                      ;}
    break;

  case 181:
#line 867 "Compiler.y"
    {
                        printf("\tReduced : relational_expression -> relational_expression LESS_THAN shift_expression\n");

                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s LT %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"<");
                        idx++;
                        strcpy((yyval.varname),tname);
                     ;}
    break;

  case 182:
#line 884 "Compiler.y"
    {
                        printf("\tReduced : relational_expression -> relational_expression GREATER_THAN shift_expression\n");
                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s GT %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,">");
                        idx++;
                        strcpy((yyval.varname),tname);
                     ;}
    break;

  case 183:
#line 900 "Compiler.y"
    {
                        printf("\tReduced : relational_expression -> relational_expression LESS_THAN_EQUAL shift_expression\n");
                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s LT_EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,"<=");
                        idx++;
                        strcpy((yyval.varname),tname);
                     ;}
    break;

  case 184:
#line 916 "Compiler.y"
    {
                        printf("\tReduced : relational_expression -> relational_expression GREATER_THAN_EQUAL shift_expression\n");
                        strcpy(s3,(yyvsp[(1) - (3)].varname));
                        strcpy(s4,(yyvsp[(3) - (3)].varname));
                        check_arr((yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));

                        generate();
                        fprintf(fp,"%s = %s GT_EQ %s\n",tname,s3,s4);
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,s3);
                        strcpy(quad[idx].op2,s4);
                        strcpy(quad[idx].operator,">=");
                        idx++;
                        strcpy((yyval.varname),tname);
                     ;}
    break;

  case 185:
#line 935 "Compiler.y"
    {
                    printf("\tReduced : shift_expression -> additive_expression\n");
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                ;}
    break;

  case 186:
#line 940 "Compiler.y"
    {
                    printf("\tReduced : shift_expression -> shift_expression L_SHIFT additive_expression\n");
                    generate();
                    fprintf(fp,"%s = %s L_SHIFT %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                    strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].operator,"<<");
                    idx++;
                    strcpy((yyval.varname),tname);
                ;}
    break;

  case 187:
#line 952 "Compiler.y"
    {
                    printf("\tReduced : shift_expression -> shift_expression R_SHIFT additive_expression\n");
                    generate();
                    fprintf(fp,"%s = %s R_SHIFT %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                    strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                    strcpy(quad[idx].operator,">>");
                    idx++;
                    strcpy((yyval.varname),tname);
                ;}
    break;

  case 188:
#line 967 "Compiler.y"
    {
                        printf("\tReduced : additive_expression -> multiplicative_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                   ;}
    break;

  case 189:
#line 972 "Compiler.y"
    {
                        printf("\tReduced : additive_expression -> additive_expression ADD multiplicative_expression\n");
                        generate();
                        fprintf(fp,"%s=%s + %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                        strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].operator,"+");
                        idx++;
                        strcpy((yyval.varname),tname);
                   ;}
    break;

  case 190:
#line 984 "Compiler.y"
    {
                        printf("\tReduced : additive_expression -> additive_expression SUBTRACT multiplicative_expression\n");
                        generate();
                        fprintf(fp,"%s=%s - %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                        strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                        strcpy(quad[idx].operator,"-");
                        idx++;
                        strcpy((yyval.varname),tname);
                   ;}
    break;

  case 191:
#line 999 "Compiler.y"
    {
                            printf("\tReduced : multiplicative_expression -> cast_expression\n");
                            strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                         ;}
    break;

  case 192:
#line 1004 "Compiler.y"
    {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression MULTIPLY cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s * %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"*");
                            idx++;
                            strcpy((yyval.varname),tname);
                         ;}
    break;

  case 193:
#line 1016 "Compiler.y"
    {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression DIVIDE cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s / %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"/");
                            idx++;
                            strcpy((yyval.varname),tname);
                         ;}
    break;

  case 194:
#line 1028 "Compiler.y"
    {
                            printf("\tReduced : multiplicative_expression -> multiplicative_expression MOD cast_expression\n");
                            generate();
                            fprintf(fp,"%s=%s %% %s\n",tname,(yyvsp[(1) - (3)].varname),(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (3)].varname));
                            strcpy(quad[idx].op2,(yyvsp[(3) - (3)].varname));
                            strcpy(quad[idx].operator,"%%");
                            idx++;
                            strcpy((yyval.varname),tname);
                         ;}
    break;

  case 195:
#line 1043 "Compiler.y"
    {
                    printf("\tReduced : cast_expression -> unary_expression\n");
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
               ;}
    break;

  case 196:
#line 1048 "Compiler.y"
    {printf("\tReduced : cast_expression -> OPEN_PARANTHESES type_name CLOSE_PARANTHESES cast_expression\n");;}
    break;

  case 197:
#line 1052 "Compiler.y"
    {
                        printf("\tReduced : unary_expression -> postfix_expression\n");
                        strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                ;}
    break;

  case 198:
#line 1057 "Compiler.y"
    {
                    printf("\tReduced : unary_expression -> INCREMENT unary_expression\n");
                    generate();
                    fprintf(fp,"%s=%s\n",tname,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(2) - (2)].varname));
                    idx++;
                    fprintf(fp,"%s=%s+1\n",(yyvsp[(2) - (2)].varname),(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].result,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].op1,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].op2,"1");
                    strcpy(quad[idx].operator,"+");
                    idx++;
                    strcpy((yyval.varname),tname);
                ;}
    break;

  case 199:
#line 1073 "Compiler.y"
    {
                    printf("\tReduced : unary_expression -> DECREMENT unary_expression\n");
                    generate();
                    fprintf(fp,"%s=%s\n",tname,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(2) - (2)].varname));
                    idx++;
                    fprintf(fp,"%s=%s-1\n",(yyvsp[(2) - (2)].varname),(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].result,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].op1,(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].op2,"1");
                    strcpy(quad[idx].operator,"-");
                    idx++;
                    strcpy((yyval.varname),tname);
                ;}
    break;

  case 200:
#line 1089 "Compiler.y"
    {
                    printf("\tReduced : unary_expression -> unary_operator cast_expression\n");
                    generate();
                    fprintf(fp,"%s= %s%s \n",tname,(yyvsp[(1) - (2)].varname),(yyvsp[(2) - (2)].varname));
                    strcpy(quad[idx].result,tname);
                    strcpy(quad[idx].op1,(yyvsp[(1) - (2)].varname));
                    strcpy(quad[idx].op1,(yyvsp[(2) - (2)].varname));
                    idx++;
                    strcpy((yyval.varname),tname);
                ;}
    break;

  case 201:
#line 1099 "Compiler.y"
    {printf("\tReduced : unary_expression -> SIZEOF unary_expression\n");;}
    break;

  case 202:
#line 1101 "Compiler.y"
    {printf("\tReduced : unary_expression -> SIZEOF OPEN_PARANTHESES type_name CLOSE_PARANTHESES\n");;}
    break;

  case 203:
#line 1105 "Compiler.y"
    {printf("\tReduced : unary_operator -> BITWISE_AND\n");strcpy((yyval.varname),"&");;}
    break;

  case 204:
#line 1106 "Compiler.y"
    {printf("\tReduced : unary_operator -> MULTIPLY\n");strcpy((yyval.varname),"*");;}
    break;

  case 205:
#line 1107 "Compiler.y"
    {printf("\tReduced : unary_operator -> ADD\n");strcpy((yyval.varname),"+");;}
    break;

  case 206:
#line 1108 "Compiler.y"
    {printf("\tReduced : unary_operator -> SUBTRACT\n");strcpy((yyval.varname),"-");if(flag==1)
                strcat(initial_list,"-");;}
    break;

  case 207:
#line 1110 "Compiler.y"
    {printf("\tReduced : unary_operator -> NEGATION\n");strcpy((yyval.varname),"~");;}
    break;

  case 208:
#line 1111 "Compiler.y"
    {printf("\tReduced : unary_operator -> NOT\n");strcpy((yyval.varname),"!");;}
    break;

  case 209:
#line 1116 "Compiler.y"
    {
                    printf("\tReduced : postfix_expression -> primary_expression\n");
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
                  ;}
    break;

  case 210:
#line 1121 "Compiler.y"
    {
                        printf("\tReduced : postfix_expression -> postfix_expression OPEN_SQ_BRACKET expression CLOSE_SQ_BRACKET\n");

                        /*end=0 marks beginning of new Array Expression or ending of previous expression
                          right=1 for processing the right part of the statement
                          curr_cnt denotes the dimension after which all other dimensions are to be multiplied
                          for left array not assigned to a tname variable but for right all array expressions assigned
                          to a temproray tname variable */


                        if(end==0)
                        {
                            generate();
                            strcpy(s1,tname);
                            fprintf(fp,"%s = 0\n",tname);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,"0");
                            idx++;
                            curr_cnt=0;
                        }


                        generate();
						printf("s1 = %s tname = %s curr_cnt = %d \n",s1,tname,curr_cnt);
                        fprintf(fp,"%s = %s\n",tname,(yyvsp[(3) - (4)].varname));
                        strcpy(quad[idx].result,tname);
                        strcpy(quad[idx].op1,(yyvsp[(3) - (4)].varname));
                        idx++;
                        for(i=0;i<id;i++)
                        {
                            if(!strcmp(table[i].name,(yyvsp[(1) - (4)].varname)))
                            break;
                        }
                        comma_cnt=0;
                        l=strlen(table[i].size);
                        num=0;
                        end=0;
                        for(j=0;j<l;j++)
                        {
                            if(table[i].size[j]==',')
                            {
                                if(comma_cnt>curr_cnt)
                                {
                                fprintf(fp,"%s = %s * %d\n",tname,tname,num);

                               int_to_str(num);


                                strcpy(quad[idx].result,tname);
                                strcpy(quad[idx].op1,tname);
                                strcpy(quad[idx].op2,num_string);
                                strcpy(quad[idx].operator,"*");
                                idx++;
                                end=1;
                                }

                                num=0;
                                comma_cnt++;
                            }
                        else
                            num= num*10+((int)table[i].size[j]-48);
                        }
                        fprintf(fp,"%s = %s + %s\n",s1,s1,tname);
                        strcpy(quad[idx].result,s1);
                        strcpy(quad[idx].op1,s1);
                        strcpy(quad[idx].op2,tname);
                        strcpy(quad[idx].operator,"+");
                        idx++;
                        curr_cnt++;

                        if(end==0)
                        {
                            printf("%s %s\n",table[i].name,table[i].datatype);
                            if((!strcmp(table[i].datatype,"int ")) || (!strcmp(table[i].datatype,"float ")))
                            {
                                fprintf(fp,"%s = %s * 4\n",s1,s1);
                                strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"4");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else if(!strcmp(table[i].datatype,"double "))
                            {
                                 fprintf(fp,"%s = %s * 8\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"8");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else if(!strcmp(table[i].datatype,"char "))
                            {
                                 fprintf(fp,"%s = %s * 1\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"1");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }
                            else
                            {
                                 fprintf(fp,"%s = %s * 8\n",s1,s1);
                                 strcpy(quad[idx].result,s1);
                                strcpy(quad[idx].op1,s1);
                                strcpy(quad[idx].op2,"8");
                                strcpy(quad[idx].operator,"*");
                                idx++;
                            }


                            if(right==1)
                            {
                            generate();
                            fprintf(fp,"%s = %s[%s]\n",tname,(yyvsp[(1) - (4)].varname),s1);
                            strcpy(quad[idx].result,tname);
                            strcpy(quad[idx].op1,(yyvsp[(1) - (4)].varname));
                            strcpy(quad[idx].op2,s1);
                            strcpy(quad[idx].operator,"ARR_RT");
                            idx++;
                            strcpy((yyval.varname),tname);
                            }
                            else
                            {
                            strcpy(s2,(yyvsp[(1) - (4)].varname));
                            strcat(s2,"[");
                            strcat(s2,s1);
                            strcat(s2,"]");
                            strcpy((yyval.varname),s2);

                            }
                        }

                  ;}
    break;

  case 211:
#line 1256 "Compiler.y"
    {printf("\tReduced : postfix_expression -> postfix_expression OPEN_PARANTHESES argument_expression_list CLOSE_PARANTHESES\n");;}
    break;

  case 212:
#line 1258 "Compiler.y"
    {printf("\tReduced : postfix_expression -> postfix_expression OPEN_PARANTHESES CLOSE_PARANTHESES\n");;}
    break;

  case 213:
#line 1259 "Compiler.y"
    {printf("\tReduced : postfix_expression -> postfix_expression DOT IDENTIFIER\n");;}
    break;

  case 214:
#line 1260 "Compiler.y"
    {printf("\tReduced : postfix_expression -> postfix_expression LINK IDENTIFIER\n");;}
    break;

  case 215:
#line 1262 "Compiler.y"
    {
                        printf("\tReduced : postfix_expression -> postfix_expression INCREMENT\n");

                        fprintf(fp,"%s = %s+1\n",(yyvsp[(1) - (2)].varname),(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].result,(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].op1,(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].op2,"1");
                        strcpy(quad[idx].operator,"+");
                                idx++;
                        strcpy((yyval.varname),(yyvsp[(1) - (2)].varname));
                  ;}
    break;

  case 216:
#line 1274 "Compiler.y"
    {
                        printf("\tReduced : postfix_expression -> postfix_expression DECREMENT\n");

                        fprintf(fp,"%s = %s-1\n",(yyvsp[(1) - (2)].varname),(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].result,(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].op1,(yyvsp[(1) - (2)].varname));
                        strcpy(quad[idx].op2,"1");
                        strcpy(quad[idx].operator,"-");
                        strcpy((yyval.varname),(yyvsp[(1) - (2)].varname));
				  ;}
    break;

  case 217:
#line 1288 "Compiler.y"
    {
					printf("\tReduced : primary_expression -> IDENTIFIER \n");
                    printf("%s\n",(yyvsp[(1) - (1)].varname));
					int f=0;
					for(i=0;i<id;i++)
					{
						if(!strcmp(table[i].name,(yyvsp[(1) - (1)].varname)))
						{
							f=1;
							break;
						}
					}
					if(f==0)
                    {
					printf("\n***** ERROR: Variable %s is Undeclared *****\n",(yyvsp[(1) - (1)].varname));
					exit(0);
					}
                    strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
				  ;}
    break;

  case 218:
#line 1307 "Compiler.y"
    {printf("\tReduced : primary_expression -> constant\n");;}
    break;

  case 219:
#line 1309 "Compiler.y"
    {
                        printf("\tReduced : primary_expression -> STRING_CONSTANT\n");
                        strcpy(table[id-1].initial,(yyvsp[(1) - (1)].varname));
                        if(!strcmp(table[id-1].size,""))
                        {
                            size_not_given=strlen((yyvsp[(1) - (1)].varname));
                            table[id-1].size[0]=(char)(size_not_given+48);
                            table[id-1].size[1]='\0';
                        }
                        if(flag==1)
                            strcat(initial_list,(yyvsp[(1) - (1)].varname));


                  ;}
    break;

  case 220:
#line 1324 "Compiler.y"
    {
                        printf("\tReduced : primary_expression -> OPEN_PARANTHESES expression CLOSE_PARANTHESES\n");
                        strcpy((yyval.varname),(yyvsp[(2) - (3)].varname));
                  ;}
    break;

  case 221:
#line 1331 "Compiler.y"
    {printf("\tReduced : argument_expression_list -> assignment_expression\n");;}
    break;

  case 222:
#line 1332 "Compiler.y"
    {printf("\tReduced : argument_expression_list -> argument_expression_list COMMA assignment_expression\n");;}
    break;

  case 223:
#line 1337 "Compiler.y"
    {
            printf("\tReduced : constant -> NUMBER\n");
            strcpy(temp,(yyvsp[(1) - (1)].varname));
            if(flag==1)
                strcat(initial_list,(yyvsp[(1) - (1)].varname));
            strcpy((yyval.varname),(yyvsp[(1) - (1)].varname));
        ;}
    break;

  case 224:
#line 1345 "Compiler.y"
    {
            printf("\tReduced : constant -> CHAR_CONSTANT\n");
            strcpy(temp,(yyvsp[(1) - (1)].varname));
            if(flag==1)
                strcat(initial_list,(yyvsp[(1) - (1)].varname));
        ;}
    break;

  case 225:
#line 1352 "Compiler.y"
    {
            printf("\tReduced : constant -> REAL_NUMBER\n");
            strcpy(temp,(yyvsp[(1) - (1)].varname));
            if(flag==1)
                strcat(initial_list,(yyvsp[(1) - (1)].varname));
        ;}
    break;

  case 226:
#line 1359 "Compiler.y"
    {
            printf("\tReduced : constant -> EXP_NUMBER\n");
            strcpy(temp,(yyvsp[(1) - (1)].varname));
            if(flag==1)
                strcat(initial_list,(yyvsp[(1) - (1)].varname));
        ;}
    break;


/* Line 1267 of yacc.c.  */
#line 4064 "Compiler.tab.c"
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
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
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

  if (yyn == YYFINAL)
    YYACCEPT;

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


#line 1367 "Compiler.y"


#include "lex.yy.c"
int yyerror()
{
	printf("ERROR\n");
	exit(0);
}

void check(char s_name[50])
{
    printf("%s\n",s_name);

    for(i=0;i<id;i++)
	{
		if(!strcmp(table[i].name,s_name))
		{
		printf("\n***** ERROR: Duplicate Declaration: Variable %s is already declared in Line No. %d *****\n",s_name,table[i].line);
		exit(0);
		}
	}
}
void insert(char s_name[50],char s_type[50],int l)
{

	strcpy(table[id].name,s_name);
	strcpy(table[id].datatype,s_type);
	strcpy(table[id].initial,"0");
	table[id].line=l;
	strcpy(table[id].size,"");


	id++;
}
void lookup()
{

	printf("\n****************************SYMBOL TABLE*************************************\n");
	printf("Line No.  Identifier    Data Type\t          Dimension  Size  Initial\n\n");
	for(i=0;i<id;i++)
	{

	printf("%-10d  %-12s  %-24s  %-6d  %-6s %-10s\n\n",table[i].line,table[i].name,table[i].datatype,table[i].no_dimen,table[i].size,table[i].initial);
    }
}
void generate()
{
    static int count=0;
    count++;
    int num=count;
    tname[0]='t';
    tname[1]='_';
    tname[2]='0';
    tname[3]='0';
    tname[4]='0';
    tname[5]='0';
    tname[6]='0';
    tname[7]='0';

    if(num>9)
    {
        tname[8]=(num/10)+48;
        tname[9]=(num%10)+48;
        tname[10]='\0';
    }
    else
    {
    tname[8]=num+48;
    tname[9]='\0';
    }
    strcpy(temp_var[temp_cnt],tname);
    temp_cnt++;
}

int main(int argc,char *argv[])
{
         char arrname[1000];
         int dime,index[100];


        if(argc<2)
        {
                printf("Error detected due to file name missing\n");
                return -1;
        }

        fp=fopen(argv[2],"w");
        yyin = fopen(argv[1],"r");

        for(i=0;i<=200;i++)
        {
            strcpy(quad[i].op1,"NULL");
            strcpy(quad[i].op2,"NULL");
            strcpy(quad[i].operator,"NULL");
            strcpy(quad[i].result,"NULL");
        }

        yyparse();
        lookup();

        printf("*********************Quadruple Table*****************************************\n\n");
        printf("         Result  =\t  OP1\t    OPERATOR    OP2\n\n");
        for(i=0;i<idx;i++)
        {
        printf("%15s  =\t%10s %10s\t%s\n",quad[i].result,quad[i].op1,quad[i].operator,quad[i].op2);
        }

        fptr=fopen(argv[3],"w");
        generate_code();

        fclose(yyin);
        fclose(fp);
        fclose(fptr);

        return 0;
}

/* Assignment 4: Code Generation */



void generate_code()
{
    int i=0,j,k,f=0,l;
    char temp[50],s1[50],s2[50];
    fprintf(fptr,"\t.text\n.globl _main\n_main:\n\tpushl	%%ebp\n\tmovl	%%esp, %%ebp\n\tandl	$-16, %%esp\n");
    for(i=0;i<idx;i++)
    {
        if(quad[i].op1[0]>=48 && quad[i].op1[0]<=57)
        {
            strcpy(temp,"$");
            strcat(temp,quad[i].op1);
            strcpy(quad[i].op1,temp);
        }
        if(quad[i].op2[0]>=48 && quad[i].op2[0]<=57)
        {
            strcpy(temp,"$");
            strcat(temp,quad[i].op2);
            strcpy(quad[i].op2,temp);
        }
        if(!strcmp(quad[i].operator,"+"))
        {

              fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
              fprintf(fptr,"\taddl	%s, %%eax\n",quad[i].op2);
              fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"*"))
        {

            fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
            fprintf(fptr,"\timull	%s, %%eax\n",quad[i].op2);
            fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"-"))
        {
              printf("-\n");
              fprintf(fptr,"\tmovl	%s, %%eax\n  ",quad[i].op1);
              fprintf(fptr,"\tsubl	%s, %%eax\n",quad[i].op2);
              fprintf(fptr,"\tmovl    %%eax, %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"/"))
        {
            fprintf(fptr,"\tmovl	%s, %%eax\n movl	%s, %%ecx \n cltd\n idivl %%ecx\n movl %%eax, %s\n",quad[i].op1,quad[l].op2,quad[i].result);

        }
        else if(!strcmp(quad[i].operator,"<"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetl %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,">"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetg %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"<="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetle %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,">="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetge %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"=="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsete %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"!="))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tcmpl %%eax,%%edx\n");
            fprintf(fptr,"\tsetne %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }

        else if(!strcmp(quad[i].operator,"&"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\tandl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"|"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\torl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"^"))
        {
            fprintf(fptr,"\tmovl %s,%%edx\n",quad[i].op1);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\txorl %%eax,%%edx\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"&&"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            generate();
            tname[0]='L';
            strcpy(temp,tname);
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\tmovl $1,%%eax\n");
            generate();
            tname[0]='L';
            fprintf(fptr,"\tjmp %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $1,%%eax\n");
            fprintf(fptr,"\t%s:\n",tname);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"||"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");

            generate();
            tname[0]='L';
            fprintf(fptr,"\tjne %s\n",tname);
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op2);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");

            strcpy(temp,tname);
            generate();
            tname[0]='L';
            fprintf(fptr,"\tje %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $1,%%eax\n");

            strcpy(temp,tname);
            generate();
            tname[0]='L';
            fprintf(fptr,"\tjmp %s\n",tname);
            fprintf(fptr,"\t%s:\n",temp);
            fprintf(fptr,"\tmovl $0,%%eax\n");
            fprintf(fptr,"\t%s:\n",tname);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"!"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tsete %%al\n");
            fprintf(fptr,"\tmovzbl %%al,%%eax\n");
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            fprintf(fptr,"\tmovl $0,%%eax\n");
        }
        else if(!strcmp(quad[i].operator,"LABEL"))
        {
            fprintf(fptr,"%s:\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"GOTO"))
        {
            fprintf(fptr,"jmp %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"IF"))
        {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\ttestl %%eax,%%eax\n");
            fprintf(fptr,"\tje %s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"ARR_RT"))
        {
            fprintf(fptr,"\tmovl	%s, %%eax\n",quad[i].op2);
            fprintf(fptr,"\tmovl	%s(,%%eax,), %%eax\n",quad[i].op1);
            fprintf(fptr,"\tmovl	%%eax,%s\n",quad[i].result);
        }
        else if(!strcmp(quad[i].operator,"NULL"))
        {

            l=strlen(quad[i].result);
            f=0;
            for(j=0;j<l;j++)
            {
                s1[j]=quad[i].result[j];
                if(quad[i].result[j]=='[')
                {
                    s1[j]='\0';
                    k=0;
                    j++;
                    while(quad[i].result[j]!=']')
                    {
                        s2[k]=quad[i].result[j];
                        k++;j++;
                    }
                    s2[k]='\0';
                    f=1;
                    break;
                }
            }

            if(f==1)
            {
                fprintf(fptr,"\tmovl	%s, %%eax\n",s2);
                fprintf(fptr,"\tmovl	%s, %%edx\n",quad[i].op1);
                fprintf(fptr,"\tmovl	%%edx, %s(,%%eax,)\n",s1);
            }
            else
            {
            fprintf(fptr,"\tmovl %s,%%eax\n",quad[i].op1);
            fprintf(fptr,"\tmovl %%eax,%s\n",quad[i].result);
            }
        }





    }
        fprintf(fptr,"\n\n\tmovl	result, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	$printtext1, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tcall	_printf\n\n");

        fprintf(fptr,"\tmovl	size, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	$printtext2, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tcall	_printf\n\n");

        fprintf(fptr,"\tmovl	$printtext3, %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, (%%esp)\n");
        fprintf(fptr,"\tmovl	$0, %%ecx\n");
        fprintf(fptr,"print_a:\n");
        fprintf(fptr,"\tcmpl	%%ecx, size\n");
        fprintf(fptr,"\tjz 	exit\n");
        fprintf(fptr,"\tmovl	a(,%%ecx,4), %%eax\n");
        fprintf(fptr,"\tmovl	%%eax, 4(%%esp)\n");
        fprintf(fptr,"\tmovl	%%ecx, temp_count\n");
        fprintf(fptr,"\tcall	_printf\n");
        fprintf(fptr,"\tmovl	temp_count, %%ecx\n");
        fprintf(fptr,"\taddl	$1, %%ecx\n");
        fprintf(fptr,"\tjmp 	print_a\n");
        fprintf(fptr,"exit:\n\n\n");






        fprintf(fptr,"\tmovl %%ebp, %%esp\n");
        fprintf(fptr,"\tpopl %%ebp\n");
        fprintf(fptr,"\tret\n");



        fprintf(fptr,".data\n");
        fprintf(fptr,"\tprinttext1: .ascii \"result = %%d\\n\\0\"\n ");
        fprintf(fptr,"\tprinttext2: .ascii \"size = %%d\\n\\0\"\n ");
        fprintf(fptr,"\tprinttext3: .ascii \"%%d, \\0\"\n ");
        fprintf(fptr,"\ttemp_count: .long 0\n");

        printf("idx=%d\n",idx);
        for(i=0;i<id;i++)
        {
            if(strcmp(table[i].name,"main"))
            fprintf(fptr,"\t%s: .long %s\n",table[i].name,table[i].initial);
        }
        for(i=0;i<temp_cnt;i++)
        {
            fprintf(fptr,"\t%s: .long 0\n",temp_var[i]);
        }
}
void int_to_str(int num)
{
    int i=0,j=0;
    char s[50];
     while(num>0)
    {
        s[i++]=(num%10)+48;
        num=num/10;
    }
    i--;
    while(i>=0)
    {
        num_string[j]=s[i];
        j++;i--;
    }
}
void check_arr(char ch_ar1[],char ch_ar2[])
{
    int l,j,k,ar;
    char s1[50],s2[50];
    l=strlen(ch_ar1);
    ar=0;
    for(j=0;j<l;j++)
    {
        s1[j]=ch_ar1[j];
        if(ch_ar1[j]=='[')
        {
            s1[j]='\0';
            k=0;
            j++;
            while(ch_ar1[j]!=']')
            {
                s2[k]=ch_ar1[j];
                k++;j++;
            }
            s2[k]='\0';
            ar=1;
            break;
        }
    }
     if(ar==1)
     {
        generate();
        fprintf(fp,"%s = %s[%s]\n",tname,s1,s2);
        strcpy(quad[idx].result,tname);
        strcpy(quad[idx].op1,s1);
        strcpy(quad[idx].op2,s2);
        strcpy(quad[idx].operator,"ARR_RT");
        idx++;
        strcpy(s3,tname);
     }

     l=strlen(ch_ar2);
    ar=0;
    for(j=0;j<l;j++)
    {
        s1[j]=ch_ar2[j];
        if(ch_ar2[j]=='[')
        {
            s1[j]='\0';
            k=0;
            j++;
            while(ch_ar2[j]!=']')
            {
                s2[k]=ch_ar2[j];
                k++;j++;
            }
            s2[k]='\0';
            ar=1;
            break;
        }
    }
     if(ar==1)
     {
        generate();
        fprintf(fp,"%s = %s[%s]\n",tname,s1,s2);
        strcpy(quad[idx].result,tname);
        strcpy(quad[idx].op1,s1);
        strcpy(quad[idx].op2,s2);
        strcpy(quad[idx].operator,"ARR_RT");
        idx++;
        strcpy(s4,tname);
     }

}

