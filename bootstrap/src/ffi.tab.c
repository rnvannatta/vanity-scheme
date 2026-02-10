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
extern char * yytext;

extern void yy_set_buffer(FILE * in);


#line 294 "ffi.tab.c"

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
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  127

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
       0,   280,   280,   282,   284,   287,   287,   289,   291,   293,
     296,   298,   302,   305,   311,   313,   315,   319,   321,   323,
     325,   327,   329,   333,   335,   337,   339,   341,   343,   345,
     347,   349,   351,   353,   357,   359,   361,   363,   365,   369,
     371,   373,   377,   379,   381,   383,   385,   387,   389,   392,
     394,   396,   398,   400,   402,   406,   408,   410,   412,   414,
     416,   418,   420,   424,   426,   428,   432,   434,   438,   440,
     442,   446,   448,   450,   452,   456,   458,   460,   462,   466
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
  "T_INTEGER", "T_TYPENAME", "T_VARIABLE", "';'", "','", "'*'", "'('",
  "')'", "'['", "']'", "'{'", "'}'", "'='", "$accept", "start",
  "identifier", "toplevel", "declaration", "declarator_list",
  "prefix_declarator", "postfix_declarator", "abstract_postfix_declarator",
  "abstract_prefix_declarator", "param_prefix_declarator",
  "param_postfix_declarator", "parameter_list", "plain_type",
  "post_qualified_type", "qualified_type", "specified_type",
  "post_specified_type", "enum_list", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
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
      98,   -74,   104,    15,   -74,   123,   123,   -74,    41,    75,
     -74,   154,   -74,   137,   155,   -74,   -74,   -74,    -7,    31,
     -74,   -74,   -74,   -74,   -74,   137,   -74,   143,   -74,   106,
     143,   -74,    46,    90,   -74,   -74,   -74,    35,    -4,    -7,
     -74,   -74,   143,   -74,    63,     5,    28,    79,    33,   -74,
      -1,   -74,   -74,   132,   -74,    45,   -74,   163,   129,   -74,
     -74,    77,   -74,   118,   -74,    37,   -74,   -74,   132,   -74,
     -74,   -74,   -74,    24,    49,    81,    96,   -74,   -74,   115,
     -74,    79,   -74,   129,   129,   -74,   -74,   -74,    68,   120,
      57,    79,   -74,   127,    26,    84,    66,   101,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   146,   -74,   -74,    78,
      79,   -74,   156,   -74,   149,    79,   -74,   157,   -74,   -74,
     158,   -74,   -74,   159,   -74,   -74,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     4,     0,     0,    55,     0,     0,    56,     0,     0,
       7,     0,    71,     0,    68,     6,     5,    57,     0,    58,
      69,    70,     1,     9,     8,     0,    10,     0,    11,     0,
       0,    17,    12,    14,    73,    72,    74,    75,     0,     0,
      12,    13,     0,    15,     0,     0,     0,     0,     0,    59,
       0,    16,    22,     0,    18,     0,    63,    66,    49,    79,
      19,     0,    76,    77,    61,     0,    60,    67,     0,    21,
      65,    64,    42,    35,     0,     0,    34,    50,    51,    39,
      20,     0,    62,    52,    36,    37,    40,    28,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,    78,    53,
      54,    38,    41,    33,    48,    32,     0,    30,    23,     0,
       0,    24,     0,    43,     0,     0,    44,     0,    31,    27,
       0,    25,    47,     0,    45,    26,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   169,   -74,   114,   -74,   -23,   -74,   -74,   -59,
      14,   -74,   -73,   119,   -74,   -50,   151,   -74,   103,   -47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     8,    31,     9,    10,    11,    32,    33,    76,    77,
      78,    79,    55,    56,    57,    58,    13,    14,    38,    61
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    90,    40,    67,    41,    37,    43,    44,     2,     3,
      48,     4,    53,    65,    85,    88,     7,    49,    83,    51,
      66,   109,    54,   114,    99,   101,    15,    16,    93,     2,
       3,    84,     4,    53,    98,    18,    72,     7,    59,    73,
      74,    22,    75,   108,   106,    63,    -3,    60,   112,    63,
     117,    39,     2,     3,    64,     4,    53,    47,    82,    68,
       7,    72,    69,   120,    73,    74,    87,    75,   123,     2,
       3,    68,     4,    53,   105,    -2,    23,     7,     2,     3,
      52,     4,     5,   113,     6,   103,     7,    86,    89,    59,
      91,    59,    68,   110,    59,   119,    80,   100,   102,     1,
      92,     2,     3,   111,     4,     5,    45,     6,    46,     7,
     115,    59,    94,    42,    95,    15,    16,    15,    16,    12,
     116,    29,    30,    24,    12,    12,     2,     3,    12,     4,
       5,    96,     6,    97,     7,     2,     3,   104,     4,    53,
      81,    72,    50,     7,    73,    74,   107,    75,    15,    16,
      28,     0,    29,    30,    15,    16,    20,    21,    29,    30,
      25,    34,    35,    68,    36,   118,   122,    26,    27,    70,
      71,    17,    19,     0,     0,   121,   124,   125,   126
};

static const yytype_int8 yycheck[] =
{
      47,    74,    25,    53,    27,    12,    29,    30,     3,     4,
      14,     6,     7,    14,    73,    74,    11,    21,    68,    42,
      21,    94,    17,    96,    83,    84,    11,    12,    75,     3,
       4,     7,     6,     7,    81,    20,    12,    11,    10,    15,
      16,     0,    18,    17,    91,    12,     0,    19,    95,    12,
      97,    20,     3,     4,    21,     6,     7,    22,    21,    14,
      11,    12,    17,   110,    15,    16,    17,    18,   115,     3,
       4,    14,     6,     7,    17,     0,     1,    11,     3,     4,
      17,     6,     7,    17,     9,    17,    11,    73,    74,    10,
       9,    10,    14,     9,    10,    17,    19,    83,    84,     1,
      19,     3,     4,    19,     6,     7,    16,     9,    18,    11,
       9,    10,    16,     7,    18,    11,    12,    11,    12,     0,
      19,    15,    16,     9,     5,     6,     3,     4,     9,     6,
       7,    16,     9,    18,    11,     3,     4,    17,     6,     7,
      22,    12,    39,    11,    15,    16,    19,    18,    11,    12,
      13,    -1,    15,    16,    11,    12,     5,     6,    15,    16,
       9,     6,     7,    14,     9,    19,    17,    13,    14,     6,
       7,     2,     3,    -1,    -1,    19,    19,    19,    19
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
      41,    29,    17,     7,    17,    35,    36,    37,    38,    10,
      19,    42,    42,    12,    21,    14,    21,    38,    14,    17,
       6,     7,    12,    15,    16,    18,    31,    32,    33,    34,
      19,    22,    21,    38,     7,    32,    33,    17,    32,    33,
      35,     9,    19,    42,    16,    18,    16,    18,    42,    32,
      33,    32,    33,    17,    17,    17,    42,    19,    17,    35,
       9,    19,    42,    17,    35,     9,    19,    42,    19,    17,
      42,    19,    17,    42,    19,    19,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    23,    24,    24,    24,    25,    25,    26,    26,    26,
      27,    27,    28,    28,    29,    29,    29,    30,    30,    30,
      30,    30,    30,    31,    31,    31,    31,    31,    31,    31,
      31,    31,    31,    31,    32,    32,    32,    32,    32,    33,
      33,    33,    34,    34,    34,    34,    34,    34,    34,    35,
      35,    35,    35,    35,    35,    36,    36,    36,    36,    36,
      36,    36,    36,    37,    37,    37,    38,    38,    39,    39,
      39,    40,    40,    40,    40,    41,    41,    41,    41,    42
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     1,     2,     3,     1,     3,     3,
       4,     4,     3,     3,     3,     4,     5,     4,     2,     2,
       3,     4,     3,     3,     1,     1,     2,     2,     3,     1,
       2,     3,     1,     3,     3,     4,     5,     4,     3,     1,
       2,     2,     3,     4,     4,     1,     1,     2,     2,     4,
       5,     5,     6,     1,     2,     2,     1,     2,     1,     2,
       2,     1,     2,     2,     2,     1,     3,     3,     5,     1
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
#line 281 "src/ffi.y"
      { parse_ret = CONS("toplevel", reverse((yyvsp[0].vword_val))); }
#line 1918 "ffi.tab.c"
    break;

  case 3: /* start: specified_type prefix_declarator  */
#line 283 "src/ffi.y"
      { parse_ret = LIST("naked_declaration", (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1924 "ffi.tab.c"
    break;

  case 4: /* start: error  */
#line 284 "src/ffi.y"
              { yyerrok; yyclearin; parse_error = true; YYACCEPT; }
#line 1930 "ffi.tab.c"
    break;

  case 7: /* toplevel: declaration  */
#line 290 "src/ffi.y"
         { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1936 "ffi.tab.c"
    break;

  case 8: /* toplevel: toplevel declaration  */
#line 292 "src/ffi.y"
         { (yyval.vword_val) = CONS((yyvsp[0].vword_val), (yyvsp[-1].vword_val)); }
#line 1942 "ffi.tab.c"
    break;

  case 9: /* toplevel: toplevel error  */
#line 293 "src/ffi.y"
                          { yyerrok; parse_error = true; }
#line 1948 "ffi.tab.c"
    break;

  case 10: /* declaration: declarator_list ';'  */
#line 297 "src/ffi.y"
            { VWORD v = (yyvsp[-1].vword_val); (yyval.vword_val) = CONS("declaration", CONS(CAR(v), reverse(CDR(v)))); }
#line 1954 "ffi.tab.c"
    break;

  case 11: /* declaration: specified_type ';'  */
#line 299 "src/ffi.y"
            { (yyval.vword_val) = LIST("declaration", (yyvsp[-1].vword_val)); }
#line 1960 "ffi.tab.c"
    break;

  case 12: /* declarator_list: specified_type prefix_declarator  */
#line 303 "src/ffi.y"
                { register_typedef((yyvsp[-1].vword_val), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS((yyvsp[-1].vword_val), LIST((yyvsp[0].vword_val))); }
#line 1967 "ffi.tab.c"
    break;

  case 13: /* declarator_list: declarator_list ',' prefix_declarator  */
#line 306 "src/ffi.y"
                { VWORD v = (yyvsp[-2].vword_val);
                  register_typedef(CAR(v), (yyvsp[0].vword_val));
                  (yyval.vword_val) = CONS(CAR(v), CONS((yyvsp[0].vword_val), CDR(v))); }
#line 1975 "ffi.tab.c"
    break;

  case 14: /* prefix_declarator: postfix_declarator  */
#line 312 "src/ffi.y"
                  { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1981 "ffi.tab.c"
    break;

  case 15: /* prefix_declarator: '*' prefix_declarator  */
#line 314 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1987 "ffi.tab.c"
    break;

  case 16: /* prefix_declarator: '*' T_QUALIFIER prefix_declarator  */
#line 316 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1993 "ffi.tab.c"
    break;

  case 17: /* postfix_declarator: identifier  */
#line 320 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1999 "ffi.tab.c"
    break;

  case 18: /* postfix_declarator: postfix_declarator '(' ')'  */
#line 322 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2005 "ffi.tab.c"
    break;

  case 19: /* postfix_declarator: postfix_declarator '[' ']'  */
#line 324 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2011 "ffi.tab.c"
    break;

  case 20: /* postfix_declarator: postfix_declarator '[' expr ']'  */
#line 326 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val)); }
#line 2017 "ffi.tab.c"
    break;

  case 21: /* postfix_declarator: postfix_declarator '(' parameter_list ')'  */
#line 328 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2023 "ffi.tab.c"
    break;

  case 22: /* postfix_declarator: '(' prefix_declarator ')'  */
#line 330 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2029 "ffi.tab.c"
    break;

  case 23: /* abstract_postfix_declarator: abstract_postfix_declarator '(' ')'  */
#line 334 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2035 "ffi.tab.c"
    break;

  case 24: /* abstract_postfix_declarator: abstract_postfix_declarator '[' ']'  */
#line 336 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2041 "ffi.tab.c"
    break;

  case 25: /* abstract_postfix_declarator: abstract_postfix_declarator '[' expr ']'  */
#line 338 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val)); }
#line 2047 "ffi.tab.c"
    break;

  case 26: /* abstract_postfix_declarator: abstract_postfix_declarator '[' T_STORAGE expr ']'  */
#line 340 "src/ffi.y"
                            { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", (yyvsp[-4].vword_val), (yyvsp[-1].vword_val)); }
#line 2053 "ffi.tab.c"
    break;

  case 27: /* abstract_postfix_declarator: abstract_postfix_declarator '(' parameter_list ')'  */
#line 342 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2059 "ffi.tab.c"
    break;

  case 28: /* abstract_postfix_declarator: '(' ')'  */
#line 344 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE); }
#line 2065 "ffi.tab.c"
    break;

  case 29: /* abstract_postfix_declarator: '[' ']'  */
#line 346 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE, VFALSE); }
#line 2071 "ffi.tab.c"
    break;

  case 30: /* abstract_postfix_declarator: '[' expr ']'  */
#line 348 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE, (yyvsp[-1].vword_val)); }
#line 2077 "ffi.tab.c"
    break;

  case 31: /* abstract_postfix_declarator: '[' T_STORAGE expr ']'  */
#line 350 "src/ffi.y"
                            { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", VFALSE, (yyvsp[-1].vword_val)); }
#line 2083 "ffi.tab.c"
    break;

  case 32: /* abstract_postfix_declarator: '(' parameter_list ')'  */
#line 352 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE, detangle_params((yyvsp[-1].vword_val))); }
#line 2089 "ffi.tab.c"
    break;

  case 33: /* abstract_postfix_declarator: '(' abstract_prefix_declarator ')'  */
#line 354 "src/ffi.y"
                            { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2095 "ffi.tab.c"
    break;

  case 34: /* abstract_prefix_declarator: abstract_postfix_declarator  */
#line 358 "src/ffi.y"
                           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2101 "ffi.tab.c"
    break;

  case 35: /* abstract_prefix_declarator: '*'  */
#line 360 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", VFALSE); }
#line 2107 "ffi.tab.c"
    break;

  case 36: /* abstract_prefix_declarator: '*' T_QUALIFIER  */
#line 362 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[0].keyword_val)), VFALSE)); }
#line 2113 "ffi.tab.c"
    break;

  case 37: /* abstract_prefix_declarator: '*' abstract_prefix_declarator  */
#line 364 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 2119 "ffi.tab.c"
    break;

  case 38: /* abstract_prefix_declarator: '*' T_QUALIFIER abstract_prefix_declarator  */
#line 366 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 2125 "ffi.tab.c"
    break;

  case 39: /* param_prefix_declarator: param_postfix_declarator  */
#line 370 "src/ffi.y"
                        { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2131 "ffi.tab.c"
    break;

  case 40: /* param_prefix_declarator: '*' param_prefix_declarator  */
#line 372 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 2137 "ffi.tab.c"
    break;

  case 41: /* param_prefix_declarator: '*' T_QUALIFIER param_prefix_declarator  */
#line 374 "src/ffi.y"
                        { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 2143 "ffi.tab.c"
    break;

  case 42: /* param_postfix_declarator: T_VARIABLE  */
#line 378 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2149 "ffi.tab.c"
    break;

  case 43: /* param_postfix_declarator: param_postfix_declarator '(' ')'  */
#line 380 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 2155 "ffi.tab.c"
    break;

  case 44: /* param_postfix_declarator: param_postfix_declarator '[' ']'  */
#line 382 "src/ffi.y"
                         { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val), VFALSE); }
#line 2161 "ffi.tab.c"
    break;

  case 45: /* param_postfix_declarator: param_postfix_declarator '[' expr ']'  */
#line 384 "src/ffi.y"
                         { (yyval.vword_val) = LIST("array", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val)); }
#line 2167 "ffi.tab.c"
    break;

  case 46: /* param_postfix_declarator: param_postfix_declarator '[' T_STORAGE expr ']'  */
#line 386 "src/ffi.y"
                         { if((yyvsp[-2].keyword_val) != T_STATIC) YYERROR; (yyval.vword_val) = LIST("static-array", (yyvsp[-4].vword_val), (yyvsp[-1].vword_val)); }
#line 2173 "ffi.tab.c"
    break;

  case 47: /* param_postfix_declarator: param_postfix_declarator '(' parameter_list ')'  */
#line 388 "src/ffi.y"
                         { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 2179 "ffi.tab.c"
    break;

  case 48: /* param_postfix_declarator: '(' param_prefix_declarator ')'  */
#line 390 "src/ffi.y"
                         { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 2185 "ffi.tab.c"
    break;

  case 49: /* parameter_list: qualified_type  */
#line 393 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 2191 "ffi.tab.c"
    break;

  case 50: /* parameter_list: qualified_type abstract_prefix_declarator  */
#line 395 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2197 "ffi.tab.c"
    break;

  case 51: /* parameter_list: qualified_type param_prefix_declarator  */
#line 397 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2203 "ffi.tab.c"
    break;

  case 52: /* parameter_list: parameter_list ',' qualified_type  */
#line 399 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 2209 "ffi.tab.c"
    break;

  case 53: /* parameter_list: parameter_list ',' qualified_type abstract_prefix_declarator  */
#line 401 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2215 "ffi.tab.c"
    break;

  case 54: /* parameter_list: parameter_list ',' qualified_type param_prefix_declarator  */
#line 403 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 2221 "ffi.tab.c"
    break;

  case 55: /* plain_type: T_TYPE  */
#line 407 "src/ffi.y"
           { (yyval.vword_val) = keyword_to_vword((yyvsp[0].keyword_val)); }
#line 2227 "ffi.tab.c"
    break;

  case 56: /* plain_type: T_TYPENAME  */
#line 409 "src/ffi.y"
           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2233 "ffi.tab.c"
    break;

  case 57: /* plain_type: T_STRUCT identifier  */
#line 411 "src/ffi.y"
           { (yyval.vword_val) = LIST("struct", (yyvsp[0].vword_val)); }
#line 2239 "ffi.tab.c"
    break;

  case 58: /* plain_type: T_ENUM identifier  */
#line 413 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[0].vword_val), VFALSE); }
#line 2245 "ffi.tab.c"
    break;

  case 59: /* plain_type: T_ENUM '{' enum_list '}'  */
#line 415 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-1].vword_val))); }
#line 2251 "ffi.tab.c"
    break;

  case 60: /* plain_type: T_ENUM identifier '{' enum_list '}'  */
#line 417 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-3].vword_val), detangle_enums((yyvsp[-1].vword_val))); }
#line 2257 "ffi.tab.c"
    break;

  case 61: /* plain_type: T_ENUM '{' enum_list ',' '}'  */
#line 419 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", VFALSE, detangle_enums((yyvsp[-2].vword_val))); }
#line 2263 "ffi.tab.c"
    break;

  case 62: /* plain_type: T_ENUM identifier '{' enum_list ',' '}'  */
#line 421 "src/ffi.y"
           { (yyval.vword_val) = LIST("enum", (yyvsp[-4].vword_val), detangle_enums((yyvsp[-2].vword_val))); }
#line 2269 "ffi.tab.c"
    break;

  case 63: /* post_qualified_type: plain_type  */
#line 425 "src/ffi.y"
               { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 2275 "ffi.tab.c"
    break;

  case 64: /* post_qualified_type: post_qualified_type T_QUALIFIER  */
#line 427 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2281 "ffi.tab.c"
    break;

  case 65: /* post_qualified_type: post_qualified_type T_TYPE  */
#line 429 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2287 "ffi.tab.c"
    break;

  case 66: /* qualified_type: post_qualified_type  */
#line 433 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2293 "ffi.tab.c"
    break;

  case 67: /* qualified_type: T_QUALIFIER qualified_type  */
#line 435 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2299 "ffi.tab.c"
    break;

  case 68: /* specified_type: post_specified_type  */
#line 439 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 2305 "ffi.tab.c"
    break;

  case 69: /* specified_type: T_QUALIFIER specified_type  */
#line 441 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2311 "ffi.tab.c"
    break;

  case 70: /* specified_type: T_STORAGE specified_type  */
#line 443 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 2317 "ffi.tab.c"
    break;

  case 71: /* post_specified_type: plain_type  */
#line 447 "src/ffi.y"
                    { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 2323 "ffi.tab.c"
    break;

  case 72: /* post_specified_type: post_specified_type T_QUALIFIER  */
#line 449 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2329 "ffi.tab.c"
    break;

  case 73: /* post_specified_type: post_specified_type T_TYPE  */
#line 451 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2335 "ffi.tab.c"
    break;

  case 74: /* post_specified_type: post_specified_type T_STORAGE  */
#line 453 "src/ffi.y"
                    { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 2341 "ffi.tab.c"
    break;

  case 75: /* enum_list: T_VARIABLE  */
#line 457 "src/ffi.y"
          { (yyval.vword_val) = LIST(VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 2347 "ffi.tab.c"
    break;

  case 76: /* enum_list: T_VARIABLE '=' expr  */
#line 459 "src/ffi.y"
          { (yyval.vword_val) = LIST(VNULL, (yyvsp[-2].vword_val), (yyvsp[0].vword_val)); }
#line 2353 "ffi.tab.c"
    break;

  case 77: /* enum_list: enum_list ',' T_VARIABLE  */
#line 461 "src/ffi.y"
          { (yyval.vword_val) = LIST((yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 2359 "ffi.tab.c"
    break;

  case 78: /* enum_list: enum_list ',' T_VARIABLE '=' expr  */
#line 463 "src/ffi.y"
          { (yyval.vword_val) = LIST((yyvsp[-4].vword_val), (yyvsp[-2].vword_val), (yyvsp[0].vword_val)); }
#line 2365 "ffi.tab.c"
    break;

  case 79: /* expr: T_INTEGER  */
#line 467 "src/ffi.y"
     { if((yyvsp[0].int_val) > INT_MAX) VErrorC(global_runtime, "foreign-prase-header-c: failed to parse, integer exceeds 31 bit limit %llu", (yyvsp[0].int_val)); (yyval.vword_val) = VEncodeInt((yyvsp[0].int_val)); }
#line 2371 "ffi.tab.c"
    break;


#line 2375 "ffi.tab.c"

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

#line 509 "src/ffi.y"


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

  VGarbageCollect2Closure(runtime, VDecodeClosureApply2(runtime, k), 1, parse_ret);
}

void (*VForeignParseDeclC)(V_CORE_ARGS, VWORD k, VWORD decl) = VForeignParseDeclCImpl;
void (*VForeignParseHeaderC)(V_CORE_ARGS, VWORD k, VWORD header) = VForeignParseHeaderCImpl;
