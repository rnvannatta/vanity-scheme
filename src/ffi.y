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
#include <limits.h>
#include "vscheme/vruntime.h"
#include "vscheme/vmemory.h"
#include "vscheme/vinlines.h"
VMemoryPool parse_pool = { 
  .page_offset = 4096,
  .page_size = 4096,
  .page = NULL,
};

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

// types
V_STATIC_STRING(void_str, "void");
V_STATIC_STRING(char_str, "char");
V_STATIC_STRING(int_str, "int");
V_STATIC_STRING(float_str, "float");
V_STATIC_STRING(double_str, "double");
V_STATIC_STRING(_Bool_str, "_Bool");
V_STATIC_STRING(_Complex_str, "_Complex");
V_STATIC_STRING(_Imaginary_str, "_Imaginary");
// int qualifers
V_STATIC_STRING(short_str, "short");
V_STATIC_STRING(long_str, "long");
V_STATIC_STRING(signed_str, "signed");
V_STATIC_STRING(unsigned_str, "unsigned");
// qualifers
V_STATIC_STRING(const_str, "const");
V_STATIC_STRING(restrict_str, "restrict");
V_STATIC_STRING(volatile_str, "volatile");
// func qualifiers
V_STATIC_STRING(inline_str, "inline");
// storage specifiers
V_STATIC_STRING(register_str, "register");
V_STATIC_STRING(auto_str, "auto");
V_STATIC_STRING(static_str, "static");
V_STATIC_STRING(extern_str, "extern");
V_STATIC_STRING(typedef_str, "typedef");

VBlob * keyword_to_blob[] = {
  // types
  (VBlob*)&void_str,
  (VBlob*)&char_str,
  (VBlob*)&int_str,
  (VBlob*)&float_str,
  (VBlob*)&double_str,
  (VBlob*)&_Bool_str,
  (VBlob*)&_Complex_str,
  (VBlob*)&_Imaginary_str,
  // int qualifiers
  (VBlob*)&short_str,
  (VBlob*)&long_str,
  (VBlob*)&signed_str,
  (VBlob*)&unsigned_str,
  // qualifiers
  (VBlob*)&const_str,
  (VBlob*)&restrict_str,
  (VBlob*)&volatile_str,
  // func qualifiers
  (VBlob*)&inline_str,
  // storage specifiers
  (VBlob*)&register_str,
  (VBlob*)&auto_str,
  (VBlob*)&static_str,
  (VBlob*)&extern_str,
  (VBlob*)&typedef_str,
};

VWORD keyword_to_vword(int i) {
  return VEncodePointer(keyword_to_blob[i], VPOINTER_OTHER);
}

VWORD kons_vword(VWORD word, VWORD rest) {
  return VPoolCons(&parse_pool, word, rest);
}
// TODO hash table this up
VWORD kons_str(char const * str, VWORD rest) {
  VWORD vstr = VPoolString(&parse_pool, str);
  return VPoolCons(&parse_pool, vstr, rest);
}
#define CONS(x, y) _Generic((x), VWORD: kons_vword, char *: kons_str, char const *: kons_str)(x, y)

#define LIST1(x) CONS(x, VNULL)
#define LIST2(x, y) CONS(x, CONS(y, VNULL))
#define LIST3(x, y, z) CONS(x, CONS(y, CONS(z, VNULL)))
#define LIST4(x, y, z, w) CONS(x, CONS(y, CONS(z, CONS(w, VNULL))))
#define GET_LIST(_1, _2, _3, _4, NAME, ...) NAME
#define LIST(...) GET_LIST(__VA_ARGS__, LIST4, LIST3, LIST2, LIST1)(__VA_ARGS__)

#define CAR(x) VInlineCar(x)
#define CDR(x) VInlineCdr(x)
#define CADR(x) VInlineCar(VInlineCdr(x))
#define CADDR(x) VInlineCar(VInlineCdr(VInlineCdr(x)))
#define CADDDR(x) VInlineCar(VInlineCdr(VInlineCdr(VInlineCdr(x))))
#define CADDDDR(x) VInlineCar(VInlineCdr(VInlineCdr(VInlineCdr(VInlineCdr(x)))))

static VWORD detangle_params(VWORD param) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP(param))) {
    VWORD newparam = LIST(CADDR(param), CADDDR(param));
    ret = CONS(newparam, ret);
    param = CADR(param);
  }
  ret = CONS("parameter_list", ret);
  return ret;
}
static VWORD detangle_enums(VWORD enum_list) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP(enum_list))) {
    VWORD newenum = CDR(enum_list);
    ret = CONS(newenum, ret);
    enum_list = CAR(enum_list);
  }
  return ret;
}
static VWORD reverse(VWORD param) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP(param))) {
    ret = CONS(CAR(param), ret);
    param = CDR(param);
  }
  return ret;
}

static bool memv(char const * x, VWORD lst) {
  while(!VDecodeBool(VInlineNullP(lst))) {
    VWORD e = CAR(lst);
    if(VIsSymbol(e) && !strcmp(VDecodeSymbol(e)->buf, x)) return true;
    if(VIsString(e) && !strcmp(VDecodeString(e)->buf, x)) return true;
    lst = CDR(lst);
  }
  return false;
}

// forbidding the shadowing of typedefs really simplifies this code
// as we can merely track whether a variable is a typedef
// and since typedef is a storage declaration, it can only show up
// in declarations, and since we do not parse block statements, we
// can just keep a simple table of typedefs
static VWORD typedef_table = { LITERAL_HEADER | VIMM_TOK | VTOK_NULL };

static void register_typedef(VWORD type, VWORD decl) {
  if(!memv("typedef", type)) return;

  VWORD sym = decl;
  while(VWordType(sym) == VPOINTER_PAIR)
    sym = CADR(sym);
  if(!VIsString(sym)) VError("foreign-parse-header: internal error\n");
  typedef_table = CONS(sym, typedef_table);
}

bool is_typedef(char const * symbol) {
  return memv(symbol, typedef_table);
}

int yylex(void);
void yyerror(char*);
extern FILE * yyin;

extern VWORD parse_ret;

%}

%token T_STRUCT T_ENUM

%token <keyword_val> T_TYPE
%token <keyword_val> T_QUALIFIER
%token <keyword_val> T_FUNCTION_QUALIFIER
%token <keyword_val> T_STORAGE

%token <int_val> T_INTEGER

%token <vword_val> T_TYPENAME T_VARIABLE

%union {
  unsigned long long int_val;
  int keyword_val;
  VWORD vword_val;
}

%type <vword_val> start toplevel declaration declarator_list prefix_declarator postfix_declarator parameter_list abstract_prefix_declarator abstract_postfix_declarator param_prefix_declarator param_postfix_declarator qualified_type post_qualified_type enum_list expr specified_type post_specified_type plain_type identifier

%%

// A grammatical ambiguity much worse than the classic A * a ambiguity:

// the standard c grammar accepts an identifier for declarations as opposed to
// a variable. however to avoid an absolutely awful reduce-reduce conflict we require
// variables. the c grammar specifies that in the event of this reduce/reduce
// conflict you choose to parse a typedef name as a type instead of a declarator
// for example:
// typedef int pain;

// void foo(pain x); // x is a declarator for an int
// void foo(pain (x)); // x is a declarator for an int
// void foo(int int); // syntax error
// void foo(int (int)); // the argument is an abstract declarator of a function accepting an int
// void foo(pain pain); // second pain is a declarator for an int
// void foo(pain (pain)); // reduce-reduce conflict :boom:

// This is horrendous to implement.
// It might be simple to implement but I don't know how to.

// to be honest, the cases where you'd get a reduce-reduce conflict are degenerate
// and so, we do not permit shadowing typedef names
// once you declare something as a typedef, you cannot shadow it
// Any code in the wild which does this is a mistake: fight me.

// As one exception, if it's a storage declaration as opposed to a parameter declaration,
// we permit identifiers to support double typedef'ing.
// The ambiguity is between abstract and concrete declarators, which is only a problem for
// parameters. And it's natural to allow duplicate declaration.

// typedef int pain;
// typedef int pain;

start : toplevel
      { parse_ret = CONS("toplevel", reverse($1)); }
      | specified_type prefix_declarator
      { parse_ret = LIST("naked_declaration", $1, $2); }
      ;

identifier : T_VARIABLE | T_TYPENAME ;

toplevel : declaration
         { $$ = LIST($1); }
         | toplevel declaration
         { $$ = CONS($2, $1); }
         ;

declaration : declarator_list ';'
            { VWORD v = $1; $$ = CONS("declaration", CONS(CAR(v), reverse(CDR(v)))); }
            | specified_type ';'
            { $$ = LIST("declaration", $1); }
            ;

declarator_list : specified_type prefix_declarator 
                { register_typedef($1, $2);
                  $$ = CONS($1, LIST($2)); }
                | declarator_list ',' prefix_declarator
                { VWORD v = $1;
                  register_typedef(CAR(v), $3);
                  $$ = CONS(CAR(v), CONS($3, CDR(v))); }
                ;

prefix_declarator : postfix_declarator
                  { $$ = $1; }
                  | '*' prefix_declarator
                  { $$ = LIST("pointer", $2); }
                  | '*' T_QUALIFIER prefix_declarator
                  { $$ = LIST("pointer", LIST(keyword_to_vword($2), $3)); }
                  ;

postfix_declarator : identifier
                   { $$ = $1; }
                   | postfix_declarator '(' ')'
                   { $$ = LIST("function", $1); }
                   | postfix_declarator '[' ']'
                   { $$ = LIST("array", $1); }
                   | postfix_declarator '(' parameter_list ')'
                   { $$ = LIST("function", $1, detangle_params($3)); }
                   | '(' prefix_declarator ')'
                   { $$ = $2; }
                   ;

abstract_postfix_declarator : abstract_postfix_declarator '(' ')'
                            { $$ = LIST("function", $1); }
                            | abstract_postfix_declarator '[' ']'
                            { $$ = LIST("array", $1); }
                            | abstract_postfix_declarator '(' parameter_list ')'
                            { $$ = LIST("function", $1, detangle_params($3)); }
                            | '(' ')'
                            { $$ = LIST("function", VFALSE); }
                            | '[' ']'
                            { $$ = LIST("array", VFALSE); }
                            | '(' parameter_list ')'
                            { $$ = LIST("function", VFALSE, detangle_params($2)); }
                            | '(' abstract_prefix_declarator ')'
                            { $$ = $2; }
                            ;

abstract_prefix_declarator : abstract_postfix_declarator
                           { $$ = $1; }
                           | '*'
                           { $$ = LIST("pointer", VFALSE); }
                           | '*' T_QUALIFIER
                           { $$ = LIST("pointer", LIST(keyword_to_vword($2), VFALSE)); }
                           | '*' abstract_prefix_declarator
                           { $$ = LIST("pointer", $2); }
                           | '*' T_QUALIFIER abstract_prefix_declarator
                           { $$ = LIST("pointer", LIST(keyword_to_vword($2), $3)); }
                           ;

param_prefix_declarator : param_postfix_declarator
                        { $$ = $1; }
                        | '*' param_prefix_declarator
                        { $$ = LIST("pointer", $2); }
                        | '*' T_QUALIFIER param_prefix_declarator
                        { $$ = LIST("pointer", LIST(keyword_to_vword($2), $3)); }
                        ;

param_postfix_declarator : T_VARIABLE
                         { $$ = $1; }
                         | param_postfix_declarator '(' ')'
                         { $$ = LIST("function", $1); }
                         | param_postfix_declarator '[' ']'
                         { $$ = LIST("array", $1); }
                         | param_postfix_declarator '(' parameter_list ')'
                         { $$ = LIST("function", $1, detangle_params($3)); }
                         | '(' param_prefix_declarator ')'
                         { $$ = $2; }

parameter_list : qualified_type
               { $$ = LIST("param", VNULL, $1, VFALSE); }
               | qualified_type abstract_prefix_declarator
               { $$ = LIST("param", VNULL, $1, $2); }
               | qualified_type param_prefix_declarator
               { $$ = LIST("param", VNULL, $1, $2); }
               | parameter_list ',' qualified_type
               { $$ = LIST("param", $1, $3, VFALSE); }
               | parameter_list ',' qualified_type abstract_prefix_declarator
               { $$ = LIST("param", $1, $3, $4); }
               | parameter_list ',' qualified_type param_prefix_declarator 
               { $$ = LIST("param", $1, $3, $4); }
               ;

plain_type : T_TYPE
           { $$ = keyword_to_vword($1); }
           | T_TYPENAME
           { $$ = $1; }
           | T_STRUCT identifier
           { $$ = LIST("struct", $2); }
           | T_ENUM identifier
           { $$ = LIST("enum", $2, VFALSE); }
           | T_ENUM '{' enum_list '}'
           { $$ = LIST("enum", VFALSE, detangle_enums($3)); }
           | T_ENUM identifier '{' enum_list '}'
           { $$ = LIST("enum", $2, detangle_enums($4)); }
           | T_ENUM '{' enum_list ',' '}'
           { $$ = LIST("enum", VFALSE, detangle_enums($3)); }
           | T_ENUM identifier '{' enum_list ',' '}'
           { $$ = LIST("enum", $2, detangle_enums($4)); }
           ;

post_qualified_type : plain_type
               { $$ = LIST($1); }
               | post_qualified_type T_QUALIFIER
               { $$ = CONS(keyword_to_vword($2), $1); }
               | post_qualified_type T_TYPE
               { $$ = CONS(keyword_to_vword($2), $1); }
               ;

qualified_type : post_qualified_type
               { $$ = $1; }
               | T_QUALIFIER qualified_type
               { $$ = CONS(keyword_to_vword($1), $2); }
               ;

specified_type : post_specified_type
               { $$ = $1; }
               | T_QUALIFIER specified_type
               { $$ = CONS(keyword_to_vword($1), $2); }
               | T_STORAGE specified_type
               { $$ = CONS(keyword_to_vword($1), $2); }
               ;

post_specified_type : plain_type
                    { $$ = LIST($1); }
                    | post_specified_type T_QUALIFIER
                    { $$ = CONS(keyword_to_vword($2), $1); }
                    | post_specified_type T_TYPE
                    { $$ = CONS(keyword_to_vword($2), $1); }
                    | post_specified_type T_STORAGE
                    { $$ = CONS(keyword_to_vword($2), $1); }
                    ;

enum_list : T_VARIABLE
          { $$ = LIST(VNULL, $1, VFALSE); }
          | T_VARIABLE '=' expr
          { $$ = LIST(VNULL, $1, $3); }
          | enum_list ',' T_VARIABLE
          { $$ = LIST($1, $3, VFALSE); }
          | enum_list ',' T_VARIABLE '=' expr
          { $$ = LIST($1, $3, $5); }
          ;

expr : T_INTEGER
     { if($1 > INT_MAX) VError("foreign-prase-header-c: failed to parse, integer exceeds 31 bit limit %llu", $1); $$ = VEncodeInt($1); }
     /*
     | '-' expr
     | '+' expr
     | '!' expr
     | T_SIZEOF expr
     | T_ALIGNOF expr

     | expr '*' expr
     | expr '/' expr
     | expr '%' expr

     | expr '+' expr
     | expr '-' expr

     | expr T_SHL expr
     | expr T_SHR expr

     | expr '>' expr
     | expr '<' expr
     | expr T_GEQ expr
     | expr T_LEQ expr

     | expr T_EQ expr
     | expr T_NEQ expr

     | expr '&' expr

     | expr '|' expr

     | expr '^' expr

     | expr '&&' expr

     | expr '||' expr

     | expr '?' expr ':' expr

     | expr ',' expr
     */
     ;

%%

VWORD parse_ret;

void VForeignParseDeclCImpl(V_CORE_ARGS, VWORD k, VWORD decl) {
  V_ARG_CHECK2("foreign-parse-decl-c", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VForeignParseDeclCImpl, runtime, statics, 2, argc, k, decl) {
    VBlob * buf = VCheckedDecodeString(decl, "foreign-parse-decl-c");
    FILE * f = fmemopen(buf->buf, buf->len-1, "r");
    if(!f) VError("foreign-parse-decl-c: failed to parse, out of file descriptors!\n");
    yyin = f;
    if(yyparse()) VError("foreign-parse-decl-c: error during parsing\n");

    fclose(f);
  }
  V_CALL(k, runtime, parse_ret);
}
void VForeignParseHeaderCImpl(V_CORE_ARGS, VWORD k, VWORD header) {
  V_ARG_CHECK2("foreign-parse-header-c", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VForeignParseHeaderCImpl, runtime, statics, 2, argc, k, header) {
    VPort * port = VCheckedDecodePort(header, "foreign-parse-header-c");
    FILE * f = port->stream;
    if(!f || !(port->flags & PFLAG_READ)) VError("foreign-parse-header-c: failed to parse, port is not an opened input port!\n");
    yyin = f;
    if(yyparse()) VError("foreign-parse-header-c: error during parsing\n");
  }
  V_CALL(k, runtime, parse_ret);
}
void VForeignReleaseParseImpl(V_CORE_ARGS, VWORD k) {
  V_ARG_CHECK2("foreign-release-parse", 1, argc);
  VDestroyMemoryPool(&parse_pool);
  V_CALL(k, runtime, VFALSE);
}

void (*VForeignParseDeclC)(V_CORE_ARGS, VWORD k, VWORD decl) = VForeignParseDeclCImpl;
void (*VForeignParseHeaderC)(V_CORE_ARGS, VWORD k, VWORD header) = VForeignParseHeaderCImpl;
void (*VForeignReleaseParse)(V_CORE_ARGS, VWORD k) = VForeignReleaseParseImpl;
