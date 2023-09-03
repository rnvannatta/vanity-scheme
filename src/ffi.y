%{

#include <stdlib.h>
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
  // yucky types for the lazy
  T_SIZE_T,
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
// yucky types for the lazy
V_STATIC_STRING(size_t_str, "size_t");

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
  // yucky types
  (VBlob*)&size_t_str,
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
static VWORD reverse(VWORD param) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP(param))) {
    ret = CONS(CAR(param), ret);
    param = CDR(param);
  }
  return ret;
}

int yylex(void);
void yyerror(char*);
extern FILE * yyin;

extern VWORD parse_ret;

%}

%token T_STRUCT

%token <keyword_val> T_TYPE
%token <keyword_val> T_QUALIFIER
%token <keyword_val> T_FUNCTION_QUALIFIER

%token <int_val> T_INTEGER

%token <vword_val> T_IDENTIFIER

%union {
  unsigned long long int_val;
  int keyword_val;
  VWORD vword_val;
}

%type <vword_val> start toplevel declaration declarator_list prefix_declarator postfix_declarator parameter_list abstract_prefix_declarator abstract_postfix_declarator qualified_type post_qualified_type

%%
start : toplevel
      { parse_ret = CONS("toplevel", reverse($1)); }
      | qualified_type prefix_declarator
      { parse_ret = LIST("naked_declaration", $1, $2); }
      ;

toplevel : declaration
         { $$ = LIST($1); }
         | toplevel declaration
         { $$ = CONS($2, $1); }
         ;

declaration : qualified_type declarator_list ';'
            { $$ = CONS("declaration", CONS($1, reverse($2))); }
            | qualified_type ';'
            { $$ = LIST("declaration", $1); }
            ;

declarator_list : prefix_declarator
                { $$ = LIST($1); }
                | declarator_list ',' prefix_declarator
                { $$ = CONS( $3, $1 ); }
                ;

prefix_declarator : postfix_declarator
                  { $$ = $1; }
                  | '*' postfix_declarator
                  { $$ = LIST("pointer", $2); }
                  | '*' T_QUALIFIER postfix_declarator
                  { $$ = LIST("pointer", LIST(keyword_to_vword($2), $3)); }
                  ;

postfix_declarator : T_IDENTIFIER
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

parameter_list : qualified_type
               { $$ = LIST("param", VNULL, $1, VFALSE); }
               | qualified_type abstract_prefix_declarator
               { $$ = LIST("param", VNULL, $1, $2); }
               | qualified_type prefix_declarator
               { $$ = LIST("param", VNULL, $1, $2); }
               | parameter_list ',' qualified_type
               { $$ = LIST("param", $1, $3, VFALSE); }
               | parameter_list ',' qualified_type abstract_prefix_declarator
               { $$ = LIST("param", $1, $3, $4); }
               | parameter_list ',' qualified_type prefix_declarator 
               { $$ = LIST("param", $1, $3, $4); }
               ;

post_qualified_type : T_TYPE
               { $$ = LIST(keyword_to_vword($1)); }
               | T_STRUCT T_IDENTIFIER
               { $$ = LIST(LIST("struct", $2)); }
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