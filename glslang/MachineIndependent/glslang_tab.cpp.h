/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
    FLOAT16_T = 260,
    FLOAT = 261,
    FLOAT32_T = 262,
    DOUBLE = 263,
    FLOAT64_T = 264,
    CONST = 265,
    BOOL = 266,
    INT = 267,
    UINT = 268,
    INT64_T = 269,
    UINT64_T = 270,
    INT32_T = 271,
    UINT32_T = 272,
    INT16_T = 273,
    UINT16_T = 274,
    INT8_T = 275,
    UINT8_T = 276,
    BREAK = 277,
    CONTINUE = 278,
    DO = 279,
    ELSE = 280,
    FOR = 281,
    IF = 282,
    DISCARD = 283,
    RETURN = 284,
    SWITCH = 285,
    CASE = 286,
    DEFAULT = 287,
    SUBROUTINE = 288,
    BVEC2 = 289,
    BVEC3 = 290,
    BVEC4 = 291,
    IVEC2 = 292,
    IVEC3 = 293,
    IVEC4 = 294,
    UVEC2 = 295,
    UVEC3 = 296,
    UVEC4 = 297,
    U8VEC2 = 298,
    U8VEC3 = 299,
    U8VEC4 = 300,
    VEC2 = 301,
    VEC3 = 302,
    VEC4 = 303,
    MAT2 = 304,
    MAT3 = 305,
    MAT4 = 306,
    CENTROID = 307,
    IN = 308,
    OUT = 309,
    INOUT = 310,
    UNIFORM = 311,
    PATCH = 312,
    SAMPLE = 313,
    BUFFER = 314,
    SHARED = 315,
    NONUNIFORM = 316,
    PAYLOADNV = 317,
    PAYLOADINNV = 318,
    HITATTRNV = 319,
    CALLDATANV = 320,
    CALLDATAINNV = 321,
    COHERENT = 322,
    VOLATILE = 323,
    RESTRICT = 324,
    READONLY = 325,
    WRITEONLY = 326,
    DEVICECOHERENT = 327,
    QUEUEFAMILYCOHERENT = 328,
    WORKGROUPCOHERENT = 329,
    SUBGROUPCOHERENT = 330,
    NONPRIVATE = 331,
    NOPERSPECTIVE = 332,
    FLAT = 333,
    SMOOTH = 334,
    LAYOUT = 335,
    EXPLICITINTERPAMD = 336,
    PERVERTEXNV = 337,
    PERPRIMITIVENV = 338,
    PERVIEWNV = 339,
    PERTASKNV = 340,
    MAT2X2 = 341,
    MAT2X3 = 342,
    MAT2X4 = 343,
    MAT3X2 = 344,
    MAT3X3 = 345,
    MAT3X4 = 346,
    MAT4X2 = 347,
    MAT4X3 = 348,
    MAT4X4 = 349,
    SAMPLER2D = 350,
    SAMPLER3D = 351,
    SAMPLERCUBE = 352,
    SAMPLER2DSHADOW = 353,
    SAMPLERCUBESHADOW = 354,
    SAMPLER2DARRAY = 355,
    SAMPLER2DARRAYSHADOW = 356,
    ISAMPLER2D = 357,
    ISAMPLER3D = 358,
    ISAMPLERCUBE = 359,
    ISAMPLER2DARRAY = 360,
    USAMPLER2D = 361,
    USAMPLER3D = 362,
    USAMPLERCUBE = 363,
    USAMPLER2DARRAY = 364,
    SAMPLERBUFFER = 365,
    ISAMPLERBUFFER = 366,
    USAMPLERBUFFER = 367,
    SAMPLERCUBEARRAY = 368,
    SAMPLERCUBEARRAYSHADOW = 369,
    ISAMPLERCUBEARRAY = 370,
    USAMPLERCUBEARRAY = 371,
    SAMPLER2DMS = 372,
    ISAMPLER2DMS = 373,
    USAMPLER2DMS = 374,
    SAMPLER2DMSARRAY = 375,
    ISAMPLER2DMSARRAY = 376,
    USAMPLER2DMSARRAY = 377,
    SAMPLEREXTERNALOES = 378,
    SAMPLEREXTERNAL2DY2YEXT = 379,
    SAMPLER = 380,
    SAMPLERSHADOW = 381,
    TEXTURE2D = 382,
    TEXTURE3D = 383,
    TEXTURECUBE = 384,
    TEXTURE2DARRAY = 385,
    ITEXTURE2D = 386,
    ITEXTURE3D = 387,
    ITEXTURECUBE = 388,
    ITEXTURE2DARRAY = 389,
    UTEXTURE2D = 390,
    UTEXTURE3D = 391,
    UTEXTURECUBE = 392,
    UTEXTURE2DARRAY = 393,
    TEXTURE2DRECT = 394,
    ITEXTURE2DRECT = 395,
    UTEXTURE2DRECT = 396,
    TEXTUREBUFFER = 397,
    ITEXTUREBUFFER = 398,
    UTEXTUREBUFFER = 399,
    TEXTURECUBEARRAY = 400,
    ITEXTURECUBEARRAY = 401,
    UTEXTURECUBEARRAY = 402,
    TEXTURE2DMS = 403,
    ITEXTURE2DMS = 404,
    UTEXTURE2DMS = 405,
    TEXTURE2DMSARRAY = 406,
    ITEXTURE2DMSARRAY = 407,
    UTEXTURE2DMSARRAY = 408,
    SUBPASSINPUT = 409,
    SUBPASSINPUTMS = 410,
    ISUBPASSINPUT = 411,
    ISUBPASSINPUTMS = 412,
    USUBPASSINPUT = 413,
    USUBPASSINPUTMS = 414,
    STRUCT = 415,
    VOID = 416,
    WHILE = 417,
    IDENTIFIER = 418,
    TYPE_NAME = 419,
    FLOATCONSTANT = 420,
    INTCONSTANT = 421,
    UINTCONSTANT = 422,
    BOOLCONSTANT = 423,
    LEFT_OP = 424,
    RIGHT_OP = 425,
    INC_OP = 426,
    DEC_OP = 427,
    LE_OP = 428,
    GE_OP = 429,
    EQ_OP = 430,
    NE_OP = 431,
    AND_OP = 432,
    OR_OP = 433,
    XOR_OP = 434,
    MUL_ASSIGN = 435,
    DIV_ASSIGN = 436,
    ADD_ASSIGN = 437,
    MOD_ASSIGN = 438,
    LEFT_ASSIGN = 439,
    RIGHT_ASSIGN = 440,
    AND_ASSIGN = 441,
    XOR_ASSIGN = 442,
    OR_ASSIGN = 443,
    SUB_ASSIGN = 444,
    LEFT_PAREN = 445,
    RIGHT_PAREN = 446,
    LEFT_BRACKET = 447,
    RIGHT_BRACKET = 448,
    LEFT_BRACE = 449,
    RIGHT_BRACE = 450,
    DOT = 451,
    COMMA = 452,
    COLON = 453,
    EQUAL = 454,
    SEMICOLON = 455,
    BANG = 456,
    DASH = 457,
    TILDE = 458,
    PLUS = 459,
    STAR = 460,
    SLASH = 461,
    PERCENT = 462,
    LEFT_ANGLE = 463,
    RIGHT_ANGLE = 464,
    VERTICAL_BAR = 465,
    CARET = 466,
    AMPERSAND = 467,
    QUESTION = 468,
    INVARIANT = 469,
    PRECISE = 470,
    HIGH_PRECISION = 471,
    MEDIUM_PRECISION = 472,
    LOW_PRECISION = 473,
    PRECISION = 474,
    PACKED = 475,
    RESOURCE = 476,
    SUPERP = 477
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 70 "MachineIndependent/glslang.y" /* yacc.c:1909  */

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

#line 312 "MachineIndependent/glslang_tab.cpp.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */
