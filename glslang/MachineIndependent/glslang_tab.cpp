/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 43 "MachineIndependent/glslang.y" /* yacc.c:339  */


/* Based on:
ANSI C Yacc grammar

In 1985, Jeff Lee published his Yacc grammar (which is accompanied by a
matching Lex specification) for the April 30, 1985 draft version of the
ANSI C standard.  Tom Stockfisch reposted it to net.sources in 1987; that
original, as mentioned in the answer to question 17.25 of the comp.lang.c
FAQ, can be ftp'ed from ftp.uu.net, file usenet/net.sources/ansi.c.grammar.Z.

I intend to keep this version as close to the current C Standard grammar as
possible; please let me know if you discover discrepancies.

Jutta Degener, 1995
*/

#include "SymbolTable.h"
#include "ParseHelper.h"
#include "../Public/ShaderLang.h"

using namespace glslang;


#line 91 "MachineIndependent/glslang_tab.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "glslang_tab.cpp.h".  */
#ifndef YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED
# define YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ATTRIBUTE = 258,
    VARYING = 259,
    CONST = 260,
    BOOL = 261,
    INT = 262,
    UINT = 263,
    FLOAT = 264,
    BREAK = 265,
    CONTINUE = 266,
    DO = 267,
    ELSE = 268,
    FOR = 269,
    IF = 270,
    DISCARD = 271,
    RETURN = 272,
    SWITCH = 273,
    CASE = 274,
    DEFAULT = 275,
    SUBROUTINE = 276,
    BVEC2 = 277,
    BVEC3 = 278,
    BVEC4 = 279,
    IVEC2 = 280,
    IVEC3 = 281,
    IVEC4 = 282,
    UVEC2 = 283,
    UVEC3 = 284,
    UVEC4 = 285,
    U8VEC2 = 286,
    U8VEC3 = 287,
    U8VEC4 = 288,
    VEC2 = 289,
    VEC3 = 290,
    VEC4 = 291,
    MAT2 = 292,
    MAT3 = 293,
    MAT4 = 294,
    CENTROID = 295,
    IN = 296,
    OUT = 297,
    INOUT = 298,
    UNIFORM = 299,
    PATCH = 300,
    SAMPLE = 301,
    BUFFER = 302,
    SHARED = 303,
    FLAT = 304,
    SMOOTH = 305,
    LAYOUT = 306,
    MAT2X2 = 307,
    MAT2X3 = 308,
    MAT2X4 = 309,
    MAT3X2 = 310,
    MAT3X3 = 311,
    MAT3X4 = 312,
    MAT4X2 = 313,
    MAT4X3 = 314,
    MAT4X4 = 315,
    SAMPLER2D = 316,
    SAMPLER3D = 317,
    SAMPLERCUBE = 318,
    SAMPLER2DSHADOW = 319,
    SAMPLERCUBESHADOW = 320,
    SAMPLER2DARRAY = 321,
    SAMPLER2DARRAYSHADOW = 322,
    ISAMPLER2D = 323,
    ISAMPLER3D = 324,
    ISAMPLERCUBE = 325,
    ISAMPLER2DARRAY = 326,
    USAMPLER2D = 327,
    USAMPLER3D = 328,
    USAMPLERCUBE = 329,
    USAMPLER2DARRAY = 330,
    SAMPLERCUBEARRAY = 331,
    SAMPLERCUBEARRAYSHADOW = 332,
    ISAMPLERCUBEARRAY = 333,
    USAMPLERCUBEARRAY = 334,
    STRUCT = 335,
    VOID = 336,
    WHILE = 337,
    IDENTIFIER = 338,
    TYPE_NAME = 339,
    FLOATCONSTANT = 340,
    INTCONSTANT = 341,
    UINTCONSTANT = 342,
    BOOLCONSTANT = 343,
    LEFT_OP = 344,
    RIGHT_OP = 345,
    INC_OP = 346,
    DEC_OP = 347,
    LE_OP = 348,
    GE_OP = 349,
    EQ_OP = 350,
    NE_OP = 351,
    AND_OP = 352,
    OR_OP = 353,
    XOR_OP = 354,
    MUL_ASSIGN = 355,
    DIV_ASSIGN = 356,
    ADD_ASSIGN = 357,
    MOD_ASSIGN = 358,
    LEFT_ASSIGN = 359,
    RIGHT_ASSIGN = 360,
    AND_ASSIGN = 361,
    XOR_ASSIGN = 362,
    OR_ASSIGN = 363,
    SUB_ASSIGN = 364,
    LEFT_PAREN = 365,
    RIGHT_PAREN = 366,
    LEFT_BRACKET = 367,
    RIGHT_BRACKET = 368,
    LEFT_BRACE = 369,
    RIGHT_BRACE = 370,
    DOT = 371,
    COMMA = 372,
    COLON = 373,
    EQUAL = 374,
    SEMICOLON = 375,
    BANG = 376,
    DASH = 377,
    TILDE = 378,
    PLUS = 379,
    STAR = 380,
    SLASH = 381,
    PERCENT = 382,
    LEFT_ANGLE = 383,
    RIGHT_ANGLE = 384,
    VERTICAL_BAR = 385,
    CARET = 386,
    AMPERSAND = 387,
    QUESTION = 388,
    INVARIANT = 389,
    HIGH_PRECISION = 390,
    MEDIUM_PRECISION = 391,
    LOW_PRECISION = 392,
    PRECISION = 393,
    PACKED = 394,
    RESOURCE = 395,
    SUPERP = 396
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 70 "MachineIndependent/glslang.y" /* yacc.c:355  */

    struct {
        glslang::TSourceLoc loc;
        union {
            glslang::TString *string;
            int i;
            unsigned int u;
            long long i64;
            unsigned long long u64;
            bool b;
            double d;
        };
        glslang::TSymbol* symbol;
    } lex;
    struct {
        glslang::TSourceLoc loc;
        glslang::TOperator op;
        union {
            TIntermNode* intermNode;
            glslang::TIntermNodePair nodePair;
            glslang::TIntermTyped* intermTypedNode;
        };
        union {
            glslang::TPublicType type;
            glslang::TFunction* function;
            glslang::TParameter param;
            glslang::TTypeLoc typeLine;
            glslang::TTypeList* typeList;
            glslang::TArraySizes* arraySizes;
            glslang::TIdentifierList* identifierList;
        };
        glslang::TArraySizes* typeParameters;
    } interm;

#line 308 "MachineIndependent/glslang_tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 105 "MachineIndependent/glslang.y" /* yacc.c:358  */


/* windows only pragma */
#ifdef _MSC_VER
    #pragma warning(disable : 4065)
    #pragma warning(disable : 4127)
    #pragma warning(disable : 4244)
#endif

#define parseContext (*pParseContext)
#define yyerror(context, msg) context->parserError(msg)

extern int yylex(YYSTYPE*, TParseContext&);


#line 339 "MachineIndependent/glslang_tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  114
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2935

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  104
/* YYNRULES -- Number of rules.  */
#define YYNRULES  289
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   396

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   225,   228,   231,   235,   238,   241,   249,
     252,   255,   258,   261,   266,   274,   281,   288,   294,   298,
     305,   308,   314,   321,   331,   339,   344,   374,   380,   384,
     388,   408,   409,   410,   411,   417,   418,   423,   428,   437,
     438,   443,   451,   452,   458,   467,   468,   473,   478,   483,
     491,   492,   503,   517,   518,   527,   528,   537,   538,   547,
     548,   556,   557,   565,   566,   574,   575,   575,   593,   594,
     610,   614,   618,   622,   627,   631,   635,   639,   643,   647,
     651,   658,   661,   672,   679,   684,   689,   698,   702,   706,
     710,   715,   720,   729,   729,   740,   744,   751,   758,   761,
     768,   776,   796,   819,   836,   863,   874,   884,   894,   904,
     913,   916,   920,   924,   929,   937,   944,   949,   954,   959,
     968,   981,  1010,  1021,  1030,  1042,  1048,  1051,  1058,  1062,
    1066,  1074,  1077,  1088,  1091,  1094,  1098,  1102,  1109,  1113,
    1118,  1124,  1130,  1139,  1144,  1152,  1157,  1167,  1172,  1180,
    1184,  1194,  1197,  1203,  1209,  1216,  1226,  1230,  1234,  1238,
    1243,  1247,  1252,  1257,  1262,  1267,  1272,  1277,  1282,  1287,
    1292,  1298,  1304,  1310,  1315,  1320,  1325,  1330,  1335,  1340,
    1345,  1350,  1355,  1360,  1365,  1370,  1375,  1380,  1385,  1390,
    1395,  1400,  1405,  1410,  1415,  1420,  1425,  1430,  1435,  1440,
    1445,  1450,  1455,  1460,  1465,  1470,  1486,  1493,  1500,  1510,
    1510,  1521,  1521,  1531,  1534,  1547,  1571,  1600,  1604,  1610,
    1615,  1626,  1629,  1637,  1648,  1651,  1657,  1661,  1662,  1668,
    1669,  1670,  1671,  1672,  1673,  1674,  1678,  1679,  1683,  1679,
    1695,  1696,  1700,  1700,  1707,  1707,  1721,  1724,  1732,  1740,
    1751,  1752,  1756,  1761,  1768,  1772,  1780,  1784,  1797,  1802,
    1802,  1822,  1825,  1831,  1843,  1855,  1860,  1860,  1875,  1875,
    1891,  1891,  1914,  1917,  1923,  1926,  1932,  1936,  1943,  1948,
    1953,  1960,  1963,  1972,  1976,  1985,  1988,  1991,  2003,  2003
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "VARYING", "CONST", "BOOL",
  "INT", "UINT", "FLOAT", "BREAK", "CONTINUE", "DO", "ELSE", "FOR", "IF",
  "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "SUBROUTINE", "BVEC2",
  "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4", "UVEC2", "UVEC3", "UVEC4",
  "U8VEC2", "U8VEC3", "U8VEC4", "VEC2", "VEC3", "VEC4", "MAT2", "MAT3",
  "MAT4", "CENTROID", "IN", "OUT", "INOUT", "UNIFORM", "PATCH", "SAMPLE",
  "BUFFER", "SHARED", "FLAT", "SMOOTH", "LAYOUT", "MAT2X2", "MAT2X3",
  "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4", "MAT4X2", "MAT4X3", "MAT4X4",
  "SAMPLER2D", "SAMPLER3D", "SAMPLERCUBE", "SAMPLER2DSHADOW",
  "SAMPLERCUBESHADOW", "SAMPLER2DARRAY", "SAMPLER2DARRAYSHADOW",
  "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE", "ISAMPLER2DARRAY",
  "USAMPLER2D", "USAMPLER3D", "USAMPLERCUBE", "USAMPLER2DARRAY",
  "SAMPLERCUBEARRAY", "SAMPLERCUBEARRAYSHADOW", "ISAMPLERCUBEARRAY",
  "USAMPLERCUBEARRAY", "STRUCT", "VOID", "WHILE", "IDENTIFIER",
  "TYPE_NAME", "FLOATCONSTANT", "INTCONSTANT", "UINTCONSTANT",
  "BOOLCONSTANT", "LEFT_OP", "RIGHT_OP", "INC_OP", "DEC_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "XOR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "ADD_ASSIGN", "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "SUB_ASSIGN", "LEFT_PAREN",
  "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_BRACE",
  "RIGHT_BRACE", "DOT", "COMMA", "COLON", "EQUAL", "SEMICOLON", "BANG",
  "DASH", "TILDE", "PLUS", "STAR", "SLASH", "PERCENT", "LEFT_ANGLE",
  "RIGHT_ANGLE", "VERTICAL_BAR", "CARET", "AMPERSAND", "QUESTION",
  "INVARIANT", "HIGH_PRECISION", "MEDIUM_PRECISION", "LOW_PRECISION",
  "PRECISION", "PACKED", "RESOURCE", "SUPERP", "$accept",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression", "$@1",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "block_structure", "$@2",
  "identifier_list", "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declarator", "parameter_declaration",
  "parameter_type_specifier", "init_declarator_list", "single_declaration",
  "fully_specified_type", "invariant_qualifier", "interpolation_qualifier",
  "layout_qualifier", "layout_qualifier_id_list", "layout_qualifier_id",
  "type_qualifier", "single_type_qualifier", "storage_qualifier",
  "type_specifier", "array_specifier", "type_parameter_specifier_opt",
  "type_parameter_specifier", "type_parameter_specifier_list",
  "type_specifier_nonarray", "precision_qualifier", "struct_specifier",
  "$@3", "$@4", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "initializer",
  "initializer_list", "declaration_statement", "statement",
  "simple_statement", "compound_statement", "$@5", "$@6",
  "statement_no_new_scope", "statement_scoped", "$@7", "$@8",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_statement_nonattributed", "selection_rest_statement",
  "condition", "switch_statement", "switch_statement_nonattributed", "$@9",
  "switch_statement_list", "case_label", "iteration_statement",
  "iteration_statement_nonattributed", "$@10", "$@11", "$@12",
  "for_init_statement", "conditionopt", "for_rest_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "$@13", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396
};
# endif

#define YYPACT_NINF -360

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-360)))

#define YYTABLE_NINF -243

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1314,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   -74,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,   -66,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,     8,  -360,   -68,   -61,
     -42,   -43,  2015,   -71,  -360,    42,  -360,  -360,  -360,  1551,
    -360,  -360,  -360,   -38,  -360,  -360,   404,  -360,  -360,   -30,
      34,  -360,  2851,   -86,  -360,  -360,    47,  -360,  2015,  -360,
    -360,  -360,  2015,    59,    72,  -360,   -65,   -47,  -360,  -360,
    -360,  2641,    51,  -360,  -360,  -360,  -360,    46,   -84,  -360,
    -360,  2015,    52,  2211,  -360,   -80,   538,  -360,  -360,  -360,
    -360,    51,   -69,  -360,  2319,   -51,  -360,    94,  -360,    -4,
    -360,  -360,  -360,  -360,  -360,  2641,  2641,  2641,  -360,  -360,
    -360,  -360,  -360,  -360,   -50,  -360,  -360,  -360,    67,   -35,
    2746,    69,  -360,  2641,  -360,   -92,    68,  2641,  -360,   -30,
    2015,  2015,    98,  1667,  -360,  -360,  -360,  -360,    25,    -7,
      17,   -73,    44,    50,    54,    60,    95,    92,   -76,    80,
    2428,  -360,    74,    75,  -360,    86,    87,    78,  2536,    89,
    2641,    82,    91,    88,  -360,  -360,    28,  -360,  -360,     2,
    -360,   -61,    96,  -360,  -360,  -360,  -360,   672,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,    68,  2319,   -48,
    2319,  -360,  -360,  2319,  2015,  -360,   121,  -360,  -360,  -360,
     -34,  -360,  -360,  2641,   122,  -360,  -360,  2641,    97,  -360,
    -360,  -360,  2641,  -360,  -360,  -360,  -360,  1783,    98,    51,
       3,  -360,  -360,  -360,  2641,  2641,  2641,  2641,  2641,  2641,
    2641,  2641,  2641,  2641,  2641,  2641,  2641,  2641,  2641,  2641,
    2641,  2641,  2641,  -360,  -360,  -360,    99,  -360,  -360,   806,
    -360,  2641,  -360,  -360,     7,  2641,    36,  -360,  -360,  -360,
     806,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,  2641,  2641,  -360,  -360,  -360,  -360,  2319,  -360,
     -28,  -360,  1899,  -360,  -360,   100,    90,  -360,  -360,  -360,
    -360,    21,    68,    98,  -360,  -360,  -360,  -360,    25,    25,
      -7,    -7,    17,    17,    17,    17,   -73,   -73,    44,    50,
      54,    60,    95,    92,  2641,  -360,   127,  1194,   -33,  -360,
     -26,  -360,  1431,   806,  -360,  -360,  -360,  -360,  2101,  -360,
    -360,  -360,  -360,    41,   104,  -360,  -360,  1431,   101,  -360,
      90,   133,  2015,   107,   105,  -360,  -360,  2641,  2641,  -360,
     102,   110,   210,   111,  1074,  -360,   112,   114,   940,  -360,
    -360,   -23,  2641,   940,   101,  -360,  -360,   806,  2319,  -360,
    -360,  -360,   109,    90,  -360,  -360,   806,   115,  -360,  -360,
    -360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   138,   160,   158,   159,   157,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   161,   162,   163,   173,   174,
     175,   142,   140,   141,   139,   143,   144,   124,   123,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   194,   195,   196,   197,
     199,   200,   201,   202,   192,   193,   198,   203,     0,   156,
     205,   287,   122,   206,   207,   208,     0,   286,     0,   288,
       0,    99,    98,     0,   110,   115,   137,   136,   134,     0,
     131,   133,   120,   152,   135,   204,     0,   283,   285,     0,
       0,   211,     0,     0,    87,    84,     0,    97,     0,   106,
     100,   108,     0,   109,     0,    85,   116,     0,    90,   132,
     121,     0,   145,   151,     1,   284,   130,   128,     0,   126,
     209,     0,     0,     0,    88,     0,     0,   289,   101,   105,
     107,   103,   111,   102,     0,   117,    93,     0,    91,     0,
       2,     6,     4,     5,     7,     0,     0,     0,    33,    32,
      34,    31,     3,     9,    27,    11,    16,    17,     0,     0,
      21,     0,   154,     0,    25,     0,   146,     0,   125,     0,
       0,     0,     0,     0,   213,    86,   147,    35,    39,    42,
      45,    50,    53,    55,    57,    59,    61,    63,    65,     0,
       0,    89,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,     0,   237,   246,   250,    35,    68,    81,     0,
     226,     0,   120,   229,   248,   228,   227,     0,   230,   231,
     252,   232,   258,   233,   234,   265,   235,   104,     0,   112,
       0,   221,   119,     0,     0,    95,     0,    92,    28,    29,
       0,    13,    14,     0,     0,    19,    18,     0,   156,    22,
      24,    30,     0,   153,    83,   129,   127,     0,     0,   219,
       0,   217,   212,   214,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,   148,   149,     0,   279,   278,     0,
     270,     0,   282,   280,     0,     0,     0,   264,   266,   236,
       0,    71,    72,    74,    73,    76,    77,    78,    79,    80,
      75,    70,     0,     0,   251,   247,   249,   114,     0,   224,
       0,   118,     0,    96,     8,     0,    15,    12,    23,   155,
     210,     0,   220,     0,   215,    36,    37,    38,    41,    40,
      43,    44,    48,    49,    46,    47,    51,    52,    54,    56,
      58,    60,    62,    64,     0,   150,     0,     0,     0,   281,
       0,   263,     0,   238,    69,    82,   113,   222,     0,    94,
      10,   216,   218,     0,     0,   273,   272,   275,   244,   259,
     256,     0,     0,     0,     0,   223,   225,     0,     0,   274,
       0,     0,   255,     0,     0,   253,     0,     0,     0,   239,
      67,     0,   276,     0,   244,   243,   245,   261,     0,   241,
     267,   240,     0,   277,   271,   254,   262,     0,   257,   269,
     260
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,  -360,    65,  -360,  -101,   -95,  -162,  -107,   -53,   -41,
     -44,   -49,   -45,   -39,  -360,  -109,  -360,  -129,  -360,  -135,
    -360,     9,  -360,  -360,  -360,    19,  -360,  -360,  -360,   136,
     142,   139,  -360,  -360,  -339,  -360,  -360,  -360,  -360,    76,
     -70,   -78,  -360,     0,  -102,  -360,  -360,  -360,  -360,   178,
    -360,  -360,  -360,  -154,  -160,   -12,   -85,  -222,  -360,  -110,
    -214,  -359,  -144,  -360,  -360,  -153,  -150,  -360,  -360,   155,
    -293,   -98,  -360,  -360,  -360,  -121,  -360,  -360,  -360,  -360,
    -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,  -360,
    -360,   174,  -360,  -360
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   152,   153,   154,   325,   155,   156,   157,   158,   159,
     160,   161,   206,   163,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   207,   354,   208,   312,   209,
     255,   210,    68,   234,   139,   211,    70,    71,    72,    99,
     100,   101,    73,    74,    75,    76,    77,    78,   118,   119,
      79,    80,    81,   164,   125,   112,   113,   165,    83,    84,
      85,   170,   121,   173,   174,   260,   261,   232,   320,   213,
     214,   215,   216,   300,   384,   410,   392,   393,   394,   411,
     217,   218,   219,   220,   395,   383,   221,   222,   396,   417,
     223,   224,   225,   362,   289,   357,   377,   390,   391,   226,
      86,    87,    88,    96
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   109,   102,   316,   135,   231,   317,   363,   319,    67,
     166,   321,   240,   263,   189,    93,   257,    90,   116,    69,
     271,   272,   282,   381,   109,   252,   123,   168,   102,   227,
     229,   249,   190,   169,   124,   406,    89,   253,   381,   409,
     191,   241,   242,   123,   409,   133,   104,   123,    91,   105,
     228,   171,    94,   117,   134,   273,   274,   283,   254,    95,
     -26,   190,   243,   294,   190,   296,   244,   136,   233,    97,
     137,   318,   103,   138,    98,   356,   246,   324,   378,   110,
     322,   286,   247,   313,   313,   379,    82,   367,   412,   368,
     111,   313,   122,   109,   313,    67,   366,   263,   103,   231,
     171,   231,   103,   171,   231,    69,   269,   270,   326,   342,
     343,   344,   345,   236,   416,   267,   237,   268,   328,   313,
     333,   172,   314,   334,   313,   106,   212,   359,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   333,   275,
     276,   371,   131,    63,    64,    65,   386,   311,   120,   316,
     264,   265,   266,   313,   361,   132,   358,   332,   313,   387,
     360,   126,   263,   123,   171,   167,   338,   339,   346,   347,
     172,   258,   175,   172,   340,   341,   162,   235,   245,   250,
     190,   259,   277,   364,   365,   278,   418,   171,   177,   231,
     279,   281,   280,   284,   287,   288,   290,   291,   292,   295,
     297,   298,   316,   299,   323,   327,   -25,   313,   -20,   374,
     238,   239,   355,   370,   388,  -242,   397,   212,   398,   373,
     399,   403,   402,   404,   348,   203,   407,   380,   251,   419,
     420,   351,   177,   408,   172,   350,   352,   349,   129,   231,
     128,   130,   380,   353,    92,   256,   331,   375,   372,   405,
     414,   127,   171,   401,   415,   177,   389,   172,   400,   376,
     115,     0,     0,     0,     0,     0,     0,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   212,
       0,     0,   382,     0,     0,     0,     0,     0,     0,     0,
     212,     0,     0,     0,   109,     0,     0,   382,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   329,     0,     0,
       0,     0,   172,     0,     0,     0,     0,     0,     0,   335,
     336,   337,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
       0,     0,   212,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   212,     0,     0,     0,   212,     0,
       0,     0,     0,   212,   114,     0,     0,   212,     0,     1,
       2,     3,     4,     5,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,     1,     2,     3,     4,     5,   192,   193,
     194,     0,   195,   196,   197,   198,   199,   200,   201,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,     0,     0,    26,     0,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     202,   140,    60,   141,   142,   143,   144,     0,     0,   145,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,     0,   203,   204,     0,     0,     0,     0,   205,   148,
     149,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,     1,     2,     3,
       4,     5,   192,   193,   194,     0,   195,   196,   197,   198,
     199,   200,   201,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,     0,     0,    26,
       0,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,   202,   140,    60,   141,   142,   143,
     144,     0,     0,   145,   146,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,     0,     0,     0,   203,   315,     0,     0,
       0,     0,   205,   148,   149,   150,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,     1,     2,     3,     4,     5,   192,   193,   194,     0,
     195,   196,   197,   198,   199,   200,   201,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,     0,    26,     0,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,   202,   140,
      60,   141,   142,   143,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,     0,     0,
     203,     0,     0,     0,     0,     0,   205,   148,   149,   150,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,     1,     2,     3,     4,     5,
     192,   193,   194,     0,   195,   196,   197,   198,   199,   200,
     201,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,    26,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   202,   140,    60,   141,   142,   143,   144,     0,
       0,   145,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,   126,     0,     0,     0,     0,     0,
     205,   148,   149,   150,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,     1,
       2,     3,     4,     5,   192,   193,   194,     0,   195,   196,
     197,   198,   199,   200,   201,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,   202,   140,    60,   141,
     142,   143,   144,     0,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   148,   149,   150,   151,     1,
       2,     3,     4,     5,     0,     0,     0,     0,    62,    63,
      64,    65,    66,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,   140,    60,   141,
     142,   143,   144,     0,     0,   145,   146,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   148,   149,   150,   151,     1,
       2,     3,     4,     5,     0,     0,     0,     0,    62,    63,
      64,    65,    66,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,     0,     0,     0,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,     0,     1,     2,     3,     4,
       5,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,   140,    60,   141,   142,   143,   144,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,     1,     2,     3,     4,
       5,     0,     0,     0,     0,    62,    63,    64,    65,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,     0,    26,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,   107,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,     1,     2,     3,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,     6,
       7,     8,     9,    10,    11,    12,    13,    14,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,     0,     0,    26,     0,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     0,
       0,    60,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   262,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,     6,     7,     8,     9,    10,
      11,    12,    13,    14,     0,     0,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,     0,
      26,     0,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   330,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,     0,     0,    26,     0,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   369,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,     6,     7,     8,
       9,    10,    11,    12,    13,    14,     0,     0,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,   140,    60,   141,   142,   143,   144,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,     0,   230,   385,     2,     3,     4,
       5,     0,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,   140,    60,   141,   142,   143,   144,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,   176,     2,     3,     4,     5,     0,
       0,     0,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
       0,     0,     0,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,   140,    60,   141,   142,   143,   144,     0,     0,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,   230,     2,     3,     4,     5,     0,     0,
     148,   149,   150,   151,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,   140,    60,   141,   142,   143,   144,     0,     0,   145,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,   285,     2,     3,     4,     5,     0,     0,     0,   148,
     149,   150,   151,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     0,   140,
      60,   141,   142,   143,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     2,     3,     4,
       5,     0,     0,     0,     0,     0,   293,   148,   149,   150,
     151,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,   140,    60,   141,   142,   143,   144,
       0,     0,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,   148,   149,   150,   151,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,   248,     0,   140,
      60,   141,   142,   143,   144,     0,     0,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     2,     3,     4,
       5,     0,     0,     0,     0,     0,     0,   148,   149,   150,
     151,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
       0,    79,    72,   217,   106,   134,   228,   300,   230,     0,
     112,   233,   147,   173,   123,    83,   170,    83,    48,     0,
      93,    94,    98,   362,   102,   117,   112,   111,    98,   131,
     132,   160,   112,   117,   120,   394,   110,   129,   377,   398,
     120,    91,    92,   112,   403,   110,   117,   112,   114,   120,
     119,   121,   120,    83,   119,   128,   129,   133,   167,   120,
     110,   112,   112,   198,   112,   200,   116,   114,   119,   111,
     117,   119,    72,   120,   117,   289,   111,   111,   111,    79,
     234,   190,   117,   117,   117,   111,    86,   115,   111,   117,
     128,   117,    92,   171,   117,    86,   318,   257,    98,   228,
     170,   230,   102,   173,   233,    86,    89,    90,   243,   271,
     272,   273,   274,   117,   407,   122,   120,   124,   247,   117,
     117,   121,   120,   120,   117,    83,   126,   120,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   117,    95,
      96,   120,    83,   135,   136,   137,   368,   119,   114,   363,
     125,   126,   127,   117,   118,    83,   291,   259,   117,   118,
     295,   114,   322,   112,   234,   119,   267,   268,   275,   276,
     170,   171,   120,   173,   269,   270,   111,    83,   111,   110,
     112,    83,   132,   312,   313,   131,   408,   257,   123,   318,
     130,    99,    97,   113,   120,   120,   110,   110,   120,   110,
     118,   110,   416,   115,    83,    83,   110,   117,   111,    82,
     145,   146,   113,   113,   110,   114,    83,   217,   111,   354,
     115,   111,   120,    13,   277,   114,   114,   362,   163,   120,
     115,   280,   167,   119,   234,   279,   281,   278,   102,   368,
      98,   102,   377,   282,    66,   169,   258,   357,   333,   393,
     403,    96,   322,   388,   404,   190,   377,   257,   387,   357,
      86,    -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
      -1,    -1,   362,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     300,    -1,    -1,    -1,   382,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,    -1,
      -1,    -1,   362,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   394,    -1,    -1,    -1,   398,    -1,
      -1,    -1,    -1,   403,     0,    -1,    -1,   407,    -1,     5,
       6,     7,     8,     9,    -1,    -1,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    47,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,    -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    83,    84,    85,
      86,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,   134,   135,   136,   137,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      47,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    47,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,   114,   115,     6,     7,     8,
       9,    -1,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,     6,     7,     8,     9,    -1,
      -1,    -1,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    35,    36,    37,    38,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    -1,    83,    84,    85,    86,    87,    88,    -1,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,    -1,   114,     6,     7,     8,     9,    -1,    -1,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      -1,    83,    84,    85,    86,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,
      -1,   113,     6,     7,     8,     9,    -1,    -1,    -1,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    83,    84,    85,    86,    87,    88,
      -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    -1,    83,
      84,    85,    86,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    47,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      84,   120,   134,   135,   136,   137,   138,   173,   174,   177,
     178,   179,   180,   184,   185,   186,   187,   188,   189,   192,
     193,   194,   195,   200,   201,   202,   242,   243,   244,   110,
      83,   114,   201,    83,   120,   120,   245,   111,   117,   181,
     182,   183,   192,   195,   117,   120,    83,    83,   120,   193,
     195,   128,   197,   198,     0,   243,    48,    83,   190,   191,
     114,   204,   195,   112,   120,   196,   114,   221,   182,   181,
     183,    83,    83,   110,   119,   196,   114,   117,   120,   176,
      83,    85,    86,    87,    88,    91,    92,   110,   121,   122,
     123,   124,   143,   144,   145,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   195,   199,   196,   119,   111,   117,
     203,   192,   195,   205,   206,   120,   113,   154,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     112,   120,    10,    11,    12,    14,    15,    16,    17,    18,
      19,    20,    82,   114,   115,   120,   154,   167,   169,   171,
     173,   177,   195,   211,   212,   213,   214,   222,   223,   224,
     225,   228,   229,   232,   233,   234,   241,   196,   119,   196,
     114,   169,   209,   119,   175,    83,   117,   120,   154,   154,
     171,    91,    92,   112,   116,   111,   111,   117,    81,   169,
     110,   154,   117,   129,   167,   172,   191,   205,   195,    83,
     207,   208,   115,   206,   125,   126,   127,   122,   124,    89,
      90,    93,    94,   128,   129,    95,    96,   132,   131,   130,
      97,    99,    98,   133,   113,   113,   167,   120,   120,   236,
     110,   110,   120,   120,   171,   110,   171,   118,   110,   115,
     215,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   119,   170,   117,   120,   115,   212,   209,   119,   209,
     210,   209,   205,    83,   111,   146,   171,    83,   169,   154,
     115,   207,   196,   117,   120,   154,   154,   154,   156,   156,
     157,   157,   158,   158,   158,   158,   159,   159,   160,   161,
     162,   163,   164,   165,   168,   113,   212,   237,   171,   120,
     171,   118,   235,   222,   169,   169,   209,   115,   117,   115,
     113,   120,   208,   171,    82,   211,   223,   238,   111,   111,
     171,   186,   192,   227,   216,   115,   209,   118,   110,   227,
     239,   240,   218,   219,   220,   226,   230,    83,   111,   115,
     169,   171,   120,   111,    13,   214,   213,   114,   119,   213,
     217,   221,   111,   171,   217,   218,   222,   231,   209,   120,
     115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   142,   143,   144,   144,   144,   144,   144,   144,   145,
     145,   145,   145,   145,   145,   146,   147,   148,   149,   149,
     150,   150,   151,   151,   152,   153,   153,   154,   154,   154,
     154,   155,   155,   155,   155,   156,   156,   156,   156,   157,
     157,   157,   158,   158,   158,   159,   159,   159,   159,   159,
     160,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   168,   167,   169,   169,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   171,   171,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   175,   174,   176,   176,   177,   178,   178,
     179,   179,   180,   181,   181,   182,   182,   182,   182,   183,
     184,   184,   184,   184,   184,   185,   185,   185,   185,   185,
     186,   186,   187,   188,   188,   189,   190,   190,   191,   191,
     191,   192,   192,   193,   193,   193,   193,   193,   194,   194,
     194,   194,   194,   194,   194,   195,   195,   196,   196,   196,
     196,   197,   197,   198,   199,   199,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   201,   201,   201,   203,
     202,   204,   202,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   209,   210,   210,   211,   212,   212,   213,
     213,   213,   213,   213,   213,   213,   214,   215,   216,   214,
     217,   217,   219,   218,   220,   218,   221,   221,   222,   222,
     223,   223,   224,   225,   226,   226,   227,   227,   228,   230,
     229,   231,   231,   232,   232,   233,   235,   234,   236,   234,
     237,   234,   238,   238,   239,   239,   240,   240,   241,   241,
     241,   241,   241,   242,   242,   243,   243,   243,   245,   244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     1,     3,     2,     2,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     0,     6,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     4,     2,     3,     4,
       2,     3,     4,     0,     6,     2,     3,     2,     1,     1,
       2,     3,     3,     2,     3,     2,     1,     2,     1,     1,
       1,     3,     4,     6,     5,     1,     2,     3,     5,     4,
       1,     2,     1,     1,     1,     4,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     3,     3,
       4,     1,     0,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     0,     5,     1,     2,     3,     4,     1,     3,     1,
       2,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     5,
       1,     1,     0,     2,     0,     2,     2,     3,     1,     2,
       1,     2,     1,     5,     3,     1,     1,     4,     1,     0,
       8,     0,     1,     3,     2,     1,     0,     6,     0,     8,
       0,     7,     1,     1,     1,     0,     2,     3,     2,     2,
       2,     3,     2,     1,     2,     1,     1,     1,     0,     3
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
      yyerror (pParseContext, YY_("syntax error: cannot back up")); \
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
                  Type, Value, pParseContext); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (pParseContext);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, glslang::TParseContext* pParseContext)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, pParseContext);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, glslang::TParseContext* pParseContext)
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
                                              , pParseContext);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, pParseContext); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, glslang::TParseContext* pParseContext)
{
  YYUSE (yyvaluep);
  YYUSE (pParseContext);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (glslang::TParseContext* pParseContext)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

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
      yychar = yylex (&yylval, parseContext);
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
#line 219 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleVariable((yyvsp[0].lex).loc, (yyvsp[0].lex).symbol, (yyvsp[0].lex).string);
    }
#line 2315 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 225 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2323 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 228 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).i, (yyvsp[0].lex).loc, true);
    }
#line 2331 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 231 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned literal");
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).u, (yyvsp[0].lex).loc, true);
    }
#line 2340 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 235 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).d, EbtFloat, (yyvsp[0].lex).loc, true);
    }
#line 2348 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 238 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion((yyvsp[0].lex).b, (yyvsp[0].lex).loc, true);
    }
#line 2356 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 241 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
        if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
            (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
    }
#line 2366 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 249 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2374 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 252 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBracketDereference((yyvsp[-2].lex).loc, (yyvsp[-3].interm.intermTypedNode), (yyvsp[-1].interm.intermTypedNode));
    }
#line 2382 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 255 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2390 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 258 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleDotDereference((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode), *(yyvsp[0].lex).string);
    }
#line 2398 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 261 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "++", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[0].lex).loc, "++", EOpPostIncrement, (yyvsp[-1].interm.intermTypedNode));
    }
#line 2408 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 266 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[-1].interm.intermTypedNode));
        parseContext.lValueErrorCheck((yyvsp[0].lex).loc, "--", (yyvsp[-1].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[0].lex).loc, "--", EOpPostDecrement, (yyvsp[-1].interm.intermTypedNode));
    }
#line 2418 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 274 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.integerCheck((yyvsp[0].interm.intermTypedNode), "[]");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 2427 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 281 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleFunctionCall((yyvsp[0].interm).loc, (yyvsp[0].interm).function, (yyvsp[0].interm).intermNode);
        delete (yyvsp[0].interm).function;
    }
#line 2436 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 288 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 2444 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 294 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 2453 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 298 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 2462 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 305 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 2470 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 308 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 2478 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 314 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-1].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-1].interm).function;
        (yyval.interm).intermNode = (yyvsp[0].interm.intermTypedNode);
    }
#line 2490 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 321 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType };
        param.type->shallowCopy((yyvsp[0].interm.intermTypedNode)->getType());
        (yyvsp[-2].interm).function->addParameter(param);
        (yyval.interm).function = (yyvsp[-2].interm).function;
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
    }
#line 2502 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 331 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-1].interm);
    }
#line 2510 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 339 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // Constructor
        (yyval.interm).intermNode = 0;
        (yyval.interm).function = parseContext.handleConstructorCall((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type));
    }
#line 2520 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 344 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // Should be a method or subroutine call, but we haven't recognized the arguments yet.
        //
        (yyval.interm).function = 0;
        (yyval.interm).intermNode = 0;

        TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode();
        if (method) {
            (yyval.interm).function = new TFunction(&method->getMethodName(), TType(EbtInt), EOpArrayLength);
            (yyval.interm).intermNode = method->getObject();
        } else {
            TIntermSymbol* symbol = (yyvsp[0].interm.intermTypedNode)->getAsSymbolNode();
            if (symbol) {
                parseContext.reservedErrorCheck(symbol->getLoc(), symbol->getName());
                TFunction *function = new TFunction(&symbol->getName(), TType(EbtVoid));
                (yyval.interm).function = function;
            } else
                parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "function call, method, or subroutine call expected", "", "");
        }

        if ((yyval.interm).function == 0) {
            // error recover
            TString* empty = NewPoolTString("");
            (yyval.interm).function = new TFunction(empty, TType(EbtVoid), EOpNull);
        }
    }
#line 2552 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 374 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.variableCheck((yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        if (TIntermMethod* method = (yyvsp[0].interm.intermTypedNode)->getAsMethodNode())
            parseContext.error((yyvsp[0].interm.intermTypedNode)->getLoc(), "incomplete method syntax", method->getMethodName().c_str(), "");
    }
#line 2563 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 380 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "++", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].lex).loc, "++", EOpPreIncrement, (yyvsp[0].interm.intermTypedNode));
    }
#line 2572 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 384 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.lValueErrorCheck((yyvsp[-1].lex).loc, "--", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].lex).loc, "--", EOpPreDecrement, (yyvsp[0].interm.intermTypedNode));
    }
#line 2581 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 388 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm).op != EOpNull) {
            char errorOp[2] = {0, 0};
            switch((yyvsp[-1].interm).op) {
            case EOpNegative:   errorOp[0] = '-'; break;
            case EOpLogicalNot: errorOp[0] = '!'; break;
            case EOpBitwiseNot: errorOp[0] = '~'; break;
            default: break; // some compilers want this
            }
            (yyval.interm.intermTypedNode) = parseContext.handleUnaryMath((yyvsp[-1].interm).loc, errorOp, (yyvsp[-1].interm).op, (yyvsp[0].interm.intermTypedNode));
        } else {
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
            if ((yyval.interm.intermTypedNode)->getAsConstantUnion())
                (yyval.interm.intermTypedNode)->getAsConstantUnion()->setExpression();
        }
    }
#line 2602 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 408 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNull; }
#line 2608 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 409 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpNegative; }
#line 2614 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 410 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLogicalNot; }
#line 2620 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 411 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpBitwiseNot;
              parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise not"); }
#line 2627 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 417 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2633 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 418 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "*", EOpMul, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2643 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 423 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "/", EOpDiv, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2653 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 428 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "%");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "%", EOpMod, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2664 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 437 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2670 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 438 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "+", EOpAdd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2680 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 443 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "-", EOpSub, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2690 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 451 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2696 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 452 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift left");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<<", EOpLeftShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2707 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 458 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bit shift right");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">>", EOpRightShift, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2718 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 467 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2724 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 468 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<", EOpLessThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2734 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 473 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">", EOpGreaterThan, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2744 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 478 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "<=", EOpLessThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2754 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 483 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, ">=", EOpGreaterThanEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2764 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 491 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2770 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 492 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.arrayObjectCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
        parseContext.specializationCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
#ifndef GLSLANG_WEB
        parseContext.referenceCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "==");
#endif
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "==", EOpEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2786 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 503 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.arrayObjectCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array comparison");
        parseContext.opaqueCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
        parseContext.specializationCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
#ifndef GLSLANG_WEB
        parseContext.referenceCheck((yyvsp[-1].lex).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "!=");
#endif
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "!=", EOpNotEqual, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2802 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 517 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2808 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 518 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise and");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "&", EOpAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2819 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 527 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2825 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 528 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise exclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "^", EOpExclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2836 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 537 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2842 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 538 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[-1].lex).loc, "bitwise inclusive or");
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "|", EOpInclusiveOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 2853 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 547 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2859 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 548 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "&&", EOpLogicalAnd, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2869 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 556 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2875 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 557 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "^^", EOpLogicalXor, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2885 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 565 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2891 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 566 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.handleBinaryMath((yyvsp[-1].lex).loc, "||", EOpLogicalOr, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
        if ((yyval.interm.intermTypedNode) == 0)
            (yyval.interm.intermTypedNode) = parseContext.intermediate.addConstantUnion(false, (yyvsp[-1].lex).loc);
    }
#line 2901 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 574 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2907 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 575 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        ++parseContext.controlFlowNestingLevel;
    }
#line 2915 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 578 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        --parseContext.controlFlowNestingLevel;
        parseContext.boolCheck((yyvsp[-4].lex).loc, (yyvsp[-5].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-4].lex).loc, "?", (yyvsp[-5].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].lex).loc, ":", (yyvsp[-2].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].lex).loc, ":", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addSelection((yyvsp[-5].interm.intermTypedNode), (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-4].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-4].lex).loc, ":", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 2932 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 593 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode); }
#line 2938 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 594 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.arrayObjectCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "array assignment");
        parseContext.opaqueCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.storage16BitAssignmentCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.specializationCheck((yyvsp[-1].interm).loc, (yyvsp[-2].interm.intermTypedNode)->getType(), "=");
        parseContext.lValueErrorCheck((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode));
        parseContext.rValueErrorCheck((yyvsp[-1].interm).loc, "assign", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addAssign((yyvsp[-1].interm).op, (yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].interm).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.assignError((yyvsp[-1].interm).loc, "assign", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
        }
    }
#line 2956 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 610 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpAssign;
    }
#line 2965 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 614 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpMulAssign;
    }
#line 2974 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 618 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpDivAssign;
    }
#line 2983 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 622 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "%=");
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpModAssign;
    }
#line 2993 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 627 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpAddAssign;
    }
#line 3002 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 631 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).op = EOpSubAssign;
    }
#line 3011 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 635 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift left assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpLeftShiftAssign;
    }
#line 3020 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 639 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bit-shift right assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpRightShiftAssign;
    }
#line 3029 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 643 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-and assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpAndAssign;
    }
#line 3038 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 647 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-xor assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpExclusiveOrAssign;
    }
#line 3047 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 651 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "bitwise-or assign");
        (yyval.interm).loc = (yyvsp[0].lex).loc; (yyval.interm).op = EOpInclusiveOrAssign;
    }
#line 3056 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 658 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3064 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 661 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.samplerConstructorLocationCheck((yyvsp[-1].lex).loc, ",", (yyvsp[0].interm.intermTypedNode));
        (yyval.interm.intermTypedNode) = parseContext.intermediate.addComma((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode), (yyvsp[-1].lex).loc);
        if ((yyval.interm.intermTypedNode) == 0) {
            parseContext.binaryOpError((yyvsp[-1].lex).loc, ",", (yyvsp[-2].interm.intermTypedNode)->getCompleteString(), (yyvsp[0].interm.intermTypedNode)->getCompleteString());
            (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        }
    }
#line 3077 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 672 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.constantValueCheck((yyvsp[0].interm.intermTypedNode), "");
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 3086 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 679 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.handleFunctionDeclarator((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).function, true /* prototype */);
        (yyval.interm.intermNode) = 0;
        // TODO: 4.0 functionality: subroutines: make the identifier a user type for this signature
    }
#line 3096 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 684 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm).intermNode && (yyvsp[-1].interm).intermNode->getAsAggregate())
            (yyvsp[-1].interm).intermNode->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm).intermNode;
    }
#line 3106 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 689 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[-3].lex).loc, ENoProfile, 130, 0, "precision statement");
#endif
        // lazy setting of the previous scope's defaults, has effect only the first time it is called in a particular scope
        parseContext.symbolTable.setPreviousDefaultPrecisions(&parseContext.defaultPrecision[0]);
        parseContext.setDefaultPrecision((yyvsp[-3].lex).loc, (yyvsp[-1].interm.type), (yyvsp[-2].interm.type).qualifier.precision);
        (yyval.interm.intermNode) = 0;
    }
#line 3120 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 698 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.declareBlock((yyvsp[-1].interm).loc, *(yyvsp[-1].interm).typeList);
        (yyval.interm.intermNode) = 0;
    }
#line 3129 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 702 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.declareBlock((yyvsp[-2].interm).loc, *(yyvsp[-2].interm).typeList, (yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 3138 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 706 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.declareBlock((yyvsp[-3].interm).loc, *(yyvsp[-3].interm).typeList, (yyvsp[-2].lex).string, (yyvsp[-1].interm).arraySizes);
        (yyval.interm.intermNode) = 0;
    }
#line 3147 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 710 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalQualifierFixCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier);
        parseContext.updateStandaloneQualifierDefaults((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type));
        (yyval.interm.intermNode) = 0;
    }
#line 3157 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 715 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.checkNoShaderLayouts((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).shaderQualifiers);
        parseContext.addQualifierToExisting((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, *(yyvsp[-1].lex).string);
        (yyval.interm.intermNode) = 0;
    }
#line 3167 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 720 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.checkNoShaderLayouts((yyvsp[-3].interm.type).loc, (yyvsp[-3].interm.type).shaderQualifiers);
        (yyvsp[-1].interm.identifierList)->push_back((yyvsp[-2].lex).string);
        parseContext.addQualifierToExisting((yyvsp[-3].interm.type).loc, (yyvsp[-3].interm.type).qualifier, *(yyvsp[-1].interm.identifierList));
        (yyval.interm.intermNode) = 0;
    }
#line 3178 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 729 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedBlockCheck((yyvsp[-2].interm.type).loc); }
#line 3184 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 729 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        --parseContext.structNestingLevel;
        parseContext.blockName = (yyvsp[-4].lex).string;
        parseContext.globalQualifierFixCheck((yyvsp[-5].interm.type).loc, (yyvsp[-5].interm.type).qualifier);
        parseContext.checkNoShaderLayouts((yyvsp[-5].interm.type).loc, (yyvsp[-5].interm.type).shaderQualifiers);
        parseContext.currentBlockQualifier = (yyvsp[-5].interm.type).qualifier;
        (yyval.interm).loc = (yyvsp[-5].interm.type).loc;
        (yyval.interm).typeList = (yyvsp[-1].interm.typeList);
    }
#line 3198 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 740 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.identifierList) = new TIdentifierList;
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 3207 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 744 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.identifierList) = (yyvsp[-2].interm.identifierList);
        (yyval.interm.identifierList)->push_back((yyvsp[0].lex).string);
    }
#line 3216 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 751 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).function = (yyvsp[-1].interm.function);
        (yyval.interm).loc = (yyvsp[0].lex).loc;
    }
#line 3225 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 758 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3233 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 761 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.function) = (yyvsp[0].interm.function);
    }
#line 3241 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 768 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // Add the parameter
        (yyval.interm.function) = (yyvsp[-1].interm.function);
        if ((yyvsp[0].interm).param.type->getBasicType() != EbtVoid)
            (yyvsp[-1].interm.function)->addParameter((yyvsp[0].interm).param);
        else
            delete (yyvsp[0].interm).param.type;
    }
#line 3254 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 776 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // Only first parameter of one-parameter functions can be void
        // The check for named parameters not being void is done in parameter_declarator
        //
        if ((yyvsp[0].interm).param.type->getBasicType() == EbtVoid) {
            //
            // This parameter > first is void
            //
            parseContext.error((yyvsp[-1].lex).loc, "cannot be an argument type except for '(void)'", "void", "");
            delete (yyvsp[0].interm).param.type;
        } else {
            // Add the parameter
            (yyval.interm.function) = (yyvsp[-2].interm.function);
            (yyvsp[-2].interm.function)->addParameter((yyvsp[0].interm).param);
        }
    }
#line 3276 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 796 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).qualifier.storage != EvqGlobal && (yyvsp[-2].interm.type).qualifier.storage != EvqTemporary) {
            parseContext.error((yyvsp[-1].lex).loc, "no qualifiers allowed for function return",
                               GetStorageQualifierString((yyvsp[-2].interm.type).qualifier.storage), "");
        }
        if ((yyvsp[-2].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);

        // Add the function as a prototype after parsing it (we do not support recursion)
        TFunction *function;
        TType type((yyvsp[-2].interm.type));

        // Potentially rename shader entry point function.  No-op most of the time.
        parseContext.renameShaderFunction((yyvsp[-1].lex).string);

        // Make the function
        function = new TFunction((yyvsp[-1].lex).string, type);
        (yyval.interm.function) = function;
    }
#line 3300 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 819 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-1].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
            parseContext.arraySizeRequiredCheck((yyvsp[-1].interm.type).loc, *(yyvsp[-1].interm.type).arraySizes);
        }
        if ((yyvsp[-1].interm.type).basicType == EbtVoid) {
            parseContext.error((yyvsp[0].lex).loc, "illegal use of type 'void'", (yyvsp[0].lex).string->c_str(), "");
        }
        parseContext.reservedErrorCheck((yyvsp[0].lex).loc, *(yyvsp[0].lex).string);

        TParameter param = {(yyvsp[0].lex).string, new TType((yyvsp[-1].interm.type))};
        (yyval.interm).loc = (yyvsp[0].lex).loc;
        (yyval.interm).param = param;
    }
#line 3322 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 836 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
            parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }
        TType* type = new TType((yyvsp[-2].interm.type));
        type->transferArraySizes((yyvsp[0].interm).arraySizes);
        type->copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);

        parseContext.arrayOfArrayVersionCheck((yyvsp[-1].lex).loc, type->getArraySizes());
        parseContext.arraySizeRequiredCheck((yyvsp[0].interm).loc, *(yyvsp[0].interm).arraySizes);
        parseContext.reservedErrorCheck((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string);

        TParameter param = { (yyvsp[-1].lex).string, type };

        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).param = param;
    }
#line 3348 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 863 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());

        parseContext.checkNoShaderLayouts((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, *(yyval.interm).param.type);

    }
#line 3364 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 874 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheckFixStorage((yyvsp[0].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());
    }
#line 3376 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 884 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
        if ((yyvsp[-1].interm.type).qualifier.precision != EpqNone)
            (yyval.interm).param.type->getQualifier().precision = (yyvsp[-1].interm.type).qualifier.precision;
        parseContext.precisionQualifierCheck((yyvsp[-1].interm.type).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());

        parseContext.checkNoShaderLayouts((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, (yyvsp[-1].interm.type).qualifier.storage, *(yyval.interm).param.type);
        parseContext.paramCheckFix((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, *(yyval.interm).param.type);
    }
#line 3391 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 894 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);

        parseContext.parameterTypeCheck((yyvsp[0].interm).loc, EvqIn, *(yyvsp[0].interm).param.type);
        parseContext.paramCheckFixStorage((yyvsp[0].interm).loc, EvqTemporary, *(yyval.interm).param.type);
        parseContext.precisionQualifierCheck((yyval.interm).loc, (yyval.interm).param.type->getBasicType(), (yyval.interm).param.type->getQualifier());
    }
#line 3403 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 904 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TParameter param = { 0, new TType((yyvsp[0].interm.type)) };
        (yyval.interm).param = param;
        if ((yyvsp[0].interm.type).arraySizes)
            parseContext.arraySizeRequiredCheck((yyvsp[0].interm.type).loc, *(yyvsp[0].interm.type).arraySizes);
    }
#line 3414 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 913 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[0].interm);
    }
#line 3422 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 916 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-2].interm);
        parseContext.declareVariable((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyvsp[-2].interm).type);
    }
#line 3431 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 920 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-3].interm);
        parseContext.declareVariable((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-3].interm).type, (yyvsp[0].interm).arraySizes);
    }
#line 3440 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 924 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-5].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-5].interm).type, (yyvsp[-2].interm).arraySizes, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-5].interm).intermNode, initNode, (yyvsp[-1].lex).loc);
    }
#line 3450 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 929 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-4].interm).type;
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-4].interm).type, 0, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate((yyvsp[-4].interm).intermNode, initNode, (yyvsp[-1].lex).loc);
    }
#line 3460 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 937 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[0].interm.type);
        (yyval.interm).intermNode = 0;
#ifndef GLSLANG_WEB
        parseContext.declareTypeDefaults((yyval.interm).loc, (yyval.interm).type);
#endif
    }
#line 3472 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 944 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-1].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[0].lex).loc, *(yyvsp[0].lex).string, (yyvsp[-1].interm.type));
    }
#line 3482 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 949 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-2].interm.type);
        (yyval.interm).intermNode = 0;
        parseContext.declareVariable((yyvsp[-1].lex).loc, *(yyvsp[-1].lex).string, (yyvsp[-2].interm.type), (yyvsp[0].interm).arraySizes);
    }
#line 3492 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 954 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-4].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-3].lex).loc, *(yyvsp[-3].lex).string, (yyvsp[-4].interm.type), (yyvsp[-2].interm).arraySizes, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[-1].lex).loc);
    }
#line 3502 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 959 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).type = (yyvsp[-3].interm.type);
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), 0, (yyvsp[0].interm.intermTypedNode));
        (yyval.interm).intermNode = parseContext.intermediate.growAggregate(0, initNode, (yyvsp[-1].lex).loc);
    }
#line 3512 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 968 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);

        parseContext.globalQualifierTypeCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier, (yyval.interm.type));
        if ((yyvsp[0].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
        }

        parseContext.precisionQualifierCheck((yyval.interm.type).loc, (yyval.interm.type).basicType, (yyval.interm.type).qualifier);
    }
#line 3530 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 981 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalQualifierFixCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier);
        parseContext.globalQualifierTypeCheck((yyvsp[-1].interm.type).loc, (yyvsp[-1].interm.type).qualifier, (yyvsp[0].interm.type));

        if ((yyvsp[0].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[0].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[0].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
        }

        if ((yyvsp[0].interm.type).arraySizes && parseContext.arrayQualifierError((yyvsp[0].interm.type).loc, (yyvsp[-1].interm.type).qualifier))
            (yyvsp[0].interm.type).arraySizes = nullptr;

        parseContext.checkNoShaderLayouts((yyvsp[0].interm.type).loc, (yyvsp[-1].interm.type).shaderQualifiers);
        (yyvsp[0].interm.type).shaderQualifiers.merge((yyvsp[-1].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier, (yyvsp[-1].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).basicType, (yyvsp[0].interm.type).qualifier);

        (yyval.interm.type) = (yyvsp[0].interm.type);

        if (! (yyval.interm.type).qualifier.isInterpolation() &&
            ((parseContext.language == EShLangVertex   && (yyval.interm.type).qualifier.storage == EvqVaryingOut) ||
             (parseContext.language == EShLangFragment && (yyval.interm.type).qualifier.storage == EvqVaryingIn)))
            (yyval.interm.type).qualifier.smooth = true;
    }
#line 3561 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 1010 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "invariant");
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyval.interm.type).loc, ENoProfile, 120, 0, "invariant");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.invariant = true;
    }
#line 3574 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1021 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "smooth");
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "smooth");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "smooth");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.smooth = true;
    }
#line 3588 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1030 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "flat");
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "flat");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "flat");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.flat = true;
    }
#line 3602 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1042 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
    }
#line 3610 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1048 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3618 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1051 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-2].interm.type);
        (yyval.interm.type).shaderQualifiers.merge((yyvsp[0].interm.type).shaderQualifiers);
        parseContext.mergeObjectLayoutQualifiers((yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier, false);
    }
#line 3628 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1058 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), *(yyvsp[0].lex).string);
    }
#line 3637 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1062 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[-2].lex).loc);
        parseContext.setLayoutQualifier((yyvsp[-2].lex).loc, (yyval.interm.type), *(yyvsp[-2].lex).string, (yyvsp[0].interm.intermTypedNode));
    }
#line 3646 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1066 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { // because "shared" is both an identifier and a keyword
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        TString strShared("shared");
        parseContext.setLayoutQualifier((yyvsp[0].lex).loc, (yyval.interm.type), strShared);
    }
#line 3656 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1074 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3664 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1077 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        if ((yyval.interm.type).basicType == EbtVoid)
            (yyval.interm.type).basicType = (yyvsp[0].interm.type).basicType;

        (yyval.interm.type).shaderQualifiers.merge((yyvsp[0].interm.type).shaderQualifiers);
        parseContext.mergeQualifiers((yyval.interm.type).loc, (yyval.interm.type).qualifier, (yyvsp[0].interm.type).qualifier, false);
    }
#line 3677 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1088 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3685 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1091 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3693 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1094 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.checkPrecisionQualifier((yyvsp[0].interm.type).loc, (yyvsp[0].interm.type).qualifier.precision);
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3702 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1098 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3711 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1102 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // allow inheritance of storage qualifier from block declaration
        (yyval.interm.type) = (yyvsp[0].interm.type);
    }
#line 3720 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1109 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqConst;  // will later turn into EvqConstReadOnly, if the initializer is not constant
    }
#line 3729 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1113 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "inout");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqInOut;
    }
#line 3739 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1118 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "in");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        // whether this is a parameter "in" or a pipeline "in" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqIn;
    }
#line 3750 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1124 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "out");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        // whether this is a parameter "out" or a pipeline "out" will get sorted out a bit later
        (yyval.interm.type).qualifier.storage = EvqOut;
    }
#line 3761 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1130 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 120, 0, "centroid");
        parseContext.profileRequires((yyvsp[0].lex).loc, EEsProfile, 300, 0, "centroid");
#endif
        parseContext.globalCheck((yyvsp[0].lex).loc, "centroid");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.centroid = true;
    }
#line 3775 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1139 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "uniform");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqUniform;
    }
#line 3785 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1144 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.globalCheck((yyvsp[0].lex).loc, "buffer");
        (yyval.interm.type).init((yyvsp[0].lex).loc);
        (yyval.interm.type).qualifier.storage = EvqBuffer;
    }
#line 3795 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1152 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[-1].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).typeParameters = (yyvsp[0].interm.typeParameters);
    }
#line 3805 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1157 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.arrayOfArrayVersionCheck((yyvsp[0].interm).loc, (yyvsp[0].interm).arraySizes);
        (yyval.interm.type) = (yyvsp[-2].interm.type);
        (yyval.interm.type).qualifier.precision = parseContext.getDefaultPrecision((yyval.interm.type));
        (yyval.interm.type).typeParameters = (yyvsp[-1].interm.typeParameters);
        (yyval.interm.type).arraySizes = (yyvsp[0].interm).arraySizes;
    }
#line 3817 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1167 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[-1].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;
        (yyval.interm).arraySizes->addInnerSize();
    }
#line 3827 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1172 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm).loc = (yyvsp[-2].lex).loc;
        (yyval.interm).arraySizes = new TArraySizes;

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size, "array size");
        (yyval.interm).arraySizes->addInnerSize(size);
    }
#line 3840 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1180 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-2].interm);
        (yyval.interm).arraySizes->addInnerSize();
    }
#line 3849 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1184 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm) = (yyvsp[-3].interm);

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[-1].interm.intermTypedNode)->getLoc(), (yyvsp[-1].interm.intermTypedNode), size, "array size");
        (yyval.interm).arraySizes->addInnerSize(size);
    }
#line 3861 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1194 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeParameters) = (yyvsp[0].interm.typeParameters);
    }
#line 3869 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1197 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeParameters) = 0;
    }
#line 3877 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1203 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeParameters) = (yyvsp[-1].interm.typeParameters);
    }
#line 3885 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1209 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeParameters) = new TArraySizes;

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode), size, "type parameter");
        (yyval.interm.typeParameters)->addInnerSize(size);
    }
#line 3897 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1216 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeParameters) = (yyvsp[-2].interm.typeParameters);

        TArraySize size;
        parseContext.arraySizeCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode), size, "type parameter");
        (yyval.interm.typeParameters)->addInnerSize(size);
    }
#line 3909 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1226 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtVoid;
    }
#line 3918 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1230 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
    }
#line 3927 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1234 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
    }
#line 3936 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1238 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
    }
#line 3946 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1243 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
    }
#line 3955 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1247 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(2);
    }
#line 3965 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1252 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(3);
    }
#line 3975 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1257 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setVector(4);
    }
#line 3985 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1262 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(2);
    }
#line 3995 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1267 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(3);
    }
#line 4005 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1272 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtBool;
        (yyval.interm.type).setVector(4);
    }
#line 4015 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1277 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(2);
    }
#line 4025 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1282 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(3);
    }
#line 4035 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1287 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtInt;
        (yyval.interm.type).setVector(4);
    }
#line 4045 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1292 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(2);
    }
#line 4056 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1298 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(3);
    }
#line 4067 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1304 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.fullIntegerCheck((yyvsp[0].lex).loc, "unsigned integer vector");
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtUint;
        (yyval.interm.type).setVector(4);
    }
#line 4078 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1310 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4088 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1315 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4098 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1320 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4108 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1325 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 2);
    }
#line 4118 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1330 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 3);
    }
#line 4128 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1335 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(2, 4);
    }
#line 4138 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1340 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 2);
    }
#line 4148 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1345 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 3);
    }
#line 4158 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1350 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(3, 4);
    }
#line 4168 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1355 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 2);
    }
#line 4178 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1360 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 3);
    }
#line 4188 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1365 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtFloat;
        (yyval.interm.type).setMatrix(4, 4);
    }
#line 4198 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1370 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D);
    }
#line 4208 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1375 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd3D);
    }
#line 4218 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1380 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube);
    }
#line 4228 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1385 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, false, true);
    }
#line 4238 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1390 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, false, true);
    }
#line 4248 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1395 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true);
    }
#line 4258 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1400 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, Esd2D, true, true);
    }
#line 4268 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1405 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true);
    }
#line 4278 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1410 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtFloat, EsdCube, true, true);
    }
#line 4288 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1415 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D);
    }
#line 4298 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1420 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd3D);
    }
#line 4308 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1425 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube);
    }
#line 4318 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1430 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, Esd2D, true);
    }
#line 4328 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1435 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtInt, EsdCube, true);
    }
#line 4338 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1440 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D);
    }
#line 4348 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1445 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd3D);
    }
#line 4358 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1450 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube);
    }
#line 4368 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1455 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, Esd2D, true);
    }
#line 4378 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1460 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        (yyval.interm.type).basicType = EbtSampler;
        (yyval.interm.type).sampler.set(EbtUint, EsdCube, true);
    }
#line 4388 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1465 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.type) = (yyvsp[0].interm.type);
        (yyval.interm.type).qualifier.storage = parseContext.symbolTable.atGlobalLevel() ? EvqGlobal : EvqTemporary;
        parseContext.structTypeCheck((yyval.interm.type).loc, (yyval.interm.type));
    }
#line 4398 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1470 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //
        // This is for user defined type names.  The lexical phase looked up the
        // type.
        //
        if (const TVariable* variable = ((yyvsp[0].lex).symbol)->getAsVariable()) {
            const TType& structure = variable->getType();
            (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
            (yyval.interm.type).basicType = EbtStruct;
            (yyval.interm.type).userDef = &structure;
        } else
            parseContext.error((yyvsp[0].lex).loc, "expected type name", (yyvsp[0].lex).string->c_str(), "");
    }
#line 4416 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1486 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "highp precision qualifier");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqHigh);
    }
#line 4428 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1493 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "mediump precision qualifier");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqMedium);
    }
#line 4440 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1500 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifndef GLSLANG_WEB
        parseContext.profileRequires((yyvsp[0].lex).loc, ENoProfile, 130, 0, "lowp precision qualifier");
#endif
        (yyval.interm.type).init((yyvsp[0].lex).loc, parseContext.symbolTable.atGlobalLevel());
        parseContext.handlePrecisionQualifier((yyvsp[0].lex).loc, (yyval.interm.type).qualifier, EpqLow);
    }
#line 4452 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1510 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedStructCheck((yyvsp[-2].lex).loc); }
#line 4458 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1510 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TType* structure = new TType((yyvsp[-1].interm.typeList), *(yyvsp[-4].lex).string);
        parseContext.structArrayCheck((yyvsp[-4].lex).loc, *structure);
        TVariable* userTypeDef = new TVariable((yyvsp[-4].lex).string, *structure, true);
        if (! parseContext.symbolTable.insert(*userTypeDef))
            parseContext.error((yyvsp[-4].lex).loc, "redefinition", (yyvsp[-4].lex).string->c_str(), "struct");
        (yyval.interm.type).init((yyvsp[-5].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 4474 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1521 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { parseContext.nestedStructCheck((yyvsp[-1].lex).loc); }
#line 4480 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1521 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        TType* structure = new TType((yyvsp[-1].interm.typeList), TString(""));
        (yyval.interm.type).init((yyvsp[-4].lex).loc);
        (yyval.interm.type).basicType = EbtStruct;
        (yyval.interm.type).userDef = structure;
        --parseContext.structNestingLevel;
    }
#line 4492 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1531 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = (yyvsp[0].interm.typeList);
    }
#line 4500 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1534 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);
        for (unsigned int i = 0; i < (yyvsp[0].interm.typeList)->size(); ++i) {
            for (unsigned int j = 0; j < (yyval.interm.typeList)->size(); ++j) {
                if ((*(yyval.interm.typeList))[j].type->getFieldName() == (*(yyvsp[0].interm.typeList))[i].type->getFieldName())
                    parseContext.error((*(yyvsp[0].interm.typeList))[i].loc, "duplicate member name:", "", (*(yyvsp[0].interm.typeList))[i].type->getFieldName().c_str());
            }
            (yyval.interm.typeList)->push_back((*(yyvsp[0].interm.typeList))[i]);
        }
    }
#line 4515 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1547 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type).basicType);
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).basicType, (yyvsp[-2].interm.type).qualifier);

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            TType type((yyvsp[-2].interm.type));
            type.setFieldName((*(yyval.interm.typeList))[i].type->getFieldName());
            type.transferArraySizes((*(yyval.interm.typeList))[i].type->getArraySizes());
            type.copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);
            parseContext.arrayOfArrayVersionCheck((*(yyval.interm.typeList))[i].loc, type.getArraySizes());
            (*(yyval.interm.typeList))[i].type->shallowCopy(type);
        }
    }
#line 4544 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1571 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.type).arraySizes) {
#ifndef GLSLANG_WEB
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, ENoProfile, 120, E_GL_3DL_array_objects, "arrayed type");
            parseContext.profileRequires((yyvsp[-2].interm.type).loc, EEsProfile, 300, 0, "arrayed type");
#endif
            if (parseContext.profile == EEsProfile)
                parseContext.arraySizeRequiredCheck((yyvsp[-2].interm.type).loc, *(yyvsp[-2].interm.type).arraySizes);
        }

        (yyval.interm.typeList) = (yyvsp[-1].interm.typeList);

        parseContext.memberQualifierCheck((yyvsp[-3].interm.type));
        parseContext.voidErrorCheck((yyvsp[-2].interm.type).loc, (*(yyvsp[-1].interm.typeList))[0].type->getFieldName(), (yyvsp[-2].interm.type).basicType);
        parseContext.mergeQualifiers((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).qualifier, (yyvsp[-3].interm.type).qualifier, true);
        parseContext.precisionQualifierCheck((yyvsp[-2].interm.type).loc, (yyvsp[-2].interm.type).basicType, (yyvsp[-2].interm.type).qualifier);

        for (unsigned int i = 0; i < (yyval.interm.typeList)->size(); ++i) {
            TType type((yyvsp[-2].interm.type));
            type.setFieldName((*(yyval.interm.typeList))[i].type->getFieldName());
            type.transferArraySizes((*(yyval.interm.typeList))[i].type->getArraySizes());
            type.copyArrayInnerSizes((yyvsp[-2].interm.type).arraySizes);
            parseContext.arrayOfArrayVersionCheck((*(yyval.interm.typeList))[i].loc, type.getArraySizes());
            (*(yyval.interm.typeList))[i].type->shallowCopy(type);
        }
    }
#line 4575 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1600 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList) = new TTypeList;
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 4584 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1604 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeList)->push_back((yyvsp[0].interm.typeLine));
    }
#line 4592 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1610 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[0].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[0].lex).string);
    }
#line 4602 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1615 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.arrayOfArrayVersionCheck((yyvsp[-1].lex).loc, (yyvsp[0].interm).arraySizes);

        (yyval.interm.typeLine).type = new TType(EbtVoid);
        (yyval.interm.typeLine).loc = (yyvsp[-1].lex).loc;
        (yyval.interm.typeLine).type->setFieldName(*(yyvsp[-1].lex).string);
        (yyval.interm.typeLine).type->transferArraySizes((yyvsp[0].interm).arraySizes);
    }
#line 4615 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1626 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 4623 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1629 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        const char* initFeature = "{ } style initializers";
#ifndef GLSLANG_WEB
        parseContext.requireProfile((yyvsp[-2].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[-2].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
#endif
        (yyval.interm.intermTypedNode) = (yyvsp[-1].interm.intermTypedNode);
    }
#line 4636 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1637 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        const char* initFeature = "{ } style initializers";
#ifndef GLSLANG_WEB
        parseContext.requireProfile((yyvsp[-3].lex).loc, ~EEsProfile, initFeature);
        parseContext.profileRequires((yyvsp[-3].lex).loc, ~EEsProfile, 420, E_GL_ARB_shading_language_420pack, initFeature);
#endif
        (yyval.interm.intermTypedNode) = (yyvsp[-2].interm.intermTypedNode);
    }
#line 4649 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1648 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate(0, (yyvsp[0].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode)->getLoc());
    }
#line 4657 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1651 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.intermTypedNode));
    }
#line 4665 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1657 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4671 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1661 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4677 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1662 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4683 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1668 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4689 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1669 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4695 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1670 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4701 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1671 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4707 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1672 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4713 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1673 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4719 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1674 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4725 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1678 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = 0; }
#line 4731 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1679 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
    }
#line 4740 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1683 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
    }
#line 4749 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1687 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-2].interm.intermNode) && (yyvsp[-2].interm.intermNode)->getAsAggregate())
            (yyvsp[-2].interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-2].interm.intermNode);
    }
#line 4759 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1695 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4765 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1696 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode); }
#line 4771 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1700 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        ++parseContext.controlFlowNestingLevel;
    }
#line 4779 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1703 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 4788 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1707 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.push();
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 4798 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1712 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 4809 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1721 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
    }
#line 4817 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1724 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[-1].interm.intermNode) && (yyvsp[-1].interm.intermNode)->getAsAggregate())
            (yyvsp[-1].interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        (yyval.interm.intermNode) = (yyvsp[-1].interm.intermNode);
    }
#line 4827 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1732 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[0].interm.intermNode));
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence(0, (yyvsp[0].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        }
    }
#line 4840 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1740 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].interm.intermNode) && (yyvsp[0].interm.intermNode)->getAsBranchNode() && ((yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpCase ||
                                            (yyvsp[0].interm.intermNode)->getAsBranchNode()->getFlowOp() == EOpDefault)) {
            parseContext.wrapupSwitchSubsequence((yyvsp[-1].interm.intermNode) ? (yyvsp[-1].interm.intermNode)->getAsAggregate() : 0, (yyvsp[0].interm.intermNode));
            (yyval.interm.intermNode) = 0;  // start a fresh subsequence for what's after this case
        } else
            (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode));
    }
#line 4853 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1751 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = 0; }
#line 4859 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1752 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    { (yyval.interm.intermNode) = static_cast<TIntermNode*>((yyvsp[-1].interm.intermTypedNode)); }
#line 4865 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1756 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 4873 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1761 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.boolCheck((yyvsp[-4].lex).loc, (yyvsp[-2].interm.intermTypedNode));
        (yyval.interm.intermNode) = parseContext.intermediate.addSelection((yyvsp[-2].interm.intermTypedNode), (yyvsp[0].interm.nodePair), (yyvsp[-4].lex).loc);
    }
#line 4882 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1768 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermNode);
    }
#line 4891 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1772 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[0].interm.intermNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 4900 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1780 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
        parseContext.boolCheck((yyvsp[0].interm.intermTypedNode)->getLoc(), (yyvsp[0].interm.intermTypedNode));
    }
#line 4909 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1784 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.boolCheck((yyvsp[-2].lex).loc, (yyvsp[-3].interm.type));

        TType type((yyvsp[-3].interm.type));
        TIntermNode* initNode = parseContext.declareVariable((yyvsp[-2].lex).loc, *(yyvsp[-2].lex).string, (yyvsp[-3].interm.type), 0, (yyvsp[0].interm.intermTypedNode));
        if (initNode)
            (yyval.interm.intermTypedNode) = initNode->getAsTyped();
        else
            (yyval.interm.intermTypedNode) = 0;
    }
#line 4924 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1797 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 4932 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1802 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        // start new switch sequence on the switch stack
        ++parseContext.controlFlowNestingLevel;
        ++parseContext.statementNestingLevel;
        parseContext.switchSequenceStack.push_back(new TIntermSequence);
        parseContext.switchLevel.push_back(parseContext.statementNestingLevel);
        parseContext.symbolTable.push();
    }
#line 4945 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1810 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.addSwitch((yyvsp[-7].lex).loc, (yyvsp[-5].interm.intermTypedNode), (yyvsp[-1].interm.intermNode) ? (yyvsp[-1].interm.intermNode)->getAsAggregate() : 0);
        delete parseContext.switchSequenceStack.back();
        parseContext.switchSequenceStack.pop_back();
        parseContext.switchLevel.pop_back();
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 4959 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1822 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
    }
#line 4967 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1825 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 4975 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1831 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[-2].lex).loc, "cannot appear outside switch statement", "case", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[-2].lex).loc, "cannot be nested inside control flow", "case", "");
        else {
            parseContext.constantValueCheck((yyvsp[-1].interm.intermTypedNode), "case");
            parseContext.integerCheck((yyvsp[-1].interm.intermTypedNode), "case");
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpCase, (yyvsp[-1].interm.intermTypedNode), (yyvsp[-2].lex).loc);
        }
    }
#line 4992 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1843 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = 0;
        if (parseContext.switchLevel.size() == 0)
            parseContext.error((yyvsp[-1].lex).loc, "cannot appear outside switch statement", "default", "");
        else if (parseContext.switchLevel.back() != parseContext.statementNestingLevel)
            parseContext.error((yyvsp[-1].lex).loc, "cannot be nested inside control flow", "default", "");
        else
            (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpDefault, (yyvsp[-1].lex).loc);
    }
#line 5006 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1855 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5014 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1860 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[-1].lex).loc, "while loops not available", "limitation", "");
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 5027 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1868 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, true, (yyvsp[-5].lex).loc);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 5039 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1875 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 5049 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1880 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (! parseContext.limits.whileLoops)
            parseContext.error((yyvsp[-7].lex).loc, "do-while loops not available", "limitation", "");

        parseContext.boolCheck((yyvsp[0].lex).loc, (yyvsp[-2].interm.intermTypedNode));

        (yyval.interm.intermNode) = parseContext.intermediate.addLoop((yyvsp[-5].interm.intermNode), (yyvsp[-2].interm.intermTypedNode), 0, false, (yyvsp[-4].lex).loc);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 5065 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1891 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.push();
        ++parseContext.loopNestingLevel;
        ++parseContext.statementNestingLevel;
        ++parseContext.controlFlowNestingLevel;
    }
#line 5076 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1897 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.makeAggregate((yyvsp[-3].interm.intermNode), (yyvsp[-5].lex).loc);
        TIntermLoop* forLoop = parseContext.intermediate.addLoop((yyvsp[0].interm.intermNode), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node1), reinterpret_cast<TIntermTyped*>((yyvsp[-2].interm.nodePair).node2), true, (yyvsp[-6].lex).loc);
#ifndef GLSLANG_WEB
        if (! parseContext.limits.nonInductiveForLoops)
            parseContext.inductiveLoopCheck((yyvsp[-6].lex).loc, (yyvsp[-3].interm.intermNode), forLoop);
#endif
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyval.interm.intermNode), forLoop, (yyvsp[-6].lex).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setOperator(EOpSequence);
        --parseContext.loopNestingLevel;
        --parseContext.statementNestingLevel;
        --parseContext.controlFlowNestingLevel;
    }
#line 5095 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1914 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5103 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1917 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5111 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1923 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = (yyvsp[0].interm.intermTypedNode);
    }
#line 5119 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1926 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermTypedNode) = 0;
    }
#line 5127 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1932 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-1].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = 0;
    }
#line 5136 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1936 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.nodePair).node1 = (yyvsp[-2].interm.intermTypedNode);
        (yyval.interm.nodePair).node2 = (yyvsp[0].interm.intermTypedNode);
    }
#line 5145 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1943 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (parseContext.loopNestingLevel <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "continue statement only allowed in loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpContinue, (yyvsp[-1].lex).loc);
    }
#line 5155 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1948 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if (parseContext.loopNestingLevel + parseContext.switchSequenceStack.size() <= 0)
            parseContext.error((yyvsp[-1].lex).loc, "break statement only allowed in switch and loops", "", "");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpBreak, (yyvsp[-1].lex).loc);
    }
#line 5165 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1953 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpReturn, (yyvsp[-1].lex).loc);
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid)
            parseContext.error((yyvsp[-1].lex).loc, "non-void function must return a value", "return", "");
        if (parseContext.inMain)
            parseContext.postEntryPointReturn = true;
    }
#line 5177 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1960 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = parseContext.handleReturnValue((yyvsp[-2].lex).loc, (yyvsp[-1].interm.intermTypedNode));
    }
#line 5185 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1963 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        parseContext.requireStage((yyvsp[-1].lex).loc, EShLangFragment, "discard");
        (yyval.interm.intermNode) = parseContext.intermediate.addBranch(EOpKill, (yyvsp[-1].lex).loc);
    }
#line 5194 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1972 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
        parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
    }
#line 5203 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1976 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        if ((yyvsp[0].interm.intermNode) != nullptr) {
            (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-1].interm.intermNode), (yyvsp[0].interm.intermNode));
            parseContext.intermediate.setTreeRoot((yyval.interm.intermNode));
        }
    }
#line 5214 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1985 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5222 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1988 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyval.interm.intermNode) = (yyvsp[0].interm.intermNode);
    }
#line 5230 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1991 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
#ifdef GLSLANG_WEB
        parseContext.addError();
#else
        parseContext.requireProfile((yyvsp[0].lex).loc, ~EEsProfile, "extraneous semicolon");
        parseContext.profileRequires((yyvsp[0].lex).loc, ~EEsProfile, 460, nullptr, "extraneous semicolon");
#endif
        (yyval.interm.intermNode) = nullptr;
    }
#line 5244 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 2003 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        (yyvsp[0].interm).function = parseContext.handleFunctionDeclarator((yyvsp[0].interm).loc, *(yyvsp[0].interm).function, false /* not prototype */);
        (yyvsp[0].interm).intermNode = parseContext.handleFunctionDefinition((yyvsp[0].interm).loc, *(yyvsp[0].interm).function);
    }
#line 5253 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 2007 "MachineIndependent/glslang.y" /* yacc.c:1646  */
    {
        //   May be best done as post process phase on intermediate code
        if (parseContext.currentFunctionType->getBasicType() != EbtVoid && ! parseContext.functionReturnsValue)
            parseContext.error((yyvsp[-2].interm).loc, "function does not return a value:", "", (yyvsp[-2].interm).function->getName().c_str());
        parseContext.symbolTable.pop(&parseContext.defaultPrecision[0]);
        (yyval.interm.intermNode) = parseContext.intermediate.growAggregate((yyvsp[-2].interm).intermNode, (yyvsp[0].interm.intermNode));
        parseContext.intermediate.setAggregateOperator((yyval.interm.intermNode), EOpFunction, (yyvsp[-2].interm).function->getType(), (yyvsp[-2].interm).loc);
        (yyval.interm.intermNode)->getAsAggregate()->setName((yyvsp[-2].interm).function->getMangledName().c_str());

        // store the pragma information for debug and optimize and other vendor specific
        // information. This information can be queried from the parse tree
        (yyval.interm.intermNode)->getAsAggregate()->setOptimize(parseContext.contextPragma.optimize);
        (yyval.interm.intermNode)->getAsAggregate()->setDebug(parseContext.contextPragma.debug);
        (yyval.interm.intermNode)->getAsAggregate()->setPragmaTable(parseContext.contextPragma.pragmaTable);
    }
#line 5273 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
    break;


#line 5277 "MachineIndependent/glslang_tab.cpp" /* yacc.c:1646  */
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
      yyerror (pParseContext, YY_("syntax error"));
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
        yyerror (pParseContext, yymsgp);
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
                      yytoken, &yylval, pParseContext);
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
                  yystos[yystate], yyvsp, pParseContext);
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
  yyerror (pParseContext, YY_("memory exhausted"));
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
                  yytoken, &yylval, pParseContext);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, pParseContext);
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
#line 2024 "MachineIndependent/glslang.y" /* yacc.c:1906  */

