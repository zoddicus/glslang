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
    NOPERSPECTIVE = 305,
    FLAT = 306,
    SMOOTH = 307,
    LAYOUT = 308,
    MAT2X2 = 309,
    MAT2X3 = 310,
    MAT2X4 = 311,
    MAT3X2 = 312,
    MAT3X3 = 313,
    MAT3X4 = 314,
    MAT4X2 = 315,
    MAT4X3 = 316,
    MAT4X4 = 317,
    SAMPLER2D = 318,
    SAMPLER3D = 319,
    SAMPLERCUBE = 320,
    SAMPLER2DSHADOW = 321,
    SAMPLERCUBESHADOW = 322,
    SAMPLER2DARRAY = 323,
    SAMPLER2DARRAYSHADOW = 324,
    ISAMPLER2D = 325,
    ISAMPLER3D = 326,
    ISAMPLERCUBE = 327,
    ISAMPLER2DARRAY = 328,
    USAMPLER2D = 329,
    USAMPLER3D = 330,
    USAMPLERCUBE = 331,
    USAMPLER2DARRAY = 332,
    SAMPLERBUFFER = 333,
    ISAMPLERBUFFER = 334,
    USAMPLERBUFFER = 335,
    SAMPLERCUBEARRAY = 336,
    SAMPLERCUBEARRAYSHADOW = 337,
    ISAMPLERCUBEARRAY = 338,
    USAMPLERCUBEARRAY = 339,
    SAMPLER2DMS = 340,
    ISAMPLER2DMS = 341,
    USAMPLER2DMS = 342,
    SAMPLER2DMSARRAY = 343,
    ISAMPLER2DMSARRAY = 344,
    USAMPLER2DMSARRAY = 345,
    SAMPLER = 346,
    SAMPLERSHADOW = 347,
    TEXTURE2D = 348,
    TEXTURE3D = 349,
    TEXTURECUBE = 350,
    TEXTURE2DARRAY = 351,
    ITEXTURE2D = 352,
    ITEXTURE3D = 353,
    ITEXTURECUBE = 354,
    ITEXTURE2DARRAY = 355,
    UTEXTURE2D = 356,
    UTEXTURE3D = 357,
    UTEXTURECUBE = 358,
    UTEXTURE2DARRAY = 359,
    TEXTUREBUFFER = 360,
    ITEXTUREBUFFER = 361,
    UTEXTUREBUFFER = 362,
    TEXTURECUBEARRAY = 363,
    ITEXTURECUBEARRAY = 364,
    UTEXTURECUBEARRAY = 365,
    TEXTURE2DMS = 366,
    ITEXTURE2DMS = 367,
    UTEXTURE2DMS = 368,
    TEXTURE2DMSARRAY = 369,
    ITEXTURE2DMSARRAY = 370,
    UTEXTURE2DMSARRAY = 371,
    SUBPASSINPUT = 372,
    SUBPASSINPUTMS = 373,
    ISUBPASSINPUT = 374,
    ISUBPASSINPUTMS = 375,
    USUBPASSINPUT = 376,
    USUBPASSINPUTMS = 377,
    STRUCT = 378,
    VOID = 379,
    WHILE = 380,
    IDENTIFIER = 381,
    TYPE_NAME = 382,
    FLOATCONSTANT = 383,
    INTCONSTANT = 384,
    UINTCONSTANT = 385,
    BOOLCONSTANT = 386,
    LEFT_OP = 387,
    RIGHT_OP = 388,
    INC_OP = 389,
    DEC_OP = 390,
    LE_OP = 391,
    GE_OP = 392,
    EQ_OP = 393,
    NE_OP = 394,
    AND_OP = 395,
    OR_OP = 396,
    XOR_OP = 397,
    MUL_ASSIGN = 398,
    DIV_ASSIGN = 399,
    ADD_ASSIGN = 400,
    MOD_ASSIGN = 401,
    LEFT_ASSIGN = 402,
    RIGHT_ASSIGN = 403,
    AND_ASSIGN = 404,
    XOR_ASSIGN = 405,
    OR_ASSIGN = 406,
    SUB_ASSIGN = 407,
    LEFT_PAREN = 408,
    RIGHT_PAREN = 409,
    LEFT_BRACKET = 410,
    RIGHT_BRACKET = 411,
    LEFT_BRACE = 412,
    RIGHT_BRACE = 413,
    DOT = 414,
    COMMA = 415,
    COLON = 416,
    EQUAL = 417,
    SEMICOLON = 418,
    BANG = 419,
    DASH = 420,
    TILDE = 421,
    PLUS = 422,
    STAR = 423,
    SLASH = 424,
    PERCENT = 425,
    LEFT_ANGLE = 426,
    RIGHT_ANGLE = 427,
    VERTICAL_BAR = 428,
    CARET = 429,
    AMPERSAND = 430,
    QUESTION = 431,
    INVARIANT = 432,
    PRECISE = 433,
    HIGH_PRECISION = 434,
    MEDIUM_PRECISION = 435,
    LOW_PRECISION = 436,
    PRECISION = 437,
    PACKED = 438,
    RESOURCE = 439,
    SUPERP = 440
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

#line 275 "MachineIndependent/glslang_tab.cpp.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */
