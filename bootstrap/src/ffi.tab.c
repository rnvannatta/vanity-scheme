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

extern void yy_set_buffer(FILE * in);


#line 293 "ffi.tab.c"

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
  YYSYMBOL_13_ = 13,                       /* ';'  */
  YYSYMBOL_14_ = 14,                       /* ','  */
  YYSYMBOL_15_ = 15,                       /* '*'  */
  YYSYMBOL_16_ = 16,                       /* '('  */
  YYSYMBOL_17_ = 17,                       /* ')'  */
  YYSYMBOL_18_ = 18,                       /* '['  */
  YYSYMBOL_19_ = 19,                       /* ']'  */
  YYSYMBOL_20_ = 20,                       /* '{'  */
  YYSYMBOL_21_ = 21,                       /* '}'  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_YYACCEPT = 23,                  /* $accept  */
  YYSYMBOL_start = 24,                     /* start  */
  YYSYMBOL_identifier = 25,                /* identifier  */
  YYSYMBOL_toplevel = 26,                  /* toplevel  */
  YYSYMBOL_declaration = 27,               /* declaration  */
  YYSYMBOL_declarator_list = 28,           /* declarator_list  */
  YYSYMBOL_prefix_declarator = 29,         /* prefix_declarator  */
  YYSYMBOL_postfix_declarator = 30,        /* postfix_declarator  */
  YYSYMBOL_abstract_postfix_declarator = 31, /* abstract_postfix_declarator  */
  YYSYMBOL_abstract_prefix_declarator = 32, /* abstract_prefix_declarator  */
  YYSYMBOL_param_prefix_declarator = 33,   /* param_prefix_declarator  */
  YYSYMBOL_param_postfix_declarator = 34,  /* param_postfix_declarator  */
  YYSYMBOL_parameter_list = 35,            /* parameter_list  */
  YYSYMBOL_plain_type = 36,                /* plain_type  */
  YYSYMBOL_post_qualified_type = 37,       /* post_qualified_type  */
  YYSYMBOL_qualified_type = 38,            /* qualified_type  */
  YYSYMBOL_specified_type = 39,            /* specified_type  */
  YYSYMBOL_post_specified_type = 40,       /* post_specified_type  */
  YYSYMBOL_enum_list = 41,                 /* enum_list  */
  YYSYMBOL_expr = 42                       /* expr  */
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
typedef yytype_int8 yy_state_t;

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

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#define YYLAST   154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  110

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   267


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      16,    17,    15,     2,    14,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    13,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    18,     2,    19,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   278,   278,   280,   282,   285,   285,   287,   289,   291,
     294,   296,   300,   303,   309,   311,   313,   317,   319,   321,
     323,   325,   329,   331,   333,   335,   337,   339,   341,   345,
     347,   349,   351,   353,   357,   359,   361,   365,   367,   369,
     371,   373,   376,   378,   380,   382,   384,   386,   390,   392,
     394,   396,   398,   400,   402,   404,   408,   410,   412,   416,
     418,   422,   424,   426,   430,   432,   434,   436,   440,   442,
     444,   446,   450
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  static const char *const yy_sname[] =
  {
  "end of file", "error", "invalid token", "T_STRUCT", "T_ENUM",
  "T_ERROR", "T_TYPE", "T_QUALIFIER", "T_FUNCTION_QUALIFIER", "T_STORAGE",
  "T_INTEGER", "T_TYPENAME", "T_VARIABLE", "';'", "','", "'*'", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "'='", "$accept", "start",
  "identifier", "toplevel", "declaration", "declarator_list",
  "prefix_declarator", "postfix_declarator", "abstract_postfix_declarator",
  "abstract_prefix_declarator", "param_prefix_declarator",
  "param_postfix_declarator", "parameter_list", "plain_type",
  "post_qualified_type", "qualified_type", "specified_type",
  "post_specified_type", "enum_list", "expr", YY_NULLPTR
  };
  return yy_sname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-4)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,   -74,    71,    78,   -74,    90,    90,   -74,     4,    52,
     -74,   131,   -74,   109,   127,   -74,   -74,   -74,    -3,    19,
     -74,   -74,   -74,   -74,   -74,   109,   -74,   115,   -74,    69,
     115,   -74,    48,   119,   -74,   -74,   -74,    42,    93,    -3,
     -74,   -74,   115,   -74,    83,    25,    85,   108,   -10,   -74,
      94,   -74,   -74,    99,   -74,    -7,   -74,   140,   101,   -74,
     -74,   -74,    89,   -74,     2,   -74,   -74,    99,   -74,   -74,
     -74,   -74,    50,     9,   104,   122,   -74,   -74,   125,   108,
     -74,   101,   101,   -74,   -74,   -74,   133,   134,    16,   -74,
      34,   120,    43,   135,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,    57,   -74,   -74,    95,   -74,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,    48,     0,     0,    49,     0,     0,
       7,     0,    64,     0,    61,     6,     5,    50,     0,    51,
      62,    63,     1,     9,     8,     0,    10,     0,    11,     0,
       0,    17,    12,    14,    66,    65,    67,    68,     0,     0,
      12,    13,     0,    15,     0,     0,     0,     0,     0,    52,
       0,    16,    21,     0,    18,     0,    56,    59,    42,    19,
      72,    69,    70,    54,     0,    53,    60,     0,    20,    58,
      57,    37,    30,     0,     0,    29,    43,    44,    34,     0,
      55,    45,    31,    32,    35,    25,     0,     0,     0,    26,
       0,     0,     0,     0,    71,    46,    47,    33,    36,    28,
      41,    27,    22,     0,    23,    38,     0,    39,    24,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   146,   -74,   143,   -74,   -24,   -74,   -74,   -38,
       6,   -74,   -73,    86,   -74,   -45,   123,   -74,   103,    74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,    31,     9,    10,    11,    32,    33,    75,    76,
      77,    78,    55,    56,    57,    58,    13,    14,    38,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      88,    40,    62,    41,    22,    43,    44,    67,    66,    37,
      68,    63,     2,     3,    62,     4,    53,   103,    51,   106,
       7,    71,    81,    80,    72,    73,    85,    74,     2,     3,
      67,     4,    53,   101,    83,    86,     7,     2,     3,    39,
       4,    53,    54,    95,    97,     7,     2,     3,    -3,     4,
      53,   102,    -2,    23,     7,     2,     3,    82,     4,     5,
     105,     6,    71,     7,    47,    72,    73,     1,    74,     2,
       3,    67,     4,     5,   108,     6,    42,     7,    84,    87,
      15,    16,    15,    16,    29,    30,    12,    96,    98,    15,
      16,    12,    12,     2,     3,    12,     4,     5,    18,     6,
      52,     7,     2,     3,    59,     4,    53,    48,    64,    67,
       7,    79,   109,    71,    49,    65,    72,    73,    60,    74,
      15,    16,    28,    89,    29,    30,    15,    16,    20,    21,
      29,    30,    25,    34,    35,    45,    36,    46,    90,   104,
      91,    92,    50,    93,    26,    27,    69,    70,    17,    19,
      99,   100,    24,    94,   107
};

static const yytype_int8 yycheck[] =
{
      73,    25,    12,    27,     0,    29,    30,    14,    53,    12,
      17,    21,     3,     4,    12,     6,     7,    90,    42,    92,
      11,    12,    67,    21,    15,    16,    17,    18,     3,     4,
      14,     6,     7,    17,    72,    73,    11,     3,     4,    20,
       6,     7,    17,    81,    82,    11,     3,     4,     0,     6,
       7,    17,     0,     1,    11,     3,     4,     7,     6,     7,
      17,     9,    12,    11,    22,    15,    16,     1,    18,     3,
       4,    14,     6,     7,    17,     9,     7,    11,    72,    73,
      11,    12,    11,    12,    15,    16,     0,    81,    82,    11,
      12,     5,     6,     3,     4,     9,     6,     7,    20,     9,
      17,    11,     3,     4,    19,     6,     7,    14,    14,    14,
      11,    22,    17,    12,    21,    21,    15,    16,    10,    18,
      11,    12,    13,    19,    15,    16,    11,    12,     5,     6,
      15,    16,     9,     6,     7,    16,     9,    18,    16,    19,
      18,    16,    39,    18,    13,    14,     6,     7,     2,     3,
      17,    17,     9,    79,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,     4,     6,     7,     9,    11,    24,    26,
      27,    28,    36,    39,    40,    11,    12,    25,    20,    25,
      39,    39,     0,     1,    27,    39,    13,    14,    13,    15,
      16,    25,    29,    30,     6,     7,     9,    12,    41,    20,
      29,    29,     7,    29,    29,    16,    18,    22,    14,    21,
      41,    29,    17,     7,    17,    35,    36,    37,    38,    19,
      10,    42,    12,    21,    14,    21,    38,    14,    17,     6,
       7,    12,    15,    16,    18,    31,    32,    33,    34,    22,
      21,    38,     7,    32,    33,    17,    32,    33,    35,    19,
      16,    18,    16,    18,    42,    32,    33,    32,    33,    17,
      17,    17,    17,    35,    19,    17,    35,    19,    17,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    24,    24,    25,    25,    26,    26,    26,
      27,    27,    28,    28,    29,    29,    29,    30,    30,    30,
      30,    30,    31,    31,    31,    31,    31,    31,    31,    32,
      32,    32,    32,    32,    33,    33,    33,    34,    34,    34,
      34,    34,    35,    35,    35,    35,    35,    35,    36,    36,
      36,    36,    36,    36,    36,    36,    37,    37,    37,    38,
      38,    39,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    42
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     1,     2,     3,     1,     3,     3,
       4,     3,     3,     3,     4,     2,     2,     3,     3,     1,
       1,     2,     2,     3,     1,     2,     3,     1,     3,     3,
       4,     3,     1,     2,     2,     3,     4,     4,     1,     1,
       2,     2,     4,     5,     5,     6,     1,     2,     2,     1,
       2,     1,     2,     2,     1,     2,     2,     2,     1,     3,
       3,     5,     1
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
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
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
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
          = yysize + yystrlen (yysymbol_name (yyarg[yyi]));
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
          yyp = yystpcpy (yyp, yysymbol_name (yyarg[yyi++]));
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
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
  switch (yyn)
    {
  case 2: /* start: toplevel  */
#line 279 "src/ffi.y"
      { parse_ret = CONS("toplevel", reverse((yyvsp[0].vword_val))); }
#line 1618 "ffi.tab.c"
    break;

  case 3: /* start: specified_type prefix_declarator  */
#line 281 "src/ffi.y"
      { parse_ret = LIST("naked_declaration", (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1624 "ffi.tab.c"
    break;

  case 4: /* start: error  */
#line 282 "src/ffi.y"
              { yyerrok; yyclearin; parse_error = true; YYACCEPT; }
#line 1630 "ffi.tab.c"
    break;

  case 7: /* toplevel: declaration  */
#line 288 "src/ffi.y"
         { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1636 "ffi.tab.c"
    break;

  case 8: /* toplevel: toplevel declaration  */
#line 290 "src/ffi.y"
         { (yyval.vword_val) = CONS((yyvsp[0].vword_val), (yyvsp[-1].vword_val)); }
#line 1642 "ffi.tab.c"
    break;

  case 9: /* toplevel: toplevel error  */
#line 291 "src/ffi.y"
                          { yyerrok; parse_error = true; }
#line 1648 "ffi.tab.c"
    break;

  case 10: /* declaration: declarator_list ';'  */
#line 295 "src/ffi.y"
            { VWORD v = (yyvsp[-1].vword_val); (yyval.vword_val) = CONS("declaration", CONS(CAR(v), reverse(CDR(v)))); }
#line 1654 "ffi.tab.c"
    break;

  case 11: /* declaration: specified_type ';'  */
#line 297 "src/ffi.y"
            { (yyval.vword_val) = LIST("declaration", (yyvsp[-1].vword_val)); }
#line 1660 "ffi.tab.c"
    break;

  case 12: /* declarator_list: specified_type prefix_declarator  */
#line 301 "src/ffi.y"
                { register_typedef((yyvsp[-1].vword_val), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS((yyvsp[-1].vword_val), LIST((yyvsp[0].vword_val))); }
#line 1667 "ffi.tab.c"
    break;

  case 13: /* declarator_list: declarator_list ',' prefix_declarator  */
#line 304 "src/ffi.y"
                { VWORD v = (yyvsp[-2].vword_val);
                  register_typedef(CAR(v), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS(CAR(v), CONS((yyvsp[0].vword_val), CDR(v))); }
#line 1675 "ffi.tab.c"
    break;

  case 14: /* prefix_declarator: postfix_declarator  */
#line 310 "src/ffi.y"
                  { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1681 "ffi.tab.c"
    break;

  case 15: /* prefix_declarator: '*' prefix_declarator  */
#line 312 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1687 "ffi.tab.c"
    break;

  case 16: /* prefix_declarator: '*' T_QUALIFIER prefix_declarator  */
#line 314 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1693 "ffi.tab.c"
    break;

  case 17: /* postfix_declarator: identifier  */
#line 318 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1699 "ffi.tab.c"
    break;

  case 18: /* postfix_declarator: postfix_declarator '(' ')'  */
#line 320 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 1705 "ffi.tab.c"
    break;

  case 19: /* postfix_declarator: postfix_declarator '[' ']'  */
#line 322 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val)); }
#line 1711 "ffi.tab.c"
    break;

  case 20: /* postfix_declarator: postfix_declarator '(' parameter_list ')'  */
#line 324 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 1717 "ffi.tab.c"
    break;

  case 21: /* postfix_declarator: '(' prefix_declarator ')'  */
#line 326 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 1723 "ffi.tab.c"
    break;

  case 22: /* abstract_postfix_declarator: abstract_postfix_declarator '(' ')'  */
#line 330 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 1729 "ffi.tab.c"
    break;

  case 23: /* abstract_postfix_declarator: abstract_postfix_declarator '[' ']'  */
#line 332 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val)); }
#line 1735 "ffi.tab.c"
    break;

  case 24: /* abstract_postfix_declarator: abstract_postfix_declarator '(' parameter_list ')'  */
#line 334 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 1741 "ffi.tab.c"
    break;

  case 25: /* abstract_postfix_declarator: '(' ')'  */
#line 336 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE); }
#line 1747 "ffi.tab.c"
    break;

  case 26: /* abstract_postfix_declarator: '[' ']'  */
#line 338 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE); }
#line 1753 "ffi.tab.c"
    break;

  case 27: /* abstract_postfix_declarator: '(' parameter_list ')'  */
#line 340 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE, detangle_params((yyvsp[-1].vword_val))); }
#line 1759 "ffi.tab.c"
    break;

  case 28: /* abstract_postfix_declarator: '(' abstract_prefix_declarator ')'  */
#line 342 "src/ffi.y"
                            { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 1765 "ffi.tab.c"
    break;

  case 29: /* abstract_prefix_declarator: abstract_postfix_declarator  */
#line 346 "src/ffi.y"
                           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1771 "ffi.tab.c"
    break;

  case 30: /* abstract_prefix_declarator: '*'  */
#line 348 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", VFALSE); }
#line 1777 "ffi.tab.c"
    break;

  case 31: /* abstract_prefix_declarator: '*' T_QUALIFIER  */
#line 350 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[0].keyword_val)), VFALSE)); }
#line 1783 "ffi.tab.c"
    break;

  case 32: /* abstract_prefix_declarator: '*' abstract_prefix_declarator  */
#line 352 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1789 "ffi.tab.c"
    break;

  case 33: /* abstract_prefix_declarator: '*' T_QUALIFIER abstract_prefix_declarator  */
#line 354 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1795 "ffi.tab.c"
    break;

  case 34: /* param_prefix_declarator: param_postfix_declarator  */
#line 358 "src/ffi.y"
                        { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1801 "ffi.tab.c"
    break;

  case 35: /* param_prefix_declarator: '*' param_prefix_declarator  */
#line 360 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1807 "ffi.tab.c"
    break;

  case 36: /* param_prefix_declarator: '*' T_QUALIFIER param_prefix_declarator  */
#line 362 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1813 "ffi.tab.c"
    break;

  case 37: /* param_postfix_declarator: T_VARIABLE  */
#line 366 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1819 "ffi.tab.c"
    break;

  case 38: /* param_postfix_declarator: param_postfix_declarator '(' ')'  */
#line 368 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 1825 "ffi.tab.c"
    break;

  case 39: /* param_postfix_declarator: param_postfix_declarator '[' ']'  */
#line 370 "src/ffi.y"
                         { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val)); }
#line 1831 "ffi.tab.c"
    break;

  case 40: /* param_postfix_declarator: param_postfix_declarator '(' parameter_list ')'  */
#line 372 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 1837 "ffi.tab.c"
    break;

  case 41: /* param_postfix_declarator: '(' param_prefix_declarator ')'  */
#line 374 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 1843 "ffi.tab.c"
    break;

  case 42: /* parameter_list: qualified_type  */
#line 377 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 1849 "ffi.tab.c"
    break;

  case 43: /* parameter_list: qualified_type abstract_prefix_declarator  */
#line 379 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1855 "ffi.tab.c"
    break;

  case 44: /* parameter_list: qualified_type param_prefix_declarator  */
#line 381 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1861 "ffi.tab.c"
    break;

  case 45: /* parameter_list: parameter_list ',' qualified_type  */
#line 383 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 1867 "ffi.tab.c"
    break;

  case 46: /* parameter_list: parameter_list ',' qualified_type abstract_prefix_declarator  */
#line 385 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1873 "ffi.tab.c"
    break;

  case 47: /* parameter_list: parameter_list ',' qualified_type param_prefix_declarator  */
#line 387 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1879 "ffi.tab.c"
    break;

  case 48: /* plain_type: T_TYPE  */
#line 391 "src/ffi.y"
           { (yyval.vword_val) = keyword_to_vword((yyvsp[0].keyword_val)); }
#line 1885 "ffi.tab.c"
    break;

  case 49: /* plain_type: T_TYPENAME  */
#line 393 "src/ffi.y"
           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1891 "ffi.tab.c"
    break;

  case 50: /* plain_type: T_STRUCT identifier  */
#line 395 "src/ffi.y"
           { (yyval.vword_val) = LIST("struct", (yyvsp[0].vword_val)); }
#line 1897 "ffi.tab.c"
    break;

  case 51: /* plain_type: T_ENUM identifier  */
#line 397 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[0].vword_val), VFALSE); }
#line 1903 "ffi.tab.c"
    break;

  case 52: /* plain_type: T_ENUM '{' enum_list '}'  */
#line 399 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-1].vword_val))); }
#line 1909 "ffi.tab.c"
    break;

  case 53: /* plain_type: T_ENUM identifier '{' enum_list '}'  */
#line 401 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-3].vword_val), detangle_enums((yyvsp[-1].vword_val))); }
#line 1915 "ffi.tab.c"
    break;

  case 54: /* plain_type: T_ENUM '{' enum_list ',' '}'  */
#line 403 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-2].vword_val))); }
#line 1921 "ffi.tab.c"
    break;

  case 55: /* plain_type: T_ENUM identifier '{' enum_list ',' '}'  */
#line 405 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-4].vword_val), detangle_enums((yyvsp[-2].vword_val))); }
#line 1927 "ffi.tab.c"
    break;

  case 56: /* post_qualified_type: plain_type  */
#line 409 "src/ffi.y"
               { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1933 "ffi.tab.c"
    break;

  case 57: /* post_qualified_type: post_qualified_type T_QUALIFIER  */
#line 411 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1939 "ffi.tab.c"
    break;

  case 58: /* post_qualified_type: post_qualified_type T_TYPE  */
#line 413 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1945 "ffi.tab.c"
    break;

  case 59: /* qualified_type: post_qualified_type  */
#line 417 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1951 "ffi.tab.c"
    break;

  case 60: /* qualified_type: T_QUALIFIER qualified_type  */
#line 419 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 1957 "ffi.tab.c"
    break;

  case 61: /* specified_type: post_specified_type  */
#line 423 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1963 "ffi.tab.c"
    break;

  case 62: /* specified_type: T_QUALIFIER specified_type  */
#line 425 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 1969 "ffi.tab.c"
    break;

  case 63: /* specified_type: T_STORAGE specified_type  */
#line 427 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 1975 "ffi.tab.c"
    break;

  case 64: /* post_specified_type: plain_type  */
#line 431 "src/ffi.y"
                    { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1981 "ffi.tab.c"
    break;

  case 65: /* post_specified_type: post_specified_type T_QUALIFIER  */
#line 433 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1987 "ffi.tab.c"
    break;

  case 66: /* post_specified_type: post_specified_type T_TYPE  */
#line 435 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1993 "ffi.tab.c"
    break;

  case 67: /* post_specified_type: post_specified_type T_STORAGE  */
#line 437 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1999 "ffi.tab.c"
    break;

  case 68: /* enum_list: T_VARIABLE  */
#line 441 "src/ffi.y"
          { (yyval.vword_val) = LIST(VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 2005 "ffi.tab.c"
    break;

  case 69: /* enum_list: T_VARIABLE '=' expr  */
#line 443 "src/ffi.y"
          { (yyval.vword_val) = LIST(VNULL, (yyvsp[-2].vword_val), (yyvsp[0].vword_val)); }
#line 2011 "ffi.tab.c"
    break;

  case 70: /* enum_list: enum_list ',' T_VARIABLE  */
#line 445 "src/ffi.y"
          { (yyval.vword_val) = LIST((yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 2017 "ffi.tab.c"
    break;

  case 71: /* enum_list: enum_list ',' T_VARIABLE '=' expr  */
#line 447 "src/ffi.y"
          { (yyval.vword_val) = LIST((yyvsp[-4].vword_val), (yyvsp[-2].vword_val), (yyvsp[0].vword_val)); }
#line 2023 "ffi.tab.c"
    break;

  case 72: /* expr: T_INTEGER  */
#line 451 "src/ffi.y"
     { if((yyvsp[0].int_val) > INT_MAX) VErrorC(global_runtime, "foreign-prase-header-c: failed to parse, integer exceeds 31 bit limit %llu", (yyvsp[0].int_val)); (yyval.vword_val) = VEncodeInt((yyvsp[0].int_val)); }
#line 2029 "ffi.tab.c"
    break;


#line 2033 "ffi.tab.c"

      default: break;
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
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 493 "src/ffi.y"


bool parse_error = false;
VWORD parse_ret;
VRuntime * global_runtime;

struct yy_buffer_state * yy_scan_string(char * str);
void yy_delete_buffer(struct yy_buffer_state * buf);

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
  V_CALL(k, runtime, parse_ret);
  VErrorC(runtime, "foreign-parse-decl-c: unsupported platform");
}
void VForeignParseHeaderCImpl(V_CORE_ARGS, VWORD k, VWORD header) {
  global_runtime = runtime;
  V_ARG_CHECK3(runtime, "foreign-parse-header-c", 2, argc);
  V_GC_CHECK2_VARARGS((VFunc)VForeignParseHeaderCImpl, runtime, statics, 2, argc, k, header) {
    VPort * port = VCheckedDecodePort2(runtime, header, "foreign-parse-header-c");
    FILE * f = port->stream;
    if(!f || !(port->flags & PFLAG_READ)) VErrorC(runtime, "foreign-parse-header-c: failed to parse, port is not an opened input port!\n");
    yy_set_buffer(f);
    parse_error = false;
    if(yyparse()) VErrorC(runtime, "foreign-parse-header-c: error during parsing\n");

    if(parse_error || !VDecodeBool(parse_ret)) VErrorC(runtime, "foreign-parse-decl-c: error during parsing (returned false)\n");
  }
  V_CALL(k, runtime, parse_ret);
}
void VForeignReleaseParseImpl(V_CORE_ARGS, VWORD k) {
  global_runtime = runtime;
  V_ARG_CHECK3(runtime, "foreign-release-parse", 1, argc);
  VDestroyMemoryPool(&parse_pool);
  V_CALL(k, runtime, VFALSE);
}

void (*VForeignParseDeclC)(V_CORE_ARGS, VWORD k, VWORD decl) = VForeignParseDeclCImpl;
void (*VForeignParseHeaderC)(V_CORE_ARGS, VWORD k, VWORD header) = VForeignParseHeaderCImpl;
void (*VForeignReleaseParse)(V_CORE_ARGS, VWORD k) = VForeignReleaseParseImpl;
