%{
/* Copyright 2023-2024 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 2 of the
 * License, or (at your option) any later version.
 * 
 * The Vanity Scheme Compiler is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with the Vanity Scheme Compiler.
 *
 * If not, see <https://www.gnu.org/licenses/>.
 *
 * This work is published with additional permission, the Vanity Scheme
 * Runtime Library Exceptions, which should have been included with the
 * Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */

#include <stdlib.h>
#include "vscheme/vruntime.h"
#include "vscheme/vmemory.h"
#include "ffi.tab.h"

enum keyword_t {
  // types
  T_VOID,
  T_CHAR,
  T_INT,
  T_FLOAT,
  T_DOUBLE,
  T_BOOL,
  T_COMPLEX,
  T_IMAGINARY,
  // int types
  T_SHORT,
  T_LONG,
  T_SIGNED,
  T_UNSIGNED,
  // qualifiers
  T_CONST,
  T_RESTRICT,
  T_VOLATILE,
  // function qualifiers
  T_INLINE,
  // storage specifiers
  T_REGISTER,
  T_AUTO,
  T_STATIC,
  T_EXTERN,
  T_TYPEDEF,
};
extern VMemoryPool parse_pool;
extern _Bool is_typedef(char const * symbol);

%}

%option nodefault

WHITESPACE [ \t]|\\\n

%%
[.:;,[\](){}<=>?!~|&*/%+-] { return *yytext; }

  /* TODO: bad form, read keywords from hash table instead */
"void" { yylval.keyword_val = T_VOID; return T_TYPE; }
"char" { yylval.keyword_val = T_CHAR; return T_TYPE; }
"int" { yylval.keyword_val = T_INT; return T_TYPE; }
"float" { yylval.keyword_val = T_FLOAT; return T_TYPE; }
"double" { yylval.keyword_val = T_DOUBLE; return T_TYPE; }
"_Bool" { yylval.keyword_val = T_BOOL; return T_TYPE; }
"_Complex" { yylval.keyword_val = T_COMPLEX; return T_TYPE; }
"_Imaginary" { yylval.keyword_val = T_IMAGINARY; return T_TYPE; }

"short" { yylval.keyword_val = T_SHORT; return T_TYPE; }
"long" { yylval.keyword_val = T_LONG; return T_TYPE; }
"signed" { yylval.keyword_val = T_SIGNED; return T_TYPE; }
"unsigned" { yylval.keyword_val = T_UNSIGNED; return T_TYPE; }

"const" { yylval.keyword_val = T_CONST; return T_QUALIFIER; }
"restrict" { yylval.keyword_val = T_RESTRICT; return T_QUALIFIER; }
"volatile" { yylval.keyword_val = T_VOLATILE; return T_QUALIFIER; }

"inline" { yylval.keyword_val = T_INLINE; return T_FUNCTION_QUALIFIER; }

"struct" { return T_STRUCT; }
"enum" { return T_ENUM; }

"register" { yylval.keyword_val = T_REGISTER; return T_STORAGE; }
"auto" { yylval.keyword_val = T_AUTO; return T_STORAGE; }
"static" { yylval.keyword_val = T_STATIC; return T_STORAGE; }
"extern" { yylval.keyword_val = T_EXTERN; return T_STORAGE; }
"typedef" { yylval.keyword_val = T_TYPEDEF; return T_STORAGE; }

  /* no doubles or strings */
[1-9][0-9]* { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }
0[0-9]* { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }
0[xX][0-9a-fA-F]+ { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }

[a-zA-Z_][0-9a-zA-Z_]* { yylval.vword_val = VPoolString(&parse_pool, yytext); return is_typedef(yytext) ? T_TYPENAME : T_VARIABLE; }

  /* yicky way to get rid of pragma onces */
  /* need at minimum pragma once to make a functional header */
  /* also don't want to write a preprocessor atm */
^{WHITESPACE}*#{WHITESPACE}*pragma{WHITESPACE}+once{WHITESPACE}*\n

\\\n
\n
[ \t\r]+
"//"([^\n\\]|\\+(.|\n))*\n
\/\*([^*]|\*+[^*/])*\*+\/

%%

int yywrap(void) {
  (void)input;
  (void)yyunput;
  return 1;
}
void yyerror(char * c) {
  fprintf(stderr, "syntax error\n");
}
