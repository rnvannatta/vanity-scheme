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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D471 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D470 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D469 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0eqv_Q;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eqv_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eqv\?" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0string_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0string_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "string\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0vector_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "vector\?" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D468 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D467 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D466 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D465 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D464 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D463 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D462 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D461 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
VWEAK VWORD _V10vcore_Dcar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.car" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V10vcore_Dcdr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cdr" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0tail__expr;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0tail__expr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "tail-expr" };
VWEAK VWORD _V10vcore_Dpair_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dpair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.pair\?" };
VWEAK VWORD _V10vcore_Dnot;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dnot = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.not" };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V10vcore_Dcall_Wcc;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dcall_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.call/cc" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V10vcore_Dcall__with__values;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V10vcore_Dcall__with__values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "##vcore.call-with-values" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V10vcore_Dcmp;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Dcmp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.cmp" };
VWEAK VWORD _V10vcore_Deq_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V10vcore_Deq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "##vcore.eq\?" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
VWEAK VWORD _V0_D_D_D;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0_D_D_D = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "..." };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static __attribute__((constructor)) void VDllMain1() {
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0eqv_Q = VEncodePointer(VLookupConstant("_V0eqv_Q", &_VW_V0eqv_Q), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0string_Q = VEncodePointer(VLookupConstant("_V0string_Q", &_VW_V0string_Q), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VLookupConstant("_V0typevector_Q", &_VW_V0typevector_Q), VPOINTER_OTHER);
  _V0vector_Q = VEncodePointer(VLookupConstant("_V0vector_Q", &_VW_V0vector_Q), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VLookupConstant("_V0compiler__warning", &_VW_V0compiler__warning), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0transform__match = VEncodePointer(VLookupConstant("_V0transform__match", &_VW_V0transform__match), VPOINTER_OTHER);
  _V0else = VEncodePointer(VLookupConstant("_V0else", &_VW_V0else), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V10vcore_Dblob_E_Q = VEncodePointer(VLookupConstant("_V10vcore_Dblob_E_Q", &_VW_V10vcore_Dblob_E_Q), VPOINTER_OTHER);
  _V10vcore_Dstring_Q = VEncodePointer(VLookupConstant("_V10vcore_Dstring_Q", &_VW_V10vcore_Dstring_Q), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V10vcore_Dnull_Q = VEncodePointer(VLookupConstant("_V10vcore_Dnull_Q", &_VW_V10vcore_Dnull_Q), VPOINTER_OTHER);
  _V10vcore_Dcar = VEncodePointer(VLookupConstant("_V10vcore_Dcar", &_VW_V10vcore_Dcar), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VLookupConstant("_V10vcore_Dcons", &_VW_V10vcore_Dcons), VPOINTER_OTHER);
  _V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V10vcore_Dcdr", &_VW_V10vcore_Dcdr), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0tail__expr = VEncodePointer(VLookupConstant("_V0tail__expr", &_VW_V0tail__expr), VPOINTER_OTHER);
  _V10vcore_Dpair_Q = VEncodePointer(VLookupConstant("_V10vcore_Dpair_Q", &_VW_V10vcore_Dpair_Q), VPOINTER_OTHER);
  _V10vcore_Dnot = VEncodePointer(VLookupConstant("_V10vcore_Dnot", &_VW_V10vcore_Dnot), VPOINTER_OTHER);
  _V0loop = VEncodePointer(VLookupConstant("_V0loop", &_VW_V0loop), VPOINTER_OTHER);
  _V0let = VEncodePointer(VLookupConstant("_V0let", &_VW_V0let), VPOINTER_OTHER);
  _V10vcore_Dcall_Wcc = VEncodePointer(VLookupConstant("_V10vcore_Dcall_Wcc", &_VW_V10vcore_Dcall_Wcc), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VLookupConstant("_V0split__at__right", &_VW_V0split__at__right), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V10vcore_Dcall__with__values = VEncodePointer(VLookupConstant("_V10vcore_Dcall__with__values", &_VW_V10vcore_Dcall__with__values), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VLookupConstant("_V0num__pairs", &_VW_V0num__pairs), VPOINTER_OTHER);
  _V10vcore_Dcmp = VEncodePointer(VLookupConstant("_V10vcore_Dcmp", &_VW_V10vcore_Dcmp), VPOINTER_OTHER);
  _V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V10vcore_Deq_Q", &_VW_V10vcore_Deq_Q), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VLookupConstant("_V0_U", &_VW_V0_U), VPOINTER_OTHER);
  _V0_D_D_D = VEncodePointer(VLookupConstant("_V0_D_D_D", &_VW_V0_D_D_D), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V10_Dloop_D32_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D32_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.32 4 0) (bruijn ##.k.104 3 0) (bruijn ##.x.106 1 0) (bruijn ##.x.107 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D32_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D32_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.3 6 2) (close _V10_Dloop_D32_k32) (bruijn ##.n.34 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D32_k32, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D32_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D32_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.cdr.25 5 24) (close _V10_Dloop_D32_k31) (bruijn ##.lst.33 1 1)) ((bruijn ##.k.104 1 0) (bruijn ##.n.34 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D32_k31, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
}
}
static void _V10_Dloop_D32_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D32_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.6 4 5) (close _V10_Dloop_D32_k30) (bruijn ##.lst.33 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[5]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D32_k30, env)}),
      _var1);
}
static void _V10_Dmy__num__pairs_D27_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmy__num__pairs_D27_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D32_lambda4)) ((bruijn ##.loop.32 0 0) (bruijn ##.k.103 1 0) (bruijn ##.lst.31 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D32_lambda4, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dgather__variables_D28_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 5 1) (bruijn ##.k.108 4 0) (bruijn ##.x.111 0 0) (bruijn ##.eqv?.36 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 3,
      upenv->up->up->up->vars[0],
      _var0,
      upenv->up->up->up->vars[2]);
}
static void _V10_Dgather__variables_D28_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 7 1) (bruijn ##.k.108 6 0) (bruijn ##.x.113 0 0) (bruijn ##.eqv?.36 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dgather__variables_D28_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.21 12 20) (bruijn ##.k.108 10 0) (bruijn ##.x.115 2 0) (bruijn ##.x.116 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 20)), 3,
      VGetArg(upenv, 10-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dgather__variables_D28_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.28 10 1) (close _V10_Dgather__variables_D28_k44) (bruijn ##.x.117 0 0) (bruijn ##.eqv?.36 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k44, env)}),
      _var0,
      VGetArg(upenv, 9-1, 2));
}
static void _V10_Dgather__variables_D28_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 10 24) (close _V10_Dgather__variables_D28_k43) (bruijn ##.pattern.35 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k43, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dgather__variables_D28_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.5 12 4) (bruijn ##.k.108 10 0) (##string ##.string.457) (bruijn ##.x.119 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 4)), 3,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dgather__variables_D28_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.5 14 4) (bruijn ##.k.108 12 0) (##string ##.string.458) (bruijn ##.x.121 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 3,
      VGetArg(upenv, 12-1, 0),
      VEncodePointer(&_V10_Dstring_D458.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dgather__variables_D28_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 15 1) (bruijn ##.k.108 14 0) (bruijn ##.x.123 0 0) (bruijn ##.eqv?.36 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 1)), 3,
      VGetArg(upenv, 14-1, 0),
      _var0,
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dgather__variables_D28_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.36 17 2) (bruijn ##.k.132 1 0) (bruijn ##.x.133 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 3,
      upenv->vars[0],
      _var0,
      _V0quote);
}
static void _V10_Dgather__variables_D28_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.131 1 0) ((bruijn ##.caar.24 18 23) (close _V10_Dgather__variables_D28_k57) (bruijn ##.pattern.35 16 1)) ((bruijn ##.k.132 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k57, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__variables_D28_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 18 1) (bruijn ##.k.108 17 0) (bruijn ##.x.125 0 0) (bruijn ##.eqv?.36 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 1)), 3,
      VGetArg(upenv, 17-1, 0),
      _var0,
      VGetArg(upenv, 17-1, 2));
}
static void _V10_Dgather__variables_D28_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 20 1) (bruijn ##.k.108 19 0) (##inline ##vcore.cons (bruijn ##.x.127 2 0) (##inline ##vcore.cons (bruijn ##.x.129 1 0) (bruijn ##.x.130 0 0))) (bruijn ##.eqv?.36 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 1)), 3,
      VGetArg(upenv, 19-1, 0),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 19-1, 2));
}
static void _V10_Dgather__variables_D28_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 20 24) (close _V10_Dgather__variables_D28_k62) (bruijn ##.pattern.35 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k62, env)}),
      VGetArg(upenv, 18-1, 1));
}
static void _V10_Dgather__variables_D28_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.22 19 21) (close _V10_Dgather__variables_D28_k61) (bruijn ##.pattern.35 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k61, env)}),
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Dgather__variables_D28_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.124 0 0) ((bruijn ##.cdr.25 18 24) (close _V10_Dgather__variables_D28_k59) (bruijn ##.pattern.35 16 1)) ((bruijn ##.caar.24 18 23) (close _V10_Dgather__variables_D28_k60) (bruijn ##.pattern.35 16 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k59, env)}),
      VGetArg(upenv, 16-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k60, env)}),
      VGetArg(upenv, 16-1, 1));
}
}
static void _V10_Dgather__variables_D28_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__variables_D28_k56) (close _V10_Dgather__variables_D28_k58))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__variables_D28_k56, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k58, env)}));
}
static void _V10_Dgather__variables_D28_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 16 5) (close _V10_Dgather__variables_D28_k55) (bruijn ##.x.134 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k55, env)}),
      _var0);
}
static void _V10_Dgather__variables_D28_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.122 0 0) ((bruijn ##.cdr.25 15 24) (close _V10_Dgather__variables_D28_k53) (bruijn ##.pattern.35 13 1)) ((bruijn ##.car.4 15 3) (close _V10_Dgather__variables_D28_k54) (bruijn ##.pattern.35 13 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k53, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k54, env)}),
      VGetArg(upenv, 13-1, 1));
}
}
static void _V10_Dgather__variables_D28_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.9 14 8) (close _V10_Dgather__variables_D28_k52) (bruijn ##.x.135 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k52, env)}),
      _var0);
}
static void _V10_Dgather__variables_D28_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.120 0 0) ((bruijn ##.car.4 13 3) (close _V10_Dgather__variables_D28_k50) (bruijn ##.pattern.35 11 1)) ((bruijn ##.car.4 13 3) (close _V10_Dgather__variables_D28_k51) (bruijn ##.pattern.35 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k50, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k51, env)}),
      VGetArg(upenv, 11-1, 1));
}
}
static void _V10_Dgather__variables_D28_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.typevector?.11 12 10) (close _V10_Dgather__variables_D28_k49) (bruijn ##.x.136 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k49, env)}),
      _var0);
}
static void _V10_Dgather__variables_D28_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.118 0 0) ((bruijn ##.car.4 11 3) (close _V10_Dgather__variables_D28_k47) (bruijn ##.pattern.35 9 1)) ((bruijn ##.car.4 11 3) (close _V10_Dgather__variables_D28_k48) (bruijn ##.pattern.35 9 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k47, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k48, env)}),
      VGetArg(upenv, 9-1, 1));
}
}
static void _V10_Dgather__variables_D28_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.12 10 11) (close _V10_Dgather__variables_D28_k46) (bruijn ##.x.137 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k46, env)}),
      _var0);
}
static void _V10_Dgather__variables_D28_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.114 0 0) ((bruijn ##.car.4 9 3) (close _V10_Dgather__variables_D28_k42) (bruijn ##.pattern.35 7 1)) ((bruijn ##.car.4 9 3) (close _V10_Dgather__variables_D28_k45) (bruijn ##.pattern.35 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k42, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k45, env)}),
      VGetArg(upenv, 7-1, 1));
}
}
static void _V10_Dgather__variables_D28_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.13 8 12) (close _V10_Dgather__variables_D28_k41) (bruijn ##.x.138 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k41, env)}),
      _var0);
}
static void _V10_Dgather__variables_D28_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.112 0 0) ((bruijn ##.cdr.25 7 24) (close _V10_Dgather__variables_D28_k39) (bruijn ##.pattern.35 5 1)) ((bruijn ##.car.4 7 3) (close _V10_Dgather__variables_D28_k40) (bruijn ##.pattern.35 5 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k39, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k40, env)}),
      VGetArg(upenv, 5-1, 1));
}
}
static void _V10_Dgather__variables_D28_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.36 4 2) (close _V10_Dgather__variables_D28_k38) (bruijn ##.x.139 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[2]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k38, env)}),
      _var0,
      _V0_D_D_D);
}
static void _V10_Dgather__variables_D28_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.110 0 0) ((bruijn ##.cdr.25 5 24) (close _V10_Dgather__variables_D28_k36) (bruijn ##.pattern.35 3 1)) ((bruijn ##.car.4 5 3) (close _V10_Dgather__variables_D28_k37) (bruijn ##.pattern.35 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k36, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k37, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dgather__variables_D28_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.36 2 2) (close _V10_Dgather__variables_D28_k35) (bruijn ##.x.140 0 0) '_)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[2]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k35, env)}),
      _var0,
      _V0_U);
}
static void _V10_Dgather__variables_D28_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.109 0 0) ((bruijn ##.k.108 1 0) '()) ((bruijn ##.car.4 3 3) (close _V10_Dgather__variables_D28_k34) (bruijn ##.pattern.35 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[3]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k34, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dgather__variables_D28_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.18 2 17) (close _V10_Dgather__variables_D28_k33) (bruijn ##.pattern.35 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k33, env)}),
      _var1);
}
static void _V10_Diter_D38_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.2 10 1) (bruijn ##.k.154 3 0) (bruijn ##.x.156 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 3,
      upenv->up->up->vars[0],
      _var0,
      _V0_D_D_D);
}
static void _V10_Diter_D38_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.155 0 0) ((bruijn ##.cadr.16 9 15) (close _V10_Diter_D38_k68) (bruijn ##.pattern.39 5 1)) ((bruijn ##.k.154 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k68, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D38_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 8 5) (close _V10_Diter_D38_k67) (bruijn ##.x.157 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k67, env)}),
      _var0);
}
static void _V10_Diter_D38_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.153 1 0) ((bruijn ##.cdr.25 7 24) (close _V10_Diter_D38_k66) (bruijn ##.pattern.39 3 1)) ((bruijn ##.k.154 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k66, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D38_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.38 8 0) (bruijn ##.k.142 7 0) (bruijn ##.x.146 1 0) (bruijn ##.x.147 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Diter_D38_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.3 10 2) (close _V10_Diter_D38_k73) (bruijn ##.infinites.40 6 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k73, env)}),
      VGetArg(upenv, 6-1, 2),
      VEncodeInt(1l));
}
static void _V10_Diter_D38_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.145 0 0) ((bruijn ##.cddr.17 9 16) (close _V10_Diter_D38_k72) (bruijn ##.pattern.39 5 1)) ((bruijn ##.k.142 5 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 16)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k72, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D38_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.check-pattern.29 7 2) (close _V10_Diter_D38_k71) (bruijn ##.x.148 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k71, env)}),
      _var0);
}
static void _V10_Diter_D38_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.38 8 0) (bruijn ##.k.142 7 0) (bruijn ##.x.151 0 0) (bruijn ##.infinites.40 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      _var0,
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Diter_D38_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) ((bruijn ##.cdr.25 10 24) (close _V10_Diter_D38_k77) (bruijn ##.pattern.39 6 1)) ((bruijn ##.k.142 6 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k77, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D38_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.check-pattern.29 8 2) (close _V10_Diter_D38_k76) (bruijn ##.x.152 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k76, env)}),
      _var0);
}
static void _V10_Diter_D38_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.149 0 0) ((bruijn ##.car.4 8 3) (close _V10_Diter_D38_k75) (bruijn ##.pattern.39 4 1)) ((bruijn ##.<=.1 8 0) (bruijn ##.k.142 4 0) (bruijn ##.infinites.40 4 2) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k75, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[2],
      VEncodeInt(1l));
}
}
static void _V10_Diter_D38_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.144 0 0) ((bruijn ##.car.4 7 3) (close _V10_Diter_D38_k70) (bruijn ##.pattern.39 3 1)) ((bruijn ##.pair?.6 7 5) (close _V10_Diter_D38_k74) (bruijn ##.pattern.39 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k70, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k74, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Diter_D38_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D38_k65) (close _V10_Diter_D38_k69))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D38_k65, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k69, env)}));
}
static void _V10_Diter_D38_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.143 0 0) ((bruijn ##.<=.1 5 0) (bruijn ##.k.142 1 0) (bruijn ##.infinites.40 1 2) 0) ((bruijn ##.pair?.6 5 5) (close _V10_Diter_D38_k64) (bruijn ##.pattern.39 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 3,
      upenv->vars[0],
      upenv->vars[2],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k64, env)}),
      upenv->vars[1]);
}
}
static void _V10_Diter_D38_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.symbol?.13 4 12) (close _V10_Diter_D38_k63) (bruijn ##.pattern.39 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[12]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k63, env)}),
      _var1);
}
static void _V10_Dcheck__pattern_D29_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcheck__pattern_D29_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D38_lambda7)) ((bruijn ##.iter.38 0 0) (bruijn ##.k.141 1 0) (bruijn ##.pattern.37 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_lambda7, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dmatch__ellipses_D43_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.159 16 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cmp (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (##inline ##vcore.cons (bruijn ##.x.194 8 0) '())) (##inline ##vcore.cons (bruijn ##.len.50 12 0) '()))) (##inline ##vcore.cons '-1 '()))) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (##inline ##vcore.cons (bruijn ##.x.185 7 0) (##inline ##vcore.cons (bruijn ##.len.50 12 0) '()))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.head.51 10 0) (##inline ##vcore.cons (bruijn ##.tail.52 9 0) '())) (##inline ##vcore.cons (bruijn ##.x.173 0 0) '()))) '()))) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcmp,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0num__pairs,
        VInlineCons2(runtime,
        VGetArg(upenv, 8-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VNULL))),
        VInlineCons2(runtime,
        VEncodeInt(-1l),
        VNULL))),
        VInlineCons2(runtime,
        VEncodeBool(false),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0split__at__right,
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VNULL)))));
}
static void _V10_Dmatch__ellipses_D43_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 16 1) (close _V10_Dmatch__ellipses_D43_k93) (bruijn ##.x.174 3 0) (bruijn ##.x.175 0 0) (bruijn ##.success-expr.47 15 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k93, env)}),
      upenv->up->up->vars[0],
      _var0,
      VGetArg(upenv, 15-1, 3));
}
static void _V10_Dmatch__ellipses_D43_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 18 20) (close _V10_Dmatch__ellipses_D43_k92) (bruijn ##.head-pattern.48 12 0) (bruijn ##.x.176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k92, env)}),
      VGetArg(upenv, 12-1, 0),
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 17 20) (close _V10_Dmatch__ellipses_D43_k91) (bruijn ##.tail-pattern.49 10 0) (bruijn ##.x.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k91, env)}),
      VGetArg(upenv, 10-1, 0),
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 16 24) (close _V10_Dmatch__ellipses_D43_k90) (bruijn ##.expr-stack.45 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k90, env)}),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dmatch__ellipses_D43_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 15 20) (close _V10_Dmatch__ellipses_D43_k89) (bruijn ##.head.51 5 0) (bruijn ##.x.178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k89, env)}),
      VGetArg(upenv, 5-1, 0),
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 14 20) (close _V10_Dmatch__ellipses_D43_k88) (bruijn ##.tail.52 3 0) (bruijn ##.x.179 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k88, env)}),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 13 24) (close _V10_Dmatch__ellipses_D43_k87) (bruijn ##.expr-stack.45 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k87, env)}),
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Dmatch__ellipses_D43_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 12 3) (close _V10_Dmatch__ellipses_D43_k86) (bruijn ##.expr-stack.45 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k86, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dmatch__ellipses_D43_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 11 3) (close _V10_Dmatch__ellipses_D43_k85) (bruijn ##.expr-stack.45 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k85, env)}),
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dmatch__ellipses_D43_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.26 10 25) (close _V10_Dmatch__ellipses_D43_k84) (##string ##.string.459))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k84, env)}),
      VEncodePointer(&_V10_Dstring_D459.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D43_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.159 26 0) (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.58 14 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.60 12 0) (##inline ##vcore.cons (bruijn ##.x.270 11 0) '())) (bruijn ##.x.264 10 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.60 12 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.58 14 0) (##inline ##vcore.cons (bruijn ##.expr.60 12 0) (bruijn ##.x.257 9 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.59 13 0) '()) (##inline ##vcore.cons (bruijn ##.x.233 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.58 14 0) (##inline ##vcore.cons (bruijn ##.expr.60 12 0) (bruijn ##.x.237 4 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.56 16 0)) (##inline ##vcore.cons (bruijn ##.x.202 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        _V0loop,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 11-1, 0),
        VNULL)),
        VGetArg(upenv, 10-1, 0)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnot,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VNULL)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        VGetArg(upenv, 9-1, 0))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 13-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 12-1, 0),
        upenv->up->up->up->vars[0])),
        VNULL)))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        _V0loop,
        VNULL))),
        VNULL))))),
        VNULL))),
        VNULL)),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0tail__expr,
        VGetArg(upenv, 16-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
static void _V10_Dmatch__ellipses_D43_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 26 1) (close _V10_Dmatch__ellipses_D43_k114) (bruijn ##.x.203 1 0) (bruijn ##.x.204 0 0) (bruijn ##.success-expr.47 25 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k114, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 25-1, 3));
}
static void _V10_Dmatch__ellipses_D43_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 28 20) (close _V10_Dmatch__ellipses_D43_k113) (bruijn ##.tail-pattern.54 17 0) (bruijn ##.pattern-stack.55 16 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k113, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0));
}
static void _V10_Dmatch__ellipses_D43_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 27 20) (close _V10_Dmatch__ellipses_D43_k112) 'tail-expr (bruijn ##.x.205 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k112, env)}),
      _V0tail__expr,
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 26 24) (close _V10_Dmatch__ellipses_D43_k111) (bruijn ##.expr-stack.45 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k111, env)}),
      VGetArg(upenv, 22-1, 1));
}
static void _V10_Dmatch__ellipses_D43_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.238 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.65 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
static void _V10_Dmatch__ellipses_D43_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.14 25 13) (close _V10_Dmatch__ellipses_D43_k110) (close _V10_Dmatch__ellipses_D43_lambda10) (bruijn ##.syms.57 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k110, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_lambda10, env)}),
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Dmatch__ellipses_D43_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 21 1) (close _V10_Dmatch__ellipses_D43_k109) (bruijn ##.x.240 2 0) (bruijn ##.x.241 1 0) (##inline ##vcore.cons (bruijn ##.k2.59 7 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.60 6 0) '())) (bruijn ##.x.245 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k109, env)}),
      upenv->up->vars[0],
      upenv->vars[0],
      VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        _var0)));
}
static void _V10_Dmatch__ellipses_D43_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.246 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.63 0 1) (##inline ##vcore.cons (bruijn ##.sym.64 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcons,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
static void _V10_Dmatch__ellipses_D43_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.14 23 13) (close _V10_Dmatch__ellipses_D43_k108) (close _V10_Dmatch__ellipses_D43_lambda11) (bruijn ##.variables.56 9 0) (bruijn ##.syms.57 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 13)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k108, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_lambda11, env)}),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dmatch__ellipses_D43_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.23 22 22) (close _V10_Dmatch__ellipses_D43_k107) (bruijn ##.pattern.53 12 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k107, env)}),
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Dmatch__ellipses_D43_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.23 21 22) (close _V10_Dmatch__ellipses_D43_k106) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.60 3 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k106, env)}),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)));
}
static void _V10_Dmatch__ellipses_D43_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.258 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.62 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
static void _V10_Dmatch__ellipses_D43_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.14 20 13) (close _V10_Dmatch__ellipses_D43_k105) (close _V10_Dmatch__ellipses_D43_lambda12) (bruijn ##.syms.57 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k105, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_lambda12, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dmatch__ellipses_D43_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.265 0 0) (##inline ##vcore.cons (bruijn ##.sym.61 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        VNULL,
        VNULL)),
        VNULL)));
}
static void _V10_Dmatch__ellipses_D43_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.14 19 13) (close _V10_Dmatch__ellipses_D43_k104) (close _V10_Dmatch__ellipses_D43_lambda13) (bruijn ##.syms.57 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k104, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_lambda13, env)}),
      upenv->up->up->up->vars[0]);
}
static void _V10_Dmatch__ellipses_D43_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 18 3) (close _V10_Dmatch__ellipses_D43_k103) (bruijn ##.expr-stack.45 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k103, env)}),
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Dmatch__ellipses_D43_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.26 17 25) (close _V10_Dmatch__ellipses_D43_k102) (##string ##.string.461))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k102, env)}),
      VEncodePointer(&_V10_Dstring_D461.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D43_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.26 16 25) (close _V10_Dmatch__ellipses_D43_k101) (##string ##.string.462))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k101, env)}),
      VEncodePointer(&_V10_Dstring_D462.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D43_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.26 15 25) (close _V10_Dmatch__ellipses_D43_k100) (##string ##.string.462))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k100, env)}),
      VEncodePointer(&_V10_Dstring_D462.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D43_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.14 14 13) (close _V10_Dmatch__ellipses_D43_k99) (bruijn ##.gensym.26 14 25) (bruijn ##.variables.56 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 13)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k99, env)}),
      VGetArg(upenv, 14-1, 25),
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-variables.28 12 1) (close _V10_Dmatch__ellipses_D43_k98) (bruijn ##.x.271 0 0) (bruijn ##.eqv?.42 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k98, env)}),
      _var0,
      VGetArg(upenv, 11-1, 2));
}
static void _V10_Dmatch__ellipses_D43_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.23 12 22) (close _V10_Dmatch__ellipses_D43_k97) (bruijn ##.pattern.53 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k97, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dmatch__ellipses_D43_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 11 24) (close _V10_Dmatch__ellipses_D43_k96) (bruijn ##.pattern-stack.46 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k96, env)}),
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Dmatch__ellipses_D43_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddar.8 10 7) (close _V10_Dmatch__ellipses_D43_k95) (bruijn ##.pattern-stack.46 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k95, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dmatch__ellipses_D43_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.160 0 0) ((bruijn ##.gensym.26 9 25) (close _V10_Dmatch__ellipses_D43_k83) (##string ##.string.460)) ((bruijn ##.caar.24 9 23) (close _V10_Dmatch__ellipses_D43_k94) (bruijn ##.pattern-stack.46 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k83, env)}),
      VEncodePointer(&_V10_Dstring_D460.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k94, env)}),
      VGetArg(upenv, 5-1, 2));
}
}
static void _V10_Dmatch__ellipses_D43_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>.15 8 14) (close _V10_Dmatch__ellipses_D43_k82) (bruijn ##.len.50 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 14)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k82, env)}),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dmatch__ellipses_D43_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.my-num-pairs.27 6 0) (close _V10_Dmatch__ellipses_D43_k81) (bruijn ##.tail-pattern.49 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k81, env)}),
      _var0);
}
static void _V10_Dmatch__ellipses_D43_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cddar.8 6 7) (close _V10_Dmatch__ellipses_D43_k80) (bruijn ##.pattern-stack.46 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k80, env)}),
      upenv->up->vars[2]);
}
static void _V10_Dmatch__ellipses_D43_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 5 20) (close _V10_Dmatch__ellipses_D43_k79) (bruijn ##.x.272 0 0) (##inline ##vcore.qcons '... '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k79, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0_D_D_D,
        VNULL));
}
static void _V10_Dmatch__ellipses_D43_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D43_lambda9, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.caar.24 4 23) (close _V10_Dmatch__ellipses_D43_k78) (bruijn ##.pattern-stack.46 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[23]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_k78, env)}),
      _var2);
}
static void _V10_Dmatch__iter_D44_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.match-iter.44 6 1) (bruijn ##.k.274 5 0) (bruijn ##.x.277 1 0) (bruijn ##.x.278 0 0) (bruijn ##.success-expr.68 5 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 1)), 4,
      VGetArg(upenv, 5-1, 0),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 5-1, 3));
}
static void _V10_Dmatch__iter_D44_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 8 24) (close _V10_Dmatch__iter_D44_k119) (bruijn ##.pattern-stack.67 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k119, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dmatch__iter_D44_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.287 4 0) (##inline ##vcore.cons (bruijn ##.x.289 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.283 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 10 1) (close _V10_Dmatch__iter_D44_k126) (bruijn ##.x.284 1 0) (bruijn ##.x.285 0 0) (bruijn ##.success-expr.68 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k126, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 9-1, 3));
}
static void _V10_Dmatch__iter_D44_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 12 24) (close _V10_Dmatch__iter_D44_k125) (bruijn ##.pattern-stack.67 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k125, env)}),
      VGetArg(upenv, 8-1, 2));
}
static void _V10_Dmatch__iter_D44_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 11 24) (close _V10_Dmatch__iter_D44_k124) (bruijn ##.expr-stack.66 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k124, env)}),
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dmatch__iter_D44_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 10 3) (close _V10_Dmatch__iter_D44_k123) (bruijn ##.expr-stack.66 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k123, env)}),
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Dmatch__iter_D44_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.5 12 4) (bruijn ##.k.274 8 0) (##string ##.string.457) (bruijn ##.x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 4)), 3,
      VGetArg(upenv, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dmatch__iter_D44_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.5 14 4) (bruijn ##.k.274 10 0) (##string ##.string.458) (bruijn ##.x.293 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 3,
      VGetArg(upenv, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D458.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dmatch__iter_D44_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 15 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (bruijn ##.x.302 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.298 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnull_Q,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 15 1) (close _V10_Dmatch__iter_D44_k138) (bruijn ##.x.299 1 0) (bruijn ##.x.300 0 0) (bruijn ##.success-expr.68 14 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k138, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 14-1, 3));
}
static void _V10_Dmatch__iter_D44_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 17 24) (close _V10_Dmatch__iter_D44_k137) (bruijn ##.pattern-stack.67 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k137, env)}),
      VGetArg(upenv, 13-1, 2));
}
static void _V10_Dmatch__iter_D44_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 16 24) (close _V10_Dmatch__iter_D44_k136) (bruijn ##.expr-stack.66 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k136, env)}),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dmatch__iter_D44_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 19 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (bruijn ##.x.319 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (bruijn ##.x.315 4 0) (##inline ##vcore.cons (bruijn ##.x.317 3 0) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.307 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dstring_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dblob_E_Q,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 19 1) (close _V10_Dmatch__iter_D44_k146) (bruijn ##.x.308 1 0) (bruijn ##.x.309 0 0) (bruijn ##.success-expr.68 18 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k146, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 18-1, 3));
}
static void _V10_Dmatch__iter_D44_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 21 24) (close _V10_Dmatch__iter_D44_k145) (bruijn ##.pattern-stack.67 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k145, env)}),
      VGetArg(upenv, 17-1, 2));
}
static void _V10_Dmatch__iter_D44_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 20 24) (close _V10_Dmatch__iter_D44_k144) (bruijn ##.expr-stack.66 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k144, env)}),
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Dmatch__iter_D44_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 19 3) (close _V10_Dmatch__iter_D44_k143) (bruijn ##.expr-stack.66 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k143, env)}),
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Dmatch__iter_D44_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 18 3) (close _V10_Dmatch__iter_D44_k142) (bruijn ##.pattern-stack.67 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k142, env)}),
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Dmatch__iter_D44_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 20 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (bruijn ##.x.328 4 0) (##inline ##vcore.cons (bruijn ##.x.330 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.324 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 20 1) (close _V10_Dmatch__iter_D44_k153) (bruijn ##.x.325 1 0) (bruijn ##.x.326 0 0) (bruijn ##.success-expr.68 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k153, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 19-1, 3));
}
static void _V10_Dmatch__iter_D44_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 22 24) (close _V10_Dmatch__iter_D44_k152) (bruijn ##.pattern-stack.67 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k152, env)}),
      VGetArg(upenv, 18-1, 2));
}
static void _V10_Dmatch__iter_D44_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 21 24) (close _V10_Dmatch__iter_D44_k151) (bruijn ##.expr-stack.66 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k151, env)}),
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Dmatch__iter_D44_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 20 3) (close _V10_Dmatch__iter_D44_k150) (bruijn ##.expr-stack.66 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k150, env)}),
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Dmatch__iter_D44_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.42 21 2) (bruijn ##.k.397 1 0) (bruijn ##.x.398 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 2)), 3,
      upenv->vars[0],
      _var0,
      _V0quote);
}
static void _V10_Dmatch__iter_D44_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.396 1 0) ((bruijn ##.caar.24 22 23) (close _V10_Dmatch__iter_D44_k157) (bruijn ##.pattern-stack.67 18 2)) ((bruijn ##.k.397 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k157, env)}),
      VGetArg(upenv, 18-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D44_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.19 28 18) (bruijn ##.k.348 2 0) (bruijn ##.x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 18)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dmatch__iter_D44_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.18 27 17) (close _V10_Dmatch__iter_D44_k164) (bruijn ##.x.350 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k164, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.347 1 0) ((bruijn ##.k.348 0 0) (bruijn ##.p.347 1 0)) ((bruijn ##.cddar.8 26 7) (close _V10_Dmatch__iter_D44_k163) (bruijn ##.pattern-stack.67 22 2)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k163, env)}),
      VGetArg(upenv, 22-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.345 1 0) ((bruijn ##.compiler-error.5 27 4) (bruijn ##.k.346 0 0) (##string ##.string.463)) ((bruijn ##.k.346 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 4)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D463.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D44_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 28 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.344 4 0) '())) (##inline ##vcore.cons (bruijn ##.x.342 3 0) '()))) (##inline ##vcore.cons (bruijn ##.x.336 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 28 1) (close _V10_Dmatch__iter_D44_k172) (bruijn ##.x.337 1 0) (bruijn ##.x.338 0 0) (bruijn ##.success-expr.68 27 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k172, env)}),
      upenv->vars[0],
      _var0,
      VGetArg(upenv, 27-1, 3));
}
static void _V10_Dmatch__iter_D44_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 30 24) (close _V10_Dmatch__iter_D44_k171) (bruijn ##.pattern-stack.67 26 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k171, env)}),
      VGetArg(upenv, 26-1, 2));
}
static void _V10_Dmatch__iter_D44_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 29 24) (close _V10_Dmatch__iter_D44_k170) (bruijn ##.expr-stack.66 25 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k170, env)}),
      VGetArg(upenv, 25-1, 1));
}
static void _V10_Dmatch__iter_D44_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 28 3) (close _V10_Dmatch__iter_D44_k169) (bruijn ##.expr-stack.66 24 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k169, env)}),
      VGetArg(upenv, 24-1, 1));
}
static void _V10_Dmatch__iter_D44_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadar.7 27 6) (close _V10_Dmatch__iter_D44_k168) (bruijn ##.pattern-stack.67 23 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k168, env)}),
      VGetArg(upenv, 23-1, 2));
}
static void _V10_Dmatch__iter_D44_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D44_k166) (close _V10_Dmatch__iter_D44_k167))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D44_k166, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k167, env)}));
}
static void _V10_Dmatch__iter_D44_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D44_k162) (close _V10_Dmatch__iter_D44_k165))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D44_k162, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k165, env)}));
}
static void _V10_Dmatch__iter_D44_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.19 24 18) (close _V10_Dmatch__iter_D44_k161) (bruijn ##.x.351 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k161, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 23 5) (close _V10_Dmatch__iter_D44_k160) (bruijn ##.x.352 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k160, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.42 26 2) (bruijn ##.k.391 3 0) (bruijn ##.x.393 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 2)), 3,
      upenv->up->up->vars[0],
      _var0,
      _V0_D_D_D);
}
static void _V10_Dmatch__iter_D44_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.392 0 0) ((bruijn ##.cadar.7 27 6) (close _V10_Dmatch__iter_D44_k178) (bruijn ##.pattern-stack.67 23 2)) ((bruijn ##.k.391 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 6)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k178, env)}),
      VGetArg(upenv, 23-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D44_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 26 5) (close _V10_Dmatch__iter_D44_k177) (bruijn ##.x.394 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k177, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.390 1 0) ((bruijn ##.cdar.22 25 21) (close _V10_Dmatch__iter_D44_k176) (bruijn ##.pattern-stack.67 21 2)) ((bruijn ##.k.391 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k176, env)}),
      VGetArg(upenv, 21-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D44_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 26 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.69 4 0) (##inline ##vcore.cons (bruijn ##.x.362 3 0) '())) '()) (##inline ##vcore.cons (bruijn ##.x.357 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-ellipses.43 26 0) (close _V10_Dmatch__iter_D44_k184) (bruijn ##.x.358 0 0) (bruijn ##.pattern-stack.67 25 2) (bruijn ##.success-expr.68 25 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k184, env)}),
      _var0,
      VGetArg(upenv, 25-1, 2),
      VGetArg(upenv, 25-1, 3));
}
static void _V10_Dmatch__iter_D44_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.21 28 20) (close _V10_Dmatch__iter_D44_k183) (bruijn ##.sym.69 2 0) (bruijn ##.x.359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 20)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k183, env)}),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dmatch__iter_D44_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 27 24) (close _V10_Dmatch__iter_D44_k182) (bruijn ##.expr-stack.66 23 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k182, env)}),
      VGetArg(upenv, 23-1, 1));
}
static void _V10_Dmatch__iter_D44_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 26 3) (close _V10_Dmatch__iter_D44_k181) (bruijn ##.expr-stack.66 22 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k181, env)}),
      VGetArg(upenv, 22-1, 1));
}
static void _V10_Dmatch__iter_D44_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.274 30 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.70 6 0) (##inline ##vcore.cons (bruijn ##.x.387 5 0) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.70 6 0) '())) (##inline ##vcore.cons (bruijn ##.x.371 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
static void _V10_Dmatch__iter_D44_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 30 1) (close _V10_Dmatch__iter_D44_k193) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.70 5 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.70 5 0) '())) (bruijn ##.x.381 3 0))) (##inline ##vcore.cons (bruijn ##.x.374 2 0) (##inline ##vcore.cons (bruijn ##.x.376 1 0) (bruijn ##.x.377 0 0))) (bruijn ##.success-expr.68 29 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k193, env)}),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)),
        upenv->up->up->vars[0])),
      VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        _var0)),
      VGetArg(upenv, 29-1, 3));
}
static void _V10_Dmatch__iter_D44_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 32 24) (close _V10_Dmatch__iter_D44_k192) (bruijn ##.pattern-stack.67 28 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k192, env)}),
      VGetArg(upenv, 28-1, 2));
}
static void _V10_Dmatch__iter_D44_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.22 31 21) (close _V10_Dmatch__iter_D44_k191) (bruijn ##.pattern-stack.67 27 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k191, env)}),
      VGetArg(upenv, 27-1, 2));
}
static void _V10_Dmatch__iter_D44_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.24 30 23) (close _V10_Dmatch__iter_D44_k190) (bruijn ##.pattern-stack.67 26 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k190, env)}),
      VGetArg(upenv, 26-1, 2));
}
static void _V10_Dmatch__iter_D44_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 29 24) (close _V10_Dmatch__iter_D44_k189) (bruijn ##.expr-stack.66 25 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k189, env)}),
      VGetArg(upenv, 25-1, 1));
}
static void _V10_Dmatch__iter_D44_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.4 28 3) (close _V10_Dmatch__iter_D44_k188) (bruijn ##.expr-stack.66 24 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k188, env)}),
      VGetArg(upenv, 24-1, 1));
}
static void _V10_Dmatch__iter_D44_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.5 28 4) (bruijn ##.k.274 24 0) (##string ##.string.464) (bruijn ##.x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 4)), 3,
      VGetArg(upenv, 24-1, 0),
      VEncodePointer(&_V10_Dstring_D464.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dmatch__iter_D44_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.363 0 0) ((bruijn ##.gensym.26 27 25) (close _V10_Dmatch__iter_D44_k187) (##string ##.string.461)) ((bruijn ##.car.4 27 3) (close _V10_Dmatch__iter_D44_k194) (bruijn ##.pattern-stack.67 23 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k187, env)}),
      VEncodePointer(&_V10_Dstring_D461.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k194, env)}),
      VGetArg(upenv, 23-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 26 5) (close _V10_Dmatch__iter_D44_k186) (bruijn ##.x.389 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k186, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.353 0 0) ((bruijn ##.gensym.26 25 25) (close _V10_Dmatch__iter_D44_k180) (##string ##.string.461)) ((bruijn ##.car.4 25 3) (close _V10_Dmatch__iter_D44_k185) (bruijn ##.pattern-stack.67 21 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 25)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k180, env)}),
      VEncodePointer(&_V10_Dstring_D461.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k185, env)}),
      VGetArg(upenv, 21-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D44_k175) (close _V10_Dmatch__iter_D44_k179))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D44_k175, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k179, env)}));
}
static void _V10_Dmatch__iter_D44_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 23 5) (close _V10_Dmatch__iter_D44_k174) (bruijn ##.x.395 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k174, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.331 0 0) ((bruijn ##.cdar.22 22 21) (close _V10_Dmatch__iter_D44_k159) (bruijn ##.pattern-stack.67 18 2)) ((bruijn ##.car.4 22 3) (close _V10_Dmatch__iter_D44_k173) (bruijn ##.pattern-stack.67 18 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k159, env)}),
      VGetArg(upenv, 18-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k173, env)}),
      VGetArg(upenv, 18-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D44_k156) (close _V10_Dmatch__iter_D44_k158))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D44_k156, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k158, env)}));
}
static void _V10_Dmatch__iter_D44_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.6 20 5) (close _V10_Dmatch__iter_D44_k155) (bruijn ##.x.399 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k155, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.320 0 0) ((bruijn ##.car.4 19 3) (close _V10_Dmatch__iter_D44_k149) (bruijn ##.pattern-stack.67 15 2)) ((bruijn ##.car.4 19 3) (close _V10_Dmatch__iter_D44_k154) (bruijn ##.pattern-stack.67 15 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k149, env)}),
      VGetArg(upenv, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k154, env)}),
      VGetArg(upenv, 15-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.atom?.9 18 8) (close _V10_Dmatch__iter_D44_k148) (bruijn ##.x.400 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k148, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.303 0 0) ((bruijn ##.car.4 17 3) (close _V10_Dmatch__iter_D44_k141) (bruijn ##.expr-stack.66 13 1)) ((bruijn ##.car.4 17 3) (close _V10_Dmatch__iter_D44_k147) (bruijn ##.pattern-stack.67 13 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k141, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k147, env)}),
      VGetArg(upenv, 13-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string?.10 16 9) (close _V10_Dmatch__iter_D44_k140) (bruijn ##.x.401 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k140, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.294 0 0) ((bruijn ##.car.4 15 3) (close _V10_Dmatch__iter_D44_k135) (bruijn ##.expr-stack.66 11 1)) ((bruijn ##.car.4 15 3) (close _V10_Dmatch__iter_D44_k139) (bruijn ##.pattern-stack.67 11 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k135, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k139, env)}),
      VGetArg(upenv, 11-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.18 14 17) (close _V10_Dmatch__iter_D44_k134) (bruijn ##.x.402 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k134, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.292 0 0) ((bruijn ##.car.4 13 3) (close _V10_Dmatch__iter_D44_k132) (bruijn ##.pattern-stack.67 9 2)) ((bruijn ##.car.4 13 3) (close _V10_Dmatch__iter_D44_k133) (bruijn ##.pattern-stack.67 9 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k132, env)}),
      VGetArg(upenv, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k133, env)}),
      VGetArg(upenv, 9-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.typevector?.11 12 10) (close _V10_Dmatch__iter_D44_k131) (bruijn ##.x.403 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k131, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((bruijn ##.car.4 11 3) (close _V10_Dmatch__iter_D44_k129) (bruijn ##.pattern-stack.67 7 2)) ((bruijn ##.car.4 11 3) (close _V10_Dmatch__iter_D44_k130) (bruijn ##.pattern-stack.67 7 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k129, env)}),
      VGetArg(upenv, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k130, env)}),
      VGetArg(upenv, 7-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.vector?.12 10 11) (close _V10_Dmatch__iter_D44_k128) (bruijn ##.x.404 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k128, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.279 0 0) ((bruijn ##.car.4 9 3) (close _V10_Dmatch__iter_D44_k122) (bruijn ##.pattern-stack.67 5 2)) ((bruijn ##.car.4 9 3) (close _V10_Dmatch__iter_D44_k127) (bruijn ##.pattern-stack.67 5 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k122, env)}),
      VGetArg(upenv, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k127, env)}),
      VGetArg(upenv, 5-1, 2));
}
}
static void _V10_Dmatch__iter_D44_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.13 8 12) (close _V10_Dmatch__iter_D44_k121) (bruijn ##.x.405 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k121, env)}),
      _var0);
}
static void _V10_Dmatch__iter_D44_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.276 0 0) ((bruijn ##.cdr.25 7 24) (close _V10_Dmatch__iter_D44_k118) (bruijn ##.expr-stack.66 3 1)) ((bruijn ##.car.4 7 3) (close _V10_Dmatch__iter_D44_k120) (bruijn ##.pattern-stack.67 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k118, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k120, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dmatch__iter_D44_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.42 4 2) (close _V10_Dmatch__iter_D44_k117) (bruijn ##.x.406 0 0) '_)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[2]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k117, env)}),
      _var0,
      _V0_U);
}
static void _V10_Dmatch__iter_D44_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.275 0 0) ((bruijn ##.k.274 1 0) (bruijn ##.success-expr.68 1 3)) ((bruijn ##.car.4 5 3) (close _V10_Dmatch__iter_D44_k116) (bruijn ##.pattern-stack.67 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k116, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dmatch__iter_D44_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D44_lambda14, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.18 4 17) (close _V10_Dmatch__iter_D44_k115) (bruijn ##.pattern-stack.67 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[17]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_k115, env)}),
      _var2);
}
static void _V10_Dloop_D73_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.418 4 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.428 0 0))) (##inline ##vcore.cons (bruijn ##.k.71 7 0) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        _var0)),
        VInlineCons2(runtime,
        VGetArg(upenv, 7-1, 0),
        VNULL))),
        VNULL));
}
static void _V10_Dloop_D73_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-warning.20 18 19) (bruijn ##.k.444 2 0) (##string ##.string.466))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 19)), 2,
      upenv->up->vars[0],
      VEncodePointer(&_V10_Dstring_D466.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D73_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.compiler-warning.20 17 19) (close _V10_Dloop_D73_k207) (##string ##.string.467) (bruijn ##.x.446 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 19)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k207, env)}),
      VEncodePointer(&_V10_Dstring_D467.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D73_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.443 1 0) ((bruijn ##.caar.24 16 23) (close _V10_Dloop_D73_k206) (bruijn ##.patterns.74 7 1)) ((bruijn ##.k.444 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k206, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D73_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.21 23 20) (bruijn ##.k.418 14 0) (bruijn ##.x.430 2 0) (bruijn ##.x.431 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 20)), 3,
      VGetArg(upenv, 14-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dloop_D73_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.73 14 0) (close _V10_Dloop_D73_k215) (bruijn ##.x.432 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k215, env)}),
      _var0);
}
static void _V10_Dloop_D73_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.25 21 24) (close _V10_Dloop_D73_k214) (bruijn ##.patterns.74 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 24)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k214, env)}),
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dloop_D73_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.match-iter.44 17 1) (close _V10_Dloop_D73_k213) (bruijn ##.x.433 3 0) (bruijn ##.x.434 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.441 0 0))) (##inline ##vcore.cons (bruijn ##.k.71 14 0) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k213, env)}),
      upenv->up->up->vars[0],
      upenv->vars[0],
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcall__with__values,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        _var0)),
        VInlineCons2(runtime,
        VGetArg(upenv, 14-1, 0),
        VNULL))),
        VNULL));
}
static void _V10_Dloop_D73_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdar.22 19 21) (close _V10_Dloop_D73_k212) (bruijn ##.patterns.74 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k212, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dloop_D73_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.23 18 22) (close _V10_Dloop_D73_k211) (bruijn ##.x.442 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k211, env)}),
      _var0);
}
static void _V10_Dloop_D73_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caar.24 17 23) (close _V10_Dloop_D73_k210) (bruijn ##.patterns.74 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k210, env)}),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Dloop_D73_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.23 16 22) (close _V10_Dloop_D73_k209) (bruijn ##.input.72 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k209, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dloop_D73_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D73_k205) (close _V10_Dloop_D73_k208))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D73_k205, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k208, env)}));
}
static void _V10_Dloop_D73_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.19 14 18) (close _V10_Dloop_D73_k204) (bruijn ##.x.447 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 18)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k204, env)}),
      _var0);
}
static void _V10_Dloop_D73_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.check-pattern.29 12 2) (close _V10_Dloop_D73_k203) (bruijn ##.x.448 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k203, env)}),
      _var0);
}
static void _V10_Dloop_D73_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.422 0 0) ((bruijn ##.cdar.22 12 21) (close _V10_Dloop_D73_k201) (bruijn ##.patterns.74 3 1)) ((bruijn ##.caar.24 12 23) (close _V10_Dloop_D73_k202) (bruijn ##.patterns.74 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k201, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k202, env)}),
      upenv->up->up->vars[1]);
}
}
static void _V10_Dloop_D73_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.42 9 2) (close _V10_Dloop_D73_k200) (bruijn ##.x.449 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k200, env)}),
      _var0,
      _V0else);
}
static void _V10_Dloop_D73_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.419 0 0) ((bruijn ##.k.418 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.465) '())) '())) ((bruijn ##.caar.24 10 23) (close _V10_Dloop_D73_k199) (bruijn ##.patterns.74 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D465.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k199, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dloop_D73_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.18 9 17) (close _V10_Dloop_D73_k198) (bruijn ##.patterns.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 17)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k198, env)}),
      _var1);
}
static void _V10_Dtransform__match_D30_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.158 8 0) (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.71 4 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.input.72 4 1) (##inline ##vcore.cons (bruijn ##.x.453 3 0) '())) '()) (bruijn ##.x.417 0 0))) '()))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[0],
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->up->up->up->vars[1],
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL)),
        VNULL),
        _var0)),
        VNULL))),
        VNULL)));
}
static void _V10_Dtransform__match_D30_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.73 1 0) (close _V10_Dtransform__match_D30_k217) (bruijn ##.x.450 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k217, env)}),
      _var0);
}
static void _V10_Dtransform__match_D30_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D73_lambda16)) ((bruijn ##.cddr.17 8 16) (close _V10_Dtransform__match_D30_k216) (bruijn ##.expr.41 6 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda16, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 16)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k216, env)}),
      VGetArg(upenv, 6-1, 1));
    }
}
static void _V10_Dtransform__match_D30_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.16 6 15) (close _V10_Dtransform__match_D30_k197) (bruijn ##.expr.41 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 15)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k197, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dtransform__match_D30_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dtransform__match_D30_lambda15) (bruijn ##.x.407 1 0) (bruijn ##.x.408 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dtransform__match_D30_lambda15, .env = env }, }, 2,
      upenv->vars[0],
      _var0);
}
static void _V10_Dtransform__match_D30_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.26 4 25) (close _V10_Dtransform__match_D30_k196) (##string ##.string.468))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[25]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k196, env)}),
      VEncodePointer(&_V10_Dstring_D468.sym, VPOINTER_OTHER));
}
static void _V10_Dtransform__match_D30_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 2 ((close _V10_Dmatch__ellipses_D43_lambda9) (close _V10_Dmatch__iter_D44_lambda14)) ((bruijn ##.gensym.26 3 25) (close _V10_Dtransform__match_D30_k195) (##string ##.string.462)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D43_lambda9, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D44_lambda14, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[25]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k195, env)}),
      VEncodePointer(&_V10_Dstring_D462.sym, VPOINTER_OTHER));
    }
}
static void _V0vanity_V0compiler_V0match_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25) {
  struct { VEnv env; VWORD argv[26]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 26, 26, upenv);
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
  // (letrec 4 ((close _V10_Dmy__num__pairs_D27_lambda3) (close _V10_Dgather__variables_D28_lambda5) (close _V10_Dcheck__pattern_D29_lambda6) (close _V10_Dtransform__match_D30_lambda8)) ((bruijn ##.k.76 31 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.30 0 3)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[4]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 4, 4, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmy__num__pairs_D27_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_lambda5, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcheck__pattern_D29_lambda6, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_lambda8, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        env->vars[3]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0match_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0match_V20_lambda2) (bruijn ##.x.77 25 0) (bruijn ##.x.78 24 0) (bruijn ##.x.79 23 0) (bruijn ##.x.80 22 0) (bruijn ##.x.81 21 0) (bruijn ##.x.82 20 0) (bruijn ##.x.83 19 0) (bruijn ##.x.84 18 0) (bruijn ##.x.85 17 0) (bruijn ##.x.86 16 0) (bruijn ##.x.87 15 0) (bruijn ##.x.88 14 0) (bruijn ##.x.89 13 0) (bruijn ##.x.90 12 0) (bruijn ##.x.91 11 0) (bruijn ##.x.92 10 0) (bruijn ##.x.93 9 0) (bruijn ##.x.94 8 0) (bruijn ##.x.95 7 0) (bruijn ##.x.96 6 0) (bruijn ##.x.97 5 0) (bruijn ##.x.98 4 0) (bruijn ##.x.99 3 0) (bruijn ##.x.100 2 0) (bruijn ##.x.101 1 0) (bruijn ##.x.102 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda2, .env = env }, }, 26,
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
static void _V0vanity_V0compiler_V0match_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 25 0) (close _V0vanity_V0compiler_V0match_V20_k29) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k29, env)}),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0match_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 24 0) (close _V0vanity_V0compiler_V0match_V20_k28) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k28, env)}),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0match_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 23 0) (close _V0vanity_V0compiler_V0match_V20_k27) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k27, env)}),
      _V0caar);
}
static void _V0vanity_V0compiler_V0match_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 22 0) (close _V0vanity_V0compiler_V0match_V20_k26) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k26, env)}),
      _V0list);
}
static void _V0vanity_V0compiler_V0match_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 21 0) (close _V0vanity_V0compiler_V0match_V20_k25) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k25, env)}),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0match_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 20 0) (close _V0vanity_V0compiler_V0match_V20_k24) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k24, env)}),
      _V0cons);
}
static void _V0vanity_V0compiler_V0match_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 19 0) (close _V0vanity_V0compiler_V0match_V20_k23) 'compiler-warning)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k23, env)}),
      _V0compiler__warning);
}
static void _V0vanity_V0compiler_V0match_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 18 0) (close _V0vanity_V0compiler_V0match_V20_k22) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k22, env)}),
      _V0not);
}
static void _V0vanity_V0compiler_V0match_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 17 0) (close _V0vanity_V0compiler_V0match_V20_k21) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k21, env)}),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 16 0) (close _V0vanity_V0compiler_V0match_V20_k20) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k20, env)}),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0match_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, env)}),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0match_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, env)}),
      _V0_G);
}
static void _V0vanity_V0compiler_V0match_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, env)}),
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, env)}),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) 'vector?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, env)}),
      _V0vector_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) 'typevector?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, env)}),
      _V0typevector_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) 'string?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, env)}),
      _V0string_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, env)}),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0match_V20_k11) 'cddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k11, env)}),
      _V0cddar);
}
static void _V0vanity_V0compiler_V0match_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0match_V20_k10) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k10, env)}),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0match_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0match_V20_k9) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k9, env)}),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0match_V20_k8) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k8, env)}),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0match_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0match_V20_k7) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k7, env)}),
      _V0car);
}
static void _V0vanity_V0compiler_V0match_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0match_V20_k6) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k6, env)}),
      _V0_P);
}
static void _V0vanity_V0compiler_V0match_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0match_V20_k5) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k5, env)}),
      _V0eqv_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0match_V20_k4) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k4, env)}),
      _V0_L_E);
}
static void _V0vanity_V0compiler_V0match_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##.string.469) (bruijn ##.x.455 1 0) (bruijn ##.x.456 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D469.sym, VPOINTER_OTHER),
      upenv->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##.string.470))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D470.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##.string.471))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D471.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
