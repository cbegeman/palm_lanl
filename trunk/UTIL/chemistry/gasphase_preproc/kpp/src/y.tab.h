/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     JACOBIAN = 258,
     DOUBLE = 259,
     FUNCTION = 260,
     DEFVAR = 261,
     DEFRAD = 262,
     DEFFIX = 263,
     SETVAR = 264,
     SETRAD = 265,
     SETFIX = 266,
     HESSIAN = 267,
     STOICMAT = 268,
     STOCHASTIC = 269,
     DECLARE = 270,
     INITVALUES = 271,
     EQUATIONS = 272,
     LUMP = 273,
     INIEQUAL = 274,
     EQNEQUAL = 275,
     EQNCOLON = 276,
     LMPCOLON = 277,
     LMPPLUS = 278,
     SPCPLUS = 279,
     SPCEQUAL = 280,
     ATOMDECL = 281,
     CHECK = 282,
     CHECKALL = 283,
     REORDER = 284,
     MEX = 285,
     DUMMYINDEX = 286,
     EQNTAGS = 287,
     LOOKAT = 288,
     LOOKATALL = 289,
     TRANSPORT = 290,
     TRANSPORTALL = 291,
     MONITOR = 292,
     USES = 293,
     SPARSEDATA = 294,
     WRITE_ATM = 295,
     WRITE_SPC = 296,
     WRITE_MAT = 297,
     WRITE_OPT = 298,
     INITIALIZE = 299,
     XGRID = 300,
     YGRID = 301,
     ZGRID = 302,
     USE = 303,
     LANGUAGE = 304,
     INTFILE = 305,
     DRIVER = 306,
     RUN = 307,
     INLINE = 308,
     ENDINLINE = 309,
     PARAMETER = 310,
     SPCSPC = 311,
     INISPC = 312,
     INIVALUE = 313,
     EQNSPC = 314,
     EQNSIGN = 315,
     EQNCOEF = 316,
     RATE = 317,
     LMPSPC = 318,
     SPCNR = 319,
     ATOMID = 320,
     LKTID = 321,
     MNIID = 322,
     INLCTX = 323,
     INCODE = 324,
     SSPID = 325,
     EQNLESS = 326,
     EQNTAG = 327,
     EQNGREATER = 328,
     TPTID = 329,
     USEID = 330
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 72 "scan.y"

  char str[80];


/* Line 2058 of yacc.c  */
#line 137 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
