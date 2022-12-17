
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     Id = 258,
     Num = 259,
     Str = 260,
     Main = 261,
     Eol = 262,
     Start = 263,
     End = 264,
     Nl = 265,
     Int = 266,
     Float = 267,
     Char = 268,
     Cin = 269,
     Cout = 270,
     Not = 271,
     And = 272,
     Xor = 273,
     Or = 274,
     Fact = 275,
     Sin = 276,
     Cos = 277,
     Tan = 278,
     Sqrt = 279,
     Log = 280,
     Ln = 281,
     Pow = 282,
     If = 283,
     Elif = 284,
     Else = 285,
     Switch = 286,
     Default = 287,
     Case = 288,
     Eq = 289,
     Fors = 290,
     Fore = 291,
     Movby = 292,
     Do = 293,
     Until = 294,
     Pplus = 295,
     Mminus = 296,
     Lt = 297,
     Lte = 298,
     Gt = 299,
     Gte = 300,
     Ckeq = 301,
     Noteq = 302,
     Plus = 303,
     Minus = 304,
     Mul = 305,
     Div = 306,
     Mod = 307,
     Max = 308,
     Min = 309,
     Comment = 310,
     Greeq = 311,
     Gre = 312,
     Lesseq = 313,
     Less = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 66 "main.y"

	int i;
	double d;
	char s[1000];



/* Line 1676 of yacc.c  */
#line 119 "main.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


