/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/ffi.y"

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

#define CAR(x) VInlineCar2(NULL, x)
#define CDR(x) VInlineCdr2(NULL, x)
#define CADR(x) VInlineCar2(NULL, VInlineCdr2(NULL, x))
#define CADDR(x) VInlineCar2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, x)))
#define CADDDR(x) VInlineCar2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, x))))
#define CADDDDR(x) VInlineCar2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, VInlineCdr2(NULL, x)))))

// note foo(void) is rewritten to an empty parameter list on the scheme side
static VWORD detangle_params(VWORD param) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP2(NULL, param))) {
    VWORD newparam = LIST(CADDR(param), CADDDR(param));
    ret = CONS(newparam, ret);
    param = CADR(param);
  }
  ret = CONS("parameter_list", ret);
  return ret;
}
static VWORD detangle_enums(VWORD enum_list) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP2(NULL, enum_list))) {
    VWORD newenum = CDR(enum_list);
    ret = CONS(newenum, ret);
    enum_list = CAR(enum_list);
  }
  return ret;
}
static VWORD reverse(VWORD param) {
  VWORD ret = VNULL;
  while(!VDecodeBool(VInlineNullP2(NULL, param))) {
    ret = CONS(CAR(param), ret);
    param = CDR(param);
  }
  return ret;
}

static bool memv(char const * x, VWORD lst) {
  while(!VDecodeBool(VInlineNullP2(NULL, lst))) {
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

extern bool parse_error;
extern VWORD parse_ret;
extern VRuntime * global_runtime;

static VWORD encode_cexpr(long long v) {
  if(v > INT_MAX || v < INT_MIN)
    VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, integer constant expression exceeds 31 bit limit %lld", v);
  return VEncodeInt((int)v);
}

// enum constants are registered here as they parse so later integer
// constant expressions can reference them, like the typedef table it
// lives only for the duration of one parse
static VWORD enum_table = { LITERAL_HEADER | VIMM_TOK | VTOK_NULL };
static long long enum_counter;

static void register_enum(VWORD name, long long val) {
  enum_table = CONS(CONS(name, encode_cexpr(val)), enum_table);
}

static long long lookup_enum(VWORD name) {
  char const * str = VDecodeString(name)->buf;
  VWORD lst = enum_table;
  while(!VDecodeBool(VInlineNullP2(NULL, lst))) {
    VWORD e = CAR(lst);
    if(!strcmp(VDecodeString(CAR(e))->buf, str)) return VDecodeInt(CDR(e));
    lst = CDR(lst);
  }
  VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, unknown identifier in integer constant expression: ~Z", str);
  return 0;
}

static void register_typedef(VWORD type, VWORD decl) {
  if(!memv("typedef", type)) return;

  VWORD sym = decl;
  while(VWordType(sym) == VPOINTER_PAIR)
    sym = CADR(sym);
  if(!VIsString(sym)) VErrorC(global_runtime, "foreign-parse-header: internal error\n");
  typedef_table = CONS(sym, typedef_table);
}

bool is_typedef(char const * symbol) {
  return memv(symbol, typedef_table);
}

int yylex(void);
void yyerror(const char*);
extern FILE * yyin;
extern char * yytext;

extern void yy_set_buffer(FILE * in);


#line 323 "ffi.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "ffi.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_STRUCT = 3,                   /* T_STRUCT  */
  YYSYMBOL_T_ENUM = 4,                     /* T_ENUM  */
  YYSYMBOL_T_ERROR = 5,                    /* T_ERROR  */
  YYSYMBOL_T_TYPE = 6,                     /* T_TYPE  */
  YYSYMBOL_T_QUALIFIER = 7,                /* T_QUALIFIER  */
  YYSYMBOL_T_FUNCTION_QUALIFIER = 8,       /* T_FUNCTION_QUALIFIER  */
  YYSYMBOL_T_STORAGE = 9,                  /* T_STORAGE  */
  YYSYMBOL_T_INTEGER = 10,                 /* T_INTEGER  */
  YYSYMBOL_T_TYPENAME = 11,                /* T_TYPENAME  */
  YYSYMBOL_T_VARIABLE = 12,                /* T_VARIABLE  */
  YYSYMBOL_T_SHL = 13,                     /* T_SHL  */
  YYSYMBOL_T_SHR = 14,                     /* T_SHR  */
  YYSYMBOL_T_LEQ = 15,                     /* T_LEQ  */
  YYSYMBOL_T_GEQ = 16,                     /* T_GEQ  */
  YYSYMBOL_T_EQ = 17,                      /* T_EQ  */
  YYSYMBOL_T_NEQ = 18,                     /* T_NEQ  */
  YYSYMBOL_T_ANDAND = 19,                  /* T_ANDAND  */
  YYSYMBOL_T_OROR = 20,                    /* T_OROR  */
  YYSYMBOL_T_ELLIPSIS = 21,                /* T_ELLIPSIS  */
  YYSYMBOL_22_ = 22,                       /* '?'  */
  YYSYMBOL_23_ = 23,                       /* ':'  */
  YYSYMBOL_24_ = 24,                       /* '|'  */
  YYSYMBOL_25_ = 25,                       /* '^'  */
  YYSYMBOL_26_ = 26,                       /* '&'  */
  YYSYMBOL_27_ = 27,                       /* '<'  */
  YYSYMBOL_28_ = 28,                       /* '>'  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '*'  */
  YYSYMBOL_32_ = 32,                       /* '/'  */
  YYSYMBOL_33_ = 33,                       /* '%'  */
  YYSYMBOL_T_UNARY = 34,                   /* T_UNARY  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_43_ = 43,                       /* '='  */
  YYSYMBOL_44_ = 44,                       /* '!'  */
  YYSYMBOL_45_ = 45,                       /* '~'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_start = 47,                     /* start  */
  YYSYMBOL_identifier = 48,                /* identifier  */
  YYSYMBOL_toplevel = 49,                  /* toplevel  */
  YYSYMBOL_declaration = 50,               /* declaration  */
  YYSYMBOL_declarator_list = 51,           /* declarator_list  */
  YYSYMBOL_prefix_declarator = 52,         /* prefix_declarator  */
  YYSYMBOL_postfix_declarator = 53,        /* postfix_declarator  */
  YYSYMBOL_abstract_postfix_declarator = 54, /* abstract_postfix_declarator  */
  YYSYMBOL_abstract_prefix_declarator = 55, /* abstract_prefix_declarator  */
  YYSYMBOL_param_prefix_declarator = 56,   /* param_prefix_declarator  */
  YYSYMBOL_param_postfix_declarator = 57,  /* param_postfix_declarator  */
  YYSYMBOL_parameter_list = 58,            /* parameter_list  */
  YYSYMBOL_plain_type = 59,                /* plain_type  */
  YYSYMBOL_post_qualified_type = 60,       /* post_qualified_type  */
  YYSYMBOL_qualified_type = 61,            /* qualified_type  */
  YYSYMBOL_specified_type = 62,            /* specified_type  */
  YYSYMBOL_post_specified_type = 63,       /* post_specified_type  */
  YYSYMBOL_enum_list = 64,                 /* enum_list  */
  YYSYMBOL_expr = 65,                      /* expr  */
  YYSYMBOL_cexpr = 66                      /* cexpr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   627

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   277


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,     2,     2,    33,    26,     2,
      37,    38,    31,    29,    36,    30,     2,    32,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    23,    35,
      27,    43,    28,    22,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    25,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,    24,    42,    45,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   325,   325,   327,   329,   332,   332,   334,   336,   338,
     341,   343,   347,   350,   356,   358,   360,   364,   366,   368,
     370,   372,   374,   376,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   404,   408,   410,   412,
     414,   416,   420,   422,   424,   428,   430,   432,   434,   436,
     438,   440,   442,   445,   447,   449,   451,   453,   455,   459,
     461,   463,   465,   467,   469,   471,   473,   477,   479,   481,
     485,   487,   491,   493,   495,   499,   501,   503,   505,   509,
     512,   515,   518,   528,   530,   534,   536,   538,   540,   542,
     544,   546,   549,   551,   554,   558,   560,   563,   566,   570,
     572,   574,   576,   579,   581,   584,   587,   590,   593,   596,
     599
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_STRUCT", "T_ENUM",
  "T_ERROR", "T_TYPE", "T_QUALIFIER", "T_FUNCTION_QUALIFIER", "T_STORAGE",
  "T_INTEGER", "T_TYPENAME", "T_VARIABLE", "T_SHL", "T_SHR", "T_LEQ",
  "T_GEQ", "T_EQ", "T_NEQ", "T_ANDAND", "T_OROR", "T_ELLIPSIS", "'?'",
  "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "T_UNARY", "';'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'",
  "'='", "'!'", "'~'", "$accept", "start", "identifier", "toplevel",
  "declaration", "declarator_list", "prefix_declarator",
  "postfix_declarator", "abstract_postfix_declarator",
  "abstract_prefix_declarator", "param_prefix_declarator",
  "param_postfix_declarator", "parameter_list", "plain_type",
  "post_qualified_type", "qualified_type", "specified_type",
  "post_specified_type", "enum_list", "expr", "cexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-4)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     598,   -75,   -10,    -1,   -75,   607,   607,   -75,    13,   589,
     -75,   -19,   -75,   171,   152,   -75,   -75,   -75,    25,   -16,
     -75,   -75,   -75,   -75,   -75,   171,   -75,   108,   174,   -75,
     108,   -75,    48,    77,   -75,   -75,   -75,    28,    -7,    25,
     -75,   -75,   108,   -75,    30,    91,   134,     2,    -9,   -75,
      43,   -75,   -75,   616,   -75,   151,   -75,    93,    -3,   -75,
     -75,     2,     2,     2,   -75,     2,     2,   199,   416,    32,
     -75,     3,   -75,   -75,   188,   -75,   -75,   -75,   -75,   129,
      70,    81,   159,   -75,   -75,   164,   -75,   -75,   184,   416,
     -75,   -75,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   -75,     2,   -75,    40,    -3,    -3,   -75,   -75,   -75,
      58,    79,   240,     2,   -75,   227,   146,   103,   169,   125,
       2,   -75,   232,   232,   533,   533,   528,   528,   458,   437,
     395,   479,   500,   507,   533,   533,    72,    72,   -75,   -75,
     -75,   416,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   564,
     -75,   255,   -75,   -75,   253,     2,   -75,   283,   -75,   254,
       2,   -75,   311,   416,     2,    85,   -75,   570,   -75,   339,
     -75,   576,   -75,   367,   -75,   416,   -75,    92,   -75,   100,
     -75,   -75,   -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,    59,     0,     0,    60,     0,     0,
       7,     0,    75,     0,    72,     6,     5,    61,     0,    62,
      73,    74,     1,     9,     8,     0,    10,     0,     0,    11,
       0,    17,    12,    14,    77,    76,    78,    79,     0,     0,
      12,    13,     0,    15,     0,     0,     0,     0,     0,    63,
       0,    16,    23,     0,    18,     0,    67,    70,    53,    85,
      86,     0,     0,     0,    19,     0,     0,     0,    80,    81,
      65,     0,    64,    71,     0,    21,    69,    68,    45,    38,
       0,     0,    37,    54,    55,    42,    89,    88,     0,    83,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,    66,     0,    56,    39,    40,    43,    30,
       0,     0,     0,     0,    31,     0,     0,     0,     0,     0,
       0,    87,    97,    98,   102,   101,   103,   104,   108,   109,
       0,   107,   106,   105,   100,    99,    95,    96,    92,    93,
      94,    82,    22,    57,    58,    41,    44,    36,    52,     0,
      34,     0,    32,    24,     0,     0,    25,     0,    46,     0,
       0,    47,     0,    84,     0,     0,    33,     0,    28,     0,
      26,     0,    50,     0,    48,   110,    35,     0,    27,     0,
      49,    29,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   291,   -75,   133,   -75,   208,   -75,   -75,   -74,
     -72,   -75,   -56,    83,   -75,   -53,    21,   -75,   112,   -75,
     -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,    31,     9,    10,    11,    32,    33,    82,    83,
      84,    85,    55,    56,    57,    58,    13,    14,    38,    88,
      67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    15,    16,    69,    68,   117,   120,   118,   121,    78,
      15,    16,    59,    22,    60,    69,    26,    27,    86,    87,
      89,   115,    90,    91,   122,    39,    20,    21,    79,    48,
      25,    61,    62,    70,    80,    49,    81,    37,   125,    63,
      18,   153,   155,   154,   156,   113,    65,    66,    -3,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    52,   151,
     164,    47,   169,     2,     3,   112,     4,    53,   152,    71,
     161,     7,    78,    12,   167,    72,   172,   173,    12,    12,
     123,    59,    12,    60,     2,     3,   157,     4,    53,    76,
      77,    79,     7,   108,   109,   110,   115,    80,   119,    81,
      61,    62,   165,    59,    45,    60,    46,   158,    63,    15,
      16,   124,   179,   186,   115,    65,    66,   183,   115,    54,
     191,   185,    61,    62,   170,    59,   116,    60,   192,    28,
      63,    78,    24,   166,    59,    30,    60,    65,    66,     2,
       3,    50,     4,    53,    61,    62,     0,     7,    34,    35,
      79,    36,    63,    61,    62,   171,    80,     0,    81,    65,
      66,    63,     2,     3,    64,     4,    53,     0,    65,    66,
       7,    42,    15,    16,   163,    15,    16,    74,     0,    75,
       0,     2,     3,     0,     4,    53,   126,     0,   127,     7,
       0,   128,    28,   129,     0,    28,    29,   168,    30,   114,
       0,    30,    92,    93,    94,    95,    96,    97,    98,    99,
     130,   100,   131,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    40,     0,    41,    43,     0,    44,   111,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
      51,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   106,   107,   108,   109,   110,     0,   162,    92,    93,
      94,    95,    96,    97,    98,    99,   159,   100,   160,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   177,
     181,   178,   182,    17,    19,   176,    92,    93,    94,    95,
      96,    97,    98,    99,     0,   100,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,     0,     0,     0,
       0,     0,     0,   180,    92,    93,    94,    95,    96,    97,
      98,    99,     0,   100,     0,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,     0,     0,     0,     0,     0,
       0,   184,    92,    93,    94,    95,    96,    97,    98,    99,
       0,   100,     0,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,     0,     0,     0,     0,     0,     0,   188,
      92,    93,    94,    95,    96,    97,    98,    99,     0,   100,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     0,     0,     0,     0,     0,     0,   190,    92,    93,
      94,    95,    96,    97,    98,    99,     0,   100,   174,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    92,
      93,    94,    95,    96,    97,    98,    99,     0,   100,     0,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
      92,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    92,    93,    94,    95,    96,    97,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,    92,    93,    94,    95,    96,    97,     0,     0,
       0,     0,     0,     0,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    92,    93,    94,    95,    96,    97,     0,
      92,    93,    94,    95,    96,    97,   103,   104,   105,   106,
     107,   108,   109,   110,   104,   105,   106,   107,   108,   109,
     110,    92,    93,    94,    95,     0,    92,    93,     0,     0,
       0,     0,     0,     0,     0,   104,   105,   106,   107,   108,
     109,   110,   106,   107,   108,   109,   110,     2,     3,     0,
       4,    53,     0,     2,     3,     7,     4,    53,     0,     2,
       3,     7,     4,    53,     0,   175,     0,     7,     0,    -2,
      23,   187,     2,     3,     0,     4,     5,   189,     6,     1,
       7,     2,     3,     0,     4,     5,     0,     6,     0,     7,
       2,     3,     0,     4,     5,     0,     6,     0,     7,     2,
       3,     0,     4,    53,     0,     0,     0,     7
};

static const yytype_int16 yycheck[] =
{
      53,    11,    12,    12,    47,    79,    80,    79,    80,    12,
      11,    12,    10,     0,    12,    12,    35,    36,    61,    62,
      63,    74,    65,    66,    80,    41,     5,     6,    31,    36,
       9,    29,    30,    42,    37,    42,    39,    12,    81,    37,
      41,   115,   116,   115,   116,    42,    44,    45,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,    38,   112,
     126,    43,   128,     3,     4,    43,     6,     7,    38,    36,
     123,    11,    12,     0,   127,    42,   129,   130,     5,     6,
       9,    10,     9,    12,     3,     4,    38,     6,     7,     6,
       7,    31,    11,    31,    32,    33,   159,    37,    38,    39,
      29,    30,     9,    10,    37,    12,    39,    38,    37,    11,
      12,    40,   165,    38,   177,    44,    45,   170,   181,    38,
      38,   174,    29,    30,     9,    10,     7,    12,    38,    31,
      37,    12,     9,    40,    10,    37,    12,    44,    45,     3,
       4,    39,     6,     7,    29,    30,    -1,    11,     6,     7,
      31,     9,    37,    29,    30,    40,    37,    -1,    39,    44,
      45,    37,     3,     4,    40,     6,     7,    -1,    44,    45,
      11,     7,    11,    12,    38,    11,    12,    36,    -1,    38,
      -1,     3,     4,    -1,     6,     7,    37,    -1,    39,    11,
      -1,    37,    31,    39,    -1,    31,    35,    38,    37,    21,
      -1,    37,    13,    14,    15,    16,    17,    18,    19,    20,
      36,    22,    38,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    25,    -1,    27,    28,    -1,    30,    40,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      42,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    29,    30,    31,    32,    33,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    20,    36,    22,    38,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    36,
      36,    38,    38,     2,     3,    40,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    13,    14,    15,    16,    17,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    13,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    13,    14,    15,    16,    17,    18,    -1,
      13,    14,    15,    16,    17,    18,    26,    27,    28,    29,
      30,    31,    32,    33,    27,    28,    29,    30,    31,    32,
      33,    13,    14,    15,    16,    -1,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    29,    30,    31,    32,    33,     3,     4,    -1,
       6,     7,    -1,     3,     4,    11,     6,     7,    -1,     3,
       4,    11,     6,     7,    -1,    21,    -1,    11,    -1,     0,
       1,    21,     3,     4,    -1,     6,     7,    21,     9,     1,
      11,     3,     4,    -1,     6,     7,    -1,     9,    -1,    11,
       3,     4,    -1,     6,     7,    -1,     9,    -1,    11,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    11
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     6,     7,     9,    11,    47,    49,
      50,    51,    59,    62,    63,    11,    12,    48,    41,    48,
      62,    62,     0,     1,    50,    62,    35,    36,    31,    35,
      37,    48,    52,    53,     6,     7,     9,    12,    64,    41,
      52,    52,     7,    52,    52,    37,    39,    43,    36,    42,
      64,    52,    38,     7,    38,    58,    59,    60,    61,    10,
      12,    29,    30,    37,    40,    44,    45,    66,    66,    12,
      42,    36,    42,    61,    36,    38,     6,     7,    12,    31,
      37,    39,    54,    55,    56,    57,    66,    66,    65,    66,
      66,    66,    13,    14,    15,    16,    17,    18,    19,    20,
      22,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    40,    43,    42,    21,    61,     7,    55,    56,    38,
      55,    56,    58,     9,    40,    66,    37,    39,    37,    39,
      36,    38,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    38,    55,    56,    55,    56,    38,    38,    36,
      38,    66,    40,    38,    58,     9,    40,    66,    38,    58,
       9,    40,    66,    66,    23,    21,    40,    36,    38,    66,
      40,    36,    38,    66,    40,    66,    38,    21,    40,    21,
      40,    38,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    55,    55,
      55,    55,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    60,    60,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     1,     2,     3,     1,     3,     3,
       4,     4,     6,     3,     3,     3,     4,     5,     4,     6,
       2,     2,     3,     4,     3,     5,     3,     1,     1,     2,
       2,     3,     1,     2,     3,     1,     3,     3,     4,     5,
       4,     6,     3,     1,     2,     2,     3,     4,     4,     1,
       1,     2,     2,     4,     5,     5,     6,     1,     2,     2,
       1,     2,     1,     2,     2,     1,     2,     2,     2,     1,
       3,     3,     5,     1,     3,     1,     1,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          YYNOMEM;                                                      \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      YY_LAC_ESTABLISH;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* start: toplevel  */
#line 326 "src/ffi.y"
      { parse_ret = CONS("toplevel", reverse((yyvsp[0].vword_val))); }
#line 2100 "ffi.tab.c"
    break;

  case 3: /* start: specified_type prefix_declarator  */
#line 328 "src/ffi.y"
      { parse_ret = LIST("naked_declaration", (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2106 "ffi.tab.c"
    break;

  case 4: /* start: error  */
#line 329 "src/ffi.y"
              { yyerrok; yyclearin; parse_error = true; YYACCEPT; }
#line 2112 "ffi.tab.c"
    break;

  case 7: /* toplevel: declaration  */
#line 335 "src/ffi.y"
         { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 2118 "ffi.tab.c"
    break;

  case 8: /* toplevel: toplevel declaration  */
#line 337 "src/ffi.y"
         { (yyval.vword_val) = CONS((yyvsp[0].vword_val), (yyvsp[-1].vword_val)); }
#line 2124 "ffi.tab.c"
    break;

  case 9: /* toplevel: toplevel error  */
#line 338 "src/ffi.y"
                          { yyerrok; parse_error = true; }
#line 2130 "ffi.tab.c"
    break;

  case 10: /* declaration: declarator_list ';'  */
#line 342 "src/ffi.y"
            { VWORD v = (yyvsp[-1].vword_val); (yyval.vword_val) = CONS("declaration", CONS(CAR(v), reverse(CDR(v)))); }
#line 2136 "ffi.tab.c"
    break;

  case 11: /* declaration: specified_type ';'  */
#line 344 "src/ffi.y"
            { (yyval.vword_val) = LIST("declaration", (yyvsp[-1].vword_val)); }
#line 2142 "ffi.tab.c"
    break;

  case 12: /* declarator_list: specified_type prefix_declarator  */
#line 348 "src/ffi.y"
                { register_typedef((yyvsp[-1].vword_val), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS((yyvsp[-1].vword_val), LIST((yyvsp[0].vword_val))); }
#line 2149 "ffi.tab.c"
    break;

  case 13: /* declarator_list: declarator_list ',' prefix_declarator  */
#line 351 "src/ffi.y"
                { VWORD v = (yyvsp[-2].vword_val);
                  register_typedef(CAR(v), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS(CAR(v), CONS((yyvsp[0].vword_val), CDR(v))); }
#line 2157 "ffi.tab.c"
    break;

  case 14: /* prefix_declarator: postfix_declarator  */
#line 357 "src/ffi.y"
                  { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2163 "ffi.tab.c"
    break;

  case 15: /* prefix_declarator: '*' prefix_declarator  */
#line 359 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 2169 "ffi.tab.c"
    break;

  case 16: /* prefix_declarator: '*' T_QUALIFIER prefix_declarator  */
#line 361 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 2175 "ffi.tab.c"
    break;

  case 17: /* postfix_declarator: identifier  */
#line 365 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2181 "ffi.tab.c"
    break;

  case 18: /* postfix_declarator: postfix_declarator '(' ')'  */
#line 367 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2187 "ffi.tab.c"
    break;

  case 19: /* postfix_declarator: postfix_declarator '[' ']'  */
#line 369 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2193 "ffi.tab.c"
    break;

  case 20: /* postfix_declarator: postfix_declarator '[' cexpr ']'  */
#line 371 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), encode_cexpr((yyvsp[-1].int_val))); }
#line 2199 "ffi.tab.c"
    break;

  case 21: /* postfix_declarator: postfix_declarator '(' parameter_list ')'  */
#line 373 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2205 "ffi.tab.c"
    break;

  case 22: /* postfix_declarator: postfix_declarator '(' parameter_list ',' T_ELLIPSIS ')'  */
#line 375 "src/ffi.y"
                   { (yyval.vword_val) = LIST("variadic-function", (yyvsp[-5].vword_val), detangle_params((yyvsp[-3].vword_val))); }
#line 2211 "ffi.tab.c"
    break;

  case 23: /* postfix_declarator: '(' prefix_declarator ')'  */
#line 377 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2217 "ffi.tab.c"
    break;

  case 24: /* abstract_postfix_declarator: abstract_postfix_declarator '(' ')'  */
#line 381 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2223 "ffi.tab.c"
    break;

  case 25: /* abstract_postfix_declarator: abstract_postfix_declarator '[' ']'  */
#line 383 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2229 "ffi.tab.c"
    break;

  case 26: /* abstract_postfix_declarator: abstract_postfix_declarator '[' cexpr ']'  */
#line 385 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), encode_cexpr((yyvsp[-1].int_val))); }
#line 2235 "ffi.tab.c"
    break;

  case 27: /* abstract_postfix_declarator: abstract_postfix_declarator '[' T_STORAGE cexpr ']'  */
#line 387 "src/ffi.y"
                            { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", (yyvsp[-4].vword_val), encode_cexpr((yyvsp[-1].int_val))); }
#line 2241 "ffi.tab.c"
    break;

  case 28: /* abstract_postfix_declarator: abstract_postfix_declarator '(' parameter_list ')'  */
#line 389 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2247 "ffi.tab.c"
    break;

  case 29: /* abstract_postfix_declarator: abstract_postfix_declarator '(' parameter_list ',' T_ELLIPSIS ')'  */
#line 391 "src/ffi.y"
                            { (yyval.vword_val) = LIST("variadic-function", (yyvsp[-5].vword_val), detangle_params((yyvsp[-3].vword_val))); }
#line 2253 "ffi.tab.c"
    break;

  case 30: /* abstract_postfix_declarator: '(' ')'  */
#line 393 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE); }
#line 2259 "ffi.tab.c"
    break;

  case 31: /* abstract_postfix_declarator: '[' ']'  */
#line 395 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE, VFALSE); }
#line 2265 "ffi.tab.c"
    break;

  case 32: /* abstract_postfix_declarator: '[' cexpr ']'  */
#line 397 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE, encode_cexpr((yyvsp[-1].int_val))); }
#line 2271 "ffi.tab.c"
    break;

  case 33: /* abstract_postfix_declarator: '[' T_STORAGE cexpr ']'  */
#line 399 "src/ffi.y"
                            { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", VFALSE, encode_cexpr((yyvsp[-1].int_val))); }
#line 2277 "ffi.tab.c"
    break;

  case 34: /* abstract_postfix_declarator: '(' parameter_list ')'  */
#line 401 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE, detangle_params((yyvsp[-1].vword_val))); }
#line 2283 "ffi.tab.c"
    break;

  case 35: /* abstract_postfix_declarator: '(' parameter_list ',' T_ELLIPSIS ')'  */
#line 403 "src/ffi.y"
                            { (yyval.vword_val) = LIST("variadic-function", VFALSE, detangle_params((yyvsp[-3].vword_val))); }
#line 2289 "ffi.tab.c"
    break;

  case 36: /* abstract_postfix_declarator: '(' abstract_prefix_declarator ')'  */
#line 405 "src/ffi.y"
                            { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2295 "ffi.tab.c"
    break;

  case 37: /* abstract_prefix_declarator: abstract_postfix_declarator  */
#line 409 "src/ffi.y"
                           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2301 "ffi.tab.c"
    break;

  case 38: /* abstract_prefix_declarator: '*'  */
#line 411 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", VFALSE); }
#line 2307 "ffi.tab.c"
    break;

  case 39: /* abstract_prefix_declarator: '*' T_QUALIFIER  */
#line 413 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[0].keyword_val)), VFALSE)); }
#line 2313 "ffi.tab.c"
    break;

  case 40: /* abstract_prefix_declarator: '*' abstract_prefix_declarator  */
#line 415 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 2319 "ffi.tab.c"
    break;

  case 41: /* abstract_prefix_declarator: '*' T_QUALIFIER abstract_prefix_declarator  */
#line 417 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 2325 "ffi.tab.c"
    break;

  case 42: /* param_prefix_declarator: param_postfix_declarator  */
#line 421 "src/ffi.y"
                        { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2331 "ffi.tab.c"
    break;

  case 43: /* param_prefix_declarator: '*' param_prefix_declarator  */
#line 423 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 2337 "ffi.tab.c"
    break;

  case 44: /* param_prefix_declarator: '*' T_QUALIFIER param_prefix_declarator  */
#line 425 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 2343 "ffi.tab.c"
    break;

  case 45: /* param_postfix_declarator: T_VARIABLE  */
#line 429 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2349 "ffi.tab.c"
    break;

  case 46: /* param_postfix_declarator: param_postfix_declarator '(' ')'  */
#line 431 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2355 "ffi.tab.c"
    break;

  case 47: /* param_postfix_declarator: param_postfix_declarator '[' ']'  */
#line 433 "src/ffi.y"
                         { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2361 "ffi.tab.c"
    break;

  case 48: /* param_postfix_declarator: param_postfix_declarator '[' cexpr ']'  */
#line 435 "src/ffi.y"
                         { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), encode_cexpr((yyvsp[-1].int_val))); }
#line 2367 "ffi.tab.c"
    break;

  case 49: /* param_postfix_declarator: param_postfix_declarator '[' T_STORAGE cexpr ']'  */
#line 437 "src/ffi.y"
                         { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", (yyvsp[-4].vword_val), encode_cexpr((yyvsp[-1].int_val))); }
#line 2373 "ffi.tab.c"
    break;

  case 50: /* param_postfix_declarator: param_postfix_declarator '(' parameter_list ')'  */
#line 439 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2379 "ffi.tab.c"
    break;

  case 51: /* param_postfix_declarator: param_postfix_declarator '(' parameter_list ',' T_ELLIPSIS ')'  */
#line 441 "src/ffi.y"
                         { (yyval.vword_val) = LIST("variadic-function", (yyvsp[-5].vword_val), detangle_params((yyvsp[-3].vword_val))); }
#line 2385 "ffi.tab.c"
    break;

  case 52: /* param_postfix_declarator: '(' param_prefix_declarator ')'  */
#line 443 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2391 "ffi.tab.c"
    break;

  case 53: /* parameter_list: qualified_type  */
#line 446 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 2397 "ffi.tab.c"
    break;

  case 54: /* parameter_list: qualified_type abstract_prefix_declarator  */
#line 448 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2403 "ffi.tab.c"
    break;

  case 55: /* parameter_list: qualified_type param_prefix_declarator  */
#line 450 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2409 "ffi.tab.c"
    break;

  case 56: /* parameter_list: parameter_list ',' qualified_type  */
#line 452 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 2415 "ffi.tab.c"
    break;

  case 57: /* parameter_list: parameter_list ',' qualified_type abstract_prefix_declarator  */
#line 454 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2421 "ffi.tab.c"
    break;

  case 58: /* parameter_list: parameter_list ',' qualified_type param_prefix_declarator  */
#line 456 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2427 "ffi.tab.c"
    break;

  case 59: /* plain_type: T_TYPE  */
#line 460 "src/ffi.y"
           { (yyval.vword_val) = keyword_to_vword((yyvsp[0].keyword_val)); }
#line 2433 "ffi.tab.c"
    break;

  case 60: /* plain_type: T_TYPENAME  */
#line 462 "src/ffi.y"
           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2439 "ffi.tab.c"
    break;

  case 61: /* plain_type: T_STRUCT identifier  */
#line 464 "src/ffi.y"
           { (yyval.vword_val) = LIST("struct", (yyvsp[0].vword_val)); }
#line 2445 "ffi.tab.c"
    break;

  case 62: /* plain_type: T_ENUM identifier  */
#line 466 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[0].vword_val), VFALSE); }
#line 2451 "ffi.tab.c"
    break;

  case 63: /* plain_type: T_ENUM '{' enum_list '}'  */
#line 468 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-1].vword_val))); }
#line 2457 "ffi.tab.c"
    break;

  case 64: /* plain_type: T_ENUM identifier '{' enum_list '}'  */
#line 470 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-3].vword_val), detangle_enums((yyvsp[-1].vword_val))); }
#line 2463 "ffi.tab.c"
    break;

  case 65: /* plain_type: T_ENUM '{' enum_list ',' '}'  */
#line 472 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-2].vword_val))); }
#line 2469 "ffi.tab.c"
    break;

  case 66: /* plain_type: T_ENUM identifier '{' enum_list ',' '}'  */
#line 474 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-4].vword_val), detangle_enums((yyvsp[-2].vword_val))); }
#line 2475 "ffi.tab.c"
    break;

  case 67: /* post_qualified_type: plain_type  */
#line 478 "src/ffi.y"
               { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 2481 "ffi.tab.c"
    break;

  case 68: /* post_qualified_type: post_qualified_type T_QUALIFIER  */
#line 480 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2487 "ffi.tab.c"
    break;

  case 69: /* post_qualified_type: post_qualified_type T_TYPE  */
#line 482 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2493 "ffi.tab.c"
    break;

  case 70: /* qualified_type: post_qualified_type  */
#line 486 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2499 "ffi.tab.c"
    break;

  case 71: /* qualified_type: T_QUALIFIER qualified_type  */
#line 488 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2505 "ffi.tab.c"
    break;

  case 72: /* specified_type: post_specified_type  */
#line 492 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2511 "ffi.tab.c"
    break;

  case 73: /* specified_type: T_QUALIFIER specified_type  */
#line 494 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2517 "ffi.tab.c"
    break;

  case 74: /* specified_type: T_STORAGE specified_type  */
#line 496 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2523 "ffi.tab.c"
    break;

  case 75: /* post_specified_type: plain_type  */
#line 500 "src/ffi.y"
                    { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 2529 "ffi.tab.c"
    break;

  case 76: /* post_specified_type: post_specified_type T_QUALIFIER  */
#line 502 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2535 "ffi.tab.c"
    break;

  case 77: /* post_specified_type: post_specified_type T_TYPE  */
#line 504 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2541 "ffi.tab.c"
    break;

  case 78: /* post_specified_type: post_specified_type T_STORAGE  */
#line 506 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2547 "ffi.tab.c"
    break;

  case 79: /* enum_list: T_VARIABLE  */
#line 510 "src/ffi.y"
          { enum_counter = 0; register_enum((yyvsp[0].vword_val), enum_counter);
            (yyval.vword_val) = LIST(VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 2554 "ffi.tab.c"
    break;

  case 80: /* enum_list: T_VARIABLE '=' cexpr  */
#line 513 "src/ffi.y"
          { enum_counter = (yyvsp[0].int_val); register_enum((yyvsp[-2].vword_val), enum_counter);
            (yyval.vword_val) = LIST(VNULL, (yyvsp[-2].vword_val), encode_cexpr((yyvsp[0].int_val))); }
#line 2561 "ffi.tab.c"
    break;

  case 81: /* enum_list: enum_list ',' T_VARIABLE  */
#line 516 "src/ffi.y"
          { enum_counter += 1; register_enum((yyvsp[0].vword_val), enum_counter);
            (yyval.vword_val) = LIST((yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 2568 "ffi.tab.c"
    break;

  case 82: /* enum_list: enum_list ',' T_VARIABLE '=' cexpr  */
#line 519 "src/ffi.y"
          { enum_counter = (yyvsp[0].int_val); register_enum((yyvsp[-2].vword_val), enum_counter);
            (yyval.vword_val) = LIST((yyvsp[-4].vword_val), (yyvsp[-2].vword_val), encode_cexpr((yyvsp[0].int_val))); }
#line 2575 "ffi.tab.c"
    break;

  case 83: /* expr: cexpr  */
#line 529 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[0].int_val); }
#line 2581 "ffi.tab.c"
    break;

  case 84: /* expr: expr ',' cexpr  */
#line 531 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[0].int_val); }
#line 2587 "ffi.tab.c"
    break;

  case 85: /* cexpr: T_INTEGER  */
#line 535 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[0].int_val); }
#line 2593 "ffi.tab.c"
    break;

  case 86: /* cexpr: T_VARIABLE  */
#line 537 "src/ffi.y"
     { (yyval.int_val) = lookup_enum((yyvsp[0].vword_val)); }
#line 2599 "ffi.tab.c"
    break;

  case 87: /* cexpr: '(' expr ')'  */
#line 539 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-1].int_val); }
#line 2605 "ffi.tab.c"
    break;

  case 88: /* cexpr: '-' cexpr  */
#line 541 "src/ffi.y"
     { (yyval.int_val) = -(yyvsp[0].int_val); }
#line 2611 "ffi.tab.c"
    break;

  case 89: /* cexpr: '+' cexpr  */
#line 543 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[0].int_val); }
#line 2617 "ffi.tab.c"
    break;

  case 90: /* cexpr: '!' cexpr  */
#line 545 "src/ffi.y"
     { (yyval.int_val) = !(yyvsp[0].int_val); }
#line 2623 "ffi.tab.c"
    break;

  case 91: /* cexpr: '~' cexpr  */
#line 547 "src/ffi.y"
     { (yyval.int_val) = ~(yyvsp[0].int_val); }
#line 2629 "ffi.tab.c"
    break;

  case 92: /* cexpr: cexpr '*' cexpr  */
#line 550 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) * (yyvsp[0].int_val); }
#line 2635 "ffi.tab.c"
    break;

  case 93: /* cexpr: cexpr '/' cexpr  */
#line 552 "src/ffi.y"
     { if((yyvsp[0].int_val) == 0) VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, division by zero in constant expression");
       (yyval.int_val) = (yyvsp[-2].int_val) / (yyvsp[0].int_val); }
#line 2642 "ffi.tab.c"
    break;

  case 94: /* cexpr: cexpr '%' cexpr  */
#line 555 "src/ffi.y"
     { if((yyvsp[0].int_val) == 0) VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, division by zero in constant expression");
       (yyval.int_val) = (yyvsp[-2].int_val) % (yyvsp[0].int_val); }
#line 2649 "ffi.tab.c"
    break;

  case 95: /* cexpr: cexpr '+' cexpr  */
#line 559 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) + (yyvsp[0].int_val); }
#line 2655 "ffi.tab.c"
    break;

  case 96: /* cexpr: cexpr '-' cexpr  */
#line 561 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) - (yyvsp[0].int_val); }
#line 2661 "ffi.tab.c"
    break;

  case 97: /* cexpr: cexpr T_SHL cexpr  */
#line 564 "src/ffi.y"
     { if((yyvsp[0].int_val) < 0 || (yyvsp[0].int_val) > 62) VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, bad shift amount in constant expression %lld", (yyvsp[0].int_val));
       (yyval.int_val) = (yyvsp[-2].int_val) << (yyvsp[0].int_val); }
#line 2668 "ffi.tab.c"
    break;

  case 98: /* cexpr: cexpr T_SHR cexpr  */
#line 567 "src/ffi.y"
     { if((yyvsp[0].int_val) < 0 || (yyvsp[0].int_val) > 62) VErrorC(global_runtime, "foreign-parse-header-c: failed to parse, bad shift amount in constant expression %lld", (yyvsp[0].int_val));
       (yyval.int_val) = (yyvsp[-2].int_val) >> (yyvsp[0].int_val); }
#line 2675 "ffi.tab.c"
    break;

  case 99: /* cexpr: cexpr '>' cexpr  */
#line 571 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) > (yyvsp[0].int_val); }
#line 2681 "ffi.tab.c"
    break;

  case 100: /* cexpr: cexpr '<' cexpr  */
#line 573 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) < (yyvsp[0].int_val); }
#line 2687 "ffi.tab.c"
    break;

  case 101: /* cexpr: cexpr T_GEQ cexpr  */
#line 575 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) >= (yyvsp[0].int_val); }
#line 2693 "ffi.tab.c"
    break;

  case 102: /* cexpr: cexpr T_LEQ cexpr  */
#line 577 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) <= (yyvsp[0].int_val); }
#line 2699 "ffi.tab.c"
    break;

  case 103: /* cexpr: cexpr T_EQ cexpr  */
#line 580 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) == (yyvsp[0].int_val); }
#line 2705 "ffi.tab.c"
    break;

  case 104: /* cexpr: cexpr T_NEQ cexpr  */
#line 582 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) != (yyvsp[0].int_val); }
#line 2711 "ffi.tab.c"
    break;

  case 105: /* cexpr: cexpr '&' cexpr  */
#line 585 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) & (yyvsp[0].int_val); }
#line 2717 "ffi.tab.c"
    break;

  case 106: /* cexpr: cexpr '^' cexpr  */
#line 588 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) ^ (yyvsp[0].int_val); }
#line 2723 "ffi.tab.c"
    break;

  case 107: /* cexpr: cexpr '|' cexpr  */
#line 591 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) | (yyvsp[0].int_val); }
#line 2729 "ffi.tab.c"
    break;

  case 108: /* cexpr: cexpr T_ANDAND cexpr  */
#line 594 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) && (yyvsp[0].int_val); }
#line 2735 "ffi.tab.c"
    break;

  case 109: /* cexpr: cexpr T_OROR cexpr  */
#line 597 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-2].int_val) || (yyvsp[0].int_val); }
#line 2741 "ffi.tab.c"
    break;

  case 110: /* cexpr: cexpr '?' cexpr ':' cexpr  */
#line 600 "src/ffi.y"
     { (yyval.int_val) = (yyvsp[-4].int_val) ? (yyvsp[-2].int_val) : (yyvsp[0].int_val); }
#line 2747 "ffi.tab.c"
    break;


#line 2751 "ffi.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 603 "src/ffi.y"


bool parse_error = false;
VWORD parse_ret;
VRuntime * global_runtime;

struct yy_buffer_state * yy_scan_string(char * str);
struct yy_buffer_state * yy_create_buffer(FILE * f, int size);
void yy_delete_buffer(struct yy_buffer_state * buf);
void yy_switch_to_buffer(struct yy_buffer_state * buf);

void VForeignParseDeclCImpl(V_CORE_ARGS, VWORD k, VWORD decl) {
  global_runtime = runtime;
  V_ARG_CHECK3(runtime, "foreign-parse-decl-c", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VForeignParseDeclCImpl, runtime, statics, 2, argc, k, decl) {
    VBlob * buf = VCheckedDecodeString2(runtime, decl, "foreign-parse-decl-c");

    struct yy_buffer_state * yaccbuf = yy_scan_string(buf->buf);
    parse_error = false;
    int err = yyparse();
    yy_delete_buffer(yaccbuf);

    if(err || parse_error) VErrorC(runtime, "foreign-parse-decl-c: error during parsing\n");
  }

  VDonateMemoryPool(runtime, &parse_pool);
  // erasing the typedef table doesn't feel great
  typedef_table = (VWORD){ LITERAL_HEADER | VIMM_TOK | VTOK_NULL };
  enum_table = (VWORD){ LITERAL_HEADER | VIMM_TOK | VTOK_NULL };

  VGarbageCollect2Closure(runtime, VDecodeClosureApply2(runtime, k), 1, parse_ret);

  VErrorC(runtime, "foreign-parse-decl-c: unsupported platform");
}
void VForeignParseHeaderCImpl(V_CORE_ARGS, VWORD k, VWORD header) {
  global_runtime = runtime;
  V_ARG_CHECK3(runtime, "foreign-parse-header-c", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VForeignParseHeaderCImpl, runtime, statics, 2, argc, k, header) {
    VPort * port = VCheckedDecodePort2(runtime, header, "foreign-parse-header-c");
    FILE * f = port->stream;
    if(!f || !(port->flags & PFLAG_READ)) VErrorC(runtime, "foreign-parse-header-c: failed to parse, port is not an opened input port!\n");
    //yy_set_buffer(f);
    struct yy_buffer_state * buf = yy_create_buffer(f, 32768);
    yy_switch_to_buffer(buf);
    parse_error = false;
    int notok = yyparse();
    if(notok) VErrorC(runtime, "foreign-parse-header-c: error during parsing\n");
    yy_delete_buffer(buf);


    if(parse_error || !VDecodeBool(parse_ret)) VErrorC(runtime, "foreign-parse-decl-c: error during parsing (returned false)\n");
  }

  VDonateMemoryPool(runtime, &parse_pool);
  // erasing the typedef table doesn't feel great
  typedef_table = (VWORD){ LITERAL_HEADER | VIMM_TOK | VTOK_NULL };
  enum_table = (VWORD){ LITERAL_HEADER | VIMM_TOK | VTOK_NULL };

  VGarbageCollect2Closure(runtime, VDecodeClosureApply2(runtime, k), 1, parse_ret);
}

void (*VForeignParseDeclC)(V_CORE_ARGS, VWORD k, VWORD decl) = VForeignParseDeclCImpl;
void (*VForeignParseHeaderC)(V_CORE_ARGS, VWORD k, VWORD header) = VForeignParseHeaderCImpl;
