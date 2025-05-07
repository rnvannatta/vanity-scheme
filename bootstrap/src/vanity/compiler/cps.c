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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2079 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2078 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2077 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2076 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2075 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2074 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2073 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2072 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0__;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0__ = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "-" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2071 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2070 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2069 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2068 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2067 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2066 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "count-refs: malformed application" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D2065 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "internal compiler error: negative variable refcount" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2064 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2063 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "next" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2062 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2061 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2060 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2059 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2058 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10inline;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V10inline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "##inline" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0continuation;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0continuation = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "continuation" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0eq_Q = VEncodePointer(VLookupConstant("_V0eq_Q", &_VW_V0eq_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VLookupConstant("_V0hash__table___Galist", &_VW_V0hash__table___Galist), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VLookupConstant("_V0hash__table__ref", &_VW_V0hash__table__ref), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0__ = VEncodePointer(VLookupConstant("_V0__", &_VW_V0__), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VLookupConstant("_V0hash__table__set_B", &_VW_V0hash__table__set_B), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0optimize = VEncodePointer(VLookupConstant("_V0optimize", &_VW_V0optimize), VPOINTER_OTHER);
  _V0to__cps = VEncodePointer(VLookupConstant("_V0to__cps", &_VW_V0to__cps), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0import = VEncodePointer(VLookupConstant("_V0import", &_VW_V0import), VPOINTER_OTHER);
  _V10vcore_Dload__library = VEncodePointer(VLookupConstant("_V10vcore_Dload__library", &_VW_V10vcore_Dload__library), VPOINTER_OTHER);
  _V10vcore_Dmultidefine = VEncodePointer(VLookupConstant("_V10vcore_Dmultidefine", &_VW_V10vcore_Dmultidefine), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V10inline = VEncodePointer(VLookupConstant("_V10inline", &_VW_V10inline), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0continuation = VEncodePointer(VLookupConstant("_V0continuation", &_VW_V0continuation), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V10_Dapplication_Q_D286_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D286_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.812 19 0) (bruijn ##.k.827 3 0) (bruijn ##.x.829 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dapplication_Q_D286_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D286_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.820 10 0) (close _V10_Dapplication_Q_D286_k46) (bruijn ##.x.830 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D286_k46, self)})),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        _V10inline,
        VNULL)))))));
}
static void _V10_Dapplication_Q_D286_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D286_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.828 0 0) ((bruijn ##.x.821 8 0) (close _V10_Dapplication_Q_D286_k45) (bruijn ##.x.299 1 1)) ((bruijn ##.k.827 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D286_k45, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dapplication_Q_D286_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D286_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.819 9 0) (close _V10_Dapplication_Q_D286_k44) (bruijn ##.x.299 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D286_k44, self)})),
      _var1);
}
static void _V10_Dcombination_Q_D287_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D287_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.812 19 0) (bruijn ##.k.837 3 0) (bruijn ##.x.839 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dcombination_Q_D287_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D287_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.820 10 0) (close _V10_Dcombination_Q_D287_k49) (bruijn ##.x.840 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '())))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D287_k49, self)})),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)))))))))));
}
static void _V10_Dcombination_Q_D287_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D287_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.838 0 0) ((bruijn ##.x.821 8 0) (close _V10_Dcombination_Q_D287_k48) (bruijn ##.x.300 1 1)) ((bruijn ##.k.837 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D287_k48, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcombination_Q_D287_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D287_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.819 9 0) (close _V10_Dcombination_Q_D287_k47) (bruijn ##.x.300 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D287_k47, self)})),
      _var1);
}
static void _V10_Diter__lambda_D309_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D309_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.853 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.312 1 0) (bruijn ##.args.310 2 1)) (##inline ##vcore.cons (bruijn ##.x.856 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter__lambda_D309_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D309_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 4 4) (close _V10_Diter__lambda_D309_k51) (bruijn ##.body.311 1 2) (bruijn ##.k.312 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D309_k51, self)})),
      statics->vars[2],
      _var0);
}
static void _V10_Diter__lambda_D309_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D309_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.792 40 0) (close _V10_Diter__lambda_D309_k50) (##string ##.string.2058))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D309_k50, self)})),
      VEncodePointer(&_V10_Dstring_D2058.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D302_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.920 0 0) (bruijn ##.k.915 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D302_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 31 0) (bruijn ##.k.921 1 0) 'lambda (bruijn ##.x.922 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      statics->vars[0],
      _V0lambda,
      _var0);
}
static void _V10_Diter__atom_D302_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-lambda.309 6 0) (close _V10_Diter__atom_D302_k57) (##inline ##vcore.car (bruijn ##.expr.11.316 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.318 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k57, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter__atom_D302_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.318 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.318 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D302_k56) (close _V10_Diter__atom_D302_lambda8) (bruijn ##.kk.8.313 4 1)) ((bruijn ##.k.915 3 0) #f)) ((bruijn ##.k.915 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k56, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda8, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.316 0 0)) ((close _V10_Diter__atom_D302_k55) (##inline ##vcore.cdr (bruijn ##.expr.11.316 0 0))) ((bruijn ##.k.915 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k55, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.916 0 0) ((close _V10_Diter__atom_D302_k54) (##inline ##vcore.cdr (bruijn ##.x.308 4 1))) ((bruijn ##.k.915 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k54, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.308 3 1)) ((bruijn ##.x.826 7 0) (close _V10_Diter__atom_D302_k53) 'lambda (##inline ##vcore.car (bruijn ##.x.308 3 1))) ((bruijn ##.k.915 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k53, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D323_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.322 5 1) (bruijn ##.k.904 2 0) (bruijn ##.expr.19.324 3 1) (bruijn ##.x.905 1 0) (bruijn ##.x.906 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D323_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 37 0) (close _V10_Dloop_D323_k63) (bruijn ##.body.16.326 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k63, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D323_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.19.324 1 1))) ((bruijn ##.x.804 36 0) (close _V10_Dloop_D323_k62) (bruijn ##.args.15.325 1 2)) ((bruijn ##.k.904 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k62, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D323_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.330 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.330 0 0))) ((bruijn ##.kk.18.327 3 1) (bruijn ##.k.896 1 0) (##inline ##vcore.cdr (bruijn ##.expr.19.324 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.20.328 2 0)) (bruijn ##.args.15.325 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.330 0 0)) (bruijn ##.body.16.326 6 3))) ((bruijn ##.k.896 1 0) #f)) ((bruijn ##.k.896 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D323_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.328 1 0)) ((close _V10_Dloop_D323_k67) (##inline ##vcore.cdr (bruijn ##.expr.20.328 1 0))) ((bruijn ##.k.896 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D323_k67, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D323_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.322 9 1) (bruijn ##.k.891 4 0) (bruijn ##.expr.19.324 7 1) (bruijn ##.x.893 1 0) (bruijn ##.x.894 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D323_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 41 0) (close _V10_Dloop_D323_k70) (bruijn ##.body.16.326 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k70, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D323_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 40 0) (close _V10_Dloop_D323_k69) (bruijn ##.args.15.325 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k69, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D323_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D323_k66) (close _V10_Dloop_D323_k68))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D323_k66, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k68, self)})));
}
static void _V10_Dloop_D323_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D323_k65) (##inline ##vcore.car (bruijn ##.expr.19.324 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D323_k65, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D323_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.890 0 0) (close _V10_Dloop_D323_lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_lambda13, self)})));
}
static void _V10_Dloop_D323_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.888 1 0) (close _V10_Dloop_D323_lambda12) (bruijn ##.loop.323 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_lambda12, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D323_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D323_lambda11, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D323_k61) (close _V10_Dloop_D323_k64))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D323_k61, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_k64, self)})));
}
static void _V10_Diter__atom_D302_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D323_lambda11)) ((bruijn ##.loop.323 0 0) (bruijn ##.k.887 1 0) (##inline ##vcore.cdr (bruijn ##.x.308 8 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D323_lambda11, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__atom_D302_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.886 0 0) (close _V10_Diter__atom_D302_lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda10, self)})));
}
static void _V10_Diter__atom_D302_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.910 0 0) (bruijn ##.k.908 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D302_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 31 0) (bruijn ##.k.911 1 0) 'case-lambda (bruijn ##.x.912 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      statics->vars[0],
      _V0case__lambda,
      _var0);
}
static void _V10_Diter__atom_D302_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 32 0) (close _V10_Diter__atom_D302_k72) (bruijn ##.iter-lambda.309 6 0) (bruijn ##.args.333 1 2) (bruijn ##.body.334 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k72, self)})),
      VGetArg(statics, 6-1, 0),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Diter__atom_D302_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.332 0 1)) (##vcore.call-with-values (close _V10_Diter__atom_D302_k71) (close _V10_Diter__atom_D302_lambda15) (bruijn ##.kk.8.313 4 1)) ((bruijn ##.k.908 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k71, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda15, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.885 0 0) (##vcore.call-with-values (bruijn ##.k.884 1 0) (close _V10_Diter__atom_D302_lambda9) (close _V10_Diter__atom_D302_lambda14)) ((bruijn ##.k.884 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda9, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda14, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.308 4 1)) ((bruijn ##.x.826 8 0) (close _V10_Diter__atom_D302_k60) 'case-lambda (##inline ##vcore.car (bruijn ##.x.308 4 1))) ((bruijn ##.k.884 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k60, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.880 0 0) (bruijn ##.k.878 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter__atom_D302_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.881 0 0) (bruijn ##.x.308 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Diter__atom_D302_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.879 0 0) (##vcore.call-with-values (close _V10_Diter__atom_D302_k76) (close _V10_Diter__atom_D302_lambda16) (bruijn ##.kk.8.313 4 1)) ((bruijn ##.k.878 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k76, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda16, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.308 5 1)) ((bruijn ##.x.826 9 0) (close _V10_Diter__atom_D302_k75) '##foreign.function (##inline ##vcore.car (bruijn ##.x.308 5 1))) ((bruijn ##.k.878 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k75, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.873 0 0) (bruijn ##.k.869 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Diter__atom_D302_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.874 0 0) (bruijn ##.x.308 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Diter__atom_D302_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.337 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.24.337 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D302_k81) (close _V10_Diter__atom_D302_lambda17) (bruijn ##.kk.8.313 6 1)) ((bruijn ##.k.869 2 0) #f)) ((bruijn ##.k.869 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k81, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda17, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.870 0 0) ((close _V10_Diter__atom_D302_k80) (##inline ##vcore.cdr (bruijn ##.x.308 7 1))) ((bruijn ##.k.869 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k80, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.308 6 1)) ((bruijn ##.x.826 10 0) (close _V10_Diter__atom_D302_k79) 'quote (##inline ##vcore.car (bruijn ##.x.308 6 1))) ((bruijn ##.k.869 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k79, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.866 0 0) (bruijn ##.k.865 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D302_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 32 0) (bruijn ##.k.867 0 0) (##string ##.string.2059))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2059.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D302_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.308 7 1)) (##vcore.call-with-values (close _V10_Diter__atom_D302_k84) (close _V10_Diter__atom_D302_lambda18) (bruijn ##.kk.8.313 5 1)) ((bruijn ##.k.865 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k84, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda18, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D302_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.863 0 0) (bruijn ##.x.308 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Diter__atom_D302_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.857 5 0) (close _V10_Diter__atom_D302_lambda19) (bruijn ##.kk.8.313 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda19, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Diter__atom_D302_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D302_k83) (close _V10_Diter__atom_D302_k85))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k83, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k85, self)})));
}
static void _V10_Diter__atom_D302_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D302_k78) (close _V10_Diter__atom_D302_k82))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k78, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k82, self)})));
}
static void _V10_Diter__atom_D302_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D302_k74) (close _V10_Diter__atom_D302_k77))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k74, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k77, self)})));
}
static void _V10_Diter__atom_D302_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D302_k59) (close _V10_Diter__atom_D302_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k59, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k73, self)})));
}
static void _V10_Diter__atom_D302_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter__atom_D302_k52) (close _V10_Diter__atom_D302_k58))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D302_k52, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_k58, self)})));
}
static void _V10_Diter__atom_D302_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D302_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter__lambda_D309_lambda6)) (##vcore.call/cc (bruijn ##.k.852 1 0) (close _V10_Diter__atom_D302_lambda7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D309_lambda6, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda7, self)})));
    }
}
static void _V10_Dloop_D342_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.926 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.args.338 5 1) (##inline ##vcore.cons (bruijn ##.x.931 0 0) '()))) (bruijn ##.appl.345 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 1),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        statics->vars[0]));
}
static void _V10_Dloop_D342_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 5 4) (close _V10_Dloop_D342_k88) (bruijn ##.body.339 4 2) (bruijn ##.k.341 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k88, self)})),
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[4]);
}
static void _V10_Dloop_D342_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 11 4) (bruijn ##.k.926 8 0) (bruijn ##.x.933 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.346 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.938 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      VGetArg(statics, 8-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D342_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.342 8 0) (close _V10_Dloop_D342_k95) (bruijn ##.x.939 1 0) (bruijn ##.x.940 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k95, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D342_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D342_k94) (bruijn ##.vals.344 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k94, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D342_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D342_k93) (bruijn ##.x.346 1 0) (bruijn ##.appl.343 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k93, self)})),
      statics->vars[0],
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D342_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.821 15 0) (close _V10_Dloop_D342_k92) (bruijn ##.vals.344 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k92, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D342_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.342 8 0) (bruijn ##.k.926 7 0) (bruijn ##.x.941 1 0) (bruijn ##.x.942 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D342_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D342_k99) (bruijn ##.vals.344 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k99, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D342_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D342_k98) (bruijn ##.x.943 0 0) (bruijn ##.appl.343 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k98, self)})),
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D342_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-atom.302 7 0) (close _V10_Dloop_D342_k97) (bruijn ##.x.944 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k97, self)})),
      _var0);
}
static void _V10_Dloop_D342_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.932 0 0) ((bruijn ##.x.792 43 0) (close _V10_Dloop_D342_k91) (##string ##.string.2060)) ((bruijn ##.x.821 14 0) (close _V10_Dloop_D342_k96) (bruijn ##.vals.344 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k91, self)})),
      VEncodePointer(&_V10_Dstring_D2060.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k96, self)})),
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D342_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 7 0) (close _V10_Dloop_D342_k90) (bruijn ##.x.945 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k90, self)})),
      _var0);
}
static void _V10_Dloop_D342_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.927 0 0) ((bruijn ##.x.804 29 0) (close _V10_Dloop_D342_k87) (bruijn ##.appl.343 1 1)) ((bruijn ##.x.821 12 0) (close _V10_Dloop_D342_k89) (bruijn ##.vals.344 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k87, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k89, self)})),
      statics->vars[2]);
}
}
static void _V10_Dloop_D342_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D342_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.825 7 0) (close _V10_Dloop_D342_k86) (bruijn ##.vals.344 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_k86, self)})),
      _var2);
}
static void _V10_Diter__let_D303_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__let_D303_lambda20, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D342_lambda21)) ((bruijn ##.loop.342 0 0) (bruijn ##.k.925 1 0) '() (bruijn ##.vals.340 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D342_lambda21, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[3]);
    }
}
static void _V10_Dloop_D351_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.947 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.950 1 0) (##inline ##vcore.cons (bruijn ##.x.952 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D351_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 6 4) (close _V10_Dloop_D351_k103) (bruijn ##.body.348 5 2) (bruijn ##.k.350 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k103, self)})),
      VGetArg(statics, 5-1, 2),
      VGetArg(statics, 5-1, 4));
}
static void _V10_Dloop_D351_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 29 0) (close _V10_Dloop_D351_k102) (bruijn ##.x.811 23 0) (bruijn ##.args.347 4 1) (bruijn ##.x.953 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k102, self)})),
      VGetArg(statics, 23-1, 0),
      statics->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D351_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 11 4) (bruijn ##.k.947 8 0) (bruijn ##.x.955 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.354 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.960 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      VGetArg(statics, 8-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D351_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.351 8 0) (close _V10_Dloop_D351_k110) (bruijn ##.x.961 1 0) (bruijn ##.x.962 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k110, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D351_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D351_k109) (bruijn ##.vals.353 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k109, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D351_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D351_k108) (bruijn ##.x.354 1 0) (bruijn ##.done-vals.352 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k108, self)})),
      statics->vars[0],
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D351_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.821 15 0) (close _V10_Dloop_D351_k107) (bruijn ##.vals.353 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k107, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D351_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.351 8 0) (bruijn ##.k.947 7 0) (bruijn ##.x.963 1 0) (bruijn ##.x.964 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D351_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D351_k114) (bruijn ##.vals.353 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k114, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D351_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D351_k113) (bruijn ##.x.965 0 0) (bruijn ##.done-vals.352 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k113, self)})),
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D351_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-atom.302 7 0) (close _V10_Dloop_D351_k112) (bruijn ##.x.966 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k112, self)})),
      _var0);
}
static void _V10_Dloop_D351_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.954 0 0) ((bruijn ##.x.792 43 0) (close _V10_Dloop_D351_k106) (##string ##.string.2060)) ((bruijn ##.x.821 14 0) (close _V10_Dloop_D351_k111) (bruijn ##.vals.353 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k106, self)})),
      VEncodePointer(&_V10_Dstring_D2060.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k111, self)})),
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D351_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 7 0) (close _V10_Dloop_D351_k105) (bruijn ##.x.967 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k105, self)})),
      _var0);
}
static void _V10_Dloop_D351_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.948 0 0) ((bruijn ##.x.804 29 0) (close _V10_Dloop_D351_k101) (bruijn ##.done-vals.352 1 1)) ((bruijn ##.x.821 12 0) (close _V10_Dloop_D351_k104) (bruijn ##.vals.353 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k101, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k104, self)})),
      statics->vars[2]);
}
}
static void _V10_Dloop_D351_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D351_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.825 7 0) (close _V10_Dloop_D351_k100) (bruijn ##.vals.353 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_k100, self)})),
      _var2);
}
static void _V10_Diter__letrec_D304_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D304_lambda22, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D351_lambda23)) ((bruijn ##.loop.351 0 0) (bruijn ##.k.946 1 0) '() (bruijn ##.vals.349 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D351_lambda23, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[3]);
    }
}
static void _V10_Dloop_D357_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.969 4 0) (##inline ##vcore.cons (bruijn ##.x.971 1 0) (##inline ##vcore.cons (bruijn ##.cont.356 6 2) (bruijn ##.x.973 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 2),
        _var0)));
}
static void _V10_Dloop_D357_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 11 0) (close _V10_Dloop_D357_k118) (bruijn ##.appl.360 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k118, self)})),
      statics->vars[0]);
}
static void _V10_Dloop_D357_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.821 13 0) (close _V10_Dloop_D357_k117) (bruijn ##.appl.360 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k117, self)})),
      _var0);
}
static void _V10_Dloop_D357_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 11 4) (bruijn ##.k.969 8 0) (bruijn ##.x.975 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.361 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.980 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      VGetArg(statics, 8-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D357_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.357 8 0) (close _V10_Dloop_D357_k125) (bruijn ##.x.981 1 0) (bruijn ##.x.982 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k125, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D357_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D357_k124) (bruijn ##.args.359 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k124, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D357_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D357_k123) (bruijn ##.x.361 1 0) (bruijn ##.appl.358 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k123, self)})),
      statics->vars[0],
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D357_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.821 15 0) (close _V10_Dloop_D357_k122) (bruijn ##.args.359 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k122, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D357_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.357 8 0) (bruijn ##.k.969 7 0) (bruijn ##.x.983 1 0) (bruijn ##.x.984 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D357_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 14 0) (close _V10_Dloop_D357_k129) (bruijn ##.args.359 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k129, self)})),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Dloop_D357_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 30 0) (close _V10_Dloop_D357_k128) (bruijn ##.x.985 0 0) (bruijn ##.appl.358 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k128, self)})),
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dloop_D357_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-atom.302 7 0) (close _V10_Dloop_D357_k127) (bruijn ##.x.986 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k127, self)})),
      _var0);
}
static void _V10_Dloop_D357_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.974 0 0) ((bruijn ##.x.792 43 0) (close _V10_Dloop_D357_k121) (##string ##.string.2060)) ((bruijn ##.x.821 14 0) (close _V10_Dloop_D357_k126) (bruijn ##.args.359 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k121, self)})),
      VEncodePointer(&_V10_Dstring_D2060.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k126, self)})),
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D357_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 7 0) (close _V10_Dloop_D357_k120) (bruijn ##.x.987 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k120, self)})),
      _var0);
}
static void _V10_Dloop_D357_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.970 0 0) ((bruijn ##.x.804 29 0) (close _V10_Dloop_D357_k116) (bruijn ##.appl.358 1 1)) ((bruijn ##.x.821 12 0) (close _V10_Dloop_D357_k119) (bruijn ##.args.359 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k116, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k119, self)})),
      statics->vars[2]);
}
}
static void _V10_Dloop_D357_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D357_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.825 7 0) (close _V10_Dloop_D357_k115) (bruijn ##.args.359 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_k115, self)})),
      _var2);
}
static void _V10_Diter__combination_D305_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D305_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D357_lambda25)) ((bruijn ##.loop.357 0 0) (bruijn ##.k.968 1 0) '() (bruijn ##.args.355 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D357_lambda25, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
    }
}
static void _V10_Diter2_D306_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1137 0 0) (bruijn ##.k.1132 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Diter2_D306_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 13 4) (bruijn ##.k.1138 3 0) (bruijn ##.x.368 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1145 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1144 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter2_D306_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 12 4) (close _V10_Diter2_D306_k140) (bruijn ##.y.370 3 0) (bruijn ##.cont.363 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k140, self)})),
      statics->up->up->vars[0],
      VGetArg(statics, 11-1, 2));
}
static void _V10_Diter2_D306_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1139 0 0) ((bruijn ##.x.792 48 0) (close _V10_Diter2_D306_k139) (##string ##.string.2061)) ((bruijn ##.iter2.306 11 4) (bruijn ##.k.1138 1 0) (bruijn ##.y.370 2 0) (bruijn ##.cont.363 10 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k139, self)})),
      VEncodePointer(&_V10_Dstring_D2061.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      statics->vars[0],
      statics->up->vars[0],
      VGetArg(statics, 10-1, 2));
}
}
static void _V10_Diter2_D306_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 12 0) (close _V10_Diter2_D306_k138) (bruijn ##.x.368 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k138, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D306_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.369 1 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k137) (close _V10_Diter2_D306_lambda28) (bruijn ##.kk.25.364 6 1)) ((bruijn ##.k.1132 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k137, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda28, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.369 0 0)) ((close _V10_Diter2_D306_k136) (##inline ##vcore.car (bruijn ##.expr.29.369 0 0))) ((bruijn ##.k.1132 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k136, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k135) (##inline ##vcore.cdr (bruijn ##.expr.28.367 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k135, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D306_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.367 0 0)) ((close _V10_Diter2_D306_k134) (##inline ##vcore.car (bruijn ##.expr.28.367 0 0))) ((bruijn ##.k.1132 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k134, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1133 0 0) ((close _V10_Diter2_D306_k133) (##inline ##vcore.cdr (bruijn ##.expr.362 4 1))) ((bruijn ##.k.1132 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k133, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 3 1)) ((bruijn ##.x.826 7 0) (close _V10_Diter2_D306_k132) 'begin (##inline ##vcore.car (bruijn ##.expr.362 3 1))) ((bruijn ##.k.1132 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k132, self)})),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1098 0 0) (bruijn ##.k.1092 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
static void _V10_Diter2_D306_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 16 4) (bruijn ##.k.1099 3 0) (bruijn ##.p.373 8 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.378 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1105 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 8-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter2_D306_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 15 4) (close _V10_Diter2_D306_k153) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.sym.378 0 0) (##inline ##vcore.cons (bruijn ##.x.375 5 0) (##inline ##vcore.cons (bruijn ##.y.377 3 0) '())))) (bruijn ##.cont.363 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k153, self)})),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)))),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Diter2_D306_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1099 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.373 10 0) (##inline ##vcore.cons (bruijn ##.x.1114 1 0) (##inline ##vcore.cons (bruijn ##.x.1116 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
static void _V10_Diter2_D306_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 17 4) (close _V10_Diter2_D306_k157) (bruijn ##.y.377 5 0) (bruijn ##.cont.363 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k157, self)})),
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 16-1, 2));
}
static void _V10_Diter2_D306_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1099 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.379 2 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.373 11 0) (##inline ##vcore.cons (bruijn ##.x.1125 1 0) (##inline ##vcore.cons (bruijn ##.x.1127 0 0) '())))) '()))) (##inline ##vcore.cons (bruijn ##.cont.363 18 2) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(statics, 11-1, 0),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL))),
        VInlineCons2(runtime,
        VGetArg(statics, 18-1, 2),
        VNULL)));
}
static void _V10_Diter2_D306_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 18 4) (close _V10_Diter2_D306_k160) (bruijn ##.y.377 6 0) (bruijn ##.k.379 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k160, self)})),
      VGetArg(statics, 6-1, 0),
      statics->vars[0]);
}
static void _V10_Diter2_D306_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 17 4) (close _V10_Diter2_D306_k159) (bruijn ##.x.375 7 0) (bruijn ##.k.379 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k159, self)})),
      VGetArg(statics, 7-1, 0),
      _var0);
}
static void _V10_Diter2_D306_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1111 0 0) ((bruijn ##.iter2.306 16 4) (close _V10_Diter2_D306_k156) (bruijn ##.x.375 6 0) (bruijn ##.cont.363 15 2)) ((bruijn ##.x.792 53 0) (close _V10_Diter2_D306_k158) (##string ##.string.2058)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k156, self)})),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k158, self)})),
      VEncodePointer(&_V10_Dstring_D2058.sym, VPOINTER_OTHER));
}
}
static void _V10_Diter2_D306_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1128 0 0) ((bruijn ##.iter2.306 16 4) (bruijn ##.k.1099 3 0) (bruijn ##.y.377 4 0) (bruijn ##.cont.363 15 2)) ((bruijn ##.iter2.306 16 4) (bruijn ##.k.1099 3 0) (bruijn ##.x.375 6 0) (bruijn ##.cont.363 15 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 3,
      statics->up->up->vars[0],
      statics->up->up->up->vars[0],
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 15-1, 2));
}
}
static void _V10_Diter2_D306_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1110 0 0) ((bruijn ##.x.809 35 0) (close _V10_Diter2_D306_k155) (bruijn ##.cont.363 14 2)) ((bruijn ##.x.793 51 0) (close _V10_Diter2_D306_k161) (bruijn ##.p.373 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k155, self)})),
      VGetArg(statics, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k161, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1100 0 0) ((bruijn ##.x.792 51 0) (close _V10_Diter2_D306_k152) (##string ##.string.2062)) ((bruijn ##.x.809 34 0) (close _V10_Diter2_D306_k154) (bruijn ##.p.373 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 51-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k152, self)})),
      VEncodePointer(&_V10_Dstring_D2062.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k154, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Diter2_D306_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 15 0) (close _V10_Diter2_D306_k151) (bruijn ##.p.373 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k151, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Diter2_D306_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.376 1 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k150) (close _V10_Diter2_D306_lambda29) (bruijn ##.kk.25.364 9 1)) ((bruijn ##.k.1092 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k150, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda29, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.376 0 0)) ((close _V10_Diter2_D306_k149) (##inline ##vcore.car (bruijn ##.expr.33.376 0 0))) ((bruijn ##.k.1092 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k149, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k148) (##inline ##vcore.cdr (bruijn ##.expr.32.374 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k148, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D306_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.374 0 0)) ((close _V10_Diter2_D306_k147) (##inline ##vcore.car (bruijn ##.expr.32.374 0 0))) ((bruijn ##.k.1092 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k147, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k146) (##inline ##vcore.cdr (bruijn ##.expr.31.372 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k146, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D306_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.372 0 0)) ((close _V10_Diter2_D306_k145) (##inline ##vcore.car (bruijn ##.expr.31.372 0 0))) ((bruijn ##.k.1092 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k145, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1093 0 0) ((close _V10_Diter2_D306_k144) (##inline ##vcore.cdr (bruijn ##.expr.362 5 1))) ((bruijn ##.k.1092 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k144, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 4 1)) ((bruijn ##.x.826 8 0) (close _V10_Diter2_D306_k143) 'if (##inline ##vcore.car (bruijn ##.expr.362 4 1))) ((bruijn ##.k.1092 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k143, self)})),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1074 0 0) (bruijn ##.k.1069 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Diter2_D306_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 15 4) (bruijn ##.k.1075 3 0) (bruijn ##.x.382 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.385 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1081 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter2_D306_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 14 4) (close _V10_Diter2_D306_k172) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.sym.385 0 0) (##inline ##vcore.cons (bruijn ##.y.384 3 0) '()))) (bruijn ##.cont.363 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k172, self)})),
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))),
      VGetArg(statics, 13-1, 2));
}
static void _V10_Diter2_D306_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1076 0 0) ((bruijn ##.x.792 50 0) (close _V10_Diter2_D306_k171) (##string ##.string.2062)) ((bruijn ##.iter2.306 13 4) (bruijn ##.k.1075 1 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.382 4 0) (##inline ##vcore.cons (bruijn ##.x.382 4 0) (##inline ##vcore.cons (bruijn ##.y.384 2 0) '())))) (bruijn ##.cont.363 12 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 50-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k171, self)})),
      VEncodePointer(&_V10_Dstring_D2062.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 3,
      statics->vars[0],
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)))),
      VGetArg(statics, 12-1, 2));
}
}
static void _V10_Diter2_D306_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 14 0) (close _V10_Diter2_D306_k170) (bruijn ##.x.382 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k170, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D306_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.383 1 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k169) (close _V10_Diter2_D306_lambda30) (bruijn ##.kk.25.364 8 1)) ((bruijn ##.k.1069 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k169, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda30, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.383 0 0)) ((close _V10_Diter2_D306_k168) (##inline ##vcore.car (bruijn ##.expr.36.383 0 0))) ((bruijn ##.k.1069 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k168, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k167) (##inline ##vcore.cdr (bruijn ##.expr.35.381 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k167, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D306_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.381 0 0)) ((close _V10_Diter2_D306_k166) (##inline ##vcore.car (bruijn ##.expr.35.381 0 0))) ((bruijn ##.k.1069 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k166, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1070 0 0) ((close _V10_Diter2_D306_k165) (##inline ##vcore.cdr (bruijn ##.expr.362 6 1))) ((bruijn ##.k.1069 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k165, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 5 1)) ((bruijn ##.x.826 9 0) (close _V10_Diter2_D306_k164) 'or (##inline ##vcore.car (bruijn ##.expr.362 5 1))) ((bruijn ##.k.1069 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k164, self)})),
      _V0or,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1054 0 0) (bruijn ##.k.1044 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
static void _V10_Diter2_D306_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.306 19 4) (bruijn ##.k.1055 2 0) (bruijn ##.val.394 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.390 7 0) '()) (##inline ##vcore.cons (bruijn ##.x.1061 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 4)), 3,
      statics->up->vars[0],
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter2_D306_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.303 20 1) (bruijn ##.k.1055 3 0) (bruijn ##.x.1062 1 0) (bruijn ##.body.392 6 0) (bruijn ##.x.1063 0 0) (bruijn ##.cont.363 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 5,
      statics->up->up->vars[0],
      statics->vars[0],
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 19-1, 2));
}
static void _V10_Diter2_D306_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.811 37 0) (close _V10_Diter2_D306_k188) (bruijn ##.val.394 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k188, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D306_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((bruijn ##.iter2.306 18 4) (close _V10_Diter2_D306_k186) (bruijn ##.body.392 4 0) (bruijn ##.cont.363 17 2)) ((bruijn ##.x.811 36 0) (close _V10_Diter2_D306_k187) (bruijn ##.x.390 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k186, self)})),
      statics->up->up->up->vars[0],
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k187, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Diter2_D306_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.286 19 0) (close _V10_Diter2_D306_k185) (bruijn ##.val.394 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k185, self)})),
      statics->vars[0]);
}
static void _V10_Diter2_D306_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.393 1 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k184) (close _V10_Diter2_D306_lambda31) (bruijn ##.kk.25.364 13 1)) ((bruijn ##.k.1044 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k184, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda31, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.393 0 0)) ((close _V10_Diter2_D306_k183) (##inline ##vcore.car (bruijn ##.expr.42.393 0 0))) ((bruijn ##.k.1044 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k183, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.391 1 0))) ((close _V10_Diter2_D306_k182) (##inline ##vcore.cdr (bruijn ##.expr.362 13 1))) ((bruijn ##.k.1044 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k182, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.391 0 0)) ((close _V10_Diter2_D306_k181) (##inline ##vcore.car (bruijn ##.expr.41.391 0 0))) ((bruijn ##.k.1044 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k181, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.389 1 0))) ((close _V10_Diter2_D306_k180) (##inline ##vcore.cdr (bruijn ##.expr.39.388 2 0))) ((bruijn ##.k.1044 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k180, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.389 0 0)) ((close _V10_Diter2_D306_k179) (##inline ##vcore.car (bruijn ##.expr.40.389 0 0))) ((bruijn ##.k.1044 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k179, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.388 0 0)) ((close _V10_Diter2_D306_k178) (##inline ##vcore.car (bruijn ##.expr.39.388 0 0))) ((bruijn ##.k.1044 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k178, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1046 0 0) ((close _V10_Diter2_D306_k177) (##inline ##vcore.cdr (bruijn ##.expr.38.387 1 0))) ((bruijn ##.k.1044 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k177, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.387 0 0)) ((bruijn ##.x.826 11 0) (close _V10_Diter2_D306_k176) 'lambda (##inline ##vcore.car (bruijn ##.expr.38.387 0 0))) ((bruijn ##.k.1044 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k176, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 6 1)) ((close _V10_Diter2_D306_k175) (##inline ##vcore.car (bruijn ##.expr.362 6 1))) ((bruijn ##.k.1044 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k175, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1039 0 0) (bruijn ##.k.1033 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Diter2_D306_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.303 13 1) (bruijn ##.k.1040 0 0) (##inline ##vcore.car (bruijn ##.expr.45.397 2 0)) (##inline ##vcore.car (bruijn ##.expr.46.399 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.362 12 1)) (bruijn ##.cont.363 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 5,
      _var0,
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]),
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)),
      VGetArg(statics, 12-1, 2));
}
static void _V10_Diter2_D306_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.399 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.399 0 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k195) (close _V10_Diter2_D306_lambda32) (bruijn ##.kk.25.364 9 1)) ((bruijn ##.k.1033 4 0) #f)) ((bruijn ##.k.1033 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k195, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda32, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.397 0 0)) ((close _V10_Diter2_D306_k194) (##inline ##vcore.cdr (bruijn ##.expr.45.397 0 0))) ((bruijn ##.k.1033 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k194, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1035 0 0) ((close _V10_Diter2_D306_k193) (##inline ##vcore.cdr (bruijn ##.expr.44.396 1 0))) ((bruijn ##.k.1033 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k193, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.396 0 0)) ((bruijn ##.x.826 12 0) (close _V10_Diter2_D306_k192) 'lambda (##inline ##vcore.car (bruijn ##.expr.44.396 0 0))) ((bruijn ##.k.1033 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k192, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 7 1)) ((close _V10_Diter2_D306_k191) (##inline ##vcore.car (bruijn ##.expr.362 7 1))) ((bruijn ##.k.1033 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k191, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D406_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.405 5 1) (bruijn ##.k.1020 2 0) (bruijn ##.expr.54.407 3 1) (bruijn ##.x.1021 1 0) (bruijn ##.x.1022 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D406_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 42 0) (close _V10_Dloop_D406_k202) (bruijn ##.vals.51.409 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k202, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D406_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.54.407 1 1))) ((bruijn ##.x.804 41 0) (close _V10_Dloop_D406_k201) (bruijn ##.xs.50.408 1 2)) ((bruijn ##.k.1020 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k201, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D406_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.413 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.413 0 0))) ((bruijn ##.kk.53.410 3 1) (bruijn ##.k.1012 1 0) (##inline ##vcore.cdr (bruijn ##.expr.54.407 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.55.411 2 0)) (bruijn ##.xs.50.408 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.56.413 0 0)) (bruijn ##.vals.51.409 6 3))) ((bruijn ##.k.1012 1 0) #f)) ((bruijn ##.k.1012 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D406_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.411 1 0)) ((close _V10_Dloop_D406_k206) (##inline ##vcore.cdr (bruijn ##.expr.55.411 1 0))) ((bruijn ##.k.1012 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D406_k206, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D406_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.405 9 1) (bruijn ##.k.1007 4 0) (bruijn ##.expr.54.407 7 1) (bruijn ##.x.1009 1 0) (bruijn ##.x.1010 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D406_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 46 0) (close _V10_Dloop_D406_k209) (bruijn ##.vals.51.409 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k209, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D406_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 45 0) (close _V10_Dloop_D406_k208) (bruijn ##.xs.50.408 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k208, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D406_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D406_k205) (close _V10_Dloop_D406_k207))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D406_k205, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k207, self)})));
}
static void _V10_Dloop_D406_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D406_k204) (##inline ##vcore.car (bruijn ##.expr.54.407 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D406_k204, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D406_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1006 0 0) (close _V10_Dloop_D406_lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_lambda37, self)})));
}
static void _V10_Dloop_D406_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1004 1 0) (close _V10_Dloop_D406_lambda36) (bruijn ##.loop.406 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_lambda36, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D406_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D406_lambda35, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D406_k200) (close _V10_Dloop_D406_k203))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D406_k200, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_k203, self)})));
}
static void _V10_Diter2_D306_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D406_lambda35)) ((bruijn ##.loop.406 0 0) (bruijn ##.k.1003 1 0) (##inline ##vcore.car (bruijn ##.expr.48.403 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D406_lambda35, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter2_D306_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1002 0 0) (close _V10_Diter2_D306_lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda34, self)})));
}
static void _V10_Diter2_D306_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1028 0 0) (bruijn ##.k.1024 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter2_D306_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-letrec.304 14 2) (bruijn ##.k.1029 0 0) (bruijn ##.xs.416 2 2) (##inline ##vcore.car (bruijn ##.expr.57.418 1 0)) (bruijn ##.vals.417 2 3) (bruijn ##.cont.363 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 5,
      _var0,
      statics->up->vars[2],
      VInlineCar2(runtime,
        statics->vars[0]),
      statics->up->vars[3],
      VGetArg(statics, 13-1, 2));
}
static void _V10_Diter2_D306_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.418 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.418 0 0))) (##vcore.call-with-values (close _V10_Diter2_D306_k211) (close _V10_Diter2_D306_lambda39) (bruijn ##.kk.25.364 10 1)) ((bruijn ##.k.1024 1 0) #f)) ((bruijn ##.k.1024 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k211, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda39, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda38, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.415 0 1)) ((close _V10_Diter2_D306_k210) (##inline ##vcore.cdr (bruijn ##.expr.48.403 1 0))) ((bruijn ##.k.1024 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k210, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.403 0 0)) (##vcore.call-with-values (bruijn ##.k.999 2 0) (close _V10_Diter2_D306_lambda33) (close _V10_Diter2_D306_lambda38)) ((bruijn ##.k.999 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda33, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda38, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1000 0 0) ((close _V10_Diter2_D306_k199) (##inline ##vcore.cdr (bruijn ##.expr.362 9 1))) ((bruijn ##.k.999 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k199, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.362 8 1)) ((bruijn ##.x.826 12 0) (close _V10_Diter2_D306_k198) 'letrec (##inline ##vcore.car (bruijn ##.expr.362 8 1))) ((bruijn ##.k.999 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k198, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D306_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-combination.305 10 3) (bruijn ##.k.997 0 0) (bruijn ##.expr.362 9 1) (bruijn ##.cont.363 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      _var0,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Diter2_D306_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.990 6 0) (close _V10_Diter2_D306_lambda40) (bruijn ##.kk.25.364 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda40, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Diter2_D306_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k197) (close _V10_Diter2_D306_k212))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k197, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k212, self)})));
}
static void _V10_Diter2_D306_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k190) (close _V10_Diter2_D306_k196))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k190, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k196, self)})));
}
static void _V10_Diter2_D306_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k174) (close _V10_Diter2_D306_k189))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k174, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k189, self)})));
}
static void _V10_Diter2_D306_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k163) (close _V10_Diter2_D306_k173))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k163, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k173, self)})));
}
static void _V10_Diter2_D306_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D306_k142) (close _V10_Diter2_D306_k162))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k142, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k162, self)})));
}
static void _V10_Diter2_D306_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter2_D306_k131) (close _V10_Diter2_D306_k141))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D306_k131, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k141, self)})));
}
static void _V10_Diter2_D306_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.988 2 0) (##inline ##vcore.cons (bruijn ##.cont.363 2 2) (##inline ##vcore.cons (bruijn ##.x.1149 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[2],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter2_D306_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.989 0 0) (##vcore.call/cc (bruijn ##.k.988 1 0) (close _V10_Diter2_D306_lambda27)) ((bruijn ##.iter-atom.302 2 0) (close _V10_Diter2_D306_k213) (bruijn ##.expr.362 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda27, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k213, self)})),
      statics->vars[1]);
}
}
static void _V10_Diter2_D306_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D306_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.application?.286 3 0) (close _V10_Diter2_D306_k130) (bruijn ##.expr.362 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_k130, self)})),
      _var1);
}
static void _V10_Dto__cps__impl_D307_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D307_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1150 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.next.421 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1154 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dto__cps__impl_D307_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D307_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.306 2 4) (close _V10_Dto__cps__impl_D307_k215) (bruijn ##.expr.420 1 1) (bruijn ##.next.421 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D307_k215, self)})),
      statics->vars[1],
      _var0);
}
static void _V10_Dto__cps__impl_D307_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D307_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.792 38 0) (close _V10_Dto__cps__impl_D307_k214) (##string ##.string.2063))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D307_k214, self)})),
      VEncodePointer(&_V10_Dstring_D2063.sym, VPOINTER_OTHER));
}
static void _V10_Dto__cps_D288_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1192 0 0) (bruijn ##.k.1190 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dto__cps_D288_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1193 0 0) (bruijn ##.expr.301 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dto__cps_D288_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1191 0 0) (##vcore.call-with-values (close _V10_Dto__cps_D288_k218) (close _V10_Dto__cps_D288_lambda43) (bruijn ##.kk.0.422 2 1)) ((bruijn ##.k.1190 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k218, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda43, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.301 3 1)) ((bruijn ##.x.826 5 0) (close _V10_Dto__cps_D288_k217) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.301 3 1))) ((bruijn ##.k.1190 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k217, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1180 0 0) (bruijn ##.k.1175 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dto__cps_D288_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1181 3 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.426 5 0)) (##inline ##vcore.cons (bruijn ##.x.1184 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dto__cps_D288_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.794 44 0) (close _V10_Dto__cps_D288_k227) (bruijn ##.x.1185 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k227, self)})),
      _var0);
}
static void _V10_Dto__cps_D288_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.795 42 0) (close _V10_Dto__cps_D288_k226) (bruijn ##.x.1186 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k226, self)})),
      _var0);
}
static void _V10_Dto__cps_D288_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.to-cps-impl.307 7 5) (close _V10_Dto__cps_D288_k225) (##inline ##vcore.car (bruijn ##.expr.5.428 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k225, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dto__cps_D288_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.428 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.428 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D288_k224) (close _V10_Dto__cps_D288_lambda44) (bruijn ##.kk.0.422 5 1)) ((bruijn ##.k.1175 3 0) #f)) ((bruijn ##.k.1175 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k224, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda44, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.426 0 0)) ((close _V10_Dto__cps_D288_k223) (##inline ##vcore.cdr (bruijn ##.expr.4.426 0 0))) ((bruijn ##.k.1175 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k223, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1176 0 0) ((close _V10_Dto__cps_D288_k222) (##inline ##vcore.cdr (bruijn ##.expr.301 5 1))) ((bruijn ##.k.1175 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k222, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.301 4 1)) ((bruijn ##.x.826 6 0) (close _V10_Dto__cps_D288_k221) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.301 4 1))) ((bruijn ##.k.1175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k221, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1165 0 0) (bruijn ##.k.1161 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dto__cps_D288_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.307 8 5) (bruijn ##.k.1166 1 0) (##inline ##vcore.cons '##vcore.multidefine (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.load-library (##inline ##vcore.cons (bruijn ##.x.1171 0 0) '())) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 5)), 2,
      statics->vars[0],
      VInlineCons2(runtime,
        _V10vcore_Dmultidefine,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dload__library,
        VInlineCons2(runtime,
        _var0,
        VNULL)),
        VNULL)));
}
static void _V10_Dto__cps_D288_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.796 40 0) (close _V10_Dto__cps_D288_k233) (##inline ##vcore.car (bruijn ##.expr.7.431 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k233, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dto__cps_D288_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.431 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.431 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D288_k232) (close _V10_Dto__cps_D288_lambda45) (bruijn ##.kk.0.422 5 1)) ((bruijn ##.k.1161 2 0) #f)) ((bruijn ##.k.1161 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k232, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda45, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1162 0 0) ((close _V10_Dto__cps_D288_k231) (##inline ##vcore.cdr (bruijn ##.expr.301 6 1))) ((bruijn ##.k.1161 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k231, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.301 5 1)) ((bruijn ##.x.826 7 0) (close _V10_Dto__cps_D288_k230) 'import (##inline ##vcore.car (bruijn ##.expr.301 5 1))) ((bruijn ##.k.1161 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k230, self)})),
      _V0import,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D288_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.307 5 5) (bruijn ##.k.1159 0 0) (bruijn ##.expr.301 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dto__cps_D288_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1155 3 0) (close _V10_Dto__cps_D288_lambda46) (bruijn ##.kk.0.422 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda46, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dto__cps_D288_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dto__cps_D288_k229) (close _V10_Dto__cps_D288_k234))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k229, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k234, self)})));
}
static void _V10_Dto__cps_D288_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dto__cps_D288_k220) (close _V10_Dto__cps_D288_k228))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k220, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k228, self)})));
}
static void _V10_Dto__cps_D288_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dto__cps_D288_k216) (close _V10_Dto__cps_D288_k219))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D288_k216, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_k219, self)})));
}
static void _V10_Dto__cps_D288_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D288_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 6 ((close _V10_Diter__atom_D302_lambda5) (close _V10_Diter__let_D303_lambda20) (close _V10_Diter__letrec_D304_lambda22) (close _V10_Diter__combination_D305_lambda24) (close _V10_Diter2_D306_lambda26) (close _V10_Dto__cps__impl_D307_lambda41)) (##vcore.call/cc (bruijn ##.k.851 1 0) (close _V10_Dto__cps_D288_lambda42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D302_lambda5, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__let_D303_lambda20, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D304_lambda22, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D305_lambda24, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D306_lambda26, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D307_lambda41, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda42, self)})));
    }
}
static void _V10_Diter_D437_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1326 0 0) (bruijn ##.k.1321 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D437_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1327 1 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.61.442 3 0)) (##inline ##vcore.cons (bruijn ##.x.1330 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D437_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.437 8 0) (close _V10_Diter_D437_k241) (##inline ##vcore.car (bruijn ##.expr.62.444 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k241, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter_D437_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.444 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.444 0 0))) (##vcore.call-with-values (close _V10_Diter_D437_k240) (close _V10_Diter_D437_lambda50) (bruijn ##.kk.58.439 4 1)) ((bruijn ##.k.1321 3 0) #f)) ((bruijn ##.k.1321 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k240, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda50, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.442 0 0)) ((close _V10_Diter_D437_k239) (##inline ##vcore.cdr (bruijn ##.expr.61.442 0 0))) ((bruijn ##.k.1321 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k239, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1322 0 0) ((close _V10_Diter_D437_k238) (##inline ##vcore.cdr (bruijn ##.expr.438 4 1))) ((bruijn ##.k.1321 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k238, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 3 1)) ((bruijn ##.x.826 7 0) (close _V10_Diter_D437_k237) 'lambda (##inline ##vcore.car (bruijn ##.expr.438 3 1))) ((bruijn ##.k.1321 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k237, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1313 0 0) (bruijn ##.k.1308 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D437_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1314 1 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.64.447 3 0)) (##inline ##vcore.cons (bruijn ##.x.1317 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D437_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.437 9 0) (close _V10_Diter_D437_k248) (##inline ##vcore.car (bruijn ##.expr.65.449 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k248, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter_D437_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.449 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.449 0 0))) (##vcore.call-with-values (close _V10_Diter_D437_k247) (close _V10_Diter_D437_lambda51) (bruijn ##.kk.58.439 5 1)) ((bruijn ##.k.1308 3 0) #f)) ((bruijn ##.k.1308 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k247, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda51, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.447 0 0)) ((close _V10_Diter_D437_k246) (##inline ##vcore.cdr (bruijn ##.expr.64.447 0 0))) ((bruijn ##.k.1308 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k246, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1309 0 0) ((close _V10_Diter_D437_k245) (##inline ##vcore.cdr (bruijn ##.expr.438 5 1))) ((bruijn ##.k.1308 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k245, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 4 1)) ((bruijn ##.x.826 8 0) (close _V10_Diter_D437_k244) 'continuation (##inline ##vcore.car (bruijn ##.expr.438 4 1))) ((bruijn ##.k.1308 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k244, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D454_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.453 5 1) (bruijn ##.k.1294 2 0) (bruijn ##.expr.72.455 3 1) (bruijn ##.x.1295 1 0) (bruijn ##.x.1296 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D454_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 38 0) (close _V10_Dloop_D454_k254) (bruijn ##.body.69.457 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k254, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D454_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.72.455 1 1))) ((bruijn ##.x.804 37 0) (close _V10_Dloop_D454_k253) (bruijn ##.args.68.456 1 2)) ((bruijn ##.k.1294 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k253, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D454_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.461 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.461 0 0))) ((bruijn ##.kk.71.458 3 1) (bruijn ##.k.1286 1 0) (##inline ##vcore.cdr (bruijn ##.expr.72.455 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.459 2 0)) (bruijn ##.args.68.456 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.461 0 0)) (bruijn ##.body.69.457 6 3))) ((bruijn ##.k.1286 1 0) #f)) ((bruijn ##.k.1286 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D454_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.459 1 0)) ((close _V10_Dloop_D454_k258) (##inline ##vcore.cdr (bruijn ##.expr.73.459 1 0))) ((bruijn ##.k.1286 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D454_k258, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D454_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.453 9 1) (bruijn ##.k.1281 4 0) (bruijn ##.expr.72.455 7 1) (bruijn ##.x.1283 1 0) (bruijn ##.x.1284 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D454_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 42 0) (close _V10_Dloop_D454_k261) (bruijn ##.body.69.457 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k261, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D454_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 41 0) (close _V10_Dloop_D454_k260) (bruijn ##.args.68.456 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k260, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D454_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D454_k257) (close _V10_Dloop_D454_k259))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D454_k257, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k259, self)})));
}
static void _V10_Dloop_D454_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D454_k256) (##inline ##vcore.car (bruijn ##.expr.72.455 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D454_k256, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D454_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1280 0 0) (close _V10_Dloop_D454_lambda56))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_lambda56, self)})));
}
static void _V10_Dloop_D454_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1278 1 0) (close _V10_Dloop_D454_lambda55) (bruijn ##.loop.454 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_lambda55, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D454_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D454_lambda54, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D454_k252) (close _V10_Dloop_D454_k255))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D454_k252, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_k255, self)})));
}
static void _V10_Diter_D437_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D454_lambda54)) ((bruijn ##.loop.454 0 0) (bruijn ##.k.1277 1 0) (##inline ##vcore.cdr (bruijn ##.expr.438 9 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D454_lambda54, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D437_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1276 0 0) (close _V10_Diter_D437_lambda53))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda53, self)})));
}
static void _V10_Diter_D437_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1300 0 0) (bruijn ##.k.1298 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter_D437_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 32 0) (bruijn ##.k.1301 1 0) 'case-lambda (bruijn ##.x.1302 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      statics->vars[0],
      _V0case__lambda,
      _var0);
}
static void _V10_Diter_D437_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1303 1 0) (##inline ##vcore.cons (bruijn ##.args.466 1 1) (##inline ##vcore.cons (bruijn ##.x.1305 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter_D437_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.iter.437 10 0) (close _V10_Diter_D437_k264) (bruijn ##.body.467 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k264, self)})),
      _var2);
}
static void _V10_Diter_D437_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 33 0) (close _V10_Diter_D437_k263) (close _V10_Diter_D437_lambda59) (bruijn ##.args.464 1 2) (bruijn ##.body.465 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k263, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda59, self)})),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Diter_D437_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda57, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.463 0 1)) (##vcore.call-with-values (close _V10_Diter_D437_k262) (close _V10_Diter_D437_lambda58) (bruijn ##.kk.58.439 5 1)) ((bruijn ##.k.1298 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k262, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda58, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1275 0 0) (##vcore.call-with-values (bruijn ##.k.1274 1 0) (close _V10_Diter_D437_lambda52) (close _V10_Diter_D437_lambda57)) ((bruijn ##.k.1274 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda52, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda57, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 5 1)) ((bruijn ##.x.826 9 0) (close _V10_Diter_D437_k251) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.438 5 1))) ((bruijn ##.k.1274 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k251, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1270 0 0) (bruijn ##.k.1268 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D437_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1271 0 0) (bruijn ##.expr.438 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Diter_D437_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1269 0 0) (##vcore.call-with-values (close _V10_Diter_D437_k268) (close _V10_Diter_D437_lambda60) (bruijn ##.kk.58.439 5 1)) ((bruijn ##.k.1268 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k268, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda60, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 6 1)) ((bruijn ##.x.826 10 0) (close _V10_Diter_D437_k267) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.438 6 1))) ((bruijn ##.k.1268 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k267, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1263 0 0) (bruijn ##.k.1259 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Diter_D437_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1264 0 0) (bruijn ##.expr.438 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 1));
}
static void _V10_Diter_D437_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.470 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.470 0 0))) (##vcore.call-with-values (close _V10_Diter_D437_k273) (close _V10_Diter_D437_lambda61) (bruijn ##.kk.58.439 7 1)) ((bruijn ##.k.1259 2 0) #f)) ((bruijn ##.k.1259 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k273, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda61, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1260 0 0) ((close _V10_Diter_D437_k272) (##inline ##vcore.cdr (bruijn ##.expr.438 8 1))) ((bruijn ##.k.1259 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k272, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 7 1)) ((bruijn ##.x.826 11 0) (close _V10_Diter_D437_k271) 'quote (##inline ##vcore.car (bruijn ##.expr.438 7 1))) ((bruijn ##.k.1259 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k271, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D476_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.475 5 1) (bruijn ##.k.1240 2 0) (bruijn ##.expr.85.477 3 1) (bruijn ##.x.1241 1 0) (bruijn ##.x.1242 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D476_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 42 0) (close _V10_Dloop_D476_k280) (bruijn ##.vals.82.479 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k280, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D476_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.85.477 1 1))) ((bruijn ##.x.804 41 0) (close _V10_Dloop_D476_k279) (bruijn ##.args.81.478 1 2)) ((bruijn ##.k.1240 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k279, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D476_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.483 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.483 0 0))) ((bruijn ##.kk.84.480 3 1) (bruijn ##.k.1232 1 0) (##inline ##vcore.cdr (bruijn ##.expr.85.477 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.86.481 2 0)) (bruijn ##.args.81.478 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.87.483 0 0)) (bruijn ##.vals.82.479 6 3))) ((bruijn ##.k.1232 1 0) #f)) ((bruijn ##.k.1232 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D476_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.481 1 0)) ((close _V10_Dloop_D476_k284) (##inline ##vcore.cdr (bruijn ##.expr.86.481 1 0))) ((bruijn ##.k.1232 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D476_k284, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D476_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.475 9 1) (bruijn ##.k.1227 4 0) (bruijn ##.expr.85.477 7 1) (bruijn ##.x.1229 1 0) (bruijn ##.x.1230 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D476_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 46 0) (close _V10_Dloop_D476_k287) (bruijn ##.vals.82.479 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k287, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D476_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 45 0) (close _V10_Dloop_D476_k286) (bruijn ##.args.81.478 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k286, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D476_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D476_k283) (close _V10_Dloop_D476_k285))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D476_k283, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k285, self)})));
}
static void _V10_Dloop_D476_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D476_k282) (##inline ##vcore.car (bruijn ##.expr.85.477 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D476_k282, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D476_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1226 0 0) (close _V10_Dloop_D476_lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_lambda66, self)})));
}
static void _V10_Dloop_D476_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1224 1 0) (close _V10_Dloop_D476_lambda65) (bruijn ##.loop.476 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_lambda65, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D476_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D476_lambda64, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D476_k278) (close _V10_Dloop_D476_k281))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D476_k278, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_k281, self)})));
}
static void _V10_Diter_D437_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D476_lambda64)) ((bruijn ##.loop.476 0 0) (bruijn ##.k.1223 1 0) (##inline ##vcore.car (bruijn ##.expr.79.473 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D476_lambda64, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D437_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1222 0 0) (close _V10_Diter_D437_lambda63))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda63, self)})));
}
static void _V10_Diter_D437_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1248 0 0) (bruijn ##.k.1244 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D437_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1249 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1251 1 0) (##inline ##vcore.cons (bruijn ##.x.1253 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D437_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.437 16 0) (close _V10_Diter_D437_k292) (##inline ##vcore.car (bruijn ##.expr.88.488 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k292, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Diter_D437_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 39 0) (close _V10_Diter_D437_k291) (bruijn ##.x.811 33 0) (bruijn ##.args.486 3 2) (bruijn ##.x.1254 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k291, self)})),
      VGetArg(statics, 33-1, 0),
      statics->up->up->vars[2],
      _var0);
}
static void _V10_Diter_D437_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.437 15 0) (bruijn ##.k.1255 0 0) (bruijn ##.val.490 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      _var1);
}
static void _V10_Diter_D437_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 38 0) (close _V10_Diter_D437_k290) (close _V10_Diter_D437_lambda69) (bruijn ##.vals.487 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k290, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda69, self)})),
      statics->up->vars[3]);
}
static void _V10_Diter_D437_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.488 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.488 0 0))) (##vcore.call-with-values (close _V10_Diter_D437_k289) (close _V10_Diter_D437_lambda68) (bruijn ##.kk.58.439 10 1)) ((bruijn ##.k.1244 1 0) #f)) ((bruijn ##.k.1244 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k289, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda68, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda67, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.485 0 1)) ((close _V10_Diter_D437_k288) (##inline ##vcore.cdr (bruijn ##.expr.79.473 1 0))) ((bruijn ##.k.1244 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k288, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.473 0 0)) (##vcore.call-with-values (bruijn ##.k.1219 2 0) (close _V10_Diter_D437_lambda62) (close _V10_Diter_D437_lambda67)) ((bruijn ##.k.1219 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda62, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda67, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1220 0 0) ((close _V10_Diter_D437_k277) (##inline ##vcore.cdr (bruijn ##.expr.438 9 1))) ((bruijn ##.k.1219 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k277, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 8 1)) ((bruijn ##.x.826 12 0) (close _V10_Diter_D437_k276) 'letrec (##inline ##vcore.car (bruijn ##.expr.438 8 1))) ((bruijn ##.k.1219 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k276, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1214 0 0) (bruijn ##.k.1213 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter_D437_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 35 0) (bruijn ##.k.1215 2 0) (bruijn ##.x.1216 1 0) (bruijn ##.x.1217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Diter_D437_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.437 12 0) (close _V10_Diter_D437_k297) (##inline ##vcore.cdr (bruijn ##.expr.438 11 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k297, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
}
static void _V10_Diter_D437_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.437 11 0) (close _V10_Diter_D437_k296) (##inline ##vcore.car (bruijn ##.expr.438 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k296, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Diter_D437_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.438 9 1)) (##vcore.call-with-values (close _V10_Diter_D437_k295) (close _V10_Diter_D437_lambda70) (bruijn ##.kk.58.439 7 1)) ((bruijn ##.k.1213 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k295, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda70, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D437_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.810 31 0) (bruijn ##.k.1198 9 0) (##string ##.string.2064))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      VGetArg(statics, 9-1, 0),
      VEncodePointer(&_V10_Dstring_D2064.sym, VPOINTER_OTHER));
}
static void _V10_Diter_D437_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1207 0 0) (close _V10_Diter_D437_k300))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k300, self)})));
}
static void _V10_Diter_D437_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1208 3 0) (bruijn ##.atom.434 15 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 15-1, 2));
}
static void _V10_Diter_D437_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Diter_D437_k303) (bruijn ##.n.436 14 4) (bruijn ##.x.1211 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k303, self)})),
      VEncodeInt(14l), VEncodeInt(4l),
      _var0
    );
}
static void _V10_Diter_D437_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1209 0 0) ((bruijn ##.x.822 19 0) (close _V10_Diter_D437_k302) (bruijn ##.n.436 13 4) 1) ((bruijn ##.k.1208 1 0) (bruijn ##.expr.438 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k302, self)})),
      VGetArg(statics, 13-1, 4),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 11-1, 1));
}
}
static void _V10_Diter_D437_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.817 23 0) (close _V10_Diter_D437_k301) (bruijn ##.x.433 12 1) (bruijn ##.expr.438 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k301, self)})),
      VGetArg(statics, 12-1, 1),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Diter_D437_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Diter_D437_k299) (close _V10_Diter_D437_lambda71) (bruijn ##.kk.58.439 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k299, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda71, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Diter_D437_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k294) (close _V10_Diter_D437_k298))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k294, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k298, self)})));
}
static void _V10_Diter_D437_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k275) (close _V10_Diter_D437_k293))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k275, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k293, self)})));
}
static void _V10_Diter_D437_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k270) (close _V10_Diter_D437_k274))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k270, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k274, self)})));
}
static void _V10_Diter_D437_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k266) (close _V10_Diter_D437_k269))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k266, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k269, self)})));
}
static void _V10_Diter_D437_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k250) (close _V10_Diter_D437_k265))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k250, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k265, self)})));
}
static void _V10_Diter_D437_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D437_k243) (close _V10_Diter_D437_k249))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k243, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k249, self)})));
}
static void _V10_Diter_D437_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter_D437_k236) (close _V10_Diter_D437_k242))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D437_k236, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k242, self)})));
}
static void _V10_Diter_D437_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1197 0 0) ((bruijn ##.k.1196 1 0) (bruijn ##.expr.438 1 1)) (##vcore.call/cc (bruijn ##.k.1196 1 0) (close _V10_Diter_D437_lambda49)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda49, self)})));
}
}
static void _V10_Diter_D437_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D437_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.815 15 0) (close _V10_Diter_D437_k235) (bruijn ##.n.436 2 4) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_k235, self)})),
      statics->up->vars[4],
      VEncodeInt(0l));
}
static void _V10_Dsubstitute_D289_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D289_lambda47, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (letrec 1 ((close _V10_Diter_D437_lambda48)) ((bruijn ##.iter.437 0 0) (bruijn ##.k.1195 1 0) (bruijn ##.expr.435 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D437_lambda48, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
static void _V10_Dspecial__apply_Q_D290_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dspecial__apply_Q_D290_lambda72, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.820 8 0) (bruijn ##.k.1333 0 0) (bruijn ##.tok.495 0 1) (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'letrec '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      _var0,
      _var1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)));
}
static void _V10_Dloop_D497_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D497_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.497 4 0) (bruijn ##.k.1337 3 0) (bruijn ##.x.1339 1 0) (bruijn ##.x.1340 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D497_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D497_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.801 31 0) (close _V10_Dloop_D497_k306) (bruijn ##.len.499 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D497_k306, self)})),
      statics->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D497_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D497_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1338 0 0) ((bruijn ##.x.824 7 0) (close _V10_Dloop_D497_k305) (bruijn ##.lst.498 1 1)) ((bruijn ##.k.1337 1 0) (bruijn ##.len.499 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D497_k305, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[2]);
}
}
static void _V10_Dloop_D497_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D497_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.819 11 0) (close _V10_Dloop_D497_k304) (bruijn ##.lst.498 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D497_k304, self)})),
      _var1);
}
static void _V10_Dtaillength_D291_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtaillength_D291_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D497_lambda74)) ((bruijn ##.loop.497 0 0) (bruijn ##.k.1336 1 0) (bruijn ##.lst.496 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D497_lambda74, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dadd__ref_B_D292_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D292_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.823 7 0) (bruijn ##.k.1341 2 0) (bruijn ##.refs.500 2 1) (bruijn ##.x.501 2 2) (bruijn ##.x.1342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      _var0);
}
static void _V10_Dadd__ref_B_D292_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D292_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.801 28 0) (close _V10_Dadd__ref_B_D292_k308) (bruijn ##.n0.503 0 0) (bruijn ##.n.502 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D292_k308, self)})),
      _var0,
      statics->vars[3]);
}
static void _V10_Dadd__ref_B_D292_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D292_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1343 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dadd__ref_B_D292_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D292_lambda75, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.816 12 0) (close _V10_Dadd__ref_B_D292_k307) (bruijn ##.refs.500 0 1) (bruijn ##.x.501 0 2) (close _V10_Dadd__ref_B_D292_lambda76))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D292_k307, self)})),
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D292_lambda76, self)})));
}
static void _V10_Dsub__ref_B_D293_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1347 1 0) ((bruijn ##.x.810 21 0) (bruijn ##.k.1348 0 0) (##string ##.string.2065) (bruijn ##.x.505 3 2) (bruijn ##.n0.507 2 0) (bruijn ##.n.506 3 3)) ((bruijn ##.k.1348 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 5,
      _var0,
      VEncodePointer(&_V10_Dstring_D2065.sym, VPOINTER_OTHER),
      statics->up->up->vars[2],
      statics->up->vars[0],
      statics->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dsub__ref_B_D293_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.823 9 0) (bruijn ##.k.1344 4 0) (bruijn ##.refs.504 4 1) (bruijn ##.x.505 4 2) (bruijn ##.x.1346 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 4,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2],
      _var0);
}
static void _V10_Dsub__ref_B_D293_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.822 9 0) (close _V10_Dsub__ref_B_D293_k313) (bruijn ##.n0.507 2 0) (bruijn ##.n.506 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_k313, self)})),
      statics->up->vars[0],
      statics->up->up->vars[3]);
}
static void _V10_Dsub__ref_B_D293_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dsub__ref_B_D293_k311) (close _V10_Dsub__ref_B_D293_k312))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsub__ref_B_D293_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_k312, self)})));
}
static void _V10_Dsub__ref_B_D293_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.797 32 0) (close _V10_Dsub__ref_B_D293_k310) (bruijn ##.n.506 1 3) (bruijn ##.n0.507 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_k310, self)})),
      statics->vars[3],
      _var0);
}
static void _V10_Dsub__ref_B_D293_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1349 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dsub__ref_B_D293_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D293_lambda77, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.816 12 0) (close _V10_Dsub__ref_B_D293_k309) (bruijn ##.refs.504 0 1) (bruijn ##.x.505 0 2) (close _V10_Dsub__ref_B_D293_lambda78))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_k309, self)})),
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_lambda78, self)})));
}
static void _V10_Dadd__refs_B_D294_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-ref!.292 6 6) (bruijn ##.k.1352 3 0) (bruijn ##.arefs.510 5 1) (bruijn ##.x.1353 2 0) (bruijn ##.x.1354 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 1),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dadd__refs_B_D294_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.798 34 0) (close _V10_Dadd__refs_B_D294_k317) (bruijn ##.n.512 4 3) (bruijn ##.x.1355 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_k317, self)})),
      statics->up->up->up->vars[3],
      _var0);
}
static void _V10_Dadd__refs_B_D294_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 7 0) (close _V10_Dadd__refs_B_D294_k316) (bruijn ##.keyval.513 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_k316, self)})),
      statics->vars[1]);
}
static void _V10_Dadd__refs_B_D294_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_lambda80, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.821 9 0) (close _V10_Dadd__refs_B_D294_k315) (bruijn ##.keyval.513 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_k315, self)})),
      _var1);
}
static void _V10_Dadd__refs_B_D294_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.800 29 0) (bruijn ##.k.1351 1 0) (close _V10_Dadd__refs_B_D294_lambda80) (bruijn ##.x.1356 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_lambda80, self)})),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dadd__refs_B_D294_lambda79(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dadd__refs_B_D294_lambda79 #t (3 ((bruijn ##.add-refs!.294 1 8) (bruijn ##.k.1350 0 0) (bruijn ##.arefs.508 0 1) (bruijn ##.brefs.509 0 2) 1)) (4 ((bruijn ##.x.799 29 0) (close _V10_Dadd__refs_B_D294_k314) (bruijn ##.brefs.511 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D294_lambda79, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dadd__refs_B_D294_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.add-refs!.294 1 8) (bruijn ##.k.1350 0 0) (bruijn ##.arefs.508 0 1) (bruijn ##.brefs.509 0 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[8]), 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(1l));
}
__attribute__((used)) static void _V20Case1__V10_Dadd__refs_B_D294_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.799 29 0) (close _V10_Dadd__refs_B_D294_k314) (bruijn ##.brefs.511 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_k314, self)})),
      _var2);
}
void _V10_Dadd__refs_B_D294_lambda79(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dadd__refs_B_D294_lambda79, @function\n"
#endif
"_V10_Dadd__refs_B_D294_lambda79:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dadd__refs_B_D294_lambda79\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dadd__refs_B_D294_lambda79\n"
"    jmp _V20CaseError__V10_Dadd__refs_B_D294_lambda79\n"
);
static void _V10_Dsub__refs_B_D295_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D295_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sub-ref!.293 5 7) (bruijn ##.k.1358 2 0) (bruijn ##.arefs.514 4 1) (bruijn ##.x.1359 1 0) (bruijn ##.x.1360 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 4,
      statics->up->vars[0],
      statics->up->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dsub__refs_B_D295_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D295_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 7 0) (close _V10_Dsub__refs_B_D295_k320) (bruijn ##.keyval.516 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D295_k320, self)})),
      statics->vars[1]);
}
static void _V10_Dsub__refs_B_D295_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D295_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.821 9 0) (close _V10_Dsub__refs_B_D295_k319) (bruijn ##.keyval.516 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D295_k319, self)})),
      _var1);
}
static void _V10_Dsub__refs_B_D295_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D295_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.800 29 0) (bruijn ##.k.1357 1 0) (close _V10_Dsub__refs_B_D295_lambda82) (bruijn ##.x.1361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D295_lambda82, self)})),
      _var0);
}
static void _V10_Dsub__refs_B_D295_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D295_lambda81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.799 29 0) (close _V10_Dsub__refs_B_D295_k318) (bruijn ##.brefs.515 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D295_k318, self)})),
      _var2);
}
static void _V10_Dcount__refs__atom_D520_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1441 0 0) (bruijn ##.k.1439 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1442 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D520_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1440 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k325) (close _V10_Dcount__refs__atom_D520_lambda86) (bruijn ##.kk.90.523 2 1)) ((bruijn ##.k.1439 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k325, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda86, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 2 1)) ((bruijn ##.x.826 8 0) (close _V10_Dcount__refs__atom_D520_k324) 'quote (##inline ##vcore.car (bruijn ##.expr.522 2 1))) ((bruijn ##.k.1439 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k324, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1435 0 0) (bruijn ##.k.1433 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1436 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D520_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1434 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k329) (close _V10_Dcount__refs__atom_D520_lambda87) (bruijn ##.kk.90.523 3 1)) ((bruijn ##.k.1433 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k329, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda87, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 3 1)) ((bruijn ##.x.826 9 0) (close _V10_Dcount__refs__atom_D520_k328) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.522 3 1))) ((bruijn ##.k.1433 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k328, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1429 0 0) (bruijn ##.k.1427 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.800 38 0) (bruijn ##.k.1430 0 0) (bruijn ##.count-refs-atom.520 7 2) (##inline ##vcore.cdr (bruijn ##.expr.522 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dcount__refs__atom_D520_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1428 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k333) (close _V10_Dcount__refs__atom_D520_lambda88) (bruijn ##.kk.90.523 4 1)) ((bruijn ##.k.1427 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k333, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda88, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 4 1)) ((bruijn ##.x.826 10 0) (close _V10_Dcount__refs__atom_D520_k332) '##inline (##inline ##vcore.car (bruijn ##.expr.522 4 1))) ((bruijn ##.k.1427 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k332, self)})),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1422 0 0) (bruijn ##.k.1417 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.521 10 3) (bruijn ##.k.1423 0 0) (##inline ##vcore.car (bruijn ##.expr.97.531 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__atom_D520_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.531 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.97.531 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k339) (close _V10_Dcount__refs__atom_D520_lambda89) (bruijn ##.kk.90.523 7 1)) ((bruijn ##.k.1417 3 0) #f)) ((bruijn ##.k.1417 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k339, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda89, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.530 0 0)) ((close _V10_Dcount__refs__atom_D520_k338) (##inline ##vcore.cdr (bruijn ##.expr.96.530 0 0))) ((bruijn ##.k.1417 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k338, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1418 0 0) ((close _V10_Dcount__refs__atom_D520_k337) (##inline ##vcore.cdr (bruijn ##.expr.522 6 1))) ((bruijn ##.k.1417 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k337, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 5 1)) ((bruijn ##.x.826 11 0) (close _V10_Dcount__refs__atom_D520_k336) 'lambda (##inline ##vcore.car (bruijn ##.expr.522 5 1))) ((bruijn ##.k.1417 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k336, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1412 0 0) (bruijn ##.k.1407 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.521 11 3) (bruijn ##.k.1413 0 0) (##inline ##vcore.car (bruijn ##.expr.100.535 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__atom_D520_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.535 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.100.535 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k345) (close _V10_Dcount__refs__atom_D520_lambda90) (bruijn ##.kk.90.523 8 1)) ((bruijn ##.k.1407 3 0) #f)) ((bruijn ##.k.1407 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k345, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda90, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.534 0 0)) ((close _V10_Dcount__refs__atom_D520_k344) (##inline ##vcore.cdr (bruijn ##.expr.99.534 0 0))) ((bruijn ##.k.1407 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k344, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1408 0 0) ((close _V10_Dcount__refs__atom_D520_k343) (##inline ##vcore.cdr (bruijn ##.expr.522 7 1))) ((bruijn ##.k.1407 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k343, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 6 1)) ((bruijn ##.x.826 12 0) (close _V10_Dcount__refs__atom_D520_k342) 'continuation (##inline ##vcore.car (bruijn ##.expr.522 6 1))) ((bruijn ##.k.1407 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k342, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D540_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.539 4 1) (bruijn ##.k.1397 1 0) (bruijn ##.expr.106.541 2 1) (bruijn ##.x.1398 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D540_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.106.541 1 1))) ((bruijn ##.x.804 41 0) (close _V10_Dloop_D540_k350) (bruijn ##.body.103.542 1 2)) ((bruijn ##.k.1397 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_k350, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D540_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.545 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.108.545 0 0))) ((bruijn ##.kk.105.543 3 1) (bruijn ##.k.1390 1 0) (##inline ##vcore.cdr (bruijn ##.expr.106.541 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.108.545 0 0)) (bruijn ##.body.103.542 6 2))) ((bruijn ##.k.1390 1 0) #f)) ((bruijn ##.k.1390 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D540_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.544 1 0)) ((close _V10_Dloop_D540_k354) (##inline ##vcore.cdr (bruijn ##.expr.107.544 1 0))) ((bruijn ##.k.1390 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D540_k354, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D540_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.539 8 1) (bruijn ##.k.1386 3 0) (bruijn ##.expr.106.541 6 1) (bruijn ##.x.1388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D540_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 45 0) (close _V10_Dloop_D540_k356) (bruijn ##.body.103.542 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_k356, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D540_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D540_k353) (close _V10_Dloop_D540_k355))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D540_k353, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_k355, self)})));
}
static void _V10_Dloop_D540_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D540_k352) (##inline ##vcore.car (bruijn ##.expr.106.541 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D540_k352, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D540_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_lambda94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1385 0 0) (close _V10_Dloop_D540_lambda95))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_lambda95, self)})));
}
static void _V10_Dloop_D540_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1383 1 0) (close _V10_Dloop_D540_lambda94) (bruijn ##.loop.540 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_lambda94, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D540_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D540_lambda93, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D540_k349) (close _V10_Dloop_D540_k351))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D540_k349, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_k351, self)})));
}
static void _V10_Dcount__refs__atom_D520_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D540_lambda93)) ((bruijn ##.loop.540 0 0) (bruijn ##.k.1382 1 0) (##inline ##vcore.cdr (bruijn ##.expr.522 11 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D540_lambda93, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VNULL);
    }
}
static void _V10_Dcount__refs__atom_D520_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1381 0 0) (close _V10_Dcount__refs__atom_D520_lambda92))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda92, self)})));
}
static void _V10_Dcount__refs__atom_D520_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1402 0 0) (bruijn ##.k.1400 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcount__refs__atom_D520_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.521 12 3) (bruijn ##.k.1404 0 0) (bruijn ##.body.549 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 2,
      _var0,
      _var1);
}
static void _V10_Dcount__refs__atom_D520_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.800 42 0) (bruijn ##.k.1403 0 0) (close _V10_Dcount__refs__atom_D520_lambda98) (bruijn ##.body.548 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda98, self)})),
      statics->vars[2]);
}
static void _V10_Dcount__refs__atom_D520_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda96, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.547 0 1)) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D520_k357) (close _V10_Dcount__refs__atom_D520_lambda97) (bruijn ##.kk.90.523 8 1)) ((bruijn ##.k.1400 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k357, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda97, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1380 0 0) (##vcore.call-with-values (bruijn ##.k.1379 1 0) (close _V10_Dcount__refs__atom_D520_lambda91) (close _V10_Dcount__refs__atom_D520_lambda96)) ((bruijn ##.k.1379 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda91, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda96, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.522 7 1)) ((bruijn ##.x.826 13 0) (close _V10_Dcount__refs__atom_D520_k348) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.522 7 1))) ((bruijn ##.k.1379 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k348, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.823 20 0) (bruijn ##.k.1373 3 0) (bruijn ##.count-table.518 12 0) (bruijn ##.expr.522 11 1) (bruijn ##.x.1375 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 11-1, 1),
      _var0);
}
static void _V10_Dcount__refs__atom_D520_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.801 41 0) (close _V10_Dcount__refs__atom_D520_k361) 1 (bruijn ##.x.1376 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k361, self)})),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dcount__refs__atom_D520_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1377 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dcount__refs__atom_D520_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1374 0 0) ((bruijn ##.x.816 25 0) (close _V10_Dcount__refs__atom_D520_k360) (bruijn ##.count-table.518 10 0) (bruijn ##.expr.522 9 1) (close _V10_Dcount__refs__atom_D520_lambda100)) ((bruijn ##.k.1373 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k360, self)})),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 9-1, 1),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda100, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D520_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.809 31 0) (close _V10_Dcount__refs__atom_D520_k359) (bruijn ##.expr.522 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k359, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dcount__refs__atom_D520_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1366 6 0) (close _V10_Dcount__refs__atom_D520_lambda99) (bruijn ##.kk.90.523 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda99, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dcount__refs__atom_D520_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D520_k347) (close _V10_Dcount__refs__atom_D520_k358))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k347, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k358, self)})));
}
static void _V10_Dcount__refs__atom_D520_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D520_k341) (close _V10_Dcount__refs__atom_D520_k346))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k341, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k346, self)})));
}
static void _V10_Dcount__refs__atom_D520_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D520_k335) (close _V10_Dcount__refs__atom_D520_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k335, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k340, self)})));
}
static void _V10_Dcount__refs__atom_D520_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D520_k331) (close _V10_Dcount__refs__atom_D520_k334))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k331, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k334, self)})));
}
static void _V10_Dcount__refs__atom_D520_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D520_k327) (close _V10_Dcount__refs__atom_D520_k330))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k327, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k330, self)})));
}
static void _V10_Dcount__refs__atom_D520_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcount__refs__atom_D520_k323) (close _V10_Dcount__refs__atom_D520_k326))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D520_k323, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_k326, self)})));
}
static void _V10_Dcount__refs__atom_D520_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D520_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1365 0 0) (close _V10_Dcount__refs__atom_D520_lambda85))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda85, self)})));
}
static void _V10_Dloop_D557_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.115.556 4 1) (bruijn ##.k.1503 1 0) (bruijn ##.expr.117.558 2 1) (bruijn ##.x.1504 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D557_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.117.558 1 1))) ((bruijn ##.x.804 37 0) (close _V10_Dloop_D557_k366) (bruijn ##.vals.114.559 1 2)) ((bruijn ##.k.1503 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k366, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D557_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.562 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.119.562 0 0))) ((bruijn ##.kk.116.560 3 1) (bruijn ##.k.1496 1 0) (##inline ##vcore.cdr (bruijn ##.expr.117.558 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.119.562 0 0)) (bruijn ##.vals.114.559 6 2))) ((bruijn ##.k.1496 1 0) #f)) ((bruijn ##.k.1496 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D557_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.561 1 0)) ((close _V10_Dloop_D557_k370) (##inline ##vcore.cdr (bruijn ##.expr.118.561 1 0))) ((bruijn ##.k.1496 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D557_k370, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D557_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.115.556 8 1) (bruijn ##.k.1492 3 0) (bruijn ##.expr.117.558 6 1) (bruijn ##.x.1494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D557_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 41 0) (close _V10_Dloop_D557_k372) (bruijn ##.vals.114.559 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k372, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D557_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D557_k369) (close _V10_Dloop_D557_k371))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D557_k369, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k371, self)})));
}
static void _V10_Dloop_D557_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda107, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D557_k368) (##inline ##vcore.car (bruijn ##.expr.117.558 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D557_k368, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D557_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1491 0 0) (close _V10_Dloop_D557_lambda107))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda107, self)})));
}
static void _V10_Dloop_D557_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1489 1 0) (close _V10_Dloop_D557_lambda106) (bruijn ##.loop.557 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda106, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D557_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda105, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D557_k365) (close _V10_Dloop_D557_k367))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D557_k365, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k367, self)})));
}
static void _V10_Dcount__refs__apply_D521_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda104, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D557_lambda105)) ((bruijn ##.loop.557 0 0) (bruijn ##.k.1488 1 0) (##inline ##vcore.car (bruijn ##.expr.112.554 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda105, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dcount__refs__apply_D521_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1487 0 0) (close _V10_Dcount__refs__apply_D521_lambda104))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda104, self)})));
}
static void _V10_Dcount__refs__apply_D521_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1510 0 0) (bruijn ##.k.1506 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D521_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.521 9 3) (bruijn ##.k.1511 1 0) (##inline ##vcore.car (bruijn ##.expr.120.566 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.800 39 0) (close _V10_Dcount__refs__apply_D521_k375) (bruijn ##.count-refs-atom.520 8 2) (bruijn ##.vals.565 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k375, self)})),
      VGetArg(statics, 8-1, 2),
      statics->up->vars[2]);
}
static void _V10_Dcount__refs__apply_D521_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.566 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.566 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D521_k374) (close _V10_Dcount__refs__apply_D521_lambda109) (bruijn ##.kk.109.551 5 1)) ((bruijn ##.k.1506 1 0) #f)) ((bruijn ##.k.1506 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k374, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda109, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda108, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.564 0 1)) ((close _V10_Dcount__refs__apply_D521_k373) (##inline ##vcore.cdr (bruijn ##.expr.112.554 1 0))) ((bruijn ##.k.1506 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k373, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.554 0 0)) (##vcore.call-with-values (bruijn ##.k.1484 2 0) (close _V10_Dcount__refs__apply_D521_lambda103) (close _V10_Dcount__refs__apply_D521_lambda108)) ((bruijn ##.k.1484 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda103, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda108, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1485 0 0) ((close _V10_Dcount__refs__apply_D521_k364) (##inline ##vcore.cdr (bruijn ##.expr.550 3 1))) ((bruijn ##.k.1484 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k364, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.550 2 1)) ((bruijn ##.x.826 8 0) (close _V10_Dcount__refs__apply_D521_k363) 'letrec (##inline ##vcore.car (bruijn ##.expr.550 2 1))) ((bruijn ##.k.1484 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k363, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1477 0 0) (bruijn ##.k.1471 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcount__refs__apply_D521_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.521 11 3) (bruijn ##.k.1478 2 0) (##inline ##vcore.car (bruijn ##.expr.124.573 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.521 10 3) (close _V10_Dcount__refs__apply_D521_k384) (##inline ##vcore.car (bruijn ##.expr.123.571 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k384, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.520 9 2) (close _V10_Dcount__refs__apply_D521_k383) (##inline ##vcore.car (bruijn ##.expr.122.569 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k383, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.573 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.573 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D521_k382) (close _V10_Dcount__refs__apply_D521_lambda110) (bruijn ##.kk.109.551 6 1)) ((bruijn ##.k.1471 4 0) #f)) ((bruijn ##.k.1471 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k382, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda110, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.571 0 0)) ((close _V10_Dcount__refs__apply_D521_k381) (##inline ##vcore.cdr (bruijn ##.expr.123.571 0 0))) ((bruijn ##.k.1471 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k381, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.569 0 0)) ((close _V10_Dcount__refs__apply_D521_k380) (##inline ##vcore.cdr (bruijn ##.expr.122.569 0 0))) ((bruijn ##.k.1471 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k380, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1472 0 0) ((close _V10_Dcount__refs__apply_D521_k379) (##inline ##vcore.cdr (bruijn ##.expr.550 4 1))) ((bruijn ##.k.1471 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k379, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.550 3 1)) ((bruijn ##.x.826 9 0) (close _V10_Dcount__refs__apply_D521_k378) 'if (##inline ##vcore.car (bruijn ##.expr.550 3 1))) ((bruijn ##.k.1471 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k378, self)})),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1463 0 0) (bruijn ##.k.1457 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dcount__refs__apply_D521_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.823 22 0) (bruijn ##.k.1464 3 0) (bruijn ##.impure-table.519 14 1) (bruijn ##.y.579 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 1),
      VGetArg(statics, 5-1, 0),
      VEncodeBool(true));
}
static void _V10_Dcount__refs__apply_D521_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.520 13 2) (close _V10_Dcount__refs__apply_D521_k395) (##inline ##vcore.car (bruijn ##.expr.128.580 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k395, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.520 12 2) (close _V10_Dcount__refs__apply_D521_k394) (bruijn ##.y.579 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k394, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D521_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.520 11 2) (close _V10_Dcount__refs__apply_D521_k393) (##inline ##vcore.car (bruijn ##.expr.126.576 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k393, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.580 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.128.580 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D521_k392) (close _V10_Dcount__refs__apply_D521_lambda111) (bruijn ##.kk.109.551 8 1)) ((bruijn ##.k.1457 5 0) #f)) ((bruijn ##.k.1457 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k392, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda111, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D521_k391) (##inline ##vcore.cdr (bruijn ##.expr.127.578 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k391, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__apply_D521_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.578 0 0)) ((close _V10_Dcount__refs__apply_D521_k390) (##inline ##vcore.car (bruijn ##.expr.127.578 0 0))) ((bruijn ##.k.1457 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k390, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.576 0 0)) ((close _V10_Dcount__refs__apply_D521_k389) (##inline ##vcore.cdr (bruijn ##.expr.126.576 0 0))) ((bruijn ##.k.1457 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k389, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1458 0 0) ((close _V10_Dcount__refs__apply_D521_k388) (##inline ##vcore.cdr (bruijn ##.expr.550 5 1))) ((bruijn ##.k.1457 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k388, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.550 4 1)) ((bruijn ##.x.826 10 0) (close _V10_Dcount__refs__apply_D521_k387) 'set! (##inline ##vcore.car (bruijn ##.expr.550 4 1))) ((bruijn ##.k.1457 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k387, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1453 0 0) (bruijn ##.k.1452 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcount__refs__apply_D521_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.800 39 0) (bruijn ##.k.1454 1 0) (bruijn ##.count-refs-atom.520 8 2) (##inline ##vcore.cdr (bruijn ##.expr.550 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 8-1, 2),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
}
static void _V10_Dcount__refs__apply_D521_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.520 7 2) (close _V10_Dcount__refs__apply_D521_k399) (##inline ##vcore.car (bruijn ##.expr.550 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k399, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dcount__refs__apply_D521_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.550 5 1)) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D521_k398) (close _V10_Dcount__refs__apply_D521_lambda112) (bruijn ##.kk.109.551 4 1)) ((bruijn ##.k.1452 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k398, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda112, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D521_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 32 0) (bruijn ##.k.1450 0 0) (##string ##.string.2066) (bruijn ##.expr.550 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2066.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dcount__refs__apply_D521_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1445 4 0) (close _V10_Dcount__refs__apply_D521_lambda113) (bruijn ##.kk.109.551 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda113, self)})),
      statics->up->up->up->vars[1]);
}
static void _V10_Dcount__refs__apply_D521_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D521_k397) (close _V10_Dcount__refs__apply_D521_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k397, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k400, self)})));
}
static void _V10_Dcount__refs__apply_D521_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D521_k386) (close _V10_Dcount__refs__apply_D521_k396))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k386, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k396, self)})));
}
static void _V10_Dcount__refs__apply_D521_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D521_k377) (close _V10_Dcount__refs__apply_D521_k385))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k377, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k385, self)})));
}
static void _V10_Dcount__refs__apply_D521_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcount__refs__apply_D521_k362) (close _V10_Dcount__refs__apply_D521_k376))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D521_k362, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_k376, self)})));
}
static void _V10_Dcount__refs__apply_D521_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D521_lambda101, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1444 0 0) (close _V10_Dcount__refs__apply_D521_lambda102))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda102, self)})));
}
static void _V10_Dcount__refs_D296_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1516 1 0) ((bruijn ##.count-refs-apply.521 2 3) (bruijn ##.k.1517 0 0) (bruijn ##.expr.517 5 1)) ((bruijn ##.count-refs-atom.520 2 2) (bruijn ##.k.1517 0 0) (bruijn ##.expr.517 5 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 2,
      _var0,
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 2,
      _var0,
      VGetArg(statics, 5-1, 1));
}
}
static void _V10_Dcount__refs_D296_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.803 30 0) (bruijn ##.k.1362 5 0) (bruijn ##.count-table.518 2 0) (bruijn ##.impure-table.519 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V10_Dcount__refs_D296_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs_D296_k402) (close _V10_Dcount__refs_D296_k403))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs_D296_k402, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D296_k403, self)})));
}
static void _V10_Dcount__refs_D296_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.x.1363 2 0) (bruijn ##.x.1364 1 0) (close _V10_Dcount__refs__atom_D520_lambda84) (close _V10_Dcount__refs__apply_D521_lambda101)) ((bruijn ##.application?.286 4 0) (close _V10_Dcount__refs_D296_k401) (bruijn ##.expr.517 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D520_lambda84, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D521_lambda101, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D296_k401, self)})),
      statics->up->up->vars[1]);
    }
}
static void _V10_Dcount__refs_D296_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.802 27 0) (close _V10_Dcount__refs_D296_k322) (bruijn ##.x.817 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D296_k322, self)})),
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dcount__refs_D296_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D296_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.802 26 0) (close _V10_Dcount__refs_D296_k321) (bruijn ##.x.817 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D296_k321, self)})),
      VGetArg(statics, 11-1, 0));
}
static void _V10_Doptimize__lambda_D587_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1528 0 0) (bruijn ##.k.1524 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__lambda_D587_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1529 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.596 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.144.601 3 0)) (##inline ##vcore.cons (bruijn ##.x.1532 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize__lambda_D587_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_lambda117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.591 6 4) (close _V10_Doptimize__lambda_D587_k408) (##inline ##vcore.car (bruijn ##.expr.145.603 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_k408, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__lambda_D587_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.603 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.145.603 0 0))) (##vcore.call-with-values (close _V10_Doptimize__lambda_D587_k407) (close _V10_Doptimize__lambda_D587_lambda117) (bruijn ##.kk.141.597 3 1)) ((bruijn ##.k.1524 2 0) #f)) ((bruijn ##.k.1524 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_k407, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_lambda117, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D587_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.601 0 0)) ((close _V10_Doptimize__lambda_D587_k406) (##inline ##vcore.cdr (bruijn ##.expr.144.601 0 0))) ((bruijn ##.k.1524 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D587_k406, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D587_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.596 2 1)) ((close _V10_Doptimize__lambda_D587_k405) (##inline ##vcore.cdr (bruijn ##.expr.596 2 1))) ((bruijn ##.k.1524 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D587_k405, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D587_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 27 0) (bruijn ##.k.1522 0 0) (##string ##.string.2067) (bruijn ##.expr.596 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2067.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
static void _V10_Doptimize__lambda_D587_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1520 1 0) (close _V10_Doptimize__lambda_D587_lambda118) (bruijn ##.kk.141.597 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_lambda118, self)})),
      statics->vars[1]);
}
static void _V10_Doptimize__lambda_D587_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_lambda116, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__lambda_D587_k404) (close _V10_Doptimize__lambda_D587_k409))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D587_k404, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_k409, self)})));
}
static void _V10_Doptimize__lambda_D587_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D587_lambda115, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1519 0 0) (close _V10_Doptimize__lambda_D587_lambda116))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_lambda116, self)})));
}
static void _V10_Dinline__let_D588_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1534 5 0) (##inline ##vcore.cons (bruijn ##.x.1537 1 0) (bruijn ##.x.1538 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dinline__let_D588_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 30 0) (close _V10_Dinline__let_D588_k414) (bruijn ##.done-xs.607 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k414, self)})),
      statics->up->up->up->vars[3]);
}
static void _V10_Dinline__let_D588_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.592 4 5) (close _V10_Dinline__let_D588_k413) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1541 0 0) (##inline ##vcore.cons (bruijn ##.expr.605 3 1) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k413, self)})),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[1],
        VNULL))));
}
static void _V10_Dinline__let_D588_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1536 0 0) ((bruijn ##.optimize-apply.591 3 4) (bruijn ##.k.1534 2 0) (bruijn ##.expr.605 2 1)) ((bruijn ##.x.804 28 0) (close _V10_Dinline__let_D588_k412) (bruijn ##.done-ys.606 2 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      statics->up->vars[0],
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k412, self)})),
      statics->up->vars[2]);
}
}
static void _V10_Dinline__let_D588_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1577 0 0) ((bruijn ##.k.1575 4 0) (bruijn ##.p.1577 0 0)) ((bruijn ##.x.815 28 0) (bruijn ##.k.1575 4 0) (bruijn ##.refs.614 7 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 0),
      VEncodeInt(1l));
}
}
static void _V10_Dinline__let_D588_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.817 25 0) (close _V10_Dinline__let_D588_k426) (bruijn ##.x.1578 0 0) '##foreign.function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k426, self)})),
      _var0,
      _V10foreign_Dfunction);
}
static void _V10_Dinline__let_D588_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1576 0 0) ((bruijn ##.k.1575 2 0) (bruijn ##.p.1576 0 0)) ((bruijn ##.x.821 20 0) (close _V10_Dinline__let_D588_k425) (bruijn ##.x.611 8 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k425, self)})),
      VGetArg(statics, 8-1, 0));
}
}
static void _V10_Dinline__let_D588_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.817 23 0) (close _V10_Dinline__let_D588_k424) (bruijn ##.x.1579 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k424, self)})),
      _var0,
      _V0quote);
}
static void _V10_Dinline__let_D588_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1574 1 0) ((bruijn ##.k.1575 0 0) (bruijn ##.p.1574 1 0)) ((bruijn ##.x.821 18 0) (close _V10_Dinline__let_D588_k423) (bruijn ##.x.611 6 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k423, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Dinline__let_D588_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.820 23 0) (bruijn ##.k.1569 1 0) (bruijn ##.x.1570 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      statics->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
}
static void _V10_Dinline__let_D588_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1568 1 0) ((bruijn ##.x.821 21 0) (close _V10_Dinline__let_D588_k431) (bruijn ##.x.611 9 0)) ((bruijn ##.k.1569 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k431, self)})),
      VGetArg(statics, 9-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D588_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.812 34 0) (bruijn ##.k.1560 6 0) (bruijn ##.x.1563 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void _V10_Dinline__let_D588_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1564 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dinline__let_D588_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1562 0 0) ((bruijn ##.x.816 29 0) (close _V10_Dinline__let_D588_k436) (bruijn ##.impure-table.594 16 7) (bruijn ##.x.611 12 0) (close _V10_Dinline__let_D588_lambda120)) ((bruijn ##.k.1560 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k436, self)})),
      VGetArg(statics, 16-1, 7),
      VGetArg(statics, 12-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda120, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D588_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 32 0) (close _V10_Dinline__let_D588_k435) (bruijn ##.x.1565 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k435, self)})),
      _var0);
}
static void _V10_Dinline__let_D588_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1566 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dinline__let_D588_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1561 0 0) ((bruijn ##.x.816 27 0) (close _V10_Dinline__let_D588_k434) (bruijn ##.impure-table.594 14 7) (bruijn ##.y.610 11 0) (close _V10_Dinline__let_D588_lambda121)) ((bruijn ##.k.1560 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k434, self)})),
      VGetArg(statics, 14-1, 7),
      VGetArg(statics, 11-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda121, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D588_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 30 0) (close _V10_Dinline__let_D588_k433) (bruijn ##.x.1567 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k433, self)})),
      _var0);
}
static void _V10_Dinline__let_D588_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D588_k430) (close _V10_Dinline__let_D588_k432))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D588_k430, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k432, self)})));
}
static void _V10_Dinline__let_D588_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1559 1 0) ((bruijn ##.x.819 21 0) (close _V10_Dinline__let_D588_k429) (bruijn ##.x.611 7 0)) ((bruijn ##.k.1560 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k429, self)})),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D588_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-refs!.294 20 8) (bruijn ##.k.1549 4 0) (bruijn ##.ref-table.593 18 6) (bruijn ##.xrefs.615 3 0) (bruijn ##.x.1551 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 8)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 18-1, 6),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Dinline__let_D588_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.822 24 0) (close _V10_Dinline__let_D588_k443) (bruijn ##.refs.614 10 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k443, self)})),
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
}
static void _V10_Dinline__let_D588_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dinline__let_D588_k442) (bruijn ##.dummy.148.617 1 2) (bruijn ##.x.1552 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k442, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dinline__let_D588_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.296 18 10) (bruijn ##.k.1553 0 0) (bruijn ##.x.611 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 10)), 2,
      _var0,
      VGetArg(statics, 12-1, 0));
}
static void _V10_Dinline__let_D588_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1554 1 0) (bruijn ##.xpure.616 2 1) (bruijn ##.xpure.147.619 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dinline__let_D588_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dinline__let_D588_k444) (bruijn ##.xrefs.615 1 0) (bruijn ##.xrefs.146.618 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k444, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Dinline__let_D588_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1548 1 0) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dinline__let_D588_k441) (close _V10_Dinline__let_D588_lambda122) (close _V10_Dinline__let_D588_lambda123))) ((bruijn ##.k.1549 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k441, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda122, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda123, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D588_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.inline-let.588 16 1) (bruijn ##.k.1534 15 0) (bruijn ##.x.1547 0 0) (bruijn ##.done-ys.606 15 2) (bruijn ##.done-xs.607 15 3) (bruijn ##.ys.612 11 0) (bruijn ##.xs.613 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 1)), 6,
      VGetArg(statics, 15-1, 0),
      _var0,
      VGetArg(statics, 15-1, 2),
      VGetArg(statics, 15-1, 3),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 10-1, 0));
}
static void _V10_Dinline__let_D588_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.substitute.289 17 3) (close _V10_Dinline__let_D588_k447) (bruijn ##.y.610 12 0) (bruijn ##.x.611 11 0) (bruijn ##.expr.605 14 1) (bruijn ##.refs.614 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 3)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k447, self)})),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 14-1, 1),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dinline__let_D588_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.823 20 0) (close _V10_Dinline__let_D588_k446) (bruijn ##.ref-table.593 14 6) (bruijn ##.y.610 11 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k446, self)})),
      VGetArg(statics, 14-1, 6),
      VGetArg(statics, 11-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D588_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D588_k440) (close _V10_Dinline__let_D588_k445))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D588_k440, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k445, self)})));
}
static void _V10_Dinline__let_D588_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 29 0) (close _V10_Dinline__let_D588_k439) (bruijn ##.x.1556 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k439, self)})),
      _var0);
}
static void _V10_Dinline__let_D588_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.inline-let.588 13 1) (bruijn ##.k.1534 12 0) (bruijn ##.expr.605 12 1) (bruijn ##.x.1557 1 0) (bruijn ##.x.1558 0 0) (bruijn ##.ys.612 8 0) (bruijn ##.xs.613 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 6,
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 12-1, 1),
      statics->vars[0],
      _var0,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dinline__let_D588_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 34 0) (close _V10_Dinline__let_D588_k449) (bruijn ##.x.611 8 0) (bruijn ##.done-xs.607 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k449, self)})),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 11-1, 3));
}
static void _V10_Dinline__let_D588_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1544 0 0) ((bruijn ##.x.815 25 0) (close _V10_Dinline__let_D588_k438) (bruijn ##.refs.614 4 0) 1) ((bruijn ##.x.807 33 0) (close _V10_Dinline__let_D588_k448) (bruijn ##.y.610 8 0) (bruijn ##.done-ys.606 10 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k438, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k448, self)})),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 10-1, 2));
}
}
static void _V10_Dinline__let_D588_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D588_k428) (close _V10_Dinline__let_D588_k437))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D588_k428, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k437, self)})));
}
static void _V10_Dinline__let_D588_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D588_k422) (close _V10_Dinline__let_D588_k427))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D588_k422, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k427, self)})));
}
static void _V10_Dinline__let_D588_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1543 0 0) ((bruijn ##.inline-let.588 8 1) (bruijn ##.k.1534 7 0) (bruijn ##.expr.605 7 1) (bruijn ##.done-ys.606 7 2) (bruijn ##.done-xs.607 7 3) (bruijn ##.ys.612 3 0) (bruijn ##.xs.613 2 0)) ((bruijn ##.x.818 19 0) (close _V10_Dinline__let_D588_k421) (bruijn ##.x.611 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 6,
      VGetArg(statics, 7-1, 0),
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      VGetArg(statics, 7-1, 3),
      statics->up->up->vars[0],
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k421, self)})),
      statics->up->up->up->vars[0]);
}
}
static void _V10_Dinline__let_D588_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.815 21 0) (close _V10_Dinline__let_D588_k420) (bruijn ##.refs.614 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k420, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D588_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1580 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D588_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.816 19 0) (close _V10_Dinline__let_D588_k419) (bruijn ##.ref-table.593 6 6) (bruijn ##.y.610 3 0) (close _V10_Dinline__let_D588_lambda124))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k419, self)})),
      VGetArg(statics, 6-1, 6),
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda124, self)})));
}
static void _V10_Dinline__let_D588_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 10 0) (close _V10_Dinline__let_D588_k418) (bruijn ##.xs.609 4 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k418, self)})),
      statics->up->up->up->vars[5]);
}
static void _V10_Dinline__let_D588_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.824 9 0) (close _V10_Dinline__let_D588_k417) (bruijn ##.ys.608 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k417, self)})),
      statics->up->up->vars[4]);
}
static void _V10_Dinline__let_D588_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.821 11 0) (close _V10_Dinline__let_D588_k416) (bruijn ##.xs.609 2 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k416, self)})),
      statics->up->vars[5]);
}
static void _V10_Dinline__let_D588_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1535 0 0) ((bruijn ##.x.825 6 0) (close _V10_Dinline__let_D588_k411) (bruijn ##.done-ys.606 1 2)) ((bruijn ##.x.821 10 0) (close _V10_Dinline__let_D588_k415) (bruijn ##.ys.608 1 4)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k411, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k415, self)})),
      statics->vars[4]);
}
}
static void _V10_Dinline__let_D588_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D588_lambda119, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[6]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 6, 6, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  // ((bruijn ##.x.825 5 0) (close _V10_Dinline__let_D588_k410) (bruijn ##.ys.608 0 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_k410, self)})),
      _var4);
}
static void _V10_Doptimize__let_D589_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1710 0 0) (bruijn ##.k.1700 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Doptimize__let_D589_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1752 0 0) ((bruijn ##.k.1750 4 0) (bruijn ##.p.1752 0 0)) ((bruijn ##.x.815 35 0) (bruijn ##.k.1750 4 0) (bruijn ##.x.1713 7 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 0),
      VEncodeInt(1l));
}
}
static void _V10_Doptimize__let_D589_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.817 32 0) (close _V10_Doptimize__let_D589_k468) (bruijn ##.x.1753 0 0) '##foreign.function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k468, self)})),
      _var0,
      _V10foreign_Dfunction);
}
static void _V10_Doptimize__let_D589_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1751 0 0) ((bruijn ##.k.1750 2 0) (bruijn ##.p.1751 0 0)) ((bruijn ##.x.821 27 0) (close _V10_Doptimize__let_D589_k467) (bruijn ##.x.1712 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k467, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Doptimize__let_D589_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.817 30 0) (close _V10_Doptimize__let_D589_k466) (bruijn ##.x.1754 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k466, self)})),
      _var0,
      _V0quote);
}
static void _V10_Doptimize__let_D589_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1749 1 0) ((bruijn ##.k.1750 0 0) (bruijn ##.p.1749 1 0)) ((bruijn ##.x.821 25 0) (close _V10_Doptimize__let_D589_k465) (bruijn ##.x.1712 4 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k465, self)})),
      statics->up->up->up->vars[0]);
}
}
static void _V10_Doptimize__let_D589_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.820 30 0) (bruijn ##.k.1744 1 0) (bruijn ##.x.1745 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      statics->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
}
static void _V10_Doptimize__let_D589_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1743 1 0) ((bruijn ##.x.821 28 0) (close _V10_Doptimize__let_D589_k473) (bruijn ##.x.1712 7 0)) ((bruijn ##.k.1744 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k473, self)})),
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.812 41 0) (bruijn ##.k.1735 6 0) (bruijn ##.x.1738 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
static void _V10_Doptimize__let_D589_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1739 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Doptimize__let_D589_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1737 0 0) ((bruijn ##.x.816 36 0) (close _V10_Doptimize__let_D589_k478) (bruijn ##.impure-table.594 23 7) (bruijn ##.x.1712 10 0) (close _V10_Doptimize__let_D589_lambda128)) ((bruijn ##.k.1735 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k478, self)})),
      VGetArg(statics, 23-1, 7),
      VGetArg(statics, 10-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda128, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 39 0) (close _V10_Doptimize__let_D589_k477) (bruijn ##.x.1740 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k477, self)})),
      _var0);
}
static void _V10_Doptimize__let_D589_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1741 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Doptimize__let_D589_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1736 0 0) ((bruijn ##.x.816 34 0) (close _V10_Doptimize__let_D589_k476) (bruijn ##.impure-table.594 21 7) (bruijn ##.y.627 13 0) (close _V10_Doptimize__let_D589_lambda129)) ((bruijn ##.k.1735 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k476, self)})),
      VGetArg(statics, 21-1, 7),
      VGetArg(statics, 13-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda129, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 37 0) (close _V10_Doptimize__let_D589_k475) (bruijn ##.x.1742 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k475, self)})),
      _var0);
}
static void _V10_Doptimize__let_D589_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k472) (close _V10_Doptimize__let_D589_k474))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k472, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k474, self)})));
}
static void _V10_Doptimize__let_D589_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1734 1 0) ((bruijn ##.x.819 28 0) (close _V10_Doptimize__let_D589_k471) (bruijn ##.x.1712 5 0)) ((bruijn ##.k.1735 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k471, self)})),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-refs!.294 27 8) (bruijn ##.k.1720 4 0) (bruijn ##.ref-table.593 25 6) (bruijn ##.xrefs.634 3 0) (bruijn ##.x.1722 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 8)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 25-1, 6),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D589_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.822 31 0) (close _V10_Doptimize__let_D589_k485) (bruijn ##.x.1713 10 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k485, self)})),
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
}
static void _V10_Doptimize__let_D589_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__let_D589_k484) (bruijn ##.dummy.187.636 1 2) (bruijn ##.x.1723 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k484, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__let_D589_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.296 25 10) (bruijn ##.k.1724 0 0) (bruijn ##.x.1712 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 10)), 2,
      _var0,
      VGetArg(statics, 10-1, 0));
}
static void _V10_Doptimize__let_D589_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1725 1 0) (bruijn ##.xpure.635 2 1) (bruijn ##.xpure.186.638 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__let_D589_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda131, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__let_D589_k486) (bruijn ##.xrefs.634 1 0) (bruijn ##.xrefs.185.637 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k486, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__let_D589_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1719 1 0) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k483) (close _V10_Doptimize__let_D589_lambda130) (close _V10_Doptimize__let_D589_lambda131))) ((bruijn ##.k.1720 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k483, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda130, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda131, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 23 4) (bruijn ##.k.1711 11 0) (bruijn ##.x.1718 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 4)), 2,
      VGetArg(statics, 11-1, 0),
      _var0);
}
static void _V10_Doptimize__let_D589_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.substitute.289 24 3) (close _V10_Doptimize__let_D589_k489) (bruijn ##.y.627 14 0) (bruijn ##.x.1712 9 0) (bruijn ##.expr.629 12 0) (bruijn ##.x.1713 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 3)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k489, self)})),
      VGetArg(statics, 14-1, 0),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Doptimize__let_D589_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.823 27 0) (close _V10_Doptimize__let_D589_k488) (bruijn ##.ref-table.593 21 6) (bruijn ##.y.627 13 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k488, self)})),
      VGetArg(statics, 21-1, 6),
      VGetArg(statics, 13-1, 0),
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D589_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k482) (close _V10_Doptimize__let_D589_k487))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k482, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k487, self)})));
}
static void _V10_Doptimize__let_D589_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 36 0) (close _V10_Doptimize__let_D589_k481) (bruijn ##.x.1727 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k481, self)})),
      _var0);
}
static void _V10_Doptimize__let_D589_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1711 7 0) (##inline ##vcore.cons (bruijn ##.x.1728 0 0) (##inline ##vcore.cons (bruijn ##.x.1712 6 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VNULL)));
}
static void _V10_Doptimize__let_D589_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1715 0 0) ((bruijn ##.x.815 32 0) (close _V10_Doptimize__let_D589_k480) (bruijn ##.x.1713 4 0) 1) ((bruijn ##.optimize-atom.592 18 5) (close _V10_Doptimize__let_D589_k490) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.y.627 10 0) '()) (##inline ##vcore.cons (bruijn ##.expr.629 8 0) '())))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k480, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k490, self)})),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VNULL))));
}
}
static void _V10_Doptimize__let_D589_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k470) (close _V10_Doptimize__let_D589_k479))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k470, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k479, self)})));
}
static void _V10_Doptimize__let_D589_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k464) (close _V10_Doptimize__let_D589_k469))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k464, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k469, self)})));
}
static void _V10_Doptimize__let_D589_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1714 0 0) ((bruijn ##.optimize-apply.591 15 4) (bruijn ##.k.1711 3 0) (bruijn ##.expr.629 5 0)) ((bruijn ##.x.818 26 0) (close _V10_Doptimize__let_D589_k463) (bruijn ##.x.1712 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k463, self)})),
      statics->up->vars[0]);
}
}
static void _V10_Doptimize__let_D589_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.815 28 0) (close _V10_Doptimize__let_D589_k462) (bruijn ##.x.1713 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k462, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D589_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1755 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D589_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.816 26 0) (close _V10_Doptimize__let_D589_k461) (bruijn ##.ref-table.593 13 6) (bruijn ##.y.627 5 0) (close _V10_Doptimize__let_D589_lambda132))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k461, self)})),
      VGetArg(statics, 13-1, 6),
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda132, self)})));
}
static void _V10_Doptimize__let_D589_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.592 12 5) (close _V10_Doptimize__let_D589_k460) (##inline ##vcore.car (bruijn ##.expr.156.630 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k460, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D589_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.630 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.156.630 0 0))) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k459) (close _V10_Doptimize__let_D589_lambda127) (bruijn ##.kk.149.621 9 1)) ((bruijn ##.k.1700 8 0) #f)) ((bruijn ##.k.1700 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k459, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda127, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.155.628 1 0))) ((close _V10_Doptimize__let_D589_k458) (##inline ##vcore.cdr (bruijn ##.let-expr.620 9 1))) ((bruijn ##.k.1700 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k458, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.628 0 0)) ((close _V10_Doptimize__let_D589_k457) (##inline ##vcore.car (bruijn ##.expr.155.628 0 0))) ((bruijn ##.k.1700 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k457, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.626 1 0))) ((close _V10_Doptimize__let_D589_k456) (##inline ##vcore.cdr (bruijn ##.expr.153.625 2 0))) ((bruijn ##.k.1700 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k456, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.626 0 0)) ((close _V10_Doptimize__let_D589_k455) (##inline ##vcore.car (bruijn ##.expr.154.626 0 0))) ((bruijn ##.k.1700 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k455, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.625 0 0)) ((close _V10_Doptimize__let_D589_k454) (##inline ##vcore.car (bruijn ##.expr.153.625 0 0))) ((bruijn ##.k.1700 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k454, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1702 0 0) ((close _V10_Doptimize__let_D589_k453) (##inline ##vcore.cdr (bruijn ##.expr.152.624 1 0))) ((bruijn ##.k.1700 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k453, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.624 0 0)) ((bruijn ##.x.826 7 0) (close _V10_Doptimize__let_D589_k452) 'continuation (##inline ##vcore.car (bruijn ##.expr.152.624 0 0))) ((bruijn ##.k.1700 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k452, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 2 1)) ((close _V10_Doptimize__let_D589_k451) (##inline ##vcore.car (bruijn ##.let-expr.620 2 1))) ((bruijn ##.k.1700 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k451, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1693 0 0) (bruijn ##.k.1685 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__let_D589_lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 9 4) (bruijn ##.k.1694 0 0) (##inline ##vcore.car (bruijn ##.expr.160.642 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D589_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.642 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.160.642 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.let-expr.620 7 1))) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k497) (close _V10_Doptimize__let_D589_lambda133) (bruijn ##.kk.149.621 6 1)) ((bruijn ##.k.1685 4 0) #f)) ((bruijn ##.k.1685 4 0) #f)) ((bruijn ##.k.1685 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k497, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda133, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.641 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.159.641 0 0))) ((close _V10_Doptimize__let_D589_k496) (##inline ##vcore.cdr (bruijn ##.expr.159.641 0 0))) ((bruijn ##.k.1685 3 0) #f)) ((bruijn ##.k.1685 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k496, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1687 0 0) ((close _V10_Doptimize__let_D589_k495) (##inline ##vcore.cdr (bruijn ##.expr.158.640 1 0))) ((bruijn ##.k.1685 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k495, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.640 0 0)) ((bruijn ##.x.826 8 0) (close _V10_Doptimize__let_D589_k494) 'lambda (##inline ##vcore.car (bruijn ##.expr.158.640 0 0))) ((bruijn ##.k.1685 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k494, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 3 1)) ((close _V10_Doptimize__let_D589_k493) (##inline ##vcore.car (bruijn ##.let-expr.620 3 1))) ((bruijn ##.k.1685 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k493, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D649_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.166.648 4 1) (bruijn ##.k.1650 1 0) (bruijn ##.expr.168.650 2 1) (bruijn ##.x.1651 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D649_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.168.650 1 1))) ((bruijn ##.x.804 38 0) (close _V10_Dloop_D649_k504) (bruijn ##.ys.165.651 1 2)) ((bruijn ##.k.1650 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_k504, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D649_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.166.648 7 1) (bruijn ##.k.1644 2 0) (bruijn ##.expr.168.650 5 1) (bruijn ##.x.1646 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D649_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 41 0) (close _V10_Dloop_D649_k507) (bruijn ##.ys.165.651 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_k507, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D649_lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.167.652 0 1) (close _V10_Dloop_D649_k506) (##inline ##vcore.cdr (bruijn ##.expr.168.650 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.168.650 3 1)) (bruijn ##.ys.165.651 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_k506, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D649_lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_lambda137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1643 0 0) (close _V10_Dloop_D649_lambda138))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_lambda138, self)})));
}
static void _V10_Dloop_D649_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1641 1 0) (close _V10_Dloop_D649_lambda137) (bruijn ##.loop.649 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_lambda137, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D649_lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D649_lambda136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D649_k503) (close _V10_Dloop_D649_k505))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D649_k503, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_k505, self)})));
}
static void _V10_Doptimize__let_D589_lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D649_lambda136)) ((bruijn ##.loop.649 0 0) (bruijn ##.k.1640 1 0) (##inline ##vcore.car (bruijn ##.expr.163.646 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D649_lambda136, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Doptimize__let_D589_lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1639 0 0) (close _V10_Doptimize__let_D589_lambda135))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda135, self)})));
}
static void _V10_Dloop_D660_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.172.659 4 1) (bruijn ##.k.1668 1 0) (bruijn ##.expr.174.661 2 1) (bruijn ##.x.1669 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D660_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.174.661 1 1))) ((bruijn ##.x.804 40 0) (close _V10_Dloop_D660_k510) (bruijn ##.xs.171.662 1 2)) ((bruijn ##.k.1668 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_k510, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D660_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.172.659 7 1) (bruijn ##.k.1662 2 0) (bruijn ##.expr.174.661 5 1) (bruijn ##.x.1664 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D660_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 43 0) (close _V10_Dloop_D660_k513) (bruijn ##.xs.171.662 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_k513, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D660_lambda144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.173.663 0 1) (close _V10_Dloop_D660_k512) (##inline ##vcore.cdr (bruijn ##.expr.174.661 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.174.661 3 1)) (bruijn ##.xs.171.662 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_k512, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D660_lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_lambda143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1661 0 0) (close _V10_Dloop_D660_lambda144))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_lambda144, self)})));
}
static void _V10_Dloop_D660_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1659 1 0) (close _V10_Dloop_D660_lambda143) (bruijn ##.loop.660 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_lambda143, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D660_lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D660_lambda142, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D660_k509) (close _V10_Dloop_D660_k511))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D660_k509, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_k511, self)})));
}
static void _V10_Doptimize__let_D589_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda141, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D660_lambda142)) ((bruijn ##.loop.660 0 0) (bruijn ##.k.1658 1 0) (##inline ##vcore.cdr (bruijn ##.let-expr.620 12 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D660_lambda142, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)),
      VNULL);
    }
}
static void _V10_Doptimize__let_D589_lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1657 0 0) (close _V10_Doptimize__let_D589_lambda141))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda141, self)})));
}
static void _V10_Doptimize__let_D589_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1673 0 0) (bruijn ##.k.1671 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__let_D589_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1677 1 0) ((bruijn ##.x.806 40 0) (bruijn ##.k.1678 0 0) (##string ##.string.2068)) ((bruijn ##.k.1678 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2068.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.inline-let.588 18 1) (bruijn ##.k.1674 6 0) (##inline ##vcore.car (bruijn ##.expr.169.656 8 0)) '() '() (bruijn ##.ys.655 9 2) (bruijn ##.x.1676 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 6,
      VGetArg(statics, 6-1, 0),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 0)),
      VNULL,
      VNULL,
      VGetArg(statics, 9-1, 2),
      _var0);
}
static void _V10_Doptimize__let_D589_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 41 0) (close _V10_Doptimize__let_D589_k521) (bruijn ##.optimize-atom.592 17 5) (bruijn ##.xs.666 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k521, self)})),
      VGetArg(statics, 17-1, 5),
      VGetArg(statics, 6-1, 2));
}
static void _V10_Doptimize__let_D589_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k519) (close _V10_Doptimize__let_D589_k520))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k519, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k520, self)})));
}
static void _V10_Doptimize__let_D589_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 32 0) (close _V10_Doptimize__let_D589_k518) (bruijn ##.x.1679 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k518, self)})),
      _var0);
}
static void _V10_Doptimize__let_D589_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.815 28 0) (close _V10_Doptimize__let_D589_k517) (bruijn ##.x.1680 1 0) (bruijn ##.x.1681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k517, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D589_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.813 29 0) (close _V10_Doptimize__let_D589_k516) (bruijn ##.xs.666 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k516, self)})),
      statics->up->vars[2]);
}
static void _V10_Doptimize__let_D589_lambda146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.813 28 0) (close _V10_Doptimize__let_D589_k515) (bruijn ##.ys.655 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k515, self)})),
      statics->up->up->vars[2]);
}
static void _V10_Doptimize__let_D589_lambda145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda145, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.665 0 1)) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k514) (close _V10_Doptimize__let_D589_lambda146) (bruijn ##.kk.149.621 9 1)) ((bruijn ##.k.1671 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k514, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda146, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.169.656 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.169.656 0 0))) (##vcore.call-with-values (bruijn ##.k.1653 1 0) (close _V10_Doptimize__let_D589_lambda140) (close _V10_Doptimize__let_D589_lambda145)) ((bruijn ##.k.1653 1 0) #f)) ((bruijn ##.k.1653 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda140, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda145, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda139, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.654 0 1)) ((close _V10_Doptimize__let_D589_k508) (##inline ##vcore.cdr (bruijn ##.expr.163.646 1 0))) ((bruijn ##.k.1653 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k508, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.646 0 0)) (##vcore.call-with-values (bruijn ##.k.1635 3 0) (close _V10_Doptimize__let_D589_lambda134) (close _V10_Doptimize__let_D589_lambda139)) ((bruijn ##.k.1635 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda134, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda139, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1637 0 0) ((close _V10_Doptimize__let_D589_k502) (##inline ##vcore.cdr (bruijn ##.expr.162.645 1 0))) ((bruijn ##.k.1635 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k502, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.645 0 0)) ((bruijn ##.x.826 9 0) (close _V10_Doptimize__let_D589_k501) 'lambda (##inline ##vcore.car (bruijn ##.expr.162.645 0 0))) ((bruijn ##.k.1635 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k501, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 4 1)) ((close _V10_Doptimize__let_D589_k500) (##inline ##vcore.car (bruijn ##.let-expr.620 4 1))) ((bruijn ##.k.1635 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k500, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1628 0 0) (bruijn ##.k.1620 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__let_D589_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 11 4) (bruijn ##.k.1629 0 0) (##inline ##vcore.car (bruijn ##.expr.178.670 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D589_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.178.670 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.178.670 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.let-expr.620 9 1))) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k528) (close _V10_Doptimize__let_D589_lambda147) (bruijn ##.kk.149.621 8 1)) ((bruijn ##.k.1620 4 0) #f)) ((bruijn ##.k.1620 4 0) #f)) ((bruijn ##.k.1620 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1))))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k528, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda147, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.177.669 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.177.669 0 0))) ((close _V10_Doptimize__let_D589_k527) (##inline ##vcore.cdr (bruijn ##.expr.177.669 0 0))) ((bruijn ##.k.1620 3 0) #f)) ((bruijn ##.k.1620 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k527, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1622 0 0) ((close _V10_Doptimize__let_D589_k526) (##inline ##vcore.cdr (bruijn ##.expr.176.668 1 0))) ((bruijn ##.k.1620 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k526, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.668 0 0)) ((bruijn ##.x.826 10 0) (close _V10_Doptimize__let_D589_k525) 'continuation (##inline ##vcore.car (bruijn ##.expr.176.668 0 0))) ((bruijn ##.k.1620 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k525, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 5 1)) ((close _V10_Doptimize__let_D589_k524) (##inline ##vcore.car (bruijn ##.let-expr.620 5 1))) ((bruijn ##.k.1620 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k524, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1604 0 0) (bruijn ##.k.1598 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Doptimize__let_D589_k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1612 1 0) ((bruijn ##.x.806 42 0) (bruijn ##.k.1613 0 0) (##string ##.string.2068)) ((bruijn ##.k.1613 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2068.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1605 7 0) (##inline ##vcore.cons (bruijn ##.x.1607 1 0) (bruijn ##.x.1608 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Doptimize__let_D589_k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 44 0) (close _V10_Doptimize__let_D589_k545) (bruijn ##.optimize-atom.592 20 5) (bruijn ##.xs.678 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k545, self)})),
      VGetArg(statics, 20-1, 5),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Doptimize__let_D589_k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.592 19 5) (close _V10_Doptimize__let_D589_k544) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.ys.675 8 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.182.676 7 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k544, self)})),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
        VNULL))));
}
static void _V10_Doptimize__let_D589_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k542) (close _V10_Doptimize__let_D589_k543))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k542, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k543, self)})));
}
static void _V10_Doptimize__let_D589_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.812 34 0) (close _V10_Doptimize__let_D589_k541) (bruijn ##.x.1614 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k541, self)})),
      _var0);
}
static void _V10_Doptimize__let_D589_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.814 31 0) (close _V10_Doptimize__let_D589_k540) (bruijn ##.x.1615 1 0) (bruijn ##.x.1616 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k540, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D589_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.813 31 0) (close _V10_Doptimize__let_D589_k539) (bruijn ##.xs.678 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k539, self)})),
      statics->up->vars[0]);
}
static void _V10_Doptimize__let_D589_lambda148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.taillength.291 16 5) (close _V10_Doptimize__let_D589_k538) (bruijn ##.ys.675 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k538, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__let_D589_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__let_D589_k537) (close _V10_Doptimize__let_D589_lambda148) (bruijn ##.kk.149.621 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k537, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda148, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__let_D589_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.182.676 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.182.676 0 0))) ((close _V10_Doptimize__let_D589_k536) (##inline ##vcore.cdr (bruijn ##.let-expr.620 11 1))) ((bruijn ##.k.1598 5 0) #f)) ((bruijn ##.k.1598 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k536, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k535) (##inline ##vcore.cdr (bruijn ##.expr.181.674 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k535, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D589_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.181.674 0 0)) ((close _V10_Doptimize__let_D589_k534) (##inline ##vcore.car (bruijn ##.expr.181.674 0 0))) ((bruijn ##.k.1598 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k534, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1600 0 0) ((close _V10_Doptimize__let_D589_k533) (##inline ##vcore.cdr (bruijn ##.expr.180.673 1 0))) ((bruijn ##.k.1598 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k533, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.180.673 0 0)) ((bruijn ##.x.826 11 0) (close _V10_Doptimize__let_D589_k532) 'lambda (##inline ##vcore.car (bruijn ##.expr.180.673 0 0))) ((bruijn ##.k.1598 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k532, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 6 1)) ((close _V10_Doptimize__let_D589_k531) (##inline ##vcore.car (bruijn ##.let-expr.620 6 1))) ((bruijn ##.k.1598 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k531, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1594 0 0) (bruijn ##.k.1591 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__let_D589_lambda149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 34 0) (bruijn ##.k.1595 0 0) (##string ##.string.2069))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2069.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D589_k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1593 0 0) (##vcore.call-with-values (close _V10_Doptimize__let_D589_k550) (close _V10_Doptimize__let_D589_lambda149) (bruijn ##.kk.149.621 8 1)) ((bruijn ##.k.1591 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k550, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda149, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.184.680 0 0)) ((bruijn ##.x.826 12 0) (close _V10_Doptimize__let_D589_k549) 'continuation (##inline ##vcore.car (bruijn ##.expr.184.680 0 0))) ((bruijn ##.k.1591 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k549, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.620 7 1)) ((close _V10_Doptimize__let_D589_k548) (##inline ##vcore.car (bruijn ##.let-expr.620 7 1))) ((bruijn ##.k.1591 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k548, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D589_lambda150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 32 0) (bruijn ##.k.1589 0 0) (##string ##.string.2070))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2070.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D589_k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1582 6 0) (close _V10_Doptimize__let_D589_lambda150) (bruijn ##.kk.149.621 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda150, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__let_D589_k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k547) (close _V10_Doptimize__let_D589_k551))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k547, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k551, self)})));
}
static void _V10_Doptimize__let_D589_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k530) (close _V10_Doptimize__let_D589_k546))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k530, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k546, self)})));
}
static void _V10_Doptimize__let_D589_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k523) (close _V10_Doptimize__let_D589_k529))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k523, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k529, self)})));
}
static void _V10_Doptimize__let_D589_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k499) (close _V10_Doptimize__let_D589_k522))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k499, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k522, self)})));
}
static void _V10_Doptimize__let_D589_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D589_k492) (close _V10_Doptimize__let_D589_k498))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k492, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k498, self)})));
}
static void _V10_Doptimize__let_D589_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda126, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__let_D589_k450) (close _V10_Doptimize__let_D589_k491))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D589_k450, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_k491, self)})));
}
static void _V10_Doptimize__let_D589_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D589_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1581 0 0) (close _V10_Doptimize__let_D589_lambda126))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda126, self)})));
}
static void _V10_Dloop_D688_k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.195.687 5 1) (bruijn ##.k.1785 2 0) (bruijn ##.expr.197.689 3 1) (bruijn ##.x.1786 1 0) (bruijn ##.x.1787 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D688_k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 36 0) (close _V10_Dloop_D688_k557) (bruijn ##.vals.194.691 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k557, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D688_k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.197.689 1 1))) ((bruijn ##.x.804 35 0) (close _V10_Dloop_D688_k556) (bruijn ##.args.193.690 1 2)) ((bruijn ##.k.1785 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k556, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D688_k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.199.695 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.199.695 0 0))) ((bruijn ##.kk.196.692 3 1) (bruijn ##.k.1777 1 0) (##inline ##vcore.cdr (bruijn ##.expr.197.689 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.198.693 2 0)) (bruijn ##.args.193.690 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.199.695 0 0)) (bruijn ##.vals.194.691 6 3))) ((bruijn ##.k.1777 1 0) #f)) ((bruijn ##.k.1777 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D688_k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.198.693 1 0)) ((close _V10_Dloop_D688_k561) (##inline ##vcore.cdr (bruijn ##.expr.198.693 1 0))) ((bruijn ##.k.1777 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D688_k561, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D688_k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.195.687 9 1) (bruijn ##.k.1772 4 0) (bruijn ##.expr.197.689 7 1) (bruijn ##.x.1774 1 0) (bruijn ##.x.1775 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D688_k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 40 0) (close _V10_Dloop_D688_k564) (bruijn ##.vals.194.691 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k564, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D688_k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 39 0) (close _V10_Dloop_D688_k563) (bruijn ##.args.193.690 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k563, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D688_k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D688_k560) (close _V10_Dloop_D688_k562))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D688_k560, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k562, self)})));
}
static void _V10_Dloop_D688_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D688_k559) (##inline ##vcore.car (bruijn ##.expr.197.689 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D688_k559, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D688_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_lambda156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1771 0 0) (close _V10_Dloop_D688_lambda157))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_lambda157, self)})));
}
static void _V10_Dloop_D688_k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1769 1 0) (close _V10_Dloop_D688_lambda156) (bruijn ##.loop.688 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_lambda156, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D688_lambda155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D688_lambda155, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D688_k555) (close _V10_Dloop_D688_k558))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D688_k555, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_k558, self)})));
}
static void _V10_Doptimize__letrec_D590_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D688_lambda155)) ((bruijn ##.loop.688 0 0) (bruijn ##.k.1768 1 0) (##inline ##vcore.car (bruijn ##.expr.191.685 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D688_lambda155, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__letrec_D590_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1767 0 0) (close _V10_Doptimize__letrec_D590_lambda154))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda154, self)})));
}
static void _V10_Doptimize__letrec_D590_k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1793 0 0) (bruijn ##.k.1789 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__letrec_D590_k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1794 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1796 1 0) (##inline ##vcore.cons (bruijn ##.x.1798 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize__letrec_D590_k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.591 10 4) (close _V10_Doptimize__letrec_D590_k569) (##inline ##vcore.car (bruijn ##.expr.200.700 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k569, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Doptimize__letrec_D590_k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 33 0) (close _V10_Doptimize__letrec_D590_k568) (bruijn ##.x.811 27 0) (bruijn ##.args.698 3 2) (bruijn ##.x.1799 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k568, self)})),
      VGetArg(statics, 27-1, 0),
      statics->up->up->vars[2],
      _var0);
}
static void _V10_Doptimize__letrec_D590_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 32 0) (close _V10_Doptimize__letrec_D590_k567) (bruijn ##.optimize-atom.592 8 5) (bruijn ##.vals.699 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k567, self)})),
      VGetArg(statics, 8-1, 5),
      statics->up->vars[3]);
}
static void _V10_Doptimize__letrec_D590_k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.200.700 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.200.700 0 0))) (##vcore.call-with-values (close _V10_Doptimize__letrec_D590_k566) (close _V10_Doptimize__letrec_D590_lambda159) (bruijn ##.kk.188.682 5 1)) ((bruijn ##.k.1789 1 0) #f)) ((bruijn ##.k.1789 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k566, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda159, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D590_lambda158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda158, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.697 0 1)) ((close _V10_Doptimize__letrec_D590_k565) (##inline ##vcore.cdr (bruijn ##.expr.191.685 1 0))) ((bruijn ##.k.1789 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D590_k565, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D590_k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.191.685 0 0)) (##vcore.call-with-values (bruijn ##.k.1764 2 0) (close _V10_Doptimize__letrec_D590_lambda153) (close _V10_Doptimize__letrec_D590_lambda158)) ((bruijn ##.k.1764 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda153, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda158, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D590_k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1765 0 0) ((close _V10_Doptimize__letrec_D590_k554) (##inline ##vcore.cdr (bruijn ##.letrec-expr.681 3 1))) ((bruijn ##.k.1764 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D590_k554, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D590_k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.letrec-expr.681 2 1)) ((bruijn ##.x.826 6 0) (close _V10_Doptimize__letrec_D590_k553) 'letrec (##inline ##vcore.car (bruijn ##.letrec-expr.681 2 1))) ((bruijn ##.k.1764 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k553, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D590_k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.810 22 0) (bruijn ##.k.1761 1 0) (##string ##.string.2064))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2064.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__letrec_D590_lambda152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda152, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__letrec_D590_k552) (close _V10_Doptimize__letrec_D590_k570))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D590_k552, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_k570, self)})));
}
static void _V10_Doptimize__letrec_D590_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D590_lambda151, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1760 0 0) (close _V10_Doptimize__letrec_D590_lambda152))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda152, self)})));
}
static void _V10_Doptimize__apply_D591_k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1901 0 0) (bruijn ##.k.1898 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_lambda162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.589 6 2) (bruijn ##.k.1902 0 0) (bruijn ##.expr.702 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Doptimize__apply_D591_k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1900 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k574) (close _V10_Doptimize__apply_D591_lambda162) (bruijn ##.kk.201.703 3 1)) ((bruijn ##.k.1898 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k574, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda162, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.204.706 0 0)) ((bruijn ##.x.826 7 0) (close _V10_Doptimize__apply_D591_k573) 'continuation (##inline ##vcore.car (bruijn ##.expr.204.706 0 0))) ((bruijn ##.k.1898 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k573, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 2 1)) ((close _V10_Doptimize__apply_D591_k572) (##inline ##vcore.car (bruijn ##.expr.702 2 1))) ((bruijn ##.k.1898 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k572, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1894 0 0) (bruijn ##.k.1891 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.589 7 2) (bruijn ##.k.1895 0 0) (bruijn ##.expr.702 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__apply_D591_k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1893 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k579) (close _V10_Doptimize__apply_D591_lambda163) (bruijn ##.kk.201.703 4 1)) ((bruijn ##.k.1891 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k579, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda163, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.206.708 0 0)) ((bruijn ##.x.826 8 0) (close _V10_Doptimize__apply_D591_k578) 'lambda (##inline ##vcore.car (bruijn ##.expr.206.708 0 0))) ((bruijn ##.k.1891 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k578, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 3 1)) ((close _V10_Doptimize__apply_D591_k577) (##inline ##vcore.car (bruijn ##.expr.702 3 1))) ((bruijn ##.k.1891 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k577, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1887 0 0) (bruijn ##.k.1885 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-letrec.590 7 3) (bruijn ##.k.1888 0 0) (bruijn ##.expr.702 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__apply_D591_k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1886 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k583) (close _V10_Doptimize__apply_D591_lambda164) (bruijn ##.kk.201.703 4 1)) ((bruijn ##.k.1885 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k583, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda164, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 4 1)) ((bruijn ##.x.826 8 0) (close _V10_Doptimize__apply_D591_k582) 'letrec (##inline ##vcore.car (bruijn ##.expr.702 4 1))) ((bruijn ##.k.1885 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k582, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1873 0 0) (bruijn ##.k.1866 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D591_k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 15 4) (bruijn ##.k.1874 4 0) (##inline ##vcore.car (bruijn ##.expr.210.712 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
static void _V10_Doptimize__apply_D591_k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.295 16 9) (close _V10_Doptimize__apply_D591_k593) (bruijn ##.ref-table.593 14 6) (bruijn ##.bcount.716 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k593, self)})),
      VGetArg(statics, 14-1, 6),
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D591_k592) (bruijn ##.dummy.224.718 1 2) (bruijn ##.x.1877 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k592, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D591_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.296 15 10) (bruijn ##.k.1878 0 0) (##inline ##vcore.car (bruijn ##.expr.211.714 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D591_k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1879 1 0) (bruijn ##.bpure.717 2 1) (bruijn ##.bpure.223.720 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__apply_D591_lambda167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda167, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D591_k594) (bruijn ##.bcount.716 1 0) (bruijn ##.bcount.222.719 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k594, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D591_lambda165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k591) (close _V10_Doptimize__apply_D591_lambda166) (close _V10_Doptimize__apply_D591_lambda167)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k591, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda166, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda167, self)})));
    }
}
static void _V10_Doptimize__apply_D591_k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.211.714 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.211.714 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k590) (close _V10_Doptimize__apply_D591_lambda165) (bruijn ##.kk.201.703 8 1)) ((bruijn ##.k.1866 4 0) #f)) ((bruijn ##.k.1866 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k590, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda165, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.210.712 0 0)) ((close _V10_Doptimize__apply_D591_k589) (##inline ##vcore.cdr (bruijn ##.expr.210.712 0 0))) ((bruijn ##.k.1866 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k589, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.209.711 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.209.711 0 0))) ((close _V10_Doptimize__apply_D591_k588) (##inline ##vcore.cdr (bruijn ##.expr.209.711 0 0))) ((bruijn ##.k.1866 2 0) #f)) ((bruijn ##.k.1866 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k588, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1867 0 0) ((close _V10_Doptimize__apply_D591_k587) (##inline ##vcore.cdr (bruijn ##.expr.702 6 1))) ((bruijn ##.k.1866 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k587, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 5 1)) ((bruijn ##.x.826 9 0) (close _V10_Doptimize__apply_D591_k586) 'if (##inline ##vcore.car (bruijn ##.expr.702 5 1))) ((bruijn ##.k.1866 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k586, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1854 0 0) (bruijn ##.k.1847 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D591_k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 16 4) (bruijn ##.k.1855 4 0) (##inline ##vcore.car (bruijn ##.expr.215.725 5 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)));
}
static void _V10_Doptimize__apply_D591_k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.295 17 9) (close _V10_Doptimize__apply_D591_k604) (bruijn ##.ref-table.593 15 6) (bruijn ##.acount.727 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k604, self)})),
      VGetArg(statics, 15-1, 6),
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D591_k603) (bruijn ##.dummy.227.729 1 2) (bruijn ##.x.1858 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k603, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D591_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.296 16 10) (bruijn ##.k.1859 0 0) (##inline ##vcore.car (bruijn ##.expr.214.723 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D591_k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1860 1 0) (bruijn ##.apure.728 2 1) (bruijn ##.apure.226.731 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__apply_D591_lambda170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda170, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D591_k605) (bruijn ##.acount.727 1 0) (bruijn ##.acount.225.730 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k605, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D591_lambda168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k602) (close _V10_Doptimize__apply_D591_lambda169) (close _V10_Doptimize__apply_D591_lambda170)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k602, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda169, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda170, self)})));
    }
}
static void _V10_Doptimize__apply_D591_k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.215.725 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.215.725 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k601) (close _V10_Doptimize__apply_D591_lambda168) (bruijn ##.kk.201.703 9 1)) ((bruijn ##.k.1847 4 0) #f)) ((bruijn ##.k.1847 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k601, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda168, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.214.723 0 0)) ((close _V10_Doptimize__apply_D591_k600) (##inline ##vcore.cdr (bruijn ##.expr.214.723 0 0))) ((bruijn ##.k.1847 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k600, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.213.722 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.213.722 0 0))) ((close _V10_Doptimize__apply_D591_k599) (##inline ##vcore.cdr (bruijn ##.expr.213.722 0 0))) ((bruijn ##.k.1847 2 0) #f)) ((bruijn ##.k.1847 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k599, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1848 0 0) ((close _V10_Doptimize__apply_D591_k598) (##inline ##vcore.cdr (bruijn ##.expr.702 7 1))) ((bruijn ##.k.1847 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k598, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 6 1)) ((bruijn ##.x.826 10 0) (close _V10_Doptimize__apply_D591_k597) 'if (##inline ##vcore.car (bruijn ##.expr.702 6 1))) ((bruijn ##.k.1847 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k597, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1837 0 0) (bruijn ##.k.1831 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D591_k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1838 2 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.217.733 5 0)) (##inline ##vcore.cons (bruijn ##.x.1841 1 0) (##inline ##vcore.cons (bruijn ##.x.1843 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
static void _V10_Doptimize__apply_D591_k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.591 14 4) (close _V10_Doptimize__apply_D591_k614) (##inline ##vcore.car (bruijn ##.expr.219.737 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k614, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Doptimize__apply_D591_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.591 13 4) (close _V10_Doptimize__apply_D591_k613) (##inline ##vcore.car (bruijn ##.expr.218.735 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k613, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Doptimize__apply_D591_k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.219.737 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.219.737 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k612) (close _V10_Doptimize__apply_D591_lambda171) (bruijn ##.kk.201.703 10 1)) ((bruijn ##.k.1831 4 0) #f)) ((bruijn ##.k.1831 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k612, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda171, self)})),
      VGetArg(statics, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.218.735 0 0)) ((close _V10_Doptimize__apply_D591_k611) (##inline ##vcore.cdr (bruijn ##.expr.218.735 0 0))) ((bruijn ##.k.1831 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k611, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.217.733 0 0)) ((close _V10_Doptimize__apply_D591_k610) (##inline ##vcore.cdr (bruijn ##.expr.217.733 0 0))) ((bruijn ##.k.1831 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k610, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1832 0 0) ((close _V10_Doptimize__apply_D591_k609) (##inline ##vcore.cdr (bruijn ##.expr.702 8 1))) ((bruijn ##.k.1831 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k609, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 7 1)) ((bruijn ##.x.826 11 0) (close _V10_Doptimize__apply_D591_k608) 'if (##inline ##vcore.car (bruijn ##.expr.702 7 1))) ((bruijn ##.k.1831 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k608, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1815 0 0) (bruijn ##.k.1813 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D591_k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1829 0 0) ((bruijn ##.x.808 37 0) (bruijn ##.k.1828 1 0) (bruijn ##.f.740 6 0)) ((bruijn ##.k.1828 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      statics->vars[0],
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.inlining?.586 16 2) ((bruijn ##.x.809 35 0) (close _V10_Doptimize__apply_D591_k623) (bruijn ##.f.740 5 0)) ((bruijn ##.k.1828 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 16-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k623, self)})),
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 17 4) (bruijn ##.k.1816 3 0) (##inline ##vcore.cons (bruijn ##.x.1819 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##inline (##inline ##vcore.cons (bruijn ##.f.740 7 0) (bruijn ##.x.1823 0 0))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 2,
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        _var0)),
        VNULL)));
}
static void _V10_Doptimize__apply_D591_k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 40 0) (close _V10_Doptimize__apply_D591_k626) (bruijn ##.optimize-atom.592 16 5) (bruijn ##.xs.743 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k626, self)})),
      VGetArg(statics, 16-1, 5),
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.807 41 0) (bruijn ##.k.1816 5 0) (bruijn ##.x.1824 3 0) (bruijn ##.x.1825 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->up->vars[0],
      _var0);
}
static void _V10_Doptimize__apply_D591_k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.807 40 0) (close _V10_Doptimize__apply_D591_k630) (bruijn ##.x.1826 1 0) (bruijn ##.x.1827 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k630, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Doptimize__apply_D591_k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 41 0) (close _V10_Doptimize__apply_D591_k629) (bruijn ##.optimize-atom.592 17 5) (bruijn ##.xs.743 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k629, self)})),
      VGetArg(statics, 17-1, 5),
      statics->up->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.592 16 5) (close _V10_Doptimize__apply_D591_k628) (bruijn ##.k.742 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k628, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D591_k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1817 0 0) ((bruijn ##.optimize-atom.592 15 5) (close _V10_Doptimize__apply_D591_k625) (bruijn ##.k.742 3 0)) ((bruijn ##.optimize-atom.592 15 5) (close _V10_Doptimize__apply_D591_k627) (bruijn ##.f.740 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k625, self)})),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k627, self)})),
      VGetArg(statics, 5-1, 0));
}
}
static void _V10_Doptimize__apply_D591_lambda172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k622) (close _V10_Doptimize__apply_D591_k624))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k622, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k624, self)})));
}
static void _V10_Doptimize__apply_D591_k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__apply_D591_k621) (close _V10_Doptimize__apply_D591_lambda172) (bruijn ##.kk.201.703 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k621, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda172, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__apply_D591_k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k620) (##inline ##vcore.cdr (bruijn ##.expr.221.741 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k620, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__apply_D591_k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.221.741 0 0)) ((close _V10_Doptimize__apply_D591_k619) (##inline ##vcore.car (bruijn ##.expr.221.741 0 0))) ((bruijn ##.k.1813 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k619, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k618) (##inline ##vcore.cdr (bruijn ##.expr.702 9 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k618, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
}
static void _V10_Doptimize__apply_D591_k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.702 8 1)) ((close _V10_Doptimize__apply_D591_k617) (##inline ##vcore.car (bruijn ##.expr.702 8 1))) ((bruijn ##.k.1813 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k617, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D591_lambda173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.806 33 0) (bruijn ##.k.1811 0 0) (##string ##.string.2071) (bruijn ##.expr.702 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2071.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 1));
}
static void _V10_Doptimize__apply_D591_k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1803 7 0) (close _V10_Doptimize__apply_D591_lambda173) (bruijn ##.kk.201.703 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda173, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Doptimize__apply_D591_k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k616) (close _V10_Doptimize__apply_D591_k631))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k616, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k631, self)})));
}
static void _V10_Doptimize__apply_D591_k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k607) (close _V10_Doptimize__apply_D591_k615))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k607, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k615, self)})));
}
static void _V10_Doptimize__apply_D591_k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k596) (close _V10_Doptimize__apply_D591_k606))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k596, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k606, self)})));
}
static void _V10_Doptimize__apply_D591_k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k585) (close _V10_Doptimize__apply_D591_k595))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k585, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k595, self)})));
}
static void _V10_Doptimize__apply_D591_k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k581) (close _V10_Doptimize__apply_D591_k584))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k581, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k584, self)})));
}
static void _V10_Doptimize__apply_D591_k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D591_k576) (close _V10_Doptimize__apply_D591_k580))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k576, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k580, self)})));
}
static void _V10_Doptimize__apply_D591_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__apply_D591_k571) (close _V10_Doptimize__apply_D591_k575))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D591_k571, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_k575, self)})));
}
static void _V10_Doptimize__apply_D591_lambda160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D591_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1802 0 0) (close _V10_Doptimize__apply_D591_lambda161))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda161, self)})));
}
static void _V10_Doptimize__atom_D592_k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1974 0 0) (bruijn ##.k.1972 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D592_lambda176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1975 0 0) (bruijn ##.expr.744 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Doptimize__atom_D592_k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1973 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k634) (close _V10_Doptimize__atom_D592_lambda176) (bruijn ##.kk.228.745 2 1)) ((bruijn ##.k.1972 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k634, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda176, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 2 1)) ((bruijn ##.x.826 6 0) (close _V10_Doptimize__atom_D592_k633) 'quote (##inline ##vcore.car (bruijn ##.expr.744 2 1))) ((bruijn ##.k.1972 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k633, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1968 0 0) (bruijn ##.k.1966 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D592_lambda177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1969 0 0) (bruijn ##.expr.744 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Doptimize__atom_D592_k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1967 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k638) (close _V10_Doptimize__atom_D592_lambda177) (bruijn ##.kk.228.745 3 1)) ((bruijn ##.k.1966 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k638, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda177, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 3 1)) ((bruijn ##.x.826 7 0) (close _V10_Doptimize__atom_D592_k637) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.744 3 1))) ((bruijn ##.k.1966 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k637, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k642(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1962 0 0) (bruijn ##.k.1960 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D592_lambda178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1963 0 0) (bruijn ##.expr.744 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__atom_D592_k641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1961 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k642) (close _V10_Doptimize__atom_D592_lambda178) (bruijn ##.kk.228.745 4 1)) ((bruijn ##.k.1960 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k642, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda178, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k640(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 4 1)) ((bruijn ##.x.826 8 0) (close _V10_Doptimize__atom_D592_k641) '##inline (##inline ##vcore.car (bruijn ##.expr.744 4 1))) ((bruijn ##.k.1960 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k641, self)})),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k646(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1956 0 0) (bruijn ##.k.1954 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D592_lambda179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.587 8 0) (bruijn ##.k.1957 0 0) (bruijn ##.expr.744 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Doptimize__atom_D592_k645(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1955 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k646) (close _V10_Doptimize__atom_D592_lambda179) (bruijn ##.kk.228.745 5 1)) ((bruijn ##.k.1954 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k646, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda179, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k644(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 5 1)) ((bruijn ##.x.826 9 0) (close _V10_Doptimize__atom_D592_k645) 'lambda (##inline ##vcore.car (bruijn ##.expr.744 5 1))) ((bruijn ##.k.1954 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k645, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k650(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1950 0 0) (bruijn ##.k.1948 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D592_lambda180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.587 9 0) (bruijn ##.k.1951 0 0) (bruijn ##.expr.744 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__atom_D592_k649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1949 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k650) (close _V10_Doptimize__atom_D592_lambda180) (bruijn ##.kk.228.745 6 1)) ((bruijn ##.k.1948 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k650, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda180, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 6 1)) ((bruijn ##.x.826 10 0) (close _V10_Doptimize__atom_D592_k649) 'continuation (##inline ##vcore.car (bruijn ##.expr.744 6 1))) ((bruijn ##.k.1948 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k649, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D755_k656(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.239.754 5 1) (bruijn ##.k.1934 2 0) (bruijn ##.expr.241.756 3 1) (bruijn ##.x.1935 1 0) (bruijn ##.x.1936 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D755_k655(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 40 0) (close _V10_Dloop_D755_k656) (bruijn ##.body.238.758 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k656, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D755_k654(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.241.756 1 1))) ((bruijn ##.x.804 39 0) (close _V10_Dloop_D755_k655) (bruijn ##.args.237.757 1 2)) ((bruijn ##.k.1934 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k655, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D755_k660(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243.762 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.243.762 0 0))) ((bruijn ##.kk.240.759 3 1) (bruijn ##.k.1926 1 0) (##inline ##vcore.cdr (bruijn ##.expr.241.756 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.242.760 2 0)) (bruijn ##.args.237.757 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.243.762 0 0)) (bruijn ##.body.238.758 6 3))) ((bruijn ##.k.1926 1 0) #f)) ((bruijn ##.k.1926 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[0]),
        VGetArg(statics, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(statics, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D755_k659(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.242.760 1 0)) ((close _V10_Dloop_D755_k660) (##inline ##vcore.cdr (bruijn ##.expr.242.760 1 0))) ((bruijn ##.k.1926 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D755_k660, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D755_k663(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.239.754 9 1) (bruijn ##.k.1921 4 0) (bruijn ##.expr.241.756 7 1) (bruijn ##.x.1923 1 0) (bruijn ##.x.1924 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D755_k662(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 44 0) (close _V10_Dloop_D755_k663) (bruijn ##.body.238.758 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k663, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D755_k661(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.804 43 0) (close _V10_Dloop_D755_k662) (bruijn ##.args.237.757 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k662, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D755_k658(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D755_k659) (close _V10_Dloop_D755_k661))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D755_k659, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k661, self)})));
}
static void _V10_Dloop_D755_lambda185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_lambda185, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D755_k658) (##inline ##vcore.car (bruijn ##.expr.241.756 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D755_k658, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D755_lambda184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_lambda184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1920 0 0) (close _V10_Dloop_D755_lambda185))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_lambda185, self)})));
}
static void _V10_Dloop_D755_k657(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1918 1 0) (close _V10_Dloop_D755_lambda184) (bruijn ##.loop.755 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_lambda184, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D755_lambda183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D755_lambda183, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((close _V10_Dloop_D755_k654) (close _V10_Dloop_D755_k657))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D755_k654, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_k657, self)})));
}
static void _V10_Doptimize__atom_D592_lambda182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D755_lambda183)) ((bruijn ##.loop.755 0 0) (bruijn ##.k.1917 1 0) (##inline ##vcore.cdr (bruijn ##.expr.744 11 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D755_lambda183, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__atom_D592_lambda181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1916 0 0) (close _V10_Doptimize__atom_D592_lambda182))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda182, self)})));
}
static void _V10_Doptimize__atom_D592_k664(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1940 0 0) (bruijn ##.k.1938 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__atom_D592_k665(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1941 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.1942 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Doptimize__atom_D592_k666(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1943 1 0) (##inline ##vcore.cons (bruijn ##.args.767 1 1) (##inline ##vcore.cons (bruijn ##.x.1945 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Doptimize__atom_D592_lambda188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda188, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.optimize-apply.591 12 4) (close _V10_Doptimize__atom_D592_k666) (bruijn ##.body.768 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k666, self)})),
      _var2);
}
static void _V10_Doptimize__atom_D592_lambda187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.805 35 0) (close _V10_Doptimize__atom_D592_k665) (close _V10_Doptimize__atom_D592_lambda188) (bruijn ##.args.765 1 2) (bruijn ##.body.766 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k665, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda188, self)})),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Doptimize__atom_D592_lambda186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda186, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.764 0 1)) (##vcore.call-with-values (close _V10_Doptimize__atom_D592_k664) (close _V10_Doptimize__atom_D592_lambda187) (bruijn ##.kk.228.745 8 1)) ((bruijn ##.k.1938 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k664, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda187, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k653(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1915 0 0) (##vcore.call-with-values (bruijn ##.k.1914 1 0) (close _V10_Doptimize__atom_D592_lambda181) (close _V10_Doptimize__atom_D592_lambda186)) ((bruijn ##.k.1914 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda181, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda186, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_k652(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.744 7 1)) ((bruijn ##.x.826 11 0) (close _V10_Doptimize__atom_D592_k653) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.744 7 1))) ((bruijn ##.k.1914 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k653, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D592_lambda189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1912 0 0) (bruijn ##.expr.744 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__atom_D592_k667(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1905 6 0) (close _V10_Doptimize__atom_D592_lambda189) (bruijn ##.kk.228.745 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda189, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__atom_D592_k651(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D592_k652) (close _V10_Doptimize__atom_D592_k667))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k652, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k667, self)})));
}
static void _V10_Doptimize__atom_D592_k647(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D592_k648) (close _V10_Doptimize__atom_D592_k651))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k648, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k651, self)})));
}
static void _V10_Doptimize__atom_D592_k643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D592_k644) (close _V10_Doptimize__atom_D592_k647))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k644, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k647, self)})));
}
static void _V10_Doptimize__atom_D592_k639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D592_k640) (close _V10_Doptimize__atom_D592_k643))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k640, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k643, self)})));
}
static void _V10_Doptimize__atom_D592_k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D592_k636) (close _V10_Doptimize__atom_D592_k639))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k636, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k639, self)})));
}
static void _V10_Doptimize__atom_D592_lambda175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda175, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__atom_D592_k632) (close _V10_Doptimize__atom_D592_k635))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D592_k632, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_k635, self)})));
}
static void _V10_Doptimize__atom_D592_lambda174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D592_lambda174, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1904 0 0) (close _V10_Doptimize__atom_D592_lambda175))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda175, self)})));
}
static void _V10_Doptimize__impl_D297_k672(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2017 0 0) (bruijn ##.k.2015 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2018 0 0) (bruijn ##.expr.585 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Doptimize__impl_D297_k671(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2016 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k672) (close _V10_Doptimize__impl_D297_lambda191) (bruijn ##.kk.133.771 2 1)) ((bruijn ##.k.2015 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k672, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda191, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k670(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 5 1)) ((bruijn ##.x.826 7 0) (close _V10_Doptimize__impl_D297_k671) 'quote (##inline ##vcore.car (bruijn ##.expr.585 5 1))) ((bruijn ##.k.2015 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k671, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k676(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2011 0 0) (bruijn ##.k.2009 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2012 0 0) (bruijn ##.expr.585 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__impl_D297_k675(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2010 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k676) (close _V10_Doptimize__impl_D297_lambda192) (bruijn ##.kk.133.771 3 1)) ((bruijn ##.k.2009 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k676, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda192, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k674(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 6 1)) ((bruijn ##.x.826 8 0) (close _V10_Doptimize__impl_D297_k675) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.585 6 1))) ((bruijn ##.k.2009 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k675, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k680(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2005 0 0) (bruijn ##.k.2003 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2006 0 0) (bruijn ##.expr.585 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Doptimize__impl_D297_k679(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2004 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k680) (close _V10_Doptimize__impl_D297_lambda193) (bruijn ##.kk.133.771 4 1)) ((bruijn ##.k.2003 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k680, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda193, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k678(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 7 1)) ((bruijn ##.x.826 9 0) (close _V10_Doptimize__impl_D297_k679) '##inline (##inline ##vcore.car (bruijn ##.expr.585 7 1))) ((bruijn ##.k.2003 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k679, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k684(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1999 0 0) (bruijn ##.k.1997 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.587 9 0) (bruijn ##.k.2000 0 0) (bruijn ##.expr.585 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VGetArg(statics, 10-1, 1));
}
static void _V10_Doptimize__impl_D297_k683(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1998 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k684) (close _V10_Doptimize__impl_D297_lambda194) (bruijn ##.kk.133.771 5 1)) ((bruijn ##.k.1997 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k684, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda194, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k682(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 8 1)) ((bruijn ##.x.826 10 0) (close _V10_Doptimize__impl_D297_k683) 'lambda (##inline ##vcore.car (bruijn ##.expr.585 8 1))) ((bruijn ##.k.1997 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k683, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k688(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1993 0 0) (bruijn ##.k.1991 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.587 10 0) (bruijn ##.k.1994 0 0) (bruijn ##.expr.585 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D297_k687(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1992 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k688) (close _V10_Doptimize__impl_D297_lambda195) (bruijn ##.kk.133.771 6 1)) ((bruijn ##.k.1991 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k688, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda195, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k686(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 9 1)) ((bruijn ##.x.826 11 0) (close _V10_Doptimize__impl_D297_k687) 'continuation (##inline ##vcore.car (bruijn ##.expr.585 9 1))) ((bruijn ##.k.1991 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k687, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_k691(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1988 0 0) (bruijn ##.k.1987 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__impl_D297_lambda196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.591 10 4) (bruijn ##.k.1989 0 0) (bruijn ##.expr.585 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D297_k690(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.585 10 1)) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k691) (close _V10_Doptimize__impl_D297_lambda196) (bruijn ##.kk.133.771 6 1)) ((bruijn ##.k.1987 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k691, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda196, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D297_lambda197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1985 0 0) (bruijn ##.expr.585 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D297_k692(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1978 6 0) (close _V10_Doptimize__impl_D297_lambda197) (bruijn ##.kk.133.771 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda197, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__impl_D297_k689(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D297_k690) (close _V10_Doptimize__impl_D297_k692))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k690, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k692, self)})));
}
static void _V10_Doptimize__impl_D297_k685(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D297_k686) (close _V10_Doptimize__impl_D297_k689))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k686, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k689, self)})));
}
static void _V10_Doptimize__impl_D297_k681(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D297_k682) (close _V10_Doptimize__impl_D297_k685))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k682, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k685, self)})));
}
static void _V10_Doptimize__impl_D297_k677(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D297_k678) (close _V10_Doptimize__impl_D297_k681))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k678, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k681, self)})));
}
static void _V10_Doptimize__impl_D297_k673(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D297_k674) (close _V10_Doptimize__impl_D297_k677))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k674, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k677, self)})));
}
static void _V10_Doptimize__impl_D297_lambda190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda190, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__impl_D297_k670) (close _V10_Doptimize__impl_D297_k673))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D297_k670, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k673, self)})));
}
static void _V10_Doptimize__impl_D297_k669(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1518 3 0) (close _V10_Doptimize__impl_D297_lambda190))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda190, self)})));
}
static void _V10_Doptimize__impl_D297_k668(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__impl_D297_k669) (bruijn ##.dummy.132.595 1 8) (bruijn ##.x.2020 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k669, self)})),
      VEncodeInt(1l), VEncodeInt(8l),
      _var0
    );
}
static void _V10_Doptimize__impl_D297_lambda198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.296 3 10) (bruijn ##.k.2021 0 0) (bruijn ##.expr.585 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Doptimize__impl_D297_k693(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.2022 1 0) (bruijn ##.impure-table.594 2 7) (bruijn ##.impure-table.131.770 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(7l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__impl_D297_lambda199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda199, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__impl_D297_k693) (bruijn ##.ref-table.593 1 6) (bruijn ##.ref-table.130.769 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k693, self)})),
      VEncodeInt(1l), VEncodeInt(6l),
      _var1
    );
}
static void _V10_Doptimize__impl_D297_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D297_lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 9 ((close _V10_Doptimize__lambda_D587_lambda115) (close _V10_Dinline__let_D588_lambda119) (close _V10_Doptimize__let_D589_lambda125) (close _V10_Doptimize__letrec_D590_lambda151) (close _V10_Doptimize__apply_D591_lambda160) (close _V10_Doptimize__atom_D592_lambda174) #f #f #f) (##vcore.call-with-values (close _V10_Doptimize__impl_D297_k668) (close _V10_Doptimize__impl_D297_lambda198) (close _V10_Doptimize__impl_D297_lambda199)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D587_lambda115, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D588_lambda119, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D589_lambda125, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D590_lambda151, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D591_lambda160, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D592_lambda174, self)}));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = VEncodeBool(false);
    self->vars[8] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_k668, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda198, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda199, self)})));
    }
}
static void _V10_Doptimize_D298_k696(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2045 0 0) (bruijn ##.k.2043 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize_D298_lambda202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_lambda202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2046 0 0) (bruijn ##.expr.779 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Doptimize_D298_k695(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2044 0 0) (##vcore.call-with-values (close _V10_Doptimize_D298_k696) (close _V10_Doptimize_D298_lambda202) (bruijn ##.kk.244.782 2 1)) ((bruijn ##.k.2043 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k696, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_lambda202, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_k694(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.779 2 1)) ((bruijn ##.x.826 4 0) (close _V10_Doptimize_D298_k695) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.779 2 1))) ((bruijn ##.k.2043 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k695, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_k702(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2035 0 0) (bruijn ##.k.2030 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Doptimize_D298_k703(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2036 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.248.786 3 0)) (##inline ##vcore.cons (bruijn ##.x.2039 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize_D298_lambda203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_lambda203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-impl.297 8 11) (close _V10_Doptimize_D298_k703) (##inline ##vcore.car (bruijn ##.expr.249.788 1 0)) (bruijn ##.inlining?.780 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k703, self)})),
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Doptimize_D298_k701(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.249.788 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.249.788 0 0))) (##vcore.call-with-values (close _V10_Doptimize_D298_k702) (close _V10_Doptimize_D298_lambda203) (bruijn ##.kk.244.782 5 1)) ((bruijn ##.k.2030 3 0) #f)) ((bruijn ##.k.2030 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k702, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_lambda203, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_k700(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.248.786 0 0)) ((close _V10_Doptimize_D298_k701) (##inline ##vcore.cdr (bruijn ##.expr.248.786 0 0))) ((bruijn ##.k.2030 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D298_k701, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_k699(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2031 0 0) ((close _V10_Doptimize_D298_k700) (##inline ##vcore.cdr (bruijn ##.expr.779 4 1))) ((bruijn ##.k.2030 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D298_k700, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_k698(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.779 3 1)) ((bruijn ##.x.826 5 0) (close _V10_Doptimize_D298_k699) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.779 3 1))) ((bruijn ##.k.2030 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k699, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D298_lambda204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_lambda204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-impl.297 5 11) (bruijn ##.k.2028 0 0) (bruijn ##.expr.779 4 1) (bruijn ##.inlining?.780 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      _var0,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
}
static void _V10_Doptimize_D298_k704(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2025 2 0) (close _V10_Doptimize_D298_lambda204) (bruijn ##.kk.244.782 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_lambda204, self)})),
      statics->up->vars[1]);
}
static void _V10_Doptimize_D298_k697(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize_D298_k698) (close _V10_Doptimize_D298_k704))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D298_k698, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k704, self)})));
}
static void _V10_Doptimize_D298_lambda201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_lambda201, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize_D298_k694) (close _V10_Doptimize_D298_k697))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D298_k694, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_k697, self)})));
}
static void _V10_Doptimize_D298_lambda200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D298_lambda200, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.2024 0 0) (close _V10_Doptimize_D298_lambda201))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_lambda201, self)})));
}
static void _V0vanity_V0compiler_V0cps_V20_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 13 ((close _V10_Dapplication_Q_D286_lambda2) (close _V10_Dcombination_Q_D287_lambda3) (close _V10_Dto__cps_D288_lambda4) (close _V10_Dsubstitute_D289_lambda47) (close _V10_Dspecial__apply_Q_D290_lambda72) (close _V10_Dtaillength_D291_lambda73) (close _V10_Dadd__ref_B_D292_lambda75) (close _V10_Dsub__ref_B_D293_lambda77) (close _V10_Dadd__refs_B_D294_lambda79) (close _V10_Dsub__refs_B_D295_lambda81) (close _V10_Dcount__refs_D296_lambda83) (close _V10_Doptimize__impl_D297_lambda114) (close _V10_Doptimize_D298_lambda200)) ((bruijn ##.k.791 44 0) (##inline ##vcore.cons (##inline ##vcore.cons 'to-cps (bruijn ##.to-cps.288 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'optimize (bruijn ##.optimize.298 0 12)) '()))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    VEnv * self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D286_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D287_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D288_lambda4, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D289_lambda47, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dspecial__apply_Q_D290_lambda72, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtaillength_D291_lambda73, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D292_lambda75, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D293_lambda77, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D294_lambda79, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D295_lambda81, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D296_lambda83, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D297_lambda114, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D298_lambda200, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__cps,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0optimize,
        self->vars[12]),
        VNULL)));
    }
}
static void _V0vanity_V0compiler_V0cps_V20_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 34 0) (close _V0vanity_V0compiler_V0cps_V20_k43) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k43, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 33 0) (close _V0vanity_V0compiler_V0cps_V20_k42) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, self)})),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 32 0) (close _V0vanity_V0compiler_V0cps_V20_k41) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, self)})),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0cps_V20_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 31 0) (close _V0vanity_V0compiler_V0cps_V20_k40) 'hash-table-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, self)})),
      _V0hash__table__set_B);
}
static void _V0vanity_V0compiler_V0cps_V20_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 30 0) (close _V0vanity_V0compiler_V0cps_V20_k39) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, self)})),
      _V0__);
}
static void _V0vanity_V0compiler_V0cps_V20_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 29 0) (close _V0vanity_V0compiler_V0cps_V20_k38) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, self)})),
      _V0car);
}
static void _V0vanity_V0compiler_V0cps_V20_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 28 0) (close _V0vanity_V0compiler_V0cps_V20_k37) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, self)})),
      _V0memv);
}
static void _V0vanity_V0compiler_V0cps_V20_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 27 0) (close _V0vanity_V0compiler_V0cps_V20_k36) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, self)})),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 26 0) (close _V0vanity_V0compiler_V0cps_V20_k35) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, self)})),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 25 0) (close _V0vanity_V0compiler_V0cps_V20_k34) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, self)})),
      _V0eqv_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 24 0) (close _V0vanity_V0compiler_V0cps_V20_k33) 'hash-table-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, self)})),
      _V0hash__table__ref);
}
static void _V0vanity_V0compiler_V0cps_V20_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 23 0) (close _V0vanity_V0compiler_V0cps_V20_k32) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, self)})),
      _V0_E);
}
static void _V0vanity_V0compiler_V0cps_V20_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 22 0) (close _V0vanity_V0compiler_V0cps_V20_k31) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, self)})),
      _V0_L_E);
}
static void _V0vanity_V0compiler_V0cps_V20_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 21 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, self)})),
      _V0length);
}
static void _V0vanity_V0compiler_V0cps_V20_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 20 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, self)})),
      _V0not);
}
static void _V0vanity_V0compiler_V0cps_V20_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 19 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0cps_V20_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 18 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, self)})),
      _V0error);
}
static void _V0vanity_V0compiler_V0cps_V20_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 17 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, self)})),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 16 0) (close _V0vanity_V0compiler_V0cps_V20_k25) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, self)})),
      _V0lookup__inline__name);
}
static void _V0vanity_V0compiler_V0cps_V20_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 15 0) (close _V0vanity_V0compiler_V0cps_V20_k24) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, self)})),
      _V0cons);
}
static void _V0vanity_V0compiler_V0cps_V20_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 14 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0cps_V20_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 13 0) (close _V0vanity_V0compiler_V0cps_V20_k22) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0cps_V20_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 12 0) (close _V0vanity_V0compiler_V0cps_V20_k21) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, self)})),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0cps_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 11 0) (close _V0vanity_V0compiler_V0cps_V20_k20) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, self)})),
      _V0values);
}
static void _V0vanity_V0compiler_V0cps_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 10 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'make-hash-table)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, self)})),
      _V0make__hash__table);
}
static void _V0vanity_V0compiler_V0cps_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 9 0) (close _V0vanity_V0compiler_V0cps_V20_k18) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, self)})),
      _V0_P);
}
static void _V0vanity_V0compiler_V0cps_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 8 0) (close _V0vanity_V0compiler_V0cps_V20_k17) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, self)})),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0cps_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 7 0) (close _V0vanity_V0compiler_V0cps_V20_k16) 'hash-table->alist)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, self)})),
      _V0hash__table___Galist);
}
static void _V0vanity_V0compiler_V0cps_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 6 0) (close _V0vanity_V0compiler_V0cps_V20_k15) '*)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, self)})),
      _V0_S);
}
static void _V0vanity_V0compiler_V0cps_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 5 0) (close _V0vanity_V0compiler_V0cps_V20_k14) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, self)})),
      _V0_G);
}
static void _V0vanity_V0compiler_V0cps_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 4 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'mangle-library)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, self)})),
      _V0mangle__library);
}
static void _V0vanity_V0compiler_V0cps_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 3 0) (close _V0vanity_V0compiler_V0cps_V20_k12) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, self)})),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0cps_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 2 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0cps_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 1 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, self)})),
      _V0eq_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.250 0 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, self)})),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0cps_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k8) (##string ##.string.2072) (bruijn ##.x.2051 6 0) (bruijn ##.x.2052 5 0) (bruijn ##.x.2053 4 0) (bruijn ##.x.2054 3 0) (bruijn ##.x.2055 2 0) (bruijn ##.x.2056 1 0) (bruijn ##.x.2057 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, self)})),
      VEncodePointer(&_V10_Dstring_D2072.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0cps_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k7) (##string ##.string.2073))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, self)})),
      VEncodePointer(&_V10_Dstring_D2073.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##.string.2074))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, self)})),
      VEncodePointer(&_V10_Dstring_D2074.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##.string.2075))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D2075.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##.string.2076))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D2076.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##.string.2077))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D2077.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##.string.2078))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D2078.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##.string.2079))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D2079.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
