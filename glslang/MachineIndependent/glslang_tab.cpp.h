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

#line 231 "MachineIndependent/glslang_tab.cpp.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (glslang::TParseContext* pParseContext);

#endif /* !YY_YY_MACHINEINDEPENDENT_GLSLANG_TAB_CPP_H_INCLUDED  */
