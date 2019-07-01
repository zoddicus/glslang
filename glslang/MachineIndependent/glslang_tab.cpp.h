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
    NONUNIFORM = 304,
    PAYLOADNV = 305,
    PAYLOADINNV = 306,
    HITATTRNV = 307,
    CALLDATANV = 308,
    CALLDATAINNV = 309,
    COHERENT = 310,
    VOLATILE = 311,
    RESTRICT = 312,
    READONLY = 313,
    WRITEONLY = 314,
    DEVICECOHERENT = 315,
    QUEUEFAMILYCOHERENT = 316,
    WORKGROUPCOHERENT = 317,
    SUBGROUPCOHERENT = 318,
    NONPRIVATE = 319,
    NOPERSPECTIVE = 320,
    FLAT = 321,
    SMOOTH = 322,
    LAYOUT = 323,
    EXPLICITINTERPAMD = 324,
    PERVERTEXNV = 325,
    PERPRIMITIVENV = 326,
    PERVIEWNV = 327,
    PERTASKNV = 328,
    MAT2X2 = 329,
    MAT2X3 = 330,
    MAT2X4 = 331,
    MAT3X2 = 332,
    MAT3X3 = 333,
    MAT3X4 = 334,
    MAT4X2 = 335,
    MAT4X3 = 336,
    MAT4X4 = 337,
    SAMPLER1D = 338,
    SAMPLER2D = 339,
    SAMPLER3D = 340,
    SAMPLERCUBE = 341,
    SAMPLER1DSHADOW = 342,
    SAMPLER2DSHADOW = 343,
    SAMPLERCUBESHADOW = 344,
    SAMPLER1DARRAY = 345,
    SAMPLER2DARRAY = 346,
    SAMPLER1DARRAYSHADOW = 347,
    SAMPLER2DARRAYSHADOW = 348,
    ISAMPLER1D = 349,
    ISAMPLER2D = 350,
    ISAMPLER3D = 351,
    ISAMPLERCUBE = 352,
    ISAMPLER1DARRAY = 353,
    ISAMPLER2DARRAY = 354,
    USAMPLER1D = 355,
    USAMPLER2D = 356,
    USAMPLER3D = 357,
    USAMPLERCUBE = 358,
    USAMPLER1DARRAY = 359,
    USAMPLER2DARRAY = 360,
    SAMPLERBUFFER = 361,
    ISAMPLERBUFFER = 362,
    USAMPLERBUFFER = 363,
    SAMPLERCUBEARRAY = 364,
    SAMPLERCUBEARRAYSHADOW = 365,
    ISAMPLERCUBEARRAY = 366,
    USAMPLERCUBEARRAY = 367,
    SAMPLER2DMS = 368,
    ISAMPLER2DMS = 369,
    USAMPLER2DMS = 370,
    SAMPLER2DMSARRAY = 371,
    ISAMPLER2DMSARRAY = 372,
    USAMPLER2DMSARRAY = 373,
    SAMPLEREXTERNALOES = 374,
    SAMPLEREXTERNAL2DY2YEXT = 375,
    SAMPLER = 376,
    SAMPLERSHADOW = 377,
    TEXTURE1D = 378,
    TEXTURE2D = 379,
    TEXTURE3D = 380,
    TEXTURECUBE = 381,
    TEXTURE1DARRAY = 382,
    TEXTURE2DARRAY = 383,
    ITEXTURE1D = 384,
    ITEXTURE2D = 385,
    ITEXTURE3D = 386,
    ITEXTURECUBE = 387,
    ITEXTURE1DARRAY = 388,
    ITEXTURE2DARRAY = 389,
    UTEXTURE1D = 390,
    UTEXTURE2D = 391,
    UTEXTURE3D = 392,
    UTEXTURECUBE = 393,
    UTEXTURE1DARRAY = 394,
    UTEXTURE2DARRAY = 395,
    TEXTURE2DRECT = 396,
    ITEXTURE2DRECT = 397,
    UTEXTURE2DRECT = 398,
    TEXTUREBUFFER = 399,
    ITEXTUREBUFFER = 400,
    UTEXTUREBUFFER = 401,
    TEXTURECUBEARRAY = 402,
    ITEXTURECUBEARRAY = 403,
    UTEXTURECUBEARRAY = 404,
    TEXTURE2DMS = 405,
    ITEXTURE2DMS = 406,
    UTEXTURE2DMS = 407,
    TEXTURE2DMSARRAY = 408,
    ITEXTURE2DMSARRAY = 409,
    UTEXTURE2DMSARRAY = 410,
    SUBPASSINPUT = 411,
    SUBPASSINPUTMS = 412,
    ISUBPASSINPUT = 413,
    ISUBPASSINPUTMS = 414,
    USUBPASSINPUT = 415,
    USUBPASSINPUTMS = 416,
    STRUCT = 417,
    VOID = 418,
    WHILE = 419,
    IDENTIFIER = 420,
    TYPE_NAME = 421,
    FLOATCONSTANT = 422,
    INTCONSTANT = 423,
    UINTCONSTANT = 424,
    BOOLCONSTANT = 425,
    LEFT_OP = 426,
    RIGHT_OP = 427,
    INC_OP = 428,
    DEC_OP = 429,
    LE_OP = 430,
    GE_OP = 431,
    EQ_OP = 432,
    NE_OP = 433,
    AND_OP = 434,
    OR_OP = 435,
    XOR_OP = 436,
    MUL_ASSIGN = 437,
    DIV_ASSIGN = 438,
    ADD_ASSIGN = 439,
    MOD_ASSIGN = 440,
    LEFT_ASSIGN = 441,
    RIGHT_ASSIGN = 442,
    AND_ASSIGN = 443,
    XOR_ASSIGN = 444,
    OR_ASSIGN = 445,
    SUB_ASSIGN = 446,
    LEFT_PAREN = 447,
    RIGHT_PAREN = 448,
    LEFT_BRACKET = 449,
    RIGHT_BRACKET = 450,
    LEFT_BRACE = 451,
    RIGHT_BRACE = 452,
    DOT = 453,
    COMMA = 454,
    COLON = 455,
    EQUAL = 456,
    SEMICOLON = 457,
    BANG = 458,
    DASH = 459,
    TILDE = 460,
    PLUS = 461,
    STAR = 462,
    SLASH = 463,
    PERCENT = 464,
    LEFT_ANGLE = 465,
    RIGHT_ANGLE = 466,
    VERTICAL_BAR = 467,
    CARET = 468,
    AMPERSAND = 469,
    QUESTION = 470,
    INVARIANT = 471,
    PRECISE = 472,
    HIGH_PRECISION = 473,
    MEDIUM_PRECISION = 474,
    LOW_PRECISION = 475,
    PRECISION = 476,
    PACKED = 477,
    RESOURCE = 478,
    SUPERP = 479
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

#line 314 "MachineIndependent/glslang_tab.cpp.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */
