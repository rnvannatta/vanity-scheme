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
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D1831 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10string_D1830 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1829 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10string_D1828 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10string_D1827 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1826 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0ffi_V20" };
static struct { VBlob sym; char bytes[35]; } _V10string_D1825 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
static struct { VBlob sym; char bytes[34]; } _V10string_D1824 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0expand_V20" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
VWEAK VWORD _V0validate__foreign__function;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0validate__foreign__function = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "validate-foreign-function" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0resolve__foreign__import;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0resolve__foreign__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "resolve-foreign-import" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0find__library__interface_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0find__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "find-library-interface!" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0header__from__library;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0header__from__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "header-from-library" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V10sys_Dcons;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10sys_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##sys.cons" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1823 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "expressions not permitted in libraries yet" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V10vcore_Dmake__import;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmake__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.make-import" };
VWEAK VWORD _V10vcore_Dimport;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.import" };
static struct { VBlob sym; char bytes[43]; } _V10string_D1822 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "library has free variables but no imports:" };
static struct { VBlob sym; char bytes[41]; } _V10string_D1821 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "imports to library must all be c strings" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1820 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "library has free variables" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1819 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "duplicate in lambda" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1818 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid lambda" };
static struct { VBlob sym; char bytes[20]; } _V10string_D1817 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "invalid lambda args" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1816 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "malformed let" };
static struct { VBlob sym; char bytes[26]; } _V10string_D1815 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10foreign_Dimport;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10foreign_Dimport = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##foreign.import" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1814 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "##foreign.declare's first argument is not a string" };
static struct { VBlob sym; char bytes[61]; } _V10string_D1813 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 61 }, "##vcore.declare's second argument is not a lambda expression" };
VWEAK VWORD _V10vcore_Dfunction;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V10vcore_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "##vcore.function" };
VWEAK VWORD _V0ok;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0ok = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "ok" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
static struct { VBlob sym; char bytes[49]; } _V10string_D1812 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 49 }, "##vcore.declare's first argument is not a string" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1811 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "malformed define" };
static struct { VBlob sym; char bytes[40]; } _V10string_D1810 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "define's first argument is not a symbol" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1809 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "malformed define-library" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
static struct { VBlob sym; char bytes[27]; } _V10string_D1808 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "stray null list in program" };
static struct { VBlob sym; char bytes[31]; } _V10string_D1807 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "stray improper list in program" };
static struct { VBlob sym; char bytes[51]; } _V10string_D1806 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "function application's first arg is not a function" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0match;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "match" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[24]; } _V10string_D1805 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "stray define in program" };
static struct { VBlob sym; char bytes[4]; } _V10string_D1804 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "val" };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1803 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "malformed set!" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static struct { VBlob sym; char bytes[14]; } _V10string_D1802 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "malformed cut" };
VWEAK VWORD _V0_L_D_D_D_G;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0_L_D_D_D_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "<...>" };
static struct { VBlob sym; char bytes[39]; } _V10string_D1801 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "cut: ellipses syntax not supported yet" };
VWEAK VWORD _V0_L_G;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<>" };
VWEAK VWORD _V0cut;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cut = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cut" };
VWEAK VWORD _V0cut__iter;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0cut__iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "cut-iter" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1800 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "exhausted case statement" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0case;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0case = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "case" };
VWEAK VWORD _V0case__iter;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0case__iter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "case-iter" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1799 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "malformed cond" };
static struct { VBlob sym; char bytes[25]; } _V10string_D1798 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 25 }, "exhausted cond statement" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0_E_G;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_E_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "=>" };
static struct { VBlob sym; char bytes[2]; } _V10string_D1797 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
VWEAK VWORD _V0cond;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cond = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cond" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
static struct { VBlob sym; char bytes[13]; } _V10string_D1796 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 13 }, "malformed if" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
static struct { VBlob sym; char bytes[16]; } _V10string_D1795 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed begin" };
static struct { VBlob sym; char bytes[15]; } _V10string_D1794 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "malformed let*" };
VWEAK VWORD _V0let_S;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0let_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "let*" };
VWEAK VWORD _V0letrec_S;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0letrec_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "letrec*" };
static struct { VBlob sym; char bytes[17]; } _V10string_D1793 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "malformed letrec" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1792 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "malformed let-values*" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0let_S__values;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0let_S__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "let*-values" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10sys_Dqcons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10sys_Dqcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##sys.qcons" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
static struct { VBlob sym; char bytes[22]; } _V10string_D1791 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "malformed case-lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0expand__toplevel;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0expand__toplevel = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "expand-toplevel" };
static __attribute__((constructor)) void VDllMain1() {
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0transform__match = VEncodePointer(VLookupConstant("_V0transform__match", &_VW_V0transform__match), VPOINTER_OTHER);
  _V0validate__foreign__function = VEncodePointer(VLookupConstant("_V0validate__foreign__function", &_VW_V0validate__foreign__function), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0resolve__foreign__import = VEncodePointer(VLookupConstant("_V0resolve__foreign__import", &_VW_V0resolve__foreign__import), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0find__library__interface_B = VEncodePointer(VLookupConstant("_V0find__library__interface_B", &_VW_V0find__library__interface_B), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VLookupConstant("_V0free__variables", &_VW_V0free__variables), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VLookupConstant("_V0filter", &_VW_V0filter), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0header__from__library = VEncodePointer(VLookupConstant("_V0header__from__library", &_VW_V0header__from__library), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VLookupConstant("_V0register__library__interface_B", &_VW_V0register__library__interface_B), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VLookupConstant("_V0unquote__splicing", &_VW_V0unquote__splicing), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V10sys_Dcons = VEncodePointer(VLookupConstant("_V10sys_Dcons", &_VW_V10sys_Dcons), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VLookupConstant("_V0unquote", &_VW_V0unquote), VPOINTER_OTHER);
  _V0export = VEncodePointer(VLookupConstant("_V0export", &_VW_V0export), VPOINTER_OTHER);
  _V10vcore_Dmake__import = VEncodePointer(VLookupConstant("_V10vcore_Dmake__import", &_VW_V10vcore_Dmake__import), VPOINTER_OTHER);
  _V10vcore_Dimport = VEncodePointer(VLookupConstant("_V10vcore_Dimport", &_VW_V10vcore_Dimport), VPOINTER_OTHER);
  _V10foreign_Dimport = VEncodePointer(VLookupConstant("_V10foreign_Dimport", &_VW_V10foreign_Dimport), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V10vcore_Dfunction = VEncodePointer(VLookupConstant("_V10vcore_Dfunction", &_VW_V10vcore_Dfunction), VPOINTER_OTHER);
  _V0ok = VEncodePointer(VLookupConstant("_V0ok", &_VW_V0ok), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V0import = VEncodePointer(VLookupConstant("_V0import", &_VW_V0import), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VLookupConstant("_V0define__library", &_VW_V0define__library), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0match = VEncodePointer(VLookupConstant("_V0match", &_VW_V0match), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
  _V0_L_D_D_D_G = VEncodePointer(VLookupConstant("_V0_L_D_D_D_G", &_VW_V0_L_D_D_D_G), VPOINTER_OTHER);
  _V0_L_G = VEncodePointer(VLookupConstant("_V0_L_G", &_VW_V0_L_G), VPOINTER_OTHER);
  _V0cut = VEncodePointer(VLookupConstant("_V0cut", &_VW_V0cut), VPOINTER_OTHER);
  _V0cut__iter = VEncodePointer(VLookupConstant("_V0cut__iter", &_VW_V0cut__iter), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0case = VEncodePointer(VLookupConstant("_V0case", &_VW_V0case), VPOINTER_OTHER);
  _V0case__iter = VEncodePointer(VLookupConstant("_V0case__iter", &_VW_V0case__iter), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0_E_G = VEncodePointer(VLookupConstant("_V0_E_G", &_VW_V0_E_G), VPOINTER_OTHER);
  _V0cond = VEncodePointer(VLookupConstant("_V0cond", &_VW_V0cond), VPOINTER_OTHER);
  _V0else = VEncodePointer(VLookupConstant("_V0else", &_VW_V0else), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0let_S = VEncodePointer(VLookupConstant("_V0let_S", &_VW_V0let_S), VPOINTER_OTHER);
  _V0letrec_S = VEncodePointer(VLookupConstant("_V0letrec_S", &_VW_V0letrec_S), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V0let_S__values = VEncodePointer(VLookupConstant("_V0let_S__values", &_VW_V0let_S__values), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
  _V0let = VEncodePointer(VLookupConstant("_V0let", &_VW_V0let), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V10sys_Dqcons = VEncodePointer(VLookupConstant("_V10sys_Dqcons", &_VW_V10sys_Dqcons), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VLookupConstant("_V0quasiquote", &_VW_V0quasiquote), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0expand__toplevel = VEncodePointer(VLookupConstant("_V0expand__toplevel", &_VW_V0expand__toplevel), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0expand_V20_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k56, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.287 58 0) (##inline ##sys.cons (##inline ##sys.cons 'expand-toplevel (bruijn expand-toplevel 10 8)) '()))
V_CALL(VGetArg(upenv, 58-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V0expand__toplevel,
        VGetArg(upenv, 10-1, 8)),
        VNULL));
 }
}
static void _V0expand__syntax_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k61, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 7 1) (bruijn ##k.1141 4 0) (bruijn ##x.1143 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 18 0) (close _V0expand__syntax_k61) 'lambda (bruijn ##x.1144 0 0))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k61, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V0expand__syntax_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 16 5) (close _V0expand__syntax_k60) (bruijn ##x.1145 0 0))
V_CALL(VGetArg(upenv, 16-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k60, env)}),
      _var0);
 }
}
static void _V0expand__syntax_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1142 0 0) ((bruijn cdr 16 1) (close _V0expand__syntax_k59) (bruijn expr 5 1)) ((bruijn ##k.1141 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k59, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.115 1 0)) ((bruijn equal? 15 7) (close _V0expand__syntax_k58) 'lambda (##inline ##sys.car (bruijn ##expr.115 1 0))) ((bruijn ##k.1141 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k58, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k65, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1121 2 0) (##inline ##sys.cdr (bruijn ##expr.116 6 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)),
      VNULL);
 }
}
static void _V0loop_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k67, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 4 1) (bruijn ##k.1132 1 0) (bruijn ##expr.121 2 1) (bruijn ##x.1133 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.121 1 1))) ((bruijn reverse 23 8) (close _V0loop_k67) (bruijn ##lamb.118 1 2)) ((bruijn ##k.1132 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 23-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k67, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k70, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.119 7 1) (bruijn ##k.1126 2 0) (bruijn ##expr.121 5 1) (bruijn ##x.1128 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 8) (close _V0loop_k70) (bruijn ##lamb.118 4 2))
V_CALL(VGetArg(upenv, 26-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k70, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.120 0 1) (close _V0loop_k69) (##inline ##sys.cdr (bruijn ##expr.121 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.121 3 1)) (bruijn ##lamb.118 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k69, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 24 9) (bruijn ##k.1125 0 0) (close _V0loop_lambda14))
V_CALL(VGetArg(upenv, 24-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda14, env)}));
 }
}
static void _V0loop_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 23 10) (bruijn ##k.1123 1 0) (close _V0loop_lambda13) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 23-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda13, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda12, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k66) (close _V0loop_k68))
V_CALL_FUNC(_V0loop_k66, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k68, env)}));
 }
}
static void _V0expand__syntax_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda11" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k65) (bruijn loop 0 0) (close _V0loop_lambda12))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k65, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda12, env)})
    );
 }
}
static void _V0expand__syntax_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda11) #f)
V_CALL_FUNC(_V0expand__syntax_lambda11, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 19 9) (bruijn ##k.1120 0 0) (close _V0expand__syntax_lambda10))
V_CALL(VGetArg(upenv, 19-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda10, env)}));
 }
}
static void _V0expand__syntax_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k71" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k71, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 8 1) (bruijn ##k.1135 1 0) (##inline ##sys.cons 'case-lambda (bruijn ##x.1138 0 0)))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
        _V0case__lambda,
        _var0));
 }
}
static void _V0expand__syntax_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda15, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda15, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 19 14) (close _V0expand__syntax_k71) (bruijn expand-lambda 18 5) (bruijn lamb 0 2)) ((bruijn ##k.1135 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 19-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k71, env)}),
      VGetArg(upenv, 18-1, 5),
      _var2);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1119 0 0) ((bruijn call-with-values 18 10) (bruijn ##k.1118 1 0) (close _V0expand__syntax_lambda9) (close _V0expand__syntax_lambda15)) ((bruijn ##k.1118 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 18-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda9, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda15, env)}));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.116 1 0)) ((bruijn equal? 17 7) (close _V0expand__syntax_k64) 'case-lambda (##inline ##sys.car (bruijn ##expr.116 1 0))) ((bruijn ##k.1118 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k64, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 9 1) (bruijn ##k.1113 2 0) (bruijn ##x.1115 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1114 0 0) ((bruijn compiler-error 20 15) (close _V0expand__syntax_k75) (##string ##string.1791) (bruijn expr 9 1)) ((bruijn ##k.1113 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k75, env)}),
      VEncodePointer(&_V10string_D1791.sym, VPOINTER_OTHER),
      VGetArg(upenv, 9-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.122 1 0)) ((bruijn equal? 19 7) (close _V0expand__syntax_k74) 'case-lambda (##inline ##sys.car (bruijn ##expr.122 1 0))) ((bruijn ##k.1113 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k74, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k81" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k81, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 13 1) (bruijn ##k.1104 4 0) (bruijn ##x.1108 0 0))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k80" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 23 9) (close _V0expand__syntax_k81) (bruijn ##x.1109 0 0))
V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k81, env)}),
      _var0);
 }
}
static void _V0expand__syntax_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k79" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.124 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.124 0 0))) ((bruijn expand-quasiquote 22 1) (close _V0expand__syntax_k80) 1 (##inline ##sys.car (bruijn ##expr.124 0 0))) ((bruijn ##k.1104 2 0) #f)) ((bruijn ##k.1104 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k80, env)}),
      VEncodeInt(1l),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k78" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1105 0 0) ((close _V0expand__syntax_k79) (##inline ##sys.cdr (bruijn ##expr.123 2 0))) ((bruijn ##k.1104 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k79, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k77" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.123 1 0)) ((bruijn equal? 21 7) (close _V0expand__syntax_k78) 'quasiquote (##inline ##sys.car (bruijn ##expr.123 1 0))) ((bruijn ##k.1104 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k78, env)}),
      _V0quasiquote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 15 1) (bruijn ##k.1088 4 0) (bruijn ##x.1093 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k86" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.127 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.126 1 0))) ((bruijn expand-syntax 25 9) (close _V0expand__syntax_k87) (##inline ##sys.cons '##sys.qcons (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.127 0 0)) '())) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.127 0 0)) '())) '())))) ((bruijn ##k.1088 3 0) #f)) ((bruijn ##k.1088 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 25-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k87, env)}),
      VInlineCons(
        _V10sys_Dqcons,
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VInlineCdr(
        _var0),
        VNULL)),
        VNULL))));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k85, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.126 0 0)) ((close _V0expand__syntax_k86) (##inline ##sys.car (bruijn ##expr.126 0 0))) ((bruijn ##k.1088 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k86, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k84" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1089 0 0) ((close _V0expand__syntax_k85) (##inline ##sys.cdr (bruijn ##expr.125 2 0))) ((bruijn ##k.1088 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k85, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k83" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.125 1 0)) ((bruijn equal? 23 7) (close _V0expand__syntax_k84) 'quote (##inline ##sys.car (bruijn ##expr.125 1 0))) ((bruijn ##k.1088 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k84, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k91, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.129 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.129 0 0))) ((bruijn ##kk.113 15 1) (bruijn ##k.1079 2 0) (##inline ##sys.cons 'quote (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.129 0 0)) '()))) ((bruijn ##k.1079 2 0) #f)) ((bruijn ##k.1079 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0quote,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL)));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1080 0 0) ((close _V0expand__syntax_k91) (##inline ##sys.cdr (bruijn ##expr.128 2 0))) ((bruijn ##k.1079 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k91, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k89" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.128 1 0)) ((bruijn equal? 25 7) (close _V0expand__syntax_k90) 'quote (##inline ##sys.car (bruijn ##expr.128 1 0))) ((bruijn ##k.1079 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k90, env)}),
      _V0quote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 18 1) (bruijn ##k.1073 3 0) (bruijn ##x.1075 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-let 28 6) (close _V0expand__syntax_k96) (bruijn ##x.1076 0 0))
V_CALL(VGetArg(upenv, 28-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k96, env)}),
      _var0);
 }
}
static void _V0expand__syntax_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k94" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1074 0 0) ((bruijn cdr 28 1) (close _V0expand__syntax_k95) (bruijn expr 17 1)) ((bruijn ##k.1073 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k95, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.130 1 0)) ((bruijn equal? 27 7) (close _V0expand__syntax_k94) 'let (##inline ##sys.car (bruijn ##expr.130 1 0))) ((bruijn ##k.1073 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k94, env)}),
      _V0let,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 23 1) (bruijn ##k.1051 6 0) (bruijn ##x.1058 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k103" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.135 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.135 0 0))) ((bruijn expand-syntax 33 9) (close _V0expand__syntax_k104) (##inline ##sys.cons 'call-with-values (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons '() (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.135 0 0)) '()))) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.134 1 0)) (##inline ##sys.cons (##inline ##sys.cons 'let*-values (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.133 2 0)) (##inline ##sys.cdr (bruijn ##expr.132 3 0)))) '()))) '())))) ((bruijn ##k.1051 5 0) #f)) ((bruijn ##k.1051 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 33-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k104, env)}),
      VInlineCons(
        _V0call__with__values,
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VNULL,
        VInlineCons(
        VInlineCar(
        _var0),
        VNULL))),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCons(
        VInlineCons(
        _V0let_S__values,
        VInlineCons(
        VInlineCdr(
        upenv->up->vars[0]),
        VInlineCdr(
        upenv->up->up->vars[0]))),
        VNULL))),
        VNULL))));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.134 0 0)) ((close _V0expand__syntax_k103) (##inline ##sys.cdr (bruijn ##expr.134 0 0))) ((bruijn ##k.1051 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k103, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.133 0 0)) ((close _V0expand__syntax_k102) (##inline ##sys.car (bruijn ##expr.133 0 0))) ((bruijn ##k.1051 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k102, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.132 0 0)) ((close _V0expand__syntax_k101) (##inline ##sys.car (bruijn ##expr.132 0 0))) ((bruijn ##k.1051 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k101, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1052 0 0) ((close _V0expand__syntax_k100) (##inline ##sys.cdr (bruijn ##expr.131 2 0))) ((bruijn ##k.1051 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k100, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.131 1 0)) ((bruijn equal? 29 7) (close _V0expand__syntax_k99) 'let*-values (##inline ##sys.car (bruijn ##expr.131 1 0))) ((bruijn ##k.1051 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 29-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k99, env)}),
      _V0let_S__values,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k109, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 22 1) (bruijn ##k.1042 3 0) (bruijn ##x.1046 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.137 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.137 0 0))) ((bruijn expand-syntax 32 9) (close _V0expand__syntax_k109) (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.137 0 0)))) ((bruijn ##k.1042 2 0) #f)) ((bruijn ##k.1042 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k109, env)}),
      VInlineCons(
        _V0begin,
        VInlineCdr(
        _var0)));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1043 0 0) ((close _V0expand__syntax_k108) (##inline ##sys.cdr (bruijn ##expr.136 2 0))) ((bruijn ##k.1042 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k108, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k106" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.136 1 0)) ((bruijn equal? 31 7) (close _V0expand__syntax_k107) 'let*-values (##inline ##sys.car (bruijn ##expr.136 1 0))) ((bruijn ##k.1042 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 31-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k107, env)}),
      _V0let_S__values,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k113" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k113, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 23 1) (bruijn ##k.1036 2 0) (bruijn ##x.1038 0 0))
V_CALL(VGetArg(upenv, 23-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k112" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1037 0 0) ((bruijn compiler-error 34 15) (close _V0expand__syntax_k113) (##string ##string.1792) (##inline ##sys.cons 'letrec (##inline ##sys.cdr (bruijn ##expr.138 2 0)))) ((bruijn ##k.1036 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 34-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k113, env)}),
      VEncodePointer(&_V10string_D1792.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0letrec,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k111" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.138 1 0)) ((bruijn equal? 33 7) (close _V0expand__syntax_k112) 'let*-values (##inline ##sys.car (bruijn ##expr.138 1 0))) ((bruijn ##k.1036 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 33-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k112, env)}),
      _V0let_S__values,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k118" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.999 2 0) (##inline ##sys.car (bruijn ##expr.140 4 0)) '() '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VNULL,
      VNULL);
 }
}
static void _V0loop_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k121, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.144 5 1) (bruijn ##k.1017 2 0) (bruijn ##expr.146 3 1) (bruijn ##x.1018 1 0) (bruijn ##x.1019 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 43 8) (close _V0loop_k121) (bruijn ##vals.143 2 3))
V_CALL(VGetArg(upenv, 43-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k121, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.146 1 1))) ((bruijn reverse 42 8) (close _V0loop_k120) (bruijn ##xs.142 1 2)) ((bruijn ##k.1017 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 42-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k120, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k125, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.148 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.148 0 0))) ((bruijn ##kk.145 3 1) (bruijn ##k.1009 1 0) (##inline ##sys.cdr (bruijn ##expr.146 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.147 2 0)) (bruijn ##xs.142 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.148 0 0)) (bruijn ##vals.143 6 3))) ((bruijn ##k.1009 1 0) #f)) ((bruijn ##k.1009 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.147 1 0)) ((close _V0loop_k125) (##inline ##sys.cdr (bruijn ##expr.147 1 0))) ((bruijn ##k.1009 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0loop_k125, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k128, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.144 9 1) (bruijn ##k.1004 4 0) (bruijn ##expr.146 7 1) (bruijn ##x.1006 1 0) (bruijn ##x.1007 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k127" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 47 8) (close _V0loop_k128) (bruijn ##vals.143 6 3))
V_CALL(VGetArg(upenv, 47-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k128, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k126" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 46 8) (close _V0loop_k127) (bruijn ##xs.142 5 2))
V_CALL(VGetArg(upenv, 46-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k127, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k123" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k124) (close _V0loop_k126))
V_CALL_FUNC(_V0loop_k124, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k126, env)}));
 }
}
static void _V0loop_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda30, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k123) (##inline ##sys.car (bruijn ##expr.146 3 1)))
V_CALL_FUNC(_V0loop_k123, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 43 9) (bruijn ##k.1003 0 0) (close _V0loop_lambda30))
V_CALL(VGetArg(upenv, 43-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda30, env)}));
 }
}
static void _V0loop_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 42 10) (bruijn ##k.1001 1 0) (close _V0loop_lambda29) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 42-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda29, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda28, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda28, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k119) (close _V0loop_k122))
V_CALL_FUNC(_V0loop_k119, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k122, env)}));
 }
}
static void _V0expand__syntax_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda27" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k118) (bruijn loop 0 0) (close _V0loop_lambda28))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k118, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda28, env)})
    );
 }
}
static void _V0expand__syntax_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda26, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda27) #f)
V_CALL_FUNC(_V0expand__syntax_lambda27, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 38 9) (bruijn ##k.998 0 0) (close _V0expand__syntax_lambda26))
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda26, env)}));
 }
}
static void _V0expand__syntax_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k132" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k132, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 30 1) (bruijn ##k.1021 4 0) (bruijn ##x.1023 0 0))
V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k131" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 40 9) (close _V0expand__syntax_k132) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn xs 3 2) (bruijn ##x.1029 1 0))) (bruijn ##x.1026 0 0)))
V_CALL(VGetArg(upenv, 40-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k132, env)}),
      VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        upenv->up->up->vars[2],
        upenv->vars[0])),
        _var0));
 }
}
static void _V0expand__syntax_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda32, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1027 0 0) #f)
V_CALL(_var0, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k130" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 40 14) (close _V0expand__syntax_k131) (close _V0expand__syntax_lambda32) (bruijn xs 2 2))
V_CALL(VGetArg(upenv, 40-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k131, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda32, env)}),
      upenv->up->vars[2]);
 }
}
static void _V0expand__syntax_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k129" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 39 2) (close _V0expand__syntax_k130) (bruijn ##x.1030 0 0) (##inline ##sys.cdr (bruijn ##expr.140 2 0)))
V_CALL(VGetArg(upenv, 39-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k130, env)}),
      _var0,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0expand__syntax_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda33, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda33, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##k.1031 0 0) (##inline ##sys.cons 'set! (##inline ##sys.cons (bruijn x 0 1) (##inline ##sys.cons (bruijn val 0 2) '()))))
V_CALL(_var0, runtime,
      VInlineCons(
        _V0set_B,
        VInlineCons(
        _var1,
        VInlineCons(
        _var2,
        VNULL))));
 }
}
static void _V0expand__syntax_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__syntax_lambda31, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda31, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 38 14) (close _V0expand__syntax_k129) (close _V0expand__syntax_lambda33) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.1021 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 38-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k129, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda33, env)}),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.140 0 0)) ((bruijn call-with-values 37 10) (bruijn ##k.995 2 0) (close _V0expand__syntax_lambda25) (close _V0expand__syntax_lambda31)) ((bruijn ##k.995 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 37-1, 10), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda25, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda31, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.996 0 0) ((close _V0expand__syntax_k117) (##inline ##sys.cdr (bruijn ##expr.139 2 0))) ((bruijn ##k.995 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k117, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k115" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.139 1 0)) ((bruijn equal? 35 7) (close _V0expand__syntax_k116) 'letrec (##inline ##sys.car (bruijn ##expr.139 1 0))) ((bruijn ##k.995 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 35-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k116, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k136" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k136, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 27 1) (bruijn ##k.989 2 0) (bruijn ##x.991 0 0))
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k135" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.990 0 0) ((bruijn compiler-error 38 15) (close _V0expand__syntax_k136) (##string ##string.1793) (##inline ##sys.cons 'letrec (##inline ##sys.cdr (bruijn ##expr.149 2 0)))) ((bruijn ##k.989 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 38-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k136, env)}),
      VEncodePointer(&_V10string_D1793.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0letrec,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k134" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.149 1 0)) ((bruijn equal? 37 7) (close _V0expand__syntax_k135) 'letrec (##inline ##sys.car (bruijn ##expr.149 1 0))) ((bruijn ##k.989 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 37-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k135, env)}),
      _V0letrec,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k140" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k140, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 29 1) (bruijn ##k.983 2 0) (bruijn ##x.985 0 0))
V_CALL(VGetArg(upenv, 29-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k139" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.984 0 0) ((bruijn expand-syntax 39 9) (close _V0expand__syntax_k140) (##inline ##sys.cons 'letrec (##inline ##sys.cdr (bruijn ##expr.150 2 0)))) ((bruijn ##k.983 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 39-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k140, env)}),
      VInlineCons(
        _V0letrec,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k138" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.150 1 0)) ((bruijn equal? 39 7) (close _V0expand__syntax_k139) 'letrec* (##inline ##sys.car (bruijn ##expr.150 1 0))) ((bruijn ##k.983 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 39-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k139, env)}),
      _V0letrec_S,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k148, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.955 2 0) (##inline ##sys.cdr (bruijn ##expr.153 6 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)),
      VNULL);
 }
}
static void _V0loop_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k150" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k150, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.158 4 1) (bruijn ##k.966 1 0) (bruijn ##expr.160 2 1) (bruijn ##x.967 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.160 1 1))) ((bruijn reverse 51 8) (close _V0loop_k150) (bruijn ##rest.157 1 2)) ((bruijn ##k.966 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 51-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k150, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k153, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.158 7 1) (bruijn ##k.960 2 0) (bruijn ##expr.160 5 1) (bruijn ##x.962 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 54 8) (close _V0loop_k153) (bruijn ##rest.157 4 2))
V_CALL(VGetArg(upenv, 54-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k153, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.159 0 1) (close _V0loop_k152) (##inline ##sys.cdr (bruijn ##expr.160 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.160 3 1)) (bruijn ##rest.157 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k152, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 52 9) (bruijn ##k.959 0 0) (close _V0loop_lambda42))
V_CALL(VGetArg(upenv, 52-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda42, env)}));
 }
}
static void _V0loop_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k151" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 51 10) (bruijn ##k.957 1 0) (close _V0loop_lambda41) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 51-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda41, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda40, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda40, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k149) (close _V0loop_k151))
V_CALL_FUNC(_V0loop_k149, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k151, env)}));
 }
}
static void _V0expand__syntax_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda39" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k148) (bruijn loop 0 0) (close _V0loop_lambda40))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k148, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda40, env)})
    );
 }
}
static void _V0expand__syntax_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda38, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda39) #f)
V_CALL_FUNC(_V0expand__syntax_lambda39, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 47 9) (bruijn ##k.954 0 0) (close _V0expand__syntax_lambda38))
V_CALL(VGetArg(upenv, 47-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda38, env)}));
 }
}
static void _V0expand__syntax_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k154" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k154, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 36 1) (bruijn ##k.969 1 0) (bruijn ##x.971 0 0))
V_CALL(VGetArg(upenv, 36-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda43, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda43, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 46 9) (close _V0expand__syntax_k154) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.154 2 0)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.155 1 0)) '())) '()) (##inline ##sys.cons (##inline ##sys.cons 'let* (##inline ##sys.cons (bruijn rest 0 2) (##inline ##sys.cdr (bruijn ##expr.152 4 0)))) '())))) ((bruijn ##k.969 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 46-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k154, env)}),
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0let_S,
        VInlineCons(
        _var2,
        VInlineCdr(
        upenv->up->up->up->vars[0]))),
        VNULL))));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k147" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.155 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.155 0 0))) ((bruijn call-with-values 46 10) (bruijn ##k.947 5 0) (close _V0expand__syntax_lambda37) (close _V0expand__syntax_lambda43)) ((bruijn ##k.947 5 0) #f)) ((bruijn ##k.947 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 46-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda37, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda43, env)}));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.154 0 0)) ((close _V0expand__syntax_k147) (##inline ##sys.cdr (bruijn ##expr.154 0 0))) ((bruijn ##k.947 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k147, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.153 0 0)) ((close _V0expand__syntax_k146) (##inline ##sys.car (bruijn ##expr.153 0 0))) ((bruijn ##k.947 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k146, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k144" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.152 0 0)) ((close _V0expand__syntax_k145) (##inline ##sys.car (bruijn ##expr.152 0 0))) ((bruijn ##k.947 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k145, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k143" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.948 0 0) ((close _V0expand__syntax_k144) (##inline ##sys.cdr (bruijn ##expr.151 2 0))) ((bruijn ##k.947 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k144, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k142" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.151 1 0)) ((bruijn equal? 41 7) (close _V0expand__syntax_k143) 'let* (##inline ##sys.car (bruijn ##expr.151 1 0))) ((bruijn ##k.947 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 41-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k143, env)}),
      _V0let_S,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k159" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 34 1) (bruijn ##k.938 3 0) (bruijn ##x.942 0 0))
V_CALL(VGetArg(upenv, 34-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.162 0 0)) (if (##inline ##sys.null? (##inline ##sys.car (bruijn ##expr.162 0 0))) ((bruijn expand-syntax 44 9) (close _V0expand__syntax_k159) (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.162 0 0)))) ((bruijn ##k.938 2 0) #f)) ((bruijn ##k.938 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCar(
        _var0)))) {
V_CALL(VGetArg(upenv, 44-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k159, env)}),
      VInlineCons(
        _V0begin,
        VInlineCdr(
        _var0)));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.939 0 0) ((close _V0expand__syntax_k158) (##inline ##sys.cdr (bruijn ##expr.161 2 0))) ((bruijn ##k.938 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k158, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.161 1 0)) ((bruijn equal? 43 7) (close _V0expand__syntax_k157) 'let* (##inline ##sys.car (bruijn ##expr.161 1 0))) ((bruijn ##k.938 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 43-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k157, env)}),
      _V0let_S,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k163, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 35 1) (bruijn ##k.932 2 0) (bruijn ##x.934 0 0))
V_CALL(VGetArg(upenv, 35-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k162" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.933 0 0) ((bruijn compiler-error 46 15) (close _V0expand__syntax_k163) (##string ##string.1794) (##inline ##sys.cons 'let* (##inline ##sys.cdr (bruijn ##expr.163 2 0)))) ((bruijn ##k.932 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 46-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k163, env)}),
      VEncodePointer(&_V10string_D1794.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0let_S,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.163 1 0)) ((bruijn equal? 45 7) (close _V0expand__syntax_k162) 'let* (##inline ##sys.car (bruijn ##expr.163 1 0))) ((bruijn ##k.932 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 45-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k162, env)}),
      _V0let_S,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k168, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 38 1) (bruijn ##k.924 3 0) (bruijn ##x.928 0 0))
V_CALL(VGetArg(upenv, 38-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.165 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.165 0 0))) ((bruijn expand-syntax 48 9) (close _V0expand__syntax_k168) (##inline ##sys.car (bruijn ##expr.165 0 0))) ((bruijn ##k.924 2 0) #f)) ((bruijn ##k.924 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 48-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k168, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.925 0 0) ((close _V0expand__syntax_k167) (##inline ##sys.cdr (bruijn ##expr.164 2 0))) ((bruijn ##k.924 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k167, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.164 1 0)) ((bruijn equal? 47 7) (close _V0expand__syntax_k166) 'begin (##inline ##sys.car (bruijn ##expr.164 1 0))) ((bruijn ##k.924 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 47-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k166, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k175" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 42 1) (bruijn ##k.911 5 0) (##inline ##sys.cons 'begin (##inline ##sys.cons (bruijn ##x.918 1 0) (##inline ##sys.cons (bruijn ##x.920 0 0) '()))))
V_CALL(VGetArg(upenv, 42-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V0begin,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__syntax_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 52 9) (close _V0expand__syntax_k175) (##inline ##sys.car (bruijn ##expr.168 1 0)))
V_CALL(VGetArg(upenv, 52-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k175, env)}),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.168 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.168 0 0))) ((bruijn expand-syntax 51 9) (close _V0expand__syntax_k174) (##inline ##sys.car (bruijn ##expr.167 1 0))) ((bruijn ##k.911 3 0) #f)) ((bruijn ##k.911 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 51-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k174, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.167 0 0)) ((close _V0expand__syntax_k173) (##inline ##sys.cdr (bruijn ##expr.167 0 0))) ((bruijn ##k.911 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k173, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k171" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.912 0 0) ((close _V0expand__syntax_k172) (##inline ##sys.cdr (bruijn ##expr.166 2 0))) ((bruijn ##k.911 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k172, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k170" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.166 1 0)) ((bruijn equal? 49 7) (close _V0expand__syntax_k171) 'begin (##inline ##sys.car (bruijn ##expr.166 1 0))) ((bruijn ##k.911 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 49-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k171, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k180, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 42 1) (bruijn ##k.901 3 0) (bruijn ##x.904 0 0))
V_CALL(VGetArg(upenv, 42-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.170 0 0)) ((bruijn expand-syntax 52 9) (close _V0expand__syntax_k180) (##inline ##sys.cons 'begin (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.170 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.170 0 0))) '())))) ((bruijn ##k.901 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 52-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k180, env)}),
      VInlineCons(
        _V0begin,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0begin,
        VInlineCdr(
        _var0)),
        VNULL))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.902 0 0) ((close _V0expand__syntax_k179) (##inline ##sys.cdr (bruijn ##expr.169 2 0))) ((bruijn ##k.901 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k179, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.169 1 0)) ((bruijn equal? 51 7) (close _V0expand__syntax_k178) 'begin (##inline ##sys.car (bruijn ##expr.169 1 0))) ((bruijn ##k.901 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 51-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k178, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k184" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k184, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 43 1) (bruijn ##k.895 2 0) (bruijn ##x.897 0 0))
V_CALL(VGetArg(upenv, 43-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k183" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.896 0 0) ((bruijn compiler-error 54 15) (close _V0expand__syntax_k184) (##string ##string.1795) (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.171 2 0)))) ((bruijn ##k.895 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 54-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k184, env)}),
      VEncodePointer(&_V10string_D1795.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0begin,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k182" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.171 1 0)) ((bruijn equal? 53 7) (close _V0expand__syntax_k183) 'begin (##inline ##sys.car (bruijn ##expr.171 1 0))) ((bruijn ##k.895 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 53-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k183, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k190" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 47 1) (bruijn ##k.882 4 0) (bruijn ##x.887 0 0))
V_CALL(VGetArg(upenv, 47-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k189" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.174 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.174 0 0))) ((bruijn expand-syntax 57 9) (close _V0expand__syntax_k190) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.173 1 0)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.174 0 0)) (##inline ##sys.cons '#f '()))))) ((bruijn ##k.882 3 0) #f)) ((bruijn ##k.882 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 57-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k190, env)}),
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VEncodeBool(false),
        VNULL)))));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k188" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.173 0 0)) ((close _V0expand__syntax_k189) (##inline ##sys.cdr (bruijn ##expr.173 0 0))) ((bruijn ##k.882 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k189, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k187" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.883 0 0) ((close _V0expand__syntax_k188) (##inline ##sys.cdr (bruijn ##expr.172 2 0))) ((bruijn ##k.882 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k188, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k186" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.172 1 0)) ((bruijn equal? 55 7) (close _V0expand__syntax_k187) 'if (##inline ##sys.car (bruijn ##expr.172 1 0))) ((bruijn ##k.882 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 55-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k187, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k199" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k199, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 52 1) (bruijn ##k.866 7 0) (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn ##x.874 2 0) (##inline ##sys.cons (bruijn ##x.876 1 0) (##inline ##sys.cons (bruijn ##x.878 0 0) '())))))
V_CALL(VGetArg(upenv, 52-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      VInlineCons(
        _V0if,
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL)))));
 }
}
static void _V0expand__syntax_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k198" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 62 9) (close _V0expand__syntax_k199) (##inline ##sys.car (bruijn ##expr.178 2 0)))
V_CALL(VGetArg(upenv, 62-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k199, env)}),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0expand__syntax_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k197" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 61 9) (close _V0expand__syntax_k198) (##inline ##sys.car (bruijn ##expr.177 2 0)))
V_CALL(VGetArg(upenv, 61-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k198, env)}),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0expand__syntax_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k196" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.178 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.178 0 0))) ((bruijn expand-syntax 60 9) (close _V0expand__syntax_k197) (##inline ##sys.car (bruijn ##expr.176 2 0))) ((bruijn ##k.866 4 0) #f)) ((bruijn ##k.866 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 60-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k197, env)}),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.177 0 0)) ((close _V0expand__syntax_k196) (##inline ##sys.cdr (bruijn ##expr.177 0 0))) ((bruijn ##k.866 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k196, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.176 0 0)) ((close _V0expand__syntax_k195) (##inline ##sys.cdr (bruijn ##expr.176 0 0))) ((bruijn ##k.866 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k195, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.867 0 0) ((close _V0expand__syntax_k194) (##inline ##sys.cdr (bruijn ##expr.175 2 0))) ((bruijn ##k.866 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k194, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.175 1 0)) ((bruijn equal? 57 7) (close _V0expand__syntax_k193) 'if (##inline ##sys.car (bruijn ##expr.175 1 0))) ((bruijn ##k.866 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 57-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k193, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k203" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k203, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 49 1) (bruijn ##k.860 2 0) (bruijn ##x.862 0 0))
V_CALL(VGetArg(upenv, 49-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.861 0 0) ((bruijn compiler-error 60 15) (close _V0expand__syntax_k203) (##string ##string.1796) (##inline ##sys.cons 'if (##inline ##sys.cdr (bruijn ##expr.179 2 0)))) ((bruijn ##k.860 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 60-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k203, env)}),
      VEncodePointer(&_V10string_D1796.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0if,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k201" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.179 1 0)) ((bruijn equal? 59 7) (close _V0expand__syntax_k202) 'if (##inline ##sys.car (bruijn ##expr.179 1 0))) ((bruijn ##k.860 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 59-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k202, env)}),
      _V0if,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k206" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k206, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.855 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.180 2 0))) ((bruijn ##kk.113 50 1) (bruijn ##k.854 1 0) #t) ((bruijn ##k.854 1 0) #f)) ((bruijn ##k.854 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 50-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(true));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.180 1 0)) ((bruijn equal? 61 7) (close _V0expand__syntax_k206) 'and (##inline ##sys.car (bruijn ##expr.180 1 0))) ((bruijn ##k.854 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 61-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k206, env)}),
      _V0and,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k211" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k211, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 54 1) (bruijn ##k.846 3 0) (bruijn ##x.850 0 0))
V_CALL(VGetArg(upenv, 54-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.182 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.182 0 0))) ((bruijn expand-syntax 64 9) (close _V0expand__syntax_k211) (##inline ##sys.car (bruijn ##expr.182 0 0))) ((bruijn ##k.846 2 0) #f)) ((bruijn ##k.846 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 64-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k211, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k209" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.847 0 0) ((close _V0expand__syntax_k210) (##inline ##sys.cdr (bruijn ##expr.181 2 0))) ((bruijn ##k.846 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k210, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k208" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.181 1 0)) ((bruijn equal? 63 7) (close _V0expand__syntax_k209) 'and (##inline ##sys.car (bruijn ##expr.181 1 0))) ((bruijn ##k.846 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 63-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k209, env)}),
      _V0and,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 58 1) (bruijn ##k.832 5 0) (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn ##x.839 1 0) (##inline ##sys.cons (bruijn ##x.841 0 0) (##inline ##sys.cons '#f '())))))
V_CALL(VGetArg(upenv, 58-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V0if,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VInlineCons(
        VEncodeBool(false),
        VNULL)))));
 }
}
static void _V0expand__syntax_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 68 9) (close _V0expand__syntax_k218) (##inline ##sys.car (bruijn ##expr.185 1 0)))
V_CALL(VGetArg(upenv, 68-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k218, env)}),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.185 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.185 0 0))) ((bruijn expand-syntax 67 9) (close _V0expand__syntax_k217) (##inline ##sys.car (bruijn ##expr.184 1 0))) ((bruijn ##k.832 3 0) #f)) ((bruijn ##k.832 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 67-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k217, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.184 0 0)) ((close _V0expand__syntax_k216) (##inline ##sys.cdr (bruijn ##expr.184 0 0))) ((bruijn ##k.832 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k216, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k214" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.833 0 0) ((close _V0expand__syntax_k215) (##inline ##sys.cdr (bruijn ##expr.183 2 0))) ((bruijn ##k.832 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k215, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.183 1 0)) ((bruijn equal? 65 7) (close _V0expand__syntax_k214) 'and (##inline ##sys.car (bruijn ##expr.183 1 0))) ((bruijn ##k.832 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 65-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k214, env)}),
      _V0and,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k223" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k223, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 58 1) (bruijn ##k.821 3 0) (bruijn ##x.824 0 0))
V_CALL(VGetArg(upenv, 58-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k222" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.187 0 0)) ((bruijn expand-syntax 68 9) (close _V0expand__syntax_k223) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.187 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'and (##inline ##sys.cdr (bruijn ##expr.187 0 0))) (##inline ##sys.cons '#f '()))))) ((bruijn ##k.821 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 68-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k223, env)}),
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0and,
        VInlineCdr(
        _var0)),
        VInlineCons(
        VEncodeBool(false),
        VNULL)))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k221" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.822 0 0) ((close _V0expand__syntax_k222) (##inline ##sys.cdr (bruijn ##expr.186 2 0))) ((bruijn ##k.821 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k222, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k220" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.186 1 0)) ((bruijn equal? 67 7) (close _V0expand__syntax_k221) 'and (##inline ##sys.car (bruijn ##expr.186 1 0))) ((bruijn ##k.821 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 67-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k221, env)}),
      _V0and,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k226" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k226, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.816 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.188 2 0))) ((bruijn ##kk.113 58 1) (bruijn ##k.815 1 0) #f) ((bruijn ##k.815 1 0) #f)) ((bruijn ##k.815 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 58-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k225" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.188 1 0)) ((bruijn equal? 69 7) (close _V0expand__syntax_k226) 'or (##inline ##sys.car (bruijn ##expr.188 1 0))) ((bruijn ##k.815 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 69-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k226, env)}),
      _V0or,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k231" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 62 1) (bruijn ##k.807 3 0) (bruijn ##x.811 0 0))
V_CALL(VGetArg(upenv, 62-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k230" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.190 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.190 0 0))) ((bruijn expand-syntax 72 9) (close _V0expand__syntax_k231) (##inline ##sys.car (bruijn ##expr.190 0 0))) ((bruijn ##k.807 2 0) #f)) ((bruijn ##k.807 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 72-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k231, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k229" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.808 0 0) ((close _V0expand__syntax_k230) (##inline ##sys.cdr (bruijn ##expr.189 2 0))) ((bruijn ##k.807 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k230, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k228" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.189 1 0)) ((bruijn equal? 71 7) (close _V0expand__syntax_k229) 'or (##inline ##sys.car (bruijn ##expr.189 1 0))) ((bruijn ##k.807 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 71-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k229, env)}),
      _V0or,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k238" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k238, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 66 1) (bruijn ##k.794 5 0) (##inline ##sys.cons 'or (##inline ##sys.cons (bruijn ##x.801 1 0) (##inline ##sys.cons (bruijn ##x.803 0 0) '()))))
V_CALL(VGetArg(upenv, 66-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        _V0or,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__syntax_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k237" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k237, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 76 9) (close _V0expand__syntax_k238) (##inline ##sys.car (bruijn ##expr.193 1 0)))
V_CALL(VGetArg(upenv, 76-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k238, env)}),
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k236" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.193 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.193 0 0))) ((bruijn expand-syntax 75 9) (close _V0expand__syntax_k237) (##inline ##sys.car (bruijn ##expr.192 1 0))) ((bruijn ##k.794 3 0) #f)) ((bruijn ##k.794 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 75-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k237, env)}),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k235" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.192 0 0)) ((close _V0expand__syntax_k236) (##inline ##sys.cdr (bruijn ##expr.192 0 0))) ((bruijn ##k.794 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k236, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k234" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.795 0 0) ((close _V0expand__syntax_k235) (##inline ##sys.cdr (bruijn ##expr.191 2 0))) ((bruijn ##k.794 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k235, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k233" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k233, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.191 1 0)) ((bruijn equal? 73 7) (close _V0expand__syntax_k234) 'or (##inline ##sys.car (bruijn ##expr.191 1 0))) ((bruijn ##k.794 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 73-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k234, env)}),
      _V0or,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k243" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k243, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 66 1) (bruijn ##k.784 3 0) (bruijn ##x.787 0 0))
V_CALL(VGetArg(upenv, 66-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k242" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.195 0 0)) ((bruijn expand-syntax 76 9) (close _V0expand__syntax_k243) (##inline ##sys.cons 'or (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.195 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'or (##inline ##sys.cdr (bruijn ##expr.195 0 0))) '())))) ((bruijn ##k.784 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 76-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k243, env)}),
      VInlineCons(
        _V0or,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0or,
        VInlineCdr(
        _var0)),
        VNULL))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k241" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.785 0 0) ((close _V0expand__syntax_k242) (##inline ##sys.cdr (bruijn ##expr.194 2 0))) ((bruijn ##k.784 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k242, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k240" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.194 1 0)) ((bruijn equal? 75 7) (close _V0expand__syntax_k241) 'or (##inline ##sys.car (bruijn ##expr.194 1 0))) ((bruijn ##k.784 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 75-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k241, env)}),
      _V0or,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k250" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 70 1) (bruijn ##k.772 5 0) (bruijn ##x.778 0 0))
V_CALL(VGetArg(upenv, 70-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k249" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.776 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.197 2 0))) ((bruijn expand-syntax 80 9) (close _V0expand__syntax_k250) (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.198 1 0)))) ((bruijn ##k.772 4 0) #f)) ((bruijn ##k.772 4 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 80-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k250, env)}),
      VInlineCons(
        _V0begin,
        VInlineCdr(
        upenv->vars[0])));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k248" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.198 0 0)) ((bruijn equal? 80 7) (close _V0expand__syntax_k249) 'else (##inline ##sys.car (bruijn ##expr.198 0 0))) ((bruijn ##k.772 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 80-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k249, env)}),
      _V0else,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k247" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.197 0 0)) ((close _V0expand__syntax_k248) (##inline ##sys.car (bruijn ##expr.197 0 0))) ((bruijn ##k.772 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k248, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k246" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.773 0 0) ((close _V0expand__syntax_k247) (##inline ##sys.cdr (bruijn ##expr.196 2 0))) ((bruijn ##k.772 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k247, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k245" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.196 1 0)) ((bruijn equal? 77 7) (close _V0expand__syntax_k246) 'cond (##inline ##sys.car (bruijn ##expr.196 1 0))) ((bruijn ##k.772 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 77-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k246, env)}),
      _V0cond,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k260" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k260, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 75 1) (bruijn ##k.746 8 0) (bruijn ##x.754 0 0))
V_CALL(VGetArg(upenv, 75-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k259" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 85 9) (close _V0expand__syntax_k260) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.201 4 0)) '())) '()) (##inline ##sys.cons (##inline ##sys.cons 'if (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.203 1 0)) (##inline ##sys.cons (bruijn foobar 0 0) '())) (##inline ##sys.cons (##inline ##sys.cons 'cond (##inline ##sys.cdr (bruijn ##expr.200 5 0))) '())))) '()))))
V_CALL(VGetArg(upenv, 85-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k260, env)}),
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCar(
        upenv->up->up->up->vars[0]),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0if,
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCons(
        _var0,
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V0cond,
        VInlineCdr(
        VGetArg(upenv, 5-1, 0))),
        VNULL)))),
        VNULL))));
 }
}
static void _V0expand__syntax_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k258" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.203 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.203 0 0))) ((bruijn gensym 85 3) (close _V0expand__syntax_k259) (##string ##string.1797)) ((bruijn ##k.746 6 0) #f)) ((bruijn ##k.746 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 85-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k259, env)}),
      VEncodePointer(&_V10string_D1797.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k257" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.751 0 0) ((close _V0expand__syntax_k258) (##inline ##sys.cdr (bruijn ##expr.202 1 0))) ((bruijn ##k.746 5 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k258, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k256" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.202 0 0)) ((bruijn equal? 83 7) (close _V0expand__syntax_k257) '=> (##inline ##sys.car (bruijn ##expr.202 0 0))) ((bruijn ##k.746 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 83-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k257, env)}),
      _V0_E_G,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k255" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.201 0 0)) ((close _V0expand__syntax_k256) (##inline ##sys.cdr (bruijn ##expr.201 0 0))) ((bruijn ##k.746 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k256, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k254" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.200 0 0)) ((close _V0expand__syntax_k255) (##inline ##sys.car (bruijn ##expr.200 0 0))) ((bruijn ##k.746 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k255, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k253" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.747 0 0) ((close _V0expand__syntax_k254) (##inline ##sys.cdr (bruijn ##expr.199 2 0))) ((bruijn ##k.746 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k254, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k252" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.199 1 0)) ((bruijn equal? 79 7) (close _V0expand__syntax_k253) 'cond (##inline ##sys.car (bruijn ##expr.199 1 0))) ((bruijn ##k.746 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 79-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k253, env)}),
      _V0cond,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k266" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k266, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 73 1) (bruijn ##k.733 4 0) (bruijn ##x.737 0 0))
V_CALL(VGetArg(upenv, 73-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k265" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k265, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.206 0 0)) ((bruijn expand-syntax 83 9) (close _V0expand__syntax_k266) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.206 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.206 0 0))) (##inline ##sys.cons (##inline ##sys.cons 'cond (##inline ##sys.cdr (bruijn ##expr.205 1 0))) '()))))) ((bruijn ##k.733 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 83-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k266, env)}),
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0begin,
        VInlineCdr(
        _var0)),
        VInlineCons(
        VInlineCons(
        _V0cond,
        VInlineCdr(
        upenv->vars[0])),
        VNULL)))));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k264" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.205 0 0)) ((close _V0expand__syntax_k265) (##inline ##sys.car (bruijn ##expr.205 0 0))) ((bruijn ##k.733 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k265, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k263" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.734 0 0) ((close _V0expand__syntax_k264) (##inline ##sys.cdr (bruijn ##expr.204 2 0))) ((bruijn ##k.733 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k264, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k262" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.204 1 0)) ((bruijn equal? 81 7) (close _V0expand__syntax_k263) 'cond (##inline ##sys.car (bruijn ##expr.204 1 0))) ((bruijn ##k.733 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 81-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k263, env)}),
      _V0cond,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k269" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k269, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.726 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.207 2 0))) ((bruijn ##kk.113 72 1) (bruijn ##k.725 1 0) (##inline ##sys.cons 'error (##inline ##sys.cons '(##string ##string.1798) '()))) ((bruijn ##k.725 1 0) #f)) ((bruijn ##k.725 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 72-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
        _V0error,
        VInlineCons(
        VEncodePointer(&_V10string_D1798.sym, VPOINTER_OTHER),
        VNULL)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k268" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.207 1 0)) ((bruijn equal? 83 7) (close _V0expand__syntax_k269) 'cond (##inline ##sys.car (bruijn ##expr.207 1 0))) ((bruijn ##k.725 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 83-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k269, env)}),
      _V0cond,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k273" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k273, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 75 1) (bruijn ##k.719 2 0) (bruijn ##x.721 0 0))
V_CALL(VGetArg(upenv, 75-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k272" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.720 0 0) ((bruijn compiler-error 86 15) (close _V0expand__syntax_k273) (##string ##string.1799) (##inline ##sys.cons 'cond (##inline ##sys.cdr (bruijn ##expr.208 2 0)))) ((bruijn ##k.719 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 86-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k273, env)}),
      VEncodePointer(&_V10string_D1799.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0cond,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k271" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.208 1 0)) ((bruijn equal? 85 7) (close _V0expand__syntax_k272) 'cond (##inline ##sys.car (bruijn ##expr.208 1 0))) ((bruijn ##k.719 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 85-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k272, env)}),
      _V0cond,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k279" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k279, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 79 1) (bruijn ##k.705 4 0) (bruijn ##x.708 0 0))
V_CALL(VGetArg(upenv, 79-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k278" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 89 9) (close _V0expand__syntax_k279) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.210 1 0)) '())) '()) (##inline ##sys.cons (##inline ##sys.cons 'case-iter (##inline ##sys.cons (bruijn foobar 0 0) (##inline ##sys.cdr (bruijn ##expr.210 1 0)))) '()))))
V_CALL(VGetArg(upenv, 89-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k279, env)}),
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0case__iter,
        VInlineCons(
        _var0,
        VInlineCdr(
        upenv->vars[0]))),
        VNULL))));
 }
}
static void _V0expand__syntax_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k277" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.210 0 0)) ((bruijn gensym 89 3) (close _V0expand__syntax_k278) (##string ##string.1797)) ((bruijn ##k.705 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 89-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k278, env)}),
      VEncodePointer(&_V10string_D1797.sym, VPOINTER_OTHER));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k276" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.706 0 0) ((close _V0expand__syntax_k277) (##inline ##sys.cdr (bruijn ##expr.209 2 0))) ((bruijn ##k.705 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k277, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k275" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.209 1 0)) ((bruijn equal? 87 7) (close _V0expand__syntax_k276) 'case (##inline ##sys.car (bruijn ##expr.209 1 0))) ((bruijn ##k.705 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 87-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k276, env)}),
      _V0case,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k287" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k287, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 83 1) (bruijn ##k.692 6 0) (bruijn ##x.699 0 0))
V_CALL(VGetArg(upenv, 83-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k286" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k286, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.697 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.213 2 0))) ((bruijn expand-syntax 93 9) (close _V0expand__syntax_k287) (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.214 1 0)))) ((bruijn ##k.692 5 0) #f)) ((bruijn ##k.692 5 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 93-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k287, env)}),
      VInlineCons(
        _V0begin,
        VInlineCdr(
        upenv->vars[0])));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k285" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.214 0 0)) ((bruijn equal? 93 7) (close _V0expand__syntax_k286) 'else (##inline ##sys.car (bruijn ##expr.214 0 0))) ((bruijn ##k.692 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 93-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k286, env)}),
      _V0else,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k284" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.213 0 0)) ((close _V0expand__syntax_k285) (##inline ##sys.car (bruijn ##expr.213 0 0))) ((bruijn ##k.692 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k285, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k283" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k283, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.212 0 0)) ((close _V0expand__syntax_k284) (##inline ##sys.cdr (bruijn ##expr.212 0 0))) ((bruijn ##k.692 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k284, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k282" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.693 0 0) ((close _V0expand__syntax_k283) (##inline ##sys.cdr (bruijn ##expr.211 2 0))) ((bruijn ##k.692 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k283, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k281" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.211 1 0)) ((bruijn equal? 89 7) (close _V0expand__syntax_k282) 'case-iter (##inline ##sys.car (bruijn ##expr.211 1 0))) ((bruijn ##k.692 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 89-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k282, env)}),
      _V0case__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k295" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k295, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.659 2 0) (##inline ##sys.car (bruijn ##expr.218 4 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VNULL);
 }
}
static void _V0loop_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k297" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 4 1) (bruijn ##k.670 1 0) (bruijn ##expr.223 2 1) (bruijn ##x.671 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k296" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.223 1 1))) ((bruijn reverse 101 8) (close _V0loop_k297) (bruijn ##toks.220 1 2)) ((bruijn ##k.670 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 101-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k297, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k300" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k300, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.221 7 1) (bruijn ##k.664 2 0) (bruijn ##expr.223 5 1) (bruijn ##x.666 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k299" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 104 8) (close _V0loop_k300) (bruijn ##toks.220 4 2))
V_CALL(VGetArg(upenv, 104-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k300, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda74" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda74, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.222 0 1) (close _V0loop_k299) (##inline ##sys.cdr (bruijn ##expr.223 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.223 3 1)) (bruijn ##toks.220 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k299, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda73" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 102 9) (bruijn ##k.663 0 0) (close _V0loop_lambda74))
V_CALL(VGetArg(upenv, 102-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda74, env)}));
 }
}
static void _V0loop_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k298" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 101 10) (bruijn ##k.661 1 0) (close _V0loop_lambda73) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 101-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda73, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda72, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda72, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k296) (close _V0loop_k298))
V_CALL_FUNC(_V0loop_k296, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k298, env)}));
 }
}
static void _V0expand__syntax_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda71" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k295) (bruijn loop 0 0) (close _V0loop_lambda72))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k295, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda72, env)})
    );
 }
}
static void _V0expand__syntax_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda71) #f)
V_CALL_FUNC(_V0expand__syntax_lambda71, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 97 9) (bruijn ##k.658 0 0) (close _V0expand__syntax_lambda70))
V_CALL(VGetArg(upenv, 97-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda70, env)}));
 }
}
static void _V0expand__syntax_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k302" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k302, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 87 1) (bruijn ##k.673 2 0) (bruijn ##x.675 0 0))
V_CALL(VGetArg(upenv, 87-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k301" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 97 9) (close _V0expand__syntax_k302) (##inline ##sys.cons 'if (##inline ##sys.cons (##inline ##sys.cons 'or (bruijn ##x.684 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'begin (##inline ##sys.cdr (bruijn ##expr.218 2 0))) (##inline ##sys.cons (##inline ##sys.cons 'case-iter (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cdr (bruijn ##expr.217 3 0)))) '())))))
V_CALL(VGetArg(upenv, 97-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k302, env)}),
      VInlineCons(
        _V0if,
        VInlineCons(
        VInlineCons(
        _V0or,
        _var0),
        VInlineCons(
        VInlineCons(
        _V0begin,
        VInlineCdr(
        upenv->up->vars[0])),
        VInlineCons(
        VInlineCons(
        _V0case__iter,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCdr(
        upenv->up->up->vars[0]))),
        VNULL)))));
 }
}
static void _V0expand__syntax_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda76, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.685 0 0) (##inline ##sys.cons 'eqv? (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons (bruijn y 0 1) '())) '()))))
V_CALL(_var0, runtime,
      VInlineCons(
        _V0eqv_Q,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        _var1,
        VNULL)),
        VNULL))));
 }
}
static void _V0expand__syntax_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda75" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda75, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda75, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 97 14) (close _V0expand__syntax_k301) (close _V0expand__syntax_lambda76) (bruijn toks 0 2)) ((bruijn ##k.673 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 97-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k301, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda76, env)}),
      _var2);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k294" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.218 0 0)) ((bruijn call-with-values 96 10) (bruijn ##k.653 5 0) (close _V0expand__syntax_lambda69) (close _V0expand__syntax_lambda75)) ((bruijn ##k.653 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 96-1, 10), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda69, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda75, env)}));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k293" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.217 0 0)) ((close _V0expand__syntax_k294) (##inline ##sys.car (bruijn ##expr.217 0 0))) ((bruijn ##k.653 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k294, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k292" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k292, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k293) (##inline ##sys.cdr (bruijn ##expr.216 1 0)))
V_CALL_FUNC(_V0expand__syntax_k293, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k291" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k291, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.216 0 0)) ((close _V0expand__syntax_k292) (##inline ##sys.car (bruijn ##expr.216 0 0))) ((bruijn ##k.653 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k292, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k290" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.654 0 0) ((close _V0expand__syntax_k291) (##inline ##sys.cdr (bruijn ##expr.215 2 0))) ((bruijn ##k.653 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k291, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k289" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.215 1 0)) ((bruijn equal? 91 7) (close _V0expand__syntax_k290) 'case-iter (##inline ##sys.car (bruijn ##expr.215 1 0))) ((bruijn ##k.653 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 91-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k290, env)}),
      _V0case__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k306" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k306, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.225 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.225 0 0))) ((bruijn ##kk.113 83 1) (bruijn ##k.644 2 0) (##inline ##sys.cons 'error (##inline ##sys.cons '(##string ##string.1800) '()))) ((bruijn ##k.644 2 0) #f)) ((bruijn ##k.644 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 83-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V0error,
        VInlineCons(
        VEncodePointer(&_V10string_D1800.sym, VPOINTER_OTHER),
        VNULL)));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k305" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.645 0 0) ((close _V0expand__syntax_k306) (##inline ##sys.cdr (bruijn ##expr.224 2 0))) ((bruijn ##k.644 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k306, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k304" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.224 1 0)) ((bruijn equal? 93 7) (close _V0expand__syntax_k305) 'case-iter (##inline ##sys.car (bruijn ##expr.224 1 0))) ((bruijn ##k.644 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 93-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k305, env)}),
      _V0case__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k311" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k311, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 86 1) (bruijn ##k.634 3 0) (bruijn ##x.637 0 0))
V_CALL(VGetArg(upenv, 86-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k310" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.227 0 0)) ((bruijn expand-syntax 96 9) (close _V0expand__syntax_k311) (##inline ##sys.cons 'cut-iter (##inline ##sys.cons '() (##inline ##sys.cons '() (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.227 0 0)) (##inline ##sys.cdr (bruijn ##expr.227 0 0))))))) ((bruijn ##k.634 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 96-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k311, env)}),
      VInlineCons(
        _V0cut__iter,
        VInlineCons(
        VNULL,
        VInlineCons(
        VNULL,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCdr(
        _var0))))));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k309" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.635 0 0) ((close _V0expand__syntax_k310) (##inline ##sys.cdr (bruijn ##expr.226 2 0))) ((bruijn ##k.634 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k310, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k308" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k308, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.226 1 0)) ((bruijn equal? 95 7) (close _V0expand__syntax_k309) 'cut (##inline ##sys.car (bruijn ##expr.226 1 0))) ((bruijn ##k.634 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 95-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k309, env)}),
      _V0cut,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k320" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k320, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 92 1) (bruijn ##k.618 7 0) (bruijn ##x.624 0 0))
V_CALL(VGetArg(upenv, 92-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k319" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 102 9) (close _V0expand__syntax_k320) (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn ##x.627 1 0) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.231 2 0)) (bruijn ##x.630 0 0)) '()))))
V_CALL(VGetArg(upenv, 102-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k320, env)}),
      VInlineCons(
        _V0lambda,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        _var0),
        VNULL))));
 }
}
static void _V0expand__syntax_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k318" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 102 8) (close _V0expand__syntax_k319) (##inline ##sys.car (bruijn ##expr.230 2 0)))
V_CALL(VGetArg(upenv, 102-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k319, env)}),
      VInlineCar(
        upenv->up->vars[0]));
 }
}
static void _V0expand__syntax_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k317" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.231 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.231 0 0))) ((bruijn reverse 101 8) (close _V0expand__syntax_k318) (##inline ##sys.car (bruijn ##expr.229 2 0))) ((bruijn ##k.618 4 0) #f)) ((bruijn ##k.618 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 101-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k318, env)}),
      VInlineCar(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k316" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.230 0 0)) ((close _V0expand__syntax_k317) (##inline ##sys.cdr (bruijn ##expr.230 0 0))) ((bruijn ##k.618 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k317, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k315" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.229 0 0)) ((close _V0expand__syntax_k316) (##inline ##sys.cdr (bruijn ##expr.229 0 0))) ((bruijn ##k.618 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k316, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k314" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k314, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.619 0 0) ((close _V0expand__syntax_k315) (##inline ##sys.cdr (bruijn ##expr.228 2 0))) ((bruijn ##k.618 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k315, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k313" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.228 1 0)) ((bruijn equal? 97 7) (close _V0expand__syntax_k314) 'cut-iter (##inline ##sys.car (bruijn ##expr.228 1 0))) ((bruijn ##k.618 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 97-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k314, env)}),
      _V0cut__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k330" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k330, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 95 1) (bruijn ##k.601 8 0) (bruijn ##x.608 0 0))
V_CALL(VGetArg(upenv, 95-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k329" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k329, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 105 9) (close _V0expand__syntax_k330) (##inline ##sys.cons 'cut-iter (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 0) (##inline ##sys.car (bruijn ##expr.233 5 0))) (##inline ##sys.cons (##inline ##sys.cons (bruijn x 0 0) (##inline ##sys.car (bruijn ##expr.234 4 0))) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.235 3 0)) (##inline ##sys.cdr (bruijn ##expr.236 2 0)))))))
V_CALL(VGetArg(upenv, 105-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k330, env)}),
      VInlineCons(
        _V0cut__iter,
        VInlineCons(
        VInlineCons(
        _var0,
        VInlineCar(
        VGetArg(upenv, 5-1, 0))),
        VInlineCons(
        VInlineCons(
        _var0,
        VInlineCar(
        upenv->up->up->up->vars[0])),
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCdr(
        upenv->up->vars[0]))))));
 }
}
static void _V0expand__syntax_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k328" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.607 0 0) ((bruijn gensym 105 3) (close _V0expand__syntax_k329) (##string ##string.1797)) ((bruijn ##k.601 6 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 105-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k329, env)}),
      VEncodePointer(&_V10string_D1797.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k327" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k327, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.236 0 0)) ((bruijn equal? 104 7) (close _V0expand__syntax_k328) '<> (##inline ##sys.car (bruijn ##expr.236 0 0))) ((bruijn ##k.601 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 104-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k328, env)}),
      _V0_L_G,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k326" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.235 0 0)) ((close _V0expand__syntax_k327) (##inline ##sys.cdr (bruijn ##expr.235 0 0))) ((bruijn ##k.601 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k327, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k325" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.234 0 0)) ((close _V0expand__syntax_k326) (##inline ##sys.cdr (bruijn ##expr.234 0 0))) ((bruijn ##k.601 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k326, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k324" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k324, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.233 0 0)) ((close _V0expand__syntax_k325) (##inline ##sys.cdr (bruijn ##expr.233 0 0))) ((bruijn ##k.601 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k325, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k323" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.602 0 0) ((close _V0expand__syntax_k324) (##inline ##sys.cdr (bruijn ##expr.232 2 0))) ((bruijn ##k.601 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k324, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k322" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.232 1 0)) ((bruijn equal? 99 7) (close _V0expand__syntax_k323) 'cut-iter (##inline ##sys.car (bruijn ##expr.232 1 0))) ((bruijn ##k.601 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 99-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k323, env)}),
      _V0cut__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k339" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k339, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 96 1) (bruijn ##k.588 7 0) (bruijn ##x.596 0 0))
V_CALL(VGetArg(upenv, 96-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k338" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.594 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.241 1 0))) ((bruijn compiler-error 107 15) (close _V0expand__syntax_k339) (##string ##string.1801)) ((bruijn ##k.588 6 0) #f)) ((bruijn ##k.588 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 107-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k339, env)}),
      VEncodePointer(&_V10string_D1801.sym, VPOINTER_OTHER));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k337" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.241 0 0)) ((bruijn equal? 106 7) (close _V0expand__syntax_k338) '<...> (##inline ##sys.car (bruijn ##expr.241 0 0))) ((bruijn ##k.588 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 106-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k338, env)}),
      _V0_L_D_D_D_G,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k336" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k336, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.240 0 0)) ((close _V0expand__syntax_k337) (##inline ##sys.cdr (bruijn ##expr.240 0 0))) ((bruijn ##k.588 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k337, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k335" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.239 0 0)) ((close _V0expand__syntax_k336) (##inline ##sys.cdr (bruijn ##expr.239 0 0))) ((bruijn ##k.588 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k336, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k334" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.238 0 0)) ((close _V0expand__syntax_k335) (##inline ##sys.cdr (bruijn ##expr.238 0 0))) ((bruijn ##k.588 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k335, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k333" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.589 0 0) ((close _V0expand__syntax_k334) (##inline ##sys.cdr (bruijn ##expr.237 2 0))) ((bruijn ##k.588 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k334, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k332" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k332, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.237 1 0)) ((bruijn equal? 101 7) (close _V0expand__syntax_k333) 'cut-iter (##inline ##sys.car (bruijn ##expr.237 1 0))) ((bruijn ##k.588 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 101-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k333, env)}),
      _V0cut__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k347" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k347, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 97 1) (bruijn ##k.574 6 0) (bruijn ##x.580 0 0))
V_CALL(VGetArg(upenv, 97-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k346" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.246 0 0)) ((bruijn expand-syntax 107 9) (close _V0expand__syntax_k347) (##inline ##sys.cons 'cut-iter (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.243 3 0)) (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.246 0 0)) (##inline ##sys.car (bruijn ##expr.244 2 0))) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.245 1 0)) (##inline ##sys.cdr (bruijn ##expr.246 0 0))))))) ((bruijn ##k.574 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 107-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k347, env)}),
      VInlineCons(
        _V0cut__iter,
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VInlineCons(
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCar(
        upenv->up->vars[0])),
        VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCdr(
        _var0))))));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k345" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k345, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.245 0 0)) ((close _V0expand__syntax_k346) (##inline ##sys.cdr (bruijn ##expr.245 0 0))) ((bruijn ##k.574 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k346, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k344" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k344, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.244 0 0)) ((close _V0expand__syntax_k345) (##inline ##sys.cdr (bruijn ##expr.244 0 0))) ((bruijn ##k.574 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k345, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k343" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.243 0 0)) ((close _V0expand__syntax_k344) (##inline ##sys.cdr (bruijn ##expr.243 0 0))) ((bruijn ##k.574 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k344, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k342" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.575 0 0) ((close _V0expand__syntax_k343) (##inline ##sys.cdr (bruijn ##expr.242 2 0))) ((bruijn ##k.574 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k343, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k341" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.242 1 0)) ((bruijn equal? 103 7) (close _V0expand__syntax_k342) 'cut-iter (##inline ##sys.car (bruijn ##expr.242 1 0))) ((bruijn ##k.574 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 103-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k342, env)}),
      _V0cut__iter,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k351" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k351, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 95 1) (bruijn ##k.568 2 0) (bruijn ##x.570 0 0))
V_CALL(VGetArg(upenv, 95-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k350" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.569 0 0) ((bruijn compiler-error 106 15) (close _V0expand__syntax_k351) (##string ##string.1802) (##inline ##sys.cons 'cut (##inline ##sys.cdr (bruijn ##expr.247 2 0)))) ((bruijn ##k.568 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 106-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k351, env)}),
      VEncodePointer(&_V10string_D1802.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0cut,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k349" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.247 1 0)) ((bruijn equal? 105 7) (close _V0expand__syntax_k350) 'cut (##inline ##sys.car (bruijn ##expr.247 1 0))) ((bruijn ##k.568 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 105-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k350, env)}),
      _V0cut,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k361" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k361, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.531 1 0) (##inline ##sys.cons 'set! (##inline ##sys.cons (bruijn y 5 0) (##inline ##sys.cons (bruijn ##x.534 0 0) '()))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        _V0set_B,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__syntax_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k363" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k363, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.544 2 0) (##inline ##sys.cdr (bruijn ##expr.273 5 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL);
 }
}
static void _V0loop_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k365" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.276 4 1) (bruijn ##k.555 1 0) (bruijn ##expr.278 2 1) (bruijn ##x.556 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k364" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.278 1 1))) ((bruijn reverse 122 8) (close _V0loop_k365) (bruijn ##arg.275 1 2)) ((bruijn ##k.555 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 122-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k365, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k368" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k368, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.276 7 1) (bruijn ##k.549 2 0) (bruijn ##expr.278 5 1) (bruijn ##x.551 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k367" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 125 8) (close _V0loop_k368) (bruijn ##arg.275 4 2))
V_CALL(VGetArg(upenv, 125-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k368, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda92, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.277 0 1) (close _V0loop_k367) (##inline ##sys.cdr (bruijn ##expr.278 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.278 3 1)) (bruijn ##arg.275 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k367, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda91" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 123 9) (bruijn ##k.548 0 0) (close _V0loop_lambda92))
V_CALL(VGetArg(upenv, 123-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda92, env)}));
 }
}
static void _V0loop_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k366" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 122 10) (bruijn ##k.546 1 0) (close _V0loop_lambda91) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 122-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda91, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda90" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda90, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda90, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k364) (close _V0loop_k366))
V_CALL_FUNC(_V0loop_k364, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k366, env)}));
 }
}
static void _V0expand__syntax_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda89" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k363) (bruijn loop 0 0) (close _V0loop_lambda90))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k363, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda90, env)})
    );
 }
}
static void _V0expand__syntax_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda88, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda89) #f)
V_CALL_FUNC(_V0expand__syntax_lambda89, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda87" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 118 9) (bruijn ##k.543 0 0) (close _V0expand__syntax_lambda88))
V_CALL(VGetArg(upenv, 118-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda88, env)}));
 }
}
static void _V0expand__syntax_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k369" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k369, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.271 4 1) (bruijn ##k.558 1 0) (##inline ##sys.cons (##inline ##sys.cons '##vcore.setter (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.273 3 0)) '())) (bruijn ##x.562 0 0)))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCons(
        VInlineCons(
        _V10vcore_Dsetter,
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VNULL)),
        _var0));
 }
}
static void _V0expand__syntax_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda93" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda93, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn append 118 2) (close _V0expand__syntax_k369) (bruijn arg 0 2) (##inline ##sys.cons (bruijn x 6 0) '())) ((bruijn ##k.558 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 118-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k369, env)}),
      _var2,
      VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VNULL));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k362" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.273 1 0)) ((bruijn call-with-values 117 10) (bruijn ##k.542 0 0) (close _V0expand__syntax_lambda87) (close _V0expand__syntax_lambda93)) ((bruijn ##k.542 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 117-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda87, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda93, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k371" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.271 3 1) (bruijn ##k.535 3 0) (bruijn ##x.537 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k370" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k370, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 117 15) (close _V0expand__syntax_k371) (##string ##string.1803) (##inline ##sys.cons 'set! (##inline ##sys.cons (bruijn y 7 0) (##inline ##sys.cons (bruijn x 5 0) '()))))
V_CALL(VGetArg(upenv, 117-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k371, env)}),
      VEncodePointer(&_V10string_D1803.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0set_B,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VNULL))));
 }
}
static void _V0expand__syntax_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda86" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k362) (close _V0expand__syntax_k370))
V_CALL_FUNC(_V0expand__syntax_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k370, env)}));
 }
}
static void _V0expand__syntax_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda85" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda85, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda86) (bruijn y 5 0))
V_CALL_FUNC(_V0expand__syntax_lambda86, env, runtime,
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V0expand__syntax_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k360" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.530 1 0) ((bruijn expand-syntax 113 9) (close _V0expand__syntax_k361) (bruijn x 2 0)) ((bruijn call/cc 114 9) (bruijn ##k.531 0 0) (close _V0expand__syntax_lambda85)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 113-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k361, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 114-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda85, env)}));
}
 }
}
static void _V0expand__syntax_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k372" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k372, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 102 1) (bruijn ##k.524 7 0) (bruijn ##x.529 0 0))
V_CALL(VGetArg(upenv, 102-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0expand__syntax_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k359" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k359, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k360) (close _V0expand__syntax_k372))
V_CALL_FUNC(_V0expand__syntax_k360, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k372, env)}));
 }
}
static void _V0expand__syntax_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k358" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.250 1 0))) ((bruijn symbol? 112 13) (close _V0expand__syntax_k359) (bruijn y 2 0)) ((bruijn ##k.524 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 112-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k359, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k357" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.250 0 0)) ((close _V0expand__syntax_k358) (##inline ##sys.car (bruijn ##expr.250 0 0))) ((bruijn ##k.524 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k358, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k356" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k356, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k357) (##inline ##sys.cdr (bruijn ##expr.249 1 0)))
V_CALL_FUNC(_V0expand__syntax_k357, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k355" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.249 0 0)) ((close _V0expand__syntax_k356) (##inline ##sys.car (bruijn ##expr.249 0 0))) ((bruijn ##k.524 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k356, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k354" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.525 0 0) ((close _V0expand__syntax_k355) (##inline ##sys.cdr (bruijn ##expr.248 2 0))) ((bruijn ##k.524 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k355, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k353" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.248 1 0)) ((bruijn equal? 107 7) (close _V0expand__syntax_k354) 'set! (##inline ##sys.car (bruijn ##expr.248 1 0))) ((bruijn ##k.524 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 107-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k354, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k382" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k382, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.460 2 0) (##inline ##sys.cdr (bruijn ##expr.254 5 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL);
 }
}
static void _V0loop_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k384" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k384, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 4 1) (bruijn ##k.471 1 0) (bruijn ##expr.259 2 1) (bruijn ##x.472 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k383" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.259 1 1))) ((bruijn reverse 121 8) (close _V0loop_k384) (bruijn ##xs.256 1 2)) ((bruijn ##k.471 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 121-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k384, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k387" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k387, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.257 7 1) (bruijn ##k.465 2 0) (bruijn ##expr.259 5 1) (bruijn ##x.467 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k386" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k386, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 124 8) (close _V0loop_k387) (bruijn ##xs.256 4 2))
V_CALL(VGetArg(upenv, 124-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k387, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda100" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda100, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda100, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.258 0 1) (close _V0loop_k386) (##inline ##sys.cdr (bruijn ##expr.259 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.259 3 1)) (bruijn ##xs.256 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k386, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda99" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 122 9) (bruijn ##k.464 0 0) (close _V0loop_lambda100))
V_CALL(VGetArg(upenv, 122-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda100, env)}));
 }
}
static void _V0loop_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k385" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 121 10) (bruijn ##k.462 1 0) (close _V0loop_lambda99) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 121-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda99, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda98" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k383) (close _V0loop_k385))
V_CALL_FUNC(_V0loop_k383, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k385, env)}));
 }
}
static void _V0expand__syntax_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda97" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k382) (bruijn loop 0 0) (close _V0loop_lambda98))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k382, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda98, env)})
    );
 }
}
static void _V0expand__syntax_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda96" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda97) #f)
V_CALL_FUNC(_V0expand__syntax_lambda97, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda95" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 117 9) (bruijn ##k.459 0 0) (close _V0expand__syntax_lambda96))
V_CALL(VGetArg(upenv, 117-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda96, env)}));
 }
}
static void _V0expand__syntax_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k391" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k391, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.494 2 0) (##inline ##sys.cdr (bruijn ##expr.281 5 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)),
      VNULL);
 }
}
static void _V0loop_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k393" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k393, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.284 4 1) (bruijn ##k.505 1 0) (bruijn ##expr.286 2 1) (bruijn ##x.506 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k392" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k392, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.286 1 1))) ((bruijn reverse 127 8) (close _V0loop_k393) (bruijn ##arg.283 1 2)) ((bruijn ##k.505 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 127-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k393, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k396" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k396, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.284 7 1) (bruijn ##k.499 2 0) (bruijn ##expr.286 5 1) (bruijn ##x.501 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k395" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 130 8) (close _V0loop_k396) (bruijn ##arg.283 4 2))
V_CALL(VGetArg(upenv, 130-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k396, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda109" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.285 0 1) (close _V0loop_k395) (##inline ##sys.cdr (bruijn ##expr.286 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.286 3 1)) (bruijn ##arg.283 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k395, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda108" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 128 9) (bruijn ##k.498 0 0) (close _V0loop_lambda109))
V_CALL(VGetArg(upenv, 128-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda109, env)}));
 }
}
static void _V0loop_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k394" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 127 10) (bruijn ##k.496 1 0) (close _V0loop_lambda108) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 127-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda108, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda107" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda107, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda107, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k392) (close _V0loop_k394))
V_CALL_FUNC(_V0loop_k392, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k394, env)}));
 }
}
static void _V0expand__syntax_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda106" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k391) (bruijn loop 0 0) (close _V0loop_lambda107))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k391, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda107, env)})
    );
 }
}
static void _V0expand__syntax_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda105, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda106) #f)
V_CALL_FUNC(_V0expand__syntax_lambda106, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda104" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 123 9) (bruijn ##k.493 0 0) (close _V0expand__syntax_lambda105))
V_CALL(VGetArg(upenv, 123-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda105, env)}));
 }
}
static void _V0expand__syntax_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k398" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k398, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.279 5 1) (bruijn ##k.508 2 0) (##inline ##sys.cons (##inline ##sys.cons '##vcore.mutator (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.281 4 0)) '())) (bruijn ##x.512 0 0)))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        VInlineCons(
        _V10vcore_Dmutator,
        VInlineCons(
        VInlineCar(
        upenv->up->up->up->vars[0]),
        VNULL)),
        _var0));
 }
}
static void _V0expand__syntax_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k397" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 124 2) (close _V0expand__syntax_k398) (bruijn arg 1 2) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cons (bruijn val 0 0) '()) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 12 0) (##inline ##sys.cons (bruijn val 0 0) (##inline ##sys.cons (bruijn x 8 0) (bruijn xs 7 2)))) '()))) '()))
V_CALL(VGetArg(upenv, 124-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k398, env)}),
      upenv->vars[2],
      VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCons(
        _var0,
        VNULL),
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 12-1, 0),
        VInlineCons(
        _var0,
        VInlineCons(
        VGetArg(upenv, 8-1, 0),
        VGetArg(upenv, 7-1, 2)))),
        VNULL))),
        VNULL));
 }
}
static void _V0expand__syntax_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda110, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda110, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn gensym 123 3) (close _V0expand__syntax_k397) (##string ##string.1804)) ((bruijn ##k.508 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 123-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k397, env)}),
      VEncodePointer(&_V10string_D1804.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k390" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.281 1 0)) ((bruijn call-with-values 122 10) (bruijn ##k.492 0 0) (close _V0expand__syntax_lambda104) (close _V0expand__syntax_lambda110)) ((bruijn ##k.492 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 122-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda104, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda110, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k400" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k400, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.279 3 1) (bruijn ##k.484 3 0) (bruijn ##x.486 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k399" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k399, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 122 15) (close _V0expand__syntax_k400) (##string ##string.1803) (##inline ##sys.cons 'set! (##inline ##sys.cons (bruijn f 10 0) (##inline ##sys.cons (bruijn y 8 0) (##inline ##sys.cons (bruijn x 6 0) (bruijn xs 5 2))))))
V_CALL(VGetArg(upenv, 122-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k400, env)}),
      VEncodePointer(&_V10string_D1803.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0set_B,
        VInlineCons(
        VGetArg(upenv, 10-1, 0),
        VInlineCons(
        VGetArg(upenv, 8-1, 0),
        VInlineCons(
        VGetArg(upenv, 6-1, 0),
        VGetArg(upenv, 5-1, 2))))));
 }
}
static void _V0expand__syntax_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda103" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k390) (close _V0expand__syntax_k399))
V_CALL_FUNC(_V0expand__syntax_k390, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k399, env)}));
 }
}
static void _V0expand__syntax_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda102, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda103) (bruijn y 6 0))
V_CALL_FUNC(_V0expand__syntax_lambda103, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0expand__syntax_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k389" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.477 1 0) ((bruijn ##k.478 0 0) (##inline ##sys.cons 'set! (##inline ##sys.cons (bruijn y 5 0) (##inline ##sys.cons (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn y 5 0) (##inline ##sys.cons (bruijn x 3 0) (bruijn xs 2 2)))) '())))) ((bruijn call/cc 119 9) (bruijn ##k.478 0 0) (close _V0expand__syntax_lambda102)))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      VInlineCons(
        _V0set_B,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        upenv->up->up->vars[0],
        upenv->up->vars[2]))),
        VNULL))));
} else {
V_CALL(VGetArg(upenv, 119-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda102, env)}));
}
 }
}
static void _V0expand__syntax_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k401" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 107 1) (bruijn ##k.474 2 0) (bruijn ##x.476 0 0))
V_CALL(VGetArg(upenv, 107-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k388" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k389) (close _V0expand__syntax_k401))
V_CALL_FUNC(_V0expand__syntax_k389, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k401, env)}));
 }
}
static void _V0expand__syntax_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda101" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda101, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda101, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn symbol? 117 13) (close _V0expand__syntax_k388) (bruijn y 3 0)) ((bruijn ##k.474 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 117-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k388, env)}),
      upenv->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k381" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 116 10) (bruijn ##k.454 7 0) (close _V0expand__syntax_lambda95) (close _V0expand__syntax_lambda101))
V_CALL(VGetArg(upenv, 116-1, 10), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda95, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda101, env)}));
 }
}
static void _V0expand__syntax_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k380" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.254 0 0)) ((close _V0expand__syntax_k381) (##inline ##sys.car (bruijn ##expr.254 0 0))) ((bruijn ##k.454 6 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k381, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k379" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k379, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k380) (##inline ##sys.cdr (bruijn ##expr.253 1 0)))
V_CALL_FUNC(_V0expand__syntax_k380, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k378" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.253 0 0)) ((close _V0expand__syntax_k379) (##inline ##sys.car (bruijn ##expr.253 0 0))) ((bruijn ##k.454 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k379, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k377" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k378) (##inline ##sys.cdr (bruijn ##expr.252 1 0)))
V_CALL_FUNC(_V0expand__syntax_k378, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__syntax_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k376" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.252 0 0)) ((close _V0expand__syntax_k377) (##inline ##sys.car (bruijn ##expr.252 0 0))) ((bruijn ##k.454 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__syntax_k377, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k375" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.455 0 0) ((close _V0expand__syntax_k376) (##inline ##sys.cdr (bruijn ##expr.251 2 0))) ((bruijn ##k.454 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__syntax_k376, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k374" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.251 1 0)) ((bruijn equal? 109 7) (close _V0expand__syntax_k375) 'set! (##inline ##sys.car (bruijn ##expr.251 1 0))) ((bruijn ##k.454 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 109-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k375, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k405" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k405, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 101 1) (bruijn ##k.448 2 0) (bruijn ##x.450 0 0))
V_CALL(VGetArg(upenv, 101-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k404" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k404, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.449 0 0) ((bruijn compiler-error 112 15) (close _V0expand__syntax_k405) (##string ##string.1803) (##inline ##sys.cons 'set! (##inline ##sys.cdr (bruijn ##expr.260 2 0)))) ((bruijn ##k.448 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 112-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k405, env)}),
      VEncodePointer(&_V10string_D1803.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0set_B,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k403" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.260 1 0)) ((bruijn equal? 111 7) (close _V0expand__syntax_k404) 'set! (##inline ##sys.car (bruijn ##expr.260 1 0))) ((bruijn ##k.448 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 111-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k404, env)}),
      _V0set_B,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k409" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k409, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 103 1) (bruijn ##k.442 2 0) (bruijn ##x.444 0 0))
V_CALL(VGetArg(upenv, 103-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k408" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k408, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.443 0 0) ((bruijn compiler-error 114 15) (close _V0expand__syntax_k409) (##string ##string.1805) (##inline ##sys.cons 'define (##inline ##sys.cdr (bruijn ##expr.261 2 0)))) ((bruijn ##k.442 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 114-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k409, env)}),
      VEncodePointer(&_V10string_D1805.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0define,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k407" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.261 1 0)) ((bruijn equal? 113 7) (close _V0expand__syntax_k408) 'define (##inline ##sys.car (bruijn ##expr.261 1 0))) ((bruijn ##k.442 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 113-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k408, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k414" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k414, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 106 1) (bruijn ##k.435 3 0) (bruijn ##x.437 0 0))
V_CALL(VGetArg(upenv, 106-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k413" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 116 9) (close _V0expand__syntax_k414) (bruijn ##x.438 0 0))
V_CALL(VGetArg(upenv, 116-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k414, env)}),
      _var0);
 }
}
static void _V0expand__syntax_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k412" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.436 0 0) ((bruijn transform-match 116 5) (close _V0expand__syntax_k413) (##inline ##sys.cons 'match (##inline ##sys.cdr (bruijn ##expr.262 2 0))) (bruijn eqv? 116 4)) ((bruijn ##k.435 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 116-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k413, env)}),
      VInlineCons(
        _V0match,
        VInlineCdr(
        upenv->up->vars[0])),
      VGetArg(upenv, 116-1, 4));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k411" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.262 1 0)) ((bruijn equal? 115 7) (close _V0expand__syntax_k412) 'match (##inline ##sys.car (bruijn ##expr.262 1 0))) ((bruijn ##k.435 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 115-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k412, env)}),
      _V0match,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k418" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k418, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 107 1) (bruijn ##k.430 2 0) (bruijn ##x.432 0 0))
V_CALL(VGetArg(upenv, 107-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k417" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.431 0 0) ((bruijn validate-foreign-function 118 6) (close _V0expand__syntax_k418) (bruijn expr 107 1)) ((bruijn ##k.430 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 118-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k418, env)}),
      VGetArg(upenv, 107-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k416" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.263 1 0)) ((bruijn equal? 117 7) (close _V0expand__syntax_k417) '##foreign.function (##inline ##sys.car (bruijn ##expr.263 1 0))) ((bruijn ##k.430 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 117-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k417, env)}),
      _V10foreign_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k422" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.404 2 0) (##inline ##sys.cdr (bruijn ##expr.264 6 0)) '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)),
      VNULL);
 }
}
static void _V0loop_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k424" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k424, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.267 4 1) (bruijn ##k.415 1 0) (bruijn ##expr.269 2 1) (bruijn ##x.416 0 0))
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0loop_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k423" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.269 1 1))) ((bruijn reverse 125 8) (close _V0loop_k424) (bruijn ##args.266 1 2)) ((bruijn ##k.415 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 125-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k424, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k427" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k427, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.267 7 1) (bruijn ##k.409 2 0) (bruijn ##expr.269 5 1) (bruijn ##x.411 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V0loop_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k426" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 128 8) (close _V0loop_k427) (bruijn ##args.266 4 2))
V_CALL(VGetArg(upenv, 128-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k427, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0loop_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda121" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda121, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda121, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##kk.268 0 1) (close _V0loop_k426) (##inline ##sys.cdr (bruijn ##expr.269 3 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.269 3 1)) (bruijn ##args.266 3 2)))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k426, env)}),
      VInlineCdr(
        upenv->up->up->vars[1]),
      VInlineCons(
        VInlineCar(
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V0loop_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda120" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 126 9) (bruijn ##k.408 0 0) (close _V0loop_lambda121))
V_CALL(VGetArg(upenv, 126-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda121, env)}));
 }
}
static void _V0loop_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k425" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 125 10) (bruijn ##k.406 1 0) (close _V0loop_lambda120) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 125-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda120, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda119" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda119, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda119, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0loop_k423) (close _V0loop_k425))
V_CALL_FUNC(_V0loop_k423, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k425, env)}));
 }
}
static void _V0expand__syntax_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda118" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__syntax_k422) (bruijn loop 0 0) (close _V0loop_lambda119))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k422, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda119, env)})
    );
 }
}
static void _V0expand__syntax_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda117" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda117, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda118) #f)
V_CALL_FUNC(_V0expand__syntax_lambda118, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__syntax_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda116" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 121 9) (bruijn ##k.403 0 0) (close _V0expand__syntax_lambda117))
V_CALL(VGetArg(upenv, 121-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda117, env)}));
 }
}
static void _V0expand__syntax_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k430" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k430, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 124 12) (bruijn ##k.427 1 0) (bruijn ##x.428 0 0))
V_CALL(VGetArg(upenv, 124-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k429" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k429, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.426 1 0) ((bruijn symbol? 123 13) (close _V0expand__syntax_k430) (bruijn f 3 0)) ((bruijn ##k.427 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 123-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k430, env)}),
      upenv->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k432" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k432, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.424 1 0) ((bruijn compiler-error 124 15) (bruijn ##k.425 0 0) (##string ##string.1806) (bruijn f 4 0)) ((bruijn ##k.425 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 124-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1806.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k435" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k435, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 114 1) (bruijn ##k.418 5 0) (##inline ##sys.cons (bruijn ##x.422 1 0) (bruijn ##x.423 0 0)))
V_CALL(VGetArg(upenv, 114-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VInlineCons(
        upenv->vars[0],
        _var0));
 }
}
static void _V0expand__syntax_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k434" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k434, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 125 14) (close _V0expand__syntax_k435) (bruijn expand-syntax 124 9) (bruijn args 4 2))
V_CALL(VGetArg(upenv, 125-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k435, env)}),
      VGetArg(upenv, 124-1, 9),
      upenv->up->up->up->vars[2]);
 }
}
static void _V0expand__syntax_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k433" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 123 9) (close _V0expand__syntax_k434) (bruijn f 4 0))
V_CALL(VGetArg(upenv, 123-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k434, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__syntax_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k431" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k432) (close _V0expand__syntax_k433))
V_CALL_FUNC(_V0expand__syntax_k432, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k433, env)}));
 }
}
static void _V0expand__syntax_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k428" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k428, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k429) (close _V0expand__syntax_k431))
V_CALL_FUNC(_V0expand__syntax_k429, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k431, env)}));
 }
}
static void _V0expand__syntax_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda122" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__syntax_lambda122, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda122, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn atom? 121 11) (close _V0expand__syntax_k428) (bruijn f 1 0)) ((bruijn ##k.418 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 121-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k428, env)}),
      upenv->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k421" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 120 10) (bruijn ##k.402 1 0) (close _V0expand__syntax_lambda116) (close _V0expand__syntax_lambda122))
V_CALL(VGetArg(upenv, 120-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda116, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda122, env)}));
 }
}
static void _V0expand__syntax_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k420" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.264 1 0)) ((close _V0expand__syntax_k421) (##inline ##sys.car (bruijn ##expr.264 1 0))) ((bruijn ##k.402 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0expand__syntax_k421, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k438" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k438, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 110 1) (bruijn ##k.398 1 0) (bruijn ##x.399 0 0))
V_CALL(VGetArg(upenv, 110-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k437" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k437, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.270 1 0)) ((bruijn compiler-error 121 15) (close _V0expand__syntax_k438) (##string ##string.1807) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.270 1 0)) (##inline ##sys.cdr (bruijn ##expr.270 1 0)))) ((bruijn ##k.398 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 121-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k438, env)}),
      VEncodePointer(&_V10string_D1807.sym, VPOINTER_OTHER),
      VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VInlineCdr(
        upenv->vars[0])));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k441" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k441, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 111 1) (bruijn ##k.395 1 0) (bruijn ##x.396 0 0))
V_CALL(VGetArg(upenv, 111-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__syntax_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k440" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (bruijn ##input.114 109 0)) ((bruijn compiler-error 122 15) (close _V0expand__syntax_k441) (##string ##string.1808) '()) ((bruijn ##k.395 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        VGetArg(upenv, 109-1, 0)))) {
V_CALL(VGetArg(upenv, 122-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k441, env)}),
      VEncodePointer(&_V10string_D1808.sym, VPOINTER_OTHER),
      VNULL);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__syntax_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k442" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k442, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.113 110 1) (bruijn ##k.338 110 0) (bruijn expr 111 1))
V_CALL(VGetArg(upenv, 110-1, 1), runtime,
      VGetArg(upenv, 110-1, 0),
      VGetArg(upenv, 111-1, 1));
 }
}
static void _V0expand__syntax_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k439" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k439, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k440) (close _V0expand__syntax_k442))
V_CALL_FUNC(_V0expand__syntax_k440, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k442, env)}));
 }
}
static void _V0expand__syntax_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda123" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k437) (close _V0expand__syntax_k439))
V_CALL_FUNC(_V0expand__syntax_k437, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k439, env)}));
 }
}
static void _V0expand__syntax_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k436" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda123) (bruijn ##input.114 106 0))
V_CALL_FUNC(_V0expand__syntax_lambda123, env, runtime,
      VGetArg(upenv, 106-1, 0));
 }
}
static void _V0expand__syntax_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda115" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k420) (close _V0expand__syntax_k436))
V_CALL_FUNC(_V0expand__syntax_k420, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k436, env)}));
 }
}
static void _V0expand__syntax_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k419" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k419, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda115) (bruijn ##input.114 104 0))
V_CALL_FUNC(_V0expand__syntax_lambda115, env, runtime,
      VGetArg(upenv, 104-1, 0));
 }
}
static void _V0expand__syntax_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda114" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k416) (close _V0expand__syntax_k419))
V_CALL_FUNC(_V0expand__syntax_k416, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k419, env)}));
 }
}
static void _V0expand__syntax_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k415" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k415, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda114) (bruijn ##input.114 102 0))
V_CALL_FUNC(_V0expand__syntax_lambda114, env, runtime,
      VGetArg(upenv, 102-1, 0));
 }
}
static void _V0expand__syntax_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda113" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k411) (close _V0expand__syntax_k415))
V_CALL_FUNC(_V0expand__syntax_k411, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k415, env)}));
 }
}
static void _V0expand__syntax_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k410" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda113) (bruijn ##input.114 100 0))
V_CALL_FUNC(_V0expand__syntax_lambda113, env, runtime,
      VGetArg(upenv, 100-1, 0));
 }
}
static void _V0expand__syntax_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda112" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k407) (close _V0expand__syntax_k410))
V_CALL_FUNC(_V0expand__syntax_k407, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k410, env)}));
 }
}
static void _V0expand__syntax_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k406" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda112) (bruijn ##input.114 98 0))
V_CALL_FUNC(_V0expand__syntax_lambda112, env, runtime,
      VGetArg(upenv, 98-1, 0));
 }
}
static void _V0expand__syntax_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda111" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k403) (close _V0expand__syntax_k406))
V_CALL_FUNC(_V0expand__syntax_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k406, env)}));
 }
}
static void _V0expand__syntax_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k402" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda111) (bruijn ##input.114 96 0))
V_CALL_FUNC(_V0expand__syntax_lambda111, env, runtime,
      VGetArg(upenv, 96-1, 0));
 }
}
static void _V0expand__syntax_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda94" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k374) (close _V0expand__syntax_k402))
V_CALL_FUNC(_V0expand__syntax_k374, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k402, env)}));
 }
}
static void _V0expand__syntax_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k373" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k373, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda94) (bruijn ##input.114 94 0))
V_CALL_FUNC(_V0expand__syntax_lambda94, env, runtime,
      VGetArg(upenv, 94-1, 0));
 }
}
static void _V0expand__syntax_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda84" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k353) (close _V0expand__syntax_k373))
V_CALL_FUNC(_V0expand__syntax_k353, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k373, env)}));
 }
}
static void _V0expand__syntax_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k352" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k352, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda84) (bruijn ##input.114 92 0))
V_CALL_FUNC(_V0expand__syntax_lambda84, env, runtime,
      VGetArg(upenv, 92-1, 0));
 }
}
static void _V0expand__syntax_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda83" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k349) (close _V0expand__syntax_k352))
V_CALL_FUNC(_V0expand__syntax_k349, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k352, env)}));
 }
}
static void _V0expand__syntax_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k348" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda83) (bruijn ##input.114 90 0))
V_CALL_FUNC(_V0expand__syntax_lambda83, env, runtime,
      VGetArg(upenv, 90-1, 0));
 }
}
static void _V0expand__syntax_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda82" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k341) (close _V0expand__syntax_k348))
V_CALL_FUNC(_V0expand__syntax_k341, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k348, env)}));
 }
}
static void _V0expand__syntax_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k340" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda82) (bruijn ##input.114 88 0))
V_CALL_FUNC(_V0expand__syntax_lambda82, env, runtime,
      VGetArg(upenv, 88-1, 0));
 }
}
static void _V0expand__syntax_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda81" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k332) (close _V0expand__syntax_k340))
V_CALL_FUNC(_V0expand__syntax_k332, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k340, env)}));
 }
}
static void _V0expand__syntax_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k331" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda81) (bruijn ##input.114 86 0))
V_CALL_FUNC(_V0expand__syntax_lambda81, env, runtime,
      VGetArg(upenv, 86-1, 0));
 }
}
static void _V0expand__syntax_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda80" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k322) (close _V0expand__syntax_k331))
V_CALL_FUNC(_V0expand__syntax_k322, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k331, env)}));
 }
}
static void _V0expand__syntax_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k321" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda80) (bruijn ##input.114 84 0))
V_CALL_FUNC(_V0expand__syntax_lambda80, env, runtime,
      VGetArg(upenv, 84-1, 0));
 }
}
static void _V0expand__syntax_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda79" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k313) (close _V0expand__syntax_k321))
V_CALL_FUNC(_V0expand__syntax_k313, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k321, env)}));
 }
}
static void _V0expand__syntax_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k312" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda79) (bruijn ##input.114 82 0))
V_CALL_FUNC(_V0expand__syntax_lambda79, env, runtime,
      VGetArg(upenv, 82-1, 0));
 }
}
static void _V0expand__syntax_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda78" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k308) (close _V0expand__syntax_k312))
V_CALL_FUNC(_V0expand__syntax_k308, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k312, env)}));
 }
}
static void _V0expand__syntax_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k307" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda78) (bruijn ##input.114 80 0))
V_CALL_FUNC(_V0expand__syntax_lambda78, env, runtime,
      VGetArg(upenv, 80-1, 0));
 }
}
static void _V0expand__syntax_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda77" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k304) (close _V0expand__syntax_k307))
V_CALL_FUNC(_V0expand__syntax_k304, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k307, env)}));
 }
}
static void _V0expand__syntax_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k303" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k303, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda77) (bruijn ##input.114 78 0))
V_CALL_FUNC(_V0expand__syntax_lambda77, env, runtime,
      VGetArg(upenv, 78-1, 0));
 }
}
static void _V0expand__syntax_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda68" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k289) (close _V0expand__syntax_k303))
V_CALL_FUNC(_V0expand__syntax_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k303, env)}));
 }
}
static void _V0expand__syntax_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k288" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda68) (bruijn ##input.114 76 0))
V_CALL_FUNC(_V0expand__syntax_lambda68, env, runtime,
      VGetArg(upenv, 76-1, 0));
 }
}
static void _V0expand__syntax_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda67" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k281) (close _V0expand__syntax_k288))
V_CALL_FUNC(_V0expand__syntax_k281, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k288, env)}));
 }
}
static void _V0expand__syntax_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k280" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda67) (bruijn ##input.114 74 0))
V_CALL_FUNC(_V0expand__syntax_lambda67, env, runtime,
      VGetArg(upenv, 74-1, 0));
 }
}
static void _V0expand__syntax_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda66" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k275) (close _V0expand__syntax_k280))
V_CALL_FUNC(_V0expand__syntax_k275, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k280, env)}));
 }
}
static void _V0expand__syntax_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k274" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda66) (bruijn ##input.114 72 0))
V_CALL_FUNC(_V0expand__syntax_lambda66, env, runtime,
      VGetArg(upenv, 72-1, 0));
 }
}
static void _V0expand__syntax_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda65" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k271) (close _V0expand__syntax_k274))
V_CALL_FUNC(_V0expand__syntax_k271, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k274, env)}));
 }
}
static void _V0expand__syntax_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k270" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda65) (bruijn ##input.114 70 0))
V_CALL_FUNC(_V0expand__syntax_lambda65, env, runtime,
      VGetArg(upenv, 70-1, 0));
 }
}
static void _V0expand__syntax_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda64" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k268) (close _V0expand__syntax_k270))
V_CALL_FUNC(_V0expand__syntax_k268, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k270, env)}));
 }
}
static void _V0expand__syntax_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k267" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda64) (bruijn ##input.114 68 0))
V_CALL_FUNC(_V0expand__syntax_lambda64, env, runtime,
      VGetArg(upenv, 68-1, 0));
 }
}
static void _V0expand__syntax_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda63" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k262) (close _V0expand__syntax_k267))
V_CALL_FUNC(_V0expand__syntax_k262, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k267, env)}));
 }
}
static void _V0expand__syntax_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k261" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda63) (bruijn ##input.114 66 0))
V_CALL_FUNC(_V0expand__syntax_lambda63, env, runtime,
      VGetArg(upenv, 66-1, 0));
 }
}
static void _V0expand__syntax_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda62" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k252) (close _V0expand__syntax_k261))
V_CALL_FUNC(_V0expand__syntax_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k261, env)}));
 }
}
static void _V0expand__syntax_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k251" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda62) (bruijn ##input.114 64 0))
V_CALL_FUNC(_V0expand__syntax_lambda62, env, runtime,
      VGetArg(upenv, 64-1, 0));
 }
}
static void _V0expand__syntax_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda61" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k245) (close _V0expand__syntax_k251))
V_CALL_FUNC(_V0expand__syntax_k245, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k251, env)}));
 }
}
static void _V0expand__syntax_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k244" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k244, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda61) (bruijn ##input.114 62 0))
V_CALL_FUNC(_V0expand__syntax_lambda61, env, runtime,
      VGetArg(upenv, 62-1, 0));
 }
}
static void _V0expand__syntax_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda60" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k240) (close _V0expand__syntax_k244))
V_CALL_FUNC(_V0expand__syntax_k240, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k244, env)}));
 }
}
static void _V0expand__syntax_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k239" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda60) (bruijn ##input.114 60 0))
V_CALL_FUNC(_V0expand__syntax_lambda60, env, runtime,
      VGetArg(upenv, 60-1, 0));
 }
}
static void _V0expand__syntax_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda59" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k233) (close _V0expand__syntax_k239))
V_CALL_FUNC(_V0expand__syntax_k233, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k239, env)}));
 }
}
static void _V0expand__syntax_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k232" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda59) (bruijn ##input.114 58 0))
V_CALL_FUNC(_V0expand__syntax_lambda59, env, runtime,
      VGetArg(upenv, 58-1, 0));
 }
}
static void _V0expand__syntax_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda58" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k228) (close _V0expand__syntax_k232))
V_CALL_FUNC(_V0expand__syntax_k228, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k232, env)}));
 }
}
static void _V0expand__syntax_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k227" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda58) (bruijn ##input.114 56 0))
V_CALL_FUNC(_V0expand__syntax_lambda58, env, runtime,
      VGetArg(upenv, 56-1, 0));
 }
}
static void _V0expand__syntax_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda57" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k225) (close _V0expand__syntax_k227))
V_CALL_FUNC(_V0expand__syntax_k225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k227, env)}));
 }
}
static void _V0expand__syntax_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k224" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda57) (bruijn ##input.114 54 0))
V_CALL_FUNC(_V0expand__syntax_lambda57, env, runtime,
      VGetArg(upenv, 54-1, 0));
 }
}
static void _V0expand__syntax_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda56" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k220) (close _V0expand__syntax_k224))
V_CALL_FUNC(_V0expand__syntax_k220, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k224, env)}));
 }
}
static void _V0expand__syntax_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k219" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k219, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda56) (bruijn ##input.114 52 0))
V_CALL_FUNC(_V0expand__syntax_lambda56, env, runtime,
      VGetArg(upenv, 52-1, 0));
 }
}
static void _V0expand__syntax_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda55" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k213) (close _V0expand__syntax_k219))
V_CALL_FUNC(_V0expand__syntax_k213, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k219, env)}));
 }
}
static void _V0expand__syntax_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda55) (bruijn ##input.114 50 0))
V_CALL_FUNC(_V0expand__syntax_lambda55, env, runtime,
      VGetArg(upenv, 50-1, 0));
 }
}
static void _V0expand__syntax_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda54" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k208) (close _V0expand__syntax_k212))
V_CALL_FUNC(_V0expand__syntax_k208, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k212, env)}));
 }
}
static void _V0expand__syntax_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k207" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda54) (bruijn ##input.114 48 0))
V_CALL_FUNC(_V0expand__syntax_lambda54, env, runtime,
      VGetArg(upenv, 48-1, 0));
 }
}
static void _V0expand__syntax_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda53" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k205) (close _V0expand__syntax_k207))
V_CALL_FUNC(_V0expand__syntax_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k207, env)}));
 }
}
static void _V0expand__syntax_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda53) (bruijn ##input.114 46 0))
V_CALL_FUNC(_V0expand__syntax_lambda53, env, runtime,
      VGetArg(upenv, 46-1, 0));
 }
}
static void _V0expand__syntax_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda52" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k201) (close _V0expand__syntax_k204))
V_CALL_FUNC(_V0expand__syntax_k201, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k204, env)}));
 }
}
static void _V0expand__syntax_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k200" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda52) (bruijn ##input.114 44 0))
V_CALL_FUNC(_V0expand__syntax_lambda52, env, runtime,
      VGetArg(upenv, 44-1, 0));
 }
}
static void _V0expand__syntax_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda51" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k192) (close _V0expand__syntax_k200))
V_CALL_FUNC(_V0expand__syntax_k192, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k200, env)}));
 }
}
static void _V0expand__syntax_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda51) (bruijn ##input.114 42 0))
V_CALL_FUNC(_V0expand__syntax_lambda51, env, runtime,
      VGetArg(upenv, 42-1, 0));
 }
}
static void _V0expand__syntax_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda50" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k186) (close _V0expand__syntax_k191))
V_CALL_FUNC(_V0expand__syntax_k186, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k191, env)}));
 }
}
static void _V0expand__syntax_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda50) (bruijn ##input.114 40 0))
V_CALL_FUNC(_V0expand__syntax_lambda50, env, runtime,
      VGetArg(upenv, 40-1, 0));
 }
}
static void _V0expand__syntax_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda49" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k182) (close _V0expand__syntax_k185))
V_CALL_FUNC(_V0expand__syntax_k182, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k185, env)}));
 }
}
static void _V0expand__syntax_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda49) (bruijn ##input.114 38 0))
V_CALL_FUNC(_V0expand__syntax_lambda49, env, runtime,
      VGetArg(upenv, 38-1, 0));
 }
}
static void _V0expand__syntax_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda48" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k177) (close _V0expand__syntax_k181))
V_CALL_FUNC(_V0expand__syntax_k177, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k181, env)}));
 }
}
static void _V0expand__syntax_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k176, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda48) (bruijn ##input.114 36 0))
V_CALL_FUNC(_V0expand__syntax_lambda48, env, runtime,
      VGetArg(upenv, 36-1, 0));
 }
}
static void _V0expand__syntax_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda47" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k170) (close _V0expand__syntax_k176))
V_CALL_FUNC(_V0expand__syntax_k170, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k176, env)}));
 }
}
static void _V0expand__syntax_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k169" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda47) (bruijn ##input.114 34 0))
V_CALL_FUNC(_V0expand__syntax_lambda47, env, runtime,
      VGetArg(upenv, 34-1, 0));
 }
}
static void _V0expand__syntax_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda46" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k165) (close _V0expand__syntax_k169))
V_CALL_FUNC(_V0expand__syntax_k165, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k169, env)}));
 }
}
static void _V0expand__syntax_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda46) (bruijn ##input.114 32 0))
V_CALL_FUNC(_V0expand__syntax_lambda46, env, runtime,
      VGetArg(upenv, 32-1, 0));
 }
}
static void _V0expand__syntax_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda45" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k161) (close _V0expand__syntax_k164))
V_CALL_FUNC(_V0expand__syntax_k161, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k164, env)}));
 }
}
static void _V0expand__syntax_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda45) (bruijn ##input.114 30 0))
V_CALL_FUNC(_V0expand__syntax_lambda45, env, runtime,
      VGetArg(upenv, 30-1, 0));
 }
}
static void _V0expand__syntax_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda44" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k156) (close _V0expand__syntax_k160))
V_CALL_FUNC(_V0expand__syntax_k156, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k160, env)}));
 }
}
static void _V0expand__syntax_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k155, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda44) (bruijn ##input.114 28 0))
V_CALL_FUNC(_V0expand__syntax_lambda44, env, runtime,
      VGetArg(upenv, 28-1, 0));
 }
}
static void _V0expand__syntax_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda36" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k142) (close _V0expand__syntax_k155))
V_CALL_FUNC(_V0expand__syntax_k142, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k155, env)}));
 }
}
static void _V0expand__syntax_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k141" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda36) (bruijn ##input.114 26 0))
V_CALL_FUNC(_V0expand__syntax_lambda36, env, runtime,
      VGetArg(upenv, 26-1, 0));
 }
}
static void _V0expand__syntax_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda35" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k138) (close _V0expand__syntax_k141))
V_CALL_FUNC(_V0expand__syntax_k138, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k141, env)}));
 }
}
static void _V0expand__syntax_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda35) (bruijn ##input.114 24 0))
V_CALL_FUNC(_V0expand__syntax_lambda35, env, runtime,
      VGetArg(upenv, 24-1, 0));
 }
}
static void _V0expand__syntax_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda34" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k134) (close _V0expand__syntax_k137))
V_CALL_FUNC(_V0expand__syntax_k134, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k137, env)}));
 }
}
static void _V0expand__syntax_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k133" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda34) (bruijn ##input.114 22 0))
V_CALL_FUNC(_V0expand__syntax_lambda34, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V0expand__syntax_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda24" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k115) (close _V0expand__syntax_k133))
V_CALL_FUNC(_V0expand__syntax_k115, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k133, env)}));
 }
}
static void _V0expand__syntax_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k114" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda24) (bruijn ##input.114 20 0))
V_CALL_FUNC(_V0expand__syntax_lambda24, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0expand__syntax_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda23" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k111) (close _V0expand__syntax_k114))
V_CALL_FUNC(_V0expand__syntax_k111, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k114, env)}));
 }
}
static void _V0expand__syntax_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k110" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda23) (bruijn ##input.114 18 0))
V_CALL_FUNC(_V0expand__syntax_lambda23, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0expand__syntax_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda22" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k106) (close _V0expand__syntax_k110))
V_CALL_FUNC(_V0expand__syntax_k106, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k110, env)}));
 }
}
static void _V0expand__syntax_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k105" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda22) (bruijn ##input.114 16 0))
V_CALL_FUNC(_V0expand__syntax_lambda22, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0expand__syntax_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda21" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k98) (close _V0expand__syntax_k105))
V_CALL_FUNC(_V0expand__syntax_k98, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k105, env)}));
 }
}
static void _V0expand__syntax_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k97" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda21) (bruijn ##input.114 14 0))
V_CALL_FUNC(_V0expand__syntax_lambda21, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0expand__syntax_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda20" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k93) (close _V0expand__syntax_k97))
V_CALL_FUNC(_V0expand__syntax_k93, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k97, env)}));
 }
}
static void _V0expand__syntax_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k92" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda20) (bruijn ##input.114 12 0))
V_CALL_FUNC(_V0expand__syntax_lambda20, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0expand__syntax_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda19" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k89) (close _V0expand__syntax_k92))
V_CALL_FUNC(_V0expand__syntax_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k92, env)}));
 }
}
static void _V0expand__syntax_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k88" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda19) (bruijn ##input.114 10 0))
V_CALL_FUNC(_V0expand__syntax_lambda19, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0expand__syntax_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda18" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k83) (close _V0expand__syntax_k88))
V_CALL_FUNC(_V0expand__syntax_k83, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k88, env)}));
 }
}
static void _V0expand__syntax_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k82" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda18) (bruijn ##input.114 8 0))
V_CALL_FUNC(_V0expand__syntax_lambda18, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0expand__syntax_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda17" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k77) (close _V0expand__syntax_k82))
V_CALL_FUNC(_V0expand__syntax_k77, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k82, env)}));
 }
}
static void _V0expand__syntax_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k76" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda17) (bruijn ##input.114 6 0))
V_CALL_FUNC(_V0expand__syntax_lambda17, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0expand__syntax_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda16" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k73) (close _V0expand__syntax_k76))
V_CALL_FUNC(_V0expand__syntax_k73, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k76, env)}));
 }
}
static void _V0expand__syntax_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k72" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda16) (bruijn ##input.114 4 0))
V_CALL_FUNC(_V0expand__syntax_lambda16, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__syntax_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda8" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k63) (close _V0expand__syntax_k72))
V_CALL_FUNC(_V0expand__syntax_k63, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k72, env)}));
 }
}
static void _V0expand__syntax_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__syntax_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda8) (bruijn ##input.114 2 0))
V_CALL_FUNC(_V0expand__syntax_lambda8, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__syntax_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda7" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_k57) (close _V0expand__syntax_k62))
V_CALL_FUNC(_V0expand__syntax_k57, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_k62, env)}));
 }
}
static void _V0expand__syntax_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda6" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__syntax_lambda7) (bruijn ##input.114 0 0))
V_CALL_FUNC(_V0expand__syntax_lambda7, env, runtime,
      _var0);
 }
}
static void _V0expand__syntax_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__syntax_lambda6) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__syntax_lambda6, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__syntax_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__syntax_lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__syntax_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__syntax_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 11 9) (bruijn ##k.337 0 0) (close _V0expand__syntax_lambda5))
V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda5, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k56) (bruijn expand-syntax 9 9) (close _V0expand__syntax_lambda4))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k56, env)}),
      VEncodeInt(9l), VEncodeInt(9l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__syntax_lambda4, env)})
    );
 }
}
static void _V0expand__toplevel_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k446" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k446, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 6 1) (bruijn ##k.1289 3 0) (bruijn ##x.1291 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k445" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k445, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 16 16) (close _V0expand__toplevel_k446) (bruijn append 16 2) (bruijn ##x.1292 0 0))
V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k446, env)}),
      VGetArg(upenv, 16-1, 2),
      _var0);
 }
}
static void _V0expand__toplevel_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda128" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn expand-toplevel 15 8) (bruijn ##k.1293 0 0) (bruijn e 0 1) (bruijn paths 6 2))
V_CALL(VGetArg(upenv, 15-1, 8), runtime,
      _var0,
      _var1,
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V0expand__toplevel_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k444" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1290 0 0) ((bruijn map 15 14) (close _V0expand__toplevel_k445) (close _V0expand__toplevel_lambda128) (##inline ##sys.cdr (bruijn ##expr.86 2 0))) ((bruijn ##k.1289 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 15-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k445, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda128, env)}),
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k443" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.86 1 0)) ((bruijn equal? 14 7) (close _V0expand__toplevel_k444) 'begin (##inline ##sys.car (bruijn ##expr.86 1 0))) ((bruijn ##k.1289 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 14-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k444, env)}),
      _V0begin,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k452" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k452, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 9 1) (bruijn ##k.1280 4 0) (bruijn ##x.1283 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k451" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k451, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 19 20) (close _V0expand__toplevel_k452) (bruijn ##x.1284 0 0))
V_CALL(VGetArg(upenv, 19-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k452, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k450" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.88 0 0)) ((bruijn expand-library 17 2) (close _V0expand__toplevel_k451) (##inline ##sys.cons 'define-library (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.88 0 0)) (##inline ##sys.cdr (bruijn ##expr.88 0 0)))) (bruijn paths 8 2)) ((bruijn ##k.1280 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 17-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k451, env)}),
      VInlineCons(
        _V0define__library,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCdr(
        _var0))),
      VGetArg(upenv, 8-1, 2));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k449" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1281 0 0) ((close _V0expand__toplevel_k450) (##inline ##sys.cdr (bruijn ##expr.87 2 0))) ((bruijn ##k.1280 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k450, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k448" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.87 1 0)) ((bruijn equal? 16 7) (close _V0expand__toplevel_k449) 'define-library (##inline ##sys.car (bruijn ##expr.87 1 0))) ((bruijn ##k.1280 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 16-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k449, env)}),
      _V0define__library,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k456" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k456, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 9 1) (bruijn ##k.1274 2 0) (bruijn ##x.1276 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k455" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1275 0 0) ((bruijn compiler-error 19 15) (close _V0expand__toplevel_k456) (##string ##string.1809) (##inline ##sys.cons 'define-library (##inline ##sys.cdr (bruijn ##expr.89 2 0)))) ((bruijn ##k.1274 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k456, env)}),
      VEncodePointer(&_V10string_D1809.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0define__library,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k454" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.89 1 0)) ((bruijn equal? 18 7) (close _V0expand__toplevel_k455) 'define-library (##inline ##sys.car (bruijn ##expr.89 1 0))) ((bruijn ##k.1274 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 18-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k455, env)}),
      _V0define__library,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k459" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k459, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1269 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.90 2 0))) ((bruijn ##kk.84 10 1) (bruijn ##k.1268 1 0) '()) ((bruijn ##k.1268 1 0) #f)) ((bruijn ##k.1268 1 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VNULL);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k458" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.90 1 0)) ((bruijn equal? 20 7) (close _V0expand__toplevel_k459) 'import (##inline ##sys.car (bruijn ##expr.90 1 0))) ((bruijn ##k.1268 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k459, env)}),
      _V0import,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k466" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k466, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 16 1) (bruijn ##k.1255 5 0) (bruijn ##x.1258 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0expand__toplevel_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k465" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 26 0) (close _V0expand__toplevel_k466) (##inline ##sys.cons '##vcore.multidefine (##inline ##sys.cons (##inline ##sys.cons '##vcore.load-library (##inline ##sys.cons (bruijn ##x.1265 1 0) '())) '())) (bruijn ##x.1260 0 0))
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k466, env)}),
      VInlineCons(
        _V10vcore_Dmultidefine,
        VInlineCons(
        VInlineCons(
        _V10vcore_Dload__library,
        VInlineCons(
        upenv->vars[0],
        VNULL)),
        VNULL)),
      _var0);
 }
}
static void _V0expand__toplevel_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k464" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k464, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-toplevel 24 8) (close _V0expand__toplevel_k465) (##inline ##sys.cons 'import (##inline ##sys.cdr (bruijn ##expr.92 1 0))) (bruijn paths 15 2))
V_CALL(VGetArg(upenv, 24-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k465, env)}),
      VInlineCons(
        _V0import,
        VInlineCdr(
        upenv->vars[0])),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V0expand__toplevel_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k463" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.92 0 0)) ((bruijn mangle-library 24 17) (close _V0expand__toplevel_k464) (##inline ##sys.car (bruijn ##expr.92 0 0))) ((bruijn ##k.1255 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 24-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k464, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k462" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1256 0 0) ((close _V0expand__toplevel_k463) (##inline ##sys.cdr (bruijn ##expr.91 2 0))) ((bruijn ##k.1255 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k463, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k461" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k461, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.91 1 0)) ((bruijn equal? 22 7) (close _V0expand__toplevel_k462) 'import (##inline ##sys.car (bruijn ##expr.91 1 0))) ((bruijn ##k.1255 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 22-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k462, env)}),
      _V0import,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k472" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k472, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 17 1) (bruijn ##k.1243 4 0) (bruijn ##x.1247 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k471" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.95 0 0)) ((bruijn expand-define 26 7) (close _V0expand__toplevel_k472) (##inline ##sys.cons 'define (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.95 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.95 0 0)) (##inline ##sys.cdr (bruijn ##expr.94 1 0)))) '())))) ((bruijn ##k.1243 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k472, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCdr(
        _var0),
        VInlineCdr(
        upenv->vars[0]))),
        VNULL))));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k470" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k470, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.94 0 0)) ((close _V0expand__toplevel_k471) (##inline ##sys.car (bruijn ##expr.94 0 0))) ((bruijn ##k.1243 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k471, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k469" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1244 0 0) ((close _V0expand__toplevel_k470) (##inline ##sys.cdr (bruijn ##expr.93 2 0))) ((bruijn ##k.1243 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k470, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k468" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.93 1 0)) ((bruijn equal? 24 7) (close _V0expand__toplevel_k469) 'define (##inline ##sys.car (bruijn ##expr.93 1 0))) ((bruijn ##k.1243 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 24-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k469, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k481" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k481, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1237 1 0) ((bruijn compiler-error 33 15) (bruijn ##k.1238 0 0) (##string ##string.1810) (bruijn x 4 0)) ((bruijn ##k.1238 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 33-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k484" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k484, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 24 1) (bruijn ##k.1226 9 0) (bruijn ##x.1231 0 0))
V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0expand__toplevel_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k483" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 34 20) (close _V0expand__toplevel_k484) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn x 5 0) (##inline ##sys.cons (bruijn ##x.1236 0 0) '()))))
V_CALL(VGetArg(upenv, 34-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k484, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__toplevel_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k482" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 32 9) (close _V0expand__toplevel_k483) (##inline ##sys.car (bruijn ##expr.98 3 0)))
V_CALL(VGetArg(upenv, 32-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k483, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0expand__toplevel_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k480" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k481) (close _V0expand__toplevel_k482))
V_CALL_FUNC(_V0expand__toplevel_k481, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k482, env)}));
 }
}
static void _V0expand__toplevel_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k479" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 31 12) (close _V0expand__toplevel_k480) (bruijn ##x.1239 0 0))
V_CALL(VGetArg(upenv, 31-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k480, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k478" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.98 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.98 0 0))) ((bruijn symbol? 30 13) (close _V0expand__toplevel_k479) (bruijn x 1 0)) ((bruijn ##k.1226 4 0) #f)) ((bruijn ##k.1226 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 30-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k479, env)}),
      upenv->vars[0]);
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k477" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k478) (##inline ##sys.cdr (bruijn ##expr.97 1 0)))
V_CALL_FUNC(_V0expand__toplevel_k478, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__toplevel_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k476" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.97 0 0)) ((close _V0expand__toplevel_k477) (##inline ##sys.car (bruijn ##expr.97 0 0))) ((bruijn ##k.1226 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k477, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k475" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1227 0 0) ((close _V0expand__toplevel_k476) (##inline ##sys.cdr (bruijn ##expr.96 2 0))) ((bruijn ##k.1226 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k476, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k474" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k474, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.96 1 0)) ((bruijn equal? 26 7) (close _V0expand__toplevel_k475) 'define (##inline ##sys.car (bruijn ##expr.96 1 0))) ((bruijn ##k.1226 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k475, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k488" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 19 1) (bruijn ##k.1220 2 0) (bruijn ##x.1222 0 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k487" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1221 0 0) ((bruijn compiler-error 29 15) (close _V0expand__toplevel_k488) (##string ##string.1811) (##inline ##sys.cons 'define (##inline ##sys.cdr (bruijn ##expr.99 2 0)))) ((bruijn ##k.1220 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k488, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0define,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k486" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.99 1 0)) ((bruijn equal? 28 7) (close _V0expand__toplevel_k487) 'define (##inline ##sys.car (bruijn ##expr.99 1 0))) ((bruijn ##k.1220 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k487, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k498" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k498, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1214 1 0) ((bruijn compiler-error 38 15) (bruijn ##k.1215 0 0) (##string ##string.1812) (bruijn f 5 0)) ((bruijn ##k.1215 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 38-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1812.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k502" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k502, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 30 1) (bruijn ##k.1185 11 0) (bruijn ##x.1190 0 0))
V_CALL(VGetArg(upenv, 30-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0expand__toplevel_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k501" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 40 20) (close _V0expand__toplevel_k502) (##inline ##sys.cons '##vcore.declare (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1196 0 0) '()))))
V_CALL(VGetArg(upenv, 40-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k502, env)}),
      VInlineCons(
        _V10vcore_Ddeclare,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__toplevel_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k500" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 38 9) (close _V0expand__toplevel_k501) (bruijn l 4 0))
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k501, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__toplevel_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k504" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k504, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1212 0 0) ((bruijn ##kk.108 4 1) (bruijn ##k.1211 1 0) 'ok) ((bruijn ##k.1211 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      _V0ok);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k503" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.110 1 0)) ((bruijn equal? 42 7) (close _V0expand__toplevel_k504) 'lambda (##inline ##sys.car (bruijn ##expr.110 1 0))) ((bruijn ##k.1211 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 42-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k504, env)}),
      _V0lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k507" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k507, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1208 0 0) ((bruijn ##kk.108 6 1) (bruijn ##k.1207 1 0) 'ok) ((bruijn ##k.1207 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      _V0ok);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k506" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.111 1 0)) ((bruijn equal? 44 7) (close _V0expand__toplevel_k507) 'case-lambda (##inline ##sys.car (bruijn ##expr.111 1 0))) ((bruijn ##k.1207 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 44-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k507, env)}),
      _V0case__lambda,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k510" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k510, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1204 0 0) ((bruijn ##kk.108 8 1) (bruijn ##k.1203 1 0) 'ok) ((bruijn ##k.1203 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      _V0ok);
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k509" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k509, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.112 1 0)) ((bruijn equal? 46 7) (close _V0expand__toplevel_k510) '##vcore.function (##inline ##sys.car (bruijn ##expr.112 1 0))) ((bruijn ##k.1203 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 46-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k510, env)}),
      _V10vcore_Dfunction,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k512" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k512, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.108 8 1) (bruijn ##k.1197 8 0) (bruijn ##x.1201 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0expand__toplevel_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k511" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 46 15) (close _V0expand__toplevel_k512) (##string ##string.1813) (bruijn l 11 0))
V_CALL(VGetArg(upenv, 46-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k512, env)}),
      VEncodePointer(&_V10string_D1813.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 0));
 }
}
static void _V0expand__toplevel_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda141" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k509) (close _V0expand__toplevel_k511))
V_CALL_FUNC(_V0expand__toplevel_k509, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k511, env)}));
 }
}
static void _V0expand__toplevel_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k508" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda141) (bruijn ##input.109 4 0))
V_CALL_FUNC(_V0expand__toplevel_lambda141, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__toplevel_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda140" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k506) (close _V0expand__toplevel_k508))
V_CALL_FUNC(_V0expand__toplevel_k506, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k508, env)}));
 }
}
static void _V0expand__toplevel_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k505" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda140) (bruijn ##input.109 2 0))
V_CALL_FUNC(_V0expand__toplevel_lambda140, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__toplevel_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda139" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k503) (close _V0expand__toplevel_k505))
V_CALL_FUNC(_V0expand__toplevel_k503, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k505, env)}));
 }
}
static void _V0expand__toplevel_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda138" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda139) (bruijn ##input.109 0 0))
V_CALL_FUNC(_V0expand__toplevel_lambda139, env, runtime,
      _var0);
 }
}
static void _V0expand__toplevel_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda137" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda137, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda137, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda138) (bruijn l 4 0))
V_CALL_FUNC(_V0expand__toplevel_lambda138, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__toplevel_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k499" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 38 9) (close _V0expand__toplevel_k500) (close _V0expand__toplevel_lambda137))
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k500, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda137, env)}));
 }
}
static void _V0expand__toplevel_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k497" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k497, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k498) (close _V0expand__toplevel_k499))
V_CALL_FUNC(_V0expand__toplevel_k498, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k499, env)}));
 }
}
static void _V0expand__toplevel_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k496" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 36 12) (close _V0expand__toplevel_k497) (bruijn ##x.1216 0 0))
V_CALL(VGetArg(upenv, 36-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k497, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k495" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.102 1 0))) ((bruijn string? 35 18) (close _V0expand__toplevel_k496) (bruijn f 2 0)) ((bruijn ##k.1185 5 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 35-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k496, env)}),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k494" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.102 0 0)) ((close _V0expand__toplevel_k495) (##inline ##sys.car (bruijn ##expr.102 0 0))) ((bruijn ##k.1185 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k495, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k493" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k494) (##inline ##sys.cdr (bruijn ##expr.101 1 0)))
V_CALL_FUNC(_V0expand__toplevel_k494, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__toplevel_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k492" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k492, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.101 0 0)) ((close _V0expand__toplevel_k493) (##inline ##sys.car (bruijn ##expr.101 0 0))) ((bruijn ##k.1185 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k493, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k491" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1186 0 0) ((close _V0expand__toplevel_k492) (##inline ##sys.cdr (bruijn ##expr.100 2 0))) ((bruijn ##k.1185 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k492, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k490" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.100 1 0)) ((bruijn equal? 30 7) (close _V0expand__toplevel_k491) '##vcore.declare (##inline ##sys.car (bruijn ##expr.100 1 0))) ((bruijn ##k.1185 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 30-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k491, env)}),
      _V10vcore_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k520" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k520, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1179 1 0) ((bruijn compiler-error 38 15) (bruijn ##k.1180 0 0) (##string ##string.1814) (bruijn str 3 0)) ((bruijn ##k.1180 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 38-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1814.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k522" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k522, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 28 1) (bruijn ##k.1173 7 0) (bruijn ##x.1177 0 0))
V_CALL(VGetArg(upenv, 28-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0expand__toplevel_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k521" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k521, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 38 20) (close _V0expand__toplevel_k522) (bruijn expr 28 1))
V_CALL(VGetArg(upenv, 38-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k522, env)}),
      VGetArg(upenv, 28-1, 1));
 }
}
static void _V0expand__toplevel_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k519" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k520) (close _V0expand__toplevel_k521))
V_CALL_FUNC(_V0expand__toplevel_k520, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k521, env)}));
 }
}
static void _V0expand__toplevel_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k518" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k518, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 36 12) (close _V0expand__toplevel_k519) (bruijn ##x.1181 0 0))
V_CALL(VGetArg(upenv, 36-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k519, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k517" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.104 1 0))) ((bruijn string? 35 18) (close _V0expand__toplevel_k518) (bruijn str 0 0)) ((bruijn ##k.1173 3 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 35-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k518, env)}),
      _var0);
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k516" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.104 0 0)) ((close _V0expand__toplevel_k517) (##inline ##sys.car (bruijn ##expr.104 0 0))) ((bruijn ##k.1173 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k517, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k515" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1174 0 0) ((close _V0expand__toplevel_k516) (##inline ##sys.cdr (bruijn ##expr.103 2 0))) ((bruijn ##k.1173 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k516, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k514" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k514, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.103 1 0)) ((bruijn equal? 32 7) (close _V0expand__toplevel_k515) '##foreign.declare (##inline ##sys.car (bruijn ##expr.103 1 0))) ((bruijn ##k.1173 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 32-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k515, env)}),
      _V10foreign_Ddeclare,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k528" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k528, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.84 27 1) (bruijn ##k.1164 4 0) (bruijn ##x.1169 0 0))
V_CALL(VGetArg(upenv, 27-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__toplevel_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k527" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.107 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.107 0 0))) ((bruijn resolve-foreign-import 37 19) (close _V0expand__toplevel_k528) (bruijn expr 27 1) (bruijn paths 27 2)) ((bruijn ##k.1164 3 0) #f)) ((bruijn ##k.1164 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 37-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k528, env)}),
      VGetArg(upenv, 27-1, 1),
      VGetArg(upenv, 27-1, 2));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k526" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.106 0 0)) ((close _V0expand__toplevel_k527) (##inline ##sys.cdr (bruijn ##expr.106 0 0))) ((bruijn ##k.1164 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__toplevel_k527, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k525" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k525, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1165 0 0) ((close _V0expand__toplevel_k526) (##inline ##sys.cdr (bruijn ##expr.105 2 0))) ((bruijn ##k.1164 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__toplevel_k526, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k524" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.105 1 0)) ((bruijn equal? 34 7) (close _V0expand__toplevel_k525) '##foreign.import (##inline ##sys.car (bruijn ##expr.105 1 0))) ((bruijn ##k.1164 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 34-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k525, env)}),
      _V10foreign_Dimport,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__toplevel_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k532" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 38 21) (bruijn ##k.1148 27 0) (##string ##string.1815))
V_CALL(VGetArg(upenv, 38-1, 21), runtime,
      VGetArg(upenv, 27-1, 0),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
 }
}
static void _V0expand__toplevel_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k531" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.84 26 1) (close _V0expand__toplevel_k532) (bruijn ##x.1161 0 0))
V_CALL(VGetArg(upenv, 26-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k532, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k530" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 36 20) (close _V0expand__toplevel_k531) (bruijn ##x.1162 0 0))
V_CALL(VGetArg(upenv, 36-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k531, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda144" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 34 9) (close _V0expand__toplevel_k530) (bruijn expr 0 0))
V_CALL(VGetArg(upenv, 34-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k530, env)}),
      _var0);
 }
}
static void _V0expand__toplevel_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k529" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda144) (bruijn ##input.85 22 0))
V_CALL_FUNC(_V0expand__toplevel_lambda144, env, runtime,
      VGetArg(upenv, 22-1, 0));
 }
}
static void _V0expand__toplevel_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda143" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k524) (close _V0expand__toplevel_k529))
V_CALL_FUNC(_V0expand__toplevel_k524, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k529, env)}));
 }
}
static void _V0expand__toplevel_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k523" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda143) (bruijn ##input.85 20 0))
V_CALL_FUNC(_V0expand__toplevel_lambda143, env, runtime,
      VGetArg(upenv, 20-1, 0));
 }
}
static void _V0expand__toplevel_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda142" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k514) (close _V0expand__toplevel_k523))
V_CALL_FUNC(_V0expand__toplevel_k514, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k523, env)}));
 }
}
static void _V0expand__toplevel_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k513" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda142) (bruijn ##input.85 18 0))
V_CALL_FUNC(_V0expand__toplevel_lambda142, env, runtime,
      VGetArg(upenv, 18-1, 0));
 }
}
static void _V0expand__toplevel_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda136" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k490) (close _V0expand__toplevel_k513))
V_CALL_FUNC(_V0expand__toplevel_k490, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k513, env)}));
 }
}
static void _V0expand__toplevel_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k489" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda136) (bruijn ##input.85 16 0))
V_CALL_FUNC(_V0expand__toplevel_lambda136, env, runtime,
      VGetArg(upenv, 16-1, 0));
 }
}
static void _V0expand__toplevel_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda135" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k486) (close _V0expand__toplevel_k489))
V_CALL_FUNC(_V0expand__toplevel_k486, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k489, env)}));
 }
}
static void _V0expand__toplevel_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k485" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k485, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda135) (bruijn ##input.85 14 0))
V_CALL_FUNC(_V0expand__toplevel_lambda135, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V0expand__toplevel_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda134" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k474) (close _V0expand__toplevel_k485))
V_CALL_FUNC(_V0expand__toplevel_k474, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k485, env)}));
 }
}
static void _V0expand__toplevel_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k473" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda134) (bruijn ##input.85 12 0))
V_CALL_FUNC(_V0expand__toplevel_lambda134, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0expand__toplevel_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda133" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k468) (close _V0expand__toplevel_k473))
V_CALL_FUNC(_V0expand__toplevel_k468, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k473, env)}));
 }
}
static void _V0expand__toplevel_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k467" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k467, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda133) (bruijn ##input.85 10 0))
V_CALL_FUNC(_V0expand__toplevel_lambda133, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0expand__toplevel_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda132" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k461) (close _V0expand__toplevel_k467))
V_CALL_FUNC(_V0expand__toplevel_k461, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k467, env)}));
 }
}
static void _V0expand__toplevel_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k460" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda132) (bruijn ##input.85 8 0))
V_CALL_FUNC(_V0expand__toplevel_lambda132, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0expand__toplevel_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda131" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k458) (close _V0expand__toplevel_k460))
V_CALL_FUNC(_V0expand__toplevel_k458, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k460, env)}));
 }
}
static void _V0expand__toplevel_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k457" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k457, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda131) (bruijn ##input.85 6 0))
V_CALL_FUNC(_V0expand__toplevel_lambda131, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0expand__toplevel_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda130" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k454) (close _V0expand__toplevel_k457))
V_CALL_FUNC(_V0expand__toplevel_k454, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k457, env)}));
 }
}
static void _V0expand__toplevel_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k453" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda130) (bruijn ##input.85 4 0))
V_CALL_FUNC(_V0expand__toplevel_lambda130, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__toplevel_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda129" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k448) (close _V0expand__toplevel_k453))
V_CALL_FUNC(_V0expand__toplevel_k448, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k453, env)}));
 }
}
static void _V0expand__toplevel_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_k447" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__toplevel_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda129) (bruijn ##input.85 2 0))
V_CALL_FUNC(_V0expand__toplevel_lambda129, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__toplevel_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda127" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_k443) (close _V0expand__toplevel_k447))
V_CALL_FUNC(_V0expand__toplevel_k443, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_k447, env)}));
 }
}
static void _V0expand__toplevel_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda126" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__toplevel_lambda127) (bruijn ##input.85 0 0))
V_CALL_FUNC(_V0expand__toplevel_lambda127, env, runtime,
      _var0);
 }
}
static void _V0expand__toplevel_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda125" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__toplevel_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda125, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__toplevel_lambda126) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__toplevel_lambda126, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__toplevel_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__toplevel_lambda124" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__toplevel_lambda124, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__toplevel_lambda124, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 10 9) (bruijn ##k.1147 0 0) (close _V0expand__toplevel_lambda125))
V_CALL(VGetArg(upenv, 10-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda125, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k55) (bruijn expand-toplevel 8 8) (close _V0expand__toplevel_lambda124))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k55, env)}),
      VEncodeInt(8l), VEncodeInt(8l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__toplevel_lambda124, env)})
    );
 }
}
static void _V0expand__define_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k540" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k540, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1311 1 0) ((bruijn compiler-error 19 15) (bruijn ##k.1312 0 0) (##string ##string.1810) (bruijn x 4 0)) ((bruijn ##k.1312 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__define_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k543" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k543, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.79 11 1) (bruijn ##k.1300 9 0) (bruijn ##x.1305 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V0expand__define_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k542" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 20 20) (close _V0expand__define_k543) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn x 5 0) (##inline ##sys.cons (bruijn ##x.1310 0 0) '()))))
V_CALL(VGetArg(upenv, 20-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k543, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__define_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k541" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 18 9) (close _V0expand__define_k542) (##inline ##sys.car (bruijn ##expr.83 3 0)))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k542, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0expand__define_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k539" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__define_k540) (close _V0expand__define_k541))
V_CALL_FUNC(_V0expand__define_k540, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k541, env)}));
 }
}
static void _V0expand__define_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k538" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k538, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 17 12) (close _V0expand__define_k539) (bruijn ##x.1313 0 0))
V_CALL(VGetArg(upenv, 17-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k539, env)}),
      _var0);
 }
}
static void _V0expand__define_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k537" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.83 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.83 0 0))) ((bruijn symbol? 16 13) (close _V0expand__define_k538) (bruijn x 1 0)) ((bruijn ##k.1300 4 0) #f)) ((bruijn ##k.1300 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 16-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k538, env)}),
      upenv->vars[0]);
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__define_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k536" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__define_k537) (##inline ##sys.cdr (bruijn ##expr.82 1 0)))
V_CALL_FUNC(_V0expand__define_k537, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__define_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k535" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.82 0 0)) ((close _V0expand__define_k536) (##inline ##sys.car (bruijn ##expr.82 0 0))) ((bruijn ##k.1300 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__define_k536, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__define_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k534" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1301 0 0) ((close _V0expand__define_k535) (##inline ##sys.cdr (bruijn ##expr.81 2 0))) ((bruijn ##k.1300 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__define_k535, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__define_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k533" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.81 1 0)) ((bruijn equal? 12 7) (close _V0expand__define_k534) 'define (##inline ##sys.car (bruijn ##expr.81 1 0))) ((bruijn ##k.1300 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k534, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__define_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k545" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k545, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.79 3 1) (bruijn ##k.1296 3 0) (bruijn ##x.1298 0 0))
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__define_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_k544" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__define_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_k544, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 12 15) (close _V0expand__define_k545) (##string ##string.1811) (bruijn expr 3 1))
V_CALL(VGetArg(upenv, 12-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k545, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
 }
}
static void _V0expand__define_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__define_lambda147" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_lambda147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__define_k533) (close _V0expand__define_k544))
V_CALL_FUNC(_V0expand__define_k533, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_k544, env)}));
 }
}
static void _V0expand__define_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__define_lambda146" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__define_lambda146, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_lambda146, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__define_lambda147) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__define_lambda147, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__define_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__define_lambda145" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__define_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__define_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 9 9) (bruijn ##k.1295 0 0) (close _V0expand__define_lambda146))
V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_lambda146, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k54) (bruijn expand-define 7 7) (close _V0expand__define_lambda145))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k54, env)}),
      VEncodeInt(7l), VEncodeInt(7l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__define_lambda145, env)})
    );
 }
}
static void _V0expand__let_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k547" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k547, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1364 2 0) (##inline ##sys.car (bruijn ##expr.60 5 0)) '() '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCar(
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
 }
}
static void _V0loop_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k550" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k550, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.64 5 1) (bruijn ##k.1382 2 0) (bruijn ##expr.66 3 1) (bruijn ##x.1383 1 0) (bruijn ##x.1384 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k549" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k549, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 18 8) (close _V0loop_k550) (bruijn ##vals.63 2 3))
V_CALL(VGetArg(upenv, 18-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k550, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k548" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.66 1 1))) ((bruijn reverse 17 8) (close _V0loop_k549) (bruijn ##xs.62 1 2)) ((bruijn ##k.1382 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 17-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k549, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k554" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k554, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.68 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.68 0 0))) ((bruijn ##kk.65 3 1) (bruijn ##k.1374 1 0) (##inline ##sys.cdr (bruijn ##expr.66 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.67 2 0)) (bruijn ##xs.62 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.68 0 0)) (bruijn ##vals.63 6 3))) ((bruijn ##k.1374 1 0) #f)) ((bruijn ##k.1374 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k553" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k553, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.67 1 0)) ((close _V0loop_k554) (##inline ##sys.cdr (bruijn ##expr.67 1 0))) ((bruijn ##k.1374 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0loop_k554, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k557" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k557, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.64 9 1) (bruijn ##k.1369 4 0) (bruijn ##expr.66 7 1) (bruijn ##x.1371 1 0) (bruijn ##x.1372 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k556" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k556, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k557) (bruijn ##vals.63 6 3))
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k557, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k555" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k555, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 21 8) (close _V0loop_k556) (bruijn ##xs.62 5 2))
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k556, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k552" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k553) (close _V0loop_k555))
V_CALL_FUNC(_V0loop_k553, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k555, env)}));
 }
}
static void _V0loop_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda157" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda157, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k552) (##inline ##sys.car (bruijn ##expr.66 3 1)))
V_CALL_FUNC(_V0loop_k552, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda156" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 18 9) (bruijn ##k.1368 0 0) (close _V0loop_lambda157))
V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda157, env)}));
 }
}
static void _V0loop_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k551" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 17 10) (bruijn ##k.1366 1 0) (close _V0loop_lambda156) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 17-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda156, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda155" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda155, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda155, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k548) (close _V0loop_k551))
V_CALL_FUNC(_V0loop_k548, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k551, env)}));
 }
}
static void _V0expand__let_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda154" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__let_k547) (bruijn loop 0 0) (close _V0loop_lambda155))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k547, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda155, env)})
    );
 }
}
static void _V0expand__let_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda153" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda154) #f)
V_CALL_FUNC(_V0expand__let_lambda154, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__let_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda152" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 13 9) (bruijn ##k.1363 0 0) (close _V0expand__let_lambda153))
V_CALL(VGetArg(upenv, 13-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda153, env)}));
 }
}
static void _V0expand__let_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k558" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k558, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.58 5 1) (bruijn ##k.1386 1 0) (bruijn ##x.1388 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__let_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__let_lambda158" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda158, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda158, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 12 9) (close _V0expand__let_k558) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn xs 0 2) (##inline ##sys.cdr (bruijn ##expr.60 2 0)))) (bruijn vals 0 3))) ((bruijn ##k.1386 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k558, env)}),
      VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        _var2,
        VInlineCdr(
        upenv->up->vars[0]))),
        _var3));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__let_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k546" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k546, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.60 1 0)) ((bruijn call-with-values 12 10) (bruijn ##k.1362 0 0) (close _V0expand__let_lambda152) (close _V0expand__let_lambda158)) ((bruijn ##k.1362 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 10), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda152, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda158, env)}));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__let_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k563" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k563, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1327 2 0) (##inline ##sys.car (bruijn ##expr.70 4 0)) '() '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VInlineCar(
        upenv->up->up->up->vars[0]),
      VNULL,
      VNULL);
 }
}
static void _V0loop_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k566" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k566, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.74 5 1) (bruijn ##k.1345 2 0) (bruijn ##expr.76 3 1) (bruijn ##x.1346 1 0) (bruijn ##x.1347 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k565" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k566) (bruijn ##vals.73 2 3))
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k566, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k564" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.76 1 1))) ((bruijn reverse 21 8) (close _V0loop_k565) (bruijn ##xs.72 1 2)) ((bruijn ##k.1345 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k565, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k570" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k570, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.78 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.78 0 0))) ((bruijn ##kk.75 3 1) (bruijn ##k.1337 1 0) (##inline ##sys.cdr (bruijn ##expr.76 6 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.77 2 0)) (bruijn ##xs.72 6 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.78 0 0)) (bruijn ##vals.73 6 3))) ((bruijn ##k.1337 1 0) #f)) ((bruijn ##k.1337 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr(
        VGetArg(upenv, 6-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k569" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.77 1 0)) ((close _V0loop_k570) (##inline ##sys.cdr (bruijn ##expr.77 1 0))) ((bruijn ##k.1337 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0loop_k570, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k573" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k573, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.74 9 1) (bruijn ##k.1332 4 0) (bruijn ##expr.76 7 1) (bruijn ##x.1334 1 0) (bruijn ##x.1335 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k572" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 8) (close _V0loop_k573) (bruijn ##vals.73 6 3))
V_CALL(VGetArg(upenv, 26-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k573, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k571" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k571, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 25 8) (close _V0loop_k572) (bruijn ##xs.72 5 2))
V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k572, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k568" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k569) (close _V0loop_k571))
V_CALL_FUNC(_V0loop_k569, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k571, env)}));
 }
}
static void _V0loop_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda165" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k568) (##inline ##sys.car (bruijn ##expr.76 3 1)))
V_CALL_FUNC(_V0loop_k568, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda164" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda164, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 9) (bruijn ##k.1331 0 0) (close _V0loop_lambda165))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda165, env)}));
 }
}
static void _V0loop_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k567" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k567, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 21 10) (bruijn ##k.1329 1 0) (close _V0loop_lambda164) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda164, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda163" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda163, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda163, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k564) (close _V0loop_k567))
V_CALL_FUNC(_V0loop_k564, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k567, env)}));
 }
}
static void _V0expand__let_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda162" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda162, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__let_k563) (bruijn loop 0 0) (close _V0loop_lambda163))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k563, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda163, env)})
    );
 }
}
static void _V0expand__let_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda161" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda162) #f)
V_CALL_FUNC(_V0expand__let_lambda162, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0expand__let_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda160" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_lambda160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 9) (bruijn ##k.1326 0 0) (close _V0expand__let_lambda161))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda161, env)}));
 }
}
static void _V0expand__let_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k574" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k574, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.58 9 1) (bruijn ##k.1349 1 0) (bruijn ##x.1351 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__let_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0expand__let_lambda166" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0expand__let_lambda166, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda166, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn expand-syntax 16 9) (close _V0expand__let_k574) (##inline ##sys.cons 'letrec (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 2 0) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (bruijn xs 0 2) (##inline ##sys.cdr (bruijn ##expr.70 1 0)))) '())) '()) (##inline ##sys.cons (##inline ##sys.cons (bruijn loop 2 0) (bruijn vals 0 3)) '())))) ((bruijn ##k.1349 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k574, env)}),
      VInlineCons(
        _V0letrec,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        upenv->up->vars[0],
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        _var2,
        VInlineCdr(
        upenv->vars[0]))),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        upenv->up->vars[0],
        _var3),
        VNULL))));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__let_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k562" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k562, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.70 0 0)) ((bruijn call-with-values 16 10) (bruijn ##k.1324 2 0) (close _V0expand__let_lambda160) (close _V0expand__let_lambda166)) ((bruijn ##k.1324 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 16-1, 10), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda160, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda166, env)}));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__let_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k561" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k561, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__let_k562) (##inline ##sys.cdr (bruijn ##expr.69 2 0)))
V_CALL_FUNC(_V0expand__let_k562, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0expand__let_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k560" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.69 1 0)) ((close _V0expand__let_k561) (##inline ##sys.car (bruijn ##expr.69 1 0))) ((bruijn ##k.1324 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0expand__let_k561, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__let_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k577" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k577, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 16 21) (bruijn ##k.1317 7 0) (##string ##string.1815))
V_CALL(VGetArg(upenv, 16-1, 21), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
 }
}
static void _V0expand__let_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k576" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k576, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.58 6 1) (close _V0expand__let_k577) (bruijn ##x.1321 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k577, env)}),
      _var0);
 }
}
static void _V0expand__let_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k575" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 14 15) (close _V0expand__let_k576) (##string ##string.1816) (##inline ##sys.cons 'let (bruijn expr 6 1)))
V_CALL(VGetArg(upenv, 14-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k576, env)}),
      VEncodePointer(&_V10string_D1816.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0let,
        VGetArg(upenv, 6-1, 1)));
 }
}
static void _V0expand__let_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda159" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda159, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__let_k560) (close _V0expand__let_k575))
V_CALL_FUNC(_V0expand__let_k560, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k575, env)}));
 }
}
static void _V0expand__let_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_k559" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__let_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__let_lambda159) (bruijn ##input.59 2 0))
V_CALL_FUNC(_V0expand__let_lambda159, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__let_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda151" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__let_k546) (close _V0expand__let_k559))
V_CALL_FUNC(_V0expand__let_k546, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_k559, env)}));
 }
}
static void _V0expand__let_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__let_lambda150" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__let_lambda151) (bruijn ##input.59 0 0))
V_CALL_FUNC(_V0expand__let_lambda151, env, runtime,
      _var0);
 }
}
static void _V0expand__let_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda149" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda149, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda149, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__let_lambda150) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__let_lambda150, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__let_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__let_lambda148" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__let_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__let_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 8 9) (bruijn ##k.1316 0 0) (close _V0expand__let_lambda149))
V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda149, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k53) (bruijn expand-let 6 6) (close _V0expand__let_lambda148))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k53, env)}),
      VEncodeInt(6l), VEncodeInt(6l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__let_lambda148, env)})
    );
 }
}
static void _V0expand__lambda_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k583" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k583, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1417 1 0) ((bruijn compiler-error 16 15) (bruijn ##k.1418 0 0) (##string ##string.1817) (bruijn args 4 0)) ((bruijn ##k.1418 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1817.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__lambda_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k585" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k585, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.53 9 1) (bruijn ##k.1410 6 0) (##inline ##sys.cons (bruijn args 5 0) (##inline ##sys.cons (bruijn ##x.1416 0 0) '())))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons(
        VGetArg(upenv, 5-1, 0),
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0expand__lambda_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k584" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 15 9) (close _V0expand__lambda_k585) (##inline ##sys.car (bruijn ##expr.56 3 0)))
V_CALL(VGetArg(upenv, 15-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k585, env)}),
      VInlineCar(
        upenv->up->up->vars[0]));
 }
}
static void _V0expand__lambda_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k582" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k583) (close _V0expand__lambda_k584))
V_CALL_FUNC(_V0expand__lambda_k583, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k584, env)}));
 }
}
static void _V0expand__lambda_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k581" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 14 12) (close _V0expand__lambda_k582) (bruijn ##x.1419 0 0))
V_CALL(VGetArg(upenv, 14-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k582, env)}),
      _var0);
 }
}
static void _V0expand__lambda_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k580" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.56 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.56 0 0))) ((bruijn valid-args? 12 4) (close _V0expand__lambda_k581) (bruijn args 1 0)) ((bruijn ##k.1410 2 0) #f)) ((bruijn ##k.1410 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k581, env)}),
      upenv->vars[0]);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__lambda_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k579" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k580) (##inline ##sys.cdr (bruijn ##expr.55 2 0)))
V_CALL_FUNC(_V0expand__lambda_k580, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0expand__lambda_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k578" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.55 1 0)) ((close _V0expand__lambda_k579) (##inline ##sys.car (bruijn ##expr.55 1 0))) ((bruijn ##k.1410 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0expand__lambda_k579, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__lambda_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k591" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k591, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1406 1 0) ((bruijn compiler-error 17 15) (bruijn ##k.1407 0 0) (##string ##string.1817) (bruijn args 3 0)) ((bruijn ##k.1407 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1817.sym, VPOINTER_OTHER),
      upenv->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__lambda_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k594" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k594, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.53 11 1) (bruijn ##k.1400 6 0) (bruijn ##x.1401 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0expand__lambda_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k593" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-lambda 17 5) (close _V0expand__lambda_k594) (##inline ##sys.cons (bruijn args 4 0) (##inline ##sys.cons (bruijn ##x.1405 0 0) '())))
V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k594, env)}),
      VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0expand__lambda_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k592" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn collect-defines 16 0) (close _V0expand__lambda_k593) (##inline ##sys.cdr (bruijn ##expr.57 5 0)))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k593, env)}),
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)));
 }
}
static void _V0expand__lambda_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k590" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k591) (close _V0expand__lambda_k592))
V_CALL_FUNC(_V0expand__lambda_k591, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k592, env)}));
 }
}
static void _V0expand__lambda_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k589" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 15 12) (close _V0expand__lambda_k590) (bruijn ##x.1408 0 0))
V_CALL(VGetArg(upenv, 15-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k590, env)}),
      _var0);
 }
}
static void _V0expand__lambda_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k588" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn valid-args? 13 4) (close _V0expand__lambda_k589) (bruijn args 0 0))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k589, env)}),
      _var0);
 }
}
static void _V0expand__lambda_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k587" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.57 1 0)) ((close _V0expand__lambda_k588) (##inline ##sys.car (bruijn ##expr.57 1 0))) ((bruijn ##k.1400 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0expand__lambda_k588, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__lambda_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k597" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k597, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 15 21) (bruijn ##k.1393 7 0) (##string ##string.1815))
V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      VGetArg(upenv, 7-1, 0),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
 }
}
static void _V0expand__lambda_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k596" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.53 6 1) (close _V0expand__lambda_k597) (bruijn ##x.1397 0 0))
V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k597, env)}),
      _var0);
 }
}
static void _V0expand__lambda_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k595" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 13 15) (close _V0expand__lambda_k596) (##string ##string.1818) (##inline ##sys.cons 'lambda (bruijn expr 6 1)))
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k596, env)}),
      VEncodePointer(&_V10string_D1818.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0lambda,
        VGetArg(upenv, 6-1, 1)));
 }
}
static void _V0expand__lambda_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda171" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k587) (close _V0expand__lambda_k595))
V_CALL_FUNC(_V0expand__lambda_k587, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k595, env)}));
 }
}
static void _V0expand__lambda_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_k586" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__lambda_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_lambda171) (bruijn ##input.54 2 0))
V_CALL_FUNC(_V0expand__lambda_lambda171, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__lambda_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda170" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_k578) (close _V0expand__lambda_k586))
V_CALL_FUNC(_V0expand__lambda_k578, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_k586, env)}));
 }
}
static void _V0expand__lambda_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda169" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__lambda_lambda170) (bruijn ##input.54 0 0))
V_CALL_FUNC(_V0expand__lambda_lambda170, env, runtime,
      _var0);
 }
}
static void _V0expand__lambda_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda168" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda168, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda168, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__lambda_lambda169) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__lambda_lambda169, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__lambda_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__lambda_lambda167" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__lambda_lambda167, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__lambda_lambda167, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 7 9) (bruijn ##k.1392 0 0) (close _V0expand__lambda_lambda168))
V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_lambda168, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k52) (bruijn expand-lambda 5 5) (close _V0expand__lambda_lambda167))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k52, env)}),
      VEncodeInt(5l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__lambda_lambda167, env)})
    );
 }
}
static void _V0valid__args_Q_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k605" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k605, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 14 15) (bruijn ##k.1428 1 0) (##string ##string.1819) (bruijn ##x.1429 0 0))
V_CALL(VGetArg(upenv, 14-1, 15), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1819.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V0valid__args_Q_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k604" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k604, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1427 1 0) ((bruijn car 13 23) (close _V0valid__args_Q_k605) (bruijn args 7 1)) ((bruijn ##k.1428 0 0) #t))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 13-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k605, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(true));
}
 }
}
static void _V0valid__args_Q_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k607" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k607, runtime, upenv, 1, argc, _var0) {
  // ((bruijn valid-args? 13 4) (bruijn ##k.1421 8 0) (bruijn ##x.1426 0 0))
V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0valid__args_Q_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k606" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1425 0 0) ((bruijn cdr 13 1) (close _V0valid__args_Q_k607) (bruijn args 7 1)) ((bruijn ##k.1421 7 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k607, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0valid__args_Q_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k603" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0valid__args_Q_k604) (close _V0valid__args_Q_k606))
V_CALL_FUNC(_V0valid__args_Q_k604, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k606, env)}));
 }
}
static void _V0valid__args_Q_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k602" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn memtail 10 3) (close _V0valid__args_Q_k603) (bruijn ##x.1430 1 0) (bruijn ##x.1431 0 0))
V_CALL(VGetArg(upenv, 10-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k603, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V0valid__args_Q_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k601" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cdr 10 1) (close _V0valid__args_Q_k602) (bruijn args 4 1))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k602, env)}),
      upenv->up->up->up->vars[1]);
 }
}
static void _V0valid__args_Q_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k600" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k600, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1424 0 0) ((bruijn car 9 23) (close _V0valid__args_Q_k601) (bruijn args 3 1)) ((bruijn ##k.1421 3 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 9-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k601, env)}),
      upenv->up->up->vars[1]);
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0valid__args_Q_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k599" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k599, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1423 0 0) ((bruijn ##k.1421 2 0) (bruijn ##p.1423 0 0)) ((bruijn pair? 8 24) (close _V0valid__args_Q_k600) (bruijn args 2 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 8-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k600, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V0valid__args_Q_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0valid__args_Q_k598" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0valid__args_Q_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1422 0 0) ((bruijn ##k.1421 1 0) (bruijn ##p.1422 0 0)) ((bruijn null? 7 22) (close _V0valid__args_Q_k599) (bruijn args 1 1)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 7-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k599, env)}),
      upenv->vars[1]);
}
 }
}
static void _V0valid__args_Q_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0valid__args_Q_lambda172" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0valid__args_Q_lambda172, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0valid__args_Q_lambda172, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn symbol? 6 13) (close _V0valid__args_Q_k598) (bruijn args 0 1))
V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_k598, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k51) (bruijn valid-args? 4 4) (close _V0valid__args_Q_lambda172))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k51, env)}),
      VEncodeInt(4l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0valid__args_Q_lambda172, env)})
    );
 }
}
static void _V0memtail_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k611" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k611, runtime, upenv, 1, argc, _var0) {
  // ((bruijn memtail 8 3) (bruijn ##k.1432 4 0) (bruijn x 4 1) (bruijn ##x.1435 0 0))
V_CALL(VGetArg(upenv, 8-1, 3), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V0memtail_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k610" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k610, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1434 0 0) ((bruijn ##k.1432 3 0) (bruijn ##p.1434 0 0)) ((bruijn cdr 8 1) (close _V0memtail_k611) (bruijn args 3 2)))
if(VDecodeBool(
_var0)) {
V_CALL(upenv->up->up->vars[0], runtime,
      _var0);
} else {
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k611, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V0memtail_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k609" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn eqv? 7 4) (close _V0memtail_k610) (bruijn x 2 1) (bruijn ##x.1436 0 0))
V_CALL(VGetArg(upenv, 7-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k610, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V0memtail_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0memtail_k608" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0memtail_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_k608, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1433 0 0) ((bruijn car 6 23) (close _V0memtail_k609) (bruijn args 1 2)) ((bruijn eqv? 6 4) (bruijn ##k.1432 1 0) (bruijn x 1 1) (bruijn args 1 2)))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 6-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k609, env)}),
      upenv->vars[2]);
} else {
V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V0memtail_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0memtail_lambda173" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0memtail_lambda173, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0memtail_lambda173, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn pair? 5 24) (close _V0memtail_k608) (bruijn args 0 2))
V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_k608, env)}),
      _var2);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k50) (bruijn memtail 3 3) (close _V0memtail_lambda173))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k50, env)}),
      VEncodeInt(3l), VEncodeInt(3l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0memtail_lambda173, env)})
    );
 }
}
static void _V0expand__library_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k632" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k632, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 26 15) (bruijn ##k.1490 1 0) (##string ##string.1820) (bruijn ##x.1491 0 0) (bruijn unbound-vars 4 0))
V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1820.sym, VPOINTER_OTHER),
      _var0,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__library_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k631" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1489 1 0) ((bruijn cadr 25 34) (close _V0expand__library_k632) (bruijn lib 21 1)) ((bruijn ##k.1490 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 25-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k632, env)}),
      VGetArg(upenv, 21-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k641" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k641, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1482 1 0) ((bruijn compiler-error 33 15) (bruijn ##k.1483 0 0) (##string ##string.1821)) ((bruijn ##k.1483 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 33-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1821.sym, VPOINTER_OTHER));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k645" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k645, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 36 12) (bruijn ##k.1480 1 0) (bruijn ##x.1481 0 0))
V_CALL(VGetArg(upenv, 36-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__library_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k644" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1479 1 0) ((bruijn null? 35 22) (close _V0expand__library_k645) (bruijn free-vars 30 7)) ((bruijn ##k.1480 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 35-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k645, env)}),
      VGetArg(upenv, 30-1, 7));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k648" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k648, runtime, upenv, 1, argc, _var0) {
  // ((bruijn compiler-error 37 15) (bruijn ##k.1477 1 0) (##string ##string.1822) (bruijn ##x.1478 0 0) (bruijn free-vars 32 7))
V_CALL(VGetArg(upenv, 37-1, 15), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10string_D1822.sym, VPOINTER_OTHER),
      _var0,
      VGetArg(upenv, 32-1, 7));
 }
}
static void _V0expand__library_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k647" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k647, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1476 1 0) ((bruijn cadr 36 34) (close _V0expand__library_k648) (bruijn lib 32 1)) ((bruijn ##k.1477 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 36-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k648, env)}),
      VGetArg(upenv, 32-1, 1));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k653" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k653, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1437 36 0) (##inline ##sys.cons '##vcore.declare (##inline ##sys.cons (bruijn libname 11 0) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons '() (##inline ##sys.cons (bruijn ##x.1455 0 0) '()))) '()))))
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VInlineCons(
        _V10vcore_Ddeclare,
        VInlineCons(
        VGetArg(upenv, 11-1, 0),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VNULL,
        VInlineCons(
        _var0,
        VNULL))),
        VNULL))));
 }
}
static void _V0expand__library_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k652" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 38 9) (close _V0expand__library_k653) (##inline ##sys.cons 'let (##inline ##sys.cons (##inline ##sys.cons (##inline ##sys.cons '##vcore.import (##inline ##sys.cons (##inline ##sys.cons '##vcore.make-import (##inline ##sys.cons (bruijn libname 10 0) (bruijn ##x.1473 2 0))) '())) '()) (##inline ##sys.cons (##inline ##sys.cons 'let (##inline ##sys.cons (bruijn ##x.1462 1 0) (bruijn ##x.1463 0 0))) '()))))
V_CALL(VGetArg(upenv, 38-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k653, env)}),
      VInlineCons(
        _V0let,
        VInlineCons(
        VInlineCons(
        VInlineCons(
        _V10vcore_Dimport,
        VInlineCons(
        VInlineCons(
        _V10vcore_Dmake__import,
        VInlineCons(
        VGetArg(upenv, 10-1, 0),
        upenv->up->vars[0])),
        VNULL)),
        VNULL),
        VInlineCons(
        VInlineCons(
        _V0let,
        VInlineCons(
        upenv->vars[0],
        _var0)),
        VNULL))));
 }
}
static void _V0expand__library_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k651" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 38 33) (close _V0expand__library_k652) (bruijn basic-library 33 6))
V_CALL(VGetArg(upenv, 38-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k652, env)}),
      VGetArg(upenv, 33-1, 6));
 }
}
static void _V0expand__library_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k654" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k654, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1464 1 0) (##inline ##sys.cons (bruijn f 1 1) (##inline ##sys.cons (##inline ##sys.cons '##vcore.import (##inline ##sys.cons (bruijn ##x.1468 0 0) '())) '())))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        upenv->vars[1],
        VInlineCons(
        VInlineCons(
        _V10vcore_Dimport,
        VInlineCons(
        _var0,
        VNULL)),
        VNULL)));
 }
}
static void _V0expand__library_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda176" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda176, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 38 20) (close _V0expand__library_k654) 'quote (bruijn f 0 1))
V_CALL(VGetArg(upenv, 38-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k654, env)}),
      _V0quote,
      _var1);
 }
}
static void _V0expand__library_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k650" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 37 14) (close _V0expand__library_k651) (close _V0expand__library_lambda176) (bruijn free-vars 32 7))
V_CALL(VGetArg(upenv, 37-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k651, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda176, env)}),
      VGetArg(upenv, 32-1, 7));
 }
}
static void _V0expand__library_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda177" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda177, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda177, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##k.1474 0 0) (##inline ##sys.cons '##vcore.load-library (##inline ##sys.cons (bruijn i 0 1) '())))
V_CALL(_var0, runtime,
      VInlineCons(
        _V10vcore_Dload__library,
        VInlineCons(
        _var1,
        VNULL)));
 }
}
static void _V0expand__library_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k649" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 36 14) (close _V0expand__library_k650) (close _V0expand__library_lambda177) (bruijn mangled-imports 31 3))
V_CALL(VGetArg(upenv, 36-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k650, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda177, env)}),
      VGetArg(upenv, 31-1, 3));
 }
}
static void _V0expand__library_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k646" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k646, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library_k647) (close _V0expand__library_k649))
V_CALL_FUNC(_V0expand__library_k647, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k649, env)}));
 }
}
static void _V0expand__library_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k643" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library_k644) (close _V0expand__library_k646))
V_CALL_FUNC(_V0expand__library_k644, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k646, env)}));
 }
}
static void _V0expand__library_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k642" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 33 22) (close _V0expand__library_k643) (bruijn mangled-imports 28 3))
V_CALL(VGetArg(upenv, 33-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k643, env)}),
      VGetArg(upenv, 28-1, 3));
 }
}
static void _V0expand__library_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k640" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k640, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library_k641) (close _V0expand__library_k642))
V_CALL_FUNC(_V0expand__library_k641, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k642, env)}));
 }
}
static void _V0expand__library_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k639" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k639, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 31 12) (close _V0expand__library_k640) (bruijn ##x.1484 0 0))
V_CALL(VGetArg(upenv, 31-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k640, env)}),
      _var0);
 }
}
static void _V0expand__library_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__library_lambda178" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__library_lambda178, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda178, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn a 0 1) ((bruijn ##k.1485 0 0) (bruijn b 0 2)) ((bruijn ##k.1485 0 0) #f))
if(VDecodeBool(
_var1)) {
V_CALL(_var0, runtime,
      _var2);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k638" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 30 32) (close _V0expand__library_k639) (close _V0expand__library_lambda178) #t (bruijn ##x.1486 0 0))
V_CALL(VGetArg(upenv, 30-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k639, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda178, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V0expand__library_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k637" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 29 14) (close _V0expand__library_k638) (bruijn string? 29 18) (bruijn mangled-imports 24 3))
V_CALL(VGetArg(upenv, 29-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k638, env)}),
      VGetArg(upenv, 29-1, 18),
      VGetArg(upenv, 24-1, 3));
 }
}
static void _V0expand__library_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k636" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn mangle-library 28 17) (close _V0expand__library_k637) (bruijn ##x.1487 0 0))
V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k637, env)}),
      _var0);
 }
}
static void _V0expand__library_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k635" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cadr 27 34) (close _V0expand__library_k636) (bruijn lib 23 1))
V_CALL(VGetArg(upenv, 27-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k636, env)}),
      VGetArg(upenv, 23-1, 1));
 }
}
static void _V0expand__library_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k634" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn register-library-interface! 26 31) (close _V0expand__library_k635) (bruijn ##x.1488 0 0))
V_CALL(VGetArg(upenv, 26-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k635, env)}),
      _var0);
 }
}
static void _V0expand__library_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k633" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn header-from-library 25 30) (close _V0expand__library_k634) (bruijn lib 21 1))
V_CALL(VGetArg(upenv, 25-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k634, env)}),
      VGetArg(upenv, 21-1, 1));
 }
}
static void _V0expand__library_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k630" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library_k631) (close _V0expand__library_k633))
V_CALL_FUNC(_V0expand__library_k631, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k633, env)}));
 }
}
static void _V0expand__library_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k629" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 23 12) (close _V0expand__library_k630) (bruijn ##x.1492 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k630, env)}),
      _var0);
 }
}
static void _V0expand__library_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k628" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn null? 22 22) (close _V0expand__library_k629) (bruijn unbound-vars 0 0))
V_CALL(VGetArg(upenv, 22-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k629, env)}),
      _var0);
 }
}
static void _V0expand__library_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k655" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k655, runtime, upenv, 1, argc, _var0) {
  // ((bruijn not 23 12) (bruijn ##k.1493 1 0) (bruijn ##x.1494 0 0))
V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__library_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library_lambda179" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda179, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn memv 22 29) (close _V0expand__library_k655) (bruijn var 0 1) (bruijn imports 17 2))
V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k655, env)}),
      _var1,
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V0expand__library_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k627" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn filter 21 28) (close _V0expand__library_k628) (close _V0expand__library_lambda179) (bruijn free-vars 16 7))
V_CALL(VGetArg(upenv, 21-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k628, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda179, env)}),
      VGetArg(upenv, 16-1, 7));
 }
}
static void _V0expand__library_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k626" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k627) (bruijn free-vars 15 7) (bruijn ##x.1495 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k627, env)}),
      VEncodeInt(15l), VEncodeInt(7l),
      _var0
    );
 }
}
static void _V0expand__library_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k625" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn free-variables 19 27) (close _V0expand__library_k626) (bruijn basic-library 14 6))
V_CALL(VGetArg(upenv, 19-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k626, env)}),
      VGetArg(upenv, 14-1, 6));
 }
}
static void _V0expand__library_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k624" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k625) (bruijn basic-library 13 6) (bruijn ##x.1496 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k625, env)}),
      VEncodeInt(13l), VEncodeInt(6l),
      _var0
    );
 }
}
static void _V0expand__library_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k623" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 16 9) (close _V0expand__library_k624) (##inline ##sys.cons 'lambda (##inline ##sys.cons '() (bruijn ##x.1499 0 0))))
V_CALL(VGetArg(upenv, 16-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k624, env)}),
      VInlineCons(
        _V0lambda,
        VInlineCons(
        VNULL,
        _var0)));
 }
}
static void _V0expand__library_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k622" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 16 2) (close _V0expand__library_k623) (bruijn ##x.1500 2 0) (bruijn ##x.1501 0 0))
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k623, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__library_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k621" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 15 20) (close _V0expand__library_k622) (bruijn ##x.1502 0 0))
V_CALL(VGetArg(upenv, 15-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k622, env)}),
      _var0);
 }
}
static void _V0expand__library_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k620" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn make-library-output 9 0) (close _V0expand__library_k621) (bruijn exports 9 1))
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k621, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0expand__library_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k619" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k619, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn apply 13 16) (close _V0expand__library_k620) (bruijn append 13 2) (bruijn ##x.1503 0 0))
V_CALL(VGetArg(upenv, 13-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k620, env)}),
      VGetArg(upenv, 13-1, 2),
      _var0);
 }
}
static void _V0expand__library_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k618" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 12 14) (close _V0expand__library_k619) (bruijn expand-library-expr 7 5) (bruijn ##x.1504 0 0))
V_CALL(VGetArg(upenv, 12-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k619, env)}),
      VGetArg(upenv, 7-1, 5),
      _var0);
 }
}
static void _V0expand__library_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k617" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k617, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cddr 11 33) (close _V0expand__library_k618) (bruijn lib 7 1))
V_CALL(VGetArg(upenv, 11-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k618, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V0expand__library__expr_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k660" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k660, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 7 1) (bruijn ##k.1603 4 0) (bruijn ##x.1605 0 0))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__library__expr_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k659" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 18 20) (close _V0expand__library__expr_k660))
V_CALL(VGetArg(upenv, 18-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k660, env)}));
 }
}
static void _V0expand__library__expr_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k658" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k658, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k659) (bruijn exports 12 1) (bruijn ##x.1607 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k659, env)}),
      VEncodeInt(12l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k657" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1604 0 0) ((bruijn append 16 2) (close _V0expand__library__expr_k658) (##inline ##sys.cdr (bruijn ##expr.36 2 0)) (bruijn exports 11 1)) ((bruijn ##k.1603 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k658, env)}),
      VInlineCdr(
        upenv->up->vars[0]),
      VGetArg(upenv, 11-1, 1));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k656" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.36 1 0)) ((bruijn equal? 15 7) (close _V0expand__library__expr_k657) 'export (##inline ##sys.car (bruijn ##expr.36 1 0))) ((bruijn ##k.1603 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 15-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k657, env)}),
      _V0export,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k672" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k672, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 15 1) (bruijn ##k.1589 10 0) (bruijn ##x.1591 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0);
 }
}
static void _V0expand__library__expr_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k671" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k671, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 26 20) (close _V0expand__library__expr_k672))
V_CALL(VGetArg(upenv, 26-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k672, env)}));
 }
}
static void _V0expand__library__expr_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k670" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k671) (bruijn mangled-imports 20 3) (bruijn ##x.1594 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k671, env)}),
      VEncodeInt(20l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k669" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn append 24 2) (close _V0expand__library__expr_k670) (bruijn ##x.1595 0 0) (bruijn mangled-imports 19 3))
V_CALL(VGetArg(upenv, 24-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k670, env)}),
      _var0,
      VGetArg(upenv, 19-1, 3));
 }
}
static void _V0expand__library__expr_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k668" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k668, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 23 14) (close _V0expand__library__expr_k669) (bruijn mangle-library 23 17) (bruijn libs 4 0))
V_CALL(VGetArg(upenv, 23-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k669, env)}),
      VGetArg(upenv, 23-1, 17),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__library__expr_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k667" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k667, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library__expr_k668) (bruijn imports 17 2) (bruijn ##x.1596 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k668, env)}),
      VEncodeInt(17l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V0expand__library__expr_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k666" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn fold 21 32) (close _V0expand__library__expr_k667) (bruijn append 21 2) (bruijn imports 16 2) (bruijn ##x.1597 0 0))
V_CALL(VGetArg(upenv, 21-1, 32), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k667, env)}),
      VGetArg(upenv, 21-1, 2),
      VGetArg(upenv, 16-1, 2),
      _var0);
 }
}
static void _V0expand__library__expr_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k665" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 20 8) (close _V0expand__library__expr_k666) (bruijn ##x.1598 0 0))
V_CALL(VGetArg(upenv, 20-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k666, env)}),
      _var0);
 }
}
static void _V0expand__library__expr_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k673" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k673, runtime, upenv, 1, argc, _var0) {
  // ((bruijn extract-exports 16 4) (bruijn ##k.1599 1 0) (bruijn ##x.1600 0 0))
V_CALL(VGetArg(upenv, 16-1, 4), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V0expand__library__expr_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda185" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda185, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda185, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn find-library-interface! 20 26) (close _V0expand__library__expr_k673) (bruijn import 0 1) (bruijn paths 16 2))
V_CALL(VGetArg(upenv, 20-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k673, env)}),
      _var1,
      VGetArg(upenv, 16-1, 2));
 }
}
static void _V0expand__library__expr_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k664" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn map 19 14) (close _V0expand__library__expr_k665) (close _V0expand__library__expr_lambda185) (bruijn libs 0 0))
V_CALL(VGetArg(upenv, 19-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k665, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_lambda185, env)}),
      _var0);
 }
}
static void _V0expand__library__expr_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k663" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1590 0 0) ((close _V0expand__library__expr_k664) (##inline ##sys.cdr (bruijn ##expr.37 2 0))) ((bruijn ##k.1589 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k664, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k662" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k662, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.37 1 0)) ((bruijn equal? 17 7) (close _V0expand__library__expr_k663) 'import (##inline ##sys.car (bruijn ##expr.37 1 0))) ((bruijn ##k.1589 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 17-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k663, env)}),
      _V0import,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k679" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k679, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 11 1) (bruijn ##k.1577 4 0) (bruijn ##x.1581 0 0))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V0expand__library__expr_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k678" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k678, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.40 0 0)) ((bruijn expand-define 21 7) (close _V0expand__library__expr_k679) (##inline ##sys.cons 'define (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.40 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.40 0 0)) (##inline ##sys.cdr (bruijn ##expr.39 1 0)))) '())))) ((bruijn ##k.1577 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k679, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCdr(
        _var0),
        VInlineCdr(
        upenv->vars[0]))),
        VNULL))));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k677" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k677, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.39 0 0)) ((close _V0expand__library__expr_k678) (##inline ##sys.car (bruijn ##expr.39 0 0))) ((bruijn ##k.1577 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k678, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k676" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1578 0 0) ((close _V0expand__library__expr_k677) (##inline ##sys.cdr (bruijn ##expr.38 2 0))) ((bruijn ##k.1577 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k677, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k675" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k675, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.38 1 0)) ((bruijn equal? 19 7) (close _V0expand__library__expr_k676) 'define (##inline ##sys.car (bruijn ##expr.38 1 0))) ((bruijn ##k.1577 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k676, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k690" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k690, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1570 1 0) ((bruijn compiler-error 30 15) (bruijn ##k.1571 0 0) (##string ##string.1810) (bruijn f 6 0)) ((bruijn ##k.1571 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 30-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k693" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k693, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 20 1) (bruijn ##k.1556 11 0) (bruijn ##x.1563 0 0))
V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0expand__library__expr_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k692" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k692, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 31 20) (close _V0expand__library__expr_k693) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1568 0 0) '()))))
V_CALL(VGetArg(upenv, 31-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k693, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__library__expr_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k691" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k691, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 29 9) (close _V0expand__library__expr_k692) (##inline ##sys.cons 'lambda (##inline ##sys.cdr (bruijn ##expr.44 4 0))))
V_CALL(VGetArg(upenv, 29-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k692, env)}),
      VInlineCons(
        _V0lambda,
        VInlineCdr(
        upenv->up->up->up->vars[0])));
 }
}
static void _V0expand__library__expr_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k689" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k689, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k690) (close _V0expand__library__expr_k691))
V_CALL_FUNC(_V0expand__library__expr_k690, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k691, env)}));
 }
}
static void _V0expand__library__expr_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k688" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 28 12) (close _V0expand__library__expr_k689) (bruijn ##x.1572 0 0))
V_CALL(VGetArg(upenv, 28-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k689, env)}),
      _var0);
 }
}
static void _V0expand__library__expr_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k687" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1561 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.43 2 0))) ((bruijn symbol? 27 13) (close _V0expand__library__expr_k688) (bruijn f 3 0)) ((bruijn ##k.1556 6 0) #f)) ((bruijn ##k.1556 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 27-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k688, env)}),
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k686" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.44 0 0)) ((bruijn equal? 26 7) (close _V0expand__library__expr_k687) 'lambda (##inline ##sys.car (bruijn ##expr.44 0 0))) ((bruijn ##k.1556 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 26-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k687, env)}),
      _V0lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k685" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.43 0 0)) ((close _V0expand__library__expr_k686) (##inline ##sys.car (bruijn ##expr.43 0 0))) ((bruijn ##k.1556 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k686, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k684" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k684, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k685) (##inline ##sys.cdr (bruijn ##expr.42 1 0)))
V_CALL_FUNC(_V0expand__library__expr_k685, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__library__expr_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k683" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.42 0 0)) ((close _V0expand__library__expr_k684) (##inline ##sys.car (bruijn ##expr.42 0 0))) ((bruijn ##k.1556 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k684, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k682" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1557 0 0) ((close _V0expand__library__expr_k683) (##inline ##sys.cdr (bruijn ##expr.41 2 0))) ((bruijn ##k.1556 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k683, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k681" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k681, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.41 1 0)) ((bruijn equal? 21 7) (close _V0expand__library__expr_k682) 'define (##inline ##sys.car (bruijn ##expr.41 1 0))) ((bruijn ##k.1556 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k682, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k704" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k704, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1549 1 0) ((bruijn compiler-error 32 15) (bruijn ##k.1550 0 0) (##string ##string.1810) (bruijn f 6 0)) ((bruijn ##k.1550 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 32-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k707" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k707, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 22 1) (bruijn ##k.1535 11 0) (bruijn ##x.1542 0 0))
V_CALL(VGetArg(upenv, 22-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V0expand__library__expr_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k706" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k706, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 33 20) (close _V0expand__library__expr_k707) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn f 7 0) (##inline ##sys.cons (bruijn ##x.1547 0 0) '()))))
V_CALL(VGetArg(upenv, 33-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k707, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VGetArg(upenv, 7-1, 0),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__library__expr_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k705" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-syntax 31 9) (close _V0expand__library__expr_k706) (##inline ##sys.cons 'case-lambda (##inline ##sys.cdr (bruijn ##expr.48 4 0))))
V_CALL(VGetArg(upenv, 31-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k706, env)}),
      VInlineCons(
        _V0case__lambda,
        VInlineCdr(
        upenv->up->up->up->vars[0])));
 }
}
static void _V0expand__library__expr_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k703" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k703, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k704) (close _V0expand__library__expr_k705))
V_CALL_FUNC(_V0expand__library__expr_k704, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k705, env)}));
 }
}
static void _V0expand__library__expr_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k702" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k702, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 30 12) (close _V0expand__library__expr_k703) (bruijn ##x.1551 0 0))
V_CALL(VGetArg(upenv, 30-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k703, env)}),
      _var0);
 }
}
static void _V0expand__library__expr_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k701" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k701, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1540 0 0) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.47 2 0))) ((bruijn symbol? 29 13) (close _V0expand__library__expr_k702) (bruijn f 3 0)) ((bruijn ##k.1535 6 0) #f)) ((bruijn ##k.1535 6 0) #f))
if(VDecodeBool(
_var0)) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->up->vars[0])))) {
V_CALL(VGetArg(upenv, 29-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k702, env)}),
      upenv->up->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k700" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k700, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.48 0 0)) ((bruijn equal? 28 7) (close _V0expand__library__expr_k701) 'case-lambda (##inline ##sys.car (bruijn ##expr.48 0 0))) ((bruijn ##k.1535 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 28-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k701, env)}),
      _V0case__lambda,
      VInlineCar(
        _var0));
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k699" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.47 0 0)) ((close _V0expand__library__expr_k700) (##inline ##sys.car (bruijn ##expr.47 0 0))) ((bruijn ##k.1535 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k700, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k698" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k698, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k699) (##inline ##sys.cdr (bruijn ##expr.46 1 0)))
V_CALL_FUNC(_V0expand__library__expr_k699, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0expand__library__expr_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k697" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k697, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.46 0 0)) ((close _V0expand__library__expr_k698) (##inline ##sys.car (bruijn ##expr.46 0 0))) ((bruijn ##k.1535 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k698, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k696" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1536 0 0) ((close _V0expand__library__expr_k697) (##inline ##sys.cdr (bruijn ##expr.45 2 0))) ((bruijn ##k.1535 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k697, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k695" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.45 1 0)) ((bruijn equal? 23 7) (close _V0expand__library__expr_k696) 'define (##inline ##sys.car (bruijn ##expr.45 1 0))) ((bruijn ##k.1535 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k696, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k714(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k714" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k714, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k714, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 18 1) (bruijn ##k.1522 5 0) (bruijn ##x.1527 0 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0expand__library__expr_k713(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k713" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k713, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k713, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 29 20) (close _V0expand__library__expr_k714) (##inline ##sys.cons 'define (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.50 2 0)) (##inline ##sys.cons (bruijn ##x.1531 0 0) '()))))
V_CALL(VGetArg(upenv, 29-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k714, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VInlineCar(
        upenv->up->vars[0]),
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__library__expr_k712(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k712" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k712, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k712, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.51 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.51 0 0))) ((bruijn expand-syntax 27 9) (close _V0expand__library__expr_k713) (##inline ##sys.car (bruijn ##expr.51 0 0))) ((bruijn ##k.1522 3 0) #f)) ((bruijn ##k.1522 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 27-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k713, env)}),
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k711(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k711" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k711, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k711, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.50 0 0)) ((close _V0expand__library__expr_k712) (##inline ##sys.cdr (bruijn ##expr.50 0 0))) ((bruijn ##k.1522 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__library__expr_k712, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k710(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k710" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k710, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k710, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1523 0 0) ((close _V0expand__library__expr_k711) (##inline ##sys.cdr (bruijn ##expr.49 2 0))) ((bruijn ##k.1522 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__library__expr_k711, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k709(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k709" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k709, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.49 1 0)) ((bruijn equal? 25 7) (close _V0expand__library__expr_k710) 'define (##inline ##sys.car (bruijn ##expr.49 1 0))) ((bruijn ##k.1522 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k710, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k718(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k718" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k718, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k718, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 17 1) (bruijn ##k.1516 2 0) (bruijn ##x.1518 0 0))
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0expand__library__expr_k717(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k717" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k717, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k717, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1517 0 0) ((bruijn compiler-error 28 15) (close _V0expand__library__expr_k718) (##string ##string.1811) (##inline ##sys.cons 'define (##inline ##sys.cdr (bruijn ##expr.52 2 0)))) ((bruijn ##k.1516 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k718, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0define,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k716(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k716" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k716, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k716, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.52 1 0)) ((bruijn equal? 27 7) (close _V0expand__library__expr_k717) 'define (##inline ##sys.car (bruijn ##expr.52 1 0))) ((bruijn ##k.1516 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 27-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k717, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__library__expr_k720(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k720" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k720, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k720, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.34 16 1) (bruijn ##k.1506 16 0) (bruijn ##x.1514 0 0))
V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V0expand__library__expr_k719(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k719" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k719, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k719, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn compiler-error 27 15) (close _V0expand__library__expr_k720) (##string ##string.1823) (bruijn expr 16 1))
V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k720, env)}),
      VEncodePointer(&_V10string_D1823.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V0expand__library__expr_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda190" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda190, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k716) (close _V0expand__library__expr_k719))
V_CALL_FUNC(_V0expand__library__expr_k716, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k719, env)}));
 }
}
static void _V0expand__library__expr_k715(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k715" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k715, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k715, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda190) (bruijn ##input.35 12 0))
V_CALL_FUNC(_V0expand__library__expr_lambda190, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V0expand__library__expr_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda189" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k709) (close _V0expand__library__expr_k715))
V_CALL_FUNC(_V0expand__library__expr_k709, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k715, env)}));
 }
}
static void _V0expand__library__expr_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k708" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k708, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda189) (bruijn ##input.35 10 0))
V_CALL_FUNC(_V0expand__library__expr_lambda189, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V0expand__library__expr_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda188" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k695) (close _V0expand__library__expr_k708))
V_CALL_FUNC(_V0expand__library__expr_k695, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k708, env)}));
 }
}
static void _V0expand__library__expr_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k694" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k694, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda188) (bruijn ##input.35 8 0))
V_CALL_FUNC(_V0expand__library__expr_lambda188, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0expand__library__expr_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda187" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k681) (close _V0expand__library__expr_k694))
V_CALL_FUNC(_V0expand__library__expr_k681, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k694, env)}));
 }
}
static void _V0expand__library__expr_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k680" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k680, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda187) (bruijn ##input.35 6 0))
V_CALL_FUNC(_V0expand__library__expr_lambda187, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0expand__library__expr_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda186" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k675) (close _V0expand__library__expr_k680))
V_CALL_FUNC(_V0expand__library__expr_k675, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k680, env)}));
 }
}
static void _V0expand__library__expr_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k674" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda186) (bruijn ##input.35 4 0))
V_CALL_FUNC(_V0expand__library__expr_lambda186, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__library__expr_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda184" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k662) (close _V0expand__library__expr_k674))
V_CALL_FUNC(_V0expand__library__expr_k662, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k674, env)}));
 }
}
static void _V0expand__library__expr_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_k661" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library__expr_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_k661, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda184) (bruijn ##input.35 2 0))
V_CALL_FUNC(_V0expand__library__expr_lambda184, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__library__expr_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda183" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_k656) (close _V0expand__library__expr_k661))
V_CALL_FUNC(_V0expand__library__expr_k656, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_k661, env)}));
 }
}
static void _V0expand__library__expr_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda182" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__library__expr_lambda183) (bruijn ##input.35 0 0))
V_CALL_FUNC(_V0expand__library__expr_lambda183, env, runtime,
      _var0);
 }
}
static void _V0expand__library__expr_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda181" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda181, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda181, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__library__expr_lambda182) (bruijn expr 1 1))
V_CALL_FUNC(_V0expand__library__expr_lambda182, env, runtime,
      upenv->vars[1]);
 }
}
static void _V0expand__library__expr_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__library__expr_lambda180" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__library__expr_lambda180, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library__expr_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn call/cc 11 9) (bruijn ##k.1505 0 0) (close _V0expand__library__expr_lambda181))
V_CALL(VGetArg(upenv, 11-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_lambda181, env)}));
 }
}
static void _V0expand__library_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k616" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k617) (bruijn expand-library-expr 5 5) (close _V0expand__library__expr_lambda180))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k617, env)}),
      VEncodeInt(5l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library__expr_lambda180, env)})
    );
 }
}
static void _V0extract__exports_k722(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extract__exports_k722" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extract__exports_k722, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extract__exports_k722, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##x.33 0 0) ((bruijn cdr 12 1) (bruijn ##k.1609 2 0) (bruijn ##x.33 0 0)) ((bruijn ##k.1609 2 0) '()))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
} else {
V_CALL(upenv->up->vars[0], runtime,
      VNULL);
}
 }
}
static void _V0extract__exports_k721(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0extract__exports_k721" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0extract__exports_k721, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extract__exports_k721, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn assoc 11 25) (close _V0extract__exports_k722) 'export (bruijn ##x.1610 0 0))
V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extract__exports_k722, env)}),
      _V0export,
      _var0);
 }
}
static void _V0extract__exports_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0extract__exports_lambda191" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0extract__exports_lambda191, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0extract__exports_lambda191, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn cddr 10 33) (close _V0extract__exports_k721) (bruijn lib 0 1))
V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extract__exports_k721, env)}),
      _var1);
 }
}
static void _V0expand__library_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k615" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k616) (bruijn extract-exports 4 4) (close _V0extract__exports_lambda191))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k616, env)}),
      VEncodeInt(4l), VEncodeInt(4l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0extract__exports_lambda191, env)})
    );
 }
}
static void _V0expand__library_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k614" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k615) (bruijn mangled-imports 3 3) '())
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k615, env)}),
      VEncodeInt(3l), VEncodeInt(3l),
      VNULL
    );
 }
}
static void _V0expand__library_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k613" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k613, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k614) (bruijn imports 2 2) '())
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k614, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      VNULL
    );
 }
}
static void _V0expand__library_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__library_k612" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__library_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_k612, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0expand__library_k613) (bruijn exports 1 1) '())
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k613, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      VNULL
    );
 }
}
static void _V0make__library__output_k724(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k724" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k724, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k724, runtime, upenv, 1, argc, _var0) {
  // ((bruijn expand-syntax 7 9) (bruijn ##k.1611 2 0) (bruijn ##x.1612 0 0))
V_CALL(VGetArg(upenv, 7-1, 9), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0make__library__output_k723(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k723" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k723, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k723, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn list 7 20) (close _V0make__library__output_k724) 'quasiquote (bruijn ##x.1613 0 0))
V_CALL(VGetArg(upenv, 7-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k724, env)}),
      _V0quasiquote,
      _var0);
 }
}
static void _V0make__library__output_k725(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0make__library__output_k725" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0make__library__output_k725, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_k725, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 0) (bruijn ##k.1614 1 0) (bruijn e 1 1) (bruijn ##x.1615 0 0))
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0make__library__output_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda193" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_lambda193, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn list 7 20) (close _V0make__library__output_k725) 'unquote (bruijn e 0 1))
V_CALL(VGetArg(upenv, 7-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k725, env)}),
      _V0unquote,
      _var1);
 }
}
static void _V0make__library__output_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0make__library__output_lambda192" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0make__library__output_lambda192, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0make__library__output_lambda192, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn map 6 14) (close _V0make__library__output_k723) (close _V0make__library__output_lambda193) (bruijn exports 0 1))
V_CALL(VGetArg(upenv, 6-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_k723, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_lambda193, env)}),
      _var1);
 }
}
static void _V0expand__library_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "_V0expand__library_lambda175" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda175, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
  struct { VEnv env; VWORD argv[8]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 8, 8, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  // (set! (close _V0expand__library_k612) (bruijn make-library-output 0 0) (close _V0make__library__output_lambda192))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_k612, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0make__library__output_lambda192, env)})
    );
 }
}
static void _V0expand__library_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__library_lambda174" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__library_lambda174, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__library_lambda174, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V0expand__library_lambda175) #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0expand__library_lambda175, env, runtime,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k49) (bruijn expand-library 2 2) (close _V0expand__library_lambda174))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k49, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__library_lambda174, env)})
    );
 }
}
static void _V0expand__quasiquote_k730(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k730" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k730, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k730, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 7 1) (bruijn ##k.1683 4 0) (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (##inline ##sys.cons 'quasiquote (##inline ##sys.cons 'quasiquote '())) (##inline ##sys.cons (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (bruijn ##x.1693 0 0) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons '() '())) '()))) '()))))
V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        VInlineCons(
        _V0quasiquote,
        VInlineCons(
        _V0quasiquote,
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
 }
}
static void _V0expand__quasiquote_k729(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k729" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k729, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k729, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 9 1) (close _V0expand__quasiquote_k730) (bruijn ##x.1697 0 0) (##inline ##sys.car (bruijn ##expr.26 1 0)))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k730, env)}),
      _var0,
      VInlineCar(
        upenv->vars[0]));
 }
}
static void _V0expand__quasiquote_k728(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k728" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k728, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k728, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.26 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.26 0 0))) ((bruijn + 9 35) (close _V0expand__quasiquote_k729) (bruijn quotation 6 1) 1) ((bruijn ##k.1683 2 0) #f)) ((bruijn ##k.1683 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 9-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k729, env)}),
      VGetArg(upenv, 6-1, 1),
      VEncodeInt(1l));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k727(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k727" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k727, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k727, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1684 0 0) ((close _V0expand__quasiquote_k728) (##inline ##sys.cdr (bruijn ##expr.25 2 0))) ((bruijn ##k.1683 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k728, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k726(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k726" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k726, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k726, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.25 1 0)) ((bruijn equal? 7 7) (close _V0expand__quasiquote_k727) 'quasiquote (##inline ##sys.car (bruijn ##expr.25 1 0))) ((bruijn ##k.1683 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k727, env)}),
      _V0quasiquote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k739(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k739" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k739, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k739, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1668 2 0) (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (##inline ##sys.cons 'quasiquote (##inline ##sys.cons 'unquote '())) (##inline ##sys.cons (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (bruijn ##x.1674 0 0) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons '() '())) '()))) '()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        VInlineCons(
        _V0quasiquote,
        VInlineCons(
        _V0unquote,
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        _var0,
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VNULL,
        VNULL)),
        VNULL))),
        VNULL))));
 }
}
static void _V0expand__quasiquote_k738(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k738" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k738, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k738, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 14 1) (close _V0expand__quasiquote_k739) (bruijn ##x.1678 0 0) (bruijn x 3 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k739, env)}),
      _var0,
      upenv->up->up->vars[0]);
 }
}
static void _V0expand__quasiquote_k737(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k737" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k737, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k737, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1667 1 0) ((bruijn ##k.1668 0 0) (bruijn x 2 0)) ((bruijn - 14 36) (close _V0expand__quasiquote_k738) (bruijn quotation 11 1) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(_var0, runtime,
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 14-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k738, env)}),
      VGetArg(upenv, 11-1, 1),
      VEncodeInt(1l));
}
 }
}
static void _V0expand__quasiquote_k740(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k740" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k740, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k740, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 10 1) (bruijn ##k.1662 5 0) (bruijn ##x.1666 0 0))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V0expand__quasiquote_k736(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k736" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k736, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k736, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k737) (close _V0expand__quasiquote_k740))
V_CALL_FUNC(_V0expand__quasiquote_k737, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k740, env)}));
 }
}
static void _V0expand__quasiquote_k735(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k735" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k735, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k735, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.28 1 0))) ((bruijn = 12 37) (close _V0expand__quasiquote_k736) (bruijn quotation 9 1) 1) ((bruijn ##k.1662 3 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k736, env)}),
      VGetArg(upenv, 9-1, 1),
      VEncodeInt(1l));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k734(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k734" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k734, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k734, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.28 0 0)) ((close _V0expand__quasiquote_k735) (##inline ##sys.car (bruijn ##expr.28 0 0))) ((bruijn ##k.1662 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__quasiquote_k735, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k733(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k733" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k733, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k733, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1663 0 0) ((close _V0expand__quasiquote_k734) (##inline ##sys.cdr (bruijn ##expr.27 2 0))) ((bruijn ##k.1662 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k734, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k732(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k732" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k732, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k732, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.27 1 0)) ((bruijn equal? 9 7) (close _V0expand__quasiquote_k733) 'unquote (##inline ##sys.car (bruijn ##expr.27 1 0))) ((bruijn ##k.1662 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k733, env)}),
      _V0unquote,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k750(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k750" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k750, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k750, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1640 1 0) (##inline ##sys.cons 'append (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (bruijn ##x.1643 0 0) '()))))
V_CALL(upenv->vars[0], runtime,
      VInlineCons(
        _V0append,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__quasiquote_k753(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k753" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k753, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k753, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.1640 3 0) (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (##inline ##sys.cons 'quasiquote (##inline ##sys.cons 'unquote-splicing '())) (##inline ##sys.cons (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (bruijn ##x.1653 1 0) (##inline ##sys.cons (##inline ##sys.cons 'quote (##inline ##sys.cons '() '())) '()))) (##inline ##sys.cons (bruijn ##x.1651 0 0) '())))) '())))
V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        VInlineCons(
        _V0quasiquote,
        VInlineCons(
        _V0unquote__splicing,
        VNULL)),
        VInlineCons(
        VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        VInlineCons(
        _V0quote,
        VInlineCons(
        VNULL,
        VNULL)),
        VNULL))),
        VInlineCons(
        _var0,
        VNULL)))),
        VNULL)));
 }
}
static void _V0expand__quasiquote_k752(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k752" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k752, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k752, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 19 1) (close _V0expand__quasiquote_k753) (bruijn quotation 17 1) (bruijn y 4 0))
V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k753, env)}),
      VGetArg(upenv, 17-1, 1),
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__quasiquote_k751(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k751" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k751, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k751, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 18 1) (close _V0expand__quasiquote_k752) (bruijn ##x.1657 0 0) (bruijn x 4 0))
V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k752, env)}),
      _var0,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__quasiquote_k749(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k749" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k749, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k749, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1639 1 0) ((bruijn expand-quasiquote 17 1) (close _V0expand__quasiquote_k750) (bruijn quotation 15 1) (bruijn y 2 0)) ((bruijn - 18 36) (close _V0expand__quasiquote_k751) (bruijn quotation 15 1) 1))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k750, env)}),
      VGetArg(upenv, 15-1, 1),
      upenv->up->vars[0]);
} else {
V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k751, env)}),
      VGetArg(upenv, 15-1, 1),
      VEncodeInt(1l));
}
 }
}
static void _V0expand__quasiquote_k754(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k754" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k754, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k754, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 14 1) (bruijn ##k.1633 7 0) (bruijn ##x.1638 0 0))
V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V0expand__quasiquote_k748(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k748" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k748, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k748, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k749) (close _V0expand__quasiquote_k754))
V_CALL_FUNC(_V0expand__quasiquote_k749, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k754, env)}));
 }
}
static void _V0expand__quasiquote_k747(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k747" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k747, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k747, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn = 16 37) (close _V0expand__quasiquote_k748) (bruijn quotation 13 1) 1)
V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k748, env)}),
      VGetArg(upenv, 13-1, 1),
      VEncodeInt(1l));
 }
}
static void _V0expand__quasiquote_k746(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k746" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k746, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k746, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.31 1 0))) ((close _V0expand__quasiquote_k747) (##inline ##sys.cdr (bruijn ##expr.29 5 0))) ((bruijn ##k.1633 4 0) #f))
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        upenv->vars[0])))) {
V_CALL_FUNC(_V0expand__quasiquote_k747, env, runtime,
      VInlineCdr(
        VGetArg(upenv, 5-1, 0)));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k745(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k745" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k745, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k745, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.31 0 0)) ((close _V0expand__quasiquote_k746) (##inline ##sys.car (bruijn ##expr.31 0 0))) ((bruijn ##k.1633 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0expand__quasiquote_k746, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k744(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k744" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k744, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k744, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1635 0 0) ((close _V0expand__quasiquote_k745) (##inline ##sys.cdr (bruijn ##expr.30 1 0))) ((bruijn ##k.1633 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0expand__quasiquote_k745, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k743(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k743" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k743, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k743, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.30 0 0)) ((bruijn equal? 12 7) (close _V0expand__quasiquote_k744) 'unquote-splicing (##inline ##sys.car (bruijn ##expr.30 0 0))) ((bruijn ##k.1633 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k744, env)}),
      _V0unquote__splicing,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k742(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k742" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k742, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k742, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.29 1 0)) ((close _V0expand__quasiquote_k743) (##inline ##sys.car (bruijn ##expr.29 1 0))) ((bruijn ##k.1633 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0expand__quasiquote_k743, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k758(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k758" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k758, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k758, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.23 11 1) (bruijn ##k.1626 2 0) (##inline ##sys.cons '##sys.cons (##inline ##sys.cons (bruijn ##x.1629 1 0) (##inline ##sys.cons (bruijn ##x.1631 0 0) '()))))
V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      VInlineCons(
        _V10sys_Dcons,
        VInlineCons(
        upenv->vars[0],
        VInlineCons(
        _var0,
        VNULL))));
 }
}
static void _V0expand__quasiquote_k757(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k757" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k757, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k757, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn expand-quasiquote 13 1) (close _V0expand__quasiquote_k758) (bruijn quotation 11 1) (##inline ##sys.cdr (bruijn ##expr.32 2 0)))
V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k758, env)}),
      VGetArg(upenv, 11-1, 1),
      VInlineCdr(
        upenv->up->vars[0]));
 }
}
static void _V0expand__quasiquote_k756(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k756" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k756, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k756, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.32 1 0)) ((bruijn expand-quasiquote 12 1) (close _V0expand__quasiquote_k757) (bruijn quotation 10 1) (##inline ##sys.car (bruijn ##expr.32 1 0))) ((bruijn ##k.1626 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k757, env)}),
      VGetArg(upenv, 10-1, 1),
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0expand__quasiquote_k760(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k760" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k760, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k760, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 15 21) (bruijn ##k.1617 11 0) (##string ##string.1815))
V_CALL(VGetArg(upenv, 15-1, 21), runtime,
      VGetArg(upenv, 11-1, 0),
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
 }
}
static void _V0expand__quasiquote_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda201" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##kk.23 10 1) (close _V0expand__quasiquote_k760) (##inline ##sys.cons 'quote (##inline ##sys.cons (bruijn x 0 0) '())))
V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k760, env)}),
      VInlineCons(
        _V0quote,
        VInlineCons(
        _var0,
        VNULL)));
 }
}
static void _V0expand__quasiquote_k759(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k759" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k759, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k759, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda201) (bruijn ##input.24 8 0))
V_CALL_FUNC(_V0expand__quasiquote_lambda201, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V0expand__quasiquote_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda200" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k756) (close _V0expand__quasiquote_k759))
V_CALL_FUNC(_V0expand__quasiquote_k756, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k759, env)}));
 }
}
static void _V0expand__quasiquote_k755(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k755" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k755, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k755, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda200) (bruijn ##input.24 6 0))
V_CALL_FUNC(_V0expand__quasiquote_lambda200, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V0expand__quasiquote_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda199" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k742) (close _V0expand__quasiquote_k755))
V_CALL_FUNC(_V0expand__quasiquote_k742, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k755, env)}));
 }
}
static void _V0expand__quasiquote_k741(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k741" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k741, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k741, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda199) (bruijn ##input.24 4 0))
V_CALL_FUNC(_V0expand__quasiquote_lambda199, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0expand__quasiquote_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda198" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k732) (close _V0expand__quasiquote_k741))
V_CALL_FUNC(_V0expand__quasiquote_k732, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k741, env)}));
 }
}
static void _V0expand__quasiquote_k731(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_k731" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0expand__quasiquote_k731, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_k731, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda198) (bruijn ##input.24 2 0))
V_CALL_FUNC(_V0expand__quasiquote_lambda198, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0expand__quasiquote_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda197" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_k726) (close _V0expand__quasiquote_k731))
V_CALL_FUNC(_V0expand__quasiquote_k726, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_k731, env)}));
 }
}
static void _V0expand__quasiquote_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda196" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0expand__quasiquote_lambda197) (bruijn ##input.24 0 0))
V_CALL_FUNC(_V0expand__quasiquote_lambda197, env, runtime,
      _var0);
 }
}
static void _V0expand__quasiquote_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda195" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda195, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda195, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0expand__quasiquote_lambda196) (bruijn expr 1 2))
V_CALL_FUNC(_V0expand__quasiquote_lambda196, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0expand__quasiquote_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0expand__quasiquote_lambda194" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0expand__quasiquote_lambda194, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0expand__quasiquote_lambda194, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 3 9) (bruijn ##k.1616 0 0) (close _V0expand__quasiquote_lambda195))
V_CALL(upenv->up->up->vars[9], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_lambda195, env)}));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k48) (bruijn expand-quasiquote 1 1) (close _V0expand__quasiquote_lambda194))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k48, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0expand__quasiquote_lambda194, env)})
    );
 }
}
static void _V0collect__defines_k761(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0collect__defines_k761" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0collect__defines_k761, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_k761, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1701 2 0) '() (bruijn body 2 1))
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      VNULL,
      upenv->up->vars[1]);
 }
}
static void _V0loop_k768(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k768" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k768, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 9 1) (bruijn ##k.1771 6 0) (bruijn ##x.1776 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V0loop_k767(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k767" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k767, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k767, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 10 0) (close _V0loop_k768) (bruijn ##x.1777 0 0) (##inline ##sys.cdr (bruijn ##expr.3 6 0)))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k768, env)}),
      _var0,
      VInlineCdr(
        VGetArg(upenv, 6-1, 0)));
 }
}
static void _V0loop_k766(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k766" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k766, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k766, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.6 0 0)) ((bruijn cons 12 0) (close _V0loop_k767) (##inline ##sys.cons 'define (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.6 0 0)) (##inline ##sys.cons (##inline ##sys.cons 'lambda (##inline ##sys.cons (##inline ##sys.cdr (bruijn ##expr.6 0 0)) (##inline ##sys.cdr (bruijn ##expr.5 1 0)))) '()))) (bruijn defines 8 1)) ((bruijn ##k.1771 4 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k767, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        VInlineCar(
        _var0),
        VInlineCons(
        VInlineCons(
        _V0lambda,
        VInlineCons(
        VInlineCdr(
        _var0),
        VInlineCdr(
        upenv->vars[0]))),
        VNULL))),
      VGetArg(upenv, 8-1, 1));
} else {
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k765(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k765" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k765, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k765, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.5 0 0)) ((close _V0loop_k766) (##inline ##sys.car (bruijn ##expr.5 0 0))) ((bruijn ##k.1771 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0loop_k766, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k764(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k764" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k764, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k764, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1773 0 0) ((close _V0loop_k765) (##inline ##sys.cdr (bruijn ##expr.4 1 0))) ((bruijn ##k.1771 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k765, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k763(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k763" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k763, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k763, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.4 0 0)) ((bruijn equal? 9 7) (close _V0loop_k764) 'define (##inline ##sys.car (bruijn ##expr.4 0 0))) ((bruijn ##k.1771 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k764, env)}),
      _V0define,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k762(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k762" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k762, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k762, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.3 1 0)) ((close _V0loop_k763) (##inline ##sys.car (bruijn ##expr.3 1 0))) ((bruijn ##k.1771 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0loop_k763, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k778(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k778" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k778, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k778, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##p.1765 1 0) ((bruijn compiler-error 18 15) (bruijn ##k.1766 0 0) (##string ##string.1810) (bruijn x 4 0)) ((bruijn ##k.1766 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      _var0,
      VEncodePointer(&_V10string_D1810.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[0]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k781(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k781" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k781, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k781, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 15 1) (bruijn ##k.1753 10 0) (bruijn ##x.1759 0 0))
V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      _var0);
 }
}
static void _V0loop_k780(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k780" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k780, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k780, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn loop 16 0) (close _V0loop_k781) (bruijn ##x.1761 0 0) (##inline ##sys.cdr (bruijn ##expr.7 10 0)))
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k781, env)}),
      _var0,
      VInlineCdr(
        VGetArg(upenv, 10-1, 0)));
 }
}
static void _V0loop_k779(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k779" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k779, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k779, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn cons 18 0) (close _V0loop_k780) (##inline ##sys.cons 'define (##inline ##sys.cons (bruijn x 4 0) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.10 3 0)) '()))) (bruijn defines 14 1))
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k780, env)}),
      VInlineCons(
        _V0define,
        VInlineCons(
        upenv->up->up->up->vars[0],
        VInlineCons(
        VInlineCar(
        upenv->up->up->vars[0]),
        VNULL))),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V0loop_k777(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k777" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k777, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k777, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k778) (close _V0loop_k779))
V_CALL_FUNC(_V0loop_k778, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k779, env)}));
 }
}
static void _V0loop_k776(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k776" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k776, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k776, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn not 16 12) (close _V0loop_k777) (bruijn ##x.1767 0 0))
V_CALL(VGetArg(upenv, 16-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k777, env)}),
      _var0);
 }
}
static void _V0loop_k775(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k775" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k775, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k775, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.10 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.10 0 0))) ((bruijn symbol? 15 13) (close _V0loop_k776) (bruijn x 1 0)) ((bruijn ##k.1753 5 0) #f)) ((bruijn ##k.1753 5 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 15-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k776, env)}),
      upenv->vars[0]);
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
} else {
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k774(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k774" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k774, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k774, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k775) (##inline ##sys.cdr (bruijn ##expr.9 1 0)))
V_CALL_FUNC(_V0loop_k775, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
 }
}
static void _V0loop_k773(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k773" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k773, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k773, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.9 0 0)) ((close _V0loop_k774) (##inline ##sys.car (bruijn ##expr.9 0 0))) ((bruijn ##k.1753 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0loop_k774, env, runtime,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k772(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k772" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k772, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k772, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1755 0 0) ((close _V0loop_k773) (##inline ##sys.cdr (bruijn ##expr.8 1 0))) ((bruijn ##k.1753 2 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k773, env, runtime,
      VInlineCdr(
        upenv->vars[0]));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k771(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k771" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k771, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k771, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.8 0 0)) ((bruijn equal? 11 7) (close _V0loop_k772) 'define (##inline ##sys.car (bruijn ##expr.8 0 0))) ((bruijn ##k.1753 1 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL(VGetArg(upenv, 11-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k772, env)}),
      _V0define,
      VInlineCar(
        _var0));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k770(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k770" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k770, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k770, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.7 1 0)) ((close _V0loop_k771) (##inline ##sys.car (bruijn ##expr.7 1 0))) ((bruijn ##k.1753 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL_FUNC(_V0loop_k771, env, runtime,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k785(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k785" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k785, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k785, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 9 1) (bruijn ##k.1747 2 0) (bruijn ##x.1749 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V0loop_k784(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k784" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k784, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k784, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1748 0 0) ((bruijn compiler-error 13 15) (close _V0loop_k785) (##string ##string.1811) (##inline ##sys.cons 'define (##inline ##sys.cdr (bruijn ##expr.11 2 0)))) ((bruijn ##k.1747 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL(VGetArg(upenv, 13-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k785, env)}),
      VEncodePointer(&_V10string_D1811.sym, VPOINTER_OTHER),
      VInlineCons(
        _V0define,
        VInlineCdr(
        upenv->up->vars[0])));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k783(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k783" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k783, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k783, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.11 1 0)) ((bruijn equal? 12 7) (close _V0loop_k784) 'define (##inline ##sys.car (bruijn ##expr.11 1 0))) ((bruijn ##k.1747 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 12-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k784, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k787(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k787" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k787, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k787, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.1 8 1) (bruijn ##k.1704 8 0) (bruijn ##x.1708 0 0))
V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V0loop_k789(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k789" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k789, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k789, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.null? (bruijn ##input.13 1 0)) ((bruijn ##kk.12 2 1) (bruijn ##k.1744 0 0) (##inline ##sys.cons 'begin (bruijn body 11 2))) ((bruijn ##k.1744 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        upenv->vars[0]))) {
V_CALL(upenv->up->vars[1], runtime,
      _var0,
      VInlineCons(
        _V0begin,
        VGetArg(upenv, 11-1, 2)));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k791(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k791" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k791, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k791, runtime, upenv, 1, argc, _var0) {
  // ((bruijn error 17 21) (bruijn ##k.1709 4 0) (##string ##string.1815))
V_CALL(VGetArg(upenv, 17-1, 21), runtime,
      upenv->up->up->up->vars[0],
      VEncodePointer(&_V10string_D1815.sym, VPOINTER_OTHER));
 }
}
static void _V0loop_k792(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k792" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k792, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k792, runtime, upenv, 1, argc, _var0) {
  // ((bruijn loop 1 0) (bruijn ##k.1713 2 0) (bruijn ##expr.14 4 0) '() '())
V_CALL(upenv->vars[0], runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VNULL,
      VNULL);
 }
}
static void _V0loop_k795(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k795" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k795, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k795, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 5 1) (bruijn ##k.1734 2 0) (bruijn ##expr.19 3 1) (bruijn ##x.1735 1 0) (bruijn ##x.1736 0 0))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k794(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k794" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k794, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k794, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 22 8) (close _V0loop_k795) (bruijn ##vals.16 2 3))
V_CALL(VGetArg(upenv, 22-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k795, env)}),
      upenv->up->vars[3]);
 }
}
static void _V0loop_k793(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k793" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k793, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k793, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.not (##inline ##sys.pair? (bruijn ##expr.19 1 1))) ((bruijn reverse 21 8) (close _V0loop_k794) (bruijn ##xs.15 1 2)) ((bruijn ##k.1734 0 0) #f))
if(VDecodeBool(
VInlineNot(
        VInlinePairP(
        upenv->vars[1])))) {
V_CALL(VGetArg(upenv, 21-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k794, env)}),
      upenv->vars[2]);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k801(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k801" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k801, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k801, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##sys.pair? (bruijn ##expr.22 0 0)) (if (##inline ##sys.null? (##inline ##sys.cdr (bruijn ##expr.22 0 0))) ((bruijn ##kk.18 5 1) (bruijn ##k.1723 3 0) (##inline ##sys.cdr (bruijn ##expr.19 8 1)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.21 1 0)) (bruijn ##xs.15 8 2)) (##inline ##sys.cons (##inline ##sys.car (bruijn ##expr.22 0 0)) (bruijn ##vals.16 8 3))) ((bruijn ##k.1723 3 0) #f)) ((bruijn ##k.1723 3 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
if(VDecodeBool(
VInlineNullP(
        VInlineCdr(
        _var0)))) {
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCdr(
        VGetArg(upenv, 8-1, 1)),
      VInlineCons(
        VInlineCar(
        upenv->vars[0]),
        VGetArg(upenv, 8-1, 2)),
      VInlineCons(
        VInlineCar(
        _var0),
        VGetArg(upenv, 8-1, 3)));
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
} else {
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k800(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k800" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k800, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k800, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.21 0 0)) ((close _V0loop_k801) (##inline ##sys.cdr (bruijn ##expr.21 0 0))) ((bruijn ##k.1723 2 0) #f))
if(VDecodeBool(
VInlinePairP(
        _var0))) {
V_CALL_FUNC(_V0loop_k801, env, runtime,
      VInlineCdr(
        _var0));
} else {
V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k799(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k799" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k799, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k799, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##p.1724 0 0) ((close _V0loop_k800) (##inline ##sys.cdr (bruijn ##expr.20 2 0))) ((bruijn ##k.1723 1 0) #f))
if(VDecodeBool(
_var0)) {
V_CALL_FUNC(_V0loop_k800, env, runtime,
      VInlineCdr(
        upenv->up->vars[0]));
} else {
V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k798(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k798" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k798, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k798, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##sys.pair? (bruijn ##expr.20 1 0)) ((bruijn equal? 25 7) (close _V0loop_k799) 'define (##inline ##sys.car (bruijn ##expr.20 1 0))) ((bruijn ##k.1723 0 0) #f))
if(VDecodeBool(
VInlinePairP(
        upenv->vars[0]))) {
V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k799, env)}),
      _V0define,
      VInlineCar(
        upenv->vars[0]));
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_k804(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k804" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k804, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k804, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.17 9 1) (bruijn ##k.1718 4 0) (bruijn ##expr.19 7 1) (bruijn ##x.1720 1 0) (bruijn ##x.1721 0 0))
V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V0loop_k803(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k803" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k803, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k803, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 26 8) (close _V0loop_k804) (bruijn ##vals.16 6 3))
V_CALL(VGetArg(upenv, 26-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k804, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V0loop_k802(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k802" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k802, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k802, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn reverse 25 8) (close _V0loop_k803) (bruijn ##xs.15 5 2))
V_CALL(VGetArg(upenv, 25-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k803, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V0loop_k797(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k797" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k797, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k797, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k798) (close _V0loop_k802))
V_CALL_FUNC(_V0loop_k798, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k802, env)}));
 }
}
static void _V0loop_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda217" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda217, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda217, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_k797) (##inline ##sys.car (bruijn ##expr.19 3 1)))
V_CALL_FUNC(_V0loop_k797, env, runtime,
      VInlineCar(
        upenv->up->up->vars[1]));
 }
}
static void _V0loop_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda216" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda216, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 22 9) (bruijn ##k.1717 0 0) (close _V0loop_lambda217))
V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda217, env)}));
 }
}
static void _V0loop_k796(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k796" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k796, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k796, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 21 10) (bruijn ##k.1715 1 0) (close _V0loop_lambda216) (bruijn loop 2 0))
V_CALL(VGetArg(upenv, 21-1, 10), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda216, env)}),
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda215" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda215, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda215, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V0loop_k793) (close _V0loop_k796))
V_CALL_FUNC(_V0loop_k793, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k796, env)}));
 }
}
static void _V0loop_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda214" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda214, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0loop_k792) (bruijn loop 0 0) (close _V0loop_lambda215))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k792, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda215, env)})
    );
 }
}
static void _V0loop_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda213" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda213, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda214) #f)
V_CALL_FUNC(_V0loop_lambda214, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0loop_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda212" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_lambda212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 17 9) (bruijn ##k.1712 0 0) (close _V0loop_lambda213))
V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda213, env)}));
 }
}
static void _V0loop_k805(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k805" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k805, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k805, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##kk.12 5 1) (bruijn ##k.1738 1 0) (##inline ##sys.cons 'letrec* (##inline ##sys.cons (bruijn ##x.1742 0 0) (bruijn body 14 2))))
V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->vars[0],
      VInlineCons(
        _V0letrec_S,
        VInlineCons(
        _var0,
        VGetArg(upenv, 14-1, 2))));
 }
}
static void _V0loop_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0loop_lambda218" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0loop_lambda218, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda218, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##sys.null? (bruijn tail-expr 0 1)) ((bruijn map 17 14) (close _V0loop_k805) (bruijn list 17 20) (bruijn xs 0 2) (bruijn vals 0 3)) ((bruijn ##k.1738 0 0) #f))
if(VDecodeBool(
VInlineNullP(
        _var1))) {
V_CALL(VGetArg(upenv, 17-1, 14), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k805, env)}),
      VGetArg(upenv, 17-1, 20),
      _var2,
      _var3);
} else {
V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V0loop_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda211" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call-with-values 16 10) (close _V0loop_k791) (close _V0loop_lambda212) (close _V0loop_lambda218))
V_CALL(VGetArg(upenv, 16-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k791, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda212, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda218, env)}));
 }
}
static void _V0loop_k790(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k790" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k790, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k790, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_lambda211) (bruijn ##input.13 1 0))
V_CALL_FUNC(_V0loop_lambda211, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0loop_k788(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k788" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k788, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k788, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k789) (close _V0loop_k790))
V_CALL_FUNC(_V0loop_k789, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k790, env)}));
 }
}
static void _V0loop_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda210" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda210, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda210, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn reverse 13 8) (close _V0loop_k788) (bruijn defines 9 1))
V_CALL(VGetArg(upenv, 13-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k788, env)}),
      VGetArg(upenv, 9-1, 1));
 }
}
static void _V0loop_k786(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k786" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k786, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k786, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn call/cc 12 9) (close _V0loop_k787) (close _V0loop_lambda210))
V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k787, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda210, env)}));
 }
}
static void _V0loop_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda209" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k783) (close _V0loop_k786))
V_CALL_FUNC(_V0loop_k783, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k786, env)}));
 }
}
static void _V0loop_k782(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k782" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k782, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k782, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_lambda209) (bruijn ##input.2 4 0))
V_CALL_FUNC(_V0loop_lambda209, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V0loop_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda208" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k770) (close _V0loop_k782))
V_CALL_FUNC(_V0loop_k770, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k782, env)}));
 }
}
static void _V0loop_k769(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_k769" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0loop_k769, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_k769, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_lambda208) (bruijn ##input.2 2 0))
V_CALL_FUNC(_V0loop_lambda208, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V0loop_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda207" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda207, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_k762) (close _V0loop_k769))
V_CALL_FUNC(_V0loop_k762, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_k769, env)}));
 }
}
static void _V0loop_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0loop_lambda206" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0loop_lambda207) (bruijn ##input.2 0 0))
V_CALL_FUNC(_V0loop_lambda207, env, runtime,
      _var0);
 }
}
static void _V0loop_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0loop_lambda205" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0loop_lambda205, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0loop_lambda206) (bruijn body 1 2))
V_CALL_FUNC(_V0loop_lambda206, env, runtime,
      upenv->vars[2]);
 }
}
static void _V0loop_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0loop_lambda204" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0loop_lambda204, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0loop_lambda204, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn call/cc 4 9) (bruijn ##k.1703 0 0) (close _V0loop_lambda205))
V_CALL(upenv->up->up->up->vars[9], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda205, env)}));
 }
}
static void _V0collect__defines_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda203" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_lambda203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0collect__defines_k761) (bruijn loop 0 0) (close _V0loop_lambda204))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0collect__defines_k761, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0loop_lambda204, env)})
    );
 }
}
static void _V0collect__defines_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0collect__defines_lambda202" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V0collect__defines_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0collect__defines_lambda202, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V0collect__defines_lambda203) #f)
V_CALL_FUNC(_V0collect__defines_lambda203, env, runtime,
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_lambda3, runtime, upenv, 10, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9) {
  struct { VEnv env; VWORD argv[10]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 10, 10, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  // (set! (close _V0vanity_V0compiler_V0expand_V20_k47) (bruijn collect-defines 0 0) (close _V0collect__defines_lambda202))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k47, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0collect__defines_lambda202, env)})
    );
 }
}
static void _V0vanity_V0compiler_V0expand_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_lambda2, runtime, upenv, 38, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37) {
  struct { VEnv env; VWORD argv[38]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 38, 38, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  env->vars[27] = _var27;
  env->vars[28] = _var28;
  env->vars[29] = _var29;
  env->vars[30] = _var30;
  env->vars[31] = _var31;
  env->vars[32] = _var32;
  env->vars[33] = _var33;
  env->vars[34] = _var34;
  env->vars[35] = _var35;
  env->vars[36] = _var36;
  env->vars[37] = _var37;
  // ((close _V0vanity_V0compiler_V0expand_V20_lambda3) #f #f #f #f #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0expand_V20_lambda3, env, runtime,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0expand_V20_lambda2) (bruijn ##x.288 37 0) (bruijn ##x.289 36 0) (bruijn ##x.290 35 0) (bruijn ##x.291 34 0) (bruijn ##x.292 33 0) (bruijn ##x.293 32 0) (bruijn ##x.294 31 0) (bruijn ##x.295 30 0) (bruijn ##x.296 29 0) (bruijn ##x.297 28 0) (bruijn ##x.298 27 0) (bruijn ##x.299 26 0) (bruijn ##x.300 25 0) (bruijn ##x.301 24 0) (bruijn ##x.302 23 0) (bruijn ##x.303 22 0) (bruijn ##x.304 21 0) (bruijn ##x.305 20 0) (bruijn ##x.306 19 0) (bruijn ##x.307 18 0) (bruijn ##x.308 17 0) (bruijn ##x.309 16 0) (bruijn ##x.310 15 0) (bruijn ##x.311 14 0) (bruijn ##x.312 13 0) (bruijn ##x.313 12 0) (bruijn ##x.314 11 0) (bruijn ##x.315 10 0) (bruijn ##x.316 9 0) (bruijn ##x.317 8 0) (bruijn ##x.318 7 0) (bruijn ##x.319 6 0) (bruijn ##x.320 5 0) (bruijn ##x.321 4 0) (bruijn ##x.322 3 0) (bruijn ##x.323 2 0) (bruijn ##x.324 1 0) (bruijn ##x.325 0 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0expand_V20_lambda2, env, runtime,
      VGetArg(upenv, 37-1, 0),
      VGetArg(upenv, 36-1, 0),
      VGetArg(upenv, 35-1, 0),
      VGetArg(upenv, 34-1, 0),
      VGetArg(upenv, 33-1, 0),
      VGetArg(upenv, 32-1, 0),
      VGetArg(upenv, 31-1, 0),
      VGetArg(upenv, 30-1, 0),
      VGetArg(upenv, 29-1, 0),
      VGetArg(upenv, 28-1, 0),
      VGetArg(upenv, 27-1, 0),
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 37 0) (close _V0vanity_V0compiler_V0expand_V20_k46) '=)
V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k46, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 36 0) (close _V0vanity_V0compiler_V0expand_V20_k45) '-)
V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k45, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 35 0) (close _V0vanity_V0compiler_V0expand_V20_k44) '+)
V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k44, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 34 0) (close _V0vanity_V0compiler_V0expand_V20_k43) 'cadr)
V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k43, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 33 0) (close _V0vanity_V0compiler_V0expand_V20_k42) 'cddr)
V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k42, env)}),
      _V0cddr);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 32 0) (close _V0vanity_V0compiler_V0expand_V20_k41) 'fold)
V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k41, env)}),
      _V0fold);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 31 0) (close _V0vanity_V0compiler_V0expand_V20_k40) 'register-library-interface!)
V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k40, env)}),
      _V0register__library__interface_B);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 30 0) (close _V0vanity_V0compiler_V0expand_V20_k39) 'header-from-library)
V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k39, env)}),
      _V0header__from__library);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 29 0) (close _V0vanity_V0compiler_V0expand_V20_k38) 'memv)
V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k38, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 28 0) (close _V0vanity_V0compiler_V0expand_V20_k37) 'filter)
V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k37, env)}),
      _V0filter);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 27 0) (close _V0vanity_V0compiler_V0expand_V20_k36) 'free-variables)
V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k36, env)}),
      _V0free__variables);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 26 0) (close _V0vanity_V0compiler_V0expand_V20_k35) 'find-library-interface!)
V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k35, env)}),
      _V0find__library__interface_B);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 25 0) (close _V0vanity_V0compiler_V0expand_V20_k34) 'assoc)
V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k34, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 24 0) (close _V0vanity_V0compiler_V0expand_V20_k33) 'pair?)
V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k33, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 23 0) (close _V0vanity_V0compiler_V0expand_V20_k32) 'car)
V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k32, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 22 0) (close _V0vanity_V0compiler_V0expand_V20_k31) 'null?)
V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k31, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 21 0) (close _V0vanity_V0compiler_V0expand_V20_k30) 'error)
V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k30, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 20 0) (close _V0vanity_V0compiler_V0expand_V20_k29) 'list)
V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k29, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 19 0) (close _V0vanity_V0compiler_V0expand_V20_k28) 'resolve-foreign-import)
V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k28, env)}),
      _V0resolve__foreign__import);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 18 0) (close _V0vanity_V0compiler_V0expand_V20_k27) 'string?)
V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k27, env)}),
      _V0string_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 17 0) (close _V0vanity_V0compiler_V0expand_V20_k26) 'mangle-library)
V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k26, env)}),
      _V0mangle__library);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 16 0) (close _V0vanity_V0compiler_V0expand_V20_k25) 'apply)
V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k25, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 15 0) (close _V0vanity_V0compiler_V0expand_V20_k24) 'compiler-error)
V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k24, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 14 0) (close _V0vanity_V0compiler_V0expand_V20_k23) 'map)
V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k23, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 13 0) (close _V0vanity_V0compiler_V0expand_V20_k22) 'symbol?)
V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k22, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 12 0) (close _V0vanity_V0compiler_V0expand_V20_k21) 'not)
V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k21, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 11 0) (close _V0vanity_V0compiler_V0expand_V20_k20) 'atom?)
V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k20, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 10 0) (close _V0vanity_V0compiler_V0expand_V20_k19) 'call-with-values)
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k19, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 9 0) (close _V0vanity_V0compiler_V0expand_V20_k18) 'call/cc)
V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k18, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 8 0) (close _V0vanity_V0compiler_V0expand_V20_k17) 'reverse)
V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k17, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 7 0) (close _V0vanity_V0compiler_V0expand_V20_k16) 'equal?)
V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k16, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 0) (close _V0vanity_V0compiler_V0expand_V20_k15) 'validate-foreign-function)
V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k15, env)}),
      _V0validate__foreign__function);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 0) (close _V0vanity_V0compiler_V0expand_V20_k14) 'transform-match)
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k14, env)}),
      _V0transform__match);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 0) (close _V0vanity_V0compiler_V0expand_V20_k13) 'eqv?)
V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k13, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 0) (close _V0vanity_V0compiler_V0expand_V20_k12) 'gensym)
V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k12, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 0) (close _V0vanity_V0compiler_V0expand_V20_k11) 'append)
V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k11, env)}),
      _V0append);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 0) (close _V0vanity_V0compiler_V0expand_V20_k10) 'cdr)
V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k10, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 0 0) (close _V0vanity_V0compiler_V0expand_V20_k9) 'cons)
V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k9, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0expand_V20_k8) (##string ##string.1824) (bruijn ##x.1784 6 0) (bruijn ##x.1785 5 0) (bruijn ##x.1786 4 0) (bruijn ##x.1787 3 0) (bruijn ##x.1788 2 0) (bruijn ##x.1789 1 0) (bruijn ##x.1790 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k8, env)}),
      VEncodePointer(&_V10string_D1824.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k7) (##string ##string.1825))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k7, env)}),
      VEncodePointer(&_V10string_D1825.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k6) (##string ##string.1826))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k6, env)}),
      VEncodePointer(&_V10string_D1826.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k5) (##string ##string.1827))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k5, env)}),
      VEncodePointer(&_V10string_D1827.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k4) (##string ##string.1828))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k4, env)}),
      VEncodePointer(&_V10string_D1828.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k3) (##string ##string.1829))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k3, env)}),
      VEncodePointer(&_V10string_D1829.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k2) (##string ##string.1830))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k2, env)}),
      VEncodePointer(&_V10string_D1830.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0expand_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0expand_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0expand_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0expand_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0expand_V20_k1) (##string ##string.1831))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0expand_V20_k1, env)}),
      VEncodePointer(&_V10string_D1831.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0expand_V20 = (VFunc)_V0vanity_V0compiler_V0expand_V20_lambda1;
