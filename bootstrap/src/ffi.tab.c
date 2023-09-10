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
V_STATIC_STRING(_Bool_str, "bool");
V_STATIC_STRING(_Complex_str, "complex");
V_STATIC_STRING(_Imaginary_str, "imaginary");
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


#line 211 "ffi.tab.c"

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
  YYSYMBOL_T_TYPE = 4,                     /* T_TYPE  */
  YYSYMBOL_T_QUALIFIER = 5,                /* T_QUALIFIER  */
  YYSYMBOL_T_FUNCTION_QUALIFIER = 6,       /* T_FUNCTION_QUALIFIER  */
  YYSYMBOL_T_INTEGER = 7,                  /* T_INTEGER  */
  YYSYMBOL_T_IDENTIFIER = 8,               /* T_IDENTIFIER  */
  YYSYMBOL_9_ = 9,                         /* ';'  */
  YYSYMBOL_10_ = 10,                       /* ','  */
  YYSYMBOL_11_ = 11,                       /* '*'  */
  YYSYMBOL_12_ = 12,                       /* '('  */
  YYSYMBOL_13_ = 13,                       /* ')'  */
  YYSYMBOL_14_ = 14,                       /* '['  */
  YYSYMBOL_15_ = 15,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 16,                  /* $accept  */
  YYSYMBOL_start = 17,                     /* start  */
  YYSYMBOL_toplevel = 18,                  /* toplevel  */
  YYSYMBOL_declaration = 19,               /* declaration  */
  YYSYMBOL_declarator_list = 20,           /* declarator_list  */
  YYSYMBOL_prefix_declarator = 21,         /* prefix_declarator  */
  YYSYMBOL_postfix_declarator = 22,        /* postfix_declarator  */
  YYSYMBOL_abstract_postfix_declarator = 23, /* abstract_postfix_declarator  */
  YYSYMBOL_abstract_prefix_declarator = 24, /* abstract_prefix_declarator  */
  YYSYMBOL_parameter_list = 25,            /* parameter_list  */
  YYSYMBOL_post_qualified_type = 26,       /* post_qualified_type  */
  YYSYMBOL_qualified_type = 27             /* qualified_type  */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  16
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  41
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  67

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   263


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
      12,    13,    11,     2,    10,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     9,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    14,     2,    15,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   160,   160,   162,   166,   168,   172,   174,   178,   180,
     184,   186,   188,   192,   194,   196,   198,   200,   204,   206,
     208,   210,   212,   214,   216,   220,   222,   224,   226,   228,
     232,   234,   236,   238,   240,   242,   246,   248,   250,   252,
     256,   258
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_STRUCT", "T_TYPE",
  "T_QUALIFIER", "T_FUNCTION_QUALIFIER", "T_INTEGER", "T_IDENTIFIER",
  "';'", "','", "'*'", "'('", "')'", "'['", "']'", "$accept", "start",
  "toplevel", "declaration", "declarator_list", "prefix_declarator",
  "postfix_declarator", "abstract_postfix_declarator",
  "abstract_prefix_declarator", "parameter_list", "post_qualified_type",
  "qualified_type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-26)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-4)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      91,    17,   -26,    91,    30,    91,   -26,    32,    35,   -26,
     -26,   -26,   -26,    35,   -26,   -26,   -26,   -26,    21,    47,
      92,    56,    54,   -26,    57,    54,    44,   -26,    47,    10,
      67,    54,   -26,   -26,   -26,    76,    64,   -26,    91,   -26,
      59,    37,    77,   -26,    85,   -26,    64,    69,    -2,   -26,
     -26,    61,    78,   -26,    14,    83,   -26,   -26,   -26,    73,
      49,   -26,   -26,   -26,    80,   -26,   -26
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    36,     0,     0,     2,     4,    40,     0,    37,
      41,     1,     5,     0,    39,    38,    13,     7,     0,     0,
       0,     8,    10,     8,     0,    11,     0,     6,     0,     0,
       0,    12,    17,     9,    14,     0,    30,    15,     0,    16,
      26,     0,     0,    32,    25,    31,    33,    27,    26,    28,
      21,     0,     0,    22,     0,     0,    35,    34,    29,    27,
       0,    24,    23,    18,     0,    19,    20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -26,   -26,   -26,    74,   -26,    -8,   -16,   -26,   -25,   -22,
     -26,     1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     4,     5,     6,    20,    26,    22,    44,    49,    52,
       7,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      21,     8,    25,    59,    10,    23,    13,    35,    31,    48,
      60,    45,    42,     1,     2,     3,    51,     1,     2,     3,
      33,    57,    58,    34,    25,     9,    24,    63,    43,    16,
      11,    31,    64,    19,    58,    51,    14,    15,    56,    46,
       1,     2,     3,    16,    17,    16,    18,    19,    40,    41,
      50,    42,     1,     2,     3,    16,    -3,    32,    18,    19,
      48,    60,    50,    42,    47,    16,    29,    16,    30,    19,
      48,    41,    16,    42,    61,    40,    41,    16,    42,    12,
      48,    41,    37,    42,    48,    60,    38,    42,    38,    39,
      38,    62,    53,    66,     1,     2,     3,    54,    65,    55,
       0,    27,    28
};

static const yytype_int8 yycheck[] =
{
       8,     0,    18,     5,     3,    13,     5,    29,    24,    11,
      12,    36,    14,     3,     4,     5,    41,     3,     4,     5,
      28,    46,    47,    13,    40,     8,     5,    13,    36,     8,
       0,    47,    54,    12,    59,    60,     4,     5,    46,    38,
       3,     4,     5,     8,     9,     8,    11,    12,    11,    12,
      13,    14,     3,     4,     5,     8,     0,    13,    11,    12,
      11,    12,    13,    14,     5,     8,    12,     8,    14,    12,
      11,    12,     8,    14,    13,    11,    12,     8,    14,     5,
      11,    12,    15,    14,    11,    12,    10,    14,    10,    13,
      10,    13,    15,    13,     3,     4,     5,    12,    15,    14,
      -1,     9,    10
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    17,    18,    19,    26,    27,     8,
      27,     0,    19,    27,     4,     5,     8,     9,    11,    12,
      20,    21,    22,    21,     5,    22,    21,     9,    10,    12,
      14,    22,    13,    21,    13,    25,    27,    15,    10,    13,
      11,    12,    14,    21,    23,    24,    27,     5,    11,    24,
      13,    24,    25,    15,    12,    14,    21,    24,    24,     5,
      12,    13,    13,    13,    25,    15,    13
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    16,    17,    17,    18,    18,    19,    19,    20,    20,
      21,    21,    21,    22,    22,    22,    22,    22,    23,    23,
      23,    23,    23,    23,    23,    24,    24,    24,    24,    24,
      25,    25,    25,    25,    25,    25,    26,    26,    26,    26,
      27,    27
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     3,     2,     1,     3,
       1,     2,     3,     1,     3,     3,     4,     3,     3,     3,
       4,     2,     2,     3,     3,     1,     1,     2,     2,     3,
       1,     2,     2,     3,     4,     4,     1,     2,     2,     2,
       1,     2
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
#line 161 "src/ffi.y"
      { parse_ret = CONS("toplevel", reverse((yyvsp[0].vword_val))); }
#line 1269 "ffi.tab.c"
    break;

  case 3: /* start: qualified_type prefix_declarator  */
#line 163 "src/ffi.y"
      { parse_ret = LIST("naked_declaration", (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1275 "ffi.tab.c"
    break;

  case 4: /* toplevel: declaration  */
#line 167 "src/ffi.y"
         { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1281 "ffi.tab.c"
    break;

  case 5: /* toplevel: toplevel declaration  */
#line 169 "src/ffi.y"
         { (yyval.vword_val) = CONS((yyvsp[0].vword_val), (yyvsp[-1].vword_val)); }
#line 1287 "ffi.tab.c"
    break;

  case 6: /* declaration: qualified_type declarator_list ';'  */
#line 173 "src/ffi.y"
            { (yyval.vword_val) = CONS("declaration", CONS((yyvsp[-2].vword_val), reverse((yyvsp[-1].vword_val)))); }
#line 1293 "ffi.tab.c"
    break;

  case 7: /* declaration: qualified_type ';'  */
#line 175 "src/ffi.y"
            { (yyval.vword_val) = LIST("declaration", (yyvsp[-1].vword_val)); }
#line 1299 "ffi.tab.c"
    break;

  case 8: /* declarator_list: prefix_declarator  */
#line 179 "src/ffi.y"
                { (yyval.vword_val) = LIST((yyvsp[0].vword_val)); }
#line 1305 "ffi.tab.c"
    break;

  case 9: /* declarator_list: declarator_list ',' prefix_declarator  */
#line 181 "src/ffi.y"
                { (yyval.vword_val) = CONS( (yyvsp[0].vword_val), (yyvsp[-2].vword_val) ); }
#line 1311 "ffi.tab.c"
    break;

  case 10: /* prefix_declarator: postfix_declarator  */
#line 185 "src/ffi.y"
                  { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1317 "ffi.tab.c"
    break;

  case 11: /* prefix_declarator: '*' postfix_declarator  */
#line 187 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1323 "ffi.tab.c"
    break;

  case 12: /* prefix_declarator: '*' T_QUALIFIER postfix_declarator  */
#line 189 "src/ffi.y"
                  { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1329 "ffi.tab.c"
    break;

  case 13: /* postfix_declarator: T_IDENTIFIER  */
#line 193 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1335 "ffi.tab.c"
    break;

  case 14: /* postfix_declarator: postfix_declarator '(' ')'  */
#line 195 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 1341 "ffi.tab.c"
    break;

  case 15: /* postfix_declarator: postfix_declarator '[' ']'  */
#line 197 "src/ffi.y"
                   { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val)); }
#line 1347 "ffi.tab.c"
    break;

  case 16: /* postfix_declarator: postfix_declarator '(' parameter_list ')'  */
#line 199 "src/ffi.y"
                   { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 1353 "ffi.tab.c"
    break;

  case 17: /* postfix_declarator: '(' prefix_declarator ')'  */
#line 201 "src/ffi.y"
                   { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 1359 "ffi.tab.c"
    break;

  case 18: /* abstract_postfix_declarator: abstract_postfix_declarator '(' ')'  */
#line 205 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-2].vword_val)); }
#line 1365 "ffi.tab.c"
    break;

  case 19: /* abstract_postfix_declarator: abstract_postfix_declarator '[' ']'  */
#line 207 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", (yyvsp[-2].vword_val)); }
#line 1371 "ffi.tab.c"
    break;

  case 20: /* abstract_postfix_declarator: abstract_postfix_declarator '(' parameter_list ')'  */
#line 209 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", (yyvsp[-3].vword_val), detangle_params((yyvsp[-1].vword_val))); }
#line 1377 "ffi.tab.c"
    break;

  case 21: /* abstract_postfix_declarator: '(' ')'  */
#line 211 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE); }
#line 1383 "ffi.tab.c"
    break;

  case 22: /* abstract_postfix_declarator: '[' ']'  */
#line 213 "src/ffi.y"
                            { (yyval.vword_val) = LIST("array", VFALSE); }
#line 1389 "ffi.tab.c"
    break;

  case 23: /* abstract_postfix_declarator: '(' parameter_list ')'  */
#line 215 "src/ffi.y"
                            { (yyval.vword_val) = LIST("function", VFALSE, detangle_params((yyvsp[-1].vword_val))); }
#line 1395 "ffi.tab.c"
    break;

  case 24: /* abstract_postfix_declarator: '(' abstract_prefix_declarator ')'  */
#line 217 "src/ffi.y"
                            { (yyval.vword_val) = (yyvsp[-1].vword_val); }
#line 1401 "ffi.tab.c"
    break;

  case 25: /* abstract_prefix_declarator: abstract_postfix_declarator  */
#line 221 "src/ffi.y"
                           { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1407 "ffi.tab.c"
    break;

  case 26: /* abstract_prefix_declarator: '*'  */
#line 223 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", VFALSE); }
#line 1413 "ffi.tab.c"
    break;

  case 27: /* abstract_prefix_declarator: '*' T_QUALIFIER  */
#line 225 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[0].keyword_val)), VFALSE)); }
#line 1419 "ffi.tab.c"
    break;

  case 28: /* abstract_prefix_declarator: '*' abstract_prefix_declarator  */
#line 227 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", (yyvsp[0].vword_val)); }
#line 1425 "ffi.tab.c"
    break;

  case 29: /* abstract_prefix_declarator: '*' T_QUALIFIER abstract_prefix_declarator  */
#line 229 "src/ffi.y"
                           { (yyval.vword_val) = LIST("pointer", LIST(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val))); }
#line 1431 "ffi.tab.c"
    break;

  case 30: /* parameter_list: qualified_type  */
#line 233 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[0].vword_val), VFALSE); }
#line 1437 "ffi.tab.c"
    break;

  case 31: /* parameter_list: qualified_type abstract_prefix_declarator  */
#line 235 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1443 "ffi.tab.c"
    break;

  case 32: /* parameter_list: qualified_type prefix_declarator  */
#line 237 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", VNULL, (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1449 "ffi.tab.c"
    break;

  case 33: /* parameter_list: parameter_list ',' qualified_type  */
#line 239 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-2].vword_val), (yyvsp[0].vword_val), VFALSE); }
#line 1455 "ffi.tab.c"
    break;

  case 34: /* parameter_list: parameter_list ',' qualified_type abstract_prefix_declarator  */
#line 241 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1461 "ffi.tab.c"
    break;

  case 35: /* parameter_list: parameter_list ',' qualified_type prefix_declarator  */
#line 243 "src/ffi.y"
               { (yyval.vword_val) = LIST("param", (yyvsp[-3].vword_val), (yyvsp[-1].vword_val), (yyvsp[0].vword_val)); }
#line 1467 "ffi.tab.c"
    break;

  case 36: /* post_qualified_type: T_TYPE  */
#line 247 "src/ffi.y"
               { (yyval.vword_val) = LIST(keyword_to_vword((yyvsp[0].keyword_val))); }
#line 1473 "ffi.tab.c"
    break;

  case 37: /* post_qualified_type: T_STRUCT T_IDENTIFIER  */
#line 249 "src/ffi.y"
               { (yyval.vword_val) = LIST(LIST("struct", (yyvsp[0].vword_val))); }
#line 1479 "ffi.tab.c"
    break;

  case 38: /* post_qualified_type: post_qualified_type T_QUALIFIER  */
#line 251 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1485 "ffi.tab.c"
    break;

  case 39: /* post_qualified_type: post_qualified_type T_TYPE  */
#line 253 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[0].keyword_val)), (yyvsp[-1].vword_val)); }
#line 1491 "ffi.tab.c"
    break;

  case 40: /* qualified_type: post_qualified_type  */
#line 257 "src/ffi.y"
               { (yyval.vword_val) = (yyvsp[0].vword_val); }
#line 1497 "ffi.tab.c"
    break;

  case 41: /* qualified_type: T_QUALIFIER qualified_type  */
#line 259 "src/ffi.y"
               { (yyval.vword_val) = CONS(keyword_to_vword((yyvsp[-1].keyword_val)), (yyvsp[0].vword_val)); }
#line 1503 "ffi.tab.c"
    break;


#line 1507 "ffi.tab.c"

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
      yyerror (YY_("syntax error"));
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

  return yyresult;
}

#line 262 "src/ffi.y"


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
