%{
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
  // int qualifiers
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
  // yucky types that don't belong except for convenience
  T_SIZE_T
};
extern VMemoryPool parse_pool;

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

  /* extra yuck for laziness */
"size_t" { yylval.keyword_val = T_SIZE_T; return T_TYPE; }

"short" { yylval.keyword_val = T_SHORT; return T_TYPE; }
"long" { yylval.keyword_val = T_LONG; return T_TYPE; }
"signed" { yylval.keyword_val = T_SIGNED; return T_TYPE; }
"unsigned" { yylval.keyword_val = T_UNSIGNED; return T_TYPE; }

"const" { yylval.keyword_val = T_CONST; return T_QUALIFIER; }
"restrict" { yylval.keyword_val = T_RESTRICT; return T_QUALIFIER; }
"volatile" { yylval.keyword_val = T_VOLATILE; return T_QUALIFIER; }

"inline" { yylval.keyword_val = T_INLINE; return T_FUNCTION_QUALIFIER; }

"struct" { return T_STRUCT; }

  /* no doubles or strings */
[1-9][0-9]* { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }
0[0-9]* { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }
0[xX][0-9a-fA-F]+ { yylval.int_val = strtoul(yytext, NULL, 0); return T_INTEGER; }

[a-zA-Z_][0-9a-zA-Z_]* { yylval.vword_val = VPoolString(&parse_pool, yytext); return T_IDENTIFIER; }

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