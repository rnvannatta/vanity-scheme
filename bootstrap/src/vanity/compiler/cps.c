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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2011 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2010 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2009 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2008 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2007 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2006 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2005 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2004 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0eq_Q;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0eq_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "eq\?" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0_S;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_S = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "*" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
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
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2003 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2002 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2001 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2000 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1999 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D1998 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "count-refs: malformed application" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D1997 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "internal compiler error: negative variable refcount" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D1996 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D1995 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "next" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1994 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D1993 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1992 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D1991 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D1990 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
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
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0_S = VEncodePointer(VLookupConstant("_V0_S", &_VW_V0_S), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
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
static void _V10_Dapplication_Q_D283_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D283_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.270 5 22) (bruijn ##.k.809 3 0) (bruijn ##.x.811 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 22)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dapplication_Q_D283_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D283_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.278 4 30) (close _V10_Dapplication_Q_D283_k46) (bruijn ##.x.812 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline '())))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[30]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D283_k46, env)}),
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
static void _V10_Dapplication_Q_D283_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D283_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.810 0 0) ((bruijn ##.car.279 3 31) (close _V10_Dapplication_Q_D283_k45) (bruijn ##.x.296 1 1)) ((bruijn ##.k.809 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[31]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D283_k45, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dapplication_Q_D283_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D283_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.277 2 29) (close _V10_Dapplication_Q_D283_k44) (bruijn ##.x.296 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[29]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D283_k44, env)}),
      _var1);
}
static void _V10_Dcombination_Q_D284_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D284_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.270 5 22) (bruijn ##.k.819 3 0) (bruijn ##.x.821 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 22)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dcombination_Q_D284_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D284_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.278 4 30) (close _V10_Dcombination_Q_D284_k49) (bruijn ##.x.822 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '())))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[30]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D284_k49, env)}),
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
static void _V10_Dcombination_Q_D284_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D284_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.820 0 0) ((bruijn ##.car.279 3 31) (close _V10_Dcombination_Q_D284_k48) (bruijn ##.x.297 1 1)) ((bruijn ##.k.819 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[31]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D284_k48, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcombination_Q_D284_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D284_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.277 2 29) (close _V10_Dcombination_Q_D284_k47) (bruijn ##.x.297 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[29]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D284_k47, env)}),
      _var1);
}
static void _V10_Diter__lambda_D306_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D306_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.835 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.309 1 0) (bruijn ##.args.307 2 1)) (##inline ##vcore.cons (bruijn ##.x.838 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        upenv->vars[0],
        upenv->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter__lambda_D306_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D306_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 4 4) (close _V10_Diter__lambda_D306_k51) (bruijn ##.body.308 1 2) (bruijn ##.k.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[4]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D306_k51, env)}),
      upenv->vars[2],
      _var0);
}
static void _V10_Diter__lambda_D306_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D306_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.gensym.248 6 0) (close _V10_Diter__lambda_D306_k50) (##string ##.string.1990))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D306_k50, env)}),
      VEncodePointer(&_V10_Dstring_D1990.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D299_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.902 0 0) (bruijn ##.k.897 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D299_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.265 14 17) (bruijn ##.k.903 1 0) 'lambda (bruijn ##.x.904 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 17)), 3,
      upenv->vars[0],
      _V0lambda,
      _var0);
}
static void _V10_Diter__atom_D299_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-lambda.306 8 0) (close _V10_Diter__atom_D299_k57) (##inline ##vcore.car (bruijn ##.expr.11.313 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.315 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k57, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter__atom_D299_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.315 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.315 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D299_k56) (close _V10_Diter__atom_D299_lambda11) (bruijn ##.kk.8.310 6 1)) ((bruijn ##.k.897 3 0) #f)) ((bruijn ##.k.897 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k56, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda11, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.313 0 0)) ((close _V10_Diter__atom_D299_k55) (##inline ##vcore.cdr (bruijn ##.expr.11.313 0 0))) ((bruijn ##.k.897 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k55, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.898 0 0) ((close _V10_Diter__atom_D299_k54) (##inline ##vcore.cdr (bruijn ##.expr.10.312 2 0))) ((bruijn ##.k.897 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k54, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.312 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Diter__atom_D299_k53) 'lambda (##inline ##vcore.car (bruijn ##.expr.10.312 1 0))) ((bruijn ##.k.897 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k53, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D320_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.319 5 1) (bruijn ##.k.886 2 0) (bruijn ##.expr.19.321 3 1) (bruijn ##.x.887 1 0) (bruijn ##.x.888 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D320_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 18 14) (close _V10_Dloop_D320_k63) (bruijn ##.body.16.323 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k63, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D320_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.19.321 1 1))) ((bruijn ##.reverse.262 17 14) (close _V10_Dloop_D320_k62) (bruijn ##.args.15.322 1 2)) ((bruijn ##.k.886 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k62, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D320_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.327 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.327 0 0))) ((bruijn ##.kk.18.324 3 1) (bruijn ##.k.878 1 0) (##inline ##vcore.cdr (bruijn ##.expr.19.321 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.20.325 2 0)) (bruijn ##.args.15.322 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.327 0 0)) (bruijn ##.body.16.323 6 3))) ((bruijn ##.k.878 1 0) #f)) ((bruijn ##.k.878 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D320_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.325 1 0)) ((close _V10_Dloop_D320_k67) (##inline ##vcore.cdr (bruijn ##.expr.20.325 1 0))) ((bruijn ##.k.878 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D320_k67, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D320_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.319 9 1) (bruijn ##.k.873 4 0) (bruijn ##.expr.19.321 7 1) (bruijn ##.x.875 1 0) (bruijn ##.x.876 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D320_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 22 14) (close _V10_Dloop_D320_k70) (bruijn ##.body.16.323 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k70, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D320_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 21 14) (close _V10_Dloop_D320_k69) (bruijn ##.args.15.322 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k69, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D320_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D320_k66) (close _V10_Dloop_D320_k68))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D320_k66, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k68, env)}));
}
static void _V10_Dloop_D320_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D320_k65) (##inline ##vcore.car (bruijn ##.expr.19.321 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D320_k65, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D320_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.872 0 0) (close _V10_Dloop_D320_lambda17))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_lambda17, env)}));
}
static void _V10_Dloop_D320_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.870 1 0) (close _V10_Dloop_D320_lambda16) (bruijn ##.loop.320 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_lambda16, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D320_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D320_lambda15, got ~D~N"
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
  // ((close _V10_Dloop_D320_k61) (close _V10_Dloop_D320_k64))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D320_k61, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_k64, env)}));
}
static void _V10_Diter__atom_D299_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D320_lambda15)) ((bruijn ##.loop.320 0 0) (bruijn ##.k.869 1 0) (##inline ##vcore.cdr (bruijn ##.expr.13.317 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D320_lambda15, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__atom_D299_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.868 0 0) (close _V10_Diter__atom_D299_lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda14, env)}));
}
static void _V10_Diter__atom_D299_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.892 0 0) (bruijn ##.k.890 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter__atom_D299_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.265 15 17) (bruijn ##.k.893 1 0) 'case-lambda (bruijn ##.x.894 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 17)), 3,
      upenv->vars[0],
      _V0case__lambda,
      _var0);
}
static void _V10_Diter__atom_D299_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 14 15) (close _V10_Diter__atom_D299_k72) (bruijn ##.iter-lambda.306 9 0) (bruijn ##.args.330 1 2) (bruijn ##.body.331 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k72, env)}),
      VGetArg(upenv, 9-1, 0),
      upenv->vars[2],
      upenv->vars[3]);
}
static void _V10_Diter__atom_D299_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda18, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.329 0 1)) (##vcore.call-with-values (close _V10_Diter__atom_D299_k71) (close _V10_Diter__atom_D299_lambda19) (bruijn ##.kk.8.310 7 1)) ((bruijn ##.k.890 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k71, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda19, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.867 0 0) (##vcore.call-with-values (bruijn ##.k.866 1 0) (close _V10_Diter__atom_D299_lambda13) (close _V10_Diter__atom_D299_lambda18)) ((bruijn ##.k.866 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda13, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda18, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.317 1 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Diter__atom_D299_k60) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.13.317 1 0))) ((bruijn ##.k.866 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k60, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.862 0 0) (bruijn ##.k.860 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter__atom_D299_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.863 0 0) (bruijn ##.x.305 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 11-1, 1));
}
static void _V10_Diter__atom_D299_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.861 0 0) (##vcore.call-with-values (close _V10_Diter__atom_D299_k76) (close _V10_Diter__atom_D299_lambda21) (bruijn ##.kk.8.310 8 1)) ((bruijn ##.k.860 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k76, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda21, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.332 1 0)) ((bruijn ##.equal?.282 13 34) (close _V10_Diter__atom_D299_k75) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.22.332 1 0))) ((bruijn ##.k.860 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k75, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.855 0 0) (bruijn ##.k.851 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Diter__atom_D299_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.856 0 0) (bruijn ##.x.305 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Diter__atom_D299_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.334 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.24.334 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D299_k81) (close _V10_Diter__atom_D299_lambda23) (bruijn ##.kk.8.310 11 1)) ((bruijn ##.k.851 2 0) #f)) ((bruijn ##.k.851 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k81, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda23, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.852 0 0) ((close _V10_Diter__atom_D299_k80) (##inline ##vcore.cdr (bruijn ##.expr.23.333 2 0))) ((bruijn ##.k.851 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k80, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.333 1 0)) ((bruijn ##.equal?.282 15 34) (close _V10_Diter__atom_D299_k79) 'quote (##inline ##vcore.car (bruijn ##.expr.23.333 1 0))) ((bruijn ##.k.851 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k79, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.848 0 0) (bruijn ##.k.847 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter__atom_D299_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 17 16) (bruijn ##.k.849 0 0) (##string ##.string.1991))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 16)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D1991.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D299_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.input.9.311 9 0)) (##vcore.call-with-values (close _V10_Diter__atom_D299_k84) (close _V10_Diter__atom_D299_lambda24) (bruijn ##.kk.8.310 10 1)) ((bruijn ##.k.847 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(upenv, 9-1, 0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k84, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda24, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D299_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.845 0 0) (bruijn ##.x.305 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Diter__atom_D299_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.839 10 0) (close _V10_Diter__atom_D299_lambda25) (bruijn ##.kk.8.310 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 10-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda25, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Diter__atom_D299_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_k83) (close _V10_Diter__atom_D299_k85))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k83, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k85, env)}));
}
static void _V10_Diter__atom_D299_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_k78) (close _V10_Diter__atom_D299_k82))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k78, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k82, env)}));
}
static void _V10_Diter__atom_D299_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_lambda22) (bruijn ##.input.9.311 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_lambda22, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter__atom_D299_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_k74) (close _V10_Diter__atom_D299_k77))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k74, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k77, env)}));
}
static void _V10_Diter__atom_D299_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_lambda20) (bruijn ##.input.9.311 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_lambda20, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D299_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_k59) (close _V10_Diter__atom_D299_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k59, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k73, env)}));
}
static void _V10_Diter__atom_D299_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_lambda12) (bruijn ##.input.9.311 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_lambda12, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Diter__atom_D299_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_k52) (close _V10_Diter__atom_D299_k58))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_k52, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_k58, env)}));
}
static void _V10_Diter__atom_D299_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D299_lambda10) (bruijn ##.input.9.311 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_lambda10, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter__atom_D299_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__atom_D299_lambda9) (bruijn ##.x.305 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D299_lambda9, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Diter__atom_D299_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D299_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter__lambda_D306_lambda7)) (##vcore.call/cc (bruijn ##.k.834 1 0) (close _V10_Diter__atom_D299_lambda8)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D306_lambda7, env)});
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda8, env)}));
    }
}
static void _V10_Dloop_D339_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.908 3 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.args.335 5 1) (##inline ##vcore.cons (bruijn ##.x.913 0 0) '()))) (bruijn ##.appl.342 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
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
static void _V10_Dloop_D339_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 5 4) (close _V10_Dloop_D339_k88) (bruijn ##.body.336 4 2) (bruijn ##.k.338 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k88, env)}),
      upenv->up->up->up->vars[2],
      upenv->up->up->up->vars[4]);
}
static void _V10_Dloop_D339_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 11 4) (bruijn ##.k.908 8 0) (bruijn ##.x.915 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.343 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.920 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 4)), 3,
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
static void _V10_Dloop_D339_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.339 8 0) (close _V10_Dloop_D339_k95) (bruijn ##.x.921 1 0) (bruijn ##.x.922 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k95, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D339_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D339_k94) (bruijn ##.vals.341 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k94, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D339_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D339_k93) (bruijn ##.x.343 1 0) (bruijn ##.appl.340 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k93, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D339_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.279 10 31) (close _V10_Dloop_D339_k92) (bruijn ##.vals.341 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k92, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D339_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.339 8 0) (bruijn ##.k.908 7 0) (bruijn ##.x.923 1 0) (bruijn ##.x.924 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D339_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D339_k99) (bruijn ##.vals.341 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k99, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D339_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D339_k98) (bruijn ##.x.925 0 0) (bruijn ##.appl.340 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k98, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D339_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.299 7 0) (close _V10_Dloop_D339_k97) (bruijn ##.x.926 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k97, env)}),
      _var0);
}
static void _V10_Dloop_D339_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.914 0 0) ((bruijn ##.gensym.248 9 0) (close _V10_Dloop_D339_k91) (##string ##.string.1992)) ((bruijn ##.car.279 9 31) (close _V10_Dloop_D339_k96) (bruijn ##.vals.341 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k91, env)}),
      VEncodePointer(&_V10_Dstring_D1992.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k96, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dloop_D339_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 7 0) (close _V10_Dloop_D339_k90) (bruijn ##.x.927 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k90, env)}),
      _var0);
}
static void _V10_Dloop_D339_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.909 0 0) ((bruijn ##.reverse.262 7 14) (close _V10_Dloop_D339_k87) (bruijn ##.appl.340 1 1)) ((bruijn ##.car.279 7 31) (close _V10_Dloop_D339_k89) (bruijn ##.vals.341 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k87, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k89, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dloop_D339_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D339_lambda27, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.250 6 2) (close _V10_Dloop_D339_k86) (bruijn ##.vals.341 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_k86, env)}),
      _var2);
}
static void _V10_Diter__let_D300_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__let_D300_lambda26, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D339_lambda27)) ((bruijn ##.loop.339 0 0) (bruijn ##.k.907 1 0) '() (bruijn ##.vals.337 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D339_lambda27, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
}
static void _V10_Dloop_D348_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.929 4 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.932 1 0) (##inline ##vcore.cons (bruijn ##.x.934 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D348_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 6 4) (close _V10_Dloop_D348_k103) (bruijn ##.body.345 5 2) (bruijn ##.k.347 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k103, env)}),
      VGetArg(upenv, 5-1, 2),
      VGetArg(upenv, 5-1, 4));
}
static void _V10_Dloop_D348_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 8 15) (close _V10_Dloop_D348_k102) (bruijn ##.list.269 8 21) (bruijn ##.args.344 4 1) (bruijn ##.x.935 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k102, env)}),
      VGetArg(upenv, 8-1, 21),
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D348_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 11 4) (bruijn ##.k.929 8 0) (bruijn ##.x.937 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.351 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.942 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 4)), 3,
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
static void _V10_Dloop_D348_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.348 8 0) (close _V10_Dloop_D348_k110) (bruijn ##.x.943 1 0) (bruijn ##.x.944 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k110, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D348_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D348_k109) (bruijn ##.vals.350 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k109, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D348_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D348_k108) (bruijn ##.x.351 1 0) (bruijn ##.done-vals.349 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k108, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D348_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.279 10 31) (close _V10_Dloop_D348_k107) (bruijn ##.vals.350 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k107, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D348_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.348 8 0) (bruijn ##.k.929 7 0) (bruijn ##.x.945 1 0) (bruijn ##.x.946 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D348_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D348_k114) (bruijn ##.vals.350 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k114, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D348_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D348_k113) (bruijn ##.x.947 0 0) (bruijn ##.done-vals.349 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k113, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D348_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.299 7 0) (close _V10_Dloop_D348_k112) (bruijn ##.x.948 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k112, env)}),
      _var0);
}
static void _V10_Dloop_D348_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.936 0 0) ((bruijn ##.gensym.248 9 0) (close _V10_Dloop_D348_k106) (##string ##.string.1992)) ((bruijn ##.car.279 9 31) (close _V10_Dloop_D348_k111) (bruijn ##.vals.350 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k106, env)}),
      VEncodePointer(&_V10_Dstring_D1992.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k111, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dloop_D348_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 7 0) (close _V10_Dloop_D348_k105) (bruijn ##.x.949 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k105, env)}),
      _var0);
}
static void _V10_Dloop_D348_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.930 0 0) ((bruijn ##.reverse.262 7 14) (close _V10_Dloop_D348_k101) (bruijn ##.done-vals.349 1 1)) ((bruijn ##.car.279 7 31) (close _V10_Dloop_D348_k104) (bruijn ##.vals.350 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k101, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k104, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dloop_D348_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D348_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.250 6 2) (close _V10_Dloop_D348_k100) (bruijn ##.vals.350 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_k100, env)}),
      _var2);
}
static void _V10_Diter__letrec_D301_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D301_lambda28, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Dloop_D348_lambda29)) ((bruijn ##.loop.348 0 0) (bruijn ##.k.928 1 0) '() (bruijn ##.vals.346 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D348_lambda29, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VNULL,
      upenv->vars[3]);
    }
}
static void _V10_Dloop_D354_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.951 4 0) (##inline ##vcore.cons (bruijn ##.x.953 1 0) (##inline ##vcore.cons (bruijn ##.cont.353 6 2) (bruijn ##.x.955 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        VGetArg(upenv, 6-1, 2),
        _var0)));
}
static void _V10_Dloop_D354_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 9 8) (close _V10_Dloop_D354_k118) (bruijn ##.appl.357 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k118, env)}),
      upenv->vars[0]);
}
static void _V10_Dloop_D354_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.279 8 31) (close _V10_Dloop_D354_k117) (bruijn ##.appl.357 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k117, env)}),
      _var0);
}
static void _V10_Dloop_D354_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 11 4) (bruijn ##.k.951 8 0) (bruijn ##.x.957 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.358 4 0) '()) (##inline ##vcore.cons (bruijn ##.x.962 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 4)), 3,
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
static void _V10_Dloop_D354_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.loop.354 8 0) (close _V10_Dloop_D354_k125) (bruijn ##.x.963 1 0) (bruijn ##.x.964 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k125, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D354_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D354_k124) (bruijn ##.args.356 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k124, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D354_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D354_k123) (bruijn ##.x.358 1 0) (bruijn ##.appl.355 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k123, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D354_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.car.279 10 31) (close _V10_Dloop_D354_k122) (bruijn ##.args.356 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k122, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D354_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.354 8 0) (bruijn ##.k.951 7 0) (bruijn ##.x.965 1 0) (bruijn ##.x.966 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 3,
      VGetArg(upenv, 7-1, 0),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D354_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 12 8) (close _V10_Dloop_D354_k129) (bruijn ##.args.356 6 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k129, env)}),
      VGetArg(upenv, 6-1, 2));
}
static void _V10_Dloop_D354_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 11 17) (close _V10_Dloop_D354_k128) (bruijn ##.x.967 0 0) (bruijn ##.appl.355 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k128, env)}),
      _var0,
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Dloop_D354_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-atom.299 7 0) (close _V10_Dloop_D354_k127) (bruijn ##.x.968 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k127, env)}),
      _var0);
}
static void _V10_Dloop_D354_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.956 0 0) ((bruijn ##.gensym.248 9 0) (close _V10_Dloop_D354_k121) (##string ##.string.1992)) ((bruijn ##.car.279 9 31) (close _V10_Dloop_D354_k126) (bruijn ##.args.356 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k121, env)}),
      VEncodePointer(&_V10_Dstring_D1992.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k126, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dloop_D354_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 7 0) (close _V10_Dloop_D354_k120) (bruijn ##.x.969 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k120, env)}),
      _var0);
}
static void _V10_Dloop_D354_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.952 0 0) ((bruijn ##.reverse.262 7 14) (close _V10_Dloop_D354_k116) (bruijn ##.appl.355 1 1)) ((bruijn ##.car.279 7 31) (close _V10_Dloop_D354_k119) (bruijn ##.args.356 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k116, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k119, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dloop_D354_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D354_lambda31, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.250 6 2) (close _V10_Dloop_D354_k115) (bruijn ##.args.356 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_k115, env)}),
      _var2);
}
static void _V10_Diter__combination_D302_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D302_lambda30, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D354_lambda31)) ((bruijn ##.loop.354 0 0) (bruijn ##.k.950 1 0) '() (bruijn ##.args.352 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D354_lambda31, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VNULL,
      upenv->vars[1]);
    }
}
static void _V10_Diter2_D303_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1119 0 0) (bruijn ##.k.1114 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter2_D303_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 15 4) (bruijn ##.k.1120 3 0) (bruijn ##.x.365 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1127 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1126 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 4)), 3,
      upenv->up->up->vars[0],
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
static void _V10_Diter2_D303_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 14 4) (close _V10_Diter2_D303_k140) (bruijn ##.y.367 3 0) (bruijn ##.cont.360 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k140, env)}),
      upenv->up->up->vars[0],
      VGetArg(upenv, 13-1, 2));
}
static void _V10_Diter2_D303_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1121 0 0) ((bruijn ##.gensym.248 16 0) (close _V10_Diter2_D303_k139) (##string ##.string.1993)) ((bruijn ##.iter2.303 13 4) (bruijn ##.k.1120 1 0) (bruijn ##.y.367 2 0) (bruijn ##.cont.360 12 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k139, env)}),
      VEncodePointer(&_V10_Dstring_D1993.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 4)), 3,
      upenv->vars[0],
      upenv->up->vars[0],
      VGetArg(upenv, 12-1, 2));
}
}
static void _V10_Diter2_D303_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 14 0) (close _V10_Diter2_D303_k138) (bruijn ##.x.365 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k138, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Diter2_D303_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.366 1 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k137) (close _V10_Diter2_D303_lambda36) (bruijn ##.kk.25.361 8 1)) ((bruijn ##.k.1114 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k137, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda36, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.366 0 0)) ((close _V10_Diter2_D303_k136) (##inline ##vcore.car (bruijn ##.expr.29.366 0 0))) ((bruijn ##.k.1114 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k136, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k135) (##inline ##vcore.cdr (bruijn ##.expr.28.364 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k135, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter2_D303_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.364 0 0)) ((close _V10_Diter2_D303_k134) (##inline ##vcore.car (bruijn ##.expr.28.364 0 0))) ((bruijn ##.k.1114 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k134, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1115 0 0) ((close _V10_Diter2_D303_k133) (##inline ##vcore.cdr (bruijn ##.expr.27.363 2 0))) ((bruijn ##.k.1114 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k133, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.363 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Diter2_D303_k132) 'begin (##inline ##vcore.car (bruijn ##.expr.27.363 1 0))) ((bruijn ##.k.1114 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k132, env)}),
      _V0begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1080 0 0) (bruijn ##.k.1074 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Diter2_D303_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 19 4) (bruijn ##.k.1081 3 0) (bruijn ##.p.370 8 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.375 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1087 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 4)), 3,
      upenv->up->up->vars[0],
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
static void _V10_Diter2_D303_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 18 4) (close _V10_Diter2_D303_k153) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.sym.375 0 0) (##inline ##vcore.cons (bruijn ##.x.372 5 0) (##inline ##vcore.cons (bruijn ##.y.374 3 0) '())))) (bruijn ##.cont.360 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k153, env)}),
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
static void _V10_Diter2_D303_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1081 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.370 10 0) (##inline ##vcore.cons (bruijn ##.x.1096 1 0) (##inline ##vcore.cons (bruijn ##.x.1098 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
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
static void _V10_Diter2_D303_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 20 4) (close _V10_Diter2_D303_k157) (bruijn ##.y.374 5 0) (bruijn ##.cont.360 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k157, env)}),
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 19-1, 2));
}
static void _V10_Diter2_D303_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1081 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.376 2 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.370 11 0) (##inline ##vcore.cons (bruijn ##.x.1107 1 0) (##inline ##vcore.cons (bruijn ##.x.1109 0 0) '())))) '()))) (##inline ##vcore.cons (bruijn ##.cont.360 21 2) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
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
static void _V10_Diter2_D303_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 21 4) (close _V10_Diter2_D303_k160) (bruijn ##.y.374 6 0) (bruijn ##.k.376 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k160, env)}),
      VGetArg(upenv, 6-1, 0),
      upenv->vars[0]);
}
static void _V10_Diter2_D303_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 20 4) (close _V10_Diter2_D303_k159) (bruijn ##.x.372 7 0) (bruijn ##.k.376 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k159, env)}),
      VGetArg(upenv, 7-1, 0),
      _var0);
}
static void _V10_Diter2_D303_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1093 0 0) ((bruijn ##.iter2.303 19 4) (close _V10_Diter2_D303_k156) (bruijn ##.x.372 6 0) (bruijn ##.cont.360 18 2)) ((bruijn ##.gensym.248 22 0) (close _V10_Diter2_D303_k158) (##string ##.string.1990)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k156, env)}),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k158, env)}),
      VEncodePointer(&_V10_Dstring_D1990.sym, VPOINTER_OTHER));
}
}
static void _V10_Diter2_D303_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1110 0 0) ((bruijn ##.iter2.303 19 4) (bruijn ##.k.1081 3 0) (bruijn ##.y.374 4 0) (bruijn ##.cont.360 18 2)) ((bruijn ##.iter2.303 19 4) (bruijn ##.k.1081 3 0) (bruijn ##.x.372 6 0) (bruijn ##.cont.360 18 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 4)), 3,
      upenv->up->up->vars[0],
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 18-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 4)), 3,
      upenv->up->up->vars[0],
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 18-1, 2));
}
}
static void _V10_Diter2_D303_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1092 0 0) ((bruijn ##.symbol?.267 21 19) (close _V10_Diter2_D303_k155) (bruijn ##.cont.360 17 2)) ((bruijn ##.eq?.249 21 1) (close _V10_Diter2_D303_k161) (bruijn ##.p.370 7 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k155, env)}),
      VGetArg(upenv, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k161, env)}),
      VGetArg(upenv, 7-1, 0),
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1082 0 0) ((bruijn ##.gensym.248 20 0) (close _V10_Diter2_D303_k152) (##string ##.string.1994)) ((bruijn ##.symbol?.267 20 19) (close _V10_Diter2_D303_k154) (bruijn ##.p.370 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k152, env)}),
      VEncodePointer(&_V10_Dstring_D1994.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k154, env)}),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Diter2_D303_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 18 0) (close _V10_Diter2_D303_k151) (bruijn ##.p.370 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k151, env)}),
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Diter2_D303_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.373 1 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k150) (close _V10_Diter2_D303_lambda38) (bruijn ##.kk.25.361 12 1)) ((bruijn ##.k.1074 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k150, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda38, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.373 0 0)) ((close _V10_Diter2_D303_k149) (##inline ##vcore.car (bruijn ##.expr.33.373 0 0))) ((bruijn ##.k.1074 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k149, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k148) (##inline ##vcore.cdr (bruijn ##.expr.32.371 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k148, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter2_D303_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.371 0 0)) ((close _V10_Diter2_D303_k147) (##inline ##vcore.car (bruijn ##.expr.32.371 0 0))) ((bruijn ##.k.1074 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k147, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k146) (##inline ##vcore.cdr (bruijn ##.expr.31.369 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k146, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter2_D303_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.369 0 0)) ((close _V10_Diter2_D303_k145) (##inline ##vcore.car (bruijn ##.expr.31.369 0 0))) ((bruijn ##.k.1074 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k145, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1075 0 0) ((close _V10_Diter2_D303_k144) (##inline ##vcore.cdr (bruijn ##.expr.30.368 2 0))) ((bruijn ##.k.1074 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k144, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.30.368 1 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Diter2_D303_k143) 'if (##inline ##vcore.car (bruijn ##.expr.30.368 1 0))) ((bruijn ##.k.1074 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k143, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1056 0 0) (bruijn ##.k.1051 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter2_D303_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 19 4) (bruijn ##.k.1057 3 0) (bruijn ##.x.379 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.382 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1063 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 4)), 3,
      upenv->up->up->vars[0],
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
static void _V10_Diter2_D303_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 18 4) (close _V10_Diter2_D303_k172) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.sym.382 0 0) (##inline ##vcore.cons (bruijn ##.y.381 3 0) '()))) (bruijn ##.cont.360 17 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k172, env)}),
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        upenv->up->up->vars[0],
        VNULL))),
      VGetArg(upenv, 17-1, 2));
}
static void _V10_Diter2_D303_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1058 0 0) ((bruijn ##.gensym.248 20 0) (close _V10_Diter2_D303_k171) (##string ##.string.1994)) ((bruijn ##.iter2.303 17 4) (bruijn ##.k.1057 1 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.379 4 0) (##inline ##vcore.cons (bruijn ##.x.379 4 0) (##inline ##vcore.cons (bruijn ##.y.381 2 0) '())))) (bruijn ##.cont.360 16 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k171, env)}),
      VEncodePointer(&_V10_Dstring_D1994.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 4)), 3,
      upenv->vars[0],
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
static void _V10_Diter2_D303_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 18 0) (close _V10_Diter2_D303_k170) (bruijn ##.x.379 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k170, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Diter2_D303_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.380 1 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k169) (close _V10_Diter2_D303_lambda40) (bruijn ##.kk.25.361 12 1)) ((bruijn ##.k.1051 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k169, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda40, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.380 0 0)) ((close _V10_Diter2_D303_k168) (##inline ##vcore.car (bruijn ##.expr.36.380 0 0))) ((bruijn ##.k.1051 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k168, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k167) (##inline ##vcore.cdr (bruijn ##.expr.35.378 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k167, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter2_D303_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.378 0 0)) ((close _V10_Diter2_D303_k166) (##inline ##vcore.car (bruijn ##.expr.35.378 0 0))) ((bruijn ##.k.1051 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k166, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1052 0 0) ((close _V10_Diter2_D303_k165) (##inline ##vcore.cdr (bruijn ##.expr.34.377 2 0))) ((bruijn ##.k.1051 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k165, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.34.377 1 0)) ((bruijn ##.equal?.282 13 34) (close _V10_Diter2_D303_k164) 'or (##inline ##vcore.car (bruijn ##.expr.34.377 1 0))) ((bruijn ##.k.1051 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k164, env)}),
      _V0or,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1036 0 0) (bruijn ##.k.1026 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Diter2_D303_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.303 24 4) (bruijn ##.k.1037 2 0) (bruijn ##.val.391 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.387 7 0) '()) (##inline ##vcore.cons (bruijn ##.x.1043 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 4)), 3,
      upenv->up->vars[0],
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
static void _V10_Diter2_D303_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.300 25 1) (bruijn ##.k.1037 3 0) (bruijn ##.x.1044 1 0) (bruijn ##.body.389 6 0) (bruijn ##.x.1045 0 0) (bruijn ##.cont.360 24 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 1)), 5,
      upenv->up->up->vars[0],
      upenv->vars[0],
      VGetArg(upenv, 6-1, 0),
      _var0,
      VGetArg(upenv, 24-1, 2));
}
static void _V10_Diter2_D303_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.list.269 27 21) (close _V10_Diter2_D303_k188) (bruijn ##.val.391 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k188, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Diter2_D303_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1038 0 0) ((bruijn ##.iter2.303 23 4) (close _V10_Diter2_D303_k186) (bruijn ##.body.389 4 0) (bruijn ##.cont.360 22 2)) ((bruijn ##.list.269 26 21) (close _V10_Diter2_D303_k187) (bruijn ##.x.387 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 4)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k186, env)}),
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 22-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 21)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k187, env)}),
      VGetArg(upenv, 6-1, 0));
}
}
static void _V10_Diter2_D303_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.application?.283 24 0) (close _V10_Diter2_D303_k185) (bruijn ##.val.391 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k185, env)}),
      upenv->vars[0]);
}
static void _V10_Diter2_D303_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.390 1 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k184) (close _V10_Diter2_D303_lambda42) (bruijn ##.kk.25.361 18 1)) ((bruijn ##.k.1026 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k184, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda42, env)}),
      VGetArg(upenv, 18-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.390 0 0)) ((close _V10_Diter2_D303_k183) (##inline ##vcore.car (bruijn ##.expr.42.390 0 0))) ((bruijn ##.k.1026 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k183, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.388 1 0))) ((close _V10_Diter2_D303_k182) (##inline ##vcore.cdr (bruijn ##.expr.37.383 8 0))) ((bruijn ##.k.1026 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k182, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.388 0 0)) ((close _V10_Diter2_D303_k181) (##inline ##vcore.car (bruijn ##.expr.41.388 0 0))) ((bruijn ##.k.1026 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k181, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.386 1 0))) ((close _V10_Diter2_D303_k180) (##inline ##vcore.cdr (bruijn ##.expr.39.385 2 0))) ((bruijn ##.k.1026 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k180, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.386 0 0)) ((close _V10_Diter2_D303_k179) (##inline ##vcore.car (bruijn ##.expr.40.386 0 0))) ((bruijn ##.k.1026 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k179, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.385 0 0)) ((close _V10_Diter2_D303_k178) (##inline ##vcore.car (bruijn ##.expr.39.385 0 0))) ((bruijn ##.k.1026 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k178, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1028 0 0) ((close _V10_Diter2_D303_k177) (##inline ##vcore.cdr (bruijn ##.expr.38.384 1 0))) ((bruijn ##.k.1026 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k177, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.384 0 0)) ((bruijn ##.equal?.282 16 34) (close _V10_Diter2_D303_k176) 'lambda (##inline ##vcore.car (bruijn ##.expr.38.384 0 0))) ((bruijn ##.k.1026 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k176, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.383 1 0)) ((close _V10_Diter2_D303_k175) (##inline ##vcore.car (bruijn ##.expr.37.383 1 0))) ((bruijn ##.k.1026 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k175, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1021 0 0) (bruijn ##.k.1015 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Diter2_D303_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.300 19 1) (bruijn ##.k.1022 0 0) (##inline ##vcore.car (bruijn ##.expr.45.394 2 0)) (##inline ##vcore.car (bruijn ##.expr.46.396 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.43.392 6 0)) (bruijn ##.cont.360 18 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 1)), 5,
      _var0,
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0)),
      VGetArg(upenv, 18-1, 2));
}
static void _V10_Diter2_D303_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.396 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.396 0 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k195) (close _V10_Diter2_D303_lambda44) (bruijn ##.kk.25.361 15 1)) ((bruijn ##.k.1015 4 0) #f)) ((bruijn ##.k.1015 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k195, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda44, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.394 0 0)) ((close _V10_Diter2_D303_k194) (##inline ##vcore.cdr (bruijn ##.expr.45.394 0 0))) ((bruijn ##.k.1015 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k194, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1017 0 0) ((close _V10_Diter2_D303_k193) (##inline ##vcore.cdr (bruijn ##.expr.44.393 1 0))) ((bruijn ##.k.1015 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k193, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.393 0 0)) ((bruijn ##.equal?.282 18 34) (close _V10_Diter2_D303_k192) 'lambda (##inline ##vcore.car (bruijn ##.expr.44.393 0 0))) ((bruijn ##.k.1015 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k192, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.43.392 1 0)) ((close _V10_Diter2_D303_k191) (##inline ##vcore.car (bruijn ##.expr.43.392 1 0))) ((bruijn ##.k.1015 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k191, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D403_k202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.402 5 1) (bruijn ##.k.1002 2 0) (bruijn ##.expr.54.404 3 1) (bruijn ##.x.1003 1 0) (bruijn ##.x.1004 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D403_k201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 27 14) (close _V10_Dloop_D403_k202) (bruijn ##.vals.51.406 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k202, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D403_k200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.54.404 1 1))) ((bruijn ##.reverse.262 26 14) (close _V10_Dloop_D403_k201) (bruijn ##.xs.50.405 1 2)) ((bruijn ##.k.1002 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k201, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D403_k206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.410 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.410 0 0))) ((bruijn ##.kk.53.407 3 1) (bruijn ##.k.994 1 0) (##inline ##vcore.cdr (bruijn ##.expr.54.404 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.55.408 2 0)) (bruijn ##.xs.50.405 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.56.410 0 0)) (bruijn ##.vals.51.406 6 3))) ((bruijn ##.k.994 1 0) #f)) ((bruijn ##.k.994 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D403_k205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.408 1 0)) ((close _V10_Dloop_D403_k206) (##inline ##vcore.cdr (bruijn ##.expr.55.408 1 0))) ((bruijn ##.k.994 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D403_k206, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D403_k209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.402 9 1) (bruijn ##.k.989 4 0) (bruijn ##.expr.54.404 7 1) (bruijn ##.x.991 1 0) (bruijn ##.x.992 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D403_k208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 31 14) (close _V10_Dloop_D403_k209) (bruijn ##.vals.51.406 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k209, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D403_k207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 30 14) (close _V10_Dloop_D403_k208) (bruijn ##.xs.50.405 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k208, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D403_k204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D403_k205) (close _V10_Dloop_D403_k207))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D403_k205, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k207, env)}));
}
static void _V10_Dloop_D403_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_lambda50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D403_k204) (##inline ##vcore.car (bruijn ##.expr.54.404 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D403_k204, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D403_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_lambda49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.988 0 0) (close _V10_Dloop_D403_lambda50))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_lambda50, env)}));
}
static void _V10_Dloop_D403_k203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.986 1 0) (close _V10_Dloop_D403_lambda49) (bruijn ##.loop.403 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_lambda49, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D403_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D403_lambda48, got ~D~N"
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
  // ((close _V10_Dloop_D403_k200) (close _V10_Dloop_D403_k203))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D403_k200, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_k203, env)}));
}
static void _V10_Diter2_D303_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda47, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D403_lambda48)) ((bruijn ##.loop.403 0 0) (bruijn ##.k.985 1 0) (##inline ##vcore.car (bruijn ##.expr.48.400 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D403_lambda48, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter2_D303_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.984 0 0) (close _V10_Diter2_D303_lambda47))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda47, env)}));
}
static void _V10_Diter2_D303_k211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1010 0 0) (bruijn ##.k.1006 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter2_D303_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-letrec.301 21 2) (bruijn ##.k.1011 0 0) (bruijn ##.xs.413 2 2) (##inline ##vcore.car (bruijn ##.expr.57.415 1 0)) (bruijn ##.vals.414 2 3) (bruijn ##.cont.360 20 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 2)), 5,
      _var0,
      upenv->up->vars[2],
      VInlineCar2(runtime,
        upenv->vars[0]),
      upenv->up->vars[3],
      VGetArg(upenv, 20-1, 2));
}
static void _V10_Diter2_D303_k210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.415 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.415 0 0))) (##vcore.call-with-values (close _V10_Diter2_D303_k211) (close _V10_Diter2_D303_lambda52) (bruijn ##.kk.25.361 17 1)) ((bruijn ##.k.1006 1 0) #f)) ((bruijn ##.k.1006 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k211, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda52, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda51, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.412 0 1)) ((close _V10_Diter2_D303_k210) (##inline ##vcore.cdr (bruijn ##.expr.48.400 1 0))) ((bruijn ##.k.1006 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k210, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.400 0 0)) (##vcore.call-with-values (bruijn ##.k.981 2 0) (close _V10_Diter2_D303_lambda46) (close _V10_Diter2_D303_lambda51)) ((bruijn ##.k.981 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda46, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda51, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.982 0 0) ((close _V10_Diter2_D303_k199) (##inline ##vcore.cdr (bruijn ##.expr.47.399 2 0))) ((bruijn ##.k.981 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k199, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_k197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.47.399 1 0)) ((bruijn ##.equal?.282 19 34) (close _V10_Diter2_D303_k198) 'letrec (##inline ##vcore.car (bruijn ##.expr.47.399 1 0))) ((bruijn ##.k.981 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k198, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D303_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-combination.302 17 3) (bruijn ##.k.979 0 0) (bruijn ##.expr.359 16 1) (bruijn ##.cont.360 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 3)), 3,
      _var0,
      VGetArg(upenv, 16-1, 1),
      VGetArg(upenv, 16-1, 2));
}
static void _V10_Diter2_D303_k212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.972 13 0) (close _V10_Diter2_D303_lambda53) (bruijn ##.kk.25.361 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda53, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Diter2_D303_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k197) (close _V10_Diter2_D303_k212))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k197, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k212, env)}));
}
static void _V10_Diter2_D303_k196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda45) (bruijn ##.input.26.362 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda45, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Diter2_D303_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k190) (close _V10_Diter2_D303_k196))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k190, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k196, env)}));
}
static void _V10_Diter2_D303_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda43) (bruijn ##.input.26.362 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda43, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Diter2_D303_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k174) (close _V10_Diter2_D303_k189))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k174, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k189, env)}));
}
static void _V10_Diter2_D303_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda41) (bruijn ##.input.26.362 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda41, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter2_D303_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k163) (close _V10_Diter2_D303_k173))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k163, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k173, env)}));
}
static void _V10_Diter2_D303_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda39) (bruijn ##.input.26.362 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda39, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter2_D303_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k142) (close _V10_Diter2_D303_k162))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k142, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k162, env)}));
}
static void _V10_Diter2_D303_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda37) (bruijn ##.input.26.362 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda37, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Diter2_D303_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_k131) (close _V10_Diter2_D303_k141))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_k131, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k141, env)}));
}
static void _V10_Diter2_D303_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter2_D303_lambda35) (bruijn ##.input.26.362 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda35, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter2_D303_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter2_D303_lambda34) (bruijn ##.expr.359 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D303_lambda34, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Diter2_D303_k213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.970 2 0) (##inline ##vcore.cons (bruijn ##.cont.360 2 2) (##inline ##vcore.cons (bruijn ##.x.1131 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VInlineCons2(runtime,
        upenv->up->vars[2],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter2_D303_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.971 0 0) (##vcore.call/cc (bruijn ##.k.970 1 0) (close _V10_Diter2_D303_lambda33)) ((bruijn ##.iter-atom.299 2 0) (close _V10_Diter2_D303_k213) (bruijn ##.expr.359 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda33, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k213, env)}),
      upenv->vars[1]);
}
}
static void _V10_Diter2_D303_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D303_lambda32, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.application?.283 3 0) (close _V10_Diter2_D303_k130) (bruijn ##.expr.359 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_k130, env)}),
      _var1);
}
static void _V10_Dto__cps__impl_D304_k215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D304_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1132 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.next.418 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1136 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
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
static void _V10_Dto__cps__impl_D304_k214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D304_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter2.303 2 4) (close _V10_Dto__cps__impl_D304_k215) (bruijn ##.expr.417 1 1) (bruijn ##.next.418 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[4]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D304_k215, env)}),
      upenv->vars[1],
      _var0);
}
static void _V10_Dto__cps__impl_D304_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D304_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.gensym.248 4 0) (close _V10_Dto__cps__impl_D304_k214) (##string ##.string.1995))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D304_k214, env)}),
      VEncodePointer(&_V10_Dstring_D1995.sym, VPOINTER_OTHER));
}
static void _V10_Dto__cps_D285_k218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1174 0 0) (bruijn ##.k.1172 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dto__cps_D285_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1175 0 0) (bruijn ##.expr.298 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dto__cps_D285_k217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1173 0 0) (##vcore.call-with-values (close _V10_Dto__cps_D285_k218) (close _V10_Dto__cps_D285_lambda58) (bruijn ##.kk.0.419 4 1)) ((bruijn ##.k.1172 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k218, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda58, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.421 1 0)) ((bruijn ##.equal?.282 7 34) (close _V10_Dto__cps_D285_k217) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.2.421 1 0))) ((bruijn ##.k.1172 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k217, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1162 0 0) (bruijn ##.k.1157 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dto__cps_D285_k227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1163 3 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.423 5 0)) (##inline ##vcore.cons (bruijn ##.x.1166 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dto__cps_D285_k226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.251 15 3) (close _V10_Dto__cps_D285_k227) (bruijn ##.x.1167 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k227, env)}),
      _var0);
}
static void _V10_Dto__cps_D285_k225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.caddr.252 14 4) (close _V10_Dto__cps_D285_k226) (bruijn ##.x.1168 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k226, env)}),
      _var0);
}
static void _V10_Dto__cps_D285_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.to-cps-impl.304 10 5) (close _V10_Dto__cps_D285_k225) (##inline ##vcore.car (bruijn ##.expr.5.425 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k225, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dto__cps_D285_k223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.425 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.425 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D285_k224) (close _V10_Dto__cps_D285_lambda60) (bruijn ##.kk.0.419 8 1)) ((bruijn ##.k.1157 3 0) #f)) ((bruijn ##.k.1157 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k224, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda60, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.423 0 0)) ((close _V10_Dto__cps_D285_k223) (##inline ##vcore.cdr (bruijn ##.expr.4.423 0 0))) ((bruijn ##.k.1157 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k223, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1158 0 0) ((close _V10_Dto__cps_D285_k222) (##inline ##vcore.cdr (bruijn ##.expr.3.422 2 0))) ((bruijn ##.k.1157 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k222, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.422 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Dto__cps_D285_k221) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.3.422 1 0))) ((bruijn ##.k.1157 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k221, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1147 0 0) (bruijn ##.k.1143 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Dto__cps_D285_k233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.304 12 5) (bruijn ##.k.1148 1 0) (##inline ##vcore.cons '##vcore.multidefine (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.load-library (##inline ##vcore.cons (bruijn ##.x.1153 0 0) '())) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 5)), 2,
      upenv->vars[0],
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
static void _V10_Dto__cps_D285_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.mangle-library.253 14 5) (close _V10_Dto__cps_D285_k233) (##inline ##vcore.car (bruijn ##.expr.7.428 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k233, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dto__cps_D285_k231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.428 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.428 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D285_k232) (close _V10_Dto__cps_D285_lambda62) (bruijn ##.kk.0.419 9 1)) ((bruijn ##.k.1143 2 0) #f)) ((bruijn ##.k.1143 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k232, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda62, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1144 0 0) ((close _V10_Dto__cps_D285_k231) (##inline ##vcore.cdr (bruijn ##.expr.6.427 2 0))) ((bruijn ##.k.1143 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k231, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_k229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.427 1 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Dto__cps_D285_k230) 'import (##inline ##vcore.car (bruijn ##.expr.6.427 1 0))) ((bruijn ##.k.1143 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k230, env)}),
      _V0import,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D285_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.304 9 5) (bruijn ##.k.1141 0 0) (bruijn ##.expr.298 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 5)), 2,
      _var0,
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Dto__cps_D285_k234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1137 7 0) (close _V10_Dto__cps_D285_lambda63) (bruijn ##.kk.0.419 7 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 7-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda63, env)}),
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dto__cps_D285_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_k229) (close _V10_Dto__cps_D285_k234))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k229, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k234, env)}));
}
static void _V10_Dto__cps_D285_k228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_lambda61) (bruijn ##.input.1.420 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_lambda61, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dto__cps_D285_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_k220) (close _V10_Dto__cps_D285_k228))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k220, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k228, env)}));
}
static void _V10_Dto__cps_D285_k219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_lambda59) (bruijn ##.input.1.420 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_lambda59, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dto__cps_D285_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_k216) (close _V10_Dto__cps_D285_k219))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_k216, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_k219, env)}));
}
static void _V10_Dto__cps_D285_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dto__cps_D285_lambda57) (bruijn ##.input.1.420 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_lambda57, .env = env }, }, 1,
      _var0);
}
static void _V10_Dto__cps_D285_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda55, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dto__cps_D285_lambda56) (bruijn ##.expr.298 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D285_lambda56, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Dto__cps_D285_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D285_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 6 ((close _V10_Diter__atom_D299_lambda6) (close _V10_Diter__let_D300_lambda26) (close _V10_Diter__letrec_D301_lambda28) (close _V10_Diter__combination_D302_lambda30) (close _V10_Diter2_D303_lambda32) (close _V10_Dto__cps__impl_D304_lambda54)) (##vcore.call/cc (bruijn ##.k.833 1 0) (close _V10_Dto__cps_D285_lambda55)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D299_lambda6, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__let_D300_lambda26, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D301_lambda28, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D302_lambda30, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D303_lambda32, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D304_lambda54, env)});
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda55, env)}));
    }
}
static void _V10_Diter_D434_k240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1308 0 0) (bruijn ##.k.1303 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D434_k241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1309 1 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.61.439 3 0)) (##inline ##vcore.cons (bruijn ##.x.1312 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D434_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.434 10 0) (close _V10_Diter_D434_k241) (##inline ##vcore.car (bruijn ##.expr.62.441 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k241, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter_D434_k239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.441 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.441 0 0))) (##vcore.call-with-values (close _V10_Diter_D434_k240) (close _V10_Diter_D434_lambda69) (bruijn ##.kk.58.436 6 1)) ((bruijn ##.k.1303 3 0) #f)) ((bruijn ##.k.1303 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k240, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda69, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.439 0 0)) ((close _V10_Diter_D434_k239) (##inline ##vcore.cdr (bruijn ##.expr.61.439 0 0))) ((bruijn ##.k.1303 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k239, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1304 0 0) ((close _V10_Diter_D434_k238) (##inline ##vcore.cdr (bruijn ##.expr.60.438 2 0))) ((bruijn ##.k.1303 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k238, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.438 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Diter_D434_k237) 'lambda (##inline ##vcore.car (bruijn ##.expr.60.438 1 0))) ((bruijn ##.k.1303 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k237, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1295 0 0) (bruijn ##.k.1290 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D434_k248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1296 1 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.64.444 3 0)) (##inline ##vcore.cons (bruijn ##.x.1299 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D434_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.434 12 0) (close _V10_Diter_D434_k248) (##inline ##vcore.car (bruijn ##.expr.65.446 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k248, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Diter_D434_k246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.446 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.446 0 0))) (##vcore.call-with-values (close _V10_Diter_D434_k247) (close _V10_Diter_D434_lambda71) (bruijn ##.kk.58.436 8 1)) ((bruijn ##.k.1290 3 0) #f)) ((bruijn ##.k.1290 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k247, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda71, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.444 0 0)) ((close _V10_Diter_D434_k246) (##inline ##vcore.cdr (bruijn ##.expr.64.444 0 0))) ((bruijn ##.k.1290 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k246, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1291 0 0) ((close _V10_Diter_D434_k245) (##inline ##vcore.cdr (bruijn ##.expr.63.443 2 0))) ((bruijn ##.k.1290 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k245, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.63.443 1 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Diter_D434_k244) 'continuation (##inline ##vcore.car (bruijn ##.expr.63.443 1 0))) ((bruijn ##.k.1290 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k244, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.450 5 1) (bruijn ##.k.1276 2 0) (bruijn ##.expr.72.452 3 1) (bruijn ##.x.1277 1 0) (bruijn ##.x.1278 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D451_k253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 20 14) (close _V10_Dloop_D451_k254) (bruijn ##.body.69.454 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k254, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D451_k252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.72.452 1 1))) ((bruijn ##.reverse.262 19 14) (close _V10_Dloop_D451_k253) (bruijn ##.args.68.453 1 2)) ((bruijn ##.k.1276 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k253, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.458 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.458 0 0))) ((bruijn ##.kk.71.455 3 1) (bruijn ##.k.1268 1 0) (##inline ##vcore.cdr (bruijn ##.expr.72.452 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.456 2 0)) (bruijn ##.args.68.453 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.458 0 0)) (bruijn ##.body.69.454 6 3))) ((bruijn ##.k.1268 1 0) #f)) ((bruijn ##.k.1268 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.456 1 0)) ((close _V10_Dloop_D451_k258) (##inline ##vcore.cdr (bruijn ##.expr.73.456 1 0))) ((bruijn ##.k.1268 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k258, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.450 9 1) (bruijn ##.k.1263 4 0) (bruijn ##.expr.72.452 7 1) (bruijn ##.x.1265 1 0) (bruijn ##.x.1266 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D451_k260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 24 14) (close _V10_Dloop_D451_k261) (bruijn ##.body.69.454 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k261, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D451_k259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 23 14) (close _V10_Dloop_D451_k260) (bruijn ##.args.68.453 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k260, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D451_k256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D451_k257) (close _V10_Dloop_D451_k259))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k257, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k259, env)}));
}
static void _V10_Dloop_D451_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D451_k256) (##inline ##vcore.car (bruijn ##.expr.72.452 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k256, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D451_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1262 0 0) (close _V10_Dloop_D451_lambda77))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda77, env)}));
}
static void _V10_Dloop_D451_k255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1260 1 0) (close _V10_Dloop_D451_lambda76) (bruijn ##.loop.451 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda76, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D451_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda75, got ~D~N"
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
  // ((close _V10_Dloop_D451_k252) (close _V10_Dloop_D451_k255))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k252, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k255, env)}));
}
static void _V10_Diter_D434_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D451_lambda75)) ((bruijn ##.loop.451 0 0) (bruijn ##.k.1259 1 0) (##inline ##vcore.cdr (bruijn ##.expr.66.448 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda75, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D434_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1258 0 0) (close _V10_Diter_D434_lambda74))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda74, env)}));
}
static void _V10_Diter_D434_k262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1282 0 0) (bruijn ##.k.1280 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter_D434_k263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.265 17 17) (bruijn ##.k.1283 1 0) 'case-lambda (bruijn ##.x.1284 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 17)), 3,
      upenv->vars[0],
      _V0case__lambda,
      _var0);
}
static void _V10_Diter_D434_k264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1285 1 0) (##inline ##vcore.cons (bruijn ##.args.463 1 1) (##inline ##vcore.cons (bruijn ##.x.1287 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        upenv->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter_D434_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda80, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.iter.434 14 0) (close _V10_Diter_D434_k264) (bruijn ##.body.464 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k264, env)}),
      _var2);
}
static void _V10_Diter_D434_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 16 15) (close _V10_Diter_D434_k263) (close _V10_Diter_D434_lambda80) (bruijn ##.args.461 1 2) (bruijn ##.body.462 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k263, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda80, env)}),
      upenv->vars[2],
      upenv->vars[3]);
}
static void _V10_Diter_D434_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda78, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.460 0 1)) (##vcore.call-with-values (close _V10_Diter_D434_k262) (close _V10_Diter_D434_lambda79) (bruijn ##.kk.58.436 9 1)) ((bruijn ##.k.1280 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k262, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda79, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1257 0 0) (##vcore.call-with-values (bruijn ##.k.1256 1 0) (close _V10_Diter_D434_lambda73) (close _V10_Diter_D434_lambda78)) ((bruijn ##.k.1256 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda73, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda78, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.66.448 1 0)) ((bruijn ##.equal?.282 13 34) (close _V10_Diter_D434_k251) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.66.448 1 0))) ((bruijn ##.k.1256 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k251, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1252 0 0) (bruijn ##.k.1250 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter_D434_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1253 0 0) (bruijn ##.expr.435 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Diter_D434_k267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1251 0 0) (##vcore.call-with-values (close _V10_Diter_D434_k268) (close _V10_Diter_D434_lambda82) (bruijn ##.kk.58.436 10 1)) ((bruijn ##.k.1250 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k268, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda82, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.75.465 1 0)) ((bruijn ##.equal?.282 15 34) (close _V10_Diter_D434_k267) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.75.465 1 0))) ((bruijn ##.k.1250 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k267, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1245 0 0) (bruijn ##.k.1241 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Diter_D434_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1246 0 0) (bruijn ##.expr.435 16 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Diter_D434_k272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.467 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.467 0 0))) (##vcore.call-with-values (close _V10_Diter_D434_k273) (close _V10_Diter_D434_lambda84) (bruijn ##.kk.58.436 13 1)) ((bruijn ##.k.1241 2 0) #f)) ((bruijn ##.k.1241 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k273, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda84, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1242 0 0) ((close _V10_Diter_D434_k272) (##inline ##vcore.cdr (bruijn ##.expr.76.466 2 0))) ((bruijn ##.k.1241 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k272, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.76.466 1 0)) ((bruijn ##.equal?.282 17 34) (close _V10_Diter_D434_k271) 'quote (##inline ##vcore.car (bruijn ##.expr.76.466 1 0))) ((bruijn ##.k.1241 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k271, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k280(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.472 5 1) (bruijn ##.k.1222 2 0) (bruijn ##.expr.85.474 3 1) (bruijn ##.x.1223 1 0) (bruijn ##.x.1224 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D473_k279(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 27 14) (close _V10_Dloop_D473_k280) (bruijn ##.vals.82.476 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k280, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D473_k278(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.85.474 1 1))) ((bruijn ##.reverse.262 26 14) (close _V10_Dloop_D473_k279) (bruijn ##.args.81.475 1 2)) ((bruijn ##.k.1222 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k279, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k284(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.480 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.480 0 0))) ((bruijn ##.kk.84.477 3 1) (bruijn ##.k.1214 1 0) (##inline ##vcore.cdr (bruijn ##.expr.85.474 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.86.478 2 0)) (bruijn ##.args.81.475 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.87.480 0 0)) (bruijn ##.vals.82.476 6 3))) ((bruijn ##.k.1214 1 0) #f)) ((bruijn ##.k.1214 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k283(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.478 1 0)) ((close _V10_Dloop_D473_k284) (##inline ##vcore.cdr (bruijn ##.expr.86.478 1 0))) ((bruijn ##.k.1214 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D473_k284, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D473_k287(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.472 9 1) (bruijn ##.k.1209 4 0) (bruijn ##.expr.85.474 7 1) (bruijn ##.x.1211 1 0) (bruijn ##.x.1212 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D473_k286(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 31 14) (close _V10_Dloop_D473_k287) (bruijn ##.vals.82.476 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k287, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D473_k285(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 30 14) (close _V10_Dloop_D473_k286) (bruijn ##.args.81.475 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k286, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D473_k282(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D473_k283) (close _V10_Dloop_D473_k285))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D473_k283, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k285, env)}));
}
static void _V10_Dloop_D473_lambda90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D473_k282) (##inline ##vcore.car (bruijn ##.expr.85.474 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D473_k282, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D473_lambda89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1208 0 0) (close _V10_Dloop_D473_lambda90))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda90, env)}));
}
static void _V10_Dloop_D473_k281(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1206 1 0) (close _V10_Dloop_D473_lambda89) (bruijn ##.loop.473 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda89, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D473_lambda88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D473_lambda88, got ~D~N"
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
  // ((close _V10_Dloop_D473_k278) (close _V10_Dloop_D473_k281))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D473_k278, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_k281, env)}));
}
static void _V10_Diter_D434_lambda87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda87, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D473_lambda88)) ((bruijn ##.loop.473 0 0) (bruijn ##.k.1205 1 0) (##inline ##vcore.car (bruijn ##.expr.79.470 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D473_lambda88, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D434_lambda86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1204 0 0) (close _V10_Diter_D434_lambda87))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda87, env)}));
}
static void _V10_Diter_D434_k289(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1230 0 0) (bruijn ##.k.1226 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter_D434_k292(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1231 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1233 1 0) (##inline ##vcore.cons (bruijn ##.x.1235 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D434_k291(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.434 23 0) (close _V10_Diter_D434_k292) (##inline ##vcore.car (bruijn ##.expr.88.485 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k292, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Diter_D434_k290(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 25 15) (close _V10_Diter_D434_k291) (bruijn ##.list.269 25 21) (bruijn ##.args.483 3 2) (bruijn ##.x.1236 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k291, env)}),
      VGetArg(upenv, 25-1, 21),
      upenv->up->up->vars[2],
      _var0);
}
static void _V10_Diter_D434_lambda93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.434 22 0) (bruijn ##.k.1237 0 0) (bruijn ##.val.487 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      _var0,
      _var1);
}
static void _V10_Diter_D434_lambda92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 24 15) (close _V10_Diter_D434_k290) (close _V10_Diter_D434_lambda93) (bruijn ##.vals.484 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k290, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda93, env)}),
      upenv->up->vars[3]);
}
static void _V10_Diter_D434_k288(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.485 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.485 0 0))) (##vcore.call-with-values (close _V10_Diter_D434_k289) (close _V10_Diter_D434_lambda92) (bruijn ##.kk.58.436 17 1)) ((bruijn ##.k.1226 1 0) #f)) ((bruijn ##.k.1226 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k289, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda92, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_lambda91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda91, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.482 0 1)) ((close _V10_Diter_D434_k288) (##inline ##vcore.cdr (bruijn ##.expr.79.470 1 0))) ((bruijn ##.k.1226 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k288, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k277(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.470 0 0)) (##vcore.call-with-values (bruijn ##.k.1201 2 0) (close _V10_Diter_D434_lambda86) (close _V10_Diter_D434_lambda91)) ((bruijn ##.k.1201 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda86, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda91, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k276(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1202 0 0) ((close _V10_Diter_D434_k277) (##inline ##vcore.cdr (bruijn ##.expr.78.469 2 0))) ((bruijn ##.k.1201 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k277, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k275(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.78.469 1 0)) ((bruijn ##.equal?.282 19 34) (close _V10_Diter_D434_k276) 'letrec (##inline ##vcore.car (bruijn ##.expr.78.469 1 0))) ((bruijn ##.k.1201 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k276, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k295(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1196 0 0) (bruijn ##.k.1195 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter_D434_k297(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.265 24 17) (bruijn ##.k.1197 2 0) (bruijn ##.x.1198 1 0) (bruijn ##.x.1199 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 17)), 3,
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Diter_D434_k296(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.434 20 0) (close _V10_Diter_D434_k297) (##inline ##vcore.cdr (bruijn ##.expr.89.488 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k297, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Diter_D434_lambda95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.434 19 0) (close _V10_Diter_D434_k296) (##inline ##vcore.car (bruijn ##.expr.89.488 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k296, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Diter_D434_k294(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.89.488 1 0)) (##vcore.call-with-values (close _V10_Diter_D434_k295) (close _V10_Diter_D434_lambda95) (bruijn ##.kk.58.436 15 1)) ((bruijn ##.k.1195 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k295, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda95, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D434_k300(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.268 24 20) (bruijn ##.k.1180 18 0) (##string ##.string.1996))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 20)), 2,
      VGetArg(upenv, 18-1, 0),
      VEncodePointer(&_V10_Dstring_D1996.sym, VPOINTER_OTHER));
}
static void _V10_Diter_D434_k299(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.x.1189 0 0) (close _V10_Diter_D434_k300))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k300, env)}));
}
static void _V10_Diter_D434_k303(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1190 3 0) (bruijn ##.atom.431 24 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VGetArg(upenv, 24-1, 2));
}
static void _V10_Diter_D434_k302(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter_D434_k303) (bruijn ##.n.433 23 4) (bruijn ##.x.1193 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k303, env)}),
      VEncodeInt(23l), VEncodeInt(4l),
      _var0
    );
}
static void _V10_Diter_D434_k301(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1191 0 0) ((bruijn ##.-.280 24 32) (close _V10_Diter_D434_k302) (bruijn ##.n.433 22 4) 1) ((bruijn ##.k.1190 1 0) (bruijn ##.y.491 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 32)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k302, env)}),
      VGetArg(upenv, 22-1, 4),
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->up->vars[0]);
}
}
static void _V10_Diter_D434_lambda97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.275 23 27) (close _V10_Diter_D434_k301) (bruijn ##.x.430 21 1) (bruijn ##.y.491 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 27)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k301, env)}),
      VGetArg(upenv, 21-1, 1),
      upenv->vars[0]);
}
static void _V10_Diter_D434_lambda96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Diter_D434_k299) (close _V10_Diter_D434_lambda97) (bruijn ##.kk.58.436 16 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k299, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda97, env)}),
      VGetArg(upenv, 16-1, 1));
}
static void _V10_Diter_D434_k298(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda96) (bruijn ##.input.59.437 14 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda96, .env = env }, }, 1,
      VGetArg(upenv, 14-1, 0));
}
static void _V10_Diter_D434_lambda94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k294) (close _V10_Diter_D434_k298))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k294, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k298, env)}));
}
static void _V10_Diter_D434_k293(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda94) (bruijn ##.input.59.437 12 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda94, .env = env }, }, 1,
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Diter_D434_lambda85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k275) (close _V10_Diter_D434_k293))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k275, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k293, env)}));
}
static void _V10_Diter_D434_k274(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda85) (bruijn ##.input.59.437 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda85, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Diter_D434_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k270) (close _V10_Diter_D434_k274))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k270, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k274, env)}));
}
static void _V10_Diter_D434_k269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda83) (bruijn ##.input.59.437 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda83, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Diter_D434_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k266) (close _V10_Diter_D434_k269))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k266, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k269, env)}));
}
static void _V10_Diter_D434_k265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda81) (bruijn ##.input.59.437 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda81, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter_D434_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k250) (close _V10_Diter_D434_k265))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k250, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k265, env)}));
}
static void _V10_Diter_D434_k249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda72) (bruijn ##.input.59.437 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda72, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D434_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k243) (close _V10_Diter_D434_k249))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k243, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k249, env)}));
}
static void _V10_Diter_D434_k242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda70) (bruijn ##.input.59.437 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda70, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Diter_D434_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_k236) (close _V10_Diter_D434_k242))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_k236, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k242, env)}));
}
static void _V10_Diter_D434_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D434_lambda68) (bruijn ##.input.59.437 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda68, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter_D434_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter_D434_lambda67) (bruijn ##.expr.435 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D434_lambda67, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Diter_D434_k235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1179 0 0) ((bruijn ##.k.1178 1 0) (bruijn ##.expr.435 1 1)) (##vcore.call/cc (bruijn ##.k.1178 1 0) (close _V10_Diter_D434_lambda66)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda66, env)}));
}
}
static void _V10_Diter_D434_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D434_lambda65, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.=.273 4 25) (close _V10_Diter_D434_k235) (bruijn ##.n.433 2 4) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[25]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_k235, env)}),
      upenv->up->vars[4],
      VEncodeInt(0l));
}
static void _V10_Dsubstitute_D286_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D286_lambda64, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 1 ((close _V10_Diter_D434_lambda65)) ((bruijn ##.iter.434 0 0) (bruijn ##.k.1177 1 0) (bruijn ##.expr.432 1 3)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D434_lambda65, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      upenv->vars[0],
      upenv->vars[3]);
    }
}
static void _V10_Dspecial__apply_Q_D287_lambda98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dspecial__apply_Q_D287_lambda98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.memv.278 2 30) (bruijn ##.k.1315 0 0) (bruijn ##.tok.492 0 1) (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'letrec '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[30]), 3,
      _var0,
      _var1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)));
}
static void _V10_Dloop_D494_k306(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D494_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.494 4 0) (bruijn ##.k.1319 3 0) (bruijn ##.x.1321 1 0) (bruijn ##.x.1322 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      upenv->up->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D494_k305(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D494_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.259 6 11) (close _V10_Dloop_D494_k306) (bruijn ##.len.496 2 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 11)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D494_k306, env)}),
      upenv->up->vars[2],
      VEncodeInt(1l));
}
static void _V10_Dloop_D494_k304(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D494_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1320 0 0) ((bruijn ##.cdr.256 5 8) (close _V10_Dloop_D494_k305) (bruijn ##.lst.495 1 1)) ((bruijn ##.k.1319 1 0) (bruijn ##.len.496 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D494_k305, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      upenv->vars[2]);
}
}
static void _V10_Dloop_D494_lambda100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D494_lambda100, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.277 4 29) (close _V10_Dloop_D494_k304) (bruijn ##.lst.495 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[29]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D494_k304, env)}),
      _var1);
}
static void _V10_Dtaillength_D288_lambda99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtaillength_D288_lambda99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D494_lambda100)) ((bruijn ##.loop.494 0 0) (bruijn ##.k.1318 1 0) (bruijn ##.lst.493 1 1) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D494_lambda100, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      upenv->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dadd__ref_B_D289_k308(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D289_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.281 4 33) (bruijn ##.k.1323 2 0) (bruijn ##.refs.497 2 1) (bruijn ##.x.498 2 2) (bruijn ##.x.1324 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[33]), 4,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
}
static void _V10_Dadd__ref_B_D289_k307(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D289_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.259 3 11) (close _V10_Dadd__ref_B_D289_k308) (bruijn ##.n0.500 0 0) (bruijn ##.n.499 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[11]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D289_k308, env)}),
      _var0,
      upenv->vars[3]);
}
static void _V10_Dadd__ref_B_D289_lambda102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D289_lambda102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1325 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dadd__ref_B_D289_lambda101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D289_lambda101, got ~D~N"
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
  // ((bruijn ##.hash-table-ref.274 2 26) (close _V10_Dadd__ref_B_D289_k307) (bruijn ##.refs.497 0 1) (bruijn ##.x.498 0 2) (close _V10_Dadd__ref_B_D289_lambda102))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[26]), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D289_k307, env)}),
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D289_lambda102, env)}));
}
static void _V10_Dsub__ref_B_D290_k311(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1329 1 0) ((bruijn ##.error.268 5 20) (bruijn ##.k.1330 0 0) (##string ##.string.1997) (bruijn ##.x.502 3 2) (bruijn ##.n0.504 2 0) (bruijn ##.n.503 3 3)) ((bruijn ##.k.1330 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 20)), 5,
      _var0,
      VEncodePointer(&_V10_Dstring_D1997.sym, VPOINTER_OTHER),
      upenv->up->up->vars[2],
      upenv->up->vars[0],
      upenv->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dsub__ref_B_D290_k313(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.281 6 33) (bruijn ##.k.1326 4 0) (bruijn ##.refs.501 4 1) (bruijn ##.x.502 4 2) (bruijn ##.x.1328 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 33)), 4,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->up->up->up->vars[2],
      _var0);
}
static void _V10_Dsub__ref_B_D290_k312(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.280 5 32) (close _V10_Dsub__ref_B_D290_k313) (bruijn ##.n0.504 2 0) (bruijn ##.n.503 3 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 32)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_k313, env)}),
      upenv->up->vars[0],
      upenv->up->up->vars[3]);
}
static void _V10_Dsub__ref_B_D290_k310(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dsub__ref_B_D290_k311) (close _V10_Dsub__ref_B_D290_k312))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsub__ref_B_D290_k311, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_k312, env)}));
}
static void _V10_Dsub__ref_B_D290_k309(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>.254 3 6) (close _V10_Dsub__ref_B_D290_k310) (bruijn ##.n.503 1 3) (bruijn ##.n0.504 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[6]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_k310, env)}),
      upenv->vars[3],
      _var0);
}
static void _V10_Dsub__ref_B_D290_lambda104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1331 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dsub__ref_B_D290_lambda103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D290_lambda103, got ~D~N"
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
  // ((bruijn ##.hash-table-ref.274 2 26) (close _V10_Dsub__ref_B_D290_k309) (bruijn ##.refs.501 0 1) (bruijn ##.x.502 0 2) (close _V10_Dsub__ref_B_D290_lambda104))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[26]), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_k309, env)}),
      _var1,
      _var2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_lambda104, env)}));
}
static void _V10_Dadd__refs_B_D291_k317(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-ref!.289 6 6) (bruijn ##.k.1334 3 0) (bruijn ##.arefs.507 5 1) (bruijn ##.x.1335 2 0) (bruijn ##.x.1336 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 6)), 4,
      upenv->up->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dadd__refs_B_D291_k316(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.*.255 6 7) (close _V10_Dadd__refs_B_D291_k317) (bruijn ##.n.509 4 3) (bruijn ##.x.1337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_k317, env)}),
      upenv->up->up->up->vars[3],
      _var0);
}
static void _V10_Dadd__refs_B_D291_k315(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 5 8) (close _V10_Dadd__refs_B_D291_k316) (bruijn ##.keyval.510 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_k316, env)}),
      upenv->vars[1]);
}
static void _V10_Dadd__refs_B_D291_lambda106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_lambda106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.279 4 31) (close _V10_Dadd__refs_B_D291_k315) (bruijn ##.keyval.510 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[31]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_k315, env)}),
      _var1);
}
static void _V10_Dadd__refs_B_D291_k314(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.258 3 10) (bruijn ##.k.1333 1 0) (close _V10_Dadd__refs_B_D291_lambda106) (bruijn ##.x.1338 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_lambda106, env)}),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dadd__refs_B_D291_lambda105(VRuntime * runtime, VEnv * upenv, int argc, ...) {
 // (_V10_Dadd__refs_B_D291_lambda105 #t (3 ((bruijn ##.add-refs!.291 1 8) (bruijn ##.k.1332 0 0) (bruijn ##.arefs.505 0 1) (bruijn ##.brefs.506 0 2) 1)) (4 ((bruijn ##.hash-table->alist.257 2 9) (close _V10_Dadd__refs_B_D291_k314) (bruijn ##.brefs.508 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D291_lambda105, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dadd__refs_B_D291_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.add-refs!.291 1 8) (bruijn ##.k.1332 0 0) (bruijn ##.arefs.505 0 1) (bruijn ##.brefs.506 0 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[8]), 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(1l));
}
__attribute__((used)) static void _V20Case1__V10_Dadd__refs_B_D291_lambda105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.hash-table->alist.257 2 9) (close _V10_Dadd__refs_B_D291_k314) (bruijn ##.brefs.508 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[9]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_k314, env)}),
      _var2);
}
void _V10_Dadd__refs_B_D291_lambda105(VRuntime * runtime, VEnv * upenv, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dadd__refs_B_D291_lambda105, @function\n"
#endif
"_V10_Dadd__refs_B_D291_lambda105:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dadd__refs_B_D291_lambda105\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dadd__refs_B_D291_lambda105\n"
"    jmp _V20CaseError__V10_Dadd__refs_B_D291_lambda105\n"
);
static void _V10_Dsub__refs_B_D292_k320(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D292_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sub-ref!.290 5 7) (bruijn ##.k.1340 2 0) (bruijn ##.arefs.511 4 1) (bruijn ##.x.1341 1 0) (bruijn ##.x.1342 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 7)), 4,
      upenv->up->vars[0],
      upenv->up->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dsub__refs_B_D292_k319(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D292_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.256 5 8) (close _V10_Dsub__refs_B_D292_k320) (bruijn ##.keyval.513 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D292_k320, env)}),
      upenv->vars[1]);
}
static void _V10_Dsub__refs_B_D292_lambda108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D292_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.279 4 31) (close _V10_Dsub__refs_B_D292_k319) (bruijn ##.keyval.513 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[31]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D292_k319, env)}),
      _var1);
}
static void _V10_Dsub__refs_B_D292_k318(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D292_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.258 3 10) (bruijn ##.k.1339 1 0) (close _V10_Dsub__refs_B_D292_lambda108) (bruijn ##.x.1343 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D292_lambda108, env)}),
      _var0);
}
static void _V10_Dsub__refs_B_D292_lambda107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D292_lambda107, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.hash-table->alist.257 2 9) (close _V10_Dsub__refs_B_D292_k318) (bruijn ##.brefs.512 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[9]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D292_k318, env)}),
      _var2);
}
static void _V10_Dcount__refs__atom_D517_k325(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1423 0 0) (bruijn ##.k.1421 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1424 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D517_k324(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1422 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k325) (close _V10_Dcount__refs__atom_D517_lambda114) (bruijn ##.kk.90.520 4 1)) ((bruijn ##.k.1421 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k325, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda114, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k323(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.92.522 1 0)) ((bruijn ##.equal?.282 10 34) (close _V10_Dcount__refs__atom_D517_k324) 'quote (##inline ##vcore.car (bruijn ##.expr.92.522 1 0))) ((bruijn ##.k.1421 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k324, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k329(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1417 0 0) (bruijn ##.k.1415 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1418 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D517_k328(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1416 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k329) (close _V10_Dcount__refs__atom_D517_lambda116) (bruijn ##.kk.90.520 6 1)) ((bruijn ##.k.1415 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k329, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda116, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k327(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.93.523 1 0)) ((bruijn ##.equal?.282 12 34) (close _V10_Dcount__refs__atom_D517_k328) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.93.523 1 0))) ((bruijn ##.k.1415 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k328, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k333(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1411 0 0) (bruijn ##.k.1409 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.for-each.258 16 10) (bruijn ##.k.1412 0 0) (bruijn ##.count-refs-atom.517 11 2) (##inline ##vcore.cdr (bruijn ##.expr.94.524 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 10)), 3,
      _var0,
      VGetArg(upenv, 11-1, 2),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__atom_D517_k332(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1410 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k333) (close _V10_Dcount__refs__atom_D517_lambda118) (bruijn ##.kk.90.520 8 1)) ((bruijn ##.k.1409 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k333, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda118, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k331(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.94.524 1 0)) ((bruijn ##.equal?.282 14 34) (close _V10_Dcount__refs__atom_D517_k332) '##inline (##inline ##vcore.car (bruijn ##.expr.94.524 1 0))) ((bruijn ##.k.1409 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k332, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k339(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1404 0 0) (bruijn ##.k.1399 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.518 15 3) (bruijn ##.k.1405 0 0) (##inline ##vcore.car (bruijn ##.expr.97.528 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dcount__refs__atom_D517_k338(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.97.528 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.97.528 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k339) (close _V10_Dcount__refs__atom_D517_lambda120) (bruijn ##.kk.90.520 12 1)) ((bruijn ##.k.1399 3 0) #f)) ((bruijn ##.k.1399 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k339, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda120, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k337(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.96.527 0 0)) ((close _V10_Dcount__refs__atom_D517_k338) (##inline ##vcore.cdr (bruijn ##.expr.96.527 0 0))) ((bruijn ##.k.1399 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k338, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k336(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1400 0 0) ((close _V10_Dcount__refs__atom_D517_k337) (##inline ##vcore.cdr (bruijn ##.expr.95.526 2 0))) ((bruijn ##.k.1399 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k337, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k335(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.95.526 1 0)) ((bruijn ##.equal?.282 16 34) (close _V10_Dcount__refs__atom_D517_k336) 'lambda (##inline ##vcore.car (bruijn ##.expr.95.526 1 0))) ((bruijn ##.k.1399 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k336, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k345(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1394 0 0) (bruijn ##.k.1389 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.518 17 3) (bruijn ##.k.1395 0 0) (##inline ##vcore.car (bruijn ##.expr.100.532 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dcount__refs__atom_D517_k344(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.532 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.100.532 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k345) (close _V10_Dcount__refs__atom_D517_lambda122) (bruijn ##.kk.90.520 14 1)) ((bruijn ##.k.1389 3 0) #f)) ((bruijn ##.k.1389 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k345, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda122, env)}),
      VGetArg(upenv, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k343(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.99.531 0 0)) ((close _V10_Dcount__refs__atom_D517_k344) (##inline ##vcore.cdr (bruijn ##.expr.99.531 0 0))) ((bruijn ##.k.1389 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k344, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k342(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1390 0 0) ((close _V10_Dcount__refs__atom_D517_k343) (##inline ##vcore.cdr (bruijn ##.expr.98.530 2 0))) ((bruijn ##.k.1389 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k343, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k341(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.98.530 1 0)) ((bruijn ##.equal?.282 18 34) (close _V10_Dcount__refs__atom_D517_k342) 'continuation (##inline ##vcore.car (bruijn ##.expr.98.530 1 0))) ((bruijn ##.k.1389 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k342, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D537_k350(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.536 4 1) (bruijn ##.k.1379 1 0) (bruijn ##.expr.106.538 2 1) (bruijn ##.x.1380 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D537_k349(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.106.538 1 1))) ((bruijn ##.reverse.262 26 14) (close _V10_Dloop_D537_k350) (bruijn ##.body.103.539 1 2)) ((bruijn ##.k.1379 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_k350, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D537_k354(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.108.542 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.108.542 0 0))) ((bruijn ##.kk.105.540 3 1) (bruijn ##.k.1372 1 0) (##inline ##vcore.cdr (bruijn ##.expr.106.538 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.108.542 0 0)) (bruijn ##.body.103.539 6 2))) ((bruijn ##.k.1372 1 0) #f)) ((bruijn ##.k.1372 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D537_k353(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.107.541 1 0)) ((close _V10_Dloop_D537_k354) (##inline ##vcore.cdr (bruijn ##.expr.107.541 1 0))) ((bruijn ##.k.1372 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D537_k354, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D537_k356(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.104.536 8 1) (bruijn ##.k.1368 3 0) (bruijn ##.expr.106.538 6 1) (bruijn ##.x.1370 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 3,
      upenv->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D537_k355(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 30 14) (close _V10_Dloop_D537_k356) (bruijn ##.body.103.539 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_k356, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D537_k352(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D537_k353) (close _V10_Dloop_D537_k355))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D537_k353, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_k355, env)}));
}
static void _V10_Dloop_D537_lambda128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D537_k352) (##inline ##vcore.car (bruijn ##.expr.106.538 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D537_k352, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D537_lambda127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1367 0 0) (close _V10_Dloop_D537_lambda128))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_lambda128, env)}));
}
static void _V10_Dloop_D537_k351(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1365 1 0) (close _V10_Dloop_D537_lambda127) (bruijn ##.loop.537 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_lambda127, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D537_lambda126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D537_lambda126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D537_k349) (close _V10_Dloop_D537_k351))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D537_k349, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_k351, env)}));
}
static void _V10_Dcount__refs__atom_D517_lambda125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D537_lambda126)) ((bruijn ##.loop.537 0 0) (bruijn ##.k.1364 1 0) (##inline ##vcore.cdr (bruijn ##.expr.101.534 5 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D537_lambda126, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL);
    }
}
static void _V10_Dcount__refs__atom_D517_lambda124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1363 0 0) (close _V10_Dcount__refs__atom_D517_lambda125))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda125, env)}));
}
static void _V10_Dcount__refs__atom_D517_k357(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1384 0 0) (bruijn ##.k.1382 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda131, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.518 19 3) (bruijn ##.k.1386 0 0) (bruijn ##.body.546 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 3)), 2,
      _var0,
      _var1);
}
static void _V10_Dcount__refs__atom_D517_lambda130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.258 23 10) (bruijn ##.k.1385 0 0) (close _V10_Dcount__refs__atom_D517_lambda131) (bruijn ##.body.545 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 10)), 3,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda131, env)}),
      upenv->vars[2]);
}
static void _V10_Dcount__refs__atom_D517_lambda129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.544 0 1)) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D517_k357) (close _V10_Dcount__refs__atom_D517_lambda130) (bruijn ##.kk.90.520 15 1)) ((bruijn ##.k.1382 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k357, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda130, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k348(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1362 0 0) (##vcore.call-with-values (bruijn ##.k.1361 1 0) (close _V10_Dcount__refs__atom_D517_lambda124) (close _V10_Dcount__refs__atom_D517_lambda129)) ((bruijn ##.k.1361 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda124, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda129, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k347(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.534 1 0)) ((bruijn ##.equal?.282 20 34) (close _V10_Dcount__refs__atom_D517_k348) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.101.534 1 0))) ((bruijn ##.k.1361 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k348, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_k361(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.281 24 33) (bruijn ##.k.1355 3 0) (bruijn ##.count-table.515 19 0) (bruijn ##.expr.519 18 1) (bruijn ##.x.1357 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 33)), 4,
      upenv->up->up->vars[0],
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 1),
      _var0);
}
static void _V10_Dcount__refs__atom_D517_k360(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.+.259 23 11) (close _V10_Dcount__refs__atom_D517_k361) 1 (bruijn ##.x.1358 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 11)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k361, env)}),
      VEncodeInt(1l),
      _var0);
}
static void _V10_Dcount__refs__atom_D517_lambda133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1359 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dcount__refs__atom_D517_k359(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1356 0 0) ((bruijn ##.hash-table-ref.274 22 26) (close _V10_Dcount__refs__atom_D517_k360) (bruijn ##.count-table.515 17 0) (bruijn ##.expr.519 16 1) (close _V10_Dcount__refs__atom_D517_lambda133)) ((bruijn ##.k.1355 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 26)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k360, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 1),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda133, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D517_lambda132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.267 21 19) (close _V10_Dcount__refs__atom_D517_k359) (bruijn ##.expr.519 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k359, env)}),
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Dcount__refs__atom_D517_k358(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1348 13 0) (close _V10_Dcount__refs__atom_D517_lambda132) (bruijn ##.kk.90.520 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda132, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Dcount__refs__atom_D517_lambda123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k347) (close _V10_Dcount__refs__atom_D517_k358))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k347, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k358, env)}));
}
static void _V10_Dcount__refs__atom_D517_k346(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda123) (bruijn ##.input.91.521 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda123, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Dcount__refs__atom_D517_lambda121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k341) (close _V10_Dcount__refs__atom_D517_k346))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k341, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k346, env)}));
}
static void _V10_Dcount__refs__atom_D517_k340(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda121) (bruijn ##.input.91.521 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda121, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Dcount__refs__atom_D517_lambda119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k335) (close _V10_Dcount__refs__atom_D517_k340))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k335, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k340, env)}));
}
static void _V10_Dcount__refs__atom_D517_k334(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda119) (bruijn ##.input.91.521 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda119, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dcount__refs__atom_D517_lambda117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k331) (close _V10_Dcount__refs__atom_D517_k334))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k331, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k334, env)}));
}
static void _V10_Dcount__refs__atom_D517_k330(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda117) (bruijn ##.input.91.521 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda117, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k327) (close _V10_Dcount__refs__atom_D517_k330))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k327, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k330, env)}));
}
static void _V10_Dcount__refs__atom_D517_k326(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda115) (bruijn ##.input.91.521 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda115, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D517_lambda113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_k323) (close _V10_Dcount__refs__atom_D517_k326))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_k323, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_k326, env)}));
}
static void _V10_Dcount__refs__atom_D517_lambda112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D517_lambda113) (bruijn ##.input.91.521 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda113, .env = env }, }, 1,
      _var0);
}
static void _V10_Dcount__refs__atom_D517_lambda111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcount__refs__atom_D517_lambda112) (bruijn ##.expr.519 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D517_lambda112, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dcount__refs__atom_D517_lambda110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D517_lambda110, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1347 0 0) (close _V10_Dcount__refs__atom_D517_lambda111))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda111, env)}));
}
static void _V10_Dloop_D554_k366(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.115.553 4 1) (bruijn ##.k.1485 1 0) (bruijn ##.expr.117.555 2 1) (bruijn ##.x.1486 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D554_k365(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.117.555 1 1))) ((bruijn ##.reverse.262 17 14) (close _V10_Dloop_D554_k366) (bruijn ##.vals.114.556 1 2)) ((bruijn ##.k.1485 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_k366, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D554_k370(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.119.559 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.119.559 0 0))) ((bruijn ##.kk.116.557 3 1) (bruijn ##.k.1478 1 0) (##inline ##vcore.cdr (bruijn ##.expr.117.555 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.119.559 0 0)) (bruijn ##.vals.114.556 6 2))) ((bruijn ##.k.1478 1 0) #f)) ((bruijn ##.k.1478 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D554_k369(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.118.558 1 0)) ((close _V10_Dloop_D554_k370) (##inline ##vcore.cdr (bruijn ##.expr.118.558 1 0))) ((bruijn ##.k.1478 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D554_k370, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D554_k372(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.115.553 8 1) (bruijn ##.k.1474 3 0) (bruijn ##.expr.117.555 6 1) (bruijn ##.x.1476 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 3,
      upenv->up->up->vars[0],
      VGetArg(upenv, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D554_k371(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 21 14) (close _V10_Dloop_D554_k372) (bruijn ##.vals.114.556 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_k372, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D554_k368(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D554_k369) (close _V10_Dloop_D554_k371))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D554_k369, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_k371, env)}));
}
static void _V10_Dloop_D554_lambda142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_lambda142, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D554_k368) (##inline ##vcore.car (bruijn ##.expr.117.555 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D554_k368, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D554_lambda141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_lambda141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1473 0 0) (close _V10_Dloop_D554_lambda142))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_lambda142, env)}));
}
static void _V10_Dloop_D554_k367(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1471 1 0) (close _V10_Dloop_D554_lambda141) (bruijn ##.loop.554 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_lambda141, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D554_lambda140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D554_lambda140, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D554_k365) (close _V10_Dloop_D554_k367))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D554_k365, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_k367, env)}));
}
static void _V10_Dcount__refs__apply_D518_lambda139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda139, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D554_lambda140)) ((bruijn ##.loop.554 0 0) (bruijn ##.k.1470 1 0) (##inline ##vcore.car (bruijn ##.expr.112.551 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D554_lambda140, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dcount__refs__apply_D518_lambda138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1469 0 0) (close _V10_Dcount__refs__apply_D518_lambda139))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda139, env)}));
}
static void _V10_Dcount__refs__apply_D518_k374(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1492 0 0) (bruijn ##.k.1488 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D518_k375(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.518 11 3) (bruijn ##.k.1493 1 0) (##inline ##vcore.car (bruijn ##.expr.120.563 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 2,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_lambda144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.for-each.258 15 10) (close _V10_Dcount__refs__apply_D518_k375) (bruijn ##.count-refs-atom.517 10 2) (bruijn ##.vals.562 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 10)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k375, env)}),
      VGetArg(upenv, 10-1, 2),
      upenv->up->vars[2]);
}
static void _V10_Dcount__refs__apply_D518_k373(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.120.563 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.120.563 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D518_k374) (close _V10_Dcount__refs__apply_D518_lambda144) (bruijn ##.kk.109.548 7 1)) ((bruijn ##.k.1488 1 0) #f)) ((bruijn ##.k.1488 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k374, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda144, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_lambda143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda143, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.561 0 1)) ((close _V10_Dcount__refs__apply_D518_k373) (##inline ##vcore.cdr (bruijn ##.expr.112.551 1 0))) ((bruijn ##.k.1488 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k373, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k364(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.112.551 0 0)) (##vcore.call-with-values (bruijn ##.k.1466 2 0) (close _V10_Dcount__refs__apply_D518_lambda138) (close _V10_Dcount__refs__apply_D518_lambda143)) ((bruijn ##.k.1466 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda138, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda143, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k363(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1467 0 0) ((close _V10_Dcount__refs__apply_D518_k364) (##inline ##vcore.cdr (bruijn ##.expr.111.550 2 0))) ((bruijn ##.k.1466 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k364, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k362(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.550 1 0)) ((bruijn ##.equal?.282 10 34) (close _V10_Dcount__refs__apply_D518_k363) 'letrec (##inline ##vcore.car (bruijn ##.expr.111.550 1 0))) ((bruijn ##.k.1466 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k363, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k382(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1459 0 0) (bruijn ##.k.1453 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Dcount__refs__apply_D518_k384(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.518 14 3) (bruijn ##.k.1460 2 0) (##inline ##vcore.car (bruijn ##.expr.124.570 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 3)), 2,
      upenv->up->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k383(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.518 13 3) (close _V10_Dcount__refs__apply_D518_k384) (##inline ##vcore.car (bruijn ##.expr.123.568 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k384, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_lambda146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.517 12 2) (close _V10_Dcount__refs__apply_D518_k383) (##inline ##vcore.car (bruijn ##.expr.122.566 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k383, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k381(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.124.570 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.124.570 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D518_k382) (close _V10_Dcount__refs__apply_D518_lambda146) (bruijn ##.kk.109.548 9 1)) ((bruijn ##.k.1453 4 0) #f)) ((bruijn ##.k.1453 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k382, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda146, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k380(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.123.568 0 0)) ((close _V10_Dcount__refs__apply_D518_k381) (##inline ##vcore.cdr (bruijn ##.expr.123.568 0 0))) ((bruijn ##.k.1453 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k381, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k379(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.566 0 0)) ((close _V10_Dcount__refs__apply_D518_k380) (##inline ##vcore.cdr (bruijn ##.expr.122.566 0 0))) ((bruijn ##.k.1453 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k380, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k378(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1454 0 0) ((close _V10_Dcount__refs__apply_D518_k379) (##inline ##vcore.cdr (bruijn ##.expr.121.565 2 0))) ((bruijn ##.k.1453 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k379, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k377(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.565 1 0)) ((bruijn ##.equal?.282 12 34) (close _V10_Dcount__refs__apply_D518_k378) 'if (##inline ##vcore.car (bruijn ##.expr.121.565 1 0))) ((bruijn ##.k.1453 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k378, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k392(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1445 0 0) (bruijn ##.k.1439 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dcount__refs__apply_D518_k395(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.281 23 33) (bruijn ##.k.1446 3 0) (bruijn ##.impure-table.516 18 1) (bruijn ##.y.576 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 33)), 4,
      upenv->up->up->vars[0],
      VGetArg(upenv, 18-1, 1),
      VGetArg(upenv, 5-1, 0),
      VEncodeBool(true));
}
static void _V10_Dcount__refs__apply_D518_k394(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.517 17 2) (close _V10_Dcount__refs__apply_D518_k395) (##inline ##vcore.car (bruijn ##.expr.128.577 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k395, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k393(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.517 16 2) (close _V10_Dcount__refs__apply_D518_k394) (bruijn ##.y.576 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k394, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D518_lambda148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.517 15 2) (close _V10_Dcount__refs__apply_D518_k393) (##inline ##vcore.car (bruijn ##.expr.126.573 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k393, env)}),
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k391(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.128.577 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.128.577 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D518_k392) (close _V10_Dcount__refs__apply_D518_lambda148) (bruijn ##.kk.109.548 12 1)) ((bruijn ##.k.1439 5 0) #f)) ((bruijn ##.k.1439 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k392, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda148, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k390(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_k391) (##inline ##vcore.cdr (bruijn ##.expr.127.575 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k391, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k389(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.127.575 0 0)) ((close _V10_Dcount__refs__apply_D518_k390) (##inline ##vcore.car (bruijn ##.expr.127.575 0 0))) ((bruijn ##.k.1439 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k390, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k388(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.573 0 0)) ((close _V10_Dcount__refs__apply_D518_k389) (##inline ##vcore.cdr (bruijn ##.expr.126.573 0 0))) ((bruijn ##.k.1439 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k389, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k387(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1440 0 0) ((close _V10_Dcount__refs__apply_D518_k388) (##inline ##vcore.cdr (bruijn ##.expr.125.572 2 0))) ((bruijn ##.k.1439 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k388, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k386(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.125.572 1 0)) ((bruijn ##.equal?.282 14 34) (close _V10_Dcount__refs__apply_D518_k387) 'set! (##inline ##vcore.car (bruijn ##.expr.125.572 1 0))) ((bruijn ##.k.1439 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k387, env)}),
      _V0set_B,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_k398(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1435 0 0) (bruijn ##.k.1434 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Dcount__refs__apply_D518_k399(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.for-each.258 18 10) (bruijn ##.k.1436 1 0) (bruijn ##.count-refs-atom.517 13 2) (##inline ##vcore.cdr (bruijn ##.expr.129.579 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 10)), 3,
      upenv->vars[0],
      VGetArg(upenv, 13-1, 2),
      VInlineCdr2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_lambda150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.517 12 2) (close _V10_Dcount__refs__apply_D518_k399) (##inline ##vcore.car (bruijn ##.expr.129.579 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k399, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D518_k397(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.129.579 1 0)) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D518_k398) (close _V10_Dcount__refs__apply_D518_lambda150) (bruijn ##.kk.109.548 9 1)) ((bruijn ##.k.1434 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k398, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda150, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D518_lambda151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 17 16) (bruijn ##.k.1432 0 0) (##string ##.string.1998) (bruijn ##.expr.547 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1998.sym, VPOINTER_OTHER),
      VGetArg(upenv, 11-1, 1));
}
static void _V10_Dcount__refs__apply_D518_k400(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1427 9 0) (close _V10_Dcount__refs__apply_D518_lambda151) (bruijn ##.kk.109.548 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 9-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda151, env)}),
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Dcount__refs__apply_D518_lambda149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_k397) (close _V10_Dcount__refs__apply_D518_k400))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k397, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k400, env)}));
}
static void _V10_Dcount__refs__apply_D518_k396(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_lambda149) (bruijn ##.input.110.549 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_lambda149, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dcount__refs__apply_D518_lambda147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_k386) (close _V10_Dcount__refs__apply_D518_k396))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k386, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k396, env)}));
}
static void _V10_Dcount__refs__apply_D518_k385(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_lambda147) (bruijn ##.input.110.549 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_lambda147, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D518_lambda145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_k377) (close _V10_Dcount__refs__apply_D518_k385))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k377, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k385, env)}));
}
static void _V10_Dcount__refs__apply_D518_k376(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_lambda145) (bruijn ##.input.110.549 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_lambda145, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D518_lambda137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_k362) (close _V10_Dcount__refs__apply_D518_k376))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_k362, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_k376, env)}));
}
static void _V10_Dcount__refs__apply_D518_lambda136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D518_lambda137) (bruijn ##.input.110.549 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_lambda137, .env = env }, }, 1,
      _var0);
}
static void _V10_Dcount__refs__apply_D518_lambda135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dcount__refs__apply_D518_lambda136) (bruijn ##.expr.547 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D518_lambda136, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Dcount__refs__apply_D518_lambda134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D518_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1426 0 0) (close _V10_Dcount__refs__apply_D518_lambda135))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda135, env)}));
}
static void _V10_Dcount__refs_D293_k402(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1498 1 0) ((bruijn ##.count-refs-apply.518 2 3) (bruijn ##.k.1499 0 0) (bruijn ##.expr.514 5 1)) ((bruijn ##.count-refs-atom.517 2 2) (bruijn ##.k.1499 0 0) (bruijn ##.expr.514 5 1)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[3]), 2,
      _var0,
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[2]), 2,
      _var0,
      VGetArg(upenv, 5-1, 1));
}
}
static void _V10_Dcount__refs_D293_k403(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.261 7 13) (bruijn ##.k.1344 5 0) (bruijn ##.count-table.515 2 0) (bruijn ##.impure-table.516 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 13)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      upenv->up->vars[1]);
}
static void _V10_Dcount__refs_D293_k401(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dcount__refs_D293_k402) (close _V10_Dcount__refs_D293_k403))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs_D293_k402, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D293_k403, env)}));
}
static void _V10_Dcount__refs_D293_k322(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.x.1345 2 0) (bruijn ##.x.1346 1 0) (close _V10_Dcount__refs__atom_D517_lambda110) (close _V10_Dcount__refs__apply_D518_lambda134)) ((bruijn ##.application?.283 4 0) (close _V10_Dcount__refs_D293_k401) (bruijn ##.expr.514 3 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[4]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 4, 4, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = upenv->vars[0];
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D517_lambda110, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D518_lambda134, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D293_k401, env)}),
      upenv->up->up->vars[1]);
    }
}
static void _V10_Dcount__refs_D293_k321(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.make-hash-table.260 3 12) (close _V10_Dcount__refs_D293_k322) (bruijn ##.eqv?.275 3 27))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[12]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D293_k322, env)}),
      upenv->up->up->vars[27]);
}
static void _V10_Dcount__refs_D293_lambda109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D293_lambda109, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.make-hash-table.260 2 12) (close _V10_Dcount__refs_D293_k321) (bruijn ##.eqv?.275 2 27))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[12]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D293_k321, env)}),
      upenv->up->vars[27]);
}
static void _V10_Doptimize__lambda_D584_k407(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1510 0 0) (bruijn ##.k.1506 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__lambda_D584_k408(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1511 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.143.595 5 0)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.144.597 3 0)) (##inline ##vcore.cons (bruijn ##.x.1514 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize__lambda_D584_lambda157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_lambda157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.587 8 3) (close _V10_Doptimize__lambda_D584_k408) (##inline ##vcore.car (bruijn ##.expr.145.599 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_k408, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__lambda_D584_k406(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.145.599 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.145.599 0 0))) (##vcore.call-with-values (close _V10_Doptimize__lambda_D584_k407) (close _V10_Doptimize__lambda_D584_lambda157) (bruijn ##.kk.141.593 5 1)) ((bruijn ##.k.1506 2 0) #f)) ((bruijn ##.k.1506 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_k407, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_lambda157, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D584_k405(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.597 0 0)) ((close _V10_Doptimize__lambda_D584_k406) (##inline ##vcore.cdr (bruijn ##.expr.144.597 0 0))) ((bruijn ##.k.1506 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D584_k406, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D584_k404(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.143.595 1 0)) ((close _V10_Doptimize__lambda_D584_k405) (##inline ##vcore.cdr (bruijn ##.expr.143.595 1 0))) ((bruijn ##.k.1506 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D584_k405, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D584_lambda158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_lambda158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 9 16) (bruijn ##.k.1504 0 0) (##string ##.string.1999) (bruijn ##.expr.592 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D1999.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Doptimize__lambda_D584_k409(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1502 3 0) (close _V10_Doptimize__lambda_D584_lambda158) (bruijn ##.kk.141.593 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_lambda158, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Doptimize__lambda_D584_lambda156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__lambda_D584_k404) (close _V10_Doptimize__lambda_D584_k409))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D584_k404, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_k409, env)}));
}
static void _V10_Doptimize__lambda_D584_lambda155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__lambda_D584_lambda156) (bruijn ##.input.142.594 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D584_lambda156, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__lambda_D584_lambda154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__lambda_D584_lambda155) (bruijn ##.expr.592 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D584_lambda155, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Doptimize__lambda_D584_lambda153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D584_lambda153, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1501 0 0) (close _V10_Doptimize__lambda_D584_lambda154))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_lambda154, env)}));
}
static void _V10_Doptimize__let_D585_k419(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1644 0 0) (bruijn ##.k.1634 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 9-1, 0));
}
static void _V10_Doptimize__let_D585_k430(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1682 0 0) ((bruijn ##.k.1680 4 0) (bruijn ##.p.1682 0 0)) ((bruijn ##.=.273 29 25) (bruijn ##.k.1680 4 0) (bruijn ##.refs.614 7 1) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 25)), 3,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      VEncodeInt(1l));
}
}
static void _V10_Doptimize__let_D585_k429(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.275 28 27) (close _V10_Doptimize__let_D585_k430) (bruijn ##.x.1683 0 0) '##foreign.function)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 27)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k430, env)}),
      _var0,
      _V10foreign_Dfunction);
}
static void _V10_Doptimize__let_D585_k428(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1681 0 0) ((bruijn ##.k.1680 2 0) (bruijn ##.p.1681 0 0)) ((bruijn ##.car.279 27 31) (close _V10_Doptimize__let_D585_k429) (bruijn ##.x.613 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k429, env)}),
      VGetArg(upenv, 5-1, 0));
}
}
static void _V10_Doptimize__let_D585_k427(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.eqv?.275 26 27) (close _V10_Doptimize__let_D585_k428) (bruijn ##.x.1684 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 27)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k428, env)}),
      _var0,
      _V0quote);
}
static void _V10_Doptimize__let_D585_k426(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1679 1 0) ((bruijn ##.k.1680 0 0) (bruijn ##.p.1679 1 0)) ((bruijn ##.car.279 25 31) (close _V10_Doptimize__let_D585_k427) (bruijn ##.x.613 3 0)))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k427, env)}),
      upenv->up->up->vars[0]);
}
}
static void _V10_Doptimize__let_D585_k435(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.memv.278 29 30) (bruijn ##.k.1674 1 0) (bruijn ##.x.1675 0 0) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 30)), 3,
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
static void _V10_Doptimize__let_D585_k434(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1673 1 0) ((bruijn ##.car.279 28 31) (close _V10_Doptimize__let_D585_k435) (bruijn ##.x.613 6 0)) ((bruijn ##.k.1674 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 31)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k435, env)}),
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k437(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1671 0 0) ((bruijn ##.k.1670 3 0) (bruijn ##.pure.615 7 2)) ((bruijn ##.k.1670 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VGetArg(upenv, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k436(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.270 28 22) (close _V10_Doptimize__let_D585_k437) (bruijn ##.x.1672 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k437, env)}),
      _var0);
}
static void _V10_Doptimize__let_D585_k433(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k434) (close _V10_Doptimize__let_D585_k436))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k434, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k436, env)}));
}
static void _V10_Doptimize__let_D585_k432(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1669 1 0) ((bruijn ##.pair?.277 26 29) (close _V10_Doptimize__let_D585_k433) (bruijn ##.x.613 4 0)) ((bruijn ##.k.1670 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 29)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k433, env)}),
      upenv->up->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k444(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.add-refs!.291 32 8) (bruijn ##.k.1655 4 0) (bruijn ##.ref-table.589 30 5) (bruijn ##.xrefs.616 3 0) (bruijn ##.x.1657 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 8)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 30-1, 5),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D585_k443(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.-.280 32 32) (close _V10_Doptimize__let_D585_k444) (bruijn ##.refs.614 10 1) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 32)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k444, env)}),
      VGetArg(upenv, 10-1, 1),
      VEncodeInt(1l));
}
static void _V10_Doptimize__let_D585_k442(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__let_D585_k443) (bruijn ##.dummy.184.618 1 2) (bruijn ##.x.1658 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k443, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__let_D585_lambda165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.293 30 10) (bruijn ##.k.1659 0 0) (bruijn ##.x.613 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 10)), 2,
      _var0,
      VGetArg(upenv, 9-1, 0));
}
static void _V10_Doptimize__let_D585_k445(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.1660 1 0) (bruijn ##.xpure.617 2 1) (bruijn ##.xpure.183.620 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Doptimize__let_D585_lambda166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda166, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__let_D585_k445) (bruijn ##.xrefs.616 1 0) (bruijn ##.xrefs.182.619 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k445, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__let_D585_k441(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1654 1 0) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k442) (close _V10_Doptimize__let_D585_lambda165) (close _V10_Doptimize__let_D585_lambda166))) ((bruijn ##.k.1655 0 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k442, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda165, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda166, env)}));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k448(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 28 3) (bruijn ##.k.1645 14 0) (bruijn ##.x.1653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 3)), 2,
      VGetArg(upenv, 14-1, 0),
      _var0);
}
static void _V10_Doptimize__let_D585_k447(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.substitute.286 29 3) (close _V10_Doptimize__let_D585_k448) (bruijn ##.y.608 17 0) (bruijn ##.x.613 8 0) (bruijn ##.expr.610 15 0) (bruijn ##.refs.614 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 3)), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k448, env)}),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Doptimize__let_D585_k446(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-set!.281 29 33) (close _V10_Doptimize__let_D585_k447) (bruijn ##.ref-table.589 26 5) (bruijn ##.y.608 16 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 33)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k447, env)}),
      VGetArg(upenv, 26-1, 5),
      VGetArg(upenv, 16-1, 0),
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D585_k440(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k441) (close _V10_Doptimize__let_D585_k446))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k441, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k446, env)}));
}
static void _V10_Doptimize__let_D585_k439(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.270 27 22) (close _V10_Doptimize__let_D585_k440) (bruijn ##.x.1662 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k440, env)}),
      _var0);
}
static void _V10_Doptimize__let_D585_k449(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1645 10 0) (##inline ##vcore.cons (bruijn ##.x.1663 0 0) (##inline ##vcore.cons (bruijn ##.x.613 5 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(upenv, 5-1, 0),
        VNULL)));
}
static void _V10_Doptimize__let_D585_k438(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1650 0 0) ((bruijn ##.=.273 26 25) (close _V10_Doptimize__let_D585_k439) (bruijn ##.refs.614 4 1) 1) ((bruijn ##.optimize-atom.588 23 4) (close _V10_Doptimize__let_D585_k449) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.y.608 13 0) '()) (##inline ##vcore.cons (bruijn ##.expr.610 11 0) '())))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 25)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k439, env)}),
      upenv->up->up->up->vars[1],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k449, env)}),
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
static void _V10_Doptimize__let_D585_k431(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k432) (close _V10_Doptimize__let_D585_k438))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k432, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k438, env)}));
}
static void _V10_Doptimize__let_D585_k425(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k426) (close _V10_Doptimize__let_D585_k431))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k426, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k431, env)}));
}
static void _V10_Doptimize__let_D585_k424(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1649 0 0) ((bruijn ##.optimize-apply.587 20 3) (bruijn ##.k.1645 6 0) (bruijn ##.expr.610 8 0)) ((bruijn ##.atom?.276 23 28) (close _V10_Doptimize__let_D585_k425) (bruijn ##.x.613 1 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 3)), 2,
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 8-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 28)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k425, env)}),
      upenv->vars[0]);
}
}
static void _V10_Doptimize__let_D585_lambda164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.=.273 22 25) (close _V10_Doptimize__let_D585_k424) (bruijn ##.refs.614 0 1) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 25)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k424, env)}),
      _var1,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D585_k423(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda164) (bruijn ##.x.1646 3 0) (bruijn ##.x.1647 2 0) (bruijn ##.x.1648 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda164, .env = env }, }, 3,
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D585_k422(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.270 20 22) (close _V10_Doptimize__let_D585_k423) (bruijn ##.x.1685 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k423, env)}),
      _var0);
}
static void _V10_Doptimize__let_D585_lambda167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1686 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Doptimize__let_D585_k421(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.274 19 26) (close _V10_Doptimize__let_D585_k422) (bruijn ##.impure-table.590 16 6) (bruijn ##.y.608 6 0) (close _V10_Doptimize__let_D585_lambda167))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 26)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k422, env)}),
      VGetArg(upenv, 16-1, 6),
      VGetArg(upenv, 6-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda167, env)}));
}
static void _V10_Doptimize__let_D585_lambda168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1687 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D585_k420(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.hash-table-ref.274 18 26) (close _V10_Doptimize__let_D585_k421) (bruijn ##.ref-table.589 15 5) (bruijn ##.y.608 5 0) (close _V10_Doptimize__let_D585_lambda168))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 26)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k421, env)}),
      VGetArg(upenv, 15-1, 5),
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda168, env)}));
}
static void _V10_Doptimize__let_D585_lambda163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.588 14 4) (close _V10_Doptimize__let_D585_k420) (##inline ##vcore.car (bruijn ##.expr.153.611 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k420, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__let_D585_k418(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.611 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.153.611 0 0))) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k419) (close _V10_Doptimize__let_D585_lambda163) (bruijn ##.kk.146.602 11 1)) ((bruijn ##.k.1634 8 0) #f)) ((bruijn ##.k.1634 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k419, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda163, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k417(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.152.609 1 0))) ((close _V10_Doptimize__let_D585_k418) (##inline ##vcore.cdr (bruijn ##.expr.148.604 8 0))) ((bruijn ##.k.1634 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k418, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 8-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k416(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.152.609 0 0)) ((close _V10_Doptimize__let_D585_k417) (##inline ##vcore.car (bruijn ##.expr.152.609 0 0))) ((bruijn ##.k.1634 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k417, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k415(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.151.607 1 0))) ((close _V10_Doptimize__let_D585_k416) (##inline ##vcore.cdr (bruijn ##.expr.150.606 2 0))) ((bruijn ##.k.1634 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        upenv->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k416, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k414(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.151.607 0 0)) ((close _V10_Doptimize__let_D585_k415) (##inline ##vcore.car (bruijn ##.expr.151.607 0 0))) ((bruijn ##.k.1634 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k415, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k413(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.150.606 0 0)) ((close _V10_Doptimize__let_D585_k414) (##inline ##vcore.car (bruijn ##.expr.150.606 0 0))) ((bruijn ##.k.1634 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k414, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k412(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1636 0 0) ((close _V10_Doptimize__let_D585_k413) (##inline ##vcore.cdr (bruijn ##.expr.149.605 1 0))) ((bruijn ##.k.1634 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k413, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k411(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.149.605 0 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Doptimize__let_D585_k412) 'continuation (##inline ##vcore.car (bruijn ##.expr.149.605 0 0))) ((bruijn ##.k.1634 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k412, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k410(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.148.604 1 0)) ((close _V10_Doptimize__let_D585_k411) (##inline ##vcore.car (bruijn ##.expr.148.604 1 0))) ((bruijn ##.k.1634 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k411, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k456(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1627 0 0) (bruijn ##.k.1619 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__let_D585_lambda170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 12 3) (bruijn ##.k.1628 0 0) (##inline ##vcore.car (bruijn ##.expr.157.624 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__let_D585_k455(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.157.624 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.157.624 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.621 5 0))) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k456) (close _V10_Doptimize__let_D585_lambda170) (bruijn ##.kk.146.602 9 1)) ((bruijn ##.k.1619 4 0) #f)) ((bruijn ##.k.1619 4 0) #f)) ((bruijn ##.k.1619 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k456, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda170, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k454(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.156.623 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.156.623 0 0))) ((close _V10_Doptimize__let_D585_k455) (##inline ##vcore.cdr (bruijn ##.expr.156.623 0 0))) ((bruijn ##.k.1619 3 0) #f)) ((bruijn ##.k.1619 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k455, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k453(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1621 0 0) ((close _V10_Doptimize__let_D585_k454) (##inline ##vcore.cdr (bruijn ##.expr.155.622 1 0))) ((bruijn ##.k.1619 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k454, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k452(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.155.622 0 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Doptimize__let_D585_k453) 'lambda (##inline ##vcore.car (bruijn ##.expr.155.622 0 0))) ((bruijn ##.k.1619 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k453, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k451(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.621 1 0)) ((close _V10_Doptimize__let_D585_k452) (##inline ##vcore.car (bruijn ##.expr.154.621 1 0))) ((bruijn ##.k.1619 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k452, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D631_k463(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.163.630 4 1) (bruijn ##.k.1585 1 0) (bruijn ##.expr.165.632 2 1) (bruijn ##.x.1586 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D631_k462(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.165.632 1 1))) ((bruijn ##.reverse.262 20 14) (close _V10_Dloop_D631_k463) (bruijn ##.ys.162.633 1 2)) ((bruijn ##.k.1585 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_k463, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D631_k466(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.163.630 7 1) (bruijn ##.k.1579 2 0) (bruijn ##.expr.165.632 5 1) (bruijn ##.x.1581 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D631_k465(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 23 14) (close _V10_Dloop_D631_k466) (bruijn ##.ys.162.633 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_k466, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D631_lambda176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_lambda176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.164.634 0 1) (close _V10_Dloop_D631_k465) (##inline ##vcore.cdr (bruijn ##.expr.165.632 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.165.632 3 1)) (bruijn ##.ys.162.633 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_k465, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
}
static void _V10_Dloop_D631_lambda175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_lambda175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1578 0 0) (close _V10_Dloop_D631_lambda176))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_lambda176, env)}));
}
static void _V10_Dloop_D631_k464(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1576 1 0) (close _V10_Dloop_D631_lambda175) (bruijn ##.loop.631 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_lambda175, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D631_lambda174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D631_lambda174, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D631_k462) (close _V10_Dloop_D631_k464))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D631_k462, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_k464, env)}));
}
static void _V10_Doptimize__let_D585_lambda173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D631_lambda174)) ((bruijn ##.loop.631 0 0) (bruijn ##.k.1575 1 0) (##inline ##vcore.car (bruijn ##.expr.160.628 3 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D631_lambda174, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Doptimize__let_D585_lambda172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1574 0 0) (close _V10_Doptimize__let_D585_lambda173))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda173, env)}));
}
static void _V10_Dloop_D642_k469(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.169.641 4 1) (bruijn ##.k.1603 1 0) (bruijn ##.expr.171.643 2 1) (bruijn ##.x.1604 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      upenv->vars[0],
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dloop_D642_k468(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.171.643 1 1))) ((bruijn ##.reverse.262 22 14) (close _V10_Dloop_D642_k469) (bruijn ##.xs.168.644 1 2)) ((bruijn ##.k.1603 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_k469, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D642_k472(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.169.641 7 1) (bruijn ##.k.1597 2 0) (bruijn ##.expr.171.643 5 1) (bruijn ##.x.1599 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      upenv->up->vars[0],
      VGetArg(upenv, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D642_k471(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 25 14) (close _V10_Dloop_D642_k472) (bruijn ##.xs.168.644 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_k472, env)}),
      upenv->up->up->up->vars[2]);
}
static void _V10_Dloop_D642_lambda182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_lambda182, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.kk.170.645 0 1) (close _V10_Dloop_D642_k471) (##inline ##vcore.cdr (bruijn ##.expr.171.643 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.171.643 3 1)) (bruijn ##.xs.168.644 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_k471, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[1]),
        upenv->up->up->vars[2]));
}
static void _V10_Dloop_D642_lambda181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_lambda181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1596 0 0) (close _V10_Dloop_D642_lambda182))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_lambda182, env)}));
}
static void _V10_Dloop_D642_k470(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1594 1 0) (close _V10_Dloop_D642_lambda181) (bruijn ##.loop.642 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_lambda181, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D642_lambda180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D642_lambda180, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Dloop_D642_k468) (close _V10_Dloop_D642_k470))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D642_k468, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_k470, env)}));
}
static void _V10_Doptimize__let_D585_lambda179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D642_lambda180)) ((bruijn ##.loop.642 0 0) (bruijn ##.k.1593 1 0) (##inline ##vcore.cdr (bruijn ##.expr.158.626 9 0)) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D642_lambda180, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 3,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 9-1, 0)),
      VNULL);
    }
}
static void _V10_Doptimize__let_D585_lambda178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1592 0 0) (close _V10_Doptimize__let_D585_lambda179))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda179, env)}));
}
static void _V10_Doptimize__let_D585_k473(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1608 0 0) (bruijn ##.k.1606 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Doptimize__let_D585_k478(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1611 1 0) ((bruijn ##.compiler-error.264 24 16) (bruijn ##.k.1612 0 0) (##string ##.string.2000)) ((bruijn ##.k.1612 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 16)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2000.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k479(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.map.263 24 15) (bruijn ##.k.1609 5 0) (bruijn ##.optimize-atom.588 21 4) (bruijn ##.let-expr.601 20 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 15)), 3,
      VGetArg(upenv, 5-1, 0),
      VGetArg(upenv, 21-1, 4),
      VGetArg(upenv, 20-1, 1));
}
static void _V10_Doptimize__let_D585_k477(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k478) (close _V10_Doptimize__let_D585_k479))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k478, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k479, env)}));
}
static void _V10_Doptimize__let_D585_k476(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.270 22 22) (close _V10_Doptimize__let_D585_k477) (bruijn ##.x.1613 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k477, env)}),
      _var0);
}
static void _V10_Doptimize__let_D585_k475(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.=.273 21 25) (close _V10_Doptimize__let_D585_k476) (bruijn ##.x.1614 1 0) (bruijn ##.x.1615 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 25)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k476, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D585_k474(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.271 20 23) (close _V10_Doptimize__let_D585_k475) (bruijn ##.xs.648 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k475, env)}),
      upenv->up->vars[2]);
}
static void _V10_Doptimize__let_D585_lambda184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.271 19 23) (close _V10_Doptimize__let_D585_k474) (bruijn ##.ys.637 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k474, env)}),
      upenv->up->up->vars[2]);
}
static void _V10_Doptimize__let_D585_lambda183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda183, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.647 0 1)) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k473) (close _V10_Doptimize__let_D585_lambda184) (bruijn ##.kk.146.602 13 1)) ((bruijn ##.k.1606 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k473, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda184, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k467(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.166.638 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.166.638 0 0))) (##vcore.call-with-values (bruijn ##.k.1588 1 0) (close _V10_Doptimize__let_D585_lambda178) (close _V10_Doptimize__let_D585_lambda183)) ((bruijn ##.k.1588 1 0) #f)) ((bruijn ##.k.1588 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda178, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda183, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_lambda177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda177, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.636 0 1)) ((close _V10_Doptimize__let_D585_k467) (##inline ##vcore.cdr (bruijn ##.expr.160.628 1 0))) ((bruijn ##.k.1588 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k467, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k461(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.160.628 0 0)) (##vcore.call-with-values (bruijn ##.k.1570 3 0) (close _V10_Doptimize__let_D585_lambda172) (close _V10_Doptimize__let_D585_lambda177)) ((bruijn ##.k.1570 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda172, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda177, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k460(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1572 0 0) ((close _V10_Doptimize__let_D585_k461) (##inline ##vcore.cdr (bruijn ##.expr.159.627 1 0))) ((bruijn ##.k.1570 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k461, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k459(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.159.627 0 0)) ((bruijn ##.equal?.282 13 34) (close _V10_Doptimize__let_D585_k460) 'lambda (##inline ##vcore.car (bruijn ##.expr.159.627 0 0))) ((bruijn ##.k.1570 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k460, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k458(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.158.626 1 0)) ((close _V10_Doptimize__let_D585_k459) (##inline ##vcore.car (bruijn ##.expr.158.626 1 0))) ((bruijn ##.k.1570 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k459, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k486(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1563 0 0) (bruijn ##.k.1555 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__let_D585_lambda186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 16 3) (bruijn ##.k.1564 0 0) (##inline ##vcore.car (bruijn ##.expr.175.652 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__let_D585_k485(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.175.652 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.175.652 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.172.649 5 0))) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k486) (close _V10_Doptimize__let_D585_lambda186) (bruijn ##.kk.146.602 13 1)) ((bruijn ##.k.1555 4 0) #f)) ((bruijn ##.k.1555 4 0) #f)) ((bruijn ##.k.1555 4 0) #f))
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
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k486, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda186, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k484(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.174.651 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.174.651 0 0))) ((close _V10_Doptimize__let_D585_k485) (##inline ##vcore.cdr (bruijn ##.expr.174.651 0 0))) ((bruijn ##.k.1555 3 0) #f)) ((bruijn ##.k.1555 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k485, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k483(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1557 0 0) ((close _V10_Doptimize__let_D585_k484) (##inline ##vcore.cdr (bruijn ##.expr.173.650 1 0))) ((bruijn ##.k.1555 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k484, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k482(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.173.650 0 0)) ((bruijn ##.equal?.282 15 34) (close _V10_Doptimize__let_D585_k483) 'continuation (##inline ##vcore.car (bruijn ##.expr.173.650 0 0))) ((bruijn ##.k.1555 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k483, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k481(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.649 1 0)) ((close _V10_Doptimize__let_D585_k482) (##inline ##vcore.car (bruijn ##.expr.172.649 1 0))) ((bruijn ##.k.1555 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k482, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k495(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1539 0 0) (bruijn ##.k.1533 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Doptimize__let_D585_k500(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1547 1 0) ((bruijn ##.compiler-error.264 28 16) (bruijn ##.k.1548 0 0) (##string ##.string.2000)) ((bruijn ##.k.1548 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 16)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2000.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k503(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1540 7 0) (##inline ##vcore.cons (bruijn ##.x.1542 1 0) (bruijn ##.x.1543 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 1,
      VInlineCons2(runtime,
        upenv->vars[0],
        _var0));
}
static void _V10_Doptimize__let_D585_k502(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 29 15) (close _V10_Doptimize__let_D585_k503) (bruijn ##.optimize-atom.588 26 4) (bruijn ##.xs.660 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k503, env)}),
      VGetArg(upenv, 26-1, 4),
      VGetArg(upenv, 7-1, 0));
}
static void _V10_Doptimize__let_D585_k501(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.588 25 4) (close _V10_Doptimize__let_D585_k502) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.ys.657 8 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.179.658 7 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k502, env)}),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(upenv, 8-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 7-1, 0)),
        VNULL))));
}
static void _V10_Doptimize__let_D585_k499(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k500) (close _V10_Doptimize__let_D585_k501))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k500, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k501, env)}));
}
static void _V10_Doptimize__let_D585_k498(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.not.270 26 22) (close _V10_Doptimize__let_D585_k499) (bruijn ##.x.1549 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 22)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k499, env)}),
      _var0);
}
static void _V10_Doptimize__let_D585_k497(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<=.272 25 24) (close _V10_Doptimize__let_D585_k498) (bruijn ##.x.1550 1 0) (bruijn ##.x.1551 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 24)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k498, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D585_k496(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.length.271 24 23) (close _V10_Doptimize__let_D585_k497) (bruijn ##.xs.660 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 23)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k497, env)}),
      upenv->up->vars[0]);
}
static void _V10_Doptimize__let_D585_lambda188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.taillength.288 22 5) (close _V10_Doptimize__let_D585_k496) (bruijn ##.ys.657 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 5)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k496, env)}),
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__let_D585_k494(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__let_D585_k495) (close _V10_Doptimize__let_D585_lambda188) (bruijn ##.kk.146.602 17 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k495, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda188, env)}),
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Doptimize__let_D585_k493(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.179.658 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.179.658 0 0))) ((close _V10_Doptimize__let_D585_k494) (##inline ##vcore.cdr (bruijn ##.expr.176.654 6 0))) ((bruijn ##.k.1533 5 0) #f)) ((bruijn ##.k.1533 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k494, .env = env }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k492(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k493) (##inline ##vcore.cdr (bruijn ##.expr.178.656 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k493, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__let_D585_k491(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.178.656 0 0)) ((close _V10_Doptimize__let_D585_k492) (##inline ##vcore.car (bruijn ##.expr.178.656 0 0))) ((bruijn ##.k.1533 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k492, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k490(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1535 0 0) ((close _V10_Doptimize__let_D585_k491) (##inline ##vcore.cdr (bruijn ##.expr.177.655 1 0))) ((bruijn ##.k.1533 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k491, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k489(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.177.655 0 0)) ((bruijn ##.equal?.282 17 34) (close _V10_Doptimize__let_D585_k490) 'lambda (##inline ##vcore.car (bruijn ##.expr.177.655 0 0))) ((bruijn ##.k.1533 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k490, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k488(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.176.654 1 0)) ((close _V10_Doptimize__let_D585_k489) (##inline ##vcore.car (bruijn ##.expr.176.654 1 0))) ((bruijn ##.k.1533 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k489, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k508(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1529 0 0) (bruijn ##.k.1526 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__let_D585_lambda190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 21 16) (bruijn ##.k.1530 0 0) (##string ##.string.2001))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 16)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2001.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D585_k507(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1528 0 0) (##vcore.call-with-values (close _V10_Doptimize__let_D585_k508) (close _V10_Doptimize__let_D585_lambda190) (bruijn ##.kk.146.602 15 1)) ((bruijn ##.k.1526 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k508, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda190, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k506(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.181.662 0 0)) ((bruijn ##.equal?.282 19 34) (close _V10_Doptimize__let_D585_k507) 'continuation (##inline ##vcore.car (bruijn ##.expr.181.662 0 0))) ((bruijn ##.k.1526 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k507, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_k505(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.180.661 1 0)) ((close _V10_Doptimize__let_D585_k506) (##inline ##vcore.car (bruijn ##.expr.180.661 1 0))) ((bruijn ##.k.1526 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k506, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D585_lambda191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 19 16) (bruijn ##.k.1524 0 0) (##string ##.string.2002))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 16)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2002.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D585_k509(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1517 13 0) (close _V10_Doptimize__let_D585_lambda191) (bruijn ##.kk.146.602 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda191, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Doptimize__let_D585_lambda189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k505) (close _V10_Doptimize__let_D585_k509))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k505, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k509, env)}));
}
static void _V10_Doptimize__let_D585_k504(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda189) (bruijn ##.input.147.603 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda189, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Doptimize__let_D585_lambda187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k488) (close _V10_Doptimize__let_D585_k504))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k488, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k504, env)}));
}
static void _V10_Doptimize__let_D585_k487(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda187) (bruijn ##.input.147.603 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda187, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Doptimize__let_D585_lambda185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k481) (close _V10_Doptimize__let_D585_k487))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k481, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k487, env)}));
}
static void _V10_Doptimize__let_D585_k480(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda185) (bruijn ##.input.147.603 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda185, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Doptimize__let_D585_lambda171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k458) (close _V10_Doptimize__let_D585_k480))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k458, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k480, env)}));
}
static void _V10_Doptimize__let_D585_k457(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda171) (bruijn ##.input.147.603 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda171, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__let_D585_lambda169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k451) (close _V10_Doptimize__let_D585_k457))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k451, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k457, env)}));
}
static void _V10_Doptimize__let_D585_k450(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda169) (bruijn ##.input.147.603 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda169, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__let_D585_lambda162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_k410) (close _V10_Doptimize__let_D585_k450))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_k410, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_k450, env)}));
}
static void _V10_Doptimize__let_D585_lambda161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D585_lambda162) (bruijn ##.input.147.603 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda162, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__let_D585_lambda160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__let_D585_lambda161) (bruijn ##.let-expr.601 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D585_lambda161, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Doptimize__let_D585_lambda159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D585_lambda159, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1516 0 0) (close _V10_Doptimize__let_D585_lambda160))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda160, env)}));
}
static void _V10_Dloop_D670_k515(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.192.669 5 1) (bruijn ##.k.1717 2 0) (bruijn ##.expr.194.671 3 1) (bruijn ##.x.1718 1 0) (bruijn ##.x.1719 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D670_k514(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 16 14) (close _V10_Dloop_D670_k515) (bruijn ##.vals.191.673 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k515, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D670_k513(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.194.671 1 1))) ((bruijn ##.reverse.262 15 14) (close _V10_Dloop_D670_k514) (bruijn ##.args.190.672 1 2)) ((bruijn ##.k.1717 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k514, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D670_k519(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.196.677 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.196.677 0 0))) ((bruijn ##.kk.193.674 3 1) (bruijn ##.k.1709 1 0) (##inline ##vcore.cdr (bruijn ##.expr.194.671 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.195.675 2 0)) (bruijn ##.args.190.672 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.196.677 0 0)) (bruijn ##.vals.191.673 6 3))) ((bruijn ##.k.1709 1 0) #f)) ((bruijn ##.k.1709 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D670_k518(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.195.675 1 0)) ((close _V10_Dloop_D670_k519) (##inline ##vcore.cdr (bruijn ##.expr.195.675 1 0))) ((bruijn ##.k.1709 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D670_k519, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D670_k522(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.192.669 9 1) (bruijn ##.k.1704 4 0) (bruijn ##.expr.194.671 7 1) (bruijn ##.x.1706 1 0) (bruijn ##.x.1707 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D670_k521(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 20 14) (close _V10_Dloop_D670_k522) (bruijn ##.vals.191.673 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k522, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D670_k520(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 19 14) (close _V10_Dloop_D670_k521) (bruijn ##.args.190.672 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k521, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D670_k517(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D670_k518) (close _V10_Dloop_D670_k520))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D670_k518, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k520, env)}));
}
static void _V10_Dloop_D670_lambda200(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_lambda200, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D670_k517) (##inline ##vcore.car (bruijn ##.expr.194.671 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D670_k517, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D670_lambda199(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_lambda199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1703 0 0) (close _V10_Dloop_D670_lambda200))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_lambda200, env)}));
}
static void _V10_Dloop_D670_k516(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1701 1 0) (close _V10_Dloop_D670_lambda199) (bruijn ##.loop.670 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_lambda199, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D670_lambda198(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D670_lambda198, got ~D~N"
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
  // ((close _V10_Dloop_D670_k513) (close _V10_Dloop_D670_k516))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D670_k513, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_k516, env)}));
}
static void _V10_Doptimize__letrec_D586_lambda197(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda197, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D670_lambda198)) ((bruijn ##.loop.670 0 0) (bruijn ##.k.1700 1 0) (##inline ##vcore.car (bruijn ##.expr.188.667 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D670_lambda198, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__letrec_D586_lambda196(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1699 0 0) (close _V10_Doptimize__letrec_D586_lambda197))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda197, env)}));
}
static void _V10_Doptimize__letrec_D586_k524(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1725 0 0) (bruijn ##.k.1721 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__letrec_D586_k527(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1726 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1728 1 0) (##inline ##vcore.cons (bruijn ##.x.1730 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize__letrec_D586_k526(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.587 12 3) (close _V10_Doptimize__letrec_D586_k527) (##inline ##vcore.car (bruijn ##.expr.197.682 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k527, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Doptimize__letrec_D586_k525(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 14 15) (close _V10_Doptimize__letrec_D586_k526) (bruijn ##.list.269 14 21) (bruijn ##.args.680 3 2) (bruijn ##.x.1731 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k526, env)}),
      VGetArg(upenv, 14-1, 21),
      upenv->up->up->vars[2],
      _var0);
}
static void _V10_Doptimize__letrec_D586_lambda202(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 13 15) (close _V10_Doptimize__letrec_D586_k525) (bruijn ##.optimize-atom.588 10 4) (bruijn ##.vals.681 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k525, env)}),
      VGetArg(upenv, 10-1, 4),
      upenv->up->vars[3]);
}
static void _V10_Doptimize__letrec_D586_k523(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.197.682 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.197.682 0 0))) (##vcore.call-with-values (close _V10_Doptimize__letrec_D586_k524) (close _V10_Doptimize__letrec_D586_lambda202) (bruijn ##.kk.185.664 7 1)) ((bruijn ##.k.1721 1 0) #f)) ((bruijn ##.k.1721 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k524, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda202, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D586_lambda201(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda201, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.679 0 1)) ((close _V10_Doptimize__letrec_D586_k523) (##inline ##vcore.cdr (bruijn ##.expr.188.667 1 0))) ((bruijn ##.k.1721 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D586_k523, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D586_k512(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.188.667 0 0)) (##vcore.call-with-values (bruijn ##.k.1696 2 0) (close _V10_Doptimize__letrec_D586_lambda196) (close _V10_Doptimize__letrec_D586_lambda201)) ((bruijn ##.k.1696 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda196, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda201, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D586_k511(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1697 0 0) ((close _V10_Doptimize__letrec_D586_k512) (##inline ##vcore.cdr (bruijn ##.expr.187.666 2 0))) ((bruijn ##.k.1696 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D586_k512, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D586_k510(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.187.666 1 0)) ((bruijn ##.equal?.282 8 34) (close _V10_Doptimize__letrec_D586_k511) 'letrec (##inline ##vcore.car (bruijn ##.expr.187.666 1 0))) ((bruijn ##.k.1696 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k511, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D586_k528(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.268 8 20) (bruijn ##.k.1693 3 0) (##string ##.string.1996))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 20)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D1996.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__letrec_D586_lambda195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__letrec_D586_k510) (close _V10_Doptimize__letrec_D586_k528))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D586_k510, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_k528, env)}));
}
static void _V10_Doptimize__letrec_D586_lambda194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__letrec_D586_lambda195) (bruijn ##.input.186.665 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D586_lambda195, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__letrec_D586_lambda193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__letrec_D586_lambda194) (bruijn ##.letrec-expr.663 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D586_lambda194, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Doptimize__letrec_D586_lambda192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D586_lambda192, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1692 0 0) (close _V10_Doptimize__letrec_D586_lambda193))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda193, env)}));
}
static void _V10_Doptimize__apply_D587_k532(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1833 0 0) (bruijn ##.k.1830 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_lambda207(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.585 8 1) (bruijn ##.k.1834 0 0) (bruijn ##.expr.684 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 2,
      _var0,
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Doptimize__apply_D587_k531(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1832 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k532) (close _V10_Doptimize__apply_D587_lambda207) (bruijn ##.kk.198.685 5 1)) ((bruijn ##.k.1830 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k532, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda207, env)}),
      VGetArg(upenv, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k530(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.201.688 0 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Doptimize__apply_D587_k531) 'continuation (##inline ##vcore.car (bruijn ##.expr.201.688 0 0))) ((bruijn ##.k.1830 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k531, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k529(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.200.687 1 0)) ((close _V10_Doptimize__apply_D587_k530) (##inline ##vcore.car (bruijn ##.expr.200.687 1 0))) ((bruijn ##.k.1830 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k530, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k537(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1826 0 0) (bruijn ##.k.1823 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_lambda209(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.585 10 1) (bruijn ##.k.1827 0 0) (bruijn ##.expr.684 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 2,
      _var0,
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Doptimize__apply_D587_k536(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1825 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k537) (close _V10_Doptimize__apply_D587_lambda209) (bruijn ##.kk.198.685 7 1)) ((bruijn ##.k.1823 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k537, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda209, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k535(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203.690 0 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Doptimize__apply_D587_k536) 'lambda (##inline ##vcore.car (bruijn ##.expr.203.690 0 0))) ((bruijn ##.k.1823 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k536, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k534(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.202.689 1 0)) ((close _V10_Doptimize__apply_D587_k535) (##inline ##vcore.car (bruijn ##.expr.202.689 1 0))) ((bruijn ##.k.1823 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k535, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k541(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1819 0 0) (bruijn ##.k.1817 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_lambda211(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-letrec.586 11 2) (bruijn ##.k.1820 0 0) (bruijn ##.expr.684 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 2,
      _var0,
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Doptimize__apply_D587_k540(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1818 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k541) (close _V10_Doptimize__apply_D587_lambda211) (bruijn ##.kk.198.685 8 1)) ((bruijn ##.k.1817 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k541, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda211, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k539(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.204.691 1 0)) ((bruijn ##.equal?.282 12 34) (close _V10_Doptimize__apply_D587_k540) 'letrec (##inline ##vcore.car (bruijn ##.expr.204.691 1 0))) ((bruijn ##.k.1817 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k540, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k548(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1805 0 0) (bruijn ##.k.1798 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__apply_D587_k551(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 20 3) (bruijn ##.k.1806 4 0) (##inline ##vcore.car (bruijn ##.expr.207.694 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 3)), 2,
      upenv->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(upenv, 6-1, 0)));
}
static void _V10_Doptimize__apply_D587_k550(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.292 21 9) (close _V10_Doptimize__apply_D587_k551) (bruijn ##.ref-table.589 19 5) (bruijn ##.bcount.698 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 9)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k551, env)}),
      VGetArg(upenv, 19-1, 5),
      upenv->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_k549(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D587_k550) (bruijn ##.dummy.221.700 1 2) (bruijn ##.x.1809 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k550, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D587_lambda214(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.293 20 10) (bruijn ##.k.1810 0 0) (##inline ##vcore.car (bruijn ##.expr.208.696 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D587_k552(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.1811 1 0) (bruijn ##.bpure.699 2 1) (bruijn ##.bpure.220.702 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Doptimize__apply_D587_lambda215(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda215, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D587_k552) (bruijn ##.bcount.698 1 0) (bruijn ##.bcount.219.701 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k552, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D587_lambda213(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k549) (close _V10_Doptimize__apply_D587_lambda214) (close _V10_Doptimize__apply_D587_lambda215)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k549, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda214, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda215, env)}));
    }
}
static void _V10_Doptimize__apply_D587_k547(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.208.696 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.208.696 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k548) (close _V10_Doptimize__apply_D587_lambda213) (bruijn ##.kk.198.685 13 1)) ((bruijn ##.k.1798 4 0) #f)) ((bruijn ##.k.1798 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k548, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda213, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k546(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.207.694 0 0)) ((close _V10_Doptimize__apply_D587_k547) (##inline ##vcore.cdr (bruijn ##.expr.207.694 0 0))) ((bruijn ##.k.1798 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k547, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k545(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.206.693 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.206.693 0 0))) ((close _V10_Doptimize__apply_D587_k546) (##inline ##vcore.cdr (bruijn ##.expr.206.693 0 0))) ((bruijn ##.k.1798 2 0) #f)) ((bruijn ##.k.1798 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k546, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k544(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1799 0 0) ((close _V10_Doptimize__apply_D587_k545) (##inline ##vcore.cdr (bruijn ##.expr.205.692 2 0))) ((bruijn ##.k.1798 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k545, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k543(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.205.692 1 0)) ((bruijn ##.equal?.282 14 34) (close _V10_Doptimize__apply_D587_k544) 'if (##inline ##vcore.car (bruijn ##.expr.205.692 1 0))) ((bruijn ##.k.1798 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k544, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k559(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1786 0 0) (bruijn ##.k.1779 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__apply_D587_k562(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 22 3) (bruijn ##.k.1787 4 0) (##inline ##vcore.car (bruijn ##.expr.212.707 5 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 3)), 2,
      upenv->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)));
}
static void _V10_Doptimize__apply_D587_k561(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.292 23 9) (close _V10_Doptimize__apply_D587_k562) (bruijn ##.ref-table.589 21 5) (bruijn ##.acount.709 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 9)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k562, env)}),
      VGetArg(upenv, 21-1, 5),
      upenv->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_k560(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D587_k561) (bruijn ##.dummy.224.711 1 2) (bruijn ##.x.1790 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k561, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D587_lambda218(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.293 22 10) (bruijn ##.k.1791 0 0) (##inline ##vcore.car (bruijn ##.expr.211.705 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        upenv->up->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D587_k563(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.1792 1 0) (bruijn ##.apure.710 2 1) (bruijn ##.apure.223.713 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Doptimize__apply_D587_lambda219(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda219, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D587_k563) (bruijn ##.acount.709 1 0) (bruijn ##.acount.222.712 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k563, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D587_lambda217(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k560) (close _V10_Doptimize__apply_D587_lambda218) (close _V10_Doptimize__apply_D587_lambda219)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k560, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda218, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda219, env)}));
    }
}
static void _V10_Doptimize__apply_D587_k558(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.212.707 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.212.707 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k559) (close _V10_Doptimize__apply_D587_lambda217) (bruijn ##.kk.198.685 15 1)) ((bruijn ##.k.1779 4 0) #f)) ((bruijn ##.k.1779 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k559, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda217, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k557(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.211.705 0 0)) ((close _V10_Doptimize__apply_D587_k558) (##inline ##vcore.cdr (bruijn ##.expr.211.705 0 0))) ((bruijn ##.k.1779 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k558, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k556(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.210.704 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.210.704 0 0))) ((close _V10_Doptimize__apply_D587_k557) (##inline ##vcore.cdr (bruijn ##.expr.210.704 0 0))) ((bruijn ##.k.1779 2 0) #f)) ((bruijn ##.k.1779 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k557, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k555(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1780 0 0) ((close _V10_Doptimize__apply_D587_k556) (##inline ##vcore.cdr (bruijn ##.expr.209.703 2 0))) ((bruijn ##.k.1779 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k556, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k554(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.209.703 1 0)) ((bruijn ##.equal?.282 16 34) (close _V10_Doptimize__apply_D587_k555) 'if (##inline ##vcore.car (bruijn ##.expr.209.703 1 0))) ((bruijn ##.k.1779 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k555, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k570(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1769 0 0) (bruijn ##.k.1763 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__apply_D587_k572(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1770 2 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.214.715 5 0)) (##inline ##vcore.cons (bruijn ##.x.1773 1 0) (##inline ##vcore.cons (bruijn ##.x.1775 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(upenv, 5-1, 0)),
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
static void _V10_Doptimize__apply_D587_k571(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.587 21 3) (close _V10_Doptimize__apply_D587_k572) (##inline ##vcore.car (bruijn ##.expr.216.719 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k572, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Doptimize__apply_D587_lambda221(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.587 20 3) (close _V10_Doptimize__apply_D587_k571) (##inline ##vcore.car (bruijn ##.expr.215.717 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k571, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Doptimize__apply_D587_k569(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.216.719 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.216.719 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k570) (close _V10_Doptimize__apply_D587_lambda221) (bruijn ##.kk.198.685 17 1)) ((bruijn ##.k.1763 4 0) #f)) ((bruijn ##.k.1763 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k570, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda221, env)}),
      VGetArg(upenv, 17-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k568(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.215.717 0 0)) ((close _V10_Doptimize__apply_D587_k569) (##inline ##vcore.cdr (bruijn ##.expr.215.717 0 0))) ((bruijn ##.k.1763 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k569, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k567(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.214.715 0 0)) ((close _V10_Doptimize__apply_D587_k568) (##inline ##vcore.cdr (bruijn ##.expr.214.715 0 0))) ((bruijn ##.k.1763 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k568, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k566(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1764 0 0) ((close _V10_Doptimize__apply_D587_k567) (##inline ##vcore.cdr (bruijn ##.expr.213.714 2 0))) ((bruijn ##.k.1763 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k567, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k565(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.213.714 1 0)) ((bruijn ##.equal?.282 18 34) (close _V10_Doptimize__apply_D587_k566) 'if (##inline ##vcore.car (bruijn ##.expr.213.714 1 0))) ((bruijn ##.k.1763 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k566, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k579(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1747 0 0) (bruijn ##.k.1745 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Doptimize__apply_D587_k581(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1761 0 0) ((bruijn ##.lookup-inline-name.266 27 18) (bruijn ##.k.1760 1 0) (bruijn ##.f.722 6 0)) ((bruijn ##.k.1760 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 18)), 2,
      upenv->vars[0],
      VGetArg(upenv, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k580(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.inlining?.583 24 2) ((bruijn ##.symbol?.267 26 19) (close _V10_Doptimize__apply_D587_k581) (bruijn ##.f.722 5 0)) ((bruijn ##.k.1760 0 0) #f))
if(VDecodeBool(
VGetArg(upenv, 24-1, 2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 19)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k581, env)}),
      VGetArg(upenv, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k584(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 25 3) (bruijn ##.k.1748 3 0) (##inline ##vcore.cons (bruijn ##.x.1751 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##inline (##inline ##vcore.cons (bruijn ##.f.722 7 0) (bruijn ##.x.1755 0 0))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 3)), 2,
      upenv->up->up->vars[0],
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
static void _V10_Doptimize__apply_D587_k583(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 27 15) (close _V10_Doptimize__apply_D587_k584) (bruijn ##.optimize-atom.588 24 4) (bruijn ##.xs.725 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k584, env)}),
      VGetArg(upenv, 24-1, 4),
      upenv->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_k588(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.265 30 17) (bruijn ##.k.1748 5 0) (bruijn ##.x.1756 3 0) (bruijn ##.x.1757 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 17)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Doptimize__apply_D587_k587(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.265 29 17) (close _V10_Doptimize__apply_D587_k588) (bruijn ##.x.1758 1 0) (bruijn ##.x.1759 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k588, env)}),
      upenv->vars[0],
      _var0);
}
static void _V10_Doptimize__apply_D587_k586(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 28 15) (close _V10_Doptimize__apply_D587_k587) (bruijn ##.optimize-atom.588 25 4) (bruijn ##.xs.725 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k587, env)}),
      VGetArg(upenv, 25-1, 4),
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_k585(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.588 24 4) (close _V10_Doptimize__apply_D587_k586) (bruijn ##.k.724 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k586, env)}),
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_k582(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1749 0 0) ((bruijn ##.optimize-atom.588 23 4) (close _V10_Doptimize__apply_D587_k583) (bruijn ##.k.724 3 0)) ((bruijn ##.optimize-atom.588 23 4) (close _V10_Doptimize__apply_D587_k585) (bruijn ##.f.722 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k583, env)}),
      upenv->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 4)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k585, env)}),
      VGetArg(upenv, 5-1, 0));
}
}
static void _V10_Doptimize__apply_D587_lambda223(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k580) (close _V10_Doptimize__apply_D587_k582))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k580, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k582, env)}));
}
static void _V10_Doptimize__apply_D587_k578(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__apply_D587_k579) (close _V10_Doptimize__apply_D587_lambda223) (bruijn ##.kk.198.685 19 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k579, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda223, env)}),
      VGetArg(upenv, 19-1, 1));
}
static void _V10_Doptimize__apply_D587_k577(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k578) (##inline ##vcore.cdr (bruijn ##.expr.218.723 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k578, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
}
static void _V10_Doptimize__apply_D587_k576(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.218.723 0 0)) ((close _V10_Doptimize__apply_D587_k577) (##inline ##vcore.car (bruijn ##.expr.218.723 0 0))) ((bruijn ##.k.1745 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k577, .env = env }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_k575(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k576) (##inline ##vcore.cdr (bruijn ##.expr.217.721 2 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k576, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
}
static void _V10_Doptimize__apply_D587_k574(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.217.721 1 0)) ((close _V10_Doptimize__apply_D587_k575) (##inline ##vcore.car (bruijn ##.expr.217.721 1 0))) ((bruijn ##.k.1745 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k575, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D587_lambda224(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.264 21 16) (bruijn ##.k.1743 0 0) (##string ##.string.2003) (bruijn ##.expr.684 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 16)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2003.sym, VPOINTER_OTHER),
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Doptimize__apply_D587_k589(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1735 15 0) (close _V10_Doptimize__apply_D587_lambda224) (bruijn ##.kk.198.685 15 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 15-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda224, env)}),
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Doptimize__apply_D587_lambda222(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k574) (close _V10_Doptimize__apply_D587_k589))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k574, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k589, env)}));
}
static void _V10_Doptimize__apply_D587_k573(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda222) (bruijn ##.input.199.686 12 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda222, .env = env }, }, 1,
      VGetArg(upenv, 12-1, 0));
}
static void _V10_Doptimize__apply_D587_lambda220(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k565) (close _V10_Doptimize__apply_D587_k573))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k565, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k573, env)}));
}
static void _V10_Doptimize__apply_D587_k564(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda220) (bruijn ##.input.199.686 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda220, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Doptimize__apply_D587_lambda216(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k554) (close _V10_Doptimize__apply_D587_k564))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k554, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k564, env)}));
}
static void _V10_Doptimize__apply_D587_k553(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda216) (bruijn ##.input.199.686 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda216, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Doptimize__apply_D587_lambda212(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k543) (close _V10_Doptimize__apply_D587_k553))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k543, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k553, env)}));
}
static void _V10_Doptimize__apply_D587_k542(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda212) (bruijn ##.input.199.686 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda212, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Doptimize__apply_D587_lambda210(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k539) (close _V10_Doptimize__apply_D587_k542))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k539, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k542, env)}));
}
static void _V10_Doptimize__apply_D587_k538(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda210) (bruijn ##.input.199.686 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda210, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_lambda208(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k534) (close _V10_Doptimize__apply_D587_k538))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k534, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k538, env)}));
}
static void _V10_Doptimize__apply_D587_k533(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda208) (bruijn ##.input.199.686 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda208, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__apply_D587_lambda206(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_k529) (close _V10_Doptimize__apply_D587_k533))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_k529, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_k533, env)}));
}
static void _V10_Doptimize__apply_D587_lambda205(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D587_lambda206) (bruijn ##.input.199.686 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda206, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__apply_D587_lambda204(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda204, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__apply_D587_lambda205) (bruijn ##.expr.684 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D587_lambda205, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Doptimize__apply_D587_lambda203(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D587_lambda203, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1734 0 0) (close _V10_Doptimize__apply_D587_lambda204))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda204, env)}));
}
static void _V10_Doptimize__atom_D588_k592(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1906 0 0) (bruijn ##.k.1904 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda229(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1907 0 0) (bruijn ##.expr.726 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 1));
}
static void _V10_Doptimize__atom_D588_k591(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1905 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k592) (close _V10_Doptimize__atom_D588_lambda229) (bruijn ##.kk.225.727 4 1)) ((bruijn ##.k.1904 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k592, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda229, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k590(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.227.729 1 0)) ((bruijn ##.equal?.282 8 34) (close _V10_Doptimize__atom_D588_k591) 'quote (##inline ##vcore.car (bruijn ##.expr.227.729 1 0))) ((bruijn ##.k.1904 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k591, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k596(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1900 0 0) (bruijn ##.k.1898 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda231(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1901 0 0) (bruijn ##.expr.726 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 8-1, 1));
}
static void _V10_Doptimize__atom_D588_k595(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1899 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k596) (close _V10_Doptimize__atom_D588_lambda231) (bruijn ##.kk.225.727 6 1)) ((bruijn ##.k.1898 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k596, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda231, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k594(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.228.730 1 0)) ((bruijn ##.equal?.282 10 34) (close _V10_Doptimize__atom_D588_k595) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.228.730 1 0))) ((bruijn ##.k.1898 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k595, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k600(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1894 0 0) (bruijn ##.k.1892 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda233(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1895 0 0) (bruijn ##.expr.726 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Doptimize__atom_D588_k599(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1893 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k600) (close _V10_Doptimize__atom_D588_lambda233) (bruijn ##.kk.225.727 8 1)) ((bruijn ##.k.1892 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k600, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda233, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k598(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.229.731 1 0)) ((bruijn ##.equal?.282 12 34) (close _V10_Doptimize__atom_D588_k599) '##inline (##inline ##vcore.car (bruijn ##.expr.229.731 1 0))) ((bruijn ##.k.1892 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k599, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k604(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1888 0 0) (bruijn ##.k.1886 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda235(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.584 13 0) (bruijn ##.k.1889 0 0) (bruijn ##.expr.726 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      _var0,
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Doptimize__atom_D588_k603(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1887 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k604) (close _V10_Doptimize__atom_D588_lambda235) (bruijn ##.kk.225.727 10 1)) ((bruijn ##.k.1886 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k604, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda235, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k602(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.230.732 1 0)) ((bruijn ##.equal?.282 14 34) (close _V10_Doptimize__atom_D588_k603) 'lambda (##inline ##vcore.car (bruijn ##.expr.230.732 1 0))) ((bruijn ##.k.1886 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k603, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k608(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1882 0 0) (bruijn ##.k.1880 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda237(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.584 15 0) (bruijn ##.k.1883 0 0) (bruijn ##.expr.726 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      _var0,
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Doptimize__atom_D588_k607(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1881 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k608) (close _V10_Doptimize__atom_D588_lambda237) (bruijn ##.kk.225.727 12 1)) ((bruijn ##.k.1880 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k608, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda237, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k606(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.231.733 1 0)) ((bruijn ##.equal?.282 16 34) (close _V10_Doptimize__atom_D588_k607) 'continuation (##inline ##vcore.car (bruijn ##.expr.231.733 1 0))) ((bruijn ##.k.1880 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k607, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D737_k614(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.236.736 5 1) (bruijn ##.k.1866 2 0) (bruijn ##.expr.238.738 3 1) (bruijn ##.x.1867 1 0) (bruijn ##.x.1868 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D737_k613(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 25 14) (close _V10_Dloop_D737_k614) (bruijn ##.body.235.740 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k614, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D737_k612(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.238.738 1 1))) ((bruijn ##.reverse.262 24 14) (close _V10_Dloop_D737_k613) (bruijn ##.args.234.739 1 2)) ((bruijn ##.k.1866 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k613, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D737_k618(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.240.744 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.240.744 0 0))) ((bruijn ##.kk.237.741 3 1) (bruijn ##.k.1858 1 0) (##inline ##vcore.cdr (bruijn ##.expr.238.738 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.239.742 2 0)) (bruijn ##.args.234.739 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.240.744 0 0)) (bruijn ##.body.235.740 6 3))) ((bruijn ##.k.1858 1 0) #f)) ((bruijn ##.k.1858 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D737_k617(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.239.742 1 0)) ((close _V10_Dloop_D737_k618) (##inline ##vcore.cdr (bruijn ##.expr.239.742 1 0))) ((bruijn ##.k.1858 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D737_k618, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D737_k621(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.236.736 9 1) (bruijn ##.k.1853 4 0) (bruijn ##.expr.238.738 7 1) (bruijn ##.x.1855 1 0) (bruijn ##.x.1856 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D737_k620(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 29 14) (close _V10_Dloop_D737_k621) (bruijn ##.body.235.740 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k621, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D737_k619(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.262 28 14) (close _V10_Dloop_D737_k620) (bruijn ##.args.234.739 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 14)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k620, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D737_k616(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D737_k617) (close _V10_Dloop_D737_k619))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D737_k617, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k619, env)}));
}
static void _V10_Dloop_D737_lambda243(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_lambda243, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D737_k616) (##inline ##vcore.car (bruijn ##.expr.238.738 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D737_k616, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D737_lambda242(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_lambda242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1852 0 0) (close _V10_Dloop_D737_lambda243))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_lambda243, env)}));
}
static void _V10_Dloop_D737_k615(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1850 1 0) (close _V10_Dloop_D737_lambda242) (bruijn ##.loop.737 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_lambda242, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D737_lambda241(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D737_lambda241, got ~D~N"
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
  // ((close _V10_Dloop_D737_k612) (close _V10_Dloop_D737_k615))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D737_k612, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_k615, env)}));
}
static void _V10_Doptimize__atom_D588_lambda240(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda240, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D737_lambda241)) ((bruijn ##.loop.737 0 0) (bruijn ##.k.1849 1 0) (##inline ##vcore.cdr (bruijn ##.expr.232.734 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D737_lambda241, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__atom_D588_lambda239(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1848 0 0) (close _V10_Doptimize__atom_D588_lambda240))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda240, env)}));
}
static void _V10_Doptimize__atom_D588_k622(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1872 0 0) (bruijn ##.k.1870 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Doptimize__atom_D588_k623(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1873 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.1874 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Doptimize__atom_D588_k624(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1875 1 0) (##inline ##vcore.cons (bruijn ##.args.749 1 1) (##inline ##vcore.cons (bruijn ##.x.1877 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        upenv->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Doptimize__atom_D588_lambda246(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda246, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.optimize-apply.587 19 3) (close _V10_Doptimize__atom_D588_k624) (bruijn ##.body.750 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 3)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k624, env)}),
      _var2);
}
static void _V10_Doptimize__atom_D588_lambda245(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.263 21 15) (close _V10_Doptimize__atom_D588_k623) (close _V10_Doptimize__atom_D588_lambda246) (bruijn ##.args.747 1 2) (bruijn ##.body.748 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 15)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k623, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda246, env)}),
      upenv->vars[2],
      upenv->vars[3]);
}
static void _V10_Doptimize__atom_D588_lambda244(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda244, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.746 0 1)) (##vcore.call-with-values (close _V10_Doptimize__atom_D588_k622) (close _V10_Doptimize__atom_D588_lambda245) (bruijn ##.kk.225.727 15 1)) ((bruijn ##.k.1870 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k622, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda245, env)}),
      VGetArg(upenv, 15-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k611(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1847 0 0) (##vcore.call-with-values (bruijn ##.k.1846 1 0) (close _V10_Doptimize__atom_D588_lambda239) (close _V10_Doptimize__atom_D588_lambda244)) ((bruijn ##.k.1846 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda239, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda244, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_k610(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.232.734 1 0)) ((bruijn ##.equal?.282 18 34) (close _V10_Doptimize__atom_D588_k611) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.232.734 1 0))) ((bruijn ##.k.1846 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k611, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D588_lambda247(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1844 0 0) (bruijn ##.expr.726 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Doptimize__atom_D588_k625(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1837 13 0) (close _V10_Doptimize__atom_D588_lambda247) (bruijn ##.kk.225.727 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda247, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Doptimize__atom_D588_lambda238(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k610) (close _V10_Doptimize__atom_D588_k625))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k610, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k625, env)}));
}
static void _V10_Doptimize__atom_D588_k609(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda238) (bruijn ##.input.226.728 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda238, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Doptimize__atom_D588_lambda236(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k606) (close _V10_Doptimize__atom_D588_k609))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k606, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k609, env)}));
}
static void _V10_Doptimize__atom_D588_k605(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda236) (bruijn ##.input.226.728 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda236, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Doptimize__atom_D588_lambda234(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k602) (close _V10_Doptimize__atom_D588_k605))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k602, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k605, env)}));
}
static void _V10_Doptimize__atom_D588_k601(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda234) (bruijn ##.input.226.728 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda234, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Doptimize__atom_D588_lambda232(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k598) (close _V10_Doptimize__atom_D588_k601))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k598, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k601, env)}));
}
static void _V10_Doptimize__atom_D588_k597(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda232) (bruijn ##.input.226.728 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda232, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda230(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k594) (close _V10_Doptimize__atom_D588_k597))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k594, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k597, env)}));
}
static void _V10_Doptimize__atom_D588_k593(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda230) (bruijn ##.input.226.728 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda230, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__atom_D588_lambda228(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_k590) (close _V10_Doptimize__atom_D588_k593))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_k590, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_k593, env)}));
}
static void _V10_Doptimize__atom_D588_lambda227(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D588_lambda228) (bruijn ##.input.226.728 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda228, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__atom_D588_lambda226(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda226, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__atom_D588_lambda227) (bruijn ##.expr.726 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D588_lambda227, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Doptimize__atom_D588_lambda225(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D588_lambda225, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1836 0 0) (close _V10_Doptimize__atom_D588_lambda226))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda226, env)}));
}
static void _V10_Doptimize__impl_D294_k630(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1949 0 0) (bruijn ##.k.1947 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda251(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1950 0 0) (bruijn ##.expr.582 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Doptimize__impl_D294_k629(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1948 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k630) (close _V10_Doptimize__impl_D294_lambda251) (bruijn ##.kk.133.753 4 1)) ((bruijn ##.k.1947 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k630, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda251, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k628(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.135.755 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Doptimize__impl_D294_k629) 'quote (##inline ##vcore.car (bruijn ##.expr.135.755 1 0))) ((bruijn ##.k.1947 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k629, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k634(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1943 0 0) (bruijn ##.k.1941 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda253(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1944 0 0) (bruijn ##.expr.582 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 11-1, 1));
}
static void _V10_Doptimize__impl_D294_k633(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1942 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k634) (close _V10_Doptimize__impl_D294_lambda253) (bruijn ##.kk.133.753 6 1)) ((bruijn ##.k.1941 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k634, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda253, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k632(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.756 1 0)) ((bruijn ##.equal?.282 11 34) (close _V10_Doptimize__impl_D294_k633) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.136.756 1 0))) ((bruijn ##.k.1941 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k633, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k638(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1937 0 0) (bruijn ##.k.1935 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda255(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1938 0 0) (bruijn ##.expr.582 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Doptimize__impl_D294_k637(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1936 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k638) (close _V10_Doptimize__impl_D294_lambda255) (bruijn ##.kk.133.753 8 1)) ((bruijn ##.k.1935 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k638, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda255, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k636(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.757 1 0)) ((bruijn ##.equal?.282 13 34) (close _V10_Doptimize__impl_D294_k637) '##inline (##inline ##vcore.car (bruijn ##.expr.137.757 1 0))) ((bruijn ##.k.1935 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k637, env)}),
      _V10inline,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k642(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1931 0 0) (bruijn ##.k.1929 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda257(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.584 14 0) (bruijn ##.k.1932 0 0) (bruijn ##.expr.582 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      _var0,
      VGetArg(upenv, 15-1, 1));
}
static void _V10_Doptimize__impl_D294_k641(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1930 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k642) (close _V10_Doptimize__impl_D294_lambda257) (bruijn ##.kk.133.753 10 1)) ((bruijn ##.k.1929 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k642, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda257, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k640(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.758 1 0)) ((bruijn ##.equal?.282 15 34) (close _V10_Doptimize__impl_D294_k641) 'lambda (##inline ##vcore.car (bruijn ##.expr.138.758 1 0))) ((bruijn ##.k.1929 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k641, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k646(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1925 0 0) (bruijn ##.k.1923 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda259(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.584 16 0) (bruijn ##.k.1926 0 0) (bruijn ##.expr.582 17 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      _var0,
      VGetArg(upenv, 17-1, 1));
}
static void _V10_Doptimize__impl_D294_k645(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1924 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k646) (close _V10_Doptimize__impl_D294_lambda259) (bruijn ##.kk.133.753 12 1)) ((bruijn ##.k.1923 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k646, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda259, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k644(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.139.759 1 0)) ((bruijn ##.equal?.282 17 34) (close _V10_Doptimize__impl_D294_k645) 'continuation (##inline ##vcore.car (bruijn ##.expr.139.759 1 0))) ((bruijn ##.k.1923 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k645, env)}),
      _V0continuation,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_k649(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1920 0 0) (bruijn ##.k.1919 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda261(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.587 17 3) (bruijn ##.k.1921 0 0) (bruijn ##.expr.582 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 3)), 2,
      _var0,
      VGetArg(upenv, 18-1, 1));
}
static void _V10_Doptimize__impl_D294_k648(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.760 1 0)) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k649) (close _V10_Doptimize__impl_D294_lambda261) (bruijn ##.kk.133.753 13 1)) ((bruijn ##.k.1919 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k649, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda261, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D294_lambda262(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1917 0 0) (bruijn ##.expr.582 18 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 18-1, 1));
}
static void _V10_Doptimize__impl_D294_k650(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1910 13 0) (close _V10_Doptimize__impl_D294_lambda262) (bruijn ##.kk.133.753 13 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 13-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda262, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Doptimize__impl_D294_lambda260(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k648) (close _V10_Doptimize__impl_D294_k650))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k648, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k650, env)}));
}
static void _V10_Doptimize__impl_D294_k647(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda260) (bruijn ##.input.134.754 10 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda260, .env = env }, }, 1,
      VGetArg(upenv, 10-1, 0));
}
static void _V10_Doptimize__impl_D294_lambda258(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k644) (close _V10_Doptimize__impl_D294_k647))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k644, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k647, env)}));
}
static void _V10_Doptimize__impl_D294_k643(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda258) (bruijn ##.input.134.754 8 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda258, .env = env }, }, 1,
      VGetArg(upenv, 8-1, 0));
}
static void _V10_Doptimize__impl_D294_lambda256(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k640) (close _V10_Doptimize__impl_D294_k643))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k640, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k643, env)}));
}
static void _V10_Doptimize__impl_D294_k639(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda256) (bruijn ##.input.134.754 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda256, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Doptimize__impl_D294_lambda254(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k636) (close _V10_Doptimize__impl_D294_k639))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k636, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k639, env)}));
}
static void _V10_Doptimize__impl_D294_k635(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda254) (bruijn ##.input.134.754 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda254, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda252(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k632) (close _V10_Doptimize__impl_D294_k635))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k632, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k635, env)}));
}
static void _V10_Doptimize__impl_D294_k631(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda252) (bruijn ##.input.134.754 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda252, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize__impl_D294_lambda250(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_k628) (close _V10_Doptimize__impl_D294_k631))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_k628, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k631, env)}));
}
static void _V10_Doptimize__impl_D294_lambda249(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D294_lambda250) (bruijn ##.input.134.754 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda250, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize__impl_D294_lambda248(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda248, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize__impl_D294_lambda249) (bruijn ##.expr.582 4 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D294_lambda249, .env = env }, }, 1,
      upenv->up->up->up->vars[1]);
}
static void _V10_Doptimize__impl_D294_k627(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1500 3 0) (close _V10_Doptimize__impl_D294_lambda248))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->up->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda248, env)}));
}
static void _V10_Doptimize__impl_D294_k626(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Doptimize__impl_D294_k627) (bruijn ##.dummy.132.591 1 7) (bruijn ##.x.1952 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k627, env)}),
      VEncodeInt(1l), VEncodeInt(7l),
      _var0
    );
}
static void _V10_Doptimize__impl_D294_lambda263(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.293 3 10) (bruijn ##.k.1953 0 0) (bruijn ##.expr.582 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[10]), 2,
      _var0,
      upenv->up->vars[1]);
}
static void _V10_Doptimize__impl_D294_k651(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.1954 1 0) (bruijn ##.impure-table.590 2 6) (bruijn ##.impure-table.131.752 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(6l),
      upenv->vars[2]
    );
}
static void _V10_Doptimize__impl_D294_lambda264(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda264, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Doptimize__impl_D294_k651) (bruijn ##.ref-table.589 1 5) (bruijn ##.ref-table.130.751 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k651, env)}),
      VEncodeInt(1l), VEncodeInt(5l),
      _var1
    );
}
static void _V10_Doptimize__impl_D294_lambda152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D294_lambda152, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 8 ((close _V10_Doptimize__lambda_D584_lambda153) (close _V10_Doptimize__let_D585_lambda159) (close _V10_Doptimize__letrec_D586_lambda192) (close _V10_Doptimize__apply_D587_lambda203) (close _V10_Doptimize__atom_D588_lambda225) #f #f #f) (##vcore.call-with-values (close _V10_Doptimize__impl_D294_k626) (close _V10_Doptimize__impl_D294_lambda263) (close _V10_Doptimize__impl_D294_lambda264)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[8]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 8, 8, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D584_lambda153, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D585_lambda159, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D586_lambda192, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D587_lambda203, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D588_lambda225, env)});
    env->vars[5] = VEncodeBool(false);
    env->vars[6] = VEncodeBool(false);
    env->vars[7] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_k626, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda263, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda264, env)}));
    }
}
static void _V10_Doptimize_D295_k654(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1977 0 0) (bruijn ##.k.1975 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize_D295_lambda270(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_lambda270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1978 0 0) (bruijn ##.expr.763 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Doptimize_D295_k653(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1976 0 0) (##vcore.call-with-values (close _V10_Doptimize_D295_k654) (close _V10_Doptimize_D295_lambda270) (bruijn ##.kk.241.764 4 1)) ((bruijn ##.k.1975 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k654, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_lambda270, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_k652(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.243.766 1 0)) ((bruijn ##.equal?.282 7 34) (close _V10_Doptimize_D295_k653) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.243.766 1 0))) ((bruijn ##.k.1975 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k653, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_k660(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1967 0 0) (bruijn ##.k.1962 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Doptimize_D295_k661(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1968 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.245.768 3 0)) (##inline ##vcore.cons (bruijn ##.x.1971 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize_D295_lambda272(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_lambda272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.optimize-impl.294 12 11) (close _V10_Doptimize_D295_k661) (##inline ##vcore.car (bruijn ##.expr.246.770 1 0)) (bruijn ##.inlining?.762 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 11)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k661, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]),
      VGetArg(upenv, 11-1, 2));
}
static void _V10_Doptimize_D295_k659(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.246.770 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.246.770 0 0))) (##vcore.call-with-values (close _V10_Doptimize_D295_k660) (close _V10_Doptimize_D295_lambda272) (bruijn ##.kk.241.764 8 1)) ((bruijn ##.k.1962 3 0) #f)) ((bruijn ##.k.1962 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k660, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_lambda272, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_k658(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.245.768 0 0)) ((close _V10_Doptimize_D295_k659) (##inline ##vcore.cdr (bruijn ##.expr.245.768 0 0))) ((bruijn ##.k.1962 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_k659, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_k657(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.1963 0 0) ((close _V10_Doptimize_D295_k658) (##inline ##vcore.cdr (bruijn ##.expr.244.767 2 0))) ((bruijn ##.k.1962 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_k658, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_k656(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.244.767 1 0)) ((bruijn ##.equal?.282 9 34) (close _V10_Doptimize_D295_k657) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.244.767 1 0))) ((bruijn ##.k.1962 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 34)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k657, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D295_lambda273(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_lambda273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-impl.294 9 11) (bruijn ##.k.1960 0 0) (bruijn ##.expr.763 7 0) (bruijn ##.inlining?.762 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 11)), 3,
      _var0,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 8-1, 2));
}
static void _V10_Doptimize_D295_k662(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1957 5 0) (close _V10_Doptimize_D295_lambda273) (bruijn ##.kk.241.764 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 5-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_lambda273, env)}),
      VGetArg(upenv, 5-1, 1));
}
static void _V10_Doptimize_D295_lambda271(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D295_k656) (close _V10_Doptimize_D295_k662))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_k656, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k662, env)}));
}
static void _V10_Doptimize_D295_k655(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D295_lambda271) (bruijn ##.input.242.765 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_lambda271, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Doptimize_D295_lambda269(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D295_k652) (close _V10_Doptimize_D295_k655))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_k652, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_k655, env)}));
}
static void _V10_Doptimize_D295_lambda268(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Doptimize_D295_lambda269) (bruijn ##.input.242.765 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_lambda269, .env = env }, }, 1,
      _var0);
}
static void _V10_Doptimize_D295_lambda267(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_lambda267, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Doptimize_D295_lambda268) (bruijn ##.expr.763 1 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_lambda268, .env = env }, }, 1,
      upenv->vars[0]);
}
static void _V10_Doptimize_D295_lambda266(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1956 1 0) (close _V10_Doptimize_D295_lambda267))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_lambda267, env)}));
}
static void _V10_Doptimize_D295_lambda265(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D295_lambda265, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((close _V10_Doptimize_D295_lambda266) (bruijn ##.expr.761 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D295_lambda266, .env = env }, }, 1,
      _var1);
}
static void _V0vanity_V0compiler_V0cps_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29, VWORD _var30, VWORD _var31, VWORD _var32, VWORD _var33, VWORD _var34) {
  struct { VEnv env; VWORD argv[35]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 35, 35, upenv);
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
  // (letrec 13 ((close _V10_Dapplication_Q_D283_lambda3) (close _V10_Dcombination_Q_D284_lambda4) (close _V10_Dto__cps_D285_lambda5) (close _V10_Dsubstitute_D286_lambda64) (close _V10_Dspecial__apply_Q_D287_lambda98) (close _V10_Dtaillength_D288_lambda99) (close _V10_Dadd__ref_B_D289_lambda101) (close _V10_Dsub__ref_B_D290_lambda103) (close _V10_Dadd__refs_B_D291_lambda105) (close _V10_Dsub__refs_B_D292_lambda107) (close _V10_Dcount__refs_D293_lambda109) (close _V10_Doptimize__impl_D294_lambda152) (close _V10_Doptimize_D295_lambda265)) ((bruijn ##.k.773 45 0) (##inline ##vcore.cons (##inline ##vcore.cons 'to-cps (bruijn ##.to-cps.285 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'optimize (bruijn ##.optimize.295 0 12)) '()))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[13]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 13, 13, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D283_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D284_lambda4, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D285_lambda5, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D286_lambda64, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dspecial__apply_Q_D287_lambda98, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtaillength_D288_lambda99, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D289_lambda101, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D290_lambda103, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D291_lambda105, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D292_lambda107, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D293_lambda109, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D294_lambda152, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D295_lambda265, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 45-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0to__cps,
        env->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0optimize,
        env->vars[12]),
        VNULL)));
    }
}
static void _V0vanity_V0compiler_V0cps_V20_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0cps_V20_lambda2) (bruijn ##.x.774 34 0) (bruijn ##.x.775 33 0) (bruijn ##.x.776 32 0) (bruijn ##.x.777 31 0) (bruijn ##.x.778 30 0) (bruijn ##.x.779 29 0) (bruijn ##.x.780 28 0) (bruijn ##.x.781 27 0) (bruijn ##.x.782 26 0) (bruijn ##.x.783 25 0) (bruijn ##.x.784 24 0) (bruijn ##.x.785 23 0) (bruijn ##.x.786 22 0) (bruijn ##.x.787 21 0) (bruijn ##.x.788 20 0) (bruijn ##.x.789 19 0) (bruijn ##.x.790 18 0) (bruijn ##.x.791 17 0) (bruijn ##.x.792 16 0) (bruijn ##.x.793 15 0) (bruijn ##.x.794 14 0) (bruijn ##.x.795 13 0) (bruijn ##.x.796 12 0) (bruijn ##.x.797 11 0) (bruijn ##.x.798 10 0) (bruijn ##.x.799 9 0) (bruijn ##.x.800 8 0) (bruijn ##.x.801 7 0) (bruijn ##.x.802 6 0) (bruijn ##.x.803 5 0) (bruijn ##.x.804 4 0) (bruijn ##.x.805 3 0) (bruijn ##.x.806 2 0) (bruijn ##.x.807 1 0) (bruijn ##.x.808 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda2, .env = env }, }, 35,
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
static void _V0vanity_V0compiler_V0cps_V20_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 34 0) (close _V0vanity_V0compiler_V0cps_V20_k43) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 34-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k43, env)}),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 33 0) (close _V0vanity_V0compiler_V0cps_V20_k42) 'hash-table-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 33-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k42, env)}),
      _V0hash__table__set_B);
}
static void _V0vanity_V0compiler_V0cps_V20_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 32 0) (close _V0vanity_V0compiler_V0cps_V20_k41) '-)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 32-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k41, env)}),
      _V0__);
}
static void _V0vanity_V0compiler_V0cps_V20_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 31 0) (close _V0vanity_V0compiler_V0cps_V20_k40) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 31-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k40, env)}),
      _V0car);
}
static void _V0vanity_V0compiler_V0cps_V20_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 30 0) (close _V0vanity_V0compiler_V0cps_V20_k39) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 30-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k39, env)}),
      _V0memv);
}
static void _V0vanity_V0compiler_V0cps_V20_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 29 0) (close _V0vanity_V0compiler_V0cps_V20_k38) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 29-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k38, env)}),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 28 0) (close _V0vanity_V0compiler_V0cps_V20_k37) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k37, env)}),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 27 0) (close _V0vanity_V0compiler_V0cps_V20_k36) 'eqv?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k36, env)}),
      _V0eqv_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 26 0) (close _V0vanity_V0compiler_V0cps_V20_k35) 'hash-table-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, env)}),
      _V0hash__table__ref);
}
static void _V0vanity_V0compiler_V0cps_V20_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 25 0) (close _V0vanity_V0compiler_V0cps_V20_k34) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 25-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, env)}),
      _V0_E);
}
static void _V0vanity_V0compiler_V0cps_V20_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 24 0) (close _V0vanity_V0compiler_V0cps_V20_k33) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 24-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, env)}),
      _V0_L_E);
}
static void _V0vanity_V0compiler_V0cps_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 23 0) (close _V0vanity_V0compiler_V0cps_V20_k32) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, env)}),
      _V0length);
}
static void _V0vanity_V0compiler_V0cps_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 22 0) (close _V0vanity_V0compiler_V0cps_V20_k31) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, env)}),
      _V0not);
}
static void _V0vanity_V0compiler_V0cps_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 21 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, env)}),
      _V0list);
}
static void _V0vanity_V0compiler_V0cps_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 20 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 20-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, env)}),
      _V0error);
}
static void _V0vanity_V0compiler_V0cps_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 19 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 19-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, env)}),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 18 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, env)}),
      _V0lookup__inline__name);
}
static void _V0vanity_V0compiler_V0cps_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 17 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, env)}),
      _V0cons);
}
static void _V0vanity_V0compiler_V0cps_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 16 0) (close _V0vanity_V0compiler_V0cps_V20_k25) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, env)}),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0cps_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 15 0) (close _V0vanity_V0compiler_V0cps_V20_k24) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, env)}),
      _V0map);
}
static void _V0vanity_V0compiler_V0cps_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 14 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, env)}),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0cps_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 13 0) (close _V0vanity_V0compiler_V0cps_V20_k22) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, env)}),
      _V0values);
}
static void _V0vanity_V0compiler_V0cps_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 12 0) (close _V0vanity_V0compiler_V0cps_V20_k21) 'make-hash-table)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, env)}),
      _V0make__hash__table);
}
static void _V0vanity_V0compiler_V0cps_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 11 0) (close _V0vanity_V0compiler_V0cps_V20_k20) '+)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, env)}),
      _V0_P);
}
static void _V0vanity_V0compiler_V0cps_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 10 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, env)}),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0cps_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 9 0) (close _V0vanity_V0compiler_V0cps_V20_k18) 'hash-table->alist)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, env)}),
      _V0hash__table___Galist);
}
static void _V0vanity_V0compiler_V0cps_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 8 0) (close _V0vanity_V0compiler_V0cps_V20_k17) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, env)}),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0cps_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 7 0) (close _V0vanity_V0compiler_V0cps_V20_k16) '*)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, env)}),
      _V0_S);
}
static void _V0vanity_V0compiler_V0cps_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 6 0) (close _V0vanity_V0compiler_V0cps_V20_k15) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, env)}),
      _V0_G);
}
static void _V0vanity_V0compiler_V0cps_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 5 0) (close _V0vanity_V0compiler_V0cps_V20_k14) 'mangle-library)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, env)}),
      _V0mangle__library);
}
static void _V0vanity_V0compiler_V0cps_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 4 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, env)}),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0cps_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 3 0) (close _V0vanity_V0compiler_V0cps_V20_k12) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, env)}),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0cps_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 2 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, env)}),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 1 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'eq?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, env)}),
      _V0eq_Q);
}
static void _V0vanity_V0compiler_V0cps_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.247 0 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, env)}),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0cps_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k8) (##string ##.string.2004) (bruijn ##.x.1983 6 0) (bruijn ##.x.1984 5 0) (bruijn ##.x.1985 4 0) (bruijn ##.x.1986 3 0) (bruijn ##.x.1987 2 0) (bruijn ##.x.1988 1 0) (bruijn ##.x.1989 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, env)}),
      VEncodePointer(&_V10_Dstring_D2004.sym, VPOINTER_OTHER),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0cps_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k7) (##string ##.string.2005))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D2005.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##.string.2006))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D2006.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##.string.2007))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D2007.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##.string.2008))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D2008.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##.string.2009))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D2009.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##.string.2010))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D2010.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0cps_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0cps_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##.string.2011))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D2011.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
