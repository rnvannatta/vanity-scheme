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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2621 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2620 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2619 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2618 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2617 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2616 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2615 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2614 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0apply;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0apply = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "apply" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0call__with__values;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0call__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "call-with-values" };
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
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2613 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2612 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2611 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "count-refs: malformed application" };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D2607 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "malformed set" };
static struct { VBlob sym; char bytes[32]; } _V10_Dstring_D2606 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 32 }, "not a symbol in set argument\?\?\?" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D2605 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "internal compiler error: negative variable refcount" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2604 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2603 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "next" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2602 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2601 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2600 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2599 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2598 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
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
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0apply = VEncodePointer(VLookupConstant("_V0apply", &_VW_V0apply), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VLookupConstant("_V0hash__table___Galist", &_VW_V0hash__table___Galist), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0call__with__values = VEncodePointer(VLookupConstant("_V0call__with__values", &_VW_V0call__with__values), VPOINTER_OTHER);
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
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0optimize = VEncodePointer(VLookupConstant("_V0optimize", &_VW_V0optimize), VPOINTER_OTHER);
  _V0to__cps = VEncodePointer(VLookupConstant("_V0to__cps", &_VW_V0to__cps), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
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
static void _V10_Dapplication_Q_D384_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D384_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dapplication_Q_D384_k49, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.370 5 24) (bruijn ##.k.1114 3 0) (bruijn ##.x.1116 0 0))
    V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dapplication_Q_D384_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D384_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dapplication_Q_D384_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.378 4 32) (close _V10_Dapplication_Q_D384_k49) (bruijn ##.x.1117 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline '())))))))
    V_CALL(upenv->up->up->up->vars[32], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D384_k49, env)}),
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
}
static void _V10_Dapplication_Q_D384_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D384_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dapplication_Q_D384_k47, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1115 0 0) ((bruijn ##.car.379 3 33) (close _V10_Dapplication_Q_D384_k48) (bruijn ##.x.404 1 1)) ((bruijn ##.k.1114 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D384_k48, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dapplication_Q_D384_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D384_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dapplication_Q_D384_lambda3, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.377 2 31) (close _V10_Dapplication_Q_D384_k47) (bruijn ##.x.404 0 1))
    V_CALL(upenv->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D384_k47, env)}),
      _var1);
 }
}
static void _V10_Dcombination_Q_D385_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D385_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcombination_Q_D385_k52, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.not.370 5 24) (bruijn ##.k.1124 3 0) (bruijn ##.x.1126 0 0))
    V_CALL(VGetArg(upenv, 5-1, 24), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dcombination_Q_D385_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D385_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcombination_Q_D385_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.378 4 32) (close _V10_Dcombination_Q_D385_k52) (bruijn ##.x.1127 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '())))))))))))
    V_CALL(upenv->up->up->up->vars[32], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D385_k52, env)}),
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
}
static void _V10_Dcombination_Q_D385_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D385_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcombination_Q_D385_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1125 0 0) ((bruijn ##.car.379 3 33) (close _V10_Dcombination_Q_D385_k51) (bruijn ##.x.405 1 1)) ((bruijn ##.k.1124 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D385_k51, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcombination_Q_D385_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D385_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcombination_Q_D385_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.377 2 31) (close _V10_Dcombination_Q_D385_k50) (bruijn ##.x.405 0 1))
    V_CALL(upenv->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D385_k50, env)}),
      _var1);
 }
}
static void _V10_Diter__lambda_D414_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D414_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D414_k54, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1140 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.417 1 0) (bruijn ##.args.415 2 1)) (##inline ##vcore.cons (bruijn ##.x.1143 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        upenv->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Diter__lambda_D414_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D414_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D414_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 4 4) (close _V10_Diter__lambda_D414_k54) (bruijn ##.body.416 1 2) (bruijn ##.k.417 0 0))
    V_CALL(upenv->up->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D414_k54, env)}),
      upenv->vars[2],
      _var0);
 }
}
static void _V10_Diter__lambda_D414_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D414_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__lambda_D414_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.gensym.346 6 0) (close _V10_Diter__lambda_D414_k53) (##string ##.string.2598))
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D414_k53, env)}),
      VEncodePointer(&_V10_Dstring_D2598.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter__atom_D407_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k60, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.6.418 8 1) (bruijn ##.k.1195 5 0) (bruijn ##.x.1200 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Diter__atom_D407_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 13 19) (close _V10_Diter__atom_D407_k60) 'lambda (bruijn ##.x.1201 0 0))
    V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k60, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V10_Diter__atom_D407_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.423 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.10.423 0 0))) ((bruijn ##.iter-lambda.414 7 0) (close _V10_Diter__atom_D407_k59) (##inline ##vcore.car (bruijn ##.expr.9.421 1 0)) (##inline ##vcore.car (bruijn ##.expr.10.423 0 0))) ((bruijn ##.k.1195 3 0) #f)) ((bruijn ##.k.1195 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k59, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Diter__atom_D407_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.421 0 0)) ((close _V10_Diter__atom_D407_k58) (##inline ##vcore.cdr (bruijn ##.expr.9.421 0 0))) ((bruijn ##.k.1195 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter__atom_D407_k58, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1196 0 0) ((close _V10_Diter__atom_D407_k57) (##inline ##vcore.cdr (bruijn ##.expr.8.420 2 0))) ((bruijn ##.k.1195 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D407_k57, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.420 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Diter__atom_D407_k56) 'lambda (##inline ##vcore.car (bruijn ##.expr.8.420 1 0))) ((bruijn ##.k.1195 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k56, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D428_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k66, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.15.427 5 1) (bruijn ##.k.1185 2 0) (bruijn ##.expr.17.429 3 1) (bruijn ##.x.1186 1 0) (bruijn ##.x.1187 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D428_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 18 15) (close _V10_Dloop_D428_k66) (bruijn ##.body.14.431 2 3))
    V_CALL(VGetArg(upenv, 18-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k66, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D428_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.17.429 1 1))) ((bruijn ##.reverse.361 17 15) (close _V10_Dloop_D428_k65) (bruijn ##.args.13.430 1 2)) ((bruijn ##.k.1185 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k65, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D428_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k70, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.19.435 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.19.435 0 0))) ((bruijn ##.kk.16.432 3 1) (bruijn ##.k.1177 1 0) (##inline ##vcore.cdr (bruijn ##.expr.17.429 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.18.433 2 0)) (bruijn ##.args.13.430 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.19.435 0 0)) (bruijn ##.body.14.431 6 3))) ((bruijn ##.k.1177 1 0) #f)) ((bruijn ##.k.1177 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D428_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.18.433 1 0)) ((close _V10_Dloop_D428_k70) (##inline ##vcore.cdr (bruijn ##.expr.18.433 1 0))) ((bruijn ##.k.1177 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D428_k70, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D428_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k73, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.15.427 9 1) (bruijn ##.k.1172 4 0) (bruijn ##.expr.17.429 7 1) (bruijn ##.x.1174 1 0) (bruijn ##.x.1175 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D428_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 22 15) (close _V10_Dloop_D428_k73) (bruijn ##.body.14.431 6 3))
    V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k73, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D428_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 21 15) (close _V10_Dloop_D428_k72) (bruijn ##.args.13.430 5 2))
    V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k72, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D428_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D428_k69) (close _V10_Dloop_D428_k71))
    V_CALL_FUNC(_V10_Dloop_D428_k69, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k71, env)}));
 }
}
static void _V10_Dloop_D428_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D428_k68) (##inline ##vcore.car (bruijn ##.expr.17.429 3 1)))
    V_CALL_FUNC(_V10_Dloop_D428_k68, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D428_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 18 36) (bruijn ##.k.1171 0 0) (close _V10_Dloop_D428_lambda16))
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_lambda16, env)}));
 }
}
static void _V10_Dloop_D428_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_k67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 17 16) (bruijn ##.k.1169 1 0) (close _V10_Dloop_D428_lambda15) (bruijn ##.loop.428 2 0))
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_lambda15, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D428_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D428_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D428_lambda14, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D428_k64) (close _V10_Dloop_D428_k67))
    V_CALL_FUNC(_V10_Dloop_D428_k64, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_k67, env)}));
 }
}
static void _V10_Diter__atom_D407_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D428_lambda14)) ((bruijn ##.loop.428 0 0) (bruijn ##.k.1168 1 0) (##inline ##vcore.cdr (bruijn ##.expr.11.425 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D428_lambda14, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Diter__atom_D407_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 13 36) (bruijn ##.k.1167 0 0) (close _V10_Diter__atom_D407_lambda13))
    V_CALL(VGetArg(upenv, 13-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_lambda13, env)}));
 }
}
static void _V10_Diter__atom_D407_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k75, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.6.418 9 1) (bruijn ##.k.1189 2 0) (bruijn ##.x.1191 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter__atom_D407_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k74, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 14 19) (close _V10_Diter__atom_D407_k75) 'case-lambda (bruijn ##.x.1192 0 0))
    V_CALL(VGetArg(upenv, 14-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k75, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V10_Diter__atom_D407_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_lambda17, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda17, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.437 0 1)) ((bruijn ##.map.363 13 17) (close _V10_Diter__atom_D407_k74) (bruijn ##.iter-lambda.414 8 0) (bruijn ##.args.438 0 2) (bruijn ##.body.439 0 3)) ((bruijn ##.k.1189 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k74, env)}),
      VGetArg(upenv, 8-1, 0),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1166 0 0) ((bruijn ##.call-with-values.362 12 16) (bruijn ##.k.1165 1 0) (close _V10_Diter__atom_D407_lambda12) (close _V10_Diter__atom_D407_lambda17)) ((bruijn ##.k.1165 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_lambda12, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_lambda17, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.425 1 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Diter__atom_D407_k63) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.11.425 1 0))) ((bruijn ##.k.1165 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k63, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k78, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1162 0 0) ((bruijn ##.kk.6.418 8 1) (bruijn ##.k.1161 1 0) (bruijn ##.x.413 10 1)) ((bruijn ##.k.1161 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.440 1 0)) ((bruijn ##.equal?.383 13 37) (close _V10_Diter__atom_D407_k78) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.20.440 1 0))) ((bruijn ##.k.1161 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k78, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k82, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.442 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.22.442 0 0))) ((bruijn ##.kk.6.418 11 1) (bruijn ##.k.1154 2 0) (bruijn ##.x.413 13 1)) ((bruijn ##.k.1154 2 0) #f)) ((bruijn ##.k.1154 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 13-1, 1));
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
static void _V10_Diter__atom_D407_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1155 0 0) ((close _V10_Diter__atom_D407_k82) (##inline ##vcore.cdr (bruijn ##.expr.21.441 2 0))) ((bruijn ##.k.1154 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter__atom_D407_k82, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.441 1 0)) ((bruijn ##.equal?.383 15 37) (close _V10_Diter__atom_D407_k81) 'quote (##inline ##vcore.car (bruijn ##.expr.21.441 1 0))) ((bruijn ##.k.1154 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k81, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.6.418 11 1) (bruijn ##.k.1151 1 0) (bruijn ##.x.1152 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter__atom_D407_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.input.7.419 9 0)) ((bruijn ##.compiler-error.364 16 18) (close _V10_Diter__atom_D407_k85) (##string ##.string.2599)) ((bruijn ##.k.1151 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(upenv, 9-1, 0)))) {
    V_CALL(VGetArg(upenv, 16-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k85, env)}),
      VEncodePointer(&_V10_Dstring_D2599.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter__atom_D407_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k86, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.6.418 10 1) (bruijn ##.k.1144 10 0) (bruijn ##.x.413 12 1))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Diter__atom_D407_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_k84) (close _V10_Diter__atom_D407_k86))
    V_CALL_FUNC(_V10_Diter__atom_D407_k84, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k86, env)}));
 }
}
static void _V10_Diter__atom_D407_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_k80) (close _V10_Diter__atom_D407_k83))
    V_CALL_FUNC(_V10_Diter__atom_D407_k80, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k83, env)}));
 }
}
static void _V10_Diter__atom_D407_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_lambda19) (bruijn ##.input.7.419 6 0))
    V_CALL_FUNC(_V10_Diter__atom_D407_lambda19, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter__atom_D407_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_k77) (close _V10_Diter__atom_D407_k79))
    V_CALL_FUNC(_V10_Diter__atom_D407_k77, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k79, env)}));
 }
}
static void _V10_Diter__atom_D407_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_lambda18) (bruijn ##.input.7.419 4 0))
    V_CALL_FUNC(_V10_Diter__atom_D407_lambda18, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter__atom_D407_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_k62) (close _V10_Diter__atom_D407_k76))
    V_CALL_FUNC(_V10_Diter__atom_D407_k62, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k76, env)}));
 }
}
static void _V10_Diter__atom_D407_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_lambda11) (bruijn ##.input.7.419 2 0))
    V_CALL_FUNC(_V10_Diter__atom_D407_lambda11, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter__atom_D407_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_k55) (close _V10_Diter__atom_D407_k61))
    V_CALL_FUNC(_V10_Diter__atom_D407_k55, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_k61, env)}));
 }
}
static void _V10_Diter__atom_D407_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D407_lambda10) (bruijn ##.input.7.419 0 0))
    V_CALL_FUNC(_V10_Diter__atom_D407_lambda10, env, runtime,
      _var0);
 }
}
static void _V10_Diter__atom_D407_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__atom_D407_lambda9) (bruijn ##.x.413 2 1))
    V_CALL_FUNC(_V10_Diter__atom_D407_lambda9, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Diter__atom_D407_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D407_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__atom_D407_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter__lambda_D414_lambda7)) ((bruijn ##.call/cc.382 5 36) (bruijn ##.k.1139 1 0) (close _V10_Diter__atom_D407_lambda8)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D414_lambda7, env)});
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_lambda8, env)}));
    }
 }
}
static void _V10_Dloop_D447_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k89, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1205 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.args.443 5 1) (##inline ##vcore.cons (bruijn ##.x.1210 0 0) '()))) (bruijn ##.appl.450 1 0)))
    V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 1),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        upenv->vars[0]));
 }
}
static void _V10_Dloop_D447_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 5 4) (close _V10_Dloop_D447_k89) (bruijn ##.body.444 4 2) (bruijn ##.k.446 4 4))
    V_CALL(VGetArg(upenv, 5-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k89, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[4]);
 }
}
static void _V10_Dloop_D447_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k96, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 11 4) (bruijn ##.k.1205 8 0) (bruijn ##.x.1212 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.451 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.1217 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dloop_D447_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.447 8 0) (close _V10_Dloop_D447_k96) (bruijn ##.x.1218 1 0) (bruijn ##.x.1219 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k96, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D447_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D447_k95) (bruijn ##.vals.449 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k95, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D447_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k93, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D447_k94) (bruijn ##.x.451 1 0) (bruijn ##.appl.448 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k94, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D447_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.379 10 33) (close _V10_Dloop_D447_k93) (bruijn ##.vals.449 4 2))
    V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k93, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D447_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k100, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.447 8 0) (bruijn ##.k.1205 7 0) (bruijn ##.x.1220 1 0) (bruijn ##.x.1221 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D447_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k99, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D447_k100) (bruijn ##.vals.449 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k100, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D447_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D447_k99) (bruijn ##.x.1222 0 0) (bruijn ##.appl.448 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k99, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D447_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.407 7 0) (close _V10_Dloop_D447_k98) (bruijn ##.x.1223 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k98, env)}),
      _var0);
 }
}
static void _V10_Dloop_D447_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1211 0 0) ((bruijn ##.gensym.346 9 0) (close _V10_Dloop_D447_k92) (##string ##.string.2600)) ((bruijn ##.car.379 9 33) (close _V10_Dloop_D447_k97) (bruijn ##.vals.449 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k92, env)}),
      VEncodePointer(&_V10_Dstring_D2600.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k97, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D447_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.384 7 0) (close _V10_Dloop_D447_k91) (bruijn ##.x.1224 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k91, env)}),
      _var0);
 }
}
static void _V10_Dloop_D447_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_k87, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1206 0 0) ((bruijn ##.reverse.361 7 15) (close _V10_Dloop_D447_k88) (bruijn ##.appl.448 1 1)) ((bruijn ##.car.379 7 33) (close _V10_Dloop_D447_k90) (bruijn ##.vals.449 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k88, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k90, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D447_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D447_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D447_lambda21, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.348 6 2) (close _V10_Dloop_D447_k87) (bruijn ##.vals.449 0 2))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_k87, env)}),
      _var2);
 }
}
static void _V10_Diter__let_D408_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__let_D408_lambda20, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__let_D408_lambda20, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D447_lambda21)) ((bruijn ##.loop.447 0 0) (bruijn ##.k.1204 1 0) '() (bruijn ##.vals.445 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D447_lambda21, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D456_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k104, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1226 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1229 1 0) (##inline ##vcore.cons (bruijn ##.x.1231 0 0) '()))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dloop_D456_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 6 4) (close _V10_Dloop_D456_k104) (bruijn ##.body.453 5 2) (bruijn ##.k.455 5 4))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k104, env)}),
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 4));
 }
}
static void _V10_Dloop_D456_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k102, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 8 17) (close _V10_Dloop_D456_k103) (bruijn ##.list.369 8 23) (bruijn ##.args.452 4 1) (bruijn ##.x.1232 0 0))
    V_CALL(VGetArg(upenv, 8-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k103, env)}),
      VGetArg(upenv, 8-1, 23),
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D456_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 11 4) (bruijn ##.k.1226 8 0) (bruijn ##.x.1234 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.459 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.1239 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dloop_D456_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k110, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.456 8 0) (close _V10_Dloop_D456_k111) (bruijn ##.x.1240 1 0) (bruijn ##.x.1241 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k111, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D456_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D456_k110) (bruijn ##.vals.458 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k110, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D456_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D456_k109) (bruijn ##.x.459 1 0) (bruijn ##.done-vals.457 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k109, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D456_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.379 10 33) (close _V10_Dloop_D456_k108) (bruijn ##.vals.458 4 2))
    V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k108, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D456_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k115, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.456 8 0) (bruijn ##.k.1226 7 0) (bruijn ##.x.1242 1 0) (bruijn ##.x.1243 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D456_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D456_k115) (bruijn ##.vals.458 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k115, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D456_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D456_k114) (bruijn ##.x.1244 0 0) (bruijn ##.done-vals.457 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k114, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D456_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.407 7 0) (close _V10_Dloop_D456_k113) (bruijn ##.x.1245 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k113, env)}),
      _var0);
 }
}
static void _V10_Dloop_D456_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1233 0 0) ((bruijn ##.gensym.346 9 0) (close _V10_Dloop_D456_k107) (##string ##.string.2600)) ((bruijn ##.car.379 9 33) (close _V10_Dloop_D456_k112) (bruijn ##.vals.458 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k107, env)}),
      VEncodePointer(&_V10_Dstring_D2600.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k112, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D456_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.384 7 0) (close _V10_Dloop_D456_k106) (bruijn ##.x.1246 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k106, env)}),
      _var0);
 }
}
static void _V10_Dloop_D456_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1227 0 0) ((bruijn ##.reverse.361 7 15) (close _V10_Dloop_D456_k102) (bruijn ##.done-vals.457 1 1)) ((bruijn ##.car.379 7 33) (close _V10_Dloop_D456_k105) (bruijn ##.vals.458 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k102, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k105, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D456_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D456_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D456_lambda23, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.348 6 2) (close _V10_Dloop_D456_k101) (bruijn ##.vals.458 0 2))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_k101, env)}),
      _var2);
 }
}
static void _V10_Diter__letrec_D409_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D409_lambda22, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__letrec_D409_lambda22, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D456_lambda23)) ((bruijn ##.loop.456 0 0) (bruijn ##.k.1225 1 0) '() (bruijn ##.vals.454 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D456_lambda23, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
 }
}
static void _V10_Dloop_D462_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k119, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1248 4 0) (##inline ##vcore.cons (bruijn ##.x.1250 1 0) (##inline ##vcore.cons (bruijn ##.cont.461 6 2) (bruijn ##.x.1252 0 0))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 2),
        _var0)));
 }
}
static void _V10_Dloop_D462_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 9 9) (close _V10_Dloop_D462_k119) (bruijn ##.appl.465 1 0))
    V_CALL(VGetArg(upenv, 9-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k119, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dloop_D462_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.379 8 33) (close _V10_Dloop_D462_k118) (bruijn ##.appl.465 0 0))
    V_CALL(VGetArg(upenv, 8-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k118, env)}),
      _var0);
 }
}
static void _V10_Dloop_D462_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 11 4) (bruijn ##.k.1248 8 0) (bruijn ##.x.1254 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.466 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.1259 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 4), runtime,
      VGetArg(upenv, 8-1, 0),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dloop_D462_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.462 8 0) (close _V10_Dloop_D462_k126) (bruijn ##.x.1260 1 0) (bruijn ##.x.1261 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k126, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D462_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D462_k125) (bruijn ##.args.464 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k125, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D462_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D462_k124) (bruijn ##.x.466 1 0) (bruijn ##.appl.463 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k124, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D462_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.379 10 33) (close _V10_Dloop_D462_k123) (bruijn ##.args.464 4 2))
    V_CALL(VGetArg(upenv, 10-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k123, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D462_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.462 8 0) (bruijn ##.k.1248 7 0) (bruijn ##.x.1262 1 0) (bruijn ##.x.1263 0 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D462_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k129, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 12 9) (close _V10_Dloop_D462_k130) (bruijn ##.args.464 6 2))
    V_CALL(VGetArg(upenv, 12-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k130, env)}),
      VGetArg(upenv, 6-1, 2));
 }
}
static void _V10_Dloop_D462_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 11 19) (close _V10_Dloop_D462_k129) (bruijn ##.x.1264 0 0) (bruijn ##.appl.463 5 1))
    V_CALL(VGetArg(upenv, 11-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k129, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V10_Dloop_D462_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.407 7 0) (close _V10_Dloop_D462_k128) (bruijn ##.x.1265 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k128, env)}),
      _var0);
 }
}
static void _V10_Dloop_D462_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1253 0 0) ((bruijn ##.gensym.346 9 0) (close _V10_Dloop_D462_k122) (##string ##.string.2600)) ((bruijn ##.car.379 9 33) (close _V10_Dloop_D462_k127) (bruijn ##.args.464 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k122, env)}),
      VEncodePointer(&_V10_Dstring_D2600.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 9-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k127, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dloop_D462_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.384 7 0) (close _V10_Dloop_D462_k121) (bruijn ##.x.1266 0 0))
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k121, env)}),
      _var0);
 }
}
static void _V10_Dloop_D462_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1249 0 0) ((bruijn ##.reverse.361 7 15) (close _V10_Dloop_D462_k117) (bruijn ##.appl.463 1 1)) ((bruijn ##.car.379 7 33) (close _V10_Dloop_D462_k120) (bruijn ##.args.464 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k117, env)}),
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k120, env)}),
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D462_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D462_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D462_lambda25, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.348 6 2) (close _V10_Dloop_D462_k116) (bruijn ##.args.464 0 2))
    V_CALL(VGetArg(upenv, 6-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_k116, env)}),
      _var2);
 }
}
static void _V10_Diter__combination_D410_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D410_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter__combination_D410_lambda24, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D462_lambda25)) ((bruijn ##.loop.462 0 0) (bruijn ##.k.1247 1 0) '() (bruijn ##.args.460 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D462_lambda25, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
 }
}
static void _V10_Diter2_D411_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k141, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 15 4) (bruijn ##.k.1416 2 0) (bruijn ##.x.473 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1422 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1421 0 0) '()))))
    V_CALL(VGetArg(upenv, 15-1, 4), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter2_D411_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k140, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 14 4) (close _V10_Diter2_D411_k141) (bruijn ##.y.475 3 0) (bruijn ##.cont.468 13 2))
    V_CALL(VGetArg(upenv, 14-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k141, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 2));
 }
}
static void _V10_Diter2_D411_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k139, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1415 1 0) ((bruijn ##.gensym.346 16 0) (close _V10_Diter2_D411_k140) (##string ##.string.2601)) ((bruijn ##.iter2.411 13 4) (bruijn ##.k.1416 0 0) (bruijn ##.y.475 2 0) (bruijn ##.cont.468 12 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k140, env)}),
      VEncodePointer(&_V10_Dstring_D2601.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      _var0,
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 2));
}
 }
}
static void _V10_Diter2_D411_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k142, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 10 1) (bruijn ##.k.1409 7 0) (bruijn ##.x.1414 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k138, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k139) (close _V10_Diter2_D411_k142))
    V_CALL_FUNC(_V10_Diter2_D411_k139, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k142, env)}));
 }
}
static void _V10_Diter2_D411_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.27.474 1 0))) ((bruijn ##.application?.384 13 0) (close _V10_Diter2_D411_k138) (bruijn ##.x.473 2 0)) ((bruijn ##.k.1409 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k138, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k136, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.474 0 0)) ((close _V10_Diter2_D411_k137) (##inline ##vcore.car (bruijn ##.expr.27.474 0 0))) ((bruijn ##.k.1409 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k137, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k135, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k136) (##inline ##vcore.cdr (bruijn ##.expr.26.472 1 0)))
    V_CALL_FUNC(_V10_Diter2_D411_k136, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter2_D411_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.472 0 0)) ((close _V10_Diter2_D411_k135) (##inline ##vcore.car (bruijn ##.expr.26.472 0 0))) ((bruijn ##.k.1409 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k135, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1410 0 0) ((close _V10_Diter2_D411_k134) (##inline ##vcore.cdr (bruijn ##.expr.25.471 2 0))) ((bruijn ##.k.1409 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k134, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.25.471 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Diter2_D411_k133) 'begin (##inline ##vcore.car (bruijn ##.expr.25.471 1 0))) ((bruijn ##.k.1409 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k133, env)}),
      _V0begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k155, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 19 4) (bruijn ##.k.1377 2 0) (bruijn ##.p.478 8 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.483 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1382 0 0) '()))))
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter2_D411_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k154, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 18 4) (close _V10_Diter2_D411_k155) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.sym.483 0 0) (##inline ##vcore.cons (bruijn ##.x.480 5 0) (##inline ##vcore.cons (bruijn ##.y.482 3 0) '())))) (bruijn ##.cont.468 17 2))
    V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k155, env)}),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Diter2_D411_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1377 4 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.478 10 0) (##inline ##vcore.cons (bruijn ##.x.1391 1 0) (##inline ##vcore.cons (bruijn ##.x.1393 0 0) '())))))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(upenv, 10-1, 0),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Diter2_D411_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k158, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 20 4) (close _V10_Diter2_D411_k159) (bruijn ##.y.482 5 0) (bruijn ##.cont.468 19 2))
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k159, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 19-1, 2));
 }
}
static void _V10_Diter2_D411_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k162, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1377 5 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.484 2 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.478 11 0) (##inline ##vcore.cons (bruijn ##.x.1402 1 0) (##inline ##vcore.cons (bruijn ##.x.1404 0 0) '())))) '()))) (##inline ##vcore.cons (bruijn ##.cont.468 21 2) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))),
        VNULL))),
        VInlineCons2(runtime,
        VGetArg(upenv, 21-1, 2),
        VNULL)));
 }
}
static void _V10_Diter2_D411_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k161, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 21 4) (close _V10_Diter2_D411_k162) (bruijn ##.y.482 6 0) (bruijn ##.k.484 1 0))
    V_CALL(VGetArg(upenv, 21-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k162, env)}),
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0]);
 }
}
static void _V10_Diter2_D411_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k160, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 20 4) (close _V10_Diter2_D411_k161) (bruijn ##.x.480 7 0) (bruijn ##.k.484 0 0))
    V_CALL(VGetArg(upenv, 20-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k161, env)}),
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k157, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1388 0 0) ((bruijn ##.iter2.411 19 4) (close _V10_Diter2_D411_k158) (bruijn ##.x.480 6 0) (bruijn ##.cont.468 18 2)) ((bruijn ##.gensym.346 22 0) (close _V10_Diter2_D411_k160) (##string ##.string.2598)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k158, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k160, env)}),
      VEncodePointer(&_V10_Dstring_D2598.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Diter2_D411_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k163, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1405 0 0) ((bruijn ##.iter2.411 19 4) (bruijn ##.k.1377 2 0) (bruijn ##.y.482 4 0) (bruijn ##.cont.468 18 2)) ((bruijn ##.iter2.411 19 4) (bruijn ##.k.1377 2 0) (bruijn ##.x.480 6 0) (bruijn ##.cont.468 18 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 18-1, 2));
} else {
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
}
 }
}
static void _V10_Diter2_D411_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k156, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1387 0 0) ((bruijn ##.symbol?.367 21 21) (close _V10_Diter2_D411_k157) (bruijn ##.cont.468 17 2)) ((bruijn ##.eq?.347 21 1) (close _V10_Diter2_D411_k163) (bruijn ##.p.478 7 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k157, env)}),
      VGetArg(upenv, 17-1, 2));
} else {
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k163, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k153, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1376 1 0) ((bruijn ##.gensym.346 20 0) (close _V10_Diter2_D411_k154) (##string ##.string.2602)) ((bruijn ##.symbol?.367 20 21) (close _V10_Diter2_D411_k156) (bruijn ##.p.478 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k154, env)}),
      VEncodePointer(&_V10_Dstring_D2602.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k156, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Diter2_D411_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k164, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 14 1) (bruijn ##.k.1369 9 0) (bruijn ##.x.1375 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k153) (close _V10_Diter2_D411_k164))
    V_CALL_FUNC(_V10_Diter2_D411_k153, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k164, env)}));
 }
}
static void _V10_Diter2_D411_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.31.481 1 0))) ((bruijn ##.application?.384 17 0) (close _V10_Diter2_D411_k152) (bruijn ##.p.478 4 0)) ((bruijn ##.k.1369 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k152, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k150, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.481 0 0)) ((close _V10_Diter2_D411_k151) (##inline ##vcore.car (bruijn ##.expr.31.481 0 0))) ((bruijn ##.k.1369 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k151, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k149, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k150) (##inline ##vcore.cdr (bruijn ##.expr.30.479 1 0)))
    V_CALL_FUNC(_V10_Diter2_D411_k150, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter2_D411_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k148, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.479 0 0)) ((close _V10_Diter2_D411_k149) (##inline ##vcore.car (bruijn ##.expr.30.479 0 0))) ((bruijn ##.k.1369 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k149, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k148) (##inline ##vcore.cdr (bruijn ##.expr.29.477 1 0)))
    V_CALL_FUNC(_V10_Diter2_D411_k148, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter2_D411_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k146, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.477 0 0)) ((close _V10_Diter2_D411_k147) (##inline ##vcore.car (bruijn ##.expr.29.477 0 0))) ((bruijn ##.k.1369 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k147, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k145, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1370 0 0) ((close _V10_Diter2_D411_k146) (##inline ##vcore.cdr (bruijn ##.expr.28.476 2 0))) ((bruijn ##.k.1369 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k146, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.476 1 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Diter2_D411_k145) 'if (##inline ##vcore.car (bruijn ##.expr.28.476 1 0))) ((bruijn ##.k.1369 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k145, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k175, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 19 4) (bruijn ##.k.1353 2 0) (bruijn ##.x.487 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.490 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1358 0 0) '()))))
    V_CALL(VGetArg(upenv, 19-1, 4), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter2_D411_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 18 4) (close _V10_Diter2_D411_k175) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.sym.490 0 0) (##inline ##vcore.cons (bruijn ##.y.489 3 0) '()))) (bruijn ##.cont.468 17 2))
    V_CALL(VGetArg(upenv, 18-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k175, env)}),
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 17-1, 2));
 }
}
static void _V10_Diter2_D411_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1352 1 0) ((bruijn ##.gensym.346 20 0) (close _V10_Diter2_D411_k174) (##string ##.string.2602)) ((bruijn ##.iter2.411 17 4) (bruijn ##.k.1353 0 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.487 4 0) (##inline ##vcore.cons (bruijn ##.x.487 4 0) (##inline ##vcore.cons (bruijn ##.y.489 2 0) '())))) (bruijn ##.cont.468 16 2)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k174, env)}),
      VEncodePointer(&_V10_Dstring_D2602.sym, VPOINTER_OTHER));
} else {
    V_CALL(VGetArg(upenv, 17-1, 4), runtime,
      _var0,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VNULL)))),
      VGetArg(upenv, 16-1, 2));
}
 }
}
static void _V10_Diter2_D411_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k176, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 14 1) (bruijn ##.k.1346 7 0) (bruijn ##.x.1351 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k173) (close _V10_Diter2_D411_k176))
    V_CALL_FUNC(_V10_Diter2_D411_k173, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k176, env)}));
 }
}
static void _V10_Diter2_D411_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.34.488 1 0))) ((bruijn ##.application?.384 17 0) (close _V10_Diter2_D411_k172) (bruijn ##.x.487 2 0)) ((bruijn ##.k.1346 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k172, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.488 0 0)) ((close _V10_Diter2_D411_k171) (##inline ##vcore.car (bruijn ##.expr.34.488 0 0))) ((bruijn ##.k.1346 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k171, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k170) (##inline ##vcore.cdr (bruijn ##.expr.33.486 1 0)))
    V_CALL_FUNC(_V10_Diter2_D411_k170, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Diter2_D411_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.486 0 0)) ((close _V10_Diter2_D411_k169) (##inline ##vcore.car (bruijn ##.expr.33.486 0 0))) ((bruijn ##.k.1346 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k169, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1347 0 0) ((close _V10_Diter2_D411_k168) (##inline ##vcore.cdr (bruijn ##.expr.32.485 2 0))) ((bruijn ##.k.1346 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k168, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k166, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.485 1 0)) ((bruijn ##.equal?.383 13 37) (close _V10_Diter2_D411_k167) 'or (##inline ##vcore.car (bruijn ##.expr.32.485 1 0))) ((bruijn ##.k.1346 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k167, env)}),
      _V0or,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k190, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter2.411 24 4) (bruijn ##.k.1333 1 0) (bruijn ##.val.499 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.495 7 0) '()) (##inline ##vcore.cons (bruijn ##.x.1338 0 0) '()))))
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      upenv->vars[0],
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter2_D411_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k192, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.iter-let.408 25 1) (bruijn ##.k.1333 2 0) (bruijn ##.x.1339 1 0) (bruijn ##.body.497 6 0) (bruijn ##.x.1340 0 0) (bruijn ##.cont.468 24 2))
    V_CALL(VGetArg(upenv, 25-1, 1), runtime,
      upenv->up->vars[0],
      upenv->vars[0],
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V10_Diter2_D411_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k191, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.369 27 23) (close _V10_Diter2_D411_k192) (bruijn ##.val.499 3 0))
    V_CALL(VGetArg(upenv, 27-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k192, env)}),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Diter2_D411_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1332 1 0) ((bruijn ##.iter2.411 23 4) (close _V10_Diter2_D411_k190) (bruijn ##.body.497 4 0) (bruijn ##.cont.468 22 2)) ((bruijn ##.list.369 26 23) (close _V10_Diter2_D411_k191) (bruijn ##.x.495 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k190, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 22-1, 2));
} else {
    V_CALL(VGetArg(upenv, 26-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k191, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Diter2_D411_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k193, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 20 1) (bruijn ##.k.1321 11 0) (bruijn ##.x.1331 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 11-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k188, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k189) (close _V10_Diter2_D411_k193))
    V_CALL_FUNC(_V10_Diter2_D411_k189, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k193, env)}));
 }
}
static void _V10_Diter2_D411_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k187, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.498 1 0))) ((bruijn ##.application?.384 23 0) (close _V10_Diter2_D411_k188) (bruijn ##.val.499 0 0)) ((bruijn ##.k.1321 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k188, env)}),
      _var0);
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.498 0 0)) ((close _V10_Diter2_D411_k187) (##inline ##vcore.car (bruijn ##.expr.40.498 0 0))) ((bruijn ##.k.1321 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k187, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.39.496 1 0))) ((close _V10_Diter2_D411_k186) (##inline ##vcore.cdr (bruijn ##.expr.35.491 8 0))) ((bruijn ##.k.1321 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V10_Diter2_D411_k186, env, runtime,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.496 0 0)) ((close _V10_Diter2_D411_k185) (##inline ##vcore.car (bruijn ##.expr.39.496 0 0))) ((bruijn ##.k.1321 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k185, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k183, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.38.494 1 0))) ((close _V10_Diter2_D411_k184) (##inline ##vcore.cdr (bruijn ##.expr.37.493 2 0))) ((bruijn ##.k.1321 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V10_Diter2_D411_k184, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k182, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.494 0 0)) ((close _V10_Diter2_D411_k183) (##inline ##vcore.car (bruijn ##.expr.38.494 0 0))) ((bruijn ##.k.1321 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k183, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k181, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.493 0 0)) ((close _V10_Diter2_D411_k182) (##inline ##vcore.car (bruijn ##.expr.37.493 0 0))) ((bruijn ##.k.1321 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k182, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k180, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1323 0 0) ((close _V10_Diter2_D411_k181) (##inline ##vcore.cdr (bruijn ##.expr.36.492 1 0))) ((bruijn ##.k.1321 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k181, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k179, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.492 0 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Diter2_D411_k180) 'lambda (##inline ##vcore.car (bruijn ##.expr.36.492 0 0))) ((bruijn ##.k.1321 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k180, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k178, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.491 1 0)) ((close _V10_Diter2_D411_k179) (##inline ##vcore.car (bruijn ##.expr.35.491 1 0))) ((bruijn ##.k.1321 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Diter2_D411_k179, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k200, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 16 1) (bruijn ##.k.1311 5 0) (bruijn ##.x.1317 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.504 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.44.504 0 0))) ((bruijn ##.iter-let.408 18 1) (close _V10_Diter2_D411_k200) (##inline ##vcore.car (bruijn ##.expr.43.502 1 0)) (##inline ##vcore.car (bruijn ##.expr.44.504 0 0)) (##inline ##vcore.cdr (bruijn ##.expr.41.500 5 0)) (bruijn ##.cont.468 17 2)) ((bruijn ##.k.1311 4 0) #f)) ((bruijn ##.k.1311 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k200, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
        _var0),
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VGetArg(upenv, 17-1, 2));
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
static void _V10_Diter2_D411_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k198, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.502 0 0)) ((close _V10_Diter2_D411_k199) (##inline ##vcore.cdr (bruijn ##.expr.43.502 0 0))) ((bruijn ##.k.1311 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter2_D411_k199, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k197, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1313 0 0) ((close _V10_Diter2_D411_k198) (##inline ##vcore.cdr (bruijn ##.expr.42.501 1 0))) ((bruijn ##.k.1311 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k198, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k196, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.501 0 0)) ((bruijn ##.equal?.383 18 37) (close _V10_Diter2_D411_k197) 'lambda (##inline ##vcore.car (bruijn ##.expr.42.501 0 0))) ((bruijn ##.k.1311 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k197, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.500 1 0)) ((close _V10_Diter2_D411_k196) (##inline ##vcore.car (bruijn ##.expr.41.500 1 0))) ((bruijn ##.k.1311 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Diter2_D411_k196, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D511_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k207, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.50.510 5 1) (bruijn ##.k.1299 2 0) (bruijn ##.expr.52.512 3 1) (bruijn ##.x.1300 1 0) (bruijn ##.x.1301 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D511_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k206, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 27 15) (close _V10_Dloop_D511_k207) (bruijn ##.vals.49.514 2 3))
    V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k207, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D511_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k205, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.52.512 1 1))) ((bruijn ##.reverse.361 26 15) (close _V10_Dloop_D511_k206) (bruijn ##.xs.48.513 1 2)) ((bruijn ##.k.1299 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k206, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D511_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k211, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.518 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.54.518 0 0))) ((bruijn ##.kk.51.515 3 1) (bruijn ##.k.1291 1 0) (##inline ##vcore.cdr (bruijn ##.expr.52.512 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.53.516 2 0)) (bruijn ##.xs.48.513 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.54.518 0 0)) (bruijn ##.vals.49.514 6 3))) ((bruijn ##.k.1291 1 0) #f)) ((bruijn ##.k.1291 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D511_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.516 1 0)) ((close _V10_Dloop_D511_k211) (##inline ##vcore.cdr (bruijn ##.expr.53.516 1 0))) ((bruijn ##.k.1291 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D511_k211, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D511_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k214, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.50.510 9 1) (bruijn ##.k.1286 4 0) (bruijn ##.expr.52.512 7 1) (bruijn ##.x.1288 1 0) (bruijn ##.x.1289 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D511_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k213, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 31 15) (close _V10_Dloop_D511_k214) (bruijn ##.vals.49.514 6 3))
    V_CALL(VGetArg(upenv, 31-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k214, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D511_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 30 15) (close _V10_Dloop_D511_k213) (bruijn ##.xs.48.513 5 2))
    V_CALL(VGetArg(upenv, 30-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k213, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D511_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k209, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D511_k210) (close _V10_Dloop_D511_k212))
    V_CALL_FUNC(_V10_Dloop_D511_k210, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k212, env)}));
 }
}
static void _V10_Dloop_D511_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_lambda39, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D511_k209) (##inline ##vcore.car (bruijn ##.expr.52.512 3 1)))
    V_CALL_FUNC(_V10_Dloop_D511_k209, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D511_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_lambda38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 27 36) (bruijn ##.k.1285 0 0) (close _V10_Dloop_D511_lambda39))
    V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_lambda39, env)}));
 }
}
static void _V10_Dloop_D511_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_k208, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 26 16) (bruijn ##.k.1283 1 0) (close _V10_Dloop_D511_lambda38) (bruijn ##.loop.511 2 0))
    V_CALL(VGetArg(upenv, 26-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_lambda38, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D511_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D511_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D511_lambda37, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D511_k205) (close _V10_Dloop_D511_k208))
    V_CALL_FUNC(_V10_Dloop_D511_k205, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_k208, env)}));
 }
}
static void _V10_Diter2_D411_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda36, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D511_lambda37)) ((bruijn ##.loop.511 0 0) (bruijn ##.k.1282 1 0) (##inline ##vcore.car (bruijn ##.expr.46.508 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D511_lambda37, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Diter2_D411_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 22 36) (bruijn ##.k.1281 0 0) (close _V10_Diter2_D411_lambda36))
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_lambda36, env)}));
 }
}
static void _V10_Diter2_D411_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k216, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 18 1) (bruijn ##.k.1303 2 0) (bruijn ##.x.1307 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter2_D411_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.523 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.55.523 0 0))) ((bruijn ##.iter-letrec.409 20 2) (close _V10_Diter2_D411_k216) (bruijn ##.xs.521 1 2) (##inline ##vcore.car (bruijn ##.expr.55.523 0 0)) (bruijn ##.vals.522 1 3) (bruijn ##.cont.468 19 2)) ((bruijn ##.k.1303 1 0) #f)) ((bruijn ##.k.1303 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 20-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k216, env)}),
      upenv->vars[2],
      VInlineCar2(runtime,
        _var0),
      upenv->vars[3],
      VGetArg(upenv, 19-1, 2));
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
static void _V10_Diter2_D411_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda40, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.520 0 1)) ((close _V10_Diter2_D411_k215) (##inline ##vcore.cdr (bruijn ##.expr.46.508 1 0))) ((bruijn ##.k.1303 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Diter2_D411_k215, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.508 0 0)) ((bruijn ##.call-with-values.362 21 16) (bruijn ##.k.1278 2 0) (close _V10_Diter2_D411_lambda35) (close _V10_Diter2_D411_lambda40)) ((bruijn ##.k.1278 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_lambda35, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_lambda40, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1279 0 0) ((close _V10_Diter2_D411_k204) (##inline ##vcore.cdr (bruijn ##.expr.45.507 2 0))) ((bruijn ##.k.1278 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter2_D411_k204, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k202, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.507 1 0)) ((bruijn ##.equal?.383 19 37) (close _V10_Diter2_D411_k203) 'letrec (##inline ##vcore.car (bruijn ##.expr.45.507 1 0))) ((bruijn ##.k.1278 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k203, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter2_D411_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k218, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.23.469 14 1) (bruijn ##.k.1269 14 0) (bruijn ##.x.1276 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V10_Diter2_D411_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k217, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-combination.410 16 3) (close _V10_Diter2_D411_k218) (bruijn ##.expr.467 15 1) (bruijn ##.cont.468 15 2))
    V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k218, env)}),
      VGetArg(upenv, 15-1, 1),
      VGetArg(upenv, 15-1, 2));
 }
}
static void _V10_Diter2_D411_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k202) (close _V10_Diter2_D411_k217))
    V_CALL_FUNC(_V10_Diter2_D411_k202, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k217, env)}));
 }
}
static void _V10_Diter2_D411_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k201, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda34) (bruijn ##.input.24.470 10 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda34, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter2_D411_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k195) (close _V10_Diter2_D411_k201))
    V_CALL_FUNC(_V10_Diter2_D411_k195, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k201, env)}));
 }
}
static void _V10_Diter2_D411_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda33) (bruijn ##.input.24.470 8 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda33, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter2_D411_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k178) (close _V10_Diter2_D411_k194))
    V_CALL_FUNC(_V10_Diter2_D411_k178, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k194, env)}));
 }
}
static void _V10_Diter2_D411_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda32) (bruijn ##.input.24.470 6 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda32, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter2_D411_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k166) (close _V10_Diter2_D411_k177))
    V_CALL_FUNC(_V10_Diter2_D411_k166, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k177, env)}));
 }
}
static void _V10_Diter2_D411_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k165, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda31) (bruijn ##.input.24.470 4 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda31, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter2_D411_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k144) (close _V10_Diter2_D411_k165))
    V_CALL_FUNC(_V10_Diter2_D411_k144, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k165, env)}));
 }
}
static void _V10_Diter2_D411_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda30) (bruijn ##.input.24.470 2 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda30, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter2_D411_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_k132) (close _V10_Diter2_D411_k143))
    V_CALL_FUNC(_V10_Diter2_D411_k132, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k143, env)}));
 }
}
static void _V10_Diter2_D411_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D411_lambda29) (bruijn ##.input.24.470 0 0))
    V_CALL_FUNC(_V10_Diter2_D411_lambda29, env, runtime,
      _var0);
 }
}
static void _V10_Diter2_D411_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda27, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter2_D411_lambda28) (bruijn ##.expr.467 2 1))
    V_CALL_FUNC(_V10_Diter2_D411_lambda28, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Diter2_D411_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k219, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1267 2 0) (##inline ##vcore.cons (bruijn ##.cont.468 2 2) (##inline ##vcore.cons (bruijn ##.x.1426 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[2],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Diter2_D411_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_k131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1268 0 0) ((bruijn ##.call/cc.382 5 36) (bruijn ##.k.1267 1 0) (close _V10_Diter2_D411_lambda27)) ((bruijn ##.iter-atom.407 2 0) (close _V10_Diter2_D411_k219) (bruijn ##.expr.467 1 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_lambda27, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k219, env)}),
      upenv->vars[1]);
}
 }
}
static void _V10_Diter2_D411_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D411_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter2_D411_lambda26, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.application?.384 3 0) (close _V10_Diter2_D411_k131) (bruijn ##.expr.467 0 1))
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_k131, env)}),
      _var1);
 }
}
static void _V10_Dto__cps__impl_D412_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D412_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps__impl_D412_k221, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1427 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.next.526 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1431 0 0) '()))))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dto__cps__impl_D412_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D412_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps__impl_D412_k220, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.411 2 4) (close _V10_Dto__cps__impl_D412_k221) (bruijn ##.expr.525 1 1) (bruijn ##.next.526 0 0))
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D412_k221, env)}),
      upenv->vars[1],
      _var0);
 }
}
static void _V10_Dto__cps__impl_D412_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D412_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps__impl_D412_lambda41, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.gensym.346 4 0) (close _V10_Dto__cps__impl_D412_k220) (##string ##.string.2603))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D412_k220, env)}),
      VEncodePointer(&_V10_Dstring_D2603.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dto__cps_D386_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k223, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1452 0 0) ((bruijn ##.kk.0.527 4 1) (bruijn ##.k.1451 1 0) (bruijn ##.expr.406 6 1)) ((bruijn ##.k.1451 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__cps_D386_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k222, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.529 1 0)) ((bruijn ##.equal?.383 7 37) (close _V10_Dto__cps_D386_k223) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.2.529 1 0))) ((bruijn ##.k.1451 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k223, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__cps_D386_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k231, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.527 11 1) (bruijn ##.k.1437 6 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.531 4 0)) (##inline ##vcore.cons (bruijn ##.x.1445 0 0) '()))))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dto__cps_D386_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.349 14 3) (close _V10_Dto__cps_D386_k231) (bruijn ##.x.1446 0 0))
    V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k231, env)}),
      _var0);
 }
}
static void _V10_Dto__cps_D386_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caddr.350 13 4) (close _V10_Dto__cps_D386_k230) (bruijn ##.x.1447 0 0))
    V_CALL(VGetArg(upenv, 13-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k230, env)}),
      _var0);
 }
}
static void _V10_Dto__cps_D386_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k228, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.533 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.533 0 0))) ((bruijn ##.to-cps-impl.412 9 5) (close _V10_Dto__cps_D386_k229) (##inline ##vcore.car (bruijn ##.expr.5.533 0 0))) ((bruijn ##.k.1437 3 0) #f)) ((bruijn ##.k.1437 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k229, env)}),
      VInlineCar2(runtime,
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
static void _V10_Dto__cps_D386_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k227, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.531 0 0)) ((close _V10_Dto__cps_D386_k228) (##inline ##vcore.cdr (bruijn ##.expr.4.531 0 0))) ((bruijn ##.k.1437 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dto__cps_D386_k228, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__cps_D386_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1438 0 0) ((close _V10_Dto__cps_D386_k227) (##inline ##vcore.cdr (bruijn ##.expr.3.530 2 0))) ((bruijn ##.k.1437 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dto__cps_D386_k227, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__cps_D386_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.530 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Dto__cps_D386_k226) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.3.530 1 0))) ((bruijn ##.k.1437 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k226, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dto__cps_D386_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k233, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.527 6 1) (bruijn ##.k.1432 6 0) (bruijn ##.x.1435 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dto__cps_D386_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k232, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.to-cps-impl.412 6 5) (close _V10_Dto__cps_D386_k233) (bruijn ##.expr.406 7 1))
    V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k233, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dto__cps_D386_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_lambda45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D386_k225) (close _V10_Dto__cps_D386_k232))
    V_CALL_FUNC(_V10_Dto__cps_D386_k225, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k232, env)}));
 }
}
static void _V10_Dto__cps_D386_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_k224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D386_lambda45) (bruijn ##.input.1.528 2 0))
    V_CALL_FUNC(_V10_Dto__cps_D386_lambda45, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dto__cps_D386_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_lambda44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D386_k222) (close _V10_Dto__cps_D386_k224))
    V_CALL_FUNC(_V10_Dto__cps_D386_k222, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_k224, env)}));
 }
}
static void _V10_Dto__cps_D386_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_lambda43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D386_lambda44) (bruijn ##.input.1.528 0 0))
    V_CALL_FUNC(_V10_Dto__cps_D386_lambda44, env, runtime,
      _var0);
 }
}
static void _V10_Dto__cps_D386_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_lambda42, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dto__cps_D386_lambda43) (bruijn ##.expr.406 2 1))
    V_CALL_FUNC(_V10_Dto__cps_D386_lambda43, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Dto__cps_D386_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D386_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dto__cps_D386_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 6 ((close _V10_Diter__atom_D407_lambda6) (close _V10_Diter__let_D408_lambda20) (close _V10_Diter__letrec_D409_lambda22) (close _V10_Diter__combination_D410_lambda24) (close _V10_Diter2_D411_lambda26) (close _V10_Dto__cps__impl_D412_lambda41)) ((bruijn ##.call/cc.382 3 36) (bruijn ##.k.1138 1 0) (close _V10_Dto__cps_D386_lambda42)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D407_lambda6, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__let_D408_lambda20, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D409_lambda22, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D410_lambda24, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D411_lambda26, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D412_lambda41, env)});
    V_CALL(upenv->up->up->vars[36], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_lambda42, env)}));
    }
 }
}
static void _V10_Dmemtail_D387_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_k237, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.memtail.387 5 3) (bruijn ##.k.1454 4 0) (bruijn ##.x.535 4 1) (bruijn ##.x.1457 0 0))
    V_CALL(VGetArg(upenv, 5-1, 3), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemtail_D387_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_k236, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1456 0 0) ((bruijn ##.k.1454 3 0) (bruijn ##.lst.536 3 2)) ((bruijn ##.cdr.355 5 9) (close _V10_Dmemtail_D387_k237) (bruijn ##.lst.536 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      upenv->up->up->vars[2]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_k237, env)}),
      upenv->up->up->vars[2]);
}
 }
}
static void _V10_Dmemtail_D387_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_k235, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.383 4 37) (close _V10_Dmemtail_D387_k236) (bruijn ##.x.535 2 1) (bruijn ##.x.1458 0 0))
    V_CALL(upenv->up->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_k236, env)}),
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dmemtail_D387_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_k238, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1459 0 0) ((bruijn ##.k.1454 2 0) (bruijn ##.lst.536 2 2)) ((bruijn ##.k.1454 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      upenv->up->vars[2]);
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dmemtail_D387_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_k234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1455 0 0) ((bruijn ##.car.379 3 33) (close _V10_Dmemtail_D387_k235) (bruijn ##.lst.536 1 2)) ((bruijn ##.equal?.383 3 37) (close _V10_Dmemtail_D387_k238) (bruijn ##.x.535 1 1) (bruijn ##.lst.536 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_k235, env)}),
      upenv->vars[2]);
} else {
    V_CALL(upenv->up->up->vars[37], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_k238, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V10_Dmemtail_D387_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D387_lambda46, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dmemtail_D387_lambda46, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.377 2 31) (close _V10_Dmemtail_D387_k234) (bruijn ##.lst.536 0 2))
    V_CALL(upenv->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_k234, env)}),
      _var2);
 }
}
static void _V10_Dref__count__lambda_D388_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count__lambda_D388_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count__lambda_D388_k239, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1461 0 0) ((bruijn ##.k.1460 1 0) 0) ((bruijn ##.ref-count.389 2 5) (bruijn ##.k.1460 1 0) (bruijn ##.x.537 1 1) (bruijn ##.body.539 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeInt(0l));
} else {
    V_CALL(upenv->up->vars[5], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V10_Dref__count__lambda_D388_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count__lambda_D388_lambda47, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count__lambda_D388_lambda47, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.memtail.387 1 3) (close _V10_Dref__count__lambda_D388_k239) (bruijn ##.x.537 0 1) (bruijn ##.args.538 0 2))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count__lambda_D388_k239, env)}),
      _var1,
      _var2);
 }
}
static void _V10_Dref__count_D389_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k244, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.56.542 7 1) (bruijn ##.k.1570 4 0) (bruijn ##.x.1575 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.547 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.60.547 0 0))) ((bruijn ##.ref-count-lambda.388 8 4) (close _V10_Dref__count_D389_k244) (bruijn ##.x.540 7 1) (##inline ##vcore.car (bruijn ##.expr.59.545 1 0)) (##inline ##vcore.car (bruijn ##.expr.60.547 0 0))) ((bruijn ##.k.1570 3 0) #f)) ((bruijn ##.k.1570 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k244, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dref__count_D389_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.545 0 0)) ((close _V10_Dref__count_D389_k243) (##inline ##vcore.cdr (bruijn ##.expr.59.545 0 0))) ((bruijn ##.k.1570 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dref__count_D389_k243, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1571 0 0) ((close _V10_Dref__count_D389_k242) (##inline ##vcore.cdr (bruijn ##.expr.58.544 2 0))) ((bruijn ##.k.1570 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dref__count_D389_k242, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.544 1 0)) ((bruijn ##.equal?.383 6 37) (close _V10_Dref__count_D389_k241) 'lambda (##inline ##vcore.car (bruijn ##.expr.58.544 1 0))) ((bruijn ##.k.1570 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k241, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k250, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.56.542 9 1) (bruijn ##.k.1561 4 0) (bruijn ##.x.1566 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.552 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.63.552 0 0))) ((bruijn ##.ref-count-lambda.388 10 4) (close _V10_Dref__count_D389_k250) (bruijn ##.x.540 9 1) (##inline ##vcore.car (bruijn ##.expr.62.550 1 0)) (##inline ##vcore.car (bruijn ##.expr.63.552 0 0))) ((bruijn ##.k.1561 3 0) #f)) ((bruijn ##.k.1561 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k250, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dref__count_D389_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k248, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.550 0 0)) ((close _V10_Dref__count_D389_k249) (##inline ##vcore.cdr (bruijn ##.expr.62.550 0 0))) ((bruijn ##.k.1561 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dref__count_D389_k249, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k247, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1562 0 0) ((close _V10_Dref__count_D389_k248) (##inline ##vcore.cdr (bruijn ##.expr.61.549 2 0))) ((bruijn ##.k.1561 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dref__count_D389_k248, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.549 1 0)) ((bruijn ##.equal?.383 8 37) (close _V10_Dref__count_D389_k247) 'continuation (##inline ##vcore.car (bruijn ##.expr.61.549 1 0))) ((bruijn ##.k.1561 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k247, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D557_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k256, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.556 5 1) (bruijn ##.k.1550 2 0) (bruijn ##.expr.70.558 3 1) (bruijn ##.x.1551 1 0) (bruijn ##.x.1552 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D557_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 17 15) (close _V10_Dloop_D557_k256) (bruijn ##.body.67.560 2 3))
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k256, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D557_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.70.558 1 1))) ((bruijn ##.reverse.361 16 15) (close _V10_Dloop_D557_k255) (bruijn ##.args.66.559 1 2)) ((bruijn ##.k.1550 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k255, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D557_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k260, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.72.564 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.72.564 0 0))) ((bruijn ##.kk.69.561 3 1) (bruijn ##.k.1542 1 0) (##inline ##vcore.cdr (bruijn ##.expr.70.558 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.71.562 2 0)) (bruijn ##.args.66.559 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.72.564 0 0)) (bruijn ##.body.67.560 6 3))) ((bruijn ##.k.1542 1 0) #f)) ((bruijn ##.k.1542 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D557_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.71.562 1 0)) ((close _V10_Dloop_D557_k260) (##inline ##vcore.cdr (bruijn ##.expr.71.562 1 0))) ((bruijn ##.k.1542 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D557_k260, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D557_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k263, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.68.556 9 1) (bruijn ##.k.1537 4 0) (bruijn ##.expr.70.558 7 1) (bruijn ##.x.1539 1 0) (bruijn ##.x.1540 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D557_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k262, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 21 15) (close _V10_Dloop_D557_k263) (bruijn ##.body.67.560 6 3))
    V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k263, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D557_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k261, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D557_k262) (bruijn ##.args.66.559 5 2))
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k262, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D557_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D557_k259) (close _V10_Dloop_D557_k261))
    V_CALL_FUNC(_V10_Dloop_D557_k259, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k261, env)}));
 }
}
static void _V10_Dloop_D557_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda58, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_lambda58, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D557_k258) (##inline ##vcore.car (bruijn ##.expr.70.558 3 1)))
    V_CALL_FUNC(_V10_Dloop_D557_k258, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D557_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_lambda57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 17 36) (bruijn ##.k.1536 0 0) (close _V10_Dloop_D557_lambda58))
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda58, env)}));
 }
}
static void _V10_Dloop_D557_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_k257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 16 16) (bruijn ##.k.1534 1 0) (close _V10_Dloop_D557_lambda57) (bruijn ##.loop.557 2 0))
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda57, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D557_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D557_lambda56, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D557_lambda56, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D557_k254) (close _V10_Dloop_D557_k257))
    V_CALL_FUNC(_V10_Dloop_D557_k254, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_k257, env)}));
 }
}
static void _V10_Dref__count_D389_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda55, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D557_lambda56)) ((bruijn ##.loop.557 0 0) (bruijn ##.k.1533 1 0) (##inline ##vcore.cdr (bruijn ##.expr.64.554 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D557_lambda56, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dref__count_D389_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 12 36) (bruijn ##.k.1532 0 0) (close _V10_Dref__count_D389_lambda55))
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda55, env)}));
 }
}
static void _V10_Dref__count_D389_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k265, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.56.542 11 1) (bruijn ##.k.1554 2 0) (bruijn ##.x.1556 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k264, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.apply.351 13 5) (close _V10_Dref__count_D389_k265) (bruijn ##.+.358 13 12) (bruijn ##.x.1557 0 0))
    V_CALL(VGetArg(upenv, 13-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k265, env)}),
      VGetArg(upenv, 13-1, 12),
      _var0);
 }
}
static void _V10_Dref__count_D389_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda60, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda60, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.ref-count-lambda.388 12 4) (bruijn ##.k.1558 0 0) (bruijn ##.x.540 11 1) (bruijn ##.args.569 0 1) (bruijn ##.body.570 0 2))
    V_CALL(VGetArg(upenv, 12-1, 4), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V10_Dref__count_D389_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda59, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda59, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.566 0 1)) ((bruijn ##.map.363 12 17) (close _V10_Dref__count_D389_k264) (close _V10_Dref__count_D389_lambda60) (bruijn ##.args.567 0 2) (bruijn ##.body.568 0 3)) ((bruijn ##.k.1554 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k264, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda60, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1531 0 0) ((bruijn ##.call-with-values.362 11 16) (bruijn ##.k.1530 1 0) (close _V10_Dref__count_D389_lambda54) (close _V10_Dref__count_D389_lambda59)) ((bruijn ##.k.1530 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda54, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda59, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k252, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.554 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Dref__count_D389_k253) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.64.554 1 0))) ((bruijn ##.k.1530 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k253, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k268, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1527 0 0) ((bruijn ##.kk.56.542 10 1) (bruijn ##.k.1526 1 0) 0) ((bruijn ##.k.1526 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeInt(0l));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k267, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.571 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Dref__count_D389_k268) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.73.571 1 0))) ((bruijn ##.k.1526 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k268, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k272, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.573 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.75.573 0 0))) ((bruijn ##.kk.56.542 13 1) (bruijn ##.k.1519 2 0) 0) ((bruijn ##.k.1519 2 0) #f)) ((bruijn ##.k.1519 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
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
static void _V10_Dref__count_D389_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1520 0 0) ((close _V10_Dref__count_D389_k272) (##inline ##vcore.cdr (bruijn ##.expr.74.572 2 0))) ((bruijn ##.k.1519 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dref__count_D389_k272, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.572 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Dref__count_D389_k271) 'quote (##inline ##vcore.car (bruijn ##.expr.74.572 1 0))) ((bruijn ##.k.1519 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k271, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D579_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k279, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.81.578 5 1) (bruijn ##.k.1502 2 0) (bruijn ##.expr.83.580 3 1) (bruijn ##.x.1503 1 0) (bruijn ##.x.1504 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D579_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 24 15) (close _V10_Dloop_D579_k279) (bruijn ##.vals.80.582 2 3))
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k279, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D579_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k277, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.83.580 1 1))) ((bruijn ##.reverse.361 23 15) (close _V10_Dloop_D579_k278) (bruijn ##.args.79.581 1 2)) ((bruijn ##.k.1502 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k278, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D579_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k283, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.85.586 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.85.586 0 0))) ((bruijn ##.kk.82.583 3 1) (bruijn ##.k.1494 1 0) (##inline ##vcore.cdr (bruijn ##.expr.83.580 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.84.584 2 0)) (bruijn ##.args.79.581 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.85.586 0 0)) (bruijn ##.vals.80.582 6 3))) ((bruijn ##.k.1494 1 0) #f)) ((bruijn ##.k.1494 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D579_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.84.584 1 0)) ((close _V10_Dloop_D579_k283) (##inline ##vcore.cdr (bruijn ##.expr.84.584 1 0))) ((bruijn ##.k.1494 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D579_k283, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D579_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k286, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.81.578 9 1) (bruijn ##.k.1489 4 0) (bruijn ##.expr.83.580 7 1) (bruijn ##.x.1491 1 0) (bruijn ##.x.1492 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D579_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k285, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 28 15) (close _V10_Dloop_D579_k286) (bruijn ##.vals.80.582 6 3))
    V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k286, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D579_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k284, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 27 15) (close _V10_Dloop_D579_k285) (bruijn ##.args.79.581 5 2))
    V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k285, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D579_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D579_k282) (close _V10_Dloop_D579_k284))
    V_CALL_FUNC(_V10_Dloop_D579_k282, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k284, env)}));
 }
}
static void _V10_Dloop_D579_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_lambda68, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_lambda68, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D579_k281) (##inline ##vcore.car (bruijn ##.expr.83.580 3 1)))
    V_CALL_FUNC(_V10_Dloop_D579_k281, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D579_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_lambda67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_lambda67, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 24 36) (bruijn ##.k.1488 0 0) (close _V10_Dloop_D579_lambda68))
    V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_lambda68, env)}));
 }
}
static void _V10_Dloop_D579_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_k280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 23 16) (bruijn ##.k.1486 1 0) (close _V10_Dloop_D579_lambda67) (bruijn ##.loop.579 2 0))
    V_CALL(VGetArg(upenv, 23-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_lambda67, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D579_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D579_lambda66, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D579_lambda66, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D579_k277) (close _V10_Dloop_D579_k280))
    V_CALL_FUNC(_V10_Dloop_D579_k277, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_k280, env)}));
 }
}
static void _V10_Dref__count_D389_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda65, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D579_lambda66)) ((bruijn ##.loop.579 0 0) (bruijn ##.k.1485 1 0) (##inline ##vcore.car (bruijn ##.expr.77.576 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D579_lambda66, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dref__count_D389_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 19 36) (bruijn ##.k.1484 0 0) (close _V10_Dref__count_D389_lambda65))
    V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda65, env)}));
 }
}
static void _V10_Dref__count_D389_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k291, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fold.352 24 6) (bruijn ##.k.1512 2 0) (bruijn ##.+.358 24 12) (bruijn ##.x.1513 1 0) (bruijn ##.x.1514 0 0))
    V_CALL(VGetArg(upenv, 24-1, 6), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 24-1, 12),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda70, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda70, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.ref-count.389 23 5) (bruijn ##.k.1515 0 0) (bruijn ##.x.540 22 1) (bruijn ##.val.593 0 1))
    V_CALL(VGetArg(upenv, 23-1, 5), runtime,
      _var0,
      VGetArg(upenv, 22-1, 1),
      _var1);
 }
}
static void _V10_Dref__count_D389_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k290, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 23 17) (close _V10_Dref__count_D389_k291) (close _V10_Dref__count_D389_lambda70) (bruijn ##.vals.590 4 3))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k291, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda70, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V10_Dref__count_D389_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k289, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1511 1 0) ((bruijn ##.k.1512 0 0) 0) ((bruijn ##.ref-count.389 21 5) (close _V10_Dref__count_D389_k290) (bruijn ##.x.540 20 1) (##inline ##vcore.car (bruijn ##.expr.86.591 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
} else {
    V_CALL(VGetArg(upenv, 21-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k290, env)}),
      VGetArg(upenv, 20-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
 }
}
static void _V10_Dref__count_D389_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k292, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.56.542 19 1) (bruijn ##.k.1506 3 0) (bruijn ##.x.1510 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k288, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k289) (close _V10_Dref__count_D389_k292))
    V_CALL_FUNC(_V10_Dref__count_D389_k289, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k292, env)}));
 }
}
static void _V10_Dref__count_D389_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k287, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.591 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.86.591 0 0))) ((bruijn ##.memtail.387 19 3) (close _V10_Dref__count_D389_k288) (bruijn ##.x.540 18 1) (bruijn ##.args.589 1 2)) ((bruijn ##.k.1506 1 0) #f)) ((bruijn ##.k.1506 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k288, env)}),
      VGetArg(upenv, 18-1, 1),
      upenv->vars[2]);
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
static void _V10_Dref__count_D389_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda69, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda69, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.588 0 1)) ((close _V10_Dref__count_D389_k287) (##inline ##vcore.cdr (bruijn ##.expr.77.576 1 0))) ((bruijn ##.k.1506 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Dref__count_D389_k287, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k276, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.576 0 0)) ((bruijn ##.call-with-values.362 18 16) (bruijn ##.k.1481 2 0) (close _V10_Dref__count_D389_lambda64) (close _V10_Dref__count_D389_lambda69)) ((bruijn ##.k.1481 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda64, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda69, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k275, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1482 0 0) ((close _V10_Dref__count_D389_k276) (##inline ##vcore.cdr (bruijn ##.expr.76.575 2 0))) ((bruijn ##.k.1481 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dref__count_D389_k276, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.575 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Dref__count_D389_k275) 'letrec (##inline ##vcore.car (bruijn ##.expr.76.575 1 0))) ((bruijn ##.k.1481 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k275, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k297, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.56.542 18 1) (bruijn ##.k.1476 3 0) (bruijn ##.x.1477 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k296, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.358 20 12) (close _V10_Dref__count_D389_k297) (bruijn ##.x.1478 1 0) (bruijn ##.x.1479 0 0))
    V_CALL(VGetArg(upenv, 20-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k297, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dref__count_D389_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k295, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.ref-count.389 18 5) (close _V10_Dref__count_D389_k296) (bruijn ##.x.540 17 1) (##inline ##vcore.cdr (bruijn ##.expr.87.594 2 0)))
    V_CALL(VGetArg(upenv, 18-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k296, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dref__count_D389_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k294, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.594 1 0)) ((bruijn ##.ref-count.389 17 5) (close _V10_Dref__count_D389_k295) (bruijn ##.x.540 16 1) (##inline ##vcore.car (bruijn ##.expr.87.594 1 0))) ((bruijn ##.k.1476 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k295, env)}),
      VGetArg(upenv, 16-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dref__count_D389_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k300, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1473 1 0) ((bruijn ##.k.1474 0 0) 1) ((bruijn ##.k.1474 0 0) 0))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
}
 }
}
static void _V10_Dref__count_D389_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k302, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.368 22 22) (bruijn ##.k.1463 19 0) (##string ##.string.2604))
    V_CALL(VGetArg(upenv, 22-1, 22), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10_Dstring_D2604.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dref__count_D389_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k301, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.56.542 18 1) (close _V10_Dref__count_D389_k302) (bruijn ##.x.1472 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k302, env)}),
      _var0);
 }
}
static void _V10_Dref__count_D389_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k299, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k300) (close _V10_Dref__count_D389_k301))
    V_CALL_FUNC(_V10_Dref__count_D389_k300, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k301, env)}));
 }
}
static void _V10_Dref__count_D389_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda72, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.375 19 29) (close _V10_Dref__count_D389_k299) (bruijn ##.x.540 17 1) (bruijn ##.y.597 0 0))
    V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k299, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V10_Dref__count_D389_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k298, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda72) (bruijn ##.input.57.543 14 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda72, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dref__count_D389_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k294) (close _V10_Dref__count_D389_k298))
    V_CALL_FUNC(_V10_Dref__count_D389_k294, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k298, env)}));
 }
}
static void _V10_Dref__count_D389_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k293, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda71) (bruijn ##.input.57.543 12 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda71, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dref__count_D389_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k274) (close _V10_Dref__count_D389_k293))
    V_CALL_FUNC(_V10_Dref__count_D389_k274, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k293, env)}));
 }
}
static void _V10_Dref__count_D389_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda63) (bruijn ##.input.57.543 10 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda63, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dref__count_D389_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda62, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k270) (close _V10_Dref__count_D389_k273))
    V_CALL_FUNC(_V10_Dref__count_D389_k270, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k273, env)}));
 }
}
static void _V10_Dref__count_D389_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda62) (bruijn ##.input.57.543 8 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda62, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dref__count_D389_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k267) (close _V10_Dref__count_D389_k269))
    V_CALL_FUNC(_V10_Dref__count_D389_k267, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k269, env)}));
 }
}
static void _V10_Dref__count_D389_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k266, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda61) (bruijn ##.input.57.543 6 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda61, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dref__count_D389_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k252) (close _V10_Dref__count_D389_k266))
    V_CALL_FUNC(_V10_Dref__count_D389_k252, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k266, env)}));
 }
}
static void _V10_Dref__count_D389_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k251, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda53) (bruijn ##.input.57.543 4 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda53, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dref__count_D389_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda52, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k246) (close _V10_Dref__count_D389_k251))
    V_CALL_FUNC(_V10_Dref__count_D389_k246, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k251, env)}));
 }
}
static void _V10_Dref__count_D389_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_k245, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda52) (bruijn ##.input.57.543 2 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda52, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dref__count_D389_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_k240) (close _V10_Dref__count_D389_k245))
    V_CALL_FUNC(_V10_Dref__count_D389_k240, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_k245, env)}));
 }
}
static void _V10_Dref__count_D389_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dref__count_D389_lambda51) (bruijn ##.input.57.543 0 0))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda51, env, runtime,
      _var0);
 }
}
static void _V10_Dref__count_D389_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda49, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dref__count_D389_lambda50) (bruijn ##.expr.541 1 2))
    V_CALL_FUNC(_V10_Dref__count_D389_lambda50, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Dref__count_D389_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dref__count_D389_lambda48, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dref__count_D389_lambda48, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.382 2 36) (bruijn ##.k.1462 0 0) (close _V10_Dref__count_D389_lambda49))
    V_CALL(upenv->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda49, env)}));
 }
}
static void _V10_Dpure__in__lambda_Q_D390_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in__lambda_Q_D390_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in__lambda_Q_D390_k303, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1579 0 0) ((bruijn ##.k.1578 1 0) #t) ((bruijn ##.pure-in?.391 2 7) (bruijn ##.k.1578 1 0) (bruijn ##.x.598 1 1) (bruijn ##.body.600 1 3)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
} else {
    V_CALL(upenv->up->vars[7], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[3]);
}
 }
}
static void _V10_Dpure__in__lambda_Q_D390_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in__lambda_Q_D390_lambda73, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in__lambda_Q_D390_lambda73, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.memtail.387 1 3) (close _V10_Dpure__in__lambda_Q_D390_k303) (bruijn ##.x.598 0 1) (bruijn ##.args.599 0 2))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in__lambda_Q_D390_k303, env)}),
      _var1,
      _var2);
 }
}
static void _V10_Dpure__in_Q_D391_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k308, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 7 1) (bruijn ##.k.1697 4 0) (bruijn ##.x.1702 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k307, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.608 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.92.608 0 0))) ((bruijn ##.pure-in-lambda?.390 8 6) (close _V10_Dpure__in_Q_D391_k308) (bruijn ##.x.601 7 1) (##inline ##vcore.car (bruijn ##.expr.91.606 1 0)) (##inline ##vcore.car (bruijn ##.expr.92.608 0 0))) ((bruijn ##.k.1697 3 0) #f)) ((bruijn ##.k.1697 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k308, env)}),
      VGetArg(upenv, 7-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dpure__in_Q_D391_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k306, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.91.606 0 0)) ((close _V10_Dpure__in_Q_D391_k307) (##inline ##vcore.cdr (bruijn ##.expr.91.606 0 0))) ((bruijn ##.k.1697 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k307, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k305, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1698 0 0) ((close _V10_Dpure__in_Q_D391_k306) (##inline ##vcore.cdr (bruijn ##.expr.90.605 2 0))) ((bruijn ##.k.1697 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k306, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k304, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.605 1 0)) ((bruijn ##.equal?.383 6 37) (close _V10_Dpure__in_Q_D391_k305) 'lambda (##inline ##vcore.car (bruijn ##.expr.90.605 1 0))) ((bruijn ##.k.1697 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k305, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k314, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 9 1) (bruijn ##.k.1688 4 0) (bruijn ##.x.1693 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k313, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.613 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.95.613 0 0))) ((bruijn ##.pure-in-lambda?.390 10 6) (close _V10_Dpure__in_Q_D391_k314) (bruijn ##.x.601 9 1) (##inline ##vcore.car (bruijn ##.expr.94.611 1 0)) (##inline ##vcore.car (bruijn ##.expr.95.613 0 0))) ((bruijn ##.k.1688 3 0) #f)) ((bruijn ##.k.1688 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k314, env)}),
      VGetArg(upenv, 9-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dpure__in_Q_D391_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k312, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.611 0 0)) ((close _V10_Dpure__in_Q_D391_k313) (##inline ##vcore.cdr (bruijn ##.expr.94.611 0 0))) ((bruijn ##.k.1688 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k313, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k311, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1689 0 0) ((close _V10_Dpure__in_Q_D391_k312) (##inline ##vcore.cdr (bruijn ##.expr.93.610 2 0))) ((bruijn ##.k.1688 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k312, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k310, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.610 1 0)) ((bruijn ##.equal?.383 8 37) (close _V10_Dpure__in_Q_D391_k311) 'continuation (##inline ##vcore.car (bruijn ##.expr.93.610 1 0))) ((bruijn ##.k.1688 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k311, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D618_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k320, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.617 5 1) (bruijn ##.k.1676 2 0) (bruijn ##.expr.102.619 3 1) (bruijn ##.x.1677 1 0) (bruijn ##.x.1678 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D618_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k319, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 17 15) (close _V10_Dloop_D618_k320) (bruijn ##.body.99.621 2 3))
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k320, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D618_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k318, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.102.619 1 1))) ((bruijn ##.reverse.361 16 15) (close _V10_Dloop_D618_k319) (bruijn ##.args.98.620 1 2)) ((bruijn ##.k.1676 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k319, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D618_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k324, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.104.625 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.104.625 0 0))) ((bruijn ##.kk.101.622 3 1) (bruijn ##.k.1668 1 0) (##inline ##vcore.cdr (bruijn ##.expr.102.619 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.103.623 2 0)) (bruijn ##.args.98.620 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.104.625 0 0)) (bruijn ##.body.99.621 6 3))) ((bruijn ##.k.1668 1 0) #f)) ((bruijn ##.k.1668 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D618_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k323, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.103.623 1 0)) ((close _V10_Dloop_D618_k324) (##inline ##vcore.cdr (bruijn ##.expr.103.623 1 0))) ((bruijn ##.k.1668 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D618_k324, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D618_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k327, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.100.617 9 1) (bruijn ##.k.1663 4 0) (bruijn ##.expr.102.619 7 1) (bruijn ##.x.1665 1 0) (bruijn ##.x.1666 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D618_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k326, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 21 15) (close _V10_Dloop_D618_k327) (bruijn ##.body.99.621 6 3))
    V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k327, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D618_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k325, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D618_k326) (bruijn ##.args.98.620 5 2))
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k326, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D618_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k322, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D618_k323) (close _V10_Dloop_D618_k325))
    V_CALL_FUNC(_V10_Dloop_D618_k323, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k325, env)}));
 }
}
static void _V10_Dloop_D618_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_lambda84, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_lambda84, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D618_k322) (##inline ##vcore.car (bruijn ##.expr.102.619 3 1)))
    V_CALL_FUNC(_V10_Dloop_D618_k322, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D618_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_lambda83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 17 36) (bruijn ##.k.1662 0 0) (close _V10_Dloop_D618_lambda84))
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_lambda84, env)}));
 }
}
static void _V10_Dloop_D618_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_k321, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 16 16) (bruijn ##.k.1660 1 0) (close _V10_Dloop_D618_lambda83) (bruijn ##.loop.618 2 0))
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_lambda83, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D618_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D618_lambda82, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D618_lambda82, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D618_k318) (close _V10_Dloop_D618_k321))
    V_CALL_FUNC(_V10_Dloop_D618_k318, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_k321, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda81, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D618_lambda82)) ((bruijn ##.loop.618 0 0) (bruijn ##.k.1659 1 0) (##inline ##vcore.cdr (bruijn ##.expr.96.615 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D618_lambda82, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dpure__in_Q_D391_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda80, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 12 36) (bruijn ##.k.1658 0 0) (close _V10_Dpure__in_Q_D391_lambda81))
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda81, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k329, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 11 1) (bruijn ##.k.1680 2 0) (bruijn ##.x.1682 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda86, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda86, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.a.630 0 1) ((bruijn ##.k.1683 0 0) (bruijn ##.b.631 0 2)) ((bruijn ##.k.1683 0 0) #f))
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
static void _V10_Dpure__in_Q_D391_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k328, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.fold.352 13 6) (close _V10_Dpure__in_Q_D391_k329) (close _V10_Dpure__in_Q_D391_lambda86) #t (bruijn ##.x.1684 0 0))
    V_CALL(VGetArg(upenv, 13-1, 6), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k329, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda86, env)}),
      VEncodeBool(true),
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda87, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda87, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.pure-in-lambda?.390 12 6) (bruijn ##.k.1685 0 0) (bruijn ##.x.601 11 1) (bruijn ##.args.632 0 1) (bruijn ##.body.633 0 2))
    V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      _var1,
      _var2);
 }
}
static void _V10_Dpure__in_Q_D391_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda85, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda85, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.627 0 1)) ((bruijn ##.map.363 12 17) (close _V10_Dpure__in_Q_D391_k328) (close _V10_Dpure__in_Q_D391_lambda87) (bruijn ##.args.628 0 2) (bruijn ##.body.629 0 3)) ((bruijn ##.k.1680 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k328, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda87, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k317, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1657 0 0) ((bruijn ##.call-with-values.362 11 16) (bruijn ##.k.1656 1 0) (close _V10_Dpure__in_Q_D391_lambda80) (close _V10_Dpure__in_Q_D391_lambda85)) ((bruijn ##.k.1656 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda80, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda85, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k316, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.615 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Dpure__in_Q_D391_k317) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.96.615 1 0))) ((bruijn ##.k.1656 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k317, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k332, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1653 0 0) ((bruijn ##.kk.88.603 10 1) (bruijn ##.k.1652 1 0) #t) ((bruijn ##.k.1652 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(true));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k331, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.105.634 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Dpure__in_Q_D391_k332) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.105.634 1 0))) ((bruijn ##.k.1652 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k332, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k336, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.636 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.107.636 0 0))) ((bruijn ##.kk.88.603 13 1) (bruijn ##.k.1645 2 0) #t) ((bruijn ##.k.1645 2 0) #f)) ((bruijn ##.k.1645 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VEncodeBool(true));
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
static void _V10_Dpure__in_Q_D391_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k335, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1646 0 0) ((close _V10_Dpure__in_Q_D391_k336) (##inline ##vcore.cdr (bruijn ##.expr.106.635 2 0))) ((bruijn ##.k.1645 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k336, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k334, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.106.635 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Dpure__in_Q_D391_k335) 'quote (##inline ##vcore.car (bruijn ##.expr.106.635 1 0))) ((bruijn ##.k.1645 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k335, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k344, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1642 0 0) ((bruijn ##.pure-in?.391 21 7) (bruijn ##.k.1641 1 0) (bruijn ##.x.601 20 1) (##inline ##vcore.cdr (bruijn ##.expr.110.641 3 0))) ((bruijn ##.k.1641 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      upenv->vars[0],
      VGetArg(upenv, 20-1, 1),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k343, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1640 1 0) ((bruijn ##.k.1641 0 0) #f) ((bruijn ##.pure-in?.391 20 7) (close _V10_Dpure__in_Q_D391_k344) (bruijn ##.x.601 19 1) (##inline ##vcore.car (bruijn ##.expr.109.639 3 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
} else {
    V_CALL(VGetArg(upenv, 20-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k344, env)}),
      VGetArg(upenv, 19-1, 1),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
 }
}
static void _V10_Dpure__in_Q_D391_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k345, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 18 1) (bruijn ##.k.1635 5 0) (bruijn ##.x.1639 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k342, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k343) (close _V10_Dpure__in_Q_D391_k345))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k343, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k345, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k341, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.641 0 0)) ((bruijn ##.eqv?.375 19 29) (close _V10_Dpure__in_Q_D391_k342) (bruijn ##.x.601 17 1) (##inline ##vcore.car (bruijn ##.expr.110.641 0 0))) ((bruijn ##.k.1635 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k342, env)}),
      VGetArg(upenv, 17-1, 1),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k340, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.109.639 0 0)) ((close _V10_Dpure__in_Q_D391_k341) (##inline ##vcore.cdr (bruijn ##.expr.109.639 0 0))) ((bruijn ##.k.1635 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k341, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k339, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1636 0 0) ((close _V10_Dpure__in_Q_D391_k340) (##inline ##vcore.cdr (bruijn ##.expr.108.638 2 0))) ((bruijn ##.k.1635 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k340, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k338, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.638 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Dpure__in_Q_D391_k339) 'set! (##inline ##vcore.car (bruijn ##.expr.108.638 1 0))) ((bruijn ##.k.1635 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k339, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D648_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k352, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.116.647 5 1) (bruijn ##.k.1617 2 0) (bruijn ##.expr.118.649 3 1) (bruijn ##.x.1618 1 0) (bruijn ##.x.1619 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D648_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k351, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 26 15) (close _V10_Dloop_D648_k352) (bruijn ##.vals.115.651 2 3))
    V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k352, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D648_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k350, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.118.649 1 1))) ((bruijn ##.reverse.361 25 15) (close _V10_Dloop_D648_k351) (bruijn ##.args.114.650 1 2)) ((bruijn ##.k.1617 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k351, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D648_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k356, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.655 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.655 0 0))) ((bruijn ##.kk.117.652 3 1) (bruijn ##.k.1609 1 0) (##inline ##vcore.cdr (bruijn ##.expr.118.649 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.119.653 2 0)) (bruijn ##.args.114.650 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.120.655 0 0)) (bruijn ##.vals.115.651 6 3))) ((bruijn ##.k.1609 1 0) #f)) ((bruijn ##.k.1609 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D648_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k355, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.653 1 0)) ((close _V10_Dloop_D648_k356) (##inline ##vcore.cdr (bruijn ##.expr.119.653 1 0))) ((bruijn ##.k.1609 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D648_k356, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D648_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k359, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.116.647 9 1) (bruijn ##.k.1604 4 0) (bruijn ##.expr.118.649 7 1) (bruijn ##.x.1606 1 0) (bruijn ##.x.1607 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D648_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k358, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 30 15) (close _V10_Dloop_D648_k359) (bruijn ##.vals.115.651 6 3))
    V_CALL(VGetArg(upenv, 30-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k359, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D648_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k357, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 29 15) (close _V10_Dloop_D648_k358) (bruijn ##.args.114.650 5 2))
    V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k358, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D648_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k354, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D648_k355) (close _V10_Dloop_D648_k357))
    V_CALL_FUNC(_V10_Dloop_D648_k355, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k357, env)}));
 }
}
static void _V10_Dloop_D648_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_lambda96, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_lambda96, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D648_k354) (##inline ##vcore.car (bruijn ##.expr.118.649 3 1)))
    V_CALL_FUNC(_V10_Dloop_D648_k354, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D648_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_lambda95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 26 36) (bruijn ##.k.1603 0 0) (close _V10_Dloop_D648_lambda96))
    V_CALL(VGetArg(upenv, 26-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_lambda96, env)}));
 }
}
static void _V10_Dloop_D648_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_k353, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 25 16) (bruijn ##.k.1601 1 0) (close _V10_Dloop_D648_lambda95) (bruijn ##.loop.648 2 0))
    V_CALL(VGetArg(upenv, 25-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_lambda95, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D648_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D648_lambda94, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D648_lambda94, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D648_k350) (close _V10_Dloop_D648_k353))
    V_CALL_FUNC(_V10_Dloop_D648_k350, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_k353, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda93, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D648_lambda94)) ((bruijn ##.loop.648 0 0) (bruijn ##.k.1600 1 0) (##inline ##vcore.car (bruijn ##.expr.112.645 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D648_lambda94, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dpure__in_Q_D391_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 21 36) (bruijn ##.k.1599 0 0) (close _V10_Dpure__in_Q_D391_lambda93))
    V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda93, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda98, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda98, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.a.662 0 1) ((bruijn ##.k.1628 0 0) (bruijn ##.b.663 0 2)) ((bruijn ##.k.1628 0 0) #f))
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
static void _V10_Dpure__in_Q_D391_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k364, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.fold.352 26 6) (bruijn ##.k.1627 2 0) (close _V10_Dpure__in_Q_D391_lambda98) (bruijn ##.x.1629 1 0) (bruijn ##.x.1630 0 0))
    V_CALL(VGetArg(upenv, 26-1, 6), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda98, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda99, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.pure-in?.391 25 7) (bruijn ##.k.1631 0 0) (bruijn ##.x.601 24 1) (bruijn ##.val.664 0 1))
    V_CALL(VGetArg(upenv, 25-1, 7), runtime,
      _var0,
      VGetArg(upenv, 24-1, 1),
      _var1);
 }
}
static void _V10_Dpure__in_Q_D391_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k363, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 25 17) (close _V10_Dpure__in_Q_D391_k364) (close _V10_Dpure__in_Q_D391_lambda99) (bruijn ##.vals.659 4 3))
    V_CALL(VGetArg(upenv, 25-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k364, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda99, env)}),
      upenv->up->up->up->vars[3]);
 }
}
static void _V10_Dpure__in_Q_D391_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k362, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1626 1 0) ((bruijn ##.k.1627 0 0) #t) ((bruijn ##.pure-in?.391 23 7) (close _V10_Dpure__in_Q_D391_k363) (bruijn ##.x.601 22 1) (##inline ##vcore.car (bruijn ##.expr.121.660 2 0))))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VEncodeBool(true));
} else {
    V_CALL(VGetArg(upenv, 23-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k363, env)}),
      VGetArg(upenv, 22-1, 1),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
 }
}
static void _V10_Dpure__in_Q_D391_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k365, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 21 1) (bruijn ##.k.1621 3 0) (bruijn ##.x.1625 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k361, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k362) (close _V10_Dpure__in_Q_D391_k365))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k362, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k365, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k360, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.660 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.121.660 0 0))) ((bruijn ##.memtail.387 21 3) (close _V10_Dpure__in_Q_D391_k361) (bruijn ##.x.601 20 1) (bruijn ##.args.658 1 2)) ((bruijn ##.k.1621 1 0) #f)) ((bruijn ##.k.1621 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k361, env)}),
      VGetArg(upenv, 20-1, 1),
      upenv->vars[2]);
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
static void _V10_Dpure__in_Q_D391_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda97, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda97, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.657 0 1)) ((close _V10_Dpure__in_Q_D391_k360) (##inline ##vcore.cdr (bruijn ##.expr.112.645 1 0))) ((bruijn ##.k.1621 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k360, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k349, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.645 0 0)) ((bruijn ##.call-with-values.362 20 16) (bruijn ##.k.1596 2 0) (close _V10_Dpure__in_Q_D391_lambda92) (close _V10_Dpure__in_Q_D391_lambda97)) ((bruijn ##.k.1596 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda92, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda97, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k348, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1597 0 0) ((close _V10_Dpure__in_Q_D391_k349) (##inline ##vcore.cdr (bruijn ##.expr.111.644 2 0))) ((bruijn ##.k.1596 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k349, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k347, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.644 1 0)) ((bruijn ##.equal?.383 18 37) (close _V10_Dpure__in_Q_D391_k348) 'letrec (##inline ##vcore.car (bruijn ##.expr.111.644 1 0))) ((bruijn ##.k.1596 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k348, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k369, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1593 1 0) ((bruijn ##.pure-in?.391 21 7) (bruijn ##.k.1594 0 0) (bruijn ##.x.601 20 1) (##inline ##vcore.cdr (bruijn ##.expr.122.665 3 0))) ((bruijn ##.k.1594 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 21-1, 7), runtime,
      _var0,
      VGetArg(upenv, 20-1, 1),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k370, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 19 1) (bruijn ##.k.1591 2 0) (bruijn ##.x.1592 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k368, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k369) (close _V10_Dpure__in_Q_D391_k370))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k369, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k370, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k367, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.665 1 0)) ((bruijn ##.pure-in?.391 19 7) (close _V10_Dpure__in_Q_D391_k368) (bruijn ##.x.601 18 1) (##inline ##vcore.car (bruijn ##.expr.122.665 1 0))) ((bruijn ##.k.1591 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k368, env)}),
      VGetArg(upenv, 18-1, 1),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dpure__in_Q_D391_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k371, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.88.603 17 1) (bruijn ##.k.1581 17 0) #t)
    V_CALL(VGetArg(upenv, 17-1, 1), runtime,
      VGetArg(upenv, 17-1, 0),
      VEncodeBool(true));
 }
}
static void _V10_Dpure__in_Q_D391_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k367) (close _V10_Dpure__in_Q_D391_k371))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k367, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k371, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k366, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda100) (bruijn ##.input.89.604 14 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda100, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dpure__in_Q_D391_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k347) (close _V10_Dpure__in_Q_D391_k366))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k347, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k366, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k346, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda91) (bruijn ##.input.89.604 12 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda91, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dpure__in_Q_D391_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k338) (close _V10_Dpure__in_Q_D391_k346))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k338, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k346, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k337, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda90) (bruijn ##.input.89.604 10 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda90, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dpure__in_Q_D391_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k334) (close _V10_Dpure__in_Q_D391_k337))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k334, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k337, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k333, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda89) (bruijn ##.input.89.604 8 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda89, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dpure__in_Q_D391_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k331) (close _V10_Dpure__in_Q_D391_k333))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k331, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k333, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k330, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda88) (bruijn ##.input.89.604 6 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda88, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dpure__in_Q_D391_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k316) (close _V10_Dpure__in_Q_D391_k330))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k316, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k330, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k315, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda79) (bruijn ##.input.89.604 4 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda79, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dpure__in_Q_D391_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k310) (close _V10_Dpure__in_Q_D391_k315))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k310, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k315, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_k309, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda78) (bruijn ##.input.89.604 2 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda78, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dpure__in_Q_D391_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda77, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_k304) (close _V10_Dpure__in_Q_D391_k309))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_k304, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_k309, env)}));
 }
}
static void _V10_Dpure__in_Q_D391_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dpure__in_Q_D391_lambda77) (bruijn ##.input.89.604 0 0))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda77, env, runtime,
      _var0);
 }
}
static void _V10_Dpure__in_Q_D391_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda75, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda75, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dpure__in_Q_D391_lambda76) (bruijn ##.expr.602 1 2))
    V_CALL_FUNC(_V10_Dpure__in_Q_D391_lambda76, env, runtime,
      upenv->vars[2]);
 }
}
static void _V10_Dpure__in_Q_D391_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dpure__in_Q_D391_lambda74, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dpure__in_Q_D391_lambda74, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.call/cc.382 2 36) (bruijn ##.k.1580 0 0) (close _V10_Dpure__in_Q_D391_lambda75))
    V_CALL(upenv->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda75, env)}));
 }
}
static void _V10_Dsubstitute__lambda_D392_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute__lambda_D392_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute__lambda_D392_k373, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1705 2 0) (##inline ##vcore.cons (bruijn ##.args.670 2 3) (##inline ##vcore.cons (bruijn ##.x.1709 0 0) '())))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->up->vars[3],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Dsubstitute__lambda_D392_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute__lambda_D392_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute__lambda_D392_k372, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1706 0 0) ((bruijn ##.k.1705 1 0) (##inline ##vcore.cons (bruijn ##.args.670 1 3) (##inline ##vcore.cons (bruijn ##.body.671 1 4) '()))) ((bruijn ##.substitute.393 2 9) (close _V10_Dsubstitute__lambda_D392_k373) (bruijn ##.x.668 1 1) (bruijn ##.atom.669 1 2) (bruijn ##.body.671 1 4)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[3],
        VInlineCons2(runtime,
        upenv->vars[4],
        VNULL)));
} else {
    V_CALL(upenv->up->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute__lambda_D392_k373, env)}),
      upenv->vars[1],
      upenv->vars[2],
      upenv->vars[4]);
}
 }
}
static void _V10_Dsubstitute__lambda_D392_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute__lambda_D392_lambda101, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute__lambda_D392_lambda101, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // ((bruijn ##.memtail.387 1 3) (close _V10_Dsubstitute__lambda_D392_k372) (bruijn ##.x.668 0 1) (bruijn ##.args.670 0 3))
    V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute__lambda_D392_k372, env)}),
      _var1,
      _var3);
 }
}
static void _V10_Dsubstitute_D393_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k379, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.675 8 1) (bruijn ##.k.1822 5 0) (bruijn ##.x.1827 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k378, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 10 19) (close _V10_Dsubstitute_D393_k379) 'lambda (bruijn ##.x.1828 0 0))
    V_CALL(VGetArg(upenv, 10-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k379, env)}),
      _V0lambda,
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k377, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.680 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.127.680 0 0))) ((bruijn ##.substitute-lambda.392 8 8) (close _V10_Dsubstitute_D393_k378) (bruijn ##.x.672 7 1) (bruijn ##.atom.673 7 2) (##inline ##vcore.car (bruijn ##.expr.126.678 1 0)) (##inline ##vcore.car (bruijn ##.expr.127.680 0 0))) ((bruijn ##.k.1822 3 0) #f)) ((bruijn ##.k.1822 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 8-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k378, env)}),
      VGetArg(upenv, 7-1, 1),
      VGetArg(upenv, 7-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dsubstitute_D393_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k376, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.678 0 0)) ((close _V10_Dsubstitute_D393_k377) (##inline ##vcore.cdr (bruijn ##.expr.126.678 0 0))) ((bruijn ##.k.1822 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k377, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k375, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1823 0 0) ((close _V10_Dsubstitute_D393_k376) (##inline ##vcore.cdr (bruijn ##.expr.125.677 2 0))) ((bruijn ##.k.1822 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k376, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k374, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.677 1 0)) ((bruijn ##.equal?.383 6 37) (close _V10_Dsubstitute_D393_k375) 'lambda (##inline ##vcore.car (bruijn ##.expr.125.677 1 0))) ((bruijn ##.k.1822 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 6-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k375, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k386, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.675 10 1) (bruijn ##.k.1812 5 0) (bruijn ##.x.1817 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k385, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 12 19) (close _V10_Dsubstitute_D393_k386) 'continuation (bruijn ##.x.1818 0 0))
    V_CALL(VGetArg(upenv, 12-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k386, env)}),
      _V0continuation,
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k384, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.130.685 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.130.685 0 0))) ((bruijn ##.substitute-lambda.392 10 8) (close _V10_Dsubstitute_D393_k385) (bruijn ##.x.672 9 1) (bruijn ##.atom.673 9 2) (##inline ##vcore.car (bruijn ##.expr.129.683 1 0)) (##inline ##vcore.car (bruijn ##.expr.130.685 0 0))) ((bruijn ##.k.1812 3 0) #f)) ((bruijn ##.k.1812 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 10-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k385, env)}),
      VGetArg(upenv, 9-1, 1),
      VGetArg(upenv, 9-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCar2(runtime,
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
static void _V10_Dsubstitute_D393_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k383, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.683 0 0)) ((close _V10_Dsubstitute_D393_k384) (##inline ##vcore.cdr (bruijn ##.expr.129.683 0 0))) ((bruijn ##.k.1812 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k384, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k382, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1813 0 0) ((close _V10_Dsubstitute_D393_k383) (##inline ##vcore.cdr (bruijn ##.expr.128.682 2 0))) ((bruijn ##.k.1812 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k383, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k381, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.682 1 0)) ((bruijn ##.equal?.383 8 37) (close _V10_Dsubstitute_D393_k382) 'continuation (##inline ##vcore.car (bruijn ##.expr.128.682 1 0))) ((bruijn ##.k.1812 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k382, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D690_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k392, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.135.689 5 1) (bruijn ##.k.1801 2 0) (bruijn ##.expr.137.691 3 1) (bruijn ##.x.1802 1 0) (bruijn ##.x.1803 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D690_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k391, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 17 15) (close _V10_Dloop_D690_k392) (bruijn ##.body.134.693 2 3))
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k392, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D690_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k390, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.137.691 1 1))) ((bruijn ##.reverse.361 16 15) (close _V10_Dloop_D690_k391) (bruijn ##.args.133.692 1 2)) ((bruijn ##.k.1801 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k391, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D690_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k396, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.697 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.139.697 0 0))) ((bruijn ##.kk.136.694 3 1) (bruijn ##.k.1793 1 0) (##inline ##vcore.cdr (bruijn ##.expr.137.691 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.138.695 2 0)) (bruijn ##.args.133.692 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.139.697 0 0)) (bruijn ##.body.134.693 6 3))) ((bruijn ##.k.1793 1 0) #f)) ((bruijn ##.k.1793 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D690_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k395, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.695 1 0)) ((close _V10_Dloop_D690_k396) (##inline ##vcore.cdr (bruijn ##.expr.138.695 1 0))) ((bruijn ##.k.1793 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D690_k396, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D690_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k399, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.135.689 9 1) (bruijn ##.k.1788 4 0) (bruijn ##.expr.137.691 7 1) (bruijn ##.x.1790 1 0) (bruijn ##.x.1791 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D690_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k398, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 21 15) (close _V10_Dloop_D690_k399) (bruijn ##.body.134.693 6 3))
    V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k399, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D690_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k397, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D690_k398) (bruijn ##.args.133.692 5 2))
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k398, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D690_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k394, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D690_k395) (close _V10_Dloop_D690_k397))
    V_CALL_FUNC(_V10_Dloop_D690_k395, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k397, env)}));
 }
}
static void _V10_Dloop_D690_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_lambda112, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D690_k394) (##inline ##vcore.car (bruijn ##.expr.137.691 3 1)))
    V_CALL_FUNC(_V10_Dloop_D690_k394, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D690_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_lambda111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_lambda111, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 17 36) (bruijn ##.k.1787 0 0) (close _V10_Dloop_D690_lambda112))
    V_CALL(VGetArg(upenv, 17-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_lambda112, env)}));
 }
}
static void _V10_Dloop_D690_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_k393, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 16 16) (bruijn ##.k.1785 1 0) (close _V10_Dloop_D690_lambda111) (bruijn ##.loop.690 2 0))
    V_CALL(VGetArg(upenv, 16-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_lambda111, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D690_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D690_lambda110, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D690_lambda110, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D690_k390) (close _V10_Dloop_D690_k393))
    V_CALL_FUNC(_V10_Dloop_D690_k390, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_k393, env)}));
 }
}
static void _V10_Dsubstitute_D393_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda109, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D690_lambda110)) ((bruijn ##.loop.690 0 0) (bruijn ##.k.1784 1 0) (##inline ##vcore.cdr (bruijn ##.expr.131.687 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D690_lambda110, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dsubstitute_D393_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 12 36) (bruijn ##.k.1783 0 0) (close _V10_Dsubstitute_D393_lambda109))
    V_CALL(VGetArg(upenv, 12-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda109, env)}));
 }
}
static void _V10_Dsubstitute_D393_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k401, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.675 11 1) (bruijn ##.k.1805 2 0) (bruijn ##.x.1807 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k400, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 13 19) (close _V10_Dsubstitute_D393_k401) 'case-lambda (bruijn ##.x.1808 0 0))
    V_CALL(VGetArg(upenv, 13-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k401, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V10_Dsubstitute_D393_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda114, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda114, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.substitute-lambda.392 12 8) (bruijn ##.k.1809 0 0) (bruijn ##.x.672 11 1) (bruijn ##.atom.673 11 2) (bruijn ##.args.702 0 1) (bruijn ##.body.703 0 2))
    V_CALL(VGetArg(upenv, 12-1, 8), runtime,
      _var0,
      VGetArg(upenv, 11-1, 1),
      VGetArg(upenv, 11-1, 2),
      _var1,
      _var2);
 }
}
static void _V10_Dsubstitute_D393_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda113, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda113, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.699 0 1)) ((bruijn ##.map.363 12 17) (close _V10_Dsubstitute_D393_k400) (close _V10_Dsubstitute_D393_lambda114) (bruijn ##.args.700 0 2) (bruijn ##.body.701 0 3)) ((bruijn ##.k.1805 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k400, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda114, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k389, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1782 0 0) ((bruijn ##.call-with-values.362 11 16) (bruijn ##.k.1781 1 0) (close _V10_Dsubstitute_D393_lambda108) (close _V10_Dsubstitute_D393_lambda113)) ((bruijn ##.k.1781 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 11-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda108, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda113, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k388, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.131.687 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Dsubstitute_D393_k389) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.131.687 1 0))) ((bruijn ##.k.1781 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k389, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k404, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1778 0 0) ((bruijn ##.kk.123.675 10 1) (bruijn ##.k.1777 1 0) (bruijn ##.expr.674 11 3)) ((bruijn ##.k.1777 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 11-1, 3));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k403, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.704 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Dsubstitute_D393_k404) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.140.704 1 0))) ((bruijn ##.k.1777 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k404, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k408, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.706 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.142.706 0 0))) ((bruijn ##.kk.123.675 13 1) (bruijn ##.k.1770 2 0) (bruijn ##.expr.674 14 3)) ((bruijn ##.k.1770 2 0) #f)) ((bruijn ##.k.1770 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 14-1, 3));
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
static void _V10_Dsubstitute_D393_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k407, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1771 0 0) ((close _V10_Dsubstitute_D393_k408) (##inline ##vcore.cdr (bruijn ##.expr.141.705 2 0))) ((bruijn ##.k.1770 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k408, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k406, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.705 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Dsubstitute_D393_k407) 'quote (##inline ##vcore.car (bruijn ##.expr.141.705 1 0))) ((bruijn ##.k.1770 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k407, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D712_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k415, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.148.711 5 1) (bruijn ##.k.1750 2 0) (bruijn ##.expr.150.713 3 1) (bruijn ##.x.1751 1 0) (bruijn ##.x.1752 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D712_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k414, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 24 15) (close _V10_Dloop_D712_k415) (bruijn ##.vals.147.715 2 3))
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k415, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D712_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k413, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.150.713 1 1))) ((bruijn ##.reverse.361 23 15) (close _V10_Dloop_D712_k414) (bruijn ##.args.146.714 1 2)) ((bruijn ##.k.1750 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k414, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D712_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k419, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.719 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.719 0 0))) ((bruijn ##.kk.149.716 3 1) (bruijn ##.k.1742 1 0) (##inline ##vcore.cdr (bruijn ##.expr.150.713 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.151.717 2 0)) (bruijn ##.args.146.714 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.152.719 0 0)) (bruijn ##.vals.147.715 6 3))) ((bruijn ##.k.1742 1 0) #f)) ((bruijn ##.k.1742 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D712_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k418, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.717 1 0)) ((close _V10_Dloop_D712_k419) (##inline ##vcore.cdr (bruijn ##.expr.151.717 1 0))) ((bruijn ##.k.1742 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D712_k419, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D712_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k422, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.148.711 9 1) (bruijn ##.k.1737 4 0) (bruijn ##.expr.150.713 7 1) (bruijn ##.x.1739 1 0) (bruijn ##.x.1740 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D712_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k421, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 28 15) (close _V10_Dloop_D712_k422) (bruijn ##.vals.147.715 6 3))
    V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k422, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D712_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k420, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 27 15) (close _V10_Dloop_D712_k421) (bruijn ##.args.146.714 5 2))
    V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k421, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D712_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k417, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D712_k418) (close _V10_Dloop_D712_k420))
    V_CALL_FUNC(_V10_Dloop_D712_k418, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k420, env)}));
 }
}
static void _V10_Dloop_D712_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_lambda122, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_lambda122, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D712_k417) (##inline ##vcore.car (bruijn ##.expr.150.713 3 1)))
    V_CALL_FUNC(_V10_Dloop_D712_k417, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D712_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_lambda121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 24 36) (bruijn ##.k.1736 0 0) (close _V10_Dloop_D712_lambda122))
    V_CALL(VGetArg(upenv, 24-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_lambda122, env)}));
 }
}
static void _V10_Dloop_D712_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_k416, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 23 16) (bruijn ##.k.1734 1 0) (close _V10_Dloop_D712_lambda121) (bruijn ##.loop.712 2 0))
    V_CALL(VGetArg(upenv, 23-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_lambda121, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D712_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D712_lambda120, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D712_lambda120, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D712_k413) (close _V10_Dloop_D712_k416))
    V_CALL_FUNC(_V10_Dloop_D712_k413, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_k416, env)}));
 }
}
static void _V10_Dsubstitute_D393_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda119, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda119, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D712_lambda120)) ((bruijn ##.loop.712 0 0) (bruijn ##.k.1733 1 0) (##inline ##vcore.car (bruijn ##.expr.144.709 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D712_lambda120, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Dsubstitute_D393_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda118, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 19 36) (bruijn ##.k.1732 0 0) (close _V10_Dsubstitute_D393_lambda119))
    V_CALL(VGetArg(upenv, 19-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda119, env)}));
 }
}
static void _V10_Dsubstitute_D393_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k428, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1760 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1762 1 0) (##inline ##vcore.cons (bruijn ##.x.1764 0 0) '()))))
    V_CALL(upenv->up->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Dsubstitute_D393_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k427, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substitute.393 23 9) (close _V10_Dsubstitute_D393_k428) (bruijn ##.x.672 22 1) (bruijn ##.atom.673 22 2) (##inline ##vcore.car (bruijn ##.expr.153.724 4 0)))
    V_CALL(VGetArg(upenv, 23-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k428, env)}),
      VGetArg(upenv, 22-1, 1),
      VGetArg(upenv, 22-1, 2),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V10_Dsubstitute_D393_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k426, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 23 17) (close _V10_Dsubstitute_D393_k427) (bruijn ##.list.369 23 23) (bruijn ##.args.722 4 2) (bruijn ##.x.1765 0 0))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k427, env)}),
      VGetArg(upenv, 23-1, 23),
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V10_Dsubstitute_D393_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda124, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda124, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.substitute.393 22 9) (bruijn ##.k.1766 0 0) (bruijn ##.x.672 21 1) (bruijn ##.atom.673 21 2) (bruijn ##.val.726 0 1))
    V_CALL(VGetArg(upenv, 22-1, 9), runtime,
      _var0,
      VGetArg(upenv, 21-1, 1),
      VGetArg(upenv, 21-1, 2),
      _var1);
 }
}
static void _V10_Dsubstitute_D393_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k425, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1759 1 0) ((bruijn ##.k.1760 0 0) (bruijn ##.expr.674 20 3)) ((bruijn ##.map.363 22 17) (close _V10_Dsubstitute_D393_k426) (close _V10_Dsubstitute_D393_lambda124) (bruijn ##.vals.723 3 3)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 20-1, 3));
} else {
    V_CALL(VGetArg(upenv, 22-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k426, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda124, env)}),
      upenv->up->up->vars[3]);
}
 }
}
static void _V10_Dsubstitute_D393_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k429, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.675 19 1) (bruijn ##.k.1754 3 0) (bruijn ##.x.1758 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k424, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k425) (close _V10_Dsubstitute_D393_k429))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k425, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k429, env)}));
 }
}
static void _V10_Dsubstitute_D393_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k423, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.724 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.153.724 0 0))) ((bruijn ##.memtail.387 19 3) (close _V10_Dsubstitute_D393_k424) (bruijn ##.x.672 18 1) (bruijn ##.args.722 1 2)) ((bruijn ##.k.1754 1 0) #f)) ((bruijn ##.k.1754 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k424, env)}),
      VGetArg(upenv, 18-1, 1),
      upenv->vars[2]);
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
static void _V10_Dsubstitute_D393_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda123, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda123, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.721 0 1)) ((close _V10_Dsubstitute_D393_k423) (##inline ##vcore.cdr (bruijn ##.expr.144.709 1 0))) ((bruijn ##.k.1754 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k423, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k412, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.709 0 0)) ((bruijn ##.call-with-values.362 18 16) (bruijn ##.k.1729 2 0) (close _V10_Dsubstitute_D393_lambda118) (close _V10_Dsubstitute_D393_lambda123)) ((bruijn ##.k.1729 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 18-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda118, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda123, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k411, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1730 0 0) ((close _V10_Dsubstitute_D393_k412) (##inline ##vcore.cdr (bruijn ##.expr.143.708 2 0))) ((bruijn ##.k.1729 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dsubstitute_D393_k412, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k410, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.143.708 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Dsubstitute_D393_k411) 'letrec (##inline ##vcore.car (bruijn ##.expr.143.708 1 0))) ((bruijn ##.k.1729 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k411, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k434, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.123.675 18 1) (bruijn ##.k.1724 3 0) (bruijn ##.x.1725 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k433, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 20 19) (close _V10_Dsubstitute_D393_k434) (bruijn ##.x.1726 1 0) (bruijn ##.x.1727 0 0))
    V_CALL(VGetArg(upenv, 20-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k434, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k432, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substitute.393 18 9) (close _V10_Dsubstitute_D393_k433) (bruijn ##.x.672 17 1) (bruijn ##.atom.673 17 2) (##inline ##vcore.cdr (bruijn ##.expr.154.727 2 0)))
    V_CALL(VGetArg(upenv, 18-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k433, env)}),
      VGetArg(upenv, 17-1, 1),
      VGetArg(upenv, 17-1, 2),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dsubstitute_D393_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k431, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.727 1 0)) ((bruijn ##.substitute.393 17 9) (close _V10_Dsubstitute_D393_k432) (bruijn ##.x.672 16 1) (bruijn ##.atom.673 16 2) (##inline ##vcore.car (bruijn ##.expr.154.727 1 0))) ((bruijn ##.k.1724 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k432, env)}),
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsubstitute_D393_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k437, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1721 1 0) ((bruijn ##.k.1722 0 0) (bruijn ##.atom.673 19 2)) ((bruijn ##.k.1722 0 0) (bruijn ##.y.730 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      VGetArg(upenv, 19-1, 2));
} else {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
}
 }
}
static void _V10_Dsubstitute_D393_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k439, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.368 22 22) (bruijn ##.k.1711 19 0) (##string ##.string.2604))
    V_CALL(VGetArg(upenv, 22-1, 22), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10_Dstring_D2604.sym, VPOINTER_OTHER));
 }
}
static void _V10_Dsubstitute_D393_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k438, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.123.675 18 1) (close _V10_Dsubstitute_D393_k439) (bruijn ##.x.1720 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k439, env)}),
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k436, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k437) (close _V10_Dsubstitute_D393_k438))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k437, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k438, env)}));
 }
}
static void _V10_Dsubstitute_D393_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda126, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.375 19 29) (close _V10_Dsubstitute_D393_k436) (bruijn ##.x.672 17 1) (bruijn ##.y.730 0 0))
    V_CALL(VGetArg(upenv, 19-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k436, env)}),
      VGetArg(upenv, 17-1, 1),
      _var0);
 }
}
static void _V10_Dsubstitute_D393_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k435, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda126) (bruijn ##.input.124.676 14 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda126, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Dsubstitute_D393_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k431) (close _V10_Dsubstitute_D393_k435))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k431, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k435, env)}));
 }
}
static void _V10_Dsubstitute_D393_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k430, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda125) (bruijn ##.input.124.676 12 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda125, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Dsubstitute_D393_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k410) (close _V10_Dsubstitute_D393_k430))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k410, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k430, env)}));
 }
}
static void _V10_Dsubstitute_D393_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k409, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda117) (bruijn ##.input.124.676 10 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda117, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dsubstitute_D393_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k406) (close _V10_Dsubstitute_D393_k409))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k406, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k409, env)}));
 }
}
static void _V10_Dsubstitute_D393_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k405, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda116) (bruijn ##.input.124.676 8 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda116, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dsubstitute_D393_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k403) (close _V10_Dsubstitute_D393_k405))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k403, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k405, env)}));
 }
}
static void _V10_Dsubstitute_D393_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k402, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda115) (bruijn ##.input.124.676 6 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda115, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dsubstitute_D393_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k388) (close _V10_Dsubstitute_D393_k402))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k388, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k402, env)}));
 }
}
static void _V10_Dsubstitute_D393_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k387, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda107) (bruijn ##.input.124.676 4 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda107, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dsubstitute_D393_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda106, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k381) (close _V10_Dsubstitute_D393_k387))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k381, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k387, env)}));
 }
}
static void _V10_Dsubstitute_D393_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_k380, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda106) (bruijn ##.input.124.676 2 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda106, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dsubstitute_D393_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_k374) (close _V10_Dsubstitute_D393_k380))
    V_CALL_FUNC(_V10_Dsubstitute_D393_k374, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_k380, env)}));
 }
}
static void _V10_Dsubstitute_D393_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsubstitute_D393_lambda105) (bruijn ##.input.124.676 0 0))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda105, env, runtime,
      _var0);
 }
}
static void _V10_Dsubstitute_D393_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda103, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda103, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dsubstitute_D393_lambda104) (bruijn ##.expr.674 1 3))
    V_CALL_FUNC(_V10_Dsubstitute_D393_lambda104, env, runtime,
      upenv->vars[3]);
 }
}
static void _V10_Dsubstitute_D393_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D393_lambda102, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute_D393_lambda102, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.call/cc.382 2 36) (bruijn ##.k.1710 0 0) (close _V10_Dsubstitute_D393_lambda103))
    V_CALL(upenv->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda103, env)}));
 }
}
static void _V10_Diter_D735_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k445, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.155.737 7 1) (bruijn ##.k.1949 4 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.158.740 2 0)) (##inline ##vcore.cons (bruijn ##.x.1957 0 0) '()))))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter_D735_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k444, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.742 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.159.742 0 0))) ((bruijn ##.iter.735 9 0) (close _V10_Diter_D735_k445) (##inline ##vcore.car (bruijn ##.expr.159.742 0 0))) ((bruijn ##.k.1949 3 0) #f)) ((bruijn ##.k.1949 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k445, env)}),
      VInlineCar2(runtime,
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
static void _V10_Diter_D735_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k443, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.740 0 0)) ((close _V10_Diter_D735_k444) (##inline ##vcore.cdr (bruijn ##.expr.158.740 0 0))) ((bruijn ##.k.1949 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter_D735_k444, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k442, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1950 0 0) ((close _V10_Diter_D735_k443) (##inline ##vcore.cdr (bruijn ##.expr.157.739 2 0))) ((bruijn ##.k.1949 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D735_k443, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k441, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.739 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Diter_D735_k442) 'lambda (##inline ##vcore.car (bruijn ##.expr.157.739 1 0))) ((bruijn ##.k.1949 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k442, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k451, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.155.737 9 1) (bruijn ##.k.1937 4 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.161.745 2 0)) (##inline ##vcore.cons (bruijn ##.x.1945 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter_D735_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k450, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.162.747 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.162.747 0 0))) ((bruijn ##.iter.735 11 0) (close _V10_Diter_D735_k451) (##inline ##vcore.car (bruijn ##.expr.162.747 0 0))) ((bruijn ##.k.1937 3 0) #f)) ((bruijn ##.k.1937 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k451, env)}),
      VInlineCar2(runtime,
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
static void _V10_Diter_D735_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k449, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.161.745 0 0)) ((close _V10_Diter_D735_k450) (##inline ##vcore.cdr (bruijn ##.expr.161.745 0 0))) ((bruijn ##.k.1937 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Diter_D735_k450, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k448, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1938 0 0) ((close _V10_Diter_D735_k449) (##inline ##vcore.cdr (bruijn ##.expr.160.744 2 0))) ((bruijn ##.k.1937 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D735_k449, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k447, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.744 1 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Diter_D735_k448) 'continuation (##inline ##vcore.car (bruijn ##.expr.160.744 1 0))) ((bruijn ##.k.1937 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k448, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D752_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k457, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.167.751 5 1) (bruijn ##.k.1924 2 0) (bruijn ##.expr.169.753 3 1) (bruijn ##.x.1925 1 0) (bruijn ##.x.1926 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D752_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k456, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D752_k457) (bruijn ##.body.166.755 2 3))
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k457, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D752_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k455, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.169.753 1 1))) ((bruijn ##.reverse.361 19 15) (close _V10_Dloop_D752_k456) (bruijn ##.args.165.754 1 2)) ((bruijn ##.k.1924 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k456, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D752_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k461, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.759 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.171.759 0 0))) ((bruijn ##.kk.168.756 3 1) (bruijn ##.k.1916 1 0) (##inline ##vcore.cdr (bruijn ##.expr.169.753 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.170.757 2 0)) (bruijn ##.args.165.754 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.171.759 0 0)) (bruijn ##.body.166.755 6 3))) ((bruijn ##.k.1916 1 0) #f)) ((bruijn ##.k.1916 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D752_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k460, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.170.757 1 0)) ((close _V10_Dloop_D752_k461) (##inline ##vcore.cdr (bruijn ##.expr.170.757 1 0))) ((bruijn ##.k.1916 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D752_k461, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D752_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k464, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.167.751 9 1) (bruijn ##.k.1911 4 0) (bruijn ##.expr.169.753 7 1) (bruijn ##.x.1913 1 0) (bruijn ##.x.1914 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D752_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k463, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 24 15) (close _V10_Dloop_D752_k464) (bruijn ##.body.166.755 6 3))
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k464, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D752_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k462, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 23 15) (close _V10_Dloop_D752_k463) (bruijn ##.args.165.754 5 2))
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k463, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D752_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k459, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D752_k460) (close _V10_Dloop_D752_k462))
    V_CALL_FUNC(_V10_Dloop_D752_k460, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k462, env)}));
 }
}
static void _V10_Dloop_D752_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_lambda138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_lambda138, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D752_k459) (##inline ##vcore.car (bruijn ##.expr.169.753 3 1)))
    V_CALL_FUNC(_V10_Dloop_D752_k459, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D752_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_lambda137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_lambda137, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 20 36) (bruijn ##.k.1910 0 0) (close _V10_Dloop_D752_lambda138))
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_lambda138, env)}));
 }
}
static void _V10_Dloop_D752_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_k458, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 19 16) (bruijn ##.k.1908 1 0) (close _V10_Dloop_D752_lambda137) (bruijn ##.loop.752 2 0))
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_lambda137, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D752_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D752_lambda136, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D752_lambda136, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D752_k455) (close _V10_Dloop_D752_k458))
    V_CALL_FUNC(_V10_Dloop_D752_k455, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_k458, env)}));
 }
}
static void _V10_Diter_D735_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda135, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D752_lambda136)) ((bruijn ##.loop.752 0 0) (bruijn ##.k.1907 1 0) (##inline ##vcore.cdr (bruijn ##.expr.163.749 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D752_lambda136, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Diter_D735_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda134, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 15 36) (bruijn ##.k.1906 0 0) (close _V10_Diter_D735_lambda135))
    V_CALL(VGetArg(upenv, 15-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda135, env)}));
 }
}
static void _V10_Diter_D735_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k466, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.155.737 11 1) (bruijn ##.k.1928 2 0) (bruijn ##.x.1930 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D735_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k465, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 16 19) (close _V10_Diter_D735_k466) 'case-lambda (bruijn ##.x.1931 0 0))
    V_CALL(VGetArg(upenv, 16-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k466, env)}),
      _V0case__lambda,
      _var0);
 }
}
static void _V10_Diter_D735_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k467, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1932 1 0) (##inline ##vcore.cons (bruijn ##.args.764 1 1) (##inline ##vcore.cons (bruijn ##.x.1934 0 0) '())))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Diter_D735_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda140, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda140, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.iter.735 13 0) (close _V10_Diter_D735_k467) (bruijn ##.body.765 0 2))
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k467, env)}),
      _var2);
 }
}
static void _V10_Diter_D735_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda139, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda139, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.761 0 1)) ((bruijn ##.map.363 15 17) (close _V10_Diter_D735_k465) (close _V10_Diter_D735_lambda140) (bruijn ##.args.762 0 2) (bruijn ##.body.763 0 3)) ((bruijn ##.k.1928 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 15-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k465, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda140, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k454, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1905 0 0) ((bruijn ##.call-with-values.362 14 16) (bruijn ##.k.1904 1 0) (close _V10_Diter_D735_lambda134) (close _V10_Diter_D735_lambda139)) ((bruijn ##.k.1904 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda134, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda139, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k453, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.163.749 1 0)) ((bruijn ##.equal?.383 13 37) (close _V10_Diter_D735_k454) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.163.749 1 0))) ((bruijn ##.k.1904 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k454, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k470, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1901 0 0) ((bruijn ##.kk.155.737 10 1) (bruijn ##.k.1900 1 0) (bruijn ##.expr.736 12 1)) ((bruijn ##.k.1900 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k469, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.766 1 0)) ((bruijn ##.equal?.383 15 37) (close _V10_Diter_D735_k470) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.172.766 1 0))) ((bruijn ##.k.1900 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k470, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k474, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.174.768 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.174.768 0 0))) ((bruijn ##.kk.155.737 13 1) (bruijn ##.k.1893 2 0) (bruijn ##.expr.736 15 1)) ((bruijn ##.k.1893 2 0) #f)) ((bruijn ##.k.1893 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 15-1, 1));
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
static void _V10_Diter_D735_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k473, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1894 0 0) ((close _V10_Diter_D735_k474) (##inline ##vcore.cdr (bruijn ##.expr.173.767 2 0))) ((bruijn ##.k.1893 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D735_k474, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k472, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.767 1 0)) ((bruijn ##.equal?.383 17 37) (close _V10_Diter_D735_k473) 'quote (##inline ##vcore.car (bruijn ##.expr.173.767 1 0))) ((bruijn ##.k.1893 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k473, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D774_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k481, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.180.773 5 1) (bruijn ##.k.1875 2 0) (bruijn ##.expr.182.775 3 1) (bruijn ##.x.1876 1 0) (bruijn ##.x.1877 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D774_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k480, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 27 15) (close _V10_Dloop_D774_k481) (bruijn ##.vals.179.777 2 3))
    V_CALL(VGetArg(upenv, 27-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k481, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D774_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k479, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.182.775 1 1))) ((bruijn ##.reverse.361 26 15) (close _V10_Dloop_D774_k480) (bruijn ##.args.178.776 1 2)) ((bruijn ##.k.1875 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k480, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D774_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k485, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.184.781 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.184.781 0 0))) ((bruijn ##.kk.181.778 3 1) (bruijn ##.k.1867 1 0) (##inline ##vcore.cdr (bruijn ##.expr.182.775 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.183.779 2 0)) (bruijn ##.args.178.776 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.184.781 0 0)) (bruijn ##.vals.179.777 6 3))) ((bruijn ##.k.1867 1 0) #f)) ((bruijn ##.k.1867 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D774_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k484, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.183.779 1 0)) ((close _V10_Dloop_D774_k485) (##inline ##vcore.cdr (bruijn ##.expr.183.779 1 0))) ((bruijn ##.k.1867 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D774_k485, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D774_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k488, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.180.773 9 1) (bruijn ##.k.1862 4 0) (bruijn ##.expr.182.775 7 1) (bruijn ##.x.1864 1 0) (bruijn ##.x.1865 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D774_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k487, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 31 15) (close _V10_Dloop_D774_k488) (bruijn ##.vals.179.777 6 3))
    V_CALL(VGetArg(upenv, 31-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k488, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D774_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k486, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 30 15) (close _V10_Dloop_D774_k487) (bruijn ##.args.178.776 5 2))
    V_CALL(VGetArg(upenv, 30-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k487, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D774_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k483, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D774_k484) (close _V10_Dloop_D774_k486))
    V_CALL_FUNC(_V10_Dloop_D774_k484, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k486, env)}));
 }
}
static void _V10_Dloop_D774_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_lambda148, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_lambda148, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D774_k483) (##inline ##vcore.car (bruijn ##.expr.182.775 3 1)))
    V_CALL_FUNC(_V10_Dloop_D774_k483, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D774_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_lambda147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_lambda147, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 27 36) (bruijn ##.k.1861 0 0) (close _V10_Dloop_D774_lambda148))
    V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_lambda148, env)}));
 }
}
static void _V10_Dloop_D774_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_k482, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 26 16) (bruijn ##.k.1859 1 0) (close _V10_Dloop_D774_lambda147) (bruijn ##.loop.774 2 0))
    V_CALL(VGetArg(upenv, 26-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_lambda147, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D774_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D774_lambda146, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D774_lambda146, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D774_k479) (close _V10_Dloop_D774_k482))
    V_CALL_FUNC(_V10_Dloop_D774_k479, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_k482, env)}));
 }
}
static void _V10_Diter_D735_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda145, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D774_lambda146)) ((bruijn ##.loop.774 0 0) (bruijn ##.k.1858 1 0) (##inline ##vcore.car (bruijn ##.expr.176.771 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D774_lambda146, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Diter_D735_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda144, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 22 36) (bruijn ##.k.1857 0 0) (close _V10_Diter_D735_lambda145))
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda145, env)}));
 }
}
static void _V10_Diter_D735_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k492, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.155.737 20 1) (bruijn ##.k.1879 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1885 1 0) (##inline ##vcore.cons (bruijn ##.x.1887 0 0) '()))))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Diter_D735_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k491, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.735 22 0) (close _V10_Diter_D735_k492) (##inline ##vcore.car (bruijn ##.expr.185.786 2 0)))
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k492, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter_D735_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k490, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 24 17) (close _V10_Diter_D735_k491) (bruijn ##.list.369 24 23) (bruijn ##.args.784 2 2) (bruijn ##.x.1888 0 0))
    V_CALL(VGetArg(upenv, 24-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k491, env)}),
      VGetArg(upenv, 24-1, 23),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Diter_D735_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda150, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda150, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.iter.735 21 0) (bruijn ##.k.1889 0 0) (bruijn ##.val.788 0 1))
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      _var0,
      _var1);
 }
}
static void _V10_Diter_D735_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k489, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.185.786 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.185.786 0 0))) ((bruijn ##.map.363 23 17) (close _V10_Diter_D735_k490) (close _V10_Diter_D735_lambda150) (bruijn ##.vals.785 1 3)) ((bruijn ##.k.1879 1 0) #f)) ((bruijn ##.k.1879 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k490, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda150, env)}),
      upenv->vars[3]);
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
static void _V10_Diter_D735_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda149, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda149, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.783 0 1)) ((close _V10_Diter_D735_k489) (##inline ##vcore.cdr (bruijn ##.expr.176.771 1 0))) ((bruijn ##.k.1879 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Diter_D735_k489, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k478, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.771 0 0)) ((bruijn ##.call-with-values.362 21 16) (bruijn ##.k.1854 2 0) (close _V10_Diter_D735_lambda144) (close _V10_Diter_D735_lambda149)) ((bruijn ##.k.1854 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda144, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda149, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k477, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1855 0 0) ((close _V10_Diter_D735_k478) (##inline ##vcore.cdr (bruijn ##.expr.175.770 2 0))) ((bruijn ##.k.1854 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Diter_D735_k478, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k476, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.770 1 0)) ((bruijn ##.equal?.383 19 37) (close _V10_Diter_D735_k477) 'letrec (##inline ##vcore.car (bruijn ##.expr.175.770 1 0))) ((bruijn ##.k.1854 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k477, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k497, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.155.737 18 1) (bruijn ##.k.1849 3 0) (bruijn ##.x.1850 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D735_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k496, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 23 19) (close _V10_Diter_D735_k497) (bruijn ##.x.1851 1 0) (bruijn ##.x.1852 0 0))
    V_CALL(VGetArg(upenv, 23-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k497, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter_D735_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k495, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.735 19 0) (close _V10_Diter_D735_k496) (##inline ##vcore.cdr (bruijn ##.expr.186.789 2 0)))
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k496, env)}),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Diter_D735_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k494, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.186.789 1 0)) ((bruijn ##.iter.735 18 0) (close _V10_Diter_D735_k495) (##inline ##vcore.car (bruijn ##.expr.186.789 1 0))) ((bruijn ##.k.1849 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k495, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D735_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k502, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1845 2 0) (bruijn ##.atom.732 24 2))
    V_CALL(upenv->up->vars[0], runtime,
      VGetArg(upenv, 24-1, 2));
 }
}
static void _V10_Diter_D735_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k501, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter_D735_k502) (bruijn ##.n.734 23 4) (bruijn ##.x.1847 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k502, env)}),
      VEncodeInt(23l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V10_Diter_D735_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k500, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1844 1 0) ((bruijn ##.-.380 24 34) (close _V10_Diter_D735_k501) (bruijn ##.n.734 22 4) 1) ((bruijn ##.k.1845 0 0) (bruijn ##.y.792 2 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 24-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k501, env)}),
      VGetArg(upenv, 22-1, 4),
      VEncodeInt(1l));
} else {
    V_CALL(_var0, runtime,
      upenv->up->vars[0]);
}
 }
}
static void _V10_Diter_D735_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k504, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.368 25 22) (bruijn ##.k.1834 19 0) (##string ##.string.2604))
    V_CALL(VGetArg(upenv, 25-1, 22), runtime,
      VGetArg(upenv, 19-1, 0),
      VEncodePointer(&_V10_Dstring_D2604.sym, VPOINTER_OTHER));
 }
}
static void _V10_Diter_D735_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k503, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.kk.155.737 18 1) (close _V10_Diter_D735_k504) (bruijn ##.x.1843 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k504, env)}),
      _var0);
 }
}
static void _V10_Diter_D735_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k499, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k500) (close _V10_Diter_D735_k503))
    V_CALL_FUNC(_V10_Diter_D735_k500, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k503, env)}));
 }
}
static void _V10_Diter_D735_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda152, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.375 22 29) (close _V10_Diter_D735_k499) (bruijn ##.x.731 20 1) (bruijn ##.y.792 0 0))
    V_CALL(VGetArg(upenv, 22-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k499, env)}),
      VGetArg(upenv, 20-1, 1),
      _var0);
 }
}
static void _V10_Diter_D735_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k498, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda152) (bruijn ##.input.156.738 14 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda152, env, runtime,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Diter_D735_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda151, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k494) (close _V10_Diter_D735_k498))
    V_CALL_FUNC(_V10_Diter_D735_k494, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k498, env)}));
 }
}
static void _V10_Diter_D735_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k493, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda151) (bruijn ##.input.156.738 12 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda151, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Diter_D735_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda143, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k476) (close _V10_Diter_D735_k493))
    V_CALL_FUNC(_V10_Diter_D735_k476, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k493, env)}));
 }
}
static void _V10_Diter_D735_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k475, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda143) (bruijn ##.input.156.738 10 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda143, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Diter_D735_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda142, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k472) (close _V10_Diter_D735_k475))
    V_CALL_FUNC(_V10_Diter_D735_k472, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k475, env)}));
 }
}
static void _V10_Diter_D735_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k471, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda142) (bruijn ##.input.156.738 8 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda142, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Diter_D735_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda141, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k469) (close _V10_Diter_D735_k471))
    V_CALL_FUNC(_V10_Diter_D735_k469, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k471, env)}));
 }
}
static void _V10_Diter_D735_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k468, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda141) (bruijn ##.input.156.738 6 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda141, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Diter_D735_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda133, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k453) (close _V10_Diter_D735_k468))
    V_CALL_FUNC(_V10_Diter_D735_k453, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k468, env)}));
 }
}
static void _V10_Diter_D735_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k452, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda133) (bruijn ##.input.156.738 4 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda133, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Diter_D735_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda132, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k447) (close _V10_Diter_D735_k452))
    V_CALL_FUNC(_V10_Diter_D735_k447, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k452, env)}));
 }
}
static void _V10_Diter_D735_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k446, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda132) (bruijn ##.input.156.738 2 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda132, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter_D735_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda131, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_k441) (close _V10_Diter_D735_k446))
    V_CALL_FUNC(_V10_Diter_D735_k441, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k446, env)}));
 }
}
static void _V10_Diter_D735_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda130, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D735_lambda131) (bruijn ##.input.156.738 0 0))
    V_CALL_FUNC(_V10_Diter_D735_lambda131, env, runtime,
      _var0);
 }
}
static void _V10_Diter_D735_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda129, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda129, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter_D735_lambda130) (bruijn ##.expr.736 2 1))
    V_CALL_FUNC(_V10_Diter_D735_lambda130, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Diter_D735_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_k440, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1833 0 0) ((bruijn ##.k.1832 1 0) (bruijn ##.expr.736 1 1)) ((bruijn ##.call/cc.382 5 36) (bruijn ##.k.1832 1 0) (close _V10_Diter_D735_lambda129)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda129, env)}));
}
 }
}
static void _V10_Diter_D735_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D735_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D735_lambda128, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.=.373 4 27) (close _V10_Diter_D735_k440) (bruijn ##.n.734 2 4) 0)
    V_CALL(upenv->up->up->up->vars[27], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_k440, env)}),
      upenv->up->vars[4],
      VEncodeInt(0l));
 }
}
static void _V10_Dsubstitute2_D394_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute2_D394_lambda127, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsubstitute2_D394_lambda127, runtime, upenv, 5, argc, _var0, _var1, _var2, _var3, _var4) {
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Diter_D735_lambda128)) ((bruijn ##.iter.735 0 0) (bruijn ##.k.1831 1 0) (bruijn ##.expr.733 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D735_lambda128, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[3]);
    }
 }
}
static void _V10_Dspecial__apply_Q_D395_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dspecial__apply_Q_D395_lambda153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dspecial__apply_Q_D395_lambda153, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.memv.378 2 32) (bruijn ##.k.1960 0 0) (bruijn ##.tok.793 0 1) (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'letrec '())))
    V_CALL(upenv->up->vars[32], runtime,
      _var0,
      _var1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)));
 }
}
static void _V10_Dloop_D795_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D795_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D795_k507, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.795 4 0) (bruijn ##.k.1964 3 0) (bruijn ##.x.1966 1 0) (bruijn ##.x.1967 0 0))
    V_CALL(upenv->up->up->up->vars[0], runtime,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D795_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D795_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D795_k506, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.358 6 12) (close _V10_Dloop_D795_k507) (bruijn ##.len.797 2 2) 1)
    V_CALL(VGetArg(upenv, 6-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D795_k507, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
 }
}
static void _V10_Dloop_D795_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D795_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D795_k505, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1965 0 0) ((bruijn ##.cdr.355 5 9) (close _V10_Dloop_D795_k506) (bruijn ##.lst.796 1 1)) ((bruijn ##.k.1964 1 0) (bruijn ##.len.797 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D795_k506, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      upenv->vars[2]);
}
 }
}
static void _V10_Dloop_D795_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D795_lambda155, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D795_lambda155, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.377 4 31) (close _V10_Dloop_D795_k505) (bruijn ##.lst.796 0 1))
    V_CALL(upenv->up->up->up->vars[31], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D795_k505, env)}),
      _var1);
 }
}
static void _V10_Dtaillength_D396_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtaillength_D396_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dtaillength_D396_lambda154, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D795_lambda155)) ((bruijn ##.loop.795 0 0) (bruijn ##.k.1963 1 0) (bruijn ##.lst.794 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D795_lambda155, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dadd__ref_B_D397_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D397_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__ref_B_D397_k509, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.hash-table-set!.381 4 35) (bruijn ##.k.1968 2 0) (bruijn ##.refs.798 2 1) (bruijn ##.x.799 2 2) (bruijn ##.x.1969 0 0))
    V_CALL(upenv->up->up->up->vars[35], runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Dadd__ref_B_D397_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D397_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__ref_B_D397_k508, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.358 3 12) (close _V10_Dadd__ref_B_D397_k509) (bruijn ##.n0.801 0 0) (bruijn ##.n.800 1 3))
    V_CALL(upenv->up->up->vars[12], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D397_k509, env)}),
      _var0,
      upenv->vars[3]);
 }
}
static void _V10_Dadd__ref_B_D397_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D397_lambda157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__ref_B_D397_lambda157, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1970 0 0) 0)
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
 }
}
static void _V10_Dadd__ref_B_D397_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D397_lambda156, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__ref_B_D397_lambda156, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.hash-table-ref.374 2 28) (close _V10_Dadd__ref_B_D397_k508) (bruijn ##.refs.798 0 1) (bruijn ##.x.799 0 2) (close _V10_Dadd__ref_B_D397_lambda157))
    V_CALL(upenv->up->vars[28], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D397_k508, env)}),
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D397_lambda157, env)}));
 }
}
static void _V10_Dsub__ref_B_D398_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_k512, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.1974 1 0) ((bruijn ##.error.368 5 22) (bruijn ##.k.1975 0 0) (##string ##.string.2605) (bruijn ##.x.803 3 2) (bruijn ##.n0.805 2 0) (bruijn ##.n.804 3 3)) ((bruijn ##.k.1975 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D2605.sym, VPOINTER_OTHER),
      upenv->up->up->vars[2],
      upenv->up->vars[0],
      upenv->up->up->vars[3]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dsub__ref_B_D398_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_k514, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.hash-table-set!.381 6 35) (bruijn ##.k.1971 4 0) (bruijn ##.refs.802 4 1) (bruijn ##.x.803 4 2) (bruijn ##.x.1973 0 0))
    V_CALL(VGetArg(upenv, 6-1, 35), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2],
      _var0);
 }
}
static void _V10_Dsub__ref_B_D398_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_k513, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.380 5 34) (close _V10_Dsub__ref_B_D398_k514) (bruijn ##.n0.805 2 0) (bruijn ##.n.804 3 3))
    V_CALL(VGetArg(upenv, 5-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_k514, env)}),
      upenv->up->vars[0],
      upenv->up->up->vars[3]);
 }
}
static void _V10_Dsub__ref_B_D398_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_k511, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsub__ref_B_D398_k512) (close _V10_Dsub__ref_B_D398_k513))
    V_CALL_FUNC(_V10_Dsub__ref_B_D398_k512, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_k513, env)}));
 }
}
static void _V10_Dsub__ref_B_D398_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_k510, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>.353 3 7) (close _V10_Dsub__ref_B_D398_k511) (bruijn ##.n.804 1 3) (bruijn ##.n0.805 0 0))
    V_CALL(upenv->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_k511, env)}),
      upenv->vars[3],
      _var0);
 }
}
static void _V10_Dsub__ref_B_D398_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_lambda159, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.1976 0 0) 0)
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
 }
}
static void _V10_Dsub__ref_B_D398_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D398_lambda158, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__ref_B_D398_lambda158, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.hash-table-ref.374 2 28) (close _V10_Dsub__ref_B_D398_k510) (bruijn ##.refs.802 0 1) (bruijn ##.x.803 0 2) (close _V10_Dsub__ref_B_D398_lambda159))
    V_CALL(upenv->up->vars[28], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_k510, env)}),
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_lambda159, env)}));
 }
}
static void _V10_Dadd__refs_B_D399_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__refs_B_D399_k518, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.add-ref!.397 6 13) (bruijn ##.k.1979 3 0) (bruijn ##.arefs.808 5 1) (bruijn ##.x.1980 2 0) (bruijn ##.x.1981 0 0))
    V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dadd__refs_B_D399_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__refs_B_D399_k517, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.*.354 6 8) (close _V10_Dadd__refs_B_D399_k518) (bruijn ##.n.810 4 3) (bruijn ##.x.1982 0 0))
    V_CALL(VGetArg(upenv, 6-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_k518, env)}),
      upenv->up->up->up->vars[3],
      _var0);
 }
}
static void _V10_Dadd__refs_B_D399_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__refs_B_D399_k516, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 5 9) (close _V10_Dadd__refs_B_D399_k517) (bruijn ##.keyval.811 1 1))
    V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_k517, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dadd__refs_B_D399_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_lambda161, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__refs_B_D399_lambda161, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.379 4 33) (close _V10_Dadd__refs_B_D399_k516) (bruijn ##.keyval.811 0 1))
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_k516, env)}),
      _var1);
 }
}
static void _V10_Dadd__refs_B_D399_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dadd__refs_B_D399_k515, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.357 3 11) (bruijn ##.k.1978 1 0) (close _V10_Dadd__refs_B_D399_lambda161) (bruijn ##.x.1983 0 0))
    V_CALL(upenv->up->up->vars[11], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_lambda161, env)}),
      _var0);
 }
}
__attribute__((used)) static void _V20CaseError__V10_Dadd__refs_B_D399_lambda160(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dadd__refs_B_D399_lambda160 #t (3 ((bruijn ##.add-refs!.399 1 15) (bruijn ##.k.1977 0 0) (bruijn ##.arefs.806 0 1) (bruijn ##.brefs.807 0 2) 1)) (4 ((bruijn ##.hash-table->alist.356 2 10) (close _V10_Dadd__refs_B_D399_k515) (bruijn ##.brefs.809 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D399_lambda160, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dadd__refs_B_D399_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case0__V10_Dadd__refs_B_D399_lambda160, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // ((bruijn ##.add-refs!.399 1 15) (bruijn ##.k.1977 0 0) (bruijn ##.arefs.806 0 1) (bruijn ##.brefs.807 0 2) 1)
    V_CALL(upenv->vars[15], runtime,
      _var0,
      _var1,
      _var2,
      VEncodeInt(1l));
 }
}
__attribute__((used)) static void _V20Case1__V10_Dadd__refs_B_D399_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 V_GC_CHECK2_VARARGS((VFunc)_V20Case1__V10_Dadd__refs_B_D399_lambda160, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.hash-table->alist.356 2 10) (close _V10_Dadd__refs_B_D399_k515) (bruijn ##.brefs.809 0 2))
    V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_k515, env)}),
      _var2);
 }
}
void _V10_Dadd__refs_B_D399_lambda160(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dadd__refs_B_D399_lambda160, @function\n"
#endif
"_V10_Dadd__refs_B_D399_lambda160:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dadd__refs_B_D399_lambda160\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dadd__refs_B_D399_lambda160\n"
"    jmp _V20CaseError__V10_Dadd__refs_B_D399_lambda160\n"
);
static void _V10_Dsub__refs_B_D400_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D400_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__refs_B_D400_k521, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sub-ref!.398 5 14) (bruijn ##.k.1985 2 0) (bruijn ##.arefs.812 4 1) (bruijn ##.x.1986 1 0) (bruijn ##.x.1987 0 0))
    V_CALL(VGetArg(upenv, 5-1, 14), runtime,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dsub__refs_B_D400_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D400_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__refs_B_D400_k520, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.355 5 9) (close _V10_Dsub__refs_B_D400_k521) (bruijn ##.keyval.814 1 1))
    V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D400_k521, env)}),
      upenv->vars[1]);
 }
}
static void _V10_Dsub__refs_B_D400_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D400_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__refs_B_D400_lambda163, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.379 4 33) (close _V10_Dsub__refs_B_D400_k520) (bruijn ##.keyval.814 0 1))
    V_CALL(upenv->up->up->up->vars[33], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D400_k520, env)}),
      _var1);
 }
}
static void _V10_Dsub__refs_B_D400_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D400_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__refs_B_D400_k519, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.357 3 11) (bruijn ##.k.1984 1 0) (close _V10_Dsub__refs_B_D400_lambda163) (bruijn ##.x.1988 0 0))
    V_CALL(upenv->up->up->vars[11], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D400_lambda163, env)}),
      _var0);
 }
}
static void _V10_Dsub__refs_B_D400_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D400_lambda162, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dsub__refs_B_D400_lambda162, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.hash-table->alist.356 2 10) (close _V10_Dsub__refs_B_D400_k519) (bruijn ##.brefs.813 0 2))
    V_CALL(upenv->up->vars[10], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D400_k519, env)}),
      _var2);
 }
}
static void _V10_Dcount__refs__atom_D818_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k525, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2062 0 0) ((bruijn ##.kk.187.821 4 1) (bruijn ##.k.2061 1 0) #f) ((bruijn ##.k.2061 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k524, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.189.823 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Dcount__refs__atom_D818_k525) 'quote (##inline ##vcore.car (bruijn ##.expr.189.823 1 0))) ((bruijn ##.k.2061 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k525, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k528, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2058 0 0) ((bruijn ##.kk.187.821 6 1) (bruijn ##.k.2057 1 0) #f) ((bruijn ##.k.2057 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VEncodeBool(false));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k527, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.190.824 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Dcount__refs__atom_D818_k528) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.190.824 1 0))) ((bruijn ##.k.2057 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k528, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k532, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.187.821 9 1) (bruijn ##.k.2052 2 0) (bruijn ##.x.2054 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k531, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2053 0 0) ((bruijn ##.for-each.357 15 11) (close _V10_Dcount__refs__atom_D818_k532) (bruijn ##.count-refs-atom.818 10 2) (##inline ##vcore.cdr (bruijn ##.expr.191.825 2 0))) ((bruijn ##.k.2052 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k532, env)}),
      VGetArg(upenv, 10-1, 2),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k530, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.191.825 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Dcount__refs__atom_D818_k531) '##inline (##inline ##vcore.car (bruijn ##.expr.191.825 1 0))) ((bruijn ##.k.2052 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k531, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k538, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.187.821 13 1) (bruijn ##.k.2043 4 0) (bruijn ##.x.2048 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k537, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.194.829 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.194.829 0 0))) ((bruijn ##.count-refs-apply.819 14 3) (close _V10_Dcount__refs__atom_D818_k538) (##inline ##vcore.car (bruijn ##.expr.194.829 0 0))) ((bruijn ##.k.2043 3 0) #f)) ((bruijn ##.k.2043 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k538, env)}),
      VInlineCar2(runtime,
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
static void _V10_Dcount__refs__atom_D818_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k536, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.193.828 0 0)) ((close _V10_Dcount__refs__atom_D818_k537) (##inline ##vcore.cdr (bruijn ##.expr.193.828 0 0))) ((bruijn ##.k.2043 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k537, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k535, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2044 0 0) ((close _V10_Dcount__refs__atom_D818_k536) (##inline ##vcore.cdr (bruijn ##.expr.192.827 2 0))) ((bruijn ##.k.2043 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k536, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k534, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.192.827 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Dcount__refs__atom_D818_k535) 'lambda (##inline ##vcore.car (bruijn ##.expr.192.827 1 0))) ((bruijn ##.k.2043 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k535, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k544, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.187.821 15 1) (bruijn ##.k.2034 4 0) (bruijn ##.x.2039 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k543, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.197.833 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.197.833 0 0))) ((bruijn ##.count-refs-apply.819 16 3) (close _V10_Dcount__refs__atom_D818_k544) (##inline ##vcore.car (bruijn ##.expr.197.833 0 0))) ((bruijn ##.k.2034 3 0) #f)) ((bruijn ##.k.2034 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k544, env)}),
      VInlineCar2(runtime,
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
static void _V10_Dcount__refs__atom_D818_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k542, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.196.832 0 0)) ((close _V10_Dcount__refs__atom_D818_k543) (##inline ##vcore.cdr (bruijn ##.expr.196.832 0 0))) ((bruijn ##.k.2034 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k543, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k541, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2035 0 0) ((close _V10_Dcount__refs__atom_D818_k542) (##inline ##vcore.cdr (bruijn ##.expr.195.831 2 0))) ((bruijn ##.k.2034 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k542, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k540, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.195.831 1 0)) ((bruijn ##.equal?.383 18 37) (close _V10_Dcount__refs__atom_D818_k541) 'continuation (##inline ##vcore.car (bruijn ##.expr.195.831 1 0))) ((bruijn ##.k.2034 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k541, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D838_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k549, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.201.837 4 1) (bruijn ##.k.2025 1 0) (bruijn ##.expr.203.839 2 1) (bruijn ##.x.2026 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D838_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k548, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.203.839 1 1))) ((bruijn ##.reverse.361 26 15) (close _V10_Dloop_D838_k549) (bruijn ##.body.200.840 1 2)) ((bruijn ##.k.2025 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 26-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_k549, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D838_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k553, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.205.843 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.205.843 0 0))) ((bruijn ##.kk.202.841 3 1) (bruijn ##.k.2018 1 0) (##inline ##vcore.cdr (bruijn ##.expr.203.839 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.205.843 0 0)) (bruijn ##.body.200.840 6 2))) ((bruijn ##.k.2018 1 0) #f)) ((bruijn ##.k.2018 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 2)));
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
static void _V10_Dloop_D838_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k552, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.204.842 1 0)) ((close _V10_Dloop_D838_k553) (##inline ##vcore.cdr (bruijn ##.expr.204.842 1 0))) ((bruijn ##.k.2018 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D838_k553, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D838_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k555, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.201.837 8 1) (bruijn ##.k.2014 3 0) (bruijn ##.expr.203.839 6 1) (bruijn ##.x.2016 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D838_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k554, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 30 15) (close _V10_Dloop_D838_k555) (bruijn ##.body.200.840 5 2))
    V_CALL(VGetArg(upenv, 30-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_k555, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D838_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k551, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D838_k552) (close _V10_Dloop_D838_k554))
    V_CALL_FUNC(_V10_Dloop_D838_k552, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_k554, env)}));
 }
}
static void _V10_Dloop_D838_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_lambda178, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_lambda178, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D838_k551) (##inline ##vcore.car (bruijn ##.expr.203.839 3 1)))
    V_CALL_FUNC(_V10_Dloop_D838_k551, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D838_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_lambda177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_lambda177, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 27 36) (bruijn ##.k.2013 0 0) (close _V10_Dloop_D838_lambda178))
    V_CALL(VGetArg(upenv, 27-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_lambda178, env)}));
 }
}
static void _V10_Dloop_D838_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_k550, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 26 16) (bruijn ##.k.2011 1 0) (close _V10_Dloop_D838_lambda177) (bruijn ##.loop.838 2 0))
    V_CALL(VGetArg(upenv, 26-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_lambda177, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D838_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D838_lambda176, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D838_lambda176, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D838_k548) (close _V10_Dloop_D838_k550))
    V_CALL_FUNC(_V10_Dloop_D838_k548, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_k550, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda175, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda175, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D838_lambda176)) ((bruijn ##.loop.838 0 0) (bruijn ##.k.2010 1 0) (##inline ##vcore.cdr (bruijn ##.expr.198.835 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D838_lambda176, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
 }
}
static void _V10_Dcount__refs__atom_D818_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda174, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 22 36) (bruijn ##.k.2009 0 0) (close _V10_Dcount__refs__atom_D818_lambda175))
    V_CALL(VGetArg(upenv, 22-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda175, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k556, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.187.821 16 1) (bruijn ##.k.2028 1 0) (bruijn ##.x.2030 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda180, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda180, runtime, upenv, 2, argc, _var0, _var1) {
  // ((bruijn ##.count-refs-apply.819 18 3) (bruijn ##.k.2031 0 0) (bruijn ##.body.847 0 1))
    V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      _var0,
      _var1);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda179, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda179, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.845 0 1)) ((bruijn ##.for-each.357 22 11) (close _V10_Dcount__refs__atom_D818_k556) (close _V10_Dcount__refs__atom_D818_lambda180) (bruijn ##.body.846 0 2)) ((bruijn ##.k.2028 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 22-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k556, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda180, env)}),
      _var2);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k547, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2008 0 0) ((bruijn ##.call-with-values.362 21 16) (bruijn ##.k.2007 1 0) (close _V10_Dcount__refs__atom_D818_lambda174) (close _V10_Dcount__refs__atom_D818_lambda179)) ((bruijn ##.k.2007 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 21-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda174, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda179, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k546, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.198.835 1 0)) ((bruijn ##.equal?.383 20 37) (close _V10_Dcount__refs__atom_D818_k547) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.198.835 1 0))) ((bruijn ##.k.2007 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 20-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k547, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k561, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.hash-table-set!.381 24 35) (bruijn ##.k.2002 2 0) (bruijn ##.count-table.816 19 0) (bruijn ##.expr.820 18 1) (bruijn ##.x.2003 0 0))
    V_CALL(VGetArg(upenv, 24-1, 35), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 1),
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k560, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.358 23 12) (close _V10_Dcount__refs__atom_D818_k561) 1 (bruijn ##.x.2004 0 0))
    V_CALL(VGetArg(upenv, 23-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k561, env)}),
      VEncodeInt(1l),
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda181, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.2005 0 0) 0)
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
 }
}
static void _V10_Dcount__refs__atom_D818_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k559, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2001 1 0) ((bruijn ##.hash-table-ref.374 22 28) (close _V10_Dcount__refs__atom_D818_k560) (bruijn ##.count-table.816 17 0) (bruijn ##.expr.820 16 1) (close _V10_Dcount__refs__atom_D818_lambda181)) ((bruijn ##.k.2002 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 22-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k560, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 1),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda181, env)}));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__atom_D818_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k562, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.187.821 15 1) (bruijn ##.k.1993 15 0) (bruijn ##.x.2000 0 0))
    V_CALL(VGetArg(upenv, 15-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k558, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k559) (close _V10_Dcount__refs__atom_D818_k562))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k559, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k562, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k557, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.367 20 21) (close _V10_Dcount__refs__atom_D818_k558) (bruijn ##.expr.820 14 1))
    V_CALL(VGetArg(upenv, 20-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k558, env)}),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda173, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k546) (close _V10_Dcount__refs__atom_D818_k557))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k546, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k557, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k545, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda173) (bruijn ##.input.188.822 10 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda173, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda172, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k540) (close _V10_Dcount__refs__atom_D818_k545))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k540, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k545, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k539, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda172) (bruijn ##.input.188.822 8 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda172, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda171, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k534) (close _V10_Dcount__refs__atom_D818_k539))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k534, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k539, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k533, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda171) (bruijn ##.input.188.822 6 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda171, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda170, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k530) (close _V10_Dcount__refs__atom_D818_k533))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k530, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k533, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k529, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda170) (bruijn ##.input.188.822 4 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda170, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda169, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k527) (close _V10_Dcount__refs__atom_D818_k529))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k527, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k529, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_k526, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda169) (bruijn ##.input.188.822 2 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda169, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda168, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_k524) (close _V10_Dcount__refs__atom_D818_k526))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_k524, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_k526, env)}));
 }
}
static void _V10_Dcount__refs__atom_D818_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda167, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D818_lambda168) (bruijn ##.input.188.822 0 0))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda168, env, runtime,
      _var0);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda166, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda166, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcount__refs__atom_D818_lambda167) (bruijn ##.expr.820 1 1))
    V_CALL_FUNC(_V10_Dcount__refs__atom_D818_lambda167, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dcount__refs__atom_D818_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D818_lambda165, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__atom_D818_lambda165, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 6 36) (bruijn ##.k.1992 0 0) (close _V10_Dcount__refs__atom_D818_lambda166))
    V_CALL(VGetArg(upenv, 6-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda166, env)}));
 }
}
static void _V10_Dloop_D855_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k567, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.212.854 4 1) (bruijn ##.k.2130 1 0) (bruijn ##.expr.214.856 2 1) (bruijn ##.x.2131 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D855_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k566, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.214.856 1 1))) ((bruijn ##.reverse.361 17 15) (close _V10_Dloop_D855_k567) (bruijn ##.vals.211.857 1 2)) ((bruijn ##.k.2130 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 17-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_k567, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D855_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k571, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.216.860 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.216.860 0 0))) ((bruijn ##.kk.213.858 3 1) (bruijn ##.k.2123 1 0) (##inline ##vcore.cdr (bruijn ##.expr.214.856 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.216.860 0 0)) (bruijn ##.vals.211.857 6 2))) ((bruijn ##.k.2123 1 0) #f)) ((bruijn ##.k.2123 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 2)));
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
static void _V10_Dloop_D855_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k570, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.215.859 1 0)) ((close _V10_Dloop_D855_k571) (##inline ##vcore.cdr (bruijn ##.expr.215.859 1 0))) ((bruijn ##.k.2123 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D855_k571, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D855_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k573, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.212.854 8 1) (bruijn ##.k.2119 3 0) (bruijn ##.expr.214.856 6 1) (bruijn ##.x.2121 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D855_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k572, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 21 15) (close _V10_Dloop_D855_k573) (bruijn ##.vals.211.857 5 2))
    V_CALL(VGetArg(upenv, 21-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_k573, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D855_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k569, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D855_k570) (close _V10_Dloop_D855_k572))
    V_CALL_FUNC(_V10_Dloop_D855_k570, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_k572, env)}));
 }
}
static void _V10_Dloop_D855_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_lambda190, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_lambda190, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D855_k569) (##inline ##vcore.car (bruijn ##.expr.214.856 3 1)))
    V_CALL_FUNC(_V10_Dloop_D855_k569, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D855_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_lambda189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_lambda189, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 18 36) (bruijn ##.k.2118 0 0) (close _V10_Dloop_D855_lambda190))
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_lambda190, env)}));
 }
}
static void _V10_Dloop_D855_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_k568, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 17 16) (bruijn ##.k.2116 1 0) (close _V10_Dloop_D855_lambda189) (bruijn ##.loop.855 2 0))
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_lambda189, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D855_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D855_lambda188, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D855_lambda188, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D855_k566) (close _V10_Dloop_D855_k568))
    V_CALL_FUNC(_V10_Dloop_D855_k566, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_k568, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_lambda187, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda187, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D855_lambda188)) ((bruijn ##.loop.855 0 0) (bruijn ##.k.2115 1 0) (##inline ##vcore.car (bruijn ##.expr.209.852 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D855_lambda188, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Dcount__refs__apply_D819_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_lambda186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda186, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 13 36) (bruijn ##.k.2114 0 0) (close _V10_Dcount__refs__apply_D819_lambda187))
    V_CALL(VGetArg(upenv, 13-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_lambda187, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k576, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 9 1) (bruijn ##.k.2133 3 0) (bruijn ##.x.2137 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k575, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.819 10 3) (close _V10_Dcount__refs__apply_D819_k576) (##inline ##vcore.car (bruijn ##.expr.217.864 1 0)))
    V_CALL(VGetArg(upenv, 10-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k576, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k574, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.217.864 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.217.864 0 0))) ((bruijn ##.for-each.357 14 11) (close _V10_Dcount__refs__apply_D819_k575) (bruijn ##.count-refs-atom.818 9 2) (bruijn ##.vals.863 1 2)) ((bruijn ##.k.2133 1 0) #f)) ((bruijn ##.k.2133 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k575, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->vars[2]);
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
static void _V10_Dcount__refs__apply_D819_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_lambda191, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda191, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.862 0 1)) ((close _V10_Dcount__refs__apply_D819_k574) (##inline ##vcore.cdr (bruijn ##.expr.209.852 1 0))) ((bruijn ##.k.2133 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k574, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k565, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.209.852 0 0)) ((bruijn ##.call-with-values.362 12 16) (bruijn ##.k.2111 2 0) (close _V10_Dcount__refs__apply_D819_lambda186) (close _V10_Dcount__refs__apply_D819_lambda191)) ((bruijn ##.k.2111 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 12-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_lambda186, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_lambda191, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k564, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2112 0 0) ((close _V10_Dcount__refs__apply_D819_k565) (##inline ##vcore.cdr (bruijn ##.expr.208.851 2 0))) ((bruijn ##.k.2111 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k565, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k563, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.208.851 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Dcount__refs__apply_D819_k564) 'letrec (##inline ##vcore.car (bruijn ##.expr.208.851 1 0))) ((bruijn ##.k.2111 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k564, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k585, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 12 1) (bruijn ##.k.2099 7 0) (bruijn ##.x.2105 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k584, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.819 13 3) (close _V10_Dcount__refs__apply_D819_k585) (##inline ##vcore.car (bruijn ##.expr.221.871 2 0)))
    V_CALL(VGetArg(upenv, 13-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k585, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k583, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.819 12 3) (close _V10_Dcount__refs__apply_D819_k584) (##inline ##vcore.car (bruijn ##.expr.220.869 2 0)))
    V_CALL(VGetArg(upenv, 12-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k584, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k582, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.221.871 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.221.871 0 0))) ((bruijn ##.count-refs-atom.818 11 2) (close _V10_Dcount__refs__apply_D819_k583) (##inline ##vcore.car (bruijn ##.expr.219.867 2 0))) ((bruijn ##.k.2099 4 0) #f)) ((bruijn ##.k.2099 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k583, env)}),
      VInlineCar2(runtime,
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
static void _V10_Dcount__refs__apply_D819_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k581, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.220.869 0 0)) ((close _V10_Dcount__refs__apply_D819_k582) (##inline ##vcore.cdr (bruijn ##.expr.220.869 0 0))) ((bruijn ##.k.2099 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k582, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k580, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.219.867 0 0)) ((close _V10_Dcount__refs__apply_D819_k581) (##inline ##vcore.cdr (bruijn ##.expr.219.867 0 0))) ((bruijn ##.k.2099 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k581, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k579, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2100 0 0) ((close _V10_Dcount__refs__apply_D819_k580) (##inline ##vcore.cdr (bruijn ##.expr.218.866 2 0))) ((bruijn ##.k.2099 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k580, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k578, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.218.866 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Dcount__refs__apply_D819_k579) 'if (##inline ##vcore.car (bruijn ##.expr.218.866 1 0))) ((bruijn ##.k.2099 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k579, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k599, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2093 1 0) ((bruijn ##.error.368 26 22) (bruijn ##.k.2094 0 0) (##string ##.string.2606)) ((bruijn ##.k.2094 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 26-1, 22), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D2606.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k600, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 19 1) (bruijn ##.k.2082 12 0) (bruijn ##.x.2088 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k598, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k599) (close _V10_Dcount__refs__apply_D819_k600))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k599, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k600, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k597, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 24 24) (close _V10_Dcount__refs__apply_D819_k598) (bruijn ##.x.2095 0 0))
    V_CALL(VGetArg(upenv, 24-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k598, env)}),
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k596, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.367 23 21) (close _V10_Dcount__refs__apply_D819_k597) (bruijn ##.y.877 5 0))
    V_CALL(VGetArg(upenv, 23-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k597, env)}),
      VGetArg(upenv, 5-1, 0));
 }
}
static void _V10_Dcount__refs__apply_D819_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k595, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-set!.381 22 35) (close _V10_Dcount__refs__apply_D819_k596) (bruijn ##.impure-table.817 17 1) (bruijn ##.y.877 4 0) #t)
    V_CALL(VGetArg(upenv, 22-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k596, env)}),
      VGetArg(upenv, 17-1, 1),
      upenv->up->up->up->vars[0],
      VEncodeBool(true));
 }
}
static void _V10_Dcount__refs__apply_D819_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k594, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.818 16 2) (close _V10_Dcount__refs__apply_D819_k595) (##inline ##vcore.car (bruijn ##.expr.225.878 2 0)))
    V_CALL(VGetArg(upenv, 16-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k595, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k593, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.818 15 2) (close _V10_Dcount__refs__apply_D819_k594) (bruijn ##.y.877 2 0))
    V_CALL(VGetArg(upenv, 15-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k594, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dcount__refs__apply_D819_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k592, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.225.878 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.225.878 0 0))) ((bruijn ##.count-refs-atom.818 14 2) (close _V10_Dcount__refs__apply_D819_k593) (##inline ##vcore.car (bruijn ##.expr.223.874 3 0))) ((bruijn ##.k.2082 5 0) #f)) ((bruijn ##.k.2082 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 14-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k593, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
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
static void _V10_Dcount__refs__apply_D819_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k591, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k592) (##inline ##vcore.cdr (bruijn ##.expr.224.876 1 0)))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k592, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k590, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.224.876 0 0)) ((close _V10_Dcount__refs__apply_D819_k591) (##inline ##vcore.car (bruijn ##.expr.224.876 0 0))) ((bruijn ##.k.2082 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k591, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k589, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.223.874 0 0)) ((close _V10_Dcount__refs__apply_D819_k590) (##inline ##vcore.cdr (bruijn ##.expr.223.874 0 0))) ((bruijn ##.k.2082 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k590, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k588, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2083 0 0) ((close _V10_Dcount__refs__apply_D819_k589) (##inline ##vcore.cdr (bruijn ##.expr.222.873 2 0))) ((bruijn ##.k.2082 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k589, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k587, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.222.873 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Dcount__refs__apply_D819_k588) 'set! (##inline ##vcore.car (bruijn ##.expr.222.873 1 0))) ((bruijn ##.k.2082 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k588, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k604, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 11 1) (bruijn ##.k.2077 2 0) (bruijn ##.x.2079 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k603, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2078 0 0) ((bruijn ##.error.368 17 22) (close _V10_Dcount__refs__apply_D819_k604) (##string ##.string.2607)) ((bruijn ##.k.2077 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 17-1, 22), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k604, env)}),
      VEncodePointer(&_V10_Dstring_D2607.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k602, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.226.880 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Dcount__refs__apply_D819_k603) 'set! (##inline ##vcore.car (bruijn ##.expr.226.880 1 0))) ((bruijn ##.k.2077 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k603, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k608, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 13 1) (bruijn ##.k.2073 2 0) (bruijn ##.x.2074 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k607, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.357 19 11) (close _V10_Dcount__refs__apply_D819_k608) (bruijn ##.count-refs-atom.818 14 2) (##inline ##vcore.cdr (bruijn ##.expr.227.882 2 0)))
    V_CALL(VGetArg(upenv, 19-1, 11), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k608, env)}),
      VGetArg(upenv, 14-1, 2),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Dcount__refs__apply_D819_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k606, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.227.882 1 0)) ((bruijn ##.count-refs-atom.818 13 2) (close _V10_Dcount__refs__apply_D819_k607) (##inline ##vcore.car (bruijn ##.expr.227.882 1 0))) ((bruijn ##.k.2073 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k607, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dcount__refs__apply_D819_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k610, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.206.849 12 1) (bruijn ##.k.2065 12 0) (bruijn ##.x.2071 0 0))
    V_CALL(VGetArg(upenv, 12-1, 1), runtime,
      VGetArg(upenv, 12-1, 0),
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k609, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.364 18 18) (close _V10_Dcount__refs__apply_D819_k610) (##string ##.string.2608) (bruijn ##.expr.848 12 1))
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k610, env)}),
      VEncodePointer(&_V10_Dstring_D2608.sym, VPOINTER_OTHER),
      VGetArg(upenv, 12-1, 1));
 }
}
static void _V10_Dcount__refs__apply_D819_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda195, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k606) (close _V10_Dcount__refs__apply_D819_k609))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k606, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k609, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k605, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_lambda195) (bruijn ##.input.207.850 8 0))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda195, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Dcount__refs__apply_D819_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda194, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k602) (close _V10_Dcount__refs__apply_D819_k605))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k602, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k605, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k601, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_lambda194) (bruijn ##.input.207.850 6 0))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda194, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dcount__refs__apply_D819_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda193, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k587) (close _V10_Dcount__refs__apply_D819_k601))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k587, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k601, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k586, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_lambda193) (bruijn ##.input.207.850 4 0))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda193, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dcount__refs__apply_D819_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda192, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k578) (close _V10_Dcount__refs__apply_D819_k586))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k578, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k586, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_k577, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_lambda192) (bruijn ##.input.207.850 2 0))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda192, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dcount__refs__apply_D819_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda185, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_k563) (close _V10_Dcount__refs__apply_D819_k577))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_k563, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_k577, env)}));
 }
}
static void _V10_Dcount__refs__apply_D819_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda184, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D819_lambda185) (bruijn ##.input.207.850 0 0))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda185, env, runtime,
      _var0);
 }
}
static void _V10_Dcount__refs__apply_D819_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_lambda183, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda183, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcount__refs__apply_D819_lambda184) (bruijn ##.expr.848 1 1))
    V_CALL_FUNC(_V10_Dcount__refs__apply_D819_lambda184, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Dcount__refs__apply_D819_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D819_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs__apply_D819_lambda182, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 6 36) (bruijn ##.k.2064 0 0) (close _V10_Dcount__refs__apply_D819_lambda183))
    V_CALL(VGetArg(upenv, 6-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_lambda183, env)}));
 }
}
static void _V10_Dcount__refs_D401_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_k612, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2142 1 0) ((bruijn ##.count-refs-apply.819 2 3) (bruijn ##.k.2143 0 0) (bruijn ##.expr.815 5 1)) ((bruijn ##.count-refs-atom.818 2 2) (bruijn ##.k.2143 0 0) (bruijn ##.expr.815 5 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(upenv->up->vars[3], runtime,
      _var0,
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(upenv->up->vars[2], runtime,
      _var0,
      VGetArg(upenv, 5-1, 1));
}
 }
}
static void _V10_Dcount__refs_D401_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_k613, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.values.360 7 14) (bruijn ##.k.1989 5 0) (bruijn ##.count-table.816 2 0) (bruijn ##.impure-table.817 2 1))
    V_CALL(VGetArg(upenv, 7-1, 14), runtime,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      upenv->up->vars[1]);
 }
}
static void _V10_Dcount__refs_D401_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_k611, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs_D401_k612) (close _V10_Dcount__refs_D401_k613))
    V_CALL_FUNC(_V10_Dcount__refs_D401_k612, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D401_k613, env)}));
 }
}
static void _V10_Dcount__refs_D401_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_k523, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.x.1990 2 0) (bruijn ##.x.1991 1 0) (close _V10_Dcount__refs__atom_D818_lambda165) (close _V10_Dcount__refs__apply_D819_lambda182)) ((bruijn ##.application?.384 4 0) (close _V10_Dcount__refs_D401_k611) (bruijn ##.expr.815 3 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[4]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 4, 4, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D818_lambda165, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D819_lambda182, env)});
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D401_k611, env)}),
      upenv->up->up->vars[1]);
    }
 }
}
static void _V10_Dcount__refs_D401_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_k522, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-hash-table.359 3 13) (close _V10_Dcount__refs_D401_k523) (bruijn ##.eqv?.375 3 29))
    V_CALL(upenv->up->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D401_k523, env)}),
      upenv->up->up->vars[29]);
 }
}
static void _V10_Dcount__refs_D401_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D401_lambda164, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dcount__refs_D401_lambda164, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.make-hash-table.359 2 13) (close _V10_Dcount__refs_D401_k522) (bruijn ##.eqv?.375 2 29))
    V_CALL(upenv->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D401_k522, env)}),
      upenv->up->vars[29]);
 }
}
static void _V10_Doptimize__lambda_D887_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k617, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.239.896 6 1) (bruijn ##.k.2150 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.241.898 4 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.242.900 2 0)) (##inline ##vcore.cons (bruijn ##.x.2157 0 0) '()))))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Doptimize__lambda_D887_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k616, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243.902 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.243.902 0 0))) ((bruijn ##.optimize-apply.890 7 3) (close _V10_Doptimize__lambda_D887_k617) (##inline ##vcore.car (bruijn ##.expr.243.902 0 0))) ((bruijn ##.k.2150 2 0) #f)) ((bruijn ##.k.2150 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D887_k617, env)}),
      VInlineCar2(runtime,
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
static void _V10_Doptimize__lambda_D887_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k615, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.242.900 0 0)) ((close _V10_Doptimize__lambda_D887_k616) (##inline ##vcore.cdr (bruijn ##.expr.242.900 0 0))) ((bruijn ##.k.2150 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__lambda_D887_k616, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__lambda_D887_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k614, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.241.898 1 0)) ((close _V10_Doptimize__lambda_D887_k615) (##inline ##vcore.cdr (bruijn ##.expr.241.898 1 0))) ((bruijn ##.k.2150 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__lambda_D887_k615, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__lambda_D887_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k619, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.239.896 4 1) (bruijn ##.k.2146 4 0) (bruijn ##.x.2148 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__lambda_D887_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_k618, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.364 8 18) (close _V10_Doptimize__lambda_D887_k619) (##string ##.string.2609) (bruijn ##.expr.895 4 1))
    V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D887_k619, env)}),
      VEncodePointer(&_V10_Dstring_D2609.sym, VPOINTER_OTHER),
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Doptimize__lambda_D887_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_lambda200, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__lambda_D887_k614) (close _V10_Doptimize__lambda_D887_k618))
    V_CALL_FUNC(_V10_Doptimize__lambda_D887_k614, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D887_k618, env)}));
 }
}
static void _V10_Doptimize__lambda_D887_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_lambda199, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__lambda_D887_lambda200) (bruijn ##.input.240.897 0 0))
    V_CALL_FUNC(_V10_Doptimize__lambda_D887_lambda200, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__lambda_D887_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_lambda198, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_lambda198, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__lambda_D887_lambda199) (bruijn ##.expr.895 1 1))
    V_CALL_FUNC(_V10_Doptimize__lambda_D887_lambda199, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Doptimize__lambda_D887_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D887_lambda197, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__lambda_D887_lambda197, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 4 36) (bruijn ##.k.2145 0 0) (close _V10_Doptimize__lambda_D887_lambda198))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D887_lambda198, env)}));
 }
}
static void _V10_Doptimize__let_D888_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k640, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2320 0 0) ((bruijn ##.k.2318 4 0) (bruijn ##.p.2320 0 0)) ((bruijn ##.=.373 29 27) (bruijn ##.k.2318 4 0) (bruijn ##.refs.916 8 0) 1))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 29-1, 27), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 8-1, 0),
      VEncodeInt(1l));
}
 }
}
static void _V10_Doptimize__let_D888_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k639, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.375 28 29) (close _V10_Doptimize__let_D888_k640) (bruijn ##.x.2321 0 0) '##foreign.function)
    V_CALL(VGetArg(upenv, 28-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k640, env)}),
      _var0,
      _V10foreign_Dfunction);
 }
}
static void _V10_Doptimize__let_D888_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k638, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2319 0 0) ((bruijn ##.k.2318 2 0) (bruijn ##.p.2319 0 0)) ((bruijn ##.car.379 27 33) (close _V10_Doptimize__let_D888_k639) (bruijn ##.x.915 10 0)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 27-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k639, env)}),
      VGetArg(upenv, 10-1, 0));
}
 }
}
static void _V10_Doptimize__let_D888_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k637, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.375 26 29) (close _V10_Doptimize__let_D888_k638) (bruijn ##.x.2322 0 0) 'quote)
    V_CALL(VGetArg(upenv, 26-1, 29), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k638, env)}),
      _var0,
      _V0quote);
 }
}
static void _V10_Doptimize__let_D888_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k636, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2317 1 0) ((bruijn ##.k.2318 0 0) (bruijn ##.p.2317 1 0)) ((bruijn ##.car.379 25 33) (close _V10_Doptimize__let_D888_k637) (bruijn ##.x.915 8 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(_var0, runtime,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 25-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k637, env)}),
      VGetArg(upenv, 8-1, 0));
}
 }
}
static void _V10_Doptimize__let_D888_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k645, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.memv.378 29 32) (bruijn ##.k.2312 1 0) (bruijn ##.x.2313 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    V_CALL(VGetArg(upenv, 29-1, 32), runtime,
      upenv->vars[0],
      _var0,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
 }
}
static void _V10_Doptimize__let_D888_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k644, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2311 1 0) ((bruijn ##.car.379 28 33) (close _V10_Doptimize__let_D888_k645) (bruijn ##.x.915 11 0)) ((bruijn ##.k.2312 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 28-1, 33), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k645, env)}),
      VGetArg(upenv, 11-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k647, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2309 0 0) ((bruijn ##.k.2308 3 0) (bruijn ##.pure.917 8 1)) ((bruijn ##.k.2308 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[0], runtime,
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k646, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 28 24) (close _V10_Doptimize__let_D888_k647) (bruijn ##.x.2310 0 0))
    V_CALL(VGetArg(upenv, 28-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k647, env)}),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k643, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k644) (close _V10_Doptimize__let_D888_k646))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k644, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k646, env)}));
 }
}
static void _V10_Doptimize__let_D888_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k642, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2307 1 0) ((bruijn ##.pair?.377 26 31) (close _V10_Doptimize__let_D888_k643) (bruijn ##.x.915 9 0)) ((bruijn ##.k.2308 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 26-1, 31), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k643, env)}),
      VGetArg(upenv, 9-1, 0));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k654, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.add-refs!.399 32 15) (bruijn ##.k.2292 4 0) (bruijn ##.ref-table.892 30 5) (bruijn ##.xrefs.918 3 0) (bruijn ##.x.2294 0 0))
    V_CALL(VGetArg(upenv, 32-1, 15), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 30-1, 5),
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k653, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.380 32 34) (close _V10_Doptimize__let_D888_k654) (bruijn ##.refs.916 11 0) 1)
    V_CALL(VGetArg(upenv, 32-1, 34), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k654, env)}),
      VGetArg(upenv, 11-1, 0),
      VEncodeInt(1l));
 }
}
static void _V10_Doptimize__let_D888_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k652, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__let_D888_k653) (bruijn ##.dummy.282.920 1 2) (bruijn ##.x.2295 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k653, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V10_Doptimize__let_D888_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda206, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.count-refs.401 30 17) (bruijn ##.k.2296 0 0) (bruijn ##.x.915 14 0))
    V_CALL(VGetArg(upenv, 30-1, 17), runtime,
      _var0,
      VGetArg(upenv, 14-1, 0));
 }
}
static void _V10_Doptimize__let_D888_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k655, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.2297 1 0) (bruijn ##.xpure.919 2 1) (bruijn ##.xpure.281.922 1 2))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
 }
}
static void _V10_Doptimize__let_D888_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda207, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda207, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__let_D888_k655) (bruijn ##.xrefs.918 1 0) (bruijn ##.xrefs.280.921 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k655, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
static void _V10_Doptimize__let_D888_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k651, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2291 1 0) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__let_D888_k652) (close _V10_Doptimize__let_D888_lambda206) (close _V10_Doptimize__let_D888_lambda207))) ((bruijn ##.k.2292 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    V_CALL_FUNC(VCallValues2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k652, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda206, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda207, env)}));
    }
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k658, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.optimize-apply.890 28 3) (bruijn ##.k.2286 8 0) (bruijn ##.x.2290 0 0))
    V_CALL(VGetArg(upenv, 28-1, 3), runtime,
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k657, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substitute2.394 29 10) (close _V10_Doptimize__let_D888_k658) (bruijn ##.y.911 17 0) (bruijn ##.x.915 13 0) (bruijn ##.expr.913 15 0) (bruijn ##.refs.916 9 0))
    V_CALL(VGetArg(upenv, 29-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k658, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 9-1, 0));
 }
}
static void _V10_Doptimize__let_D888_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k656, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-set!.381 29 35) (close _V10_Doptimize__let_D888_k657) (bruijn ##.ref-table.892 26 5) (bruijn ##.y.911 16 0) 0)
    V_CALL(VGetArg(upenv, 29-1, 35), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k657, env)}),
      VGetArg(upenv, 26-1, 5),
      VGetArg(upenv, 16-1, 0),
      VEncodeInt(0l));
 }
}
static void _V10_Doptimize__let_D888_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k650, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k651) (close _V10_Doptimize__let_D888_k656))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k651, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k656, env)}));
 }
}
static void _V10_Doptimize__let_D888_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k649, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 27 24) (close _V10_Doptimize__let_D888_k650) (bruijn ##.x.2299 0 0))
    V_CALL(VGetArg(upenv, 27-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k650, env)}),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k660, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.2286 5 0) (##inline ##vcore.cons (bruijn ##.x.2300 1 0) (##inline ##vcore.cons (bruijn ##.x.2302 0 0) '())))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Doptimize__let_D888_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k659, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.891 24 4) (close _V10_Doptimize__let_D888_k660) (bruijn ##.x.915 10 0))
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k660, env)}),
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Doptimize__let_D888_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k648, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2287 0 0) ((bruijn ##.=.373 26 27) (close _V10_Doptimize__let_D888_k649) (bruijn ##.refs.916 5 0) 1) ((bruijn ##.optimize-atom.891 23 4) (close _V10_Doptimize__let_D888_k659) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.y.911 13 0) '()) (##inline ##vcore.cons (bruijn ##.expr.913 11 0) '())))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k649, env)}),
      VGetArg(upenv, 5-1, 0),
      VEncodeInt(1l));
} else {
    V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k659, env)}),
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VNULL))));
}
 }
}
static void _V10_Doptimize__let_D888_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k641, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k642) (close _V10_Doptimize__let_D888_k648))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k642, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k648, env)}));
 }
}
static void _V10_Doptimize__let_D888_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k635, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k636) (close _V10_Doptimize__let_D888_k641))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k636, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k641, env)}));
 }
}
static void _V10_Doptimize__let_D888_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k634, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2285 1 0) ((bruijn ##.optimize-apply.890 20 3) (bruijn ##.k.2286 0 0) (bruijn ##.expr.913 8 0)) ((bruijn ##.atom?.376 23 30) (close _V10_Doptimize__let_D888_k635) (bruijn ##.x.915 6 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      _var0,
      VGetArg(upenv, 8-1, 0));
} else {
    V_CALL(VGetArg(upenv, 23-1, 30), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k635, env)}),
      VGetArg(upenv, 6-1, 0));
}
 }
}
static void _V10_Doptimize__let_D888_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k661, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 18 1) (bruijn ##.k.2272 15 0) (bruijn ##.x.2282 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 15-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k633, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k634) (close _V10_Doptimize__let_D888_k661))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k634, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k661, env)}));
 }
}
static void _V10_Doptimize__let_D888_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda205, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.=.373 21 27) (close _V10_Doptimize__let_D888_k633) (bruijn ##.refs.916 0 0) 0)
    V_CALL(VGetArg(upenv, 21-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k633, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Doptimize__let_D888_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k632, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda205) (bruijn ##.x.2283 2 0) (bruijn ##.x.2284 0 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda205, env, runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k631, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 19 24) (close _V10_Doptimize__let_D888_k632) (bruijn ##.x.2323 0 0))
    V_CALL(VGetArg(upenv, 19-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k632, env)}),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda208, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.2324 0 0) #f)
    V_CALL(_var0, runtime,
      VEncodeBool(false));
 }
}
static void _V10_Doptimize__let_D888_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k630, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.374 18 28) (close _V10_Doptimize__let_D888_k631) (bruijn ##.impure-table.893 15 6) (bruijn ##.y.911 5 0) (close _V10_Doptimize__let_D888_lambda208))
    V_CALL(VGetArg(upenv, 18-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k631, env)}),
      VGetArg(upenv, 15-1, 6),
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda208, env)}));
 }
}
static void _V10_Doptimize__let_D888_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda209, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.2325 0 0) 0)
    V_CALL(_var0, runtime,
      VEncodeInt(0l));
 }
}
static void _V10_Doptimize__let_D888_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k629, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.251.914 1 0))) ((bruijn ##.hash-table-ref.374 17 28) (close _V10_Doptimize__let_D888_k630) (bruijn ##.ref-table.892 14 5) (bruijn ##.y.911 4 0) (close _V10_Doptimize__let_D888_lambda209)) ((bruijn ##.k.2272 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL(VGetArg(upenv, 17-1, 28), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k630, env)}),
      VGetArg(upenv, 14-1, 5),
      upenv->up->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda209, env)}));
} else {
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k628, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.251.914 0 0)) ((close _V10_Doptimize__let_D888_k629) (##inline ##vcore.car (bruijn ##.expr.251.914 0 0))) ((bruijn ##.k.2272 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k629, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k627, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.250.912 1 0))) ((close _V10_Doptimize__let_D888_k628) (##inline ##vcore.cdr (bruijn ##.expr.246.907 8 0))) ((bruijn ##.k.2272 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k628, env, runtime,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k626, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.250.912 0 0)) ((close _V10_Doptimize__let_D888_k627) (##inline ##vcore.car (bruijn ##.expr.250.912 0 0))) ((bruijn ##.k.2272 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k627, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k625, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.249.910 1 0))) ((close _V10_Doptimize__let_D888_k626) (##inline ##vcore.cdr (bruijn ##.expr.248.909 2 0))) ((bruijn ##.k.2272 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k626, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k624, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.249.910 0 0)) ((close _V10_Doptimize__let_D888_k625) (##inline ##vcore.car (bruijn ##.expr.249.910 0 0))) ((bruijn ##.k.2272 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k625, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k623, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.248.909 0 0)) ((close _V10_Doptimize__let_D888_k624) (##inline ##vcore.car (bruijn ##.expr.248.909 0 0))) ((bruijn ##.k.2272 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k624, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k622, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2274 0 0) ((close _V10_Doptimize__let_D888_k623) (##inline ##vcore.cdr (bruijn ##.expr.247.908 1 0))) ((bruijn ##.k.2272 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k623, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k621, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.247.908 0 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Doptimize__let_D888_k622) 'continuation (##inline ##vcore.car (bruijn ##.expr.247.908 0 0))) ((bruijn ##.k.2272 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k622, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k620, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.246.907 1 0)) ((close _V10_Doptimize__let_D888_k621) (##inline ##vcore.car (bruijn ##.expr.246.907 1 0))) ((bruijn ##.k.2272 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k621, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k668(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k668, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 10 1) (bruijn ##.k.2258 5 0) (bruijn ##.x.2266 0 0))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k667(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k667, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.255.926 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.255.926 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.252.923 5 0))) ((bruijn ##.optimize-apply.890 11 3) (close _V10_Doptimize__let_D888_k668) (##inline ##vcore.car (bruijn ##.expr.255.926 0 0))) ((bruijn ##.k.2258 4 0) #f)) ((bruijn ##.k.2258 4 0) #f)) ((bruijn ##.k.2258 4 0) #f))
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
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k668, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V10_Doptimize__let_D888_k666(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k666, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.254.925 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.254.925 0 0))) ((close _V10_Doptimize__let_D888_k667) (##inline ##vcore.cdr (bruijn ##.expr.254.925 0 0))) ((bruijn ##.k.2258 3 0) #f)) ((bruijn ##.k.2258 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k667, env, runtime,
      VInlineCdr2(runtime,
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
static void _V10_Doptimize__let_D888_k665(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k665, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2260 0 0) ((close _V10_Doptimize__let_D888_k666) (##inline ##vcore.cdr (bruijn ##.expr.253.924 1 0))) ((bruijn ##.k.2258 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k666, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k664(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k664, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.253.924 0 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Doptimize__let_D888_k665) 'lambda (##inline ##vcore.car (bruijn ##.expr.253.924 0 0))) ((bruijn ##.k.2258 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k665, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k663(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k663, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.252.923 1 0)) ((close _V10_Doptimize__let_D888_k664) (##inline ##vcore.car (bruijn ##.expr.252.923 1 0))) ((bruijn ##.k.2258 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k664, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D933_k675(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_k675, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.261.932 4 1) (bruijn ##.k.2225 1 0) (bruijn ##.expr.263.934 2 1) (bruijn ##.x.2226 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D933_k674(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_k674, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.263.934 1 1))) ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D933_k675) (bruijn ##.ys.260.935 1 2)) ((bruijn ##.k.2225 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_k675, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D933_k678(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_k678, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.261.932 7 1) (bruijn ##.k.2219 2 0) (bruijn ##.expr.263.934 5 1) (bruijn ##.x.2221 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D933_k677(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_k677, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 23 15) (close _V10_Dloop_D933_k678) (bruijn ##.ys.260.935 4 2))
    V_CALL(VGetArg(upenv, 23-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_k678, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D933_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_lambda216, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_lambda216, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.262.936 0 1) (close _V10_Dloop_D933_k677) (##inline ##vcore.cdr (bruijn ##.expr.263.934 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.263.934 3 1)) (bruijn ##.ys.260.935 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_k677, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D933_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_lambda215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_lambda215, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 21 36) (bruijn ##.k.2218 0 0) (close _V10_Dloop_D933_lambda216))
    V_CALL(VGetArg(upenv, 21-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_lambda216, env)}));
 }
}
static void _V10_Dloop_D933_k676(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_k676, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 20 16) (bruijn ##.k.2216 1 0) (close _V10_Dloop_D933_lambda215) (bruijn ##.loop.933 2 0))
    V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_lambda215, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D933_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D933_lambda214, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D933_lambda214, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D933_k674) (close _V10_Dloop_D933_k676))
    V_CALL_FUNC(_V10_Dloop_D933_k674, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_k676, env)}));
 }
}
static void _V10_Doptimize__let_D888_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda213, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda213, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D933_lambda214)) ((bruijn ##.loop.933 0 0) (bruijn ##.k.2215 1 0) (##inline ##vcore.car (bruijn ##.expr.258.930 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D933_lambda214, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
 }
}
static void _V10_Doptimize__let_D888_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda212, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 16 36) (bruijn ##.k.2214 0 0) (close _V10_Doptimize__let_D888_lambda213))
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda213, env)}));
 }
}
static void _V10_Dloop_D944_k681(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_k681, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.267.943 4 1) (bruijn ##.k.2243 1 0) (bruijn ##.expr.269.945 2 1) (bruijn ##.x.2244 0 0))
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
 }
}
static void _V10_Dloop_D944_k680(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_k680, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.269.945 1 1))) ((bruijn ##.reverse.361 22 15) (close _V10_Dloop_D944_k681) (bruijn ##.xs.266.946 1 2)) ((bruijn ##.k.2243 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 22-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_k681, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D944_k684(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_k684, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.267.943 7 1) (bruijn ##.k.2237 2 0) (bruijn ##.expr.269.945 5 1) (bruijn ##.x.2239 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
 }
}
static void _V10_Dloop_D944_k683(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_k683, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 25 15) (close _V10_Dloop_D944_k684) (bruijn ##.xs.266.946 4 2))
    V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_k684, env)}),
      upenv->up->up->up->vars[2]);
 }
}
static void _V10_Dloop_D944_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_lambda222, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_lambda222, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.268.947 0 1) (close _V10_Dloop_D944_k683) (##inline ##vcore.cdr (bruijn ##.expr.269.945 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.269.945 3 1)) (bruijn ##.xs.266.946 3 2)))
    V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_k683, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
 }
}
static void _V10_Dloop_D944_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_lambda221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_lambda221, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 23 36) (bruijn ##.k.2236 0 0) (close _V10_Dloop_D944_lambda222))
    V_CALL(VGetArg(upenv, 23-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_lambda222, env)}));
 }
}
static void _V10_Dloop_D944_k682(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_k682, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 22 16) (bruijn ##.k.2234 1 0) (close _V10_Dloop_D944_lambda221) (bruijn ##.loop.944 2 0))
    V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_lambda221, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D944_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D944_lambda220, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D944_lambda220, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D944_k680) (close _V10_Dloop_D944_k682))
    V_CALL_FUNC(_V10_Dloop_D944_k680, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_k682, env)}));
 }
}
static void _V10_Doptimize__let_D888_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda219, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda219, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D944_lambda220)) ((bruijn ##.loop.944 0 0) (bruijn ##.k.2233 1 0) (##inline ##vcore.cdr (bruijn ##.expr.256.928 9 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D944_lambda220, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 0)),
      VNULL);
    }
 }
}
static void _V10_Doptimize__let_D888_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda218, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 18 36) (bruijn ##.k.2232 0 0) (close _V10_Doptimize__let_D888_lambda219))
    V_CALL(VGetArg(upenv, 18-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda219, env)}));
 }
}
static void _V10_Doptimize__let_D888_k689(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k689, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2250 1 0) ((bruijn ##.compiler-error.364 23 18) (bruijn ##.k.2251 0 0) (##string ##.string.2610)) ((bruijn ##.k.2251 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 18), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D2610.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k691(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k691, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 19 1) (bruijn ##.k.2246 6 0) (bruijn ##.x.2248 0 0))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k690(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k690, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 23 17) (close _V10_Doptimize__let_D888_k691) (bruijn ##.optimize-atom.891 20 4) (bruijn ##.let-expr.904 19 1))
    V_CALL(VGetArg(upenv, 23-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k691, env)}),
      VGetArg(upenv, 20-1, 4),
      VGetArg(upenv, 19-1, 1));
 }
}
static void _V10_Doptimize__let_D888_k688(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k688, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k689) (close _V10_Doptimize__let_D888_k690))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k689, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k690, env)}));
 }
}
static void _V10_Doptimize__let_D888_k687(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k687, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 21 24) (close _V10_Doptimize__let_D888_k688) (bruijn ##.x.2252 0 0))
    V_CALL(VGetArg(upenv, 21-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k688, env)}),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k686(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k686, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.373 20 27) (close _V10_Doptimize__let_D888_k687) (bruijn ##.x.2253 1 0) (bruijn ##.x.2254 0 0))
    V_CALL(VGetArg(upenv, 20-1, 27), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k687, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k685(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k685, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.371 19 25) (close _V10_Doptimize__let_D888_k686) (bruijn ##.xs.950 1 2))
    V_CALL(VGetArg(upenv, 19-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k686, env)}),
      upenv->vars[2]);
 }
}
static void _V10_Doptimize__let_D888_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda223, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda223, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.949 0 1)) ((bruijn ##.length.371 18 25) (close _V10_Doptimize__let_D888_k685) (bruijn ##.ys.939 2 2)) ((bruijn ##.k.2246 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 18-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k685, env)}),
      upenv->up->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k679(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k679, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.264.940 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.264.940 0 0))) ((bruijn ##.call-with-values.362 17 16) (bruijn ##.k.2228 1 0) (close _V10_Doptimize__let_D888_lambda218) (close _V10_Doptimize__let_D888_lambda223)) ((bruijn ##.k.2228 1 0) #f)) ((bruijn ##.k.2228 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 17-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda218, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda223, env)}));
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
static void _V10_Doptimize__let_D888_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda217, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda217, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.938 0 1)) ((close _V10_Doptimize__let_D888_k679) (##inline ##vcore.cdr (bruijn ##.expr.258.930 1 0))) ((bruijn ##.k.2228 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k679, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k673(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k673, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.258.930 0 0)) ((bruijn ##.call-with-values.362 15 16) (bruijn ##.k.2210 3 0) (close _V10_Doptimize__let_D888_lambda212) (close _V10_Doptimize__let_D888_lambda217)) ((bruijn ##.k.2210 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda212, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda217, env)}));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k672(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k672, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2212 0 0) ((close _V10_Doptimize__let_D888_k673) (##inline ##vcore.cdr (bruijn ##.expr.257.929 1 0))) ((bruijn ##.k.2210 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k673, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k671(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k671, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.257.929 0 0)) ((bruijn ##.equal?.383 13 37) (close _V10_Doptimize__let_D888_k672) 'lambda (##inline ##vcore.car (bruijn ##.expr.257.929 0 0))) ((bruijn ##.k.2210 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k672, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k670(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k670, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.256.928 1 0)) ((close _V10_Doptimize__let_D888_k671) (##inline ##vcore.car (bruijn ##.expr.256.928 1 0))) ((bruijn ##.k.2210 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k671, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k698(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k698, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k698, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 14 1) (bruijn ##.k.2196 5 0) (bruijn ##.x.2204 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k697(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k697, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k697, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.273.954 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.273.954 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.270.951 5 0))) ((bruijn ##.optimize-apply.890 15 3) (close _V10_Doptimize__let_D888_k698) (##inline ##vcore.car (bruijn ##.expr.273.954 0 0))) ((bruijn ##.k.2196 4 0) #f)) ((bruijn ##.k.2196 4 0) #f)) ((bruijn ##.k.2196 4 0) #f))
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
        VGetArg(upenv, 5-1, 0))))) {
    V_CALL(VGetArg(upenv, 15-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k698, env)}),
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
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
static void _V10_Doptimize__let_D888_k696(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k696, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k696, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.272.953 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.272.953 0 0))) ((close _V10_Doptimize__let_D888_k697) (##inline ##vcore.cdr (bruijn ##.expr.272.953 0 0))) ((bruijn ##.k.2196 3 0) #f)) ((bruijn ##.k.2196 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k697, env, runtime,
      VInlineCdr2(runtime,
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
static void _V10_Doptimize__let_D888_k695(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k695, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k695, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2198 0 0) ((close _V10_Doptimize__let_D888_k696) (##inline ##vcore.cdr (bruijn ##.expr.271.952 1 0))) ((bruijn ##.k.2196 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k696, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k694(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k694, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k694, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.271.952 0 0)) ((bruijn ##.equal?.383 15 37) (close _V10_Doptimize__let_D888_k695) 'continuation (##inline ##vcore.car (bruijn ##.expr.271.952 0 0))) ((bruijn ##.k.2196 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k695, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k693(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k693, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k693, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.270.951 1 0)) ((close _V10_Doptimize__let_D888_k694) (##inline ##vcore.car (bruijn ##.expr.270.951 1 0))) ((bruijn ##.k.2196 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k694, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k711(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k711, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k711, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2188 1 0) ((bruijn ##.compiler-error.364 27 18) (bruijn ##.k.2189 0 0) (##string ##.string.2610)) ((bruijn ##.k.2189 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 27-1, 18), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D2610.sym, VPOINTER_OTHER));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k714(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k714, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k714, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 24 1) (bruijn ##.k.2175 13 0) (##inline ##vcore.cons (bruijn ##.x.2183 1 0) (bruijn ##.x.2184 0 0)))
    V_CALL(VGetArg(upenv, 24-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
 }
}
static void _V10_Doptimize__let_D888_k713(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k713, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k713, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 28 17) (close _V10_Doptimize__let_D888_k714) (bruijn ##.optimize-atom.891 25 4) (bruijn ##.xs.962 6 0))
    V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k714, env)}),
      VGetArg(upenv, 25-1, 4),
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Doptimize__let_D888_k712(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k712, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k712, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.891 24 4) (close _V10_Doptimize__let_D888_k713) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.ys.959 7 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.277.960 6 0)) '()))))
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k713, env)}),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)),
        VNULL))));
 }
}
static void _V10_Doptimize__let_D888_k710(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k710, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k710, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k711) (close _V10_Doptimize__let_D888_k712))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k711, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k712, env)}));
 }
}
static void _V10_Doptimize__let_D888_k709(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k709, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k709, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.370 25 24) (close _V10_Doptimize__let_D888_k710) (bruijn ##.x.2190 0 0))
    V_CALL(VGetArg(upenv, 25-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k710, env)}),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k708(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k708, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k708, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<=.372 24 26) (close _V10_Doptimize__let_D888_k709) (bruijn ##.x.2191 1 0) (bruijn ##.x.2192 0 0))
    V_CALL(VGetArg(upenv, 24-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k709, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k707(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k707, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k707, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.371 23 25) (close _V10_Doptimize__let_D888_k708) (bruijn ##.xs.962 1 0))
    V_CALL(VGetArg(upenv, 23-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k708, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Doptimize__let_D888_k706(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k706, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k706, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.taillength.396 21 12) (close _V10_Doptimize__let_D888_k707) (bruijn ##.ys.959 2 0))
    V_CALL(VGetArg(upenv, 21-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k707, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__let_D888_k705(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k705, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k705, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.277.960 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.277.960 0 0))) ((close _V10_Doptimize__let_D888_k706) (##inline ##vcore.cdr (bruijn ##.expr.274.956 6 0))) ((bruijn ##.k.2175 5 0) #f)) ((bruijn ##.k.2175 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k706, env, runtime,
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0)));
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
static void _V10_Doptimize__let_D888_k704(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k704, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k704, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k705) (##inline ##vcore.cdr (bruijn ##.expr.276.958 1 0)))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k705, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Doptimize__let_D888_k703(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k703, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k703, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.276.958 0 0)) ((close _V10_Doptimize__let_D888_k704) (##inline ##vcore.car (bruijn ##.expr.276.958 0 0))) ((bruijn ##.k.2175 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k704, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k702(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k702, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k702, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2177 0 0) ((close _V10_Doptimize__let_D888_k703) (##inline ##vcore.cdr (bruijn ##.expr.275.957 1 0))) ((bruijn ##.k.2175 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k703, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k701(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k701, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k701, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.275.957 0 0)) ((bruijn ##.equal?.383 17 37) (close _V10_Doptimize__let_D888_k702) 'lambda (##inline ##vcore.car (bruijn ##.expr.275.957 0 0))) ((bruijn ##.k.2175 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k702, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k700(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k700, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k700, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.274.956 1 0)) ((close _V10_Doptimize__let_D888_k701) (##inline ##vcore.car (bruijn ##.expr.274.956 1 0))) ((bruijn ##.k.2175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k701, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k719(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k719, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k719, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 16 1) (bruijn ##.k.2169 3 0) (bruijn ##.x.2172 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k718(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k718, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k718, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2171 0 0) ((bruijn ##.compiler-error.364 20 18) (close _V10_Doptimize__let_D888_k719) (##string ##.string.2611)) ((bruijn ##.k.2169 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k719, env)}),
      VEncodePointer(&_V10_Dstring_D2611.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k717(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k717, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k717, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.279.964 0 0)) ((bruijn ##.equal?.383 19 37) (close _V10_Doptimize__let_D888_k718) 'continuation (##inline ##vcore.car (bruijn ##.expr.279.964 0 0))) ((bruijn ##.k.2169 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 19-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k718, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k716(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k716, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k716, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.278.963 1 0)) ((close _V10_Doptimize__let_D888_k717) (##inline ##vcore.car (bruijn ##.expr.278.963 1 0))) ((bruijn ##.k.2169 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__let_D888_k717, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__let_D888_k721(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k721, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k721, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.244.905 14 1) (bruijn ##.k.2160 14 0) (bruijn ##.x.2167 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      VGetArg(upenv, 14-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__let_D888_k720(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k720, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k720, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.364 18 18) (close _V10_Doptimize__let_D888_k721) (##string ##.string.2612))
    V_CALL(VGetArg(upenv, 18-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k721, env)}),
      VEncodePointer(&_V10_Dstring_D2612.sym, VPOINTER_OTHER));
 }
}
static void _V10_Doptimize__let_D888_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda226, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k716) (close _V10_Doptimize__let_D888_k720))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k716, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k720, env)}));
 }
}
static void _V10_Doptimize__let_D888_k715(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k715, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k715, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda226) (bruijn ##.input.245.906 10 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda226, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Doptimize__let_D888_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda225, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k700) (close _V10_Doptimize__let_D888_k715))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k700, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k715, env)}));
 }
}
static void _V10_Doptimize__let_D888_k699(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k699, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k699, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda225) (bruijn ##.input.245.906 8 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda225, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Doptimize__let_D888_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda224, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k693) (close _V10_Doptimize__let_D888_k699))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k693, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k699, env)}));
 }
}
static void _V10_Doptimize__let_D888_k692(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k692, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda224) (bruijn ##.input.245.906 6 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda224, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Doptimize__let_D888_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda211, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k670) (close _V10_Doptimize__let_D888_k692))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k670, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k692, env)}));
 }
}
static void _V10_Doptimize__let_D888_k669(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k669, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda211) (bruijn ##.input.245.906 4 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda211, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__let_D888_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda210, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k663) (close _V10_Doptimize__let_D888_k669))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k663, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k669, env)}));
 }
}
static void _V10_Doptimize__let_D888_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_k662, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda210) (bruijn ##.input.245.906 2 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda210, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__let_D888_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda204, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_k620) (close _V10_Doptimize__let_D888_k662))
    V_CALL_FUNC(_V10_Doptimize__let_D888_k620, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_k662, env)}));
 }
}
static void _V10_Doptimize__let_D888_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda203, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D888_lambda204) (bruijn ##.input.245.906 0 0))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda204, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__let_D888_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda202, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda202, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__let_D888_lambda203) (bruijn ##.let-expr.904 1 1))
    V_CALL_FUNC(_V10_Doptimize__let_D888_lambda203, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Doptimize__let_D888_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D888_lambda201, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__let_D888_lambda201, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 4 36) (bruijn ##.k.2159 0 0) (close _V10_Doptimize__let_D888_lambda202))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda202, env)}));
 }
}
static void _V10_Dloop_D972_k727(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k727, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k727, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.290.971 5 1) (bruijn ##.k.2355 2 0) (bruijn ##.expr.292.973 3 1) (bruijn ##.x.2356 1 0) (bruijn ##.x.2357 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D972_k726(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k726, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k726, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 16 15) (close _V10_Dloop_D972_k727) (bruijn ##.vals.289.975 2 3))
    V_CALL(VGetArg(upenv, 16-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k727, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D972_k725(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k725, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k725, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.292.973 1 1))) ((bruijn ##.reverse.361 15 15) (close _V10_Dloop_D972_k726) (bruijn ##.args.288.974 1 2)) ((bruijn ##.k.2355 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 15-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k726, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D972_k731(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k731, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k731, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.294.979 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.294.979 0 0))) ((bruijn ##.kk.291.976 3 1) (bruijn ##.k.2347 1 0) (##inline ##vcore.cdr (bruijn ##.expr.292.973 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.293.977 2 0)) (bruijn ##.args.288.974 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.294.979 0 0)) (bruijn ##.vals.289.975 6 3))) ((bruijn ##.k.2347 1 0) #f)) ((bruijn ##.k.2347 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D972_k730(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k730, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k730, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.293.977 1 0)) ((close _V10_Dloop_D972_k731) (##inline ##vcore.cdr (bruijn ##.expr.293.977 1 0))) ((bruijn ##.k.2347 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D972_k731, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D972_k734(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k734, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k734, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.290.971 9 1) (bruijn ##.k.2342 4 0) (bruijn ##.expr.292.973 7 1) (bruijn ##.x.2344 1 0) (bruijn ##.x.2345 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D972_k733(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k733, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k733, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 20 15) (close _V10_Dloop_D972_k734) (bruijn ##.vals.289.975 6 3))
    V_CALL(VGetArg(upenv, 20-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k734, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D972_k732(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k732, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k732, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 19 15) (close _V10_Dloop_D972_k733) (bruijn ##.args.288.974 5 2))
    V_CALL(VGetArg(upenv, 19-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k733, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D972_k729(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k729, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k729, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D972_k730) (close _V10_Dloop_D972_k732))
    V_CALL_FUNC(_V10_Dloop_D972_k730, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k732, env)}));
 }
}
static void _V10_Dloop_D972_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_lambda235, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_lambda235, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D972_k729) (##inline ##vcore.car (bruijn ##.expr.292.973 3 1)))
    V_CALL_FUNC(_V10_Dloop_D972_k729, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D972_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_lambda234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_lambda234, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 16 36) (bruijn ##.k.2341 0 0) (close _V10_Dloop_D972_lambda235))
    V_CALL(VGetArg(upenv, 16-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_lambda235, env)}));
 }
}
static void _V10_Dloop_D972_k728(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_k728, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_k728, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 15 16) (bruijn ##.k.2339 1 0) (close _V10_Dloop_D972_lambda234) (bruijn ##.loop.972 2 0))
    V_CALL(VGetArg(upenv, 15-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_lambda234, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D972_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D972_lambda233, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D972_lambda233, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D972_k725) (close _V10_Dloop_D972_k728))
    V_CALL_FUNC(_V10_Dloop_D972_k725, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_k728, env)}));
 }
}
static void _V10_Doptimize__letrec_D889_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_lambda232, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda232, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D972_lambda233)) ((bruijn ##.loop.972 0 0) (bruijn ##.k.2338 1 0) (##inline ##vcore.car (bruijn ##.expr.286.969 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D972_lambda233, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Doptimize__letrec_D889_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_lambda231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda231, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 11 36) (bruijn ##.k.2337 0 0) (close _V10_Doptimize__letrec_D889_lambda232))
    V_CALL(VGetArg(upenv, 11-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_lambda232, env)}));
 }
}
static void _V10_Doptimize__letrec_D889_k738(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k738, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k738, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.283.966 10 1) (bruijn ##.k.2359 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.2365 1 0) (##inline ##vcore.cons (bruijn ##.x.2367 0 0) '()))))
    V_CALL(VGetArg(upenv, 10-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Doptimize__letrec_D889_k737(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k737, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k737, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.890 11 3) (close _V10_Doptimize__letrec_D889_k738) (##inline ##vcore.car (bruijn ##.expr.295.984 2 0)))
    V_CALL(VGetArg(upenv, 11-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_k738, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Doptimize__letrec_D889_k736(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k736, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k736, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 13 17) (close _V10_Doptimize__letrec_D889_k737) (bruijn ##.list.369 13 23) (bruijn ##.args.982 2 2) (bruijn ##.x.2368 0 0))
    V_CALL(VGetArg(upenv, 13-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_k737, env)}),
      VGetArg(upenv, 13-1, 23),
      upenv->up->vars[2],
      _var0);
 }
}
static void _V10_Doptimize__letrec_D889_k735(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k735, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k735, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.295.984 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.295.984 0 0))) ((bruijn ##.map.363 12 17) (close _V10_Doptimize__letrec_D889_k736) (bruijn ##.optimize-atom.891 9 4) (bruijn ##.vals.983 1 3)) ((bruijn ##.k.2359 1 0) #f)) ((bruijn ##.k.2359 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 12-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_k736, env)}),
      VGetArg(upenv, 9-1, 4),
      upenv->vars[3]);
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
static void _V10_Doptimize__letrec_D889_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_lambda236, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda236, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.981 0 1)) ((close _V10_Doptimize__letrec_D889_k735) (##inline ##vcore.cdr (bruijn ##.expr.286.969 1 0))) ((bruijn ##.k.2359 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL_FUNC(_V10_Doptimize__letrec_D889_k735, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__letrec_D889_k724(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k724, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k724, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.286.969 0 0)) ((bruijn ##.call-with-values.362 10 16) (bruijn ##.k.2334 2 0) (close _V10_Doptimize__letrec_D889_lambda231) (close _V10_Doptimize__letrec_D889_lambda236)) ((bruijn ##.k.2334 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 10-1, 16), runtime,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_lambda231, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_lambda236, env)}));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__letrec_D889_k723(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k723, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k723, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2335 0 0) ((close _V10_Doptimize__letrec_D889_k724) (##inline ##vcore.cdr (bruijn ##.expr.285.968 2 0))) ((bruijn ##.k.2334 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__letrec_D889_k724, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__letrec_D889_k722(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k722, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k722, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.285.968 1 0)) ((bruijn ##.equal?.383 8 37) (close _V10_Doptimize__letrec_D889_k723) 'letrec (##inline ##vcore.car (bruijn ##.expr.285.968 1 0))) ((bruijn ##.k.2334 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_k723, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__letrec_D889_k739(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_k739, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_k739, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.error.368 8 22) (bruijn ##.k.2331 3 0) (##string ##.string.2604))
    V_CALL(VGetArg(upenv, 8-1, 22), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D2604.sym, VPOINTER_OTHER));
 }
}
static void _V10_Doptimize__letrec_D889_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda230, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__letrec_D889_k722) (close _V10_Doptimize__letrec_D889_k739))
    V_CALL_FUNC(_V10_Doptimize__letrec_D889_k722, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_k739, env)}));
 }
}
static void _V10_Doptimize__letrec_D889_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda229, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__letrec_D889_lambda230) (bruijn ##.input.284.967 0 0))
    V_CALL_FUNC(_V10_Doptimize__letrec_D889_lambda230, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__letrec_D889_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_lambda228, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda228, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__letrec_D889_lambda229) (bruijn ##.letrec-expr.965 1 1))
    V_CALL_FUNC(_V10_Doptimize__letrec_D889_lambda229, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Doptimize__letrec_D889_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D889_lambda227, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__letrec_D889_lambda227, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 4 36) (bruijn ##.k.2330 0 0) (close _V10_Doptimize__letrec_D889_lambda228))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_lambda228, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k743(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k743, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k743, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 6 1) (bruijn ##.k.2462 3 0) (bruijn ##.x.2465 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k742(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k742, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k742, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2464 0 0) ((bruijn ##.optimize-let.888 7 1) (close _V10_Doptimize__apply_D890_k743) (bruijn ##.expr.986 6 1)) ((bruijn ##.k.2462 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k743, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k741(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k741, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k741, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.299.990 0 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Doptimize__apply_D890_k742) 'continuation (##inline ##vcore.car (bruijn ##.expr.299.990 0 0))) ((bruijn ##.k.2462 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k742, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k740(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k740, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k740, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.298.989 1 0)) ((close _V10_Doptimize__apply_D890_k741) (##inline ##vcore.car (bruijn ##.expr.298.989 1 0))) ((bruijn ##.k.2462 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k741, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k748(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k748, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k748, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 8 1) (bruijn ##.k.2456 3 0) (bruijn ##.x.2459 0 0))
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k747(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k747, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k747, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2458 0 0) ((bruijn ##.optimize-let.888 9 1) (close _V10_Doptimize__apply_D890_k748) (bruijn ##.expr.986 8 1)) ((bruijn ##.k.2456 2 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k748, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k746(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k746, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k746, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.301.992 0 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Doptimize__apply_D890_k747) 'lambda (##inline ##vcore.car (bruijn ##.expr.301.992 0 0))) ((bruijn ##.k.2456 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k747, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k745(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k745, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k745, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.300.991 1 0)) ((close _V10_Doptimize__apply_D890_k746) (##inline ##vcore.car (bruijn ##.expr.300.991 1 0))) ((bruijn ##.k.2456 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k746, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k752(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k752, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k752, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 9 1) (bruijn ##.k.2451 2 0) (bruijn ##.x.2453 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k751(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k751, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k751, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2452 0 0) ((bruijn ##.optimize-letrec.889 10 2) (close _V10_Doptimize__apply_D890_k752) (bruijn ##.expr.986 9 1)) ((bruijn ##.k.2451 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k752, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k750(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k750, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k750, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.302.993 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Doptimize__apply_D890_k751) 'letrec (##inline ##vcore.car (bruijn ##.expr.302.993 1 0))) ((bruijn ##.k.2451 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k751, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k762(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k762, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k762, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 18 1) (bruijn ##.k.2433 9 0) (bruijn ##.x.2440 0 0))
    V_CALL(VGetArg(upenv, 18-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k761(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k761, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k761, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.890 19 3) (close _V10_Doptimize__apply_D890_k762) (##inline ##vcore.car (bruijn ##.expr.305.996 5 0)))
    V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k762, env)}),
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)));
 }
}
static void _V10_Doptimize__apply_D890_k760(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k760, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k760, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.400 20 16) (close _V10_Doptimize__apply_D890_k761) (bruijn ##.ref-table.892 18 5) (bruijn ##.bcount.1000 2 0))
    V_CALL(VGetArg(upenv, 20-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k761, env)}),
      VGetArg(upenv, 18-1, 5),
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_k759(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k759, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k759, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D890_k760) (bruijn ##.dummy.319.1002 1 2) (bruijn ##.x.2443 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k760, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V10_Doptimize__apply_D890_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda244, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.count-refs.401 19 17) (bruijn ##.k.2444 0 0) (##inline ##vcore.car (bruijn ##.expr.306.998 2 0)))
    V_CALL(VGetArg(upenv, 19-1, 17), runtime,
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k763(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k763, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k763, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.2445 1 0) (bruijn ##.bpure.1001 2 1) (bruijn ##.bpure.318.1004 1 2))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
 }
}
static void _V10_Doptimize__apply_D890_lambda245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda245, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda245, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D890_k763) (bruijn ##.bcount.1000 1 0) (bruijn ##.bcount.317.1003 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k763, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
static void _V10_Doptimize__apply_D890_k758(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k758, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k758, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.306.998 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.306.998 0 0))) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D890_k759) (close _V10_Doptimize__apply_D890_lambda244) (close _V10_Doptimize__apply_D890_lambda245))) ((bruijn ##.k.2433 4 0) #f)) ((bruijn ##.k.2433 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    V_CALL_FUNC(VCallValues2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k759, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda244, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda245, env)}));
    }
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
static void _V10_Doptimize__apply_D890_k757(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k757, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k757, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.305.996 0 0)) ((close _V10_Doptimize__apply_D890_k758) (##inline ##vcore.cdr (bruijn ##.expr.305.996 0 0))) ((bruijn ##.k.2433 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k758, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k756(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k756, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k756, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.304.995 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.304.995 0 0))) ((close _V10_Doptimize__apply_D890_k757) (##inline ##vcore.cdr (bruijn ##.expr.304.995 0 0))) ((bruijn ##.k.2433 2 0) #f)) ((bruijn ##.k.2433 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k757, env, runtime,
      VInlineCdr2(runtime,
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
static void _V10_Doptimize__apply_D890_k755(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k755, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k755, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2434 0 0) ((close _V10_Doptimize__apply_D890_k756) (##inline ##vcore.cdr (bruijn ##.expr.303.994 2 0))) ((bruijn ##.k.2433 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k756, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k754(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k754, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k754, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.303.994 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Doptimize__apply_D890_k755) 'if (##inline ##vcore.car (bruijn ##.expr.303.994 1 0))) ((bruijn ##.k.2433 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k755, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k773(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k773, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k773, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 20 1) (bruijn ##.k.2415 9 0) (bruijn ##.x.2422 0 0))
    V_CALL(VGetArg(upenv, 20-1, 1), runtime,
      VGetArg(upenv, 9-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k772(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k772, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k772, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.890 21 3) (close _V10_Doptimize__apply_D890_k773) (##inline ##vcore.car (bruijn ##.expr.310.1009 4 0)))
    V_CALL(VGetArg(upenv, 21-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k773, env)}),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k771(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k771, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k771, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.400 22 16) (close _V10_Doptimize__apply_D890_k772) (bruijn ##.ref-table.892 20 5) (bruijn ##.acount.1011 2 0))
    V_CALL(VGetArg(upenv, 22-1, 16), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k772, env)}),
      VGetArg(upenv, 20-1, 5),
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_k770(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k770, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k770, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D890_k771) (bruijn ##.dummy.322.1013 1 2) (bruijn ##.x.2425 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k771, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
 }
}
static void _V10_Doptimize__apply_D890_lambda247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda247, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.count-refs.401 21 17) (bruijn ##.k.2426 0 0) (##inline ##vcore.car (bruijn ##.expr.309.1007 3 0)))
    V_CALL(VGetArg(upenv, 21-1, 17), runtime,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k774(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k774, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k774, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.2427 1 0) (bruijn ##.apure.1012 2 1) (bruijn ##.apure.321.1015 1 2))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
 }
}
static void _V10_Doptimize__apply_D890_lambda248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda248, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda248, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D890_k774) (bruijn ##.acount.1011 1 0) (bruijn ##.acount.320.1014 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k774, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
 }
}
static void _V10_Doptimize__apply_D890_k769(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k769, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k769, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.310.1009 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.310.1009 0 0))) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D890_k770) (close _V10_Doptimize__apply_D890_lambda247) (close _V10_Doptimize__apply_D890_lambda248))) ((bruijn ##.k.2415 4 0) #f)) ((bruijn ##.k.2415 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    V_CALL_FUNC(VCallValues2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k770, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda247, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda248, env)}));
    }
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
static void _V10_Doptimize__apply_D890_k768(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k768, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k768, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.309.1007 0 0)) ((close _V10_Doptimize__apply_D890_k769) (##inline ##vcore.cdr (bruijn ##.expr.309.1007 0 0))) ((bruijn ##.k.2415 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k769, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k767(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k767, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k767, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.308.1006 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.308.1006 0 0))) ((close _V10_Doptimize__apply_D890_k768) (##inline ##vcore.cdr (bruijn ##.expr.308.1006 0 0))) ((bruijn ##.k.2415 2 0) #f)) ((bruijn ##.k.2415 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k768, env, runtime,
      VInlineCdr2(runtime,
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
static void _V10_Doptimize__apply_D890_k766(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k766, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k766, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2416 0 0) ((close _V10_Doptimize__apply_D890_k767) (##inline ##vcore.cdr (bruijn ##.expr.307.1005 2 0))) ((bruijn ##.k.2415 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k767, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k765(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k765, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k765, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.307.1005 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Doptimize__apply_D890_k766) 'if (##inline ##vcore.car (bruijn ##.expr.307.1005 1 0))) ((bruijn ##.k.2415 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k766, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k782(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k782, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k782, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 19 1) (bruijn ##.k.2400 6 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.312.1017 4 0)) (##inline ##vcore.cons (bruijn ##.x.2409 1 0) (##inline ##vcore.cons (bruijn ##.x.2411 0 0) '())))))
    V_CALL(VGetArg(upenv, 19-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->up->vars[0]),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
 }
}
static void _V10_Doptimize__apply_D890_k781(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k781, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k781, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.890 20 3) (close _V10_Doptimize__apply_D890_k782) (##inline ##vcore.car (bruijn ##.expr.314.1021 1 0)))
    V_CALL(VGetArg(upenv, 20-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k782, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k780(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k780, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k780, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.314.1021 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.314.1021 0 0))) ((bruijn ##.optimize-apply.890 19 3) (close _V10_Doptimize__apply_D890_k781) (##inline ##vcore.car (bruijn ##.expr.313.1019 1 0))) ((bruijn ##.k.2400 4 0) #f)) ((bruijn ##.k.2400 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 19-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k781, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
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
static void _V10_Doptimize__apply_D890_k779(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k779, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k779, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.313.1019 0 0)) ((close _V10_Doptimize__apply_D890_k780) (##inline ##vcore.cdr (bruijn ##.expr.313.1019 0 0))) ((bruijn ##.k.2400 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k780, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k778(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k778, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k778, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.312.1017 0 0)) ((close _V10_Doptimize__apply_D890_k779) (##inline ##vcore.cdr (bruijn ##.expr.312.1017 0 0))) ((bruijn ##.k.2400 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k779, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k777(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k777, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k777, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2401 0 0) ((close _V10_Doptimize__apply_D890_k778) (##inline ##vcore.cdr (bruijn ##.expr.311.1016 2 0))) ((bruijn ##.k.2400 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k778, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k776(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k776, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k776, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.311.1016 1 0)) ((bruijn ##.equal?.383 18 37) (close _V10_Doptimize__apply_D890_k777) 'if (##inline ##vcore.car (bruijn ##.expr.311.1016 1 0))) ((bruijn ##.k.2400 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k777, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k790(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k790, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k790, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2398 0 0) ((bruijn ##.lookup-inline-name.366 26 20) (bruijn ##.k.2397 1 0) (bruijn ##.f.1024 5 0)) ((bruijn ##.k.2397 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 26-1, 20), runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k789(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k789, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k789, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.inlining?.886 23 2) ((bruijn ##.symbol?.367 25 21) (close _V10_Doptimize__apply_D890_k790) (bruijn ##.f.1024 4 0)) ((bruijn ##.k.2397 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 23-1, 2))) {
    V_CALL(VGetArg(upenv, 25-1, 21), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k790, env)}),
      upenv->up->up->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k794(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k794, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k794, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.optimize-apply.890 25 3) (bruijn ##.k.2386 2 0) (##inline ##vcore.cons (bruijn ##.x.2388 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##inline (##inline ##vcore.cons (bruijn ##.f.1024 7 0) (bruijn ##.x.2392 0 0))) '())))
    V_CALL(VGetArg(upenv, 25-1, 3), runtime,
      upenv->up->vars[0],
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10inline,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        _var0)),
        VNULL)));
 }
}
static void _V10_Doptimize__apply_D890_k793(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k793, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k793, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 27 17) (close _V10_Doptimize__apply_D890_k794) (bruijn ##.optimize-atom.891 24 4) (bruijn ##.xs.1027 3 0))
    V_CALL(VGetArg(upenv, 27-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k794, env)}),
      VGetArg(upenv, 24-1, 4),
      upenv->up->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_k798(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k798, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k798, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.cons.365 30 19) (bruijn ##.k.2386 4 0) (bruijn ##.x.2393 3 0) (bruijn ##.x.2394 0 0))
    V_CALL(VGetArg(upenv, 30-1, 19), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k797(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k797, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k797, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.365 29 19) (close _V10_Doptimize__apply_D890_k798) (bruijn ##.x.2395 1 0) (bruijn ##.x.2396 0 0))
    V_CALL(VGetArg(upenv, 29-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k798, env)}),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k796(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k796, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k796, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.363 28 17) (close _V10_Doptimize__apply_D890_k797) (bruijn ##.optimize-atom.891 25 4) (bruijn ##.xs.1027 4 0))
    V_CALL(VGetArg(upenv, 28-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k797, env)}),
      VGetArg(upenv, 25-1, 4),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_k795(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k795, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k795, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.891 24 4) (close _V10_Doptimize__apply_D890_k796) (bruijn ##.k.1026 4 0))
    V_CALL(VGetArg(upenv, 24-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k796, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_k792(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k792, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k792, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2385 1 0) ((bruijn ##.optimize-atom.891 23 4) (close _V10_Doptimize__apply_D890_k793) (bruijn ##.k.1026 3 0)) ((bruijn ##.optimize-atom.891 23 4) (close _V10_Doptimize__apply_D890_k795) (bruijn ##.f.1024 5 0)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k793, env)}),
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 23-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k795, env)}),
      VGetArg(upenv, 5-1, 0));
}
 }
}
static void _V10_Doptimize__apply_D890_k799(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k799, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k799, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 21 1) (bruijn ##.k.2382 6 0) (bruijn ##.x.2384 0 0))
    V_CALL(VGetArg(upenv, 21-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k791(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k791, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k791, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k792) (close _V10_Doptimize__apply_D890_k799))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k792, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k799, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k788(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k788, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k788, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k789) (close _V10_Doptimize__apply_D890_k791))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k789, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k791, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k787(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k787, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k787, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k788) (##inline ##vcore.cdr (bruijn ##.expr.316.1025 1 0)))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k788, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k786(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k786, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k786, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.316.1025 0 0)) ((close _V10_Doptimize__apply_D890_k787) (##inline ##vcore.car (bruijn ##.expr.316.1025 0 0))) ((bruijn ##.k.2382 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k787, env, runtime,
      VInlineCar2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k785(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k785, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k785, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k786) (##inline ##vcore.cdr (bruijn ##.expr.315.1023 2 0)))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k786, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
 }
}
static void _V10_Doptimize__apply_D890_k784(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k784, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k784, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.315.1023 1 0)) ((close _V10_Doptimize__apply_D890_k785) (##inline ##vcore.car (bruijn ##.expr.315.1023 1 0))) ((bruijn ##.k.2382 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k785, env, runtime,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__apply_D890_k801(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k801, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k801, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.296.987 16 1) (bruijn ##.k.2372 16 0) (bruijn ##.x.2380 0 0))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      VGetArg(upenv, 16-1, 0),
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_k800(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k800, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k800, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-error.364 20 18) (close _V10_Doptimize__apply_D890_k801) (##string ##.string.2613) (bruijn ##.expr.986 16 1))
    V_CALL(VGetArg(upenv, 20-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k801, env)}),
      VEncodePointer(&_V10_Dstring_D2613.sym, VPOINTER_OTHER),
      VGetArg(upenv, 16-1, 1));
 }
}
static void _V10_Doptimize__apply_D890_lambda250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda250, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k784) (close _V10_Doptimize__apply_D890_k800))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k784, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k800, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k783(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k783, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k783, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda250) (bruijn ##.input.297.988 12 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda250, env, runtime,
      VGetArg(upenv, 12-1, 0));
 }
}
static void _V10_Doptimize__apply_D890_lambda249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda249, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k776) (close _V10_Doptimize__apply_D890_k783))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k776, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k783, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k775(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k775, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k775, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda249) (bruijn ##.input.297.988 10 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda249, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Doptimize__apply_D890_lambda246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda246, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k765) (close _V10_Doptimize__apply_D890_k775))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k765, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k775, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k764(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k764, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k764, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda246) (bruijn ##.input.297.988 8 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda246, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Doptimize__apply_D890_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda243, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k754) (close _V10_Doptimize__apply_D890_k764))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k754, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k764, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k753(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k753, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k753, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda243) (bruijn ##.input.297.988 6 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda243, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Doptimize__apply_D890_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda242, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k750) (close _V10_Doptimize__apply_D890_k753))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k750, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k753, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k749(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k749, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k749, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda242) (bruijn ##.input.297.988 4 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda242, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda241, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k745) (close _V10_Doptimize__apply_D890_k749))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k745, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k749, env)}));
 }
}
static void _V10_Doptimize__apply_D890_k744(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_k744, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_k744, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda241) (bruijn ##.input.297.988 2 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda241, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__apply_D890_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda240, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_k740) (close _V10_Doptimize__apply_D890_k744))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_k740, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_k744, env)}));
 }
}
static void _V10_Doptimize__apply_D890_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda239, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D890_lambda240) (bruijn ##.input.297.988 0 0))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda240, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__apply_D890_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda238, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda238, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__apply_D890_lambda239) (bruijn ##.expr.986 1 1))
    V_CALL_FUNC(_V10_Doptimize__apply_D890_lambda239, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Doptimize__apply_D890_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D890_lambda237, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__apply_D890_lambda237, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 4 36) (bruijn ##.k.2371 0 0) (close _V10_Doptimize__apply_D890_lambda238))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda238, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k803(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k803, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k803, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2528 0 0) ((bruijn ##.kk.323.1029 4 1) (bruijn ##.k.2527 1 0) (bruijn ##.expr.1028 5 1)) ((bruijn ##.k.2527 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k802(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k802, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k802, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.325.1031 1 0)) ((bruijn ##.equal?.383 8 37) (close _V10_Doptimize__atom_D891_k803) 'quote (##inline ##vcore.car (bruijn ##.expr.325.1031 1 0))) ((bruijn ##.k.2527 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 8-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k803, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k806(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k806, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k806, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2524 0 0) ((bruijn ##.kk.323.1029 6 1) (bruijn ##.k.2523 1 0) (bruijn ##.expr.1028 7 1)) ((bruijn ##.k.2523 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 7-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k805(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k805, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k805, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.326.1032 1 0)) ((bruijn ##.equal?.383 10 37) (close _V10_Doptimize__atom_D891_k806) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.326.1032 1 0))) ((bruijn ##.k.2523 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 10-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k806, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k809(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k809, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k809, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2520 0 0) ((bruijn ##.kk.323.1029 8 1) (bruijn ##.k.2519 1 0) (bruijn ##.expr.1028 9 1)) ((bruijn ##.k.2519 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 9-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k808(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k808, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k808, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.327.1033 1 0)) ((bruijn ##.equal?.383 12 37) (close _V10_Doptimize__atom_D891_k809) '##inline (##inline ##vcore.car (bruijn ##.expr.327.1033 1 0))) ((bruijn ##.k.2519 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 12-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k809, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k813(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k813, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k813, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.323.1029 11 1) (bruijn ##.k.2514 2 0) (bruijn ##.x.2516 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__atom_D891_k812(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k812, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k812, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2515 0 0) ((bruijn ##.optimize-lambda.887 12 0) (close _V10_Doptimize__atom_D891_k813) (bruijn ##.expr.1028 11 1)) ((bruijn ##.k.2514 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k813, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k811(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k811, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k811, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.328.1034 1 0)) ((bruijn ##.equal?.383 14 37) (close _V10_Doptimize__atom_D891_k812) 'lambda (##inline ##vcore.car (bruijn ##.expr.328.1034 1 0))) ((bruijn ##.k.2514 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 14-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k812, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k817(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k817, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k817, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.323.1029 13 1) (bruijn ##.k.2509 2 0) (bruijn ##.x.2511 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__atom_D891_k816(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k816, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k816, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2510 0 0) ((bruijn ##.optimize-lambda.887 14 0) (close _V10_Doptimize__atom_D891_k817) (bruijn ##.expr.1028 13 1)) ((bruijn ##.k.2509 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k817, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k815(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k815, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k815, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.329.1035 1 0)) ((bruijn ##.equal?.383 16 37) (close _V10_Doptimize__atom_D891_k816) 'continuation (##inline ##vcore.car (bruijn ##.expr.329.1035 1 0))) ((bruijn ##.k.2509 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k816, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D1039_k823(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k823, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k823, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.334.1038 5 1) (bruijn ##.k.2496 2 0) (bruijn ##.expr.336.1040 3 1) (bruijn ##.x.2497 1 0) (bruijn ##.x.2498 0 0))
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D1039_k822(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k822, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k822, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 25 15) (close _V10_Dloop_D1039_k823) (bruijn ##.body.333.1042 2 3))
    V_CALL(VGetArg(upenv, 25-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k823, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Dloop_D1039_k821(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k821, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k821, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.336.1040 1 1))) ((bruijn ##.reverse.361 24 15) (close _V10_Dloop_D1039_k822) (bruijn ##.args.332.1041 1 2)) ((bruijn ##.k.2496 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    V_CALL(VGetArg(upenv, 24-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k822, env)}),
      upenv->vars[2]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D1039_k827(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k827, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k827, runtime, upenv, 1, argc, _var0) {
  // (if (##inline ##vcore.pair? (bruijn ##.expr.338.1046 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.338.1046 0 0))) ((bruijn ##.kk.335.1043 3 1) (bruijn ##.k.2488 1 0) (##inline ##vcore.cdr (bruijn ##.expr.336.1040 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.337.1044 2 0)) (bruijn ##.args.332.1041 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.338.1046 0 0)) (bruijn ##.body.333.1042 6 3))) ((bruijn ##.k.2488 1 0) #f)) ((bruijn ##.k.2488 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(upenv->up->up->vars[1], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
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
static void _V10_Dloop_D1039_k826(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k826, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k826, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.337.1044 1 0)) ((close _V10_Dloop_D1039_k827) (##inline ##vcore.cdr (bruijn ##.expr.337.1044 1 0))) ((bruijn ##.k.2488 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL_FUNC(_V10_Dloop_D1039_k827, env, runtime,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D1039_k830(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k830, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k830, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.334.1038 9 1) (bruijn ##.k.2483 4 0) (bruijn ##.expr.336.1040 7 1) (bruijn ##.x.2485 1 0) (bruijn ##.x.2486 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D1039_k829(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k829, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k829, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 29 15) (close _V10_Dloop_D1039_k830) (bruijn ##.body.333.1042 6 3))
    V_CALL(VGetArg(upenv, 29-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k830, env)}),
      VGetArg(upenv, 6-1, 3));
 }
}
static void _V10_Dloop_D1039_k828(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k828, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k828, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.361 28 15) (close _V10_Dloop_D1039_k829) (bruijn ##.args.332.1041 5 2))
    V_CALL(VGetArg(upenv, 28-1, 15), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k829, env)}),
      VGetArg(upenv, 5-1, 2));
 }
}
static void _V10_Dloop_D1039_k825(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k825, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k825, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D1039_k826) (close _V10_Dloop_D1039_k828))
    V_CALL_FUNC(_V10_Dloop_D1039_k826, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k828, env)}));
 }
}
static void _V10_Dloop_D1039_lambda264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_lambda264, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_lambda264, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D1039_k825) (##inline ##vcore.car (bruijn ##.expr.336.1040 3 1)))
    V_CALL_FUNC(_V10_Dloop_D1039_k825, env, runtime,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
 }
}
static void _V10_Dloop_D1039_lambda263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_lambda263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_lambda263, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 25 36) (bruijn ##.k.2482 0 0) (close _V10_Dloop_D1039_lambda264))
    V_CALL(VGetArg(upenv, 25-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_lambda264, env)}));
 }
}
static void _V10_Dloop_D1039_k824(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_k824, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_k824, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call-with-values.362 24 16) (bruijn ##.k.2480 1 0) (close _V10_Dloop_D1039_lambda263) (bruijn ##.loop.1039 2 0))
    V_CALL(VGetArg(upenv, 24-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_lambda263, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10_Dloop_D1039_lambda262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D1039_lambda262, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D1039_lambda262, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D1039_k821) (close _V10_Dloop_D1039_k824))
    V_CALL_FUNC(_V10_Dloop_D1039_k821, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_k824, env)}));
 }
}
static void _V10_Doptimize__atom_D891_lambda261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda261, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda261, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D1039_lambda262)) ((bruijn ##.loop.1039 0 0) (bruijn ##.k.2479 1 0) (##inline ##vcore.cdr (bruijn ##.expr.330.1036 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D1039_lambda262, env)});
    V_CALL(env->vars[0], runtime,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
 }
}
static void _V10_Doptimize__atom_D891_lambda260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda260, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 20 36) (bruijn ##.k.2478 0 0) (close _V10_Doptimize__atom_D891_lambda261))
    V_CALL(VGetArg(upenv, 20-1, 36), runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda261, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k831(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k831, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k831, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.323.1029 16 1) (bruijn ##.k.2500 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.2503 0 0)))
    V_CALL(VGetArg(upenv, 16-1, 1), runtime,
      upenv->vars[0],
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
 }
}
static void _V10_Doptimize__atom_D891_k832(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k832, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k832, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.2504 1 0) (##inline ##vcore.cons (bruijn ##.args.1051 1 1) (##inline ##vcore.cons (bruijn ##.x.2506 0 0) '())))
    V_CALL(upenv->vars[0], runtime,
      VInlineCons2(runtime,
        upenv->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
 }
}
static void _V10_Doptimize__atom_D891_lambda266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda266, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda266, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.optimize-apply.890 18 3) (close _V10_Doptimize__atom_D891_k832) (bruijn ##.body.1052 0 2))
    V_CALL(VGetArg(upenv, 18-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k832, env)}),
      _var2);
 }
}
static void _V10_Doptimize__atom_D891_lambda265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda265, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda265, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.1048 0 1)) ((bruijn ##.map.363 20 17) (close _V10_Doptimize__atom_D891_k831) (close _V10_Doptimize__atom_D891_lambda266) (bruijn ##.args.1049 0 2) (bruijn ##.body.1050 0 3)) ((bruijn ##.k.2500 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    V_CALL(VGetArg(upenv, 20-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k831, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda266, env)}),
      _var2,
      _var3);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k820(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k820, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k820, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2477 0 0) ((bruijn ##.call-with-values.362 19 16) (bruijn ##.k.2476 1 0) (close _V10_Doptimize__atom_D891_lambda260) (close _V10_Doptimize__atom_D891_lambda265)) ((bruijn ##.k.2476 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 19-1, 16), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda260, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda265, env)}));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k819(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k819, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k819, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.330.1036 1 0)) ((bruijn ##.equal?.383 18 37) (close _V10_Doptimize__atom_D891_k820) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.330.1036 1 0))) ((bruijn ##.k.2476 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 18-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k820, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__atom_D891_k833(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k833, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k833, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.323.1029 13 1) (bruijn ##.k.2468 13 0) (bruijn ##.expr.1028 14 1))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 14-1, 1));
 }
}
static void _V10_Doptimize__atom_D891_lambda259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda259, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k819) (close _V10_Doptimize__atom_D891_k833))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k819, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k833, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k818(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k818, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k818, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda259) (bruijn ##.input.324.1030 10 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda259, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Doptimize__atom_D891_lambda258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda258, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k815) (close _V10_Doptimize__atom_D891_k818))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k815, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k818, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k814(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k814, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k814, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda258) (bruijn ##.input.324.1030 8 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda258, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Doptimize__atom_D891_lambda257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda257, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k811) (close _V10_Doptimize__atom_D891_k814))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k811, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k814, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k810(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k810, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k810, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda257) (bruijn ##.input.324.1030 6 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda257, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Doptimize__atom_D891_lambda256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda256, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k808) (close _V10_Doptimize__atom_D891_k810))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k808, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k810, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k807(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k807, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k807, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda256) (bruijn ##.input.324.1030 4 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda256, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__atom_D891_lambda255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda255, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k805) (close _V10_Doptimize__atom_D891_k807))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k805, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k807, env)}));
 }
}
static void _V10_Doptimize__atom_D891_k804(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_k804, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_k804, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda255) (bruijn ##.input.324.1030 2 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda255, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__atom_D891_lambda254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda254, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_k802) (close _V10_Doptimize__atom_D891_k804))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_k802, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_k804, env)}));
 }
}
static void _V10_Doptimize__atom_D891_lambda253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda253, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D891_lambda254) (bruijn ##.input.324.1030 0 0))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda254, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__atom_D891_lambda252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda252, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda252, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__atom_D891_lambda253) (bruijn ##.expr.1028 1 1))
    V_CALL_FUNC(_V10_Doptimize__atom_D891_lambda253, env, runtime,
      upenv->vars[1]);
 }
}
static void _V10_Doptimize__atom_D891_lambda251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D891_lambda251, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__atom_D891_lambda251, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.call/cc.382 4 36) (bruijn ##.k.2467 0 0) (close _V10_Doptimize__atom_D891_lambda252))
    V_CALL(upenv->up->up->up->vars[36], runtime,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda252, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k837(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k837, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k837, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2561 0 0) ((bruijn ##.kk.231.1055 4 1) (bruijn ##.k.2560 1 0) (bruijn ##.expr.885 8 1)) ((bruijn ##.k.2560 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k836(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k836, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k836, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.233.1057 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Doptimize__impl_D402_k837) 'quote (##inline ##vcore.car (bruijn ##.expr.233.1057 1 0))) ((bruijn ##.k.2560 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k837, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k840(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k840, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k840, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2557 0 0) ((bruijn ##.kk.231.1055 6 1) (bruijn ##.k.2556 1 0) (bruijn ##.expr.885 10 1)) ((bruijn ##.k.2556 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 10-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k839(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k839, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k839, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.234.1058 1 0)) ((bruijn ##.equal?.383 11 37) (close _V10_Doptimize__impl_D402_k840) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.234.1058 1 0))) ((bruijn ##.k.2556 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k840, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k843(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k843, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k843, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2553 0 0) ((bruijn ##.kk.231.1055 8 1) (bruijn ##.k.2552 1 0) (bruijn ##.expr.885 12 1)) ((bruijn ##.k.2552 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 1), runtime,
      upenv->vars[0],
      VGetArg(upenv, 12-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k842(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k842, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k842, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.235.1059 1 0)) ((bruijn ##.equal?.383 13 37) (close _V10_Doptimize__impl_D402_k843) '##inline (##inline ##vcore.car (bruijn ##.expr.235.1059 1 0))) ((bruijn ##.k.2552 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 13-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k843, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k847(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k847, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k847, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.231.1055 11 1) (bruijn ##.k.2547 2 0) (bruijn ##.x.2549 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__impl_D402_k846(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k846, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k846, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2548 0 0) ((bruijn ##.optimize-lambda.887 13 0) (close _V10_Doptimize__impl_D402_k847) (bruijn ##.expr.885 14 1)) ((bruijn ##.k.2547 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k847, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k845(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k845, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k845, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.236.1060 1 0)) ((bruijn ##.equal?.383 15 37) (close _V10_Doptimize__impl_D402_k846) 'lambda (##inline ##vcore.car (bruijn ##.expr.236.1060 1 0))) ((bruijn ##.k.2547 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 15-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k846, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k851(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k851, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k851, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.231.1055 13 1) (bruijn ##.k.2542 2 0) (bruijn ##.x.2544 0 0))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__impl_D402_k850(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k850, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k850, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2543 0 0) ((bruijn ##.optimize-lambda.887 15 0) (close _V10_Doptimize__impl_D402_k851) (bruijn ##.expr.885 16 1)) ((bruijn ##.k.2542 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k851, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k849(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k849, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k849, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.237.1061 1 0)) ((bruijn ##.equal?.383 17 37) (close _V10_Doptimize__impl_D402_k850) 'continuation (##inline ##vcore.car (bruijn ##.expr.237.1061 1 0))) ((bruijn ##.k.2542 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 17-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k850, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k854(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k854, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k854, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.231.1055 14 1) (bruijn ##.k.2539 1 0) (bruijn ##.x.2540 0 0))
    V_CALL(VGetArg(upenv, 14-1, 1), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Doptimize__impl_D402_k853(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k853, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k853, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.238.1062 1 0)) ((bruijn ##.optimize-apply.890 16 3) (close _V10_Doptimize__impl_D402_k854) (bruijn ##.expr.885 17 1)) ((bruijn ##.k.2539 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 16-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k854, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize__impl_D402_k855(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k855, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k855, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.231.1055 13 1) (bruijn ##.k.2531 13 0) (bruijn ##.expr.885 17 1))
    V_CALL(VGetArg(upenv, 13-1, 1), runtime,
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 17-1, 1));
 }
}
static void _V10_Doptimize__impl_D402_lambda274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda274, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k853) (close _V10_Doptimize__impl_D402_k855))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k853, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k855, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k852(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k852, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k852, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda274) (bruijn ##.input.232.1056 10 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda274, env, runtime,
      VGetArg(upenv, 10-1, 0));
 }
}
static void _V10_Doptimize__impl_D402_lambda273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda273, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k849) (close _V10_Doptimize__impl_D402_k852))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k849, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k852, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k848(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k848, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k848, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda273) (bruijn ##.input.232.1056 8 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda273, env, runtime,
      VGetArg(upenv, 8-1, 0));
 }
}
static void _V10_Doptimize__impl_D402_lambda272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda272, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k845) (close _V10_Doptimize__impl_D402_k848))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k845, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k848, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k844(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k844, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k844, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda272) (bruijn ##.input.232.1056 6 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda272, env, runtime,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Doptimize__impl_D402_lambda271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda271, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k842) (close _V10_Doptimize__impl_D402_k844))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k842, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k844, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k841(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k841, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k841, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda271) (bruijn ##.input.232.1056 4 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda271, env, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Doptimize__impl_D402_lambda270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda270, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k839) (close _V10_Doptimize__impl_D402_k841))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k839, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k841, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k838(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k838, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k838, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda270) (bruijn ##.input.232.1056 2 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda270, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize__impl_D402_lambda269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda269, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_k836) (close _V10_Doptimize__impl_D402_k838))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_k836, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k838, env)}));
 }
}
static void _V10_Doptimize__impl_D402_lambda268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda268, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D402_lambda269) (bruijn ##.input.232.1056 0 0))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda269, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize__impl_D402_lambda267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_lambda267, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda267, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__impl_D402_lambda268) (bruijn ##.expr.885 4 1))
    V_CALL_FUNC(_V10_Doptimize__impl_D402_lambda268, env, runtime,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Doptimize__impl_D402_k835(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k835, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k835, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 5 36) (bruijn ##.k.2144 3 0) (close _V10_Doptimize__impl_D402_lambda267))
    V_CALL(VGetArg(upenv, 5-1, 36), runtime,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_lambda267, env)}));
 }
}
static void _V10_Doptimize__impl_D402_k834(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k834, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k834, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__impl_D402_k835) (bruijn ##.dummy.230.894 1 7) (bruijn ##.x.2563 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k835, env)}),
      VEncodeInt(1l), VEncodeInt(7l),
      _var0
    );
 }
}
static void _V10_Doptimize__impl_D402_lambda275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_lambda275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda275, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.count-refs.401 3 17) (bruijn ##.k.2564 0 0) (bruijn ##.expr.885 2 1))
    V_CALL(upenv->up->up->vars[17], runtime,
      _var0,
      upenv->up->vars[1]);
 }
}
static void _V10_Doptimize__impl_D402_k856(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_k856, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_k856, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.2565 1 0) (bruijn ##.impure-table.893 2 6) (bruijn ##.impure-table.229.1054 1 2))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(6l),
      upenv->vars[2]
    );
 }
}
static void _V10_Doptimize__impl_D402_lambda276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_lambda276, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda276, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__impl_D402_k856) (bruijn ##.ref-table.892 1 5) (bruijn ##.ref-table.228.1053 0 1))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k856, env)}),
      VEncodeInt(1l), VEncodeInt(5l),
      _var1
    );
 }
}
static void _V10_Doptimize__impl_D402_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D402_lambda196, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize__impl_D402_lambda196, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 8 ((close _V10_Doptimize__lambda_D887_lambda197) (close _V10_Doptimize__let_D888_lambda201) (close _V10_Doptimize__letrec_D889_lambda227) (close _V10_Doptimize__apply_D890_lambda237) (close _V10_Doptimize__atom_D891_lambda251) #f #f #f) (##vcore.call-with-values (close _V10_Doptimize__impl_D402_k834) (close _V10_Doptimize__impl_D402_lambda275) (close _V10_Doptimize__impl_D402_lambda276)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D887_lambda197, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D888_lambda201, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D889_lambda227, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D890_lambda237, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D891_lambda251, env)});
    env->vars[5] = VEncodeBool(false);
    env->vars[6] = VEncodeBool(false);
    env->vars[7] = VEncodeBool(false);
    V_CALL_FUNC(VCallValues2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_k834, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_lambda275, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_lambda276, env)}));
    }
 }
}
static void _V10_Doptimize_D403_k858(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k858, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k858, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.2586 0 0) ((bruijn ##.kk.339.1066 4 1) (bruijn ##.k.2585 1 0) (bruijn ##.expr.1065 5 0)) ((bruijn ##.k.2585 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[1], runtime,
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize_D403_k857(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k857, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k857, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.341.1068 1 0)) ((bruijn ##.equal?.383 7 37) (close _V10_Doptimize_D403_k858) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.341.1068 1 0))) ((bruijn ##.k.2585 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k858, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize_D403_k864(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k864, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k864, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.339.1066 9 1) (bruijn ##.k.2573 4 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.343.1070 2 0)) (##inline ##vcore.cons (bruijn ##.x.2581 0 0) '()))))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
 }
}
static void _V10_Doptimize_D403_k863(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k863, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k863, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.344.1072 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.344.1072 0 0))) ((bruijn ##.optimize-impl.402 11 18) (close _V10_Doptimize_D403_k864) (##inline ##vcore.car (bruijn ##.expr.344.1072 0 0)) (bruijn ##.inlining?.1064 10 2)) ((bruijn ##.k.2573 3 0) #f)) ((bruijn ##.k.2573 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    V_CALL(VGetArg(upenv, 11-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k864, env)}),
      VInlineCar2(runtime,
        _var0),
      VGetArg(upenv, 10-1, 2));
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
static void _V10_Doptimize_D403_k862(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k862, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k862, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.343.1070 0 0)) ((close _V10_Doptimize_D403_k863) (##inline ##vcore.cdr (bruijn ##.expr.343.1070 0 0))) ((bruijn ##.k.2573 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL_FUNC(_V10_Doptimize_D403_k863, env, runtime,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize_D403_k861(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k861, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k861, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.2574 0 0) ((close _V10_Doptimize_D403_k862) (##inline ##vcore.cdr (bruijn ##.expr.342.1069 2 0))) ((bruijn ##.k.2573 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Doptimize_D403_k862, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize_D403_k860(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k860, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k860, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.342.1069 1 0)) ((bruijn ##.equal?.383 9 37) (close _V10_Doptimize_D403_k861) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.342.1069 1 0))) ((bruijn ##.k.2573 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 37), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k861, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Doptimize_D403_k866(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k866, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k866, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.339.1066 6 1) (bruijn ##.k.2568 6 0) (bruijn ##.x.2571 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Doptimize_D403_k865(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k865, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k865, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-impl.402 8 18) (close _V10_Doptimize_D403_k866) (bruijn ##.expr.1065 6 0) (bruijn ##.inlining?.1064 7 2))
    V_CALL(VGetArg(upenv, 8-1, 18), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k866, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 7-1, 2));
 }
}
static void _V10_Doptimize_D403_lambda282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda282, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D403_k860) (close _V10_Doptimize_D403_k865))
    V_CALL_FUNC(_V10_Doptimize_D403_k860, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k865, env)}));
 }
}
static void _V10_Doptimize_D403_k859(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_k859, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_k859, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D403_lambda282) (bruijn ##.input.340.1067 2 0))
    V_CALL_FUNC(_V10_Doptimize_D403_lambda282, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Doptimize_D403_lambda281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda281, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D403_k857) (close _V10_Doptimize_D403_k859))
    V_CALL_FUNC(_V10_Doptimize_D403_k857, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_k859, env)}));
 }
}
static void _V10_Doptimize_D403_lambda280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda280, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D403_lambda281) (bruijn ##.input.340.1067 0 0))
    V_CALL_FUNC(_V10_Doptimize_D403_lambda281, env, runtime,
      _var0);
 }
}
static void _V10_Doptimize_D403_lambda279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_lambda279, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda279, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize_D403_lambda280) (bruijn ##.expr.1065 1 0))
    V_CALL_FUNC(_V10_Doptimize_D403_lambda280, env, runtime,
      upenv->vars[0]);
 }
}
static void _V10_Doptimize_D403_lambda278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda278, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.call/cc.382 3 36) (bruijn ##.k.2567 1 0) (close _V10_Doptimize_D403_lambda279))
    V_CALL(upenv->up->up->vars[36], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_lambda279, env)}));
 }
}
static void _V10_Doptimize_D403_lambda277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D403_lambda277, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Doptimize_D403_lambda277, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Doptimize_D403_lambda278) (bruijn ##.expr.1063 0 1))
    V_CALL_FUNC(_V10_Doptimize_D403_lambda278, env, runtime,
      _var1);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34, VWORD _var35, VWORD _var36, VWORD _var37) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda2, runtime, upenv, 38, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26, _var27, _var28, _var29, _var30, _var31, _var32, _var33, _var34, _var35, _var36, _var37) {
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
  // (letrec 20 ((close _V10_Dapplication_Q_D384_lambda3) (close _V10_Dcombination_Q_D385_lambda4) (close _V10_Dto__cps_D386_lambda5) (close _V10_Dmemtail_D387_lambda46) (close _V10_Dref__count__lambda_D388_lambda47) (close _V10_Dref__count_D389_lambda48) (close _V10_Dpure__in__lambda_Q_D390_lambda73) (close _V10_Dpure__in_Q_D391_lambda74) (close _V10_Dsubstitute__lambda_D392_lambda101) (close _V10_Dsubstitute_D393_lambda102) (close _V10_Dsubstitute2_D394_lambda127) (close _V10_Dspecial__apply_Q_D395_lambda153) (close _V10_Dtaillength_D396_lambda154) (close _V10_Dadd__ref_B_D397_lambda156) (close _V10_Dsub__ref_B_D398_lambda158) (close _V10_Dadd__refs_B_D399_lambda160) (close _V10_Dsub__refs_B_D400_lambda162) (close _V10_Dcount__refs_D401_lambda164) (close _V10_Doptimize__impl_D402_lambda196) (close _V10_Doptimize_D403_lambda277)) ((bruijn ##.k.1075 48 0) (##inline ##vcore.cons (##inline ##vcore.cons 'to-cps (bruijn ##.to-cps.386 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'optimize (bruijn ##.optimize.403 0 19)) '()))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[20]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 20, 20, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D384_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D385_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D386_lambda5, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D387_lambda46, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count__lambda_D388_lambda47, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dref__count_D389_lambda48, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in__lambda_Q_D390_lambda73, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dpure__in_Q_D391_lambda74, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute__lambda_D392_lambda101, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D393_lambda102, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute2_D394_lambda127, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dspecial__apply_Q_D395_lambda153, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtaillength_D396_lambda154, env)});
    env->vars[13] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D397_lambda156, env)});
    env->vars[14] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D398_lambda158, env)});
    env->vars[15] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D399_lambda160, env)});
    env->vars[16] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D400_lambda162, env)});
    env->vars[17] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D401_lambda164, env)});
    env->vars[18] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D402_lambda196, env)});
    env->vars[19] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D403_lambda277, env)});
    V_CALL(VGetArg(upenv, 48-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__cps,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0optimize,
        env->vars[19]),
        VNULL)));
    }
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda2) (bruijn ##.x.1076 37 0) (bruijn ##.x.1077 36 0) (bruijn ##.x.1078 35 0) (bruijn ##.x.1079 34 0) (bruijn ##.x.1080 33 0) (bruijn ##.x.1081 32 0) (bruijn ##.x.1082 31 0) (bruijn ##.x.1083 30 0) (bruijn ##.x.1084 29 0) (bruijn ##.x.1085 28 0) (bruijn ##.x.1086 27 0) (bruijn ##.x.1087 26 0) (bruijn ##.x.1088 25 0) (bruijn ##.x.1089 24 0) (bruijn ##.x.1090 23 0) (bruijn ##.x.1091 22 0) (bruijn ##.x.1092 21 0) (bruijn ##.x.1093 20 0) (bruijn ##.x.1094 19 0) (bruijn ##.x.1095 18 0) (bruijn ##.x.1096 17 0) (bruijn ##.x.1097 16 0) (bruijn ##.x.1098 15 0) (bruijn ##.x.1099 14 0) (bruijn ##.x.1100 13 0) (bruijn ##.x.1101 12 0) (bruijn ##.x.1102 11 0) (bruijn ##.x.1103 10 0) (bruijn ##.x.1104 9 0) (bruijn ##.x.1105 8 0) (bruijn ##.x.1106 7 0) (bruijn ##.x.1107 6 0) (bruijn ##.x.1108 5 0) (bruijn ##.x.1109 4 0) (bruijn ##.x.1110 3 0) (bruijn ##.x.1111 2 0) (bruijn ##.x.1112 1 0) (bruijn ##.x.1113 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0cps_V20_lambda2, env, runtime,
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
static void _V0vanity_V0compiler_V0cps_V20_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 37 0) (close _V0vanity_V0compiler_V0cps_V20_k46) 'equal?)
    V_CALL(VGetArg(upenv, 37-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k46, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 36 0) (close _V0vanity_V0compiler_V0cps_V20_k45) 'call/cc)
    V_CALL(VGetArg(upenv, 36-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k45, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k43, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 35 0) (close _V0vanity_V0compiler_V0cps_V20_k44) 'hash-table-set!)
    V_CALL(VGetArg(upenv, 35-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k44, env)}),
      _V0hash__table__set_B);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 34 0) (close _V0vanity_V0compiler_V0cps_V20_k43) '-)
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k43, env)}),
      _V0__);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 33 0) (close _V0vanity_V0compiler_V0cps_V20_k42) 'car)
    V_CALL(VGetArg(upenv, 33-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 32 0) (close _V0vanity_V0compiler_V0cps_V20_k41) 'memv)
    V_CALL(VGetArg(upenv, 32-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 31 0) (close _V0vanity_V0compiler_V0cps_V20_k40) 'pair?)
    V_CALL(VGetArg(upenv, 31-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 30 0) (close _V0vanity_V0compiler_V0cps_V20_k39) 'atom?)
    V_CALL(VGetArg(upenv, 30-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, env)}),
      _V0atom_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 29 0) (close _V0vanity_V0compiler_V0cps_V20_k38) 'eqv?)
    V_CALL(VGetArg(upenv, 29-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, env)}),
      _V0eqv_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 28 0) (close _V0vanity_V0compiler_V0cps_V20_k37) 'hash-table-ref)
    V_CALL(VGetArg(upenv, 28-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, env)}),
      _V0hash__table__ref);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 27 0) (close _V0vanity_V0compiler_V0cps_V20_k36) '=)
    V_CALL(VGetArg(upenv, 27-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, env)}),
      _V0_E);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 26 0) (close _V0vanity_V0compiler_V0cps_V20_k35) '<=)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, env)}),
      _V0_L_E);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 25 0) (close _V0vanity_V0compiler_V0cps_V20_k34) 'length)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, env)}),
      _V0length);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 24 0) (close _V0vanity_V0compiler_V0cps_V20_k33) 'not)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, env)}),
      _V0not);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 23 0) (close _V0vanity_V0compiler_V0cps_V20_k32) 'list)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, env)}),
      _V0list);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 22 0) (close _V0vanity_V0compiler_V0cps_V20_k31) 'error)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, env)}),
      _V0error);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 21 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'symbol?)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 20 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'lookup-inline-name)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, env)}),
      _V0lookup__inline__name);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 19 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'cons)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 18 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'compiler-error)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 17 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'map)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 16 0) (close _V0vanity_V0compiler_V0cps_V20_k25) 'call-with-values)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, env)}),
      _V0call__with__values);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 15 0) (close _V0vanity_V0compiler_V0cps_V20_k24) 'reverse)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, env)}),
      _V0reverse);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 14 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'values)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, env)}),
      _V0values);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 13 0) (close _V0vanity_V0compiler_V0cps_V20_k22) 'make-hash-table)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, env)}),
      _V0make__hash__table);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 12 0) (close _V0vanity_V0compiler_V0cps_V20_k21) '+)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 11 0) (close _V0vanity_V0compiler_V0cps_V20_k20) 'for-each)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, env)}),
      _V0for__each);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 10 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'hash-table->alist)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, env)}),
      _V0hash__table___Galist);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 9 0) (close _V0vanity_V0compiler_V0cps_V20_k18) 'cdr)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 8 0) (close _V0vanity_V0compiler_V0cps_V20_k17) '*)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, env)}),
      _V0_S);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 7 0) (close _V0vanity_V0compiler_V0cps_V20_k16) '>)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, env)}),
      _V0_G);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 6 0) (close _V0vanity_V0compiler_V0cps_V20_k15) 'fold)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, env)}),
      _V0fold);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 5 0) (close _V0vanity_V0compiler_V0cps_V20_k14) 'apply)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, env)}),
      _V0apply);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 4 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'caddr)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, env)}),
      _V0caddr);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 3 0) (close _V0vanity_V0compiler_V0cps_V20_k12) 'cadr)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 2 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'null?)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 1 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'eq?)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, env)}),
      _V0eq_Q);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.345 0 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'gensym)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, env)}),
      _V0gensym);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k8) (##string ##.string.2614) (bruijn ##.x.2591 6 0) (bruijn ##.x.2592 5 0) (bruijn ##.x.2593 4 0) (bruijn ##.x.2594 3 0) (bruijn ##.x.2595 2 0) (bruijn ##.x.2596 1 0) (bruijn ##.x.2597 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, env)}),
      VEncodePointer(&_V10_Dstring_D2614.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k7) (##string ##.string.2615))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D2615.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##.string.2616))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D2616.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##.string.2617))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D2617.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##.string.2618))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D2618.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##.string.2619))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D2619.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##.string.2620))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D2620.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0cps_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##.string.2621))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D2621.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
