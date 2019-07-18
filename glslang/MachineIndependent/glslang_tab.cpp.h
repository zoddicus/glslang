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
    NOPERSPECTIVE = 304,
    FLAT = 305,
    SMOOTH = 306,
    LAYOUT = 307,
    MAT2X2 = 308,
    MAT2X3 = 309,
    MAT2X4 = 310,
    MAT3X2 = 311,
    MAT3X3 = 312,
    MAT3X4 = 313,
    MAT4X2 = 314,
    MAT4X3 = 315,
    MAT4X4 = 316,
    SAMPLER2D = 317,
    SAMPLER3D = 318,
    SAMPLERCUBE = 319,
    SAMPLER2DSHADOW = 320,
    SAMPLERCUBESHADOW = 321,
    SAMPLER2DARRAY = 322,
    SAMPLER2DARRAYSHADOW = 323,
    ISAMPLER2D = 324,
    ISAMPLER3D = 325,
    ISAMPLERCUBE = 326,
    ISAMPLER2DARRAY = 327,
    USAMPLER2D = 328,
    USAMPLER3D = 329,
    USAMPLERCUBE = 330,
    USAMPLER2DARRAY = 331,
    SAMPLERBUFFER = 332,
    ISAMPLERBUFFER = 333,
    USAMPLERBUFFER = 334,
    SAMPLERCUBEARRAY = 335,
    SAMPLERCUBEARRAYSHADOW = 336,
    ISAMPLERCUBEARRAY = 337,
    USAMPLERCUBEARRAY = 338,
    SAMPLER2DMS = 339,
    ISAMPLER2DMS = 340,
    USAMPLER2DMS = 341,
    SAMPLER2DMSARRAY = 342,
    ISAMPLER2DMSARRAY = 343,
    USAMPLER2DMSARRAY = 344,
    SAMPLER = 345,
    SAMPLERSHADOW = 346,
    TEXTURE2D = 347,
    TEXTURE3D = 348,
    TEXTURECUBE = 349,
    TEXTURE2DARRAY = 350,
    ITEXTURE2D = 351,
    ITEXTURE3D = 352,
    ITEXTURECUBE = 353,
    ITEXTURE2DARRAY = 354,
    UTEXTURE2D = 355,
    UTEXTURE3D = 356,
    UTEXTURECUBE = 357,
    UTEXTURE2DARRAY = 358,
    TEXTUREBUFFER = 359,
    ITEXTUREBUFFER = 360,
    UTEXTUREBUFFER = 361,
    TEXTURECUBEARRAY = 362,
    ITEXTURECUBEARRAY = 363,
    UTEXTURECUBEARRAY = 364,
    TEXTURE2DMS = 365,
    ITEXTURE2DMS = 366,
    UTEXTURE2DMS = 367,
    TEXTURE2DMSARRAY = 368,
    ITEXTURE2DMSARRAY = 369,
    UTEXTURE2DMSARRAY = 370,
    SUBPASSINPUT = 371,
    SUBPASSINPUTMS = 372,
    ISUBPASSINPUT = 373,
    ISUBPASSINPUTMS = 374,
    USUBPASSINPUT = 375,
    USUBPASSINPUTMS = 376,
    STRUCT = 377,
    VOID = 378,
    WHILE = 379,
    IDENTIFIER = 380,
    TYPE_NAME = 381,
    FLOATCONSTANT = 382,
    INTCONSTANT = 383,
    UINTCONSTANT = 384,
    BOOLCONSTANT = 385,
    LEFT_OP = 386,
    RIGHT_OP = 387,
    INC_OP = 388,
    DEC_OP = 389,
    LE_OP = 390,
    GE_OP = 391,
    EQ_OP = 392,
    NE_OP = 393,
    AND_OP = 394,
    OR_OP = 395,
    XOR_OP = 396,
    MUL_ASSIGN = 397,
    DIV_ASSIGN = 398,
    ADD_ASSIGN = 399,
    MOD_ASSIGN = 400,
    LEFT_ASSIGN = 401,
    RIGHT_ASSIGN = 402,
    AND_ASSIGN = 403,
    XOR_ASSIGN = 404,
    OR_ASSIGN = 405,
    SUB_ASSIGN = 406,
    LEFT_PAREN = 407,
    RIGHT_PAREN = 408,
    LEFT_BRACKET = 409,
    RIGHT_BRACKET = 410,
    LEFT_BRACE = 411,
    RIGHT_BRACE = 412,
    DOT = 413,
    COMMA = 414,
    COLON = 415,
    EQUAL = 416,
    SEMICOLON = 417,
    BANG = 418,
    DASH = 419,
    TILDE = 420,
    PLUS = 421,
    STAR = 422,
    SLASH = 423,
    PERCENT = 424,
    LEFT_ANGLE = 425,
    RIGHT_ANGLE = 426,
    VERTICAL_BAR = 427,
    CARET = 428,
    AMPERSAND = 429,
    QUESTION = 430,
    INVARIANT = 431,
    PRECISE = 432,
    HIGH_PRECISION = 433,
    MEDIUM_PRECISION = 434,
    LOW_PRECISION = 435,
    PRECISION = 436,
    PACKED = 437,
    RESOURCE = 438,
    SUPERP = 439
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

#line 274 "MachineIndependent/glslang_tab.cpp.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */
