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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    REAL = 259,
    INT = 260,
    STRING = 261,
    VOID = 262,
    CHAR = 263,
    FLOAT = 264,
    IF = 265,
    ELSE = 266,
    SWITCH = 267,
    CASE = 268,
    DEFAULT = 269,
    BREAK = 270,
    RETURN = 271,
    ID = 272,
    STRUCT = 273,
    FOR = 274,
    WHILE = 275,
    NSC = 276,
    SC = 277,
    S = 278,
    DOT = 279,
    LS = 280,
    RS = 281,
    LB = 282,
    RB = 283,
    LL = 284,
    RL = 285,
    OR = 286,
    AND = 287,
    PLUPLU = 288,
    MINMIN = 289,
    MINAIG = 290,
    DIVAIG = 291,
    PLUAIG = 292,
    MLUAIG = 293,
    MODAIG = 294,
    ASIGN = 295,
    EQUAL = 296,
    NEQUAL = 297,
    LESS = 298,
    GREATER = 299,
    LESSEQUAL = 300,
    GREATEREQUAL = 301,
    MUL = 302,
    DIV = 303,
    MOD = 304,
    PLUSE = 305,
    MINUS = 306
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define INT 260
#define STRING 261
#define VOID 262
#define CHAR 263
#define FLOAT 264
#define IF 265
#define ELSE 266
#define SWITCH 267
#define CASE 268
#define DEFAULT 269
#define BREAK 270
#define RETURN 271
#define ID 272
#define STRUCT 273
#define FOR 274
#define WHILE 275
#define NSC 276
#define SC 277
#define S 278
#define DOT 279
#define LS 280
#define RS 281
#define LB 282
#define RB 283
#define LL 284
#define RL 285
#define OR 286
#define AND 287
#define PLUPLU 288
#define MINMIN 289
#define MINAIG 290
#define DIVAIG 291
#define PLUAIG 292
#define MLUAIG 293
#define MODAIG 294
#define ASIGN 295
#define EQUAL 296
#define NEQUAL 297
#define LESS 298
#define GREATER 299
#define LESSEQUAL 300
#define GREATEREQUAL 301
#define MUL 302
#define DIV 303
#define MOD 304
#define PLUSE 305
#define MINUS 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "bar.y" /* yacc.c:1909  */

	int iVal;
	float rVal;
	char cVal;

#line 162 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
