
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
     PROGRAM = 258,
     END = 259,
     IF = 260,
     ELSE = 261,
     WHILE = 262,
     WRITE = 263,
     READ = 264,
     DECVAR = 265,
     COMP_IGUAL = 266,
     COMP_MAYOR = 267,
     COMP_MENOR = 268,
     COMP_MAYOR_IGUAL = 269,
     COMP_MENOR_IGUAL = 270,
     COMP_DISTINTO = 271,
     OPAR_ASIG = 272,
     TIPO_INT = 273,
     TIPO_FLOAT = 274,
     TIPO_STRING = 275,
     CTE_ENTERA = 276,
     CTE_REAL = 277,
     CTE_STRING = 278,
     OP_MAS = 279,
     OP_MENOS = 280,
     OP_MULT = 281,
     OP_DIV = 282,
     OP_LOG_AND = 283,
     OP_LOG_OR = 284,
     OP_LOG_NOT = 285,
     DOS_PUNTOS = 286,
     PUN_Y_COM = 287,
     COMA = 288,
     ID = 289,
     PAR_A = 290,
     PAR_C = 291,
     LLAVE_A = 292,
     LLAVE_C = 293,
     COR_A = 294,
     COR_C = 295,
     INTHE_MIDDLE = 296
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define END 259
#define IF 260
#define ELSE 261
#define WHILE 262
#define WRITE 263
#define READ 264
#define DECVAR 265
#define COMP_IGUAL 266
#define COMP_MAYOR 267
#define COMP_MENOR 268
#define COMP_MAYOR_IGUAL 269
#define COMP_MENOR_IGUAL 270
#define COMP_DISTINTO 271
#define OPAR_ASIG 272
#define TIPO_INT 273
#define TIPO_FLOAT 274
#define TIPO_STRING 275
#define CTE_ENTERA 276
#define CTE_REAL 277
#define CTE_STRING 278
#define OP_MAS 279
#define OP_MENOS 280
#define OP_MULT 281
#define OP_DIV 282
#define OP_LOG_AND 283
#define OP_LOG_OR 284
#define OP_LOG_NOT 285
#define DOS_PUNTOS 286
#define PUN_Y_COM 287
#define COMA 288
#define ID 289
#define PAR_A 290
#define PAR_C 291
#define LLAVE_A 292
#define LLAVE_C 293
#define COR_A 294
#define COR_C 295
#define INTHE_MIDDLE 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 74 "Sintactico.y"

char * strid;
char * num;
char * real; 
char * str;



/* Line 1676 of yacc.c  */
#line 143 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


