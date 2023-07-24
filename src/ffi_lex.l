%{
#include <stdlib.h>
%}

%option noyywrap
%%

"(" { return T_OPEN_PAREN; }
")" { return T_CLOSE_PAREN; }
"[" { return T_OPEN_BRACKET; }
"]" { return T_CLOSE_BRACKET; }
// no curlies

// no ++
// no dots or arrows
// no math
// no equality
// no logic
// no assigns
// no operators
// no statements
// no structs

"*" { return T_START; }
"," { return T_COMMA; }
";" { return T_SEMICOLON; }

"void" { yylval.keyword_val = T_VOID; return T_TYPE; }
"char" { yylval.keyword_val = T_CHAR; return T_TYPE; }
"int" { yylval.keyword_val = T_INT; return T_TYPE; }
"float" { yylval.keyword_val = T_FLOAT; return T_TYPE; }
"double" { yylval.keyword_val = T_DOUBLE; return T_TYPE; }
"_Bool" { yylval.keyword_val = T_BOOL; return T_TYPE; }
"_Complex" { yylval.keyword_val = T_COMPLEX; return T_TYPE; }
"_Imaginary" { yylval.keyword_val = T_IMAGINARY; return T_TYPE; }

"short" { yylval.keyword_val = T_SHORT; return T_INT_QUALIFIER; }
"long" { yylval.keyword_val = T_LONG; return T_INT_QUALIFIER; }
"signed" { yylval.keyword_val = T_SIGNED; return T_INT_QUALIFIER; }
"unsigned" { yylval.keyword_val = T_UNSIGNED; return T_INT_QUALIFIER; }

"const" { yylval.keyword_val = T_CONST; return T_QUALIFIER; }
"restrict" { yylval.keyword_val = T_RESTRICT; return T_QUALIFIER; }
"volatile" { yylval.keyword_val = T_VOLATILE; return T_QUALIFIER; }

"inline" { yylval.keyword_val = T_INLINE; return T_FUNCTION_QUALIFIER; }

// no doubles or strings
// missing hex & octal
[1-9][0-9]* { yylval.int_val = strtoul(yytext, NULL, 10); return T_INTEGER; }

[a-zA-Z_][0-9a-zA-Z_]* { yylval.str_val = strdup(yytext); return T_IDENTIFIER; }

%%
