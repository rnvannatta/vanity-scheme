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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2349 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D2348 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2347 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D2346 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D2345 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D2344 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D2343 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "_V0vanity_V0pretty__print_V20" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2342 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "_V0vanity_V0compiler_V0cps_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0lookup__inline__name;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0lookup__inline__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "lookup-inline-name" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0split__at__right;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0split__at__right = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "split-at-right" };
VWEAK VWORD _V0num__pairs;VWEAK struct { VBlob sym; char bytes[10]; } _VW_V0num__pairs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 10 }, "num-pairs" };
VWEAK VWORD _V0is__basic__intrinsic_Q;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0is__basic__intrinsic_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "is-basic-intrinsic\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0hash__table___Galist;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0hash__table___Galist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "hash-table->alist" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0optimize;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0optimize = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "optimize" };
VWEAK VWORD _V0to__cps;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0to__cps = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "to-cps" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2341 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-apply: malformed application" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D2340 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "reg" };
static struct { VBlob sym; char bytes[38]; } _V10_Dstring_D2339 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 38 }, "optimize-let: malformed let statement" };
static struct { VBlob sym; char bytes[51]; } _V10_Dstring_D2338 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 51 }, "Not enough arguments to continuation. Codegen bug." };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D2337 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "Not enough arguments to lambda" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2336 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "optimize-lambda: malformed lambda" };
VWEAK VWORD _V40_V10vcore_Deqv_Q;VWEAK VClosure _VW_V40_V10vcore_Deqv_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEqv, NULL };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D2335 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "count-refs: malformed application" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D2334 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "internal compiler error: negative variable refcount" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D2333 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0basic__block;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0basic__block = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "basic-block" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V10vcore_Dload__library;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dload__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.load-library" };
VWEAK VWORD _V10vcore_Dmultidefine;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V10vcore_Dmultidefine = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "##vcore.multidefine" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D2332 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "next" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2331 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "p" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D2330 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "ignored" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2329 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "x" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D2328 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D2327 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "k" };
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
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VLookupConstant("_V0hash__table__set_B", &_VW_V0hash__table__set_B), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VLookupConstant("_V0hash__table__ref", &_VW_V0hash__table__ref), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0length = VEncodePointer(VLookupConstant("_V0length", &_VW_V0length), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0lookup__inline__name = VEncodePointer(VLookupConstant("_V0lookup__inline__name", &_VW_V0lookup__inline__name), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0split__at__right = VEncodePointer(VLookupConstant("_V0split__at__right", &_VW_V0split__at__right), VPOINTER_OTHER);
  _V0num__pairs = VEncodePointer(VLookupConstant("_V0num__pairs", &_VW_V0num__pairs), VPOINTER_OTHER);
  _V0is__basic__intrinsic_Q = VEncodePointer(VLookupConstant("_V0is__basic__intrinsic_Q", &_VW_V0is__basic__intrinsic_Q), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0make__hash__table = VEncodePointer(VLookupConstant("_V0make__hash__table", &_VW_V0make__hash__table), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0hash__table___Galist = VEncodePointer(VLookupConstant("_V0hash__table___Galist", &_VW_V0hash__table___Galist), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0optimize = VEncodePointer(VLookupConstant("_V0optimize", &_VW_V0optimize), VPOINTER_OTHER);
  _V0to__cps = VEncodePointer(VLookupConstant("_V0to__cps", &_VW_V0to__cps), VPOINTER_OTHER);
  _V40_V10vcore_Deqv_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deqv_Q", &_VW_V40_V10vcore_Deqv_Q), VPOINTER_CLOSURE);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V0basic__block = VEncodePointer(VLookupConstant("_V0basic__block", &_VW_V0basic__block), VPOINTER_OTHER);
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
static void _V10_Dapplication_Q_D331_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D331_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.929 1 0) (##inline ##vcore.not (bruijn ##.x.931 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dapplication_Q_D331_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D331_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.344 0 1)) ((bruijn ##.x.904 26 0) (close _V10_Dapplication_Q_D331_k36) (##inline ##vcore.car (bruijn ##.x.344 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline '()))))))) ((bruijn ##.k.929 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D331_k36, self)})),
      VInlineCar2(runtime,
        _var1),
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcombination_Q_D332_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D332_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.939 1 0) (##inline ##vcore.not (bruijn ##.x.941 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dcombination_Q_D332_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D332_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.x.345 0 1)) ((bruijn ##.x.904 26 0) (close _V10_Dcombination_Q_D332_k37) (##inline ##vcore.car (bruijn ##.x.345 0 1)) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons '##inline (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '()))))))))))) ((bruijn ##.k.939 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D332_k37, self)})),
      VInlineCar2(runtime,
        _var1),
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
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__lambda_D354_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D354_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.955 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.357 1 0) (bruijn ##.args.355 2 1)) (##inline ##vcore.cons (bruijn ##.x.958 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        statics->up->vars[1]),
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter__lambda_D354_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D354_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 4 4) (close _V10_Diter__lambda_D354_k39) (bruijn ##.body.356 1 2) (bruijn ##.k.357 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D354_k39, self)})),
      statics->vars[2],
      _var0);
}
static void _V10_Diter__lambda_D354_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D354_lambda6, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.913 21 0) (close _V10_Diter__lambda_D354_k38) (##string ##.string.2327))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D354_k38, self)})),
      VEncodePointer(&_V10_Dstring_D2327.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D347_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1022 0 0) (bruijn ##.k.1017 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D347_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1023 1 0) (##inline ##vcore.cons 'lambda (bruijn ##.x.1024 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0lambda,
        _var0));
}
static void _V10_Diter__atom_D347_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter-lambda.354 6 0) (close _V10_Diter__atom_D347_k45) (##inline ##vcore.car (bruijn ##.expr.11.361 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.363 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k45, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter__atom_D347_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.363 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.363 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D347_k44) (close _V10_Diter__atom_D347_lambda8) (bruijn ##.kk.8.358 4 1)) ((bruijn ##.k.1017 3 0) #f)) ((bruijn ##.k.1017 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k44, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda8, self)})),
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
static void _V10_Diter__atom_D347_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.361 0 0)) ((close _V10_Diter__atom_D347_k43) (##inline ##vcore.cdr (bruijn ##.expr.11.361 0 0))) ((bruijn ##.k.1017 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k43, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1018 0 0) ((close _V10_Diter__atom_D347_k42) (##inline ##vcore.cdr (bruijn ##.x.353 4 1))) ((bruijn ##.k.1017 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k42, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.353 3 1)) ((bruijn ##.x.902 33 0) (close _V10_Diter__atom_D347_k41) 'lambda (##inline ##vcore.car (bruijn ##.x.353 3 1))) ((bruijn ##.k.1017 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k41, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D368_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.367 5 1) (bruijn ##.k.1006 2 0) (bruijn ##.expr.19.369 3 1) (bruijn ##.x.1007 1 0) (bruijn ##.x.1008 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D368_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 22 0) (close _V10_Dloop_D368_k51) (bruijn ##.body.16.371 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k51, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D368_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.19.369 1 1))) ((bruijn ##.x.921 21 0) (close _V10_Dloop_D368_k50) (bruijn ##.args.15.370 1 2)) ((bruijn ##.k.1006 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k50, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D368_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.375 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.21.375 0 0))) ((bruijn ##.kk.18.372 3 1) (bruijn ##.k.998 1 0) (##inline ##vcore.cdr (bruijn ##.expr.19.369 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.20.373 2 0)) (bruijn ##.args.15.370 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.21.375 0 0)) (bruijn ##.body.16.371 6 3))) ((bruijn ##.k.998 1 0) #f)) ((bruijn ##.k.998 1 0) #f))
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
static void _V10_Dloop_D368_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.20.373 1 0)) ((close _V10_Dloop_D368_k55) (##inline ##vcore.cdr (bruijn ##.expr.20.373 1 0))) ((bruijn ##.k.998 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D368_k55, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D368_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.17.367 9 1) (bruijn ##.k.993 4 0) (bruijn ##.expr.19.369 7 1) (bruijn ##.x.995 1 0) (bruijn ##.x.996 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D368_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 26 0) (close _V10_Dloop_D368_k58) (bruijn ##.body.16.371 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k58, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D368_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 25 0) (close _V10_Dloop_D368_k57) (bruijn ##.args.15.370 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k57, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D368_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D368_k54) (close _V10_Dloop_D368_k56))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D368_k54, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k56, self)})));
}
static void _V10_Dloop_D368_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D368_k53) (##inline ##vcore.car (bruijn ##.expr.19.369 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D368_k53, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D368_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.992 0 0) (close _V10_Dloop_D368_lambda13))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_lambda13, self)})));
}
static void _V10_Dloop_D368_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.990 1 0) (close _V10_Dloop_D368_lambda12) (bruijn ##.loop.368 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_lambda12, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D368_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D368_lambda11, got ~D~N"
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
  // ((close _V10_Dloop_D368_k49) (close _V10_Dloop_D368_k52))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D368_k49, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_k52, self)})));
}
static void _V10_Diter__atom_D347_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D368_lambda11)) ((bruijn ##.loop.368 0 0) (bruijn ##.k.989 1 0) (##inline ##vcore.cdr (bruijn ##.x.353 8 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D368_lambda11, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__atom_D347_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.988 0 0) (close _V10_Diter__atom_D347_lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda10, self)})));
}
static void _V10_Diter__atom_D347_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1012 0 0) (bruijn ##.k.1010 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D347_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1013 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.1014 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Diter__atom_D347_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 19 0) (close _V10_Diter__atom_D347_k60) (bruijn ##.iter-lambda.354 6 0) (bruijn ##.args.378 1 2) (bruijn ##.body.379 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k60, self)})),
      VGetArg(statics, 6-1, 0),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Diter__atom_D347_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda14, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.377 0 1)) (##vcore.call-with-values (close _V10_Diter__atom_D347_k59) (close _V10_Diter__atom_D347_lambda15) (bruijn ##.kk.8.358 4 1)) ((bruijn ##.k.1010 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k59, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda15, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.987 0 0) (##vcore.call-with-values (bruijn ##.k.986 1 0) (close _V10_Diter__atom_D347_lambda9) (close _V10_Diter__atom_D347_lambda14)) ((bruijn ##.k.986 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda9, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda14, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.353 4 1)) ((bruijn ##.x.902 34 0) (close _V10_Diter__atom_D347_k48) 'case-lambda (##inline ##vcore.car (bruijn ##.x.353 4 1))) ((bruijn ##.k.986 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k48, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.982 0 0) (bruijn ##.k.980 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter__atom_D347_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.983 0 0) (bruijn ##.x.353 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Diter__atom_D347_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.981 0 0) (##vcore.call-with-values (close _V10_Diter__atom_D347_k64) (close _V10_Diter__atom_D347_lambda16) (bruijn ##.kk.8.358 4 1)) ((bruijn ##.k.980 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k64, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda16, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.353 5 1)) ((bruijn ##.x.902 35 0) (close _V10_Diter__atom_D347_k63) '##foreign.function (##inline ##vcore.car (bruijn ##.x.353 5 1))) ((bruijn ##.k.980 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k63, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.975 0 0) (bruijn ##.k.971 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Diter__atom_D347_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.976 0 0) (bruijn ##.x.353 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Diter__atom_D347_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.24.382 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.24.382 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D347_k69) (close _V10_Diter__atom_D347_lambda17) (bruijn ##.kk.8.358 6 1)) ((bruijn ##.k.971 2 0) #f)) ((bruijn ##.k.971 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k69, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda17, self)})),
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
static void _V10_Diter__atom_D347_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.972 0 0) ((close _V10_Diter__atom_D347_k68) (##inline ##vcore.cdr (bruijn ##.x.353 7 1))) ((bruijn ##.k.971 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k68, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.353 6 1)) ((bruijn ##.x.902 36 0) (close _V10_Diter__atom_D347_k67) 'quote (##inline ##vcore.car (bruijn ##.x.353 6 1))) ((bruijn ##.k.971 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k67, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.968 0 0) (bruijn ##.k.967 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter__atom_D347_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 21 0) (bruijn ##.k.969 0 0) (##string ##.string.2328))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2328.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D347_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.353 7 1)) (##vcore.call-with-values (close _V10_Diter__atom_D347_k72) (close _V10_Diter__atom_D347_lambda18) (bruijn ##.kk.8.358 5 1)) ((bruijn ##.k.967 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k72, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda18, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D347_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.965 0 0) (bruijn ##.x.353 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Diter__atom_D347_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.959 5 0) (close _V10_Diter__atom_D347_lambda19) (bruijn ##.kk.8.358 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda19, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Diter__atom_D347_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D347_k71) (close _V10_Diter__atom_D347_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k71, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k73, self)})));
}
static void _V10_Diter__atom_D347_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D347_k66) (close _V10_Diter__atom_D347_k70))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k66, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k70, self)})));
}
static void _V10_Diter__atom_D347_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D347_k62) (close _V10_Diter__atom_D347_k65))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k62, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k65, self)})));
}
static void _V10_Diter__atom_D347_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter__atom_D347_k47) (close _V10_Diter__atom_D347_k61))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k47, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k61, self)})));
}
static void _V10_Diter__atom_D347_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter__atom_D347_k40) (close _V10_Diter__atom_D347_k46))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D347_k40, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_k46, self)})));
}
static void _V10_Diter__atom_D347_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D347_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter__lambda_D354_lambda6)) (##vcore.call/cc (bruijn ##.k.954 1 0) (close _V10_Diter__atom_D347_lambda7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D354_lambda6, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda7, self)})));
    }
}
static void _V10_Dloop_D387_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1028 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.args.383 4 1) (##inline ##vcore.cons (bruijn ##.x.1033 0 0) '()))) (bruijn ##.appl.390 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        statics->up->up->up->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        statics->vars[0]));
}
static void _V10_Dloop_D387_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 4 4) (close _V10_Dloop_D387_k75) (bruijn ##.body.384 3 2) (bruijn ##.k.386 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k75, self)})),
      statics->up->up->vars[2],
      statics->up->up->vars[4]);
}
static void _V10_Dloop_D387_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 6 4) (bruijn ##.k.1028 3 0) (##inline ##vcore.car (bruijn ##.vals.389 3 2)) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.391 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1040 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
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
static void _V10_Dloop_D387_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.387 3 0) (close _V10_Dloop_D387_k78) (##inline ##vcore.cons (bruijn ##.x.391 0 0) (bruijn ##.appl.388 2 1)) (##inline ##vcore.cdr (bruijn ##.vals.389 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k78, self)})),
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D387_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.387 3 0) (bruijn ##.k.1028 2 0) (##inline ##vcore.cons (bruijn ##.x.1045 0 0) (bruijn ##.appl.388 2 1)) (##inline ##vcore.cdr (bruijn ##.vals.389 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D387_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1034 0 0) ((bruijn ##.x.913 22 0) (close _V10_Dloop_D387_k77) (##string ##.string.2329)) ((bruijn ##.iter-atom.347 4 0) (close _V10_Dloop_D387_k79) (##inline ##vcore.car (bruijn ##.vals.389 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k77, self)})),
      VEncodePointer(&_V10_Dstring_D2329.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k79, self)})),
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dloop_D387_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D387_lambda21, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.vals.389 0 2)) ((bruijn ##.x.921 13 0) (close _V10_Dloop_D387_k74) (bruijn ##.appl.388 0 1)) ((bruijn ##.application?.331 5 0) (close _V10_Dloop_D387_k76) (##inline ##vcore.car (bruijn ##.vals.389 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k74, self)})),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_k76, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Diter__let_D348_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__let_D348_lambda20, got ~D~N"
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
  // (letrec 1 ((close _V10_Dloop_D387_lambda21)) ((bruijn ##.loop.387 0 0) (bruijn ##.k.1027 1 0) '() (bruijn ##.vals.385 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D387_lambda21, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[3]);
    }
}
static void _V10_Dloop_D396_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1049 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1052 1 0) (##inline ##vcore.cons (bruijn ##.x.1054 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dloop_D396_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 5 4) (close _V10_Dloop_D396_k82) (bruijn ##.body.393 4 2) (bruijn ##.k.395 4 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k82, self)})),
      statics->up->up->up->vars[2],
      statics->up->up->up->vars[4]);
}
static void _V10_Dloop_D396_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 15 0) (close _V10_Dloop_D396_k81) (bruijn ##.x.910 25 0) (bruijn ##.args.392 3 1) (bruijn ##.x.1055 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k81, self)})),
      VGetArg(statics, 25-1, 0),
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dloop_D396_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 6 4) (bruijn ##.k.1049 3 0) (##inline ##vcore.car (bruijn ##.vals.398 3 2)) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.399 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1062 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
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
static void _V10_Dloop_D396_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.396 3 0) (close _V10_Dloop_D396_k85) (##inline ##vcore.cons (bruijn ##.x.399 0 0) (bruijn ##.done-vals.397 2 1)) (##inline ##vcore.cdr (bruijn ##.vals.398 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k85, self)})),
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D396_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.396 3 0) (bruijn ##.k.1049 2 0) (##inline ##vcore.cons (bruijn ##.x.1067 0 0) (bruijn ##.done-vals.397 2 1)) (##inline ##vcore.cdr (bruijn ##.vals.398 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D396_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1056 0 0) ((bruijn ##.x.913 22 0) (close _V10_Dloop_D396_k84) (##string ##.string.2329)) ((bruijn ##.iter-atom.347 4 0) (close _V10_Dloop_D396_k86) (##inline ##vcore.car (bruijn ##.vals.398 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k84, self)})),
      VEncodePointer(&_V10_Dstring_D2329.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k86, self)})),
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dloop_D396_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D396_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.vals.398 0 2)) ((bruijn ##.x.921 13 0) (close _V10_Dloop_D396_k80) (bruijn ##.done-vals.397 0 1)) ((bruijn ##.application?.331 5 0) (close _V10_Dloop_D396_k83) (##inline ##vcore.car (bruijn ##.vals.398 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k80, self)})),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_k83, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Diter__letrec_D349_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D349_lambda22, got ~D~N"
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
  // (letrec 1 ((close _V10_Dloop_D396_lambda23)) ((bruijn ##.loop.396 0 0) (bruijn ##.k.1048 1 0) '() (bruijn ##.vals.394 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D396_lambda23, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[3]);
    }
}
static void _V10_Dloop_D402_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1071 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.appl.405 0 0)) (##inline ##vcore.cons (bruijn ##.cont.401 3 2) (##inline ##vcore.cdr (bruijn ##.appl.405 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VInlineCons2(runtime,
        statics->up->up->vars[2],
        VInlineCdr2(runtime,
        _var0))));
}
static void _V10_Dloop_D402_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 6 4) (bruijn ##.k.1071 3 0) (##inline ##vcore.car (bruijn ##.args.404 3 2)) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.406 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1082 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      statics->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
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
static void _V10_Dloop_D402_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.402 3 0) (close _V10_Dloop_D402_k90) (##inline ##vcore.cons (bruijn ##.x.406 0 0) (bruijn ##.appl.403 2 1)) (##inline ##vcore.cdr (bruijn ##.args.404 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_k90, self)})),
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D402_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.402 3 0) (bruijn ##.k.1071 2 0) (##inline ##vcore.cons (bruijn ##.x.1087 0 0) (bruijn ##.appl.403 2 1)) (##inline ##vcore.cdr (bruijn ##.args.404 2 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]));
}
static void _V10_Dloop_D402_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1076 0 0) ((bruijn ##.x.913 22 0) (close _V10_Dloop_D402_k89) (##string ##.string.2329)) ((bruijn ##.iter-atom.347 4 0) (close _V10_Dloop_D402_k91) (##inline ##vcore.car (bruijn ##.args.404 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_k89, self)})),
      VEncodePointer(&_V10_Dstring_D2329.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_k91, self)})),
      VInlineCar2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dloop_D402_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D402_lambda25, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.args.404 0 2)) ((bruijn ##.x.921 13 0) (close _V10_Dloop_D402_k87) (bruijn ##.appl.403 0 1)) ((bruijn ##.application?.331 5 0) (close _V10_Dloop_D402_k88) (##inline ##vcore.car (bruijn ##.args.404 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_k87, self)})),
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_k88, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Diter__combination_D350_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D350_lambda24, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D402_lambda25)) ((bruijn ##.loop.402 0 0) (bruijn ##.k.1070 1 0) '() (bruijn ##.args.400 1 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D402_lambda25, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VNULL,
      statics->vars[1]);
    }
}
static void _V10_Diter2_D351_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1239 0 0) (bruijn ##.k.1234 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Diter2_D351_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 13 4) (bruijn ##.k.1240 3 0) (bruijn ##.x.413 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.1247 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1246 0 0) '()))))
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
static void _V10_Diter2_D351_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 12 4) (close _V10_Diter2_D351_k102) (bruijn ##.y.415 3 0) (bruijn ##.cont.408 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k102, self)})),
      statics->up->up->vars[0],
      VGetArg(statics, 11-1, 2));
}
static void _V10_Diter2_D351_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1241 0 0) ((bruijn ##.x.913 29 0) (close _V10_Diter2_D351_k101) (##string ##.string.2330)) ((bruijn ##.iter2.351 11 4) (bruijn ##.k.1240 1 0) (bruijn ##.y.415 2 0) (bruijn ##.cont.408 10 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k101, self)})),
      VEncodePointer(&_V10_Dstring_D2330.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      statics->vars[0],
      statics->up->vars[0],
      VGetArg(statics, 10-1, 2));
}
}
static void _V10_Diter2_D351_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.331 12 0) (close _V10_Diter2_D351_k100) (bruijn ##.x.413 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k100, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D351_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.29.414 1 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k99) (close _V10_Diter2_D351_lambda28) (bruijn ##.kk.25.409 6 1)) ((bruijn ##.k.1234 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k99, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda28, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.414 0 0)) ((close _V10_Diter2_D351_k98) (##inline ##vcore.car (bruijn ##.expr.29.414 0 0))) ((bruijn ##.k.1234 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k98, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k97) (##inline ##vcore.cdr (bruijn ##.expr.28.412 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k97, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D351_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.412 0 0)) ((close _V10_Diter2_D351_k96) (##inline ##vcore.car (bruijn ##.expr.28.412 0 0))) ((bruijn ##.k.1234 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k96, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1235 0 0) ((close _V10_Diter2_D351_k95) (##inline ##vcore.cdr (bruijn ##.expr.407 4 1))) ((bruijn ##.k.1234 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k95, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 3 1)) ((bruijn ##.x.902 33 0) (close _V10_Diter2_D351_k94) 'begin (##inline ##vcore.car (bruijn ##.expr.407 3 1))) ((bruijn ##.k.1234 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k94, self)})),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1200 0 0) (bruijn ##.k.1194 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 0));
}
static void _V10_Diter2_D351_k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 16 4) (bruijn ##.k.1201 3 0) (bruijn ##.p.418 8 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.423 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1207 0 0) '()))))
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
static void _V10_Diter2_D351_k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 15 4) (close _V10_Diter2_D351_k115) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.sym.423 0 0) (##inline ##vcore.cons (bruijn ##.x.420 5 0) (##inline ##vcore.cons (bruijn ##.y.422 3 0) '())))) (bruijn ##.cont.408 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k115, self)})),
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
static void _V10_Diter2_D351_k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1201 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.418 10 0) (##inline ##vcore.cons (bruijn ##.x.1216 1 0) (##inline ##vcore.cons (bruijn ##.x.1218 0 0) '())))))
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
static void _V10_Diter2_D351_k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 17 4) (close _V10_Diter2_D351_k117) (bruijn ##.y.422 5 0) (bruijn ##.cont.408 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k117, self)})),
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 16-1, 2));
}
static void _V10_Diter2_D351_k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1201 6 0) (##inline ##vcore.cons (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.424 2 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.p.418 11 0) (##inline ##vcore.cons (bruijn ##.x.1227 1 0) (##inline ##vcore.cons (bruijn ##.x.1229 0 0) '())))) '()))) (##inline ##vcore.cons (bruijn ##.cont.408 18 2) '())))
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
static void _V10_Diter2_D351_k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 18 4) (close _V10_Diter2_D351_k120) (bruijn ##.y.422 6 0) (bruijn ##.k.424 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k120, self)})),
      VGetArg(statics, 6-1, 0),
      statics->vars[0]);
}
static void _V10_Diter2_D351_k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 17 4) (close _V10_Diter2_D351_k119) (bruijn ##.x.420 7 0) (bruijn ##.k.424 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k119, self)})),
      VGetArg(statics, 7-1, 0),
      _var0);
}
static void _V10_Diter2_D351_k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1202 0 0) ((bruijn ##.x.913 32 0) (close _V10_Diter2_D351_k114) (##string ##.string.2331)) (basic-block 1 1 (##.reg.2313) ((##vcore.symbol? (bruijn ##.p.418 7 0))) (if (bruijn ##.reg.2313 0 0) (basic-block 1 1 (##.reg.2314) ((##vcore.symbol? (bruijn ##.cont.408 15 2))) (if (bruijn ##.reg.2314 0 0) ((bruijn ##.iter2.351 16 4) (close _V10_Diter2_D351_k116) (bruijn ##.x.420 6 0) (bruijn ##.cont.408 15 2)) ((bruijn ##.x.913 34 0) (close _V10_Diter2_D351_k118) (##string ##.string.2327)))) (if (##inline ##vcore.eq? (bruijn ##.p.418 7 0) #f) ((bruijn ##.iter2.351 15 4) (bruijn ##.k.1201 2 0) (bruijn ##.y.422 3 0) (bruijn ##.cont.408 14 2)) ((bruijn ##.iter2.351 15 4) (bruijn ##.k.1201 2 0) (bruijn ##.x.420 5 0) (bruijn ##.cont.408 14 2))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k114, self)})),
      VEncodePointer(&_V10_Dstring_D2331.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 15-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k116, self)})),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 15-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k118, self)})),
      VEncodePointer(&_V10_Dstring_D2327.sym, VPOINTER_OTHER));
}
    }
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VGetArg(statics, 7-1, 0),
        VEncodeBool(false)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      statics->up->vars[0],
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 14-1, 2));
}
}
    }
}
}
static void _V10_Diter2_D351_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.331 15 0) (close _V10_Diter2_D351_k113) (bruijn ##.p.418 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k113, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Diter2_D351_k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.33.421 1 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k112) (close _V10_Diter2_D351_lambda29) (bruijn ##.kk.25.409 9 1)) ((bruijn ##.k.1194 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k112, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda29, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.33.421 0 0)) ((close _V10_Diter2_D351_k111) (##inline ##vcore.car (bruijn ##.expr.33.421 0 0))) ((bruijn ##.k.1194 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k111, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k110) (##inline ##vcore.cdr (bruijn ##.expr.32.419 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k110, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D351_k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.32.419 0 0)) ((close _V10_Diter2_D351_k109) (##inline ##vcore.car (bruijn ##.expr.32.419 0 0))) ((bruijn ##.k.1194 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k109, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k108) (##inline ##vcore.cdr (bruijn ##.expr.31.417 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k108, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D351_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.31.417 0 0)) ((close _V10_Diter2_D351_k107) (##inline ##vcore.car (bruijn ##.expr.31.417 0 0))) ((bruijn ##.k.1194 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k107, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1195 0 0) ((close _V10_Diter2_D351_k106) (##inline ##vcore.cdr (bruijn ##.expr.407 5 1))) ((bruijn ##.k.1194 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k106, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 4 1)) ((bruijn ##.x.902 34 0) (close _V10_Diter2_D351_k105) 'if (##inline ##vcore.car (bruijn ##.expr.407 4 1))) ((bruijn ##.k.1194 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k105, self)})),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1176 0 0) (bruijn ##.k.1171 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Diter2_D351_k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 15 4) (bruijn ##.k.1177 3 0) (bruijn ##.x.427 6 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.430 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1183 0 0) '()))))
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
static void _V10_Diter2_D351_k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 14 4) (close _V10_Diter2_D351_k131) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.sym.430 0 0) (##inline ##vcore.cons (bruijn ##.y.429 3 0) '()))) (bruijn ##.cont.408 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k131, self)})),
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL))),
      VGetArg(statics, 13-1, 2));
}
static void _V10_Diter2_D351_k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1178 0 0) ((bruijn ##.x.913 31 0) (close _V10_Diter2_D351_k130) (##string ##.string.2331)) ((bruijn ##.iter2.351 13 4) (bruijn ##.k.1177 1 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.427 4 0) (##inline ##vcore.cons (bruijn ##.x.427 4 0) (##inline ##vcore.cons (bruijn ##.y.429 2 0) '())))) (bruijn ##.cont.408 12 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k130, self)})),
      VEncodePointer(&_V10_Dstring_D2331.sym, VPOINTER_OTHER));
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
static void _V10_Diter2_D351_lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.331 14 0) (close _V10_Diter2_D351_k129) (bruijn ##.x.427 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k129, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D351_k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.36.428 1 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k128) (close _V10_Diter2_D351_lambda30) (bruijn ##.kk.25.409 8 1)) ((bruijn ##.k.1171 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k128, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda30, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.428 0 0)) ((close _V10_Diter2_D351_k127) (##inline ##vcore.car (bruijn ##.expr.36.428 0 0))) ((bruijn ##.k.1171 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k127, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k126) (##inline ##vcore.cdr (bruijn ##.expr.35.426 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k126, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Diter2_D351_k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.35.426 0 0)) ((close _V10_Diter2_D351_k125) (##inline ##vcore.car (bruijn ##.expr.35.426 0 0))) ((bruijn ##.k.1171 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k125, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1172 0 0) ((close _V10_Diter2_D351_k124) (##inline ##vcore.cdr (bruijn ##.expr.407 6 1))) ((bruijn ##.k.1171 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k124, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 5 1)) ((bruijn ##.x.902 35 0) (close _V10_Diter2_D351_k123) 'or (##inline ##vcore.car (bruijn ##.expr.407 5 1))) ((bruijn ##.k.1171 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k123, self)})),
      _V0or,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1156 0 0) (bruijn ##.k.1146 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 0));
}
static void _V10_Diter2_D351_k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter2.351 19 4) (bruijn ##.k.1157 2 0) (bruijn ##.val.439 3 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.435 7 0) '()) (##inline ##vcore.cons (bruijn ##.x.1163 0 0) '()))))
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
static void _V10_Diter2_D351_k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.348 20 1) (bruijn ##.k.1157 3 0) (bruijn ##.x.1164 1 0) (bruijn ##.body.437 6 0) (bruijn ##.x.1165 0 0) (bruijn ##.cont.408 19 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 5,
      statics->up->up->vars[0],
      statics->vars[0],
      VGetArg(statics, 6-1, 0),
      _var0,
      VGetArg(statics, 19-1, 2));
}
static void _V10_Diter2_D351_k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.910 40 0) (close _V10_Diter2_D351_k147) (bruijn ##.val.439 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k147, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Diter2_D351_k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1158 0 0) ((bruijn ##.iter2.351 18 4) (close _V10_Diter2_D351_k145) (bruijn ##.body.437 4 0) (bruijn ##.cont.408 17 2)) ((bruijn ##.x.910 39 0) (close _V10_Diter2_D351_k146) (bruijn ##.x.435 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k145, self)})),
      statics->up->up->up->vars[0],
      VGetArg(statics, 17-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k146, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Diter2_D351_lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.application?.331 19 0) (close _V10_Diter2_D351_k144) (bruijn ##.val.439 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k144, self)})),
      statics->vars[0]);
}
static void _V10_Diter2_D351_k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.42.438 1 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k143) (close _V10_Diter2_D351_lambda31) (bruijn ##.kk.25.409 13 1)) ((bruijn ##.k.1146 9 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k143, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda31, self)})),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.42.438 0 0)) ((close _V10_Diter2_D351_k142) (##inline ##vcore.car (bruijn ##.expr.42.438 0 0))) ((bruijn ##.k.1146 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k142, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.41.436 1 0))) ((close _V10_Diter2_D351_k141) (##inline ##vcore.cdr (bruijn ##.expr.407 13 1))) ((bruijn ##.k.1146 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k141, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 13-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.41.436 0 0)) ((close _V10_Diter2_D351_k140) (##inline ##vcore.car (bruijn ##.expr.41.436 0 0))) ((bruijn ##.k.1146 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k140, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.434 1 0))) ((close _V10_Diter2_D351_k139) (##inline ##vcore.cdr (bruijn ##.expr.39.433 2 0))) ((bruijn ##.k.1146 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k139, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.434 0 0)) ((close _V10_Diter2_D351_k138) (##inline ##vcore.car (bruijn ##.expr.40.434 0 0))) ((bruijn ##.k.1146 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k138, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.433 0 0)) ((close _V10_Diter2_D351_k137) (##inline ##vcore.car (bruijn ##.expr.39.433 0 0))) ((bruijn ##.k.1146 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k137, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1148 0 0) ((close _V10_Diter2_D351_k136) (##inline ##vcore.cdr (bruijn ##.expr.38.432 1 0))) ((bruijn ##.k.1146 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k136, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.432 0 0)) ((bruijn ##.x.902 37 0) (close _V10_Diter2_D351_k135) 'lambda (##inline ##vcore.car (bruijn ##.expr.38.432 0 0))) ((bruijn ##.k.1146 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k135, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 6 1)) ((close _V10_Diter2_D351_k134) (##inline ##vcore.car (bruijn ##.expr.407 6 1))) ((bruijn ##.k.1146 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k134, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1141 0 0) (bruijn ##.k.1135 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Diter2_D351_lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-let.348 13 1) (bruijn ##.k.1142 0 0) (##inline ##vcore.car (bruijn ##.expr.45.442 2 0)) (##inline ##vcore.car (bruijn ##.expr.46.444 1 0)) (##inline ##vcore.cdr (bruijn ##.expr.407 12 1)) (bruijn ##.cont.408 12 2))
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
static void _V10_Diter2_D351_k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.46.444 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.46.444 0 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k154) (close _V10_Diter2_D351_lambda32) (bruijn ##.kk.25.409 9 1)) ((bruijn ##.k.1135 4 0) #f)) ((bruijn ##.k.1135 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k154, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda32, self)})),
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
static void _V10_Diter2_D351_k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.45.442 0 0)) ((close _V10_Diter2_D351_k153) (##inline ##vcore.cdr (bruijn ##.expr.45.442 0 0))) ((bruijn ##.k.1135 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k153, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1137 0 0) ((close _V10_Diter2_D351_k152) (##inline ##vcore.cdr (bruijn ##.expr.44.441 1 0))) ((bruijn ##.k.1135 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k152, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.44.441 0 0)) ((bruijn ##.x.902 38 0) (close _V10_Diter2_D351_k151) 'lambda (##inline ##vcore.car (bruijn ##.expr.44.441 0 0))) ((bruijn ##.k.1135 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k151, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 7 1)) ((close _V10_Diter2_D351_k150) (##inline ##vcore.car (bruijn ##.expr.407 7 1))) ((bruijn ##.k.1135 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k150, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.450 5 1) (bruijn ##.k.1122 2 0) (bruijn ##.expr.54.452 3 1) (bruijn ##.x.1123 1 0) (bruijn ##.x.1124 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D451_k160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 27 0) (close _V10_Dloop_D451_k161) (bruijn ##.vals.51.454 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k161, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D451_k159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.54.452 1 1))) ((bruijn ##.x.921 26 0) (close _V10_Dloop_D451_k160) (bruijn ##.xs.50.453 1 2)) ((bruijn ##.k.1122 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k160, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.458 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.458 0 0))) ((bruijn ##.kk.53.455 3 1) (bruijn ##.k.1114 1 0) (##inline ##vcore.cdr (bruijn ##.expr.54.452 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.55.456 2 0)) (bruijn ##.xs.50.453 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.56.458 0 0)) (bruijn ##.vals.51.454 6 3))) ((bruijn ##.k.1114 1 0) #f)) ((bruijn ##.k.1114 1 0) #f))
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
static void _V10_Dloop_D451_k164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.456 1 0)) ((close _V10_Dloop_D451_k165) (##inline ##vcore.cdr (bruijn ##.expr.55.456 1 0))) ((bruijn ##.k.1114 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k165, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D451_k168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.52.450 9 1) (bruijn ##.k.1109 4 0) (bruijn ##.expr.54.452 7 1) (bruijn ##.x.1111 1 0) (bruijn ##.x.1112 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D451_k167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 31 0) (close _V10_Dloop_D451_k168) (bruijn ##.vals.51.454 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k168, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D451_k166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 30 0) (close _V10_Dloop_D451_k167) (bruijn ##.xs.50.453 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k167, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D451_k163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D451_k164) (close _V10_Dloop_D451_k166))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k164, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k166, self)})));
}
static void _V10_Dloop_D451_lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D451_k163) (##inline ##vcore.car (bruijn ##.expr.54.452 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k163, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D451_lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1108 0 0) (close _V10_Dloop_D451_lambda37))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda37, self)})));
}
static void _V10_Dloop_D451_k162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1106 1 0) (close _V10_Dloop_D451_lambda36) (bruijn ##.loop.451 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda36, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D451_lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D451_lambda35, got ~D~N"
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
  // ((close _V10_Dloop_D451_k159) (close _V10_Dloop_D451_k162))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D451_k159, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_k162, self)})));
}
static void _V10_Diter2_D351_lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D451_lambda35)) ((bruijn ##.loop.451 0 0) (bruijn ##.k.1105 1 0) (##inline ##vcore.car (bruijn ##.expr.48.448 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D451_lambda35, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter2_D351_lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1104 0 0) (close _V10_Diter2_D351_lambda34))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda34, self)})));
}
static void _V10_Diter2_D351_k170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1130 0 0) (bruijn ##.k.1126 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter2_D351_lambda39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-letrec.349 14 2) (bruijn ##.k.1131 0 0) (bruijn ##.xs.461 2 2) (##inline ##vcore.car (bruijn ##.expr.57.463 1 0)) (bruijn ##.vals.462 2 3) (bruijn ##.cont.408 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 2)), 5,
      _var0,
      statics->up->vars[2],
      VInlineCar2(runtime,
        statics->vars[0]),
      statics->up->vars[3],
      VGetArg(statics, 13-1, 2));
}
static void _V10_Diter2_D351_k169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.463 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.57.463 0 0))) (##vcore.call-with-values (close _V10_Diter2_D351_k170) (close _V10_Diter2_D351_lambda39) (bruijn ##.kk.25.409 10 1)) ((bruijn ##.k.1126 1 0) #f)) ((bruijn ##.k.1126 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k170, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda39, self)})),
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
static void _V10_Diter2_D351_lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda38, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.460 0 1)) ((close _V10_Diter2_D351_k169) (##inline ##vcore.cdr (bruijn ##.expr.48.448 1 0))) ((bruijn ##.k.1126 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k169, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.48.448 0 0)) (##vcore.call-with-values (bruijn ##.k.1101 2 0) (close _V10_Diter2_D351_lambda33) (close _V10_Diter2_D351_lambda38)) ((bruijn ##.k.1101 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda33, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda38, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1102 0 0) ((close _V10_Diter2_D351_k158) (##inline ##vcore.cdr (bruijn ##.expr.407 9 1))) ((bruijn ##.k.1101 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k158, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.407 8 1)) ((bruijn ##.x.902 38 0) (close _V10_Diter2_D351_k157) 'letrec (##inline ##vcore.car (bruijn ##.expr.407 8 1))) ((bruijn ##.k.1101 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k157, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter2_D351_lambda40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-combination.350 10 3) (bruijn ##.k.1099 0 0) (bruijn ##.expr.407 9 1) (bruijn ##.cont.408 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      _var0,
      VGetArg(statics, 9-1, 1),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Diter2_D351_k171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1092 6 0) (close _V10_Diter2_D351_lambda40) (bruijn ##.kk.25.409 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda40, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Diter2_D351_k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k156) (close _V10_Diter2_D351_k171))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k156, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k171, self)})));
}
static void _V10_Diter2_D351_k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k149) (close _V10_Diter2_D351_k155))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k149, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k155, self)})));
}
static void _V10_Diter2_D351_k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k133) (close _V10_Diter2_D351_k148))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k133, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k148, self)})));
}
static void _V10_Diter2_D351_k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k122) (close _V10_Diter2_D351_k132))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k122, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k132, self)})));
}
static void _V10_Diter2_D351_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter2_D351_k104) (close _V10_Diter2_D351_k121))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k104, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k121, self)})));
}
static void _V10_Diter2_D351_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter2_D351_k93) (close _V10_Diter2_D351_k103))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter2_D351_k93, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k103, self)})));
}
static void _V10_Diter2_D351_k172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1090 2 0) (##inline ##vcore.cons (bruijn ##.cont.408 2 2) (##inline ##vcore.cons (bruijn ##.x.1251 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[2],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter2_D351_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1091 0 0) (##vcore.call/cc (bruijn ##.k.1090 1 0) (close _V10_Diter2_D351_lambda27)) ((bruijn ##.iter-atom.347 2 0) (close _V10_Diter2_D351_k172) (bruijn ##.expr.407 1 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda27, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k172, self)})),
      statics->vars[1]);
}
}
static void _V10_Diter2_D351_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter2_D351_lambda26, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.application?.331 3 0) (close _V10_Diter2_D351_k92) (bruijn ##.expr.407 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_k92, self)})),
      _var1);
}
static void _V10_Dto__cps__impl_D352_k174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D352_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1252 2 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.next.466 1 0) '()) (##inline ##vcore.cons (bruijn ##.x.1256 0 0) '()))))
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
static void _V10_Dto__cps__impl_D352_k173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D352_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter2.351 2 4) (close _V10_Dto__cps__impl_D352_k174) (bruijn ##.expr.465 1 1) (bruijn ##.next.466 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D352_k174, self)})),
      statics->vars[1],
      _var0);
}
static void _V10_Dto__cps__impl_D352_lambda41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps__impl_D352_lambda41, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.913 19 0) (close _V10_Dto__cps__impl_D352_k173) (##string ##.string.2332))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D352_k173, self)})),
      VEncodePointer(&_V10_Dstring_D2332.sym, VPOINTER_OTHER));
}
static void _V10_Dto__cps_D333_k177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1294 0 0) (bruijn ##.k.1292 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dto__cps_D333_lambda43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1295 0 0) (bruijn ##.expr.346 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dto__cps_D333_k176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1293 0 0) (##vcore.call-with-values (close _V10_Dto__cps_D333_k177) (close _V10_Dto__cps_D333_lambda43) (bruijn ##.kk.0.467 2 1)) ((bruijn ##.k.1292 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k177, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda43, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.346 3 1)) ((bruijn ##.x.902 31 0) (close _V10_Dto__cps_D333_k176) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.346 3 1))) ((bruijn ##.k.1292 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k176, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1282 0 0) (bruijn ##.k.1277 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dto__cps_D333_k186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1283 3 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.471 5 0)) (##inline ##vcore.cons (bruijn ##.x.1286 0 0) '()))))
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
static void _V10_Dto__cps_D333_k185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.928 12 0) (close _V10_Dto__cps_D333_k186) (bruijn ##.x.1287 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k186, self)})),
      _var0);
}
static void _V10_Dto__cps_D333_k184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.927 12 0) (close _V10_Dto__cps_D333_k185) (bruijn ##.x.1288 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k185, self)})),
      _var0);
}
static void _V10_Dto__cps_D333_lambda44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.to-cps-impl.352 7 5) (close _V10_Dto__cps_D333_k184) (##inline ##vcore.car (bruijn ##.expr.5.473 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k184, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dto__cps_D333_k182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.473 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.473 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D333_k183) (close _V10_Dto__cps_D333_lambda44) (bruijn ##.kk.0.467 5 1)) ((bruijn ##.k.1277 3 0) #f)) ((bruijn ##.k.1277 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k183, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda44, self)})),
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
static void _V10_Dto__cps_D333_k181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.471 0 0)) ((close _V10_Dto__cps_D333_k182) (##inline ##vcore.cdr (bruijn ##.expr.4.471 0 0))) ((bruijn ##.k.1277 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k182, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1278 0 0) ((close _V10_Dto__cps_D333_k181) (##inline ##vcore.cdr (bruijn ##.expr.346 5 1))) ((bruijn ##.k.1277 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k181, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.346 4 1)) ((bruijn ##.x.902 32 0) (close _V10_Dto__cps_D333_k180) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.346 4 1))) ((bruijn ##.k.1277 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k180, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1267 0 0) (bruijn ##.k.1263 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dto__cps_D333_k192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.352 8 5) (bruijn ##.k.1268 1 0) (##inline ##vcore.cons '##vcore.multidefine (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.load-library (##inline ##vcore.cons (bruijn ##.x.1273 0 0) '())) '())))
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
static void _V10_Dto__cps_D333_lambda45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.926 12 0) (close _V10_Dto__cps_D333_k192) (##inline ##vcore.car (bruijn ##.expr.7.476 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k192, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dto__cps_D333_k190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.476 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.7.476 0 0))) (##vcore.call-with-values (close _V10_Dto__cps_D333_k191) (close _V10_Dto__cps_D333_lambda45) (bruijn ##.kk.0.467 5 1)) ((bruijn ##.k.1263 2 0) #f)) ((bruijn ##.k.1263 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k191, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda45, self)})),
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
static void _V10_Dto__cps_D333_k189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1264 0 0) ((close _V10_Dto__cps_D333_k190) (##inline ##vcore.cdr (bruijn ##.expr.346 6 1))) ((bruijn ##.k.1263 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k190, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_k188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.346 5 1)) ((bruijn ##.x.902 33 0) (close _V10_Dto__cps_D333_k189) 'import (##inline ##vcore.car (bruijn ##.expr.346 5 1))) ((bruijn ##.k.1263 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k189, self)})),
      _V0import,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dto__cps_D333_lambda46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.to-cps-impl.352 5 5) (bruijn ##.k.1261 0 0) (bruijn ##.expr.346 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dto__cps_D333_k193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1257 3 0) (close _V10_Dto__cps_D333_lambda46) (bruijn ##.kk.0.467 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda46, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dto__cps_D333_k187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dto__cps_D333_k188) (close _V10_Dto__cps_D333_k193))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k188, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k193, self)})));
}
static void _V10_Dto__cps_D333_k178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dto__cps_D333_k179) (close _V10_Dto__cps_D333_k187))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k179, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k187, self)})));
}
static void _V10_Dto__cps_D333_lambda42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda42, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dto__cps_D333_k175) (close _V10_Dto__cps_D333_k178))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dto__cps_D333_k175, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_k178, self)})));
}
static void _V10_Dto__cps_D333_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dto__cps_D333_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 6 ((close _V10_Diter__atom_D347_lambda5) (close _V10_Diter__let_D348_lambda20) (close _V10_Diter__letrec_D349_lambda22) (close _V10_Diter__combination_D350_lambda24) (close _V10_Diter2_D351_lambda26) (close _V10_Dto__cps__impl_D352_lambda41)) (##vcore.call/cc (bruijn ##.k.953 1 0) (close _V10_Dto__cps_D333_lambda42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D347_lambda5, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__let_D348_lambda20, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D349_lambda22, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D350_lambda24, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter2_D351_lambda26, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps__impl_D352_lambda41, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda42, self)})));
    }
}
static void _V10_Diter_D482_k199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1475 0 0) (bruijn ##.k.1470 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D482_k200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k200, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1476 1 0) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.61.487 3 0)) (##inline ##vcore.cons (bruijn ##.x.1479 0 0) '()))))
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
static void _V10_Diter_D482_lambda50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 8 0) (close _V10_Diter_D482_k200) (##inline ##vcore.car (bruijn ##.expr.62.489 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k200, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter_D482_k198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k198, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.62.489 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.62.489 0 0))) (##vcore.call-with-values (close _V10_Diter_D482_k199) (close _V10_Diter_D482_lambda50) (bruijn ##.kk.58.484 4 1)) ((bruijn ##.k.1470 3 0) #f)) ((bruijn ##.k.1470 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k199, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda50, self)})),
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
static void _V10_Diter_D482_k197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k197, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.487 0 0)) ((close _V10_Diter_D482_k198) (##inline ##vcore.cdr (bruijn ##.expr.61.487 0 0))) ((bruijn ##.k.1470 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k198, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1471 0 0) ((close _V10_Diter_D482_k197) (##inline ##vcore.cdr (bruijn ##.expr.483 4 1))) ((bruijn ##.k.1470 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k197, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 3 1)) ((bruijn ##.x.902 33 0) (close _V10_Diter_D482_k196) 'lambda (##inline ##vcore.car (bruijn ##.expr.483 3 1))) ((bruijn ##.k.1470 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k196, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k206, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1462 0 0) (bruijn ##.k.1457 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D482_k207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1463 1 0) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.64.492 3 0)) (##inline ##vcore.cons (bruijn ##.x.1466 0 0) '()))))
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
static void _V10_Diter_D482_lambda51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 9 0) (close _V10_Diter_D482_k207) (##inline ##vcore.car (bruijn ##.expr.65.494 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k207, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter_D482_k205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k205, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.65.494 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.65.494 0 0))) (##vcore.call-with-values (close _V10_Diter_D482_k206) (close _V10_Diter_D482_lambda51) (bruijn ##.kk.58.484 5 1)) ((bruijn ##.k.1457 3 0) #f)) ((bruijn ##.k.1457 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k206, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda51, self)})),
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
static void _V10_Diter_D482_k204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.64.492 0 0)) ((close _V10_Diter_D482_k205) (##inline ##vcore.cdr (bruijn ##.expr.64.492 0 0))) ((bruijn ##.k.1457 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k205, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1458 0 0) ((close _V10_Diter_D482_k204) (##inline ##vcore.cdr (bruijn ##.expr.483 5 1))) ((bruijn ##.k.1457 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k204, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 4 1)) ((bruijn ##.x.902 34 0) (close _V10_Diter_D482_k203) 'continuation (##inline ##vcore.car (bruijn ##.expr.483 4 1))) ((bruijn ##.k.1457 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k203, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D499_k213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k213, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.498 5 1) (bruijn ##.k.1443 2 0) (bruijn ##.expr.72.500 3 1) (bruijn ##.x.1444 1 0) (bruijn ##.x.1445 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D499_k212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 23 0) (close _V10_Dloop_D499_k213) (bruijn ##.body.69.502 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k213, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D499_k211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.72.500 1 1))) ((bruijn ##.x.921 22 0) (close _V10_Dloop_D499_k212) (bruijn ##.args.68.501 1 2)) ((bruijn ##.k.1443 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k212, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D499_k217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k217, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.74.506 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.74.506 0 0))) ((bruijn ##.kk.71.503 3 1) (bruijn ##.k.1435 1 0) (##inline ##vcore.cdr (bruijn ##.expr.72.500 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.73.504 2 0)) (bruijn ##.args.68.501 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.74.506 0 0)) (bruijn ##.body.69.502 6 3))) ((bruijn ##.k.1435 1 0) #f)) ((bruijn ##.k.1435 1 0) #f))
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
static void _V10_Dloop_D499_k216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k216, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.73.504 1 0)) ((close _V10_Dloop_D499_k217) (##inline ##vcore.cdr (bruijn ##.expr.73.504 1 0))) ((bruijn ##.k.1435 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D499_k217, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D499_k220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.70.498 9 1) (bruijn ##.k.1430 4 0) (bruijn ##.expr.72.500 7 1) (bruijn ##.x.1432 1 0) (bruijn ##.x.1433 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D499_k219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k219, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 27 0) (close _V10_Dloop_D499_k220) (bruijn ##.body.69.502 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k220, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D499_k218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 26 0) (close _V10_Dloop_D499_k219) (bruijn ##.args.68.501 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k219, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D499_k215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D499_k216) (close _V10_Dloop_D499_k218))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D499_k216, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k218, self)})));
}
static void _V10_Dloop_D499_lambda56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D499_k215) (##inline ##vcore.car (bruijn ##.expr.72.500 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D499_k215, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D499_lambda55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_lambda55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1429 0 0) (close _V10_Dloop_D499_lambda56))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_lambda56, self)})));
}
static void _V10_Dloop_D499_k214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_k214, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1427 1 0) (close _V10_Dloop_D499_lambda55) (bruijn ##.loop.499 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_lambda55, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D499_lambda54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D499_lambda54, got ~D~N"
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
  // ((close _V10_Dloop_D499_k211) (close _V10_Dloop_D499_k214))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D499_k211, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_k214, self)})));
}
static void _V10_Diter_D482_lambda53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda53, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D499_lambda54)) ((bruijn ##.loop.499 0 0) (bruijn ##.k.1426 1 0) (##inline ##vcore.cdr (bruijn ##.expr.483 9 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D499_lambda54, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D482_lambda52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1425 0 0) (close _V10_Diter_D482_lambda53))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda53, self)})));
}
static void _V10_Diter_D482_k221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k221, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1449 0 0) (bruijn ##.k.1447 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter_D482_k222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1450 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.1451 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Diter_D482_k223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1452 1 0) (##inline ##vcore.cons (bruijn ##.args.511 1 1) (##inline ##vcore.cons (bruijn ##.x.1454 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Diter_D482_lambda59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda59, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.iter.482 10 0) (close _V10_Diter_D482_k223) (bruijn ##.body.512 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k223, self)})),
      _var2);
}
static void _V10_Diter_D482_lambda58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 20 0) (close _V10_Diter_D482_k222) (close _V10_Diter_D482_lambda59) (bruijn ##.args.509 1 2) (bruijn ##.body.510 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k222, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda59, self)})),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Diter_D482_lambda57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda57, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.508 0 1)) (##vcore.call-with-values (close _V10_Diter_D482_k221) (close _V10_Diter_D482_lambda58) (bruijn ##.kk.58.484 5 1)) ((bruijn ##.k.1447 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k221, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda58, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1424 0 0) (##vcore.call-with-values (bruijn ##.k.1423 1 0) (close _V10_Diter_D482_lambda52) (close _V10_Diter_D482_lambda57)) ((bruijn ##.k.1423 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda52, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda57, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 5 1)) ((bruijn ##.x.902 35 0) (close _V10_Diter_D482_k210) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.483 5 1))) ((bruijn ##.k.1423 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k210, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1419 0 0) (bruijn ##.k.1417 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D482_lambda60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1420 0 0) (bruijn ##.expr.483 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Diter_D482_k226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1418 0 0) (##vcore.call-with-values (close _V10_Diter_D482_k227) (close _V10_Diter_D482_lambda60) (bruijn ##.kk.58.484 5 1)) ((bruijn ##.k.1417 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k227, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda60, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 6 1)) ((bruijn ##.x.902 36 0) (close _V10_Diter_D482_k226) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.483 6 1))) ((bruijn ##.k.1417 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k226, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k232, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1412 0 0) (bruijn ##.k.1408 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Diter_D482_lambda61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1413 0 0) (bruijn ##.expr.483 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 1));
}
static void _V10_Diter_D482_k231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k231, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.77.515 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.77.515 0 0))) (##vcore.call-with-values (close _V10_Diter_D482_k232) (close _V10_Diter_D482_lambda61) (bruijn ##.kk.58.484 7 1)) ((bruijn ##.k.1408 2 0) #f)) ((bruijn ##.k.1408 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k232, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda61, self)})),
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
static void _V10_Diter_D482_k230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k230, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1409 0 0) ((close _V10_Diter_D482_k231) (##inline ##vcore.cdr (bruijn ##.expr.483 8 1))) ((bruijn ##.k.1408 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k231, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 7 1)) ((bruijn ##.x.902 37 0) (close _V10_Diter_D482_k230) 'quote (##inline ##vcore.car (bruijn ##.expr.483 7 1))) ((bruijn ##.k.1408 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k230, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D521_k239(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k239, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.520 5 1) (bruijn ##.k.1389 2 0) (bruijn ##.expr.85.522 3 1) (bruijn ##.x.1390 1 0) (bruijn ##.x.1391 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D521_k238(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k238, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 27 0) (close _V10_Dloop_D521_k239) (bruijn ##.vals.82.524 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k239, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D521_k237(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k237, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.85.522 1 1))) ((bruijn ##.x.921 26 0) (close _V10_Dloop_D521_k238) (bruijn ##.args.81.523 1 2)) ((bruijn ##.k.1389 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k238, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D521_k243(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k243, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.87.528 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.87.528 0 0))) ((bruijn ##.kk.84.525 3 1) (bruijn ##.k.1381 1 0) (##inline ##vcore.cdr (bruijn ##.expr.85.522 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.86.526 2 0)) (bruijn ##.args.81.523 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.87.528 0 0)) (bruijn ##.vals.82.524 6 3))) ((bruijn ##.k.1381 1 0) #f)) ((bruijn ##.k.1381 1 0) #f))
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
static void _V10_Dloop_D521_k242(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k242, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.86.526 1 0)) ((close _V10_Dloop_D521_k243) (##inline ##vcore.cdr (bruijn ##.expr.86.526 1 0))) ((bruijn ##.k.1381 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D521_k243, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D521_k246(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k246, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.83.520 9 1) (bruijn ##.k.1376 4 0) (bruijn ##.expr.85.522 7 1) (bruijn ##.x.1378 1 0) (bruijn ##.x.1379 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D521_k245(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k245, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 31 0) (close _V10_Dloop_D521_k246) (bruijn ##.vals.82.524 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k246, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D521_k244(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k244, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 30 0) (close _V10_Dloop_D521_k245) (bruijn ##.args.81.523 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k245, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D521_k241(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k241, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D521_k242) (close _V10_Dloop_D521_k244))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D521_k242, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k244, self)})));
}
static void _V10_Dloop_D521_lambda66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D521_k241) (##inline ##vcore.car (bruijn ##.expr.85.522 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D521_k241, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D521_lambda65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1375 0 0) (close _V10_Dloop_D521_lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_lambda66, self)})));
}
static void _V10_Dloop_D521_k240(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_k240, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1373 1 0) (close _V10_Dloop_D521_lambda65) (bruijn ##.loop.521 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_lambda65, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D521_lambda64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D521_lambda64, got ~D~N"
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
  // ((close _V10_Dloop_D521_k237) (close _V10_Dloop_D521_k240))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D521_k237, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_k240, self)})));
}
static void _V10_Diter_D482_lambda63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda63, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D521_lambda64)) ((bruijn ##.loop.521 0 0) (bruijn ##.k.1372 1 0) (##inline ##vcore.car (bruijn ##.expr.79.518 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D521_lambda64, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D482_lambda62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1371 0 0) (close _V10_Diter_D482_lambda63))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda63, self)})));
}
static void _V10_Diter_D482_k248(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k248, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1397 0 0) (bruijn ##.k.1393 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D482_k251(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k251, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1398 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1400 1 0) (##inline ##vcore.cons (bruijn ##.x.1402 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D482_k250(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k250, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 16 0) (close _V10_Diter_D482_k251) (##inline ##vcore.car (bruijn ##.expr.88.533 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k251, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Diter_D482_k249(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k249, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 26 0) (close _V10_Diter_D482_k250) (bruijn ##.x.910 36 0) (bruijn ##.args.531 3 2) (bruijn ##.x.1403 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k250, self)})),
      VGetArg(statics, 36-1, 0),
      statics->up->up->vars[2],
      _var0);
}
static void _V10_Diter_D482_lambda69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.482 15 0) (bruijn ##.k.1404 0 0) (bruijn ##.val.535 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      _var1);
}
static void _V10_Diter_D482_lambda68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 25 0) (close _V10_Diter_D482_k249) (close _V10_Diter_D482_lambda69) (bruijn ##.vals.532 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k249, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda69, self)})),
      statics->up->vars[3]);
}
static void _V10_Diter_D482_k247(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k247, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.88.533 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.88.533 0 0))) (##vcore.call-with-values (close _V10_Diter_D482_k248) (close _V10_Diter_D482_lambda68) (bruijn ##.kk.58.484 10 1)) ((bruijn ##.k.1393 1 0) #f)) ((bruijn ##.k.1393 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k248, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda68, self)})),
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
static void _V10_Diter_D482_lambda67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda67, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.530 0 1)) ((close _V10_Diter_D482_k247) (##inline ##vcore.cdr (bruijn ##.expr.79.518 1 0))) ((bruijn ##.k.1393 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k247, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k236(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k236, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.79.518 0 0)) (##vcore.call-with-values (bruijn ##.k.1368 2 0) (close _V10_Diter_D482_lambda62) (close _V10_Diter_D482_lambda67)) ((bruijn ##.k.1368 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda62, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda67, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1369 0 0) ((close _V10_Diter_D482_k236) (##inline ##vcore.cdr (bruijn ##.expr.483 9 1))) ((bruijn ##.k.1368 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k236, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 8 1)) ((bruijn ##.x.902 38 0) (close _V10_Diter_D482_k235) 'letrec (##inline ##vcore.car (bruijn ##.expr.483 8 1))) ((bruijn ##.k.1368 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k235, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_lambda70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.916 31 0) (bruijn ##.k.1326 0 0) (bruijn ##.expr.91.539 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dloop_D544_k261(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k261, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.97.543 5 1) (bruijn ##.k.1346 2 0) (bruijn ##.expr.99.545 3 1) (bruijn ##.x.1347 1 0) (bruijn ##.x.1348 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D544_k260(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k260, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 32 0) (close _V10_Dloop_D544_k261) (bruijn ##.applies.96.547 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k261, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D544_k259(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k259, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.99.545 1 1))) ((bruijn ##.x.921 31 0) (close _V10_Dloop_D544_k260) (bruijn ##.regs.95.546 1 2)) ((bruijn ##.k.1346 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k260, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D544_k265(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k265, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.101.551 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.101.551 0 0))) ((bruijn ##.kk.98.548 3 1) (bruijn ##.k.1338 1 0) (##inline ##vcore.cdr (bruijn ##.expr.99.545 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.100.549 2 0)) (bruijn ##.regs.95.546 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.101.551 0 0)) (bruijn ##.applies.96.547 6 3))) ((bruijn ##.k.1338 1 0) #f)) ((bruijn ##.k.1338 1 0) #f))
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
static void _V10_Dloop_D544_k264(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k264, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.100.549 1 0)) ((close _V10_Dloop_D544_k265) (##inline ##vcore.cdr (bruijn ##.expr.100.549 1 0))) ((bruijn ##.k.1338 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D544_k265, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D544_k268(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k268, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.97.543 9 1) (bruijn ##.k.1333 4 0) (bruijn ##.expr.99.545 7 1) (bruijn ##.x.1335 1 0) (bruijn ##.x.1336 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D544_k267(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k267, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 36 0) (close _V10_Dloop_D544_k268) (bruijn ##.applies.96.547 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k268, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D544_k266(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k266, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 35 0) (close _V10_Dloop_D544_k267) (bruijn ##.regs.95.546 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k267, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D544_k263(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k263, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D544_k264) (close _V10_Dloop_D544_k266))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D544_k264, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k266, self)})));
}
static void _V10_Dloop_D544_lambda76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_lambda76, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D544_k263) (##inline ##vcore.car (bruijn ##.expr.99.545 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D544_k263, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D544_lambda75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_lambda75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1332 0 0) (close _V10_Dloop_D544_lambda76))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_lambda76, self)})));
}
static void _V10_Dloop_D544_k262(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_k262, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1330 1 0) (close _V10_Dloop_D544_lambda75) (bruijn ##.loop.544 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_lambda75, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D544_lambda74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D544_lambda74, got ~D~N"
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
  // ((close _V10_Dloop_D544_k259) (close _V10_Dloop_D544_k262))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D544_k259, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_k262, self)})));
}
static void _V10_Diter_D482_lambda73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D544_lambda74)) ((bruijn ##.loop.544 0 0) (bruijn ##.k.1329 1 0) (bruijn ##.head.92.540 3 1) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D544_lambda74, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      statics->up->up->vars[1],
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D482_lambda72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1328 0 0) (close _V10_Diter_D482_lambda73))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda73, self)})));
}
static void _V10_Diter_D482_k269(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k269, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1354 0 0) (bruijn ##.k.1350 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter_D482_k273(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k273, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1355 4 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.90.537 10 0)) (bruijn ##.x.1357 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 10-1, 0)),
        _var0)));
}
static void _V10_Diter_D482_k272(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k272, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.914 38 0) (close _V10_Diter_D482_k273) (bruijn ##.x.1358 1 0) (##inline ##vcore.cons (bruijn ##.x.1360 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k273, self)})),
      statics->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Diter_D482_k271(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k271, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 20 0) (close _V10_Diter_D482_k272) (##inline ##vcore.car (bruijn ##.tail.93.541 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k272, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
}
static void _V10_Diter_D482_k270(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k270, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 30 0) (close _V10_Diter_D482_k271) (bruijn ##.x.910 40 0) (bruijn ##.regs.554 2 2) (bruijn ##.x.1361 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k271, self)})),
      VGetArg(statics, 40-1, 0),
      statics->up->vars[2],
      _var0);
}
static void _V10_Diter_D482_lambda79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.482 19 0) (bruijn ##.k.1362 0 0) (bruijn ##.appl.558 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      _var0,
      _var1);
}
static void _V10_Diter_D482_lambda78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 29 0) (close _V10_Diter_D482_k270) (close _V10_Diter_D482_lambda79) (bruijn ##.applies.555 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k270, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda79, self)})),
      statics->vars[3]);
}
static void _V10_Diter_D482_lambda77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda77, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.553 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.93.541 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.93.541 1 2))) (##vcore.call-with-values (close _V10_Diter_D482_k269) (close _V10_Diter_D482_lambda78) (bruijn ##.kk.58.484 14 1)) ((bruijn ##.k.1350 0 0) #f)) ((bruijn ##.k.1350 0 0) #f)) ((bruijn ##.k.1350 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k269, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda78, self)})),
      VGetArg(statics, 14-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_lambda71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda71, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1327 0 0) (close _V10_Diter_D482_lambda72) (close _V10_Diter_D482_lambda77))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda72, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda77, self)})));
}
static void _V10_Diter_D482_k258(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k258, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1364 0 0) -1) ((bruijn ##.k.1322 5 0) #f) (##vcore.call-with-values (bruijn ##.k.1322 5 0) (close _V10_Diter_D482_lambda70) (close _V10_Diter_D482_lambda71)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda70, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda71, self)})));
}
}
static void _V10_Diter_D482_k257(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k257, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Diter_D482_k258) (bruijn ##.x.1365 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k258, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Diter_D482_k256(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k256, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.917 27 0) (close _V10_Diter_D482_k257) (bruijn ##.expr.91.539 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k257, self)})),
      _var0);
}
static void _V10_Diter_D482_k255(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k255, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.90.537 0 0)) ((close _V10_Diter_D482_k256) (##inline ##vcore.cdr (bruijn ##.expr.90.537 0 0))) ((bruijn ##.k.1322 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k256, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k254(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k254, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1323 0 0) ((close _V10_Diter_D482_k255) (##inline ##vcore.cdr (bruijn ##.expr.483 10 1))) ((bruijn ##.k.1322 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k255, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k253(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k253, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 9 1)) ((bruijn ##.x.902 39 0) (close _V10_Diter_D482_k254) 'basic-block (##inline ##vcore.car (bruijn ##.expr.483 9 1))) ((bruijn ##.k.1322 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k254, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k276(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k276, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1317 0 0) (bruijn ##.k.1316 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Diter_D482_k278(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k278, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1318 2 0) (##inline ##vcore.cons (bruijn ##.x.1319 1 0) (bruijn ##.x.1320 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Diter_D482_k277(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k277, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 13 0) (close _V10_Diter_D482_k278) (##inline ##vcore.cdr (bruijn ##.expr.483 12 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k278, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
}
static void _V10_Diter_D482_lambda80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.482 12 0) (close _V10_Diter_D482_k277) (##inline ##vcore.car (bruijn ##.expr.483 11 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k277, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 11-1, 1)));
}
static void _V10_Diter_D482_k275(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k275, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.483 10 1)) (##vcore.call-with-values (close _V10_Diter_D482_k276) (close _V10_Diter_D482_lambda80) (bruijn ##.kk.58.484 8 1)) ((bruijn ##.k.1316 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k276, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda80, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D482_k281(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k281, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.911 33 0) (bruijn ##.k.1300 10 0) (##string ##.string.2333))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D2333.sym, VPOINTER_OTHER));
}
static void _V10_Diter_D482_k280(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k280, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.1310 0 0) (close _V10_Diter_D482_k281))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k281, self)})));
}
static void _V10_Diter_D482_k283(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k283, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1311 3 0) (bruijn ##.atom.479 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VGetArg(statics, 16-1, 2));
}
static void _V10_Diter_D482_k282(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k282, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1312 0 0) (basic-block 1 1 (##.reg.2315) ((##vcore.- (bruijn ##.n.481 15 4) 1)) (set! (close _V10_Diter_D482_k283) (bruijn ##.n.481 15 4) (bruijn ##.reg.2315 0 0))) ((bruijn ##.k.1311 1 0) (bruijn ##.expr.483 12 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 15-1, 4),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k283, self)})),
      VEncodeInt(15l), VEncodeInt(4l),
      self->vars[0]
    );
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VGetArg(statics, 12-1, 1));
}
}
static void _V10_Diter_D482_lambda81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V10_Diter_D482_k282) (bruijn ##.x.478 13 1) (bruijn ##.expr.483 11 1))
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k282, self)})),
      VGetArg(statics, 13-1, 1),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Diter_D482_k279(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k279, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Diter_D482_k280) (close _V10_Diter_D482_lambda81) (bruijn ##.kk.58.484 8 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k280, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda81, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Diter_D482_k274(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k274, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k275) (close _V10_Diter_D482_k279))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k275, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k279, self)})));
}
static void _V10_Diter_D482_k252(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k252, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k253) (close _V10_Diter_D482_k274))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k253, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k274, self)})));
}
static void _V10_Diter_D482_k233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k234) (close _V10_Diter_D482_k252))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k234, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k252, self)})));
}
static void _V10_Diter_D482_k228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k229) (close _V10_Diter_D482_k233))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k229, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k233, self)})));
}
static void _V10_Diter_D482_k224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k225) (close _V10_Diter_D482_k228))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k225, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k228, self)})));
}
static void _V10_Diter_D482_k208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k209) (close _V10_Diter_D482_k224))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k209, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k224, self)})));
}
static void _V10_Diter_D482_k201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k201, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D482_k202) (close _V10_Diter_D482_k208))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k202, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k208, self)})));
}
static void _V10_Diter_D482_lambda49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter_D482_k195) (close _V10_Diter_D482_k201))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D482_k195, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k201, self)})));
}
static void _V10_Diter_D482_k194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1299 0 0) ((bruijn ##.k.1298 1 0) (bruijn ##.expr.483 1 1)) (##vcore.call/cc (bruijn ##.k.1298 1 0) (close _V10_Diter_D482_lambda49)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda49, self)})));
}
}
static void _V10_Diter_D482_lambda48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D482_lambda48, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.907 25 0) (close _V10_Diter_D482_k194) (bruijn ##.n.481 2 4) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_k194, self)})),
      statics->up->vars[4],
      VEncodeInt(0l));
}
static void _V10_Dsubstitute_D334_lambda47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsubstitute_D334_lambda47, got ~D~N"
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
  // (letrec 1 ((close _V10_Diter_D482_lambda48)) ((bruijn ##.iter.482 0 0) (bruijn ##.k.1297 1 0) (bruijn ##.expr.480 1 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D482_lambda48, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[3]);
    }
}
static void _V10_Dspecial__apply_Q_D335_lambda82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dspecial__apply_Q_D335_lambda82, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.x.904 26 0) (bruijn ##.k.1482 0 0) (bruijn ##.tok.563 0 1) (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'letrec '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 3,
      _var0,
      _var1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)));
}
static void _V10_Dloop_D565_lambda84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D565_lambda84, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.lst.566 0 1)) (basic-block 1 1 (##.reg.2316) ((##vcore.+ (bruijn ##.len.567 1 2) 1)) ((bruijn ##.loop.565 2 0) (bruijn ##.k.1486 1 0) (##inline ##vcore.cdr (bruijn ##.lst.566 1 1)) (bruijn ##.reg.2316 0 0))) ((bruijn ##.k.1486 0 0) (bruijn ##.len.567 0 2)))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
}
}
static void _V10_Dtaillength_D336_lambda83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtaillength_D336_lambda83, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D565_lambda84)) ((bruijn ##.loop.565 0 0) (bruijn ##.k.1485 1 0) (bruijn ##.lst.564 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D565_lambda84, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dadd__ref_B_D337_k284(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D337_k284, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2317) ((##vcore.+ (bruijn ##.n0.571 1 0) (bruijn ##.n.570 2 3))) ((bruijn ##.x.903 29 0) (bruijn ##.k.1490 2 0) (bruijn ##.refs.568 2 1) (bruijn ##.x.569 2 2) (bruijn ##.reg.2317 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->vars[0],
      statics->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 4,
      statics->up->vars[0],
      statics->up->vars[1],
      statics->up->vars[2],
      self->vars[0]);
    }
}
static void _V10_Dadd__ref_B_D337_lambda86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D337_lambda86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1492 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dadd__ref_B_D337_lambda85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__ref_B_D337_lambda85, got ~D~N"
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
  // ((bruijn ##.x.906 24 0) (close _V10_Dadd__ref_B_D337_k284) (bruijn ##.refs.568 0 1) (bruijn ##.x.569 0 2) (close _V10_Dadd__ref_B_D337_lambda86))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D337_k284, self)})),
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D337_lambda86, self)})));
}
static void _V10_Dsub__ref_B_D338_k287(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_k287, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1496 1 0) ((bruijn ##.x.911 22 0) (bruijn ##.k.1497 0 0) (##string ##.string.2334) (bruijn ##.x.573 3 2) (bruijn ##.n0.575 2 0) (bruijn ##.n.574 3 3)) ((bruijn ##.k.1497 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 5,
      _var0,
      VEncodePointer(&_V10_Dstring_D2334.sym, VPOINTER_OTHER),
      statics->up->up->vars[2],
      statics->up->vars[0],
      statics->up->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dsub__ref_B_D338_k288(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_k288, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2318) ((##vcore.- (bruijn ##.n0.575 3 0) (bruijn ##.n.574 4 3))) ((bruijn ##.x.903 31 0) (bruijn ##.k.1493 4 0) (bruijn ##.refs.572 4 1) (bruijn ##.x.573 4 2) (bruijn ##.reg.2318 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 4,
      statics->up->up->up->vars[0],
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2],
      self->vars[0]);
    }
}
static void _V10_Dsub__ref_B_D338_k286(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_k286, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dsub__ref_B_D338_k287) (close _V10_Dsub__ref_B_D338_k288))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dsub__ref_B_D338_k287, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D338_k288, self)})));
}
static void _V10_Dsub__ref_B_D338_k285(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_k285, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.915 16 0) (close _V10_Dsub__ref_B_D338_k286) (bruijn ##.n.574 1 3) (bruijn ##.n0.575 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D338_k286, self)})),
      statics->vars[3],
      _var0);
}
static void _V10_Dsub__ref_B_D338_lambda88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_lambda88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1498 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dsub__ref_B_D338_lambda87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__ref_B_D338_lambda87, got ~D~N"
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
  // ((bruijn ##.x.906 24 0) (close _V10_Dsub__ref_B_D338_k285) (bruijn ##.refs.572 0 1) (bruijn ##.x.573 0 2) (close _V10_Dsub__ref_B_D338_lambda88))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D338_k285, self)})),
      _var1,
      _var2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D338_lambda88, self)})));
}
static void _V10_Dadd__refs_B_D339_lambda90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D339_lambda90, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.2319) ((##vcore.* (bruijn ##.n.580 3 3) (##inline ##vcore.cdr (bruijn ##.keyval.581 1 1)))) ((bruijn ##.add-ref!.337 4 6) (bruijn ##.k.1501 1 0) (bruijn ##.arefs.578 3 1) (##inline ##vcore.car (bruijn ##.keyval.581 1 1)) (bruijn ##.reg.2319 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VMul2(runtime, NULL,
      statics->up->up->vars[3],
      VInlineCdr2(runtime,
        statics->vars[1]));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[6]), 4,
      statics->vars[0],
      statics->up->up->vars[1],
      VInlineCar2(runtime,
        statics->vars[1]),
      self->vars[0]);
    }
}
static void _V10_Dadd__refs_B_D339_k289(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D339_k289, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.924 7 0) (bruijn ##.k.1500 1 0) (close _V10_Dadd__refs_B_D339_lambda90) (bruijn ##.x.1505 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D339_lambda90, self)})),
      _var0);
}
__attribute__((used)) static void _V20CaseError__V10_Dadd__refs_B_D339_lambda89(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // (_V10_Dadd__refs_B_D339_lambda89 #t (3 ((bruijn ##.add-refs!.339 1 8) (bruijn ##.k.1499 0 0) (bruijn ##.arefs.576 0 1) (bruijn ##.brefs.577 0 2) 1)) (4 ((bruijn ##.x.925 5 0) (close _V10_Dadd__refs_B_D339_k289) (bruijn ##.brefs.579 0 2))))
 VErrorC(runtime, "Not enough arguments to _V10_Dadd__refs_B_D339_lambda89, got ~D~N"
 "-- expected 3~N"
 "-- expected 4~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V10_Dadd__refs_B_D339_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // ((bruijn ##.add-refs!.339 1 8) (bruijn ##.k.1499 0 0) (bruijn ##.arefs.576 0 1) (bruijn ##.brefs.577 0 2) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[8]), 4,
      _var0,
      _var1,
      _var2,
      VEncodeInt(1l));
}
__attribute__((used)) static void _V20Case1__V10_Dadd__refs_B_D339_lambda89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.925 5 0) (close _V10_Dadd__refs_B_D339_k289) (bruijn ##.brefs.579 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D339_k289, self)})),
      _var2);
}
void _V10_Dadd__refs_B_D339_lambda89(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V10_Dadd__refs_B_D339_lambda89, @function\n"
#endif
"_V10_Dadd__refs_B_D339_lambda89:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V10_Dadd__refs_B_D339_lambda89\n"
"    cmp " ARGC_REG ", 4\n"
"    je _V20Case1__V10_Dadd__refs_B_D339_lambda89\n"
"    jmp _V20CaseError__V10_Dadd__refs_B_D339_lambda89\n"
);
static void _V10_Dsub__refs_B_D340_lambda92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D340_lambda92, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.sub-ref!.338 3 7) (bruijn ##.k.1507 0 0) (bruijn ##.arefs.582 2 1) (##inline ##vcore.car (bruijn ##.keyval.584 0 1)) (##inline ##vcore.cdr (bruijn ##.keyval.584 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 4,
      _var0,
      statics->up->vars[1],
      VInlineCar2(runtime,
        _var1),
      VInlineCdr2(runtime,
        _var1));
}
static void _V10_Dsub__refs_B_D340_k290(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D340_k290, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.924 7 0) (bruijn ##.k.1506 1 0) (close _V10_Dsub__refs_B_D340_lambda92) (bruijn ##.x.1510 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D340_lambda92, self)})),
      _var0);
}
static void _V10_Dsub__refs_B_D340_lambda91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsub__refs_B_D340_lambda91, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.925 5 0) (close _V10_Dsub__refs_B_D340_k290) (bruijn ##.brefs.583 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D340_k290, self)})),
      _var2);
}
static void _V10_Dcount__refs__atom_D588_k295(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k295, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1590 0 0) (bruijn ##.k.1588 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1591 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D588_k294(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k294, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1589 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k295) (close _V10_Dcount__refs__atom_D588_lambda96) (bruijn ##.kk.104.591 2 1)) ((bruijn ##.k.1588 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k295, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda96, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k293(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k293, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 2 1)) ((bruijn ##.x.902 34 0) (close _V10_Dcount__refs__atom_D588_k294) 'quote (##inline ##vcore.car (bruijn ##.expr.590 2 1))) ((bruijn ##.k.1588 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k294, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k299(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k299, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1584 0 0) (bruijn ##.k.1582 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1585 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dcount__refs__atom_D588_k298(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k298, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1583 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k299) (close _V10_Dcount__refs__atom_D588_lambda97) (bruijn ##.kk.104.591 3 1)) ((bruijn ##.k.1582 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k299, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda97, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k297(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k297, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 3 1)) ((bruijn ##.x.902 35 0) (close _V10_Dcount__refs__atom_D588_k298) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.590 3 1))) ((bruijn ##.k.1582 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k298, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k303(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k303, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1578 0 0) (bruijn ##.k.1576 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.924 16 0) (bruijn ##.k.1579 0 0) (bruijn ##.count-refs-atom.588 7 2) (##inline ##vcore.cdr (bruijn ##.expr.590 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VGetArg(statics, 7-1, 2),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dcount__refs__atom_D588_k302(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k302, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1577 0 0) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k303) (close _V10_Dcount__refs__atom_D588_lambda98) (bruijn ##.kk.104.591 4 1)) ((bruijn ##.k.1576 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k303, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda98, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k301(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k301, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 4 1)) ((bruijn ##.x.902 36 0) (close _V10_Dcount__refs__atom_D588_k302) '##inline (##inline ##vcore.car (bruijn ##.expr.590 4 1))) ((bruijn ##.k.1576 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k302, self)})),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k309(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k309, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1571 0 0) (bruijn ##.k.1566 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 10 3) (bruijn ##.k.1572 0 0) (##inline ##vcore.car (bruijn ##.expr.111.599 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__atom_D588_k308(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k308, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.111.599 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.111.599 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k309) (close _V10_Dcount__refs__atom_D588_lambda99) (bruijn ##.kk.104.591 7 1)) ((bruijn ##.k.1566 3 0) #f)) ((bruijn ##.k.1566 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k309, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda99, self)})),
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
static void _V10_Dcount__refs__atom_D588_k307(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k307, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.110.598 0 0)) ((close _V10_Dcount__refs__atom_D588_k308) (##inline ##vcore.cdr (bruijn ##.expr.110.598 0 0))) ((bruijn ##.k.1566 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k308, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k306(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k306, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1567 0 0) ((close _V10_Dcount__refs__atom_D588_k307) (##inline ##vcore.cdr (bruijn ##.expr.590 6 1))) ((bruijn ##.k.1566 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k307, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k305(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k305, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 5 1)) ((bruijn ##.x.902 37 0) (close _V10_Dcount__refs__atom_D588_k306) 'lambda (##inline ##vcore.car (bruijn ##.expr.590 5 1))) ((bruijn ##.k.1566 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k306, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k315(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k315, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1561 0 0) (bruijn ##.k.1556 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 11 3) (bruijn ##.k.1562 0 0) (##inline ##vcore.car (bruijn ##.expr.114.603 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__atom_D588_k314(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k314, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.114.603 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.114.603 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k315) (close _V10_Dcount__refs__atom_D588_lambda100) (bruijn ##.kk.104.591 8 1)) ((bruijn ##.k.1556 3 0) #f)) ((bruijn ##.k.1556 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k315, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda100, self)})),
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
static void _V10_Dcount__refs__atom_D588_k313(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k313, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.113.602 0 0)) ((close _V10_Dcount__refs__atom_D588_k314) (##inline ##vcore.cdr (bruijn ##.expr.113.602 0 0))) ((bruijn ##.k.1556 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k314, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k312(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k312, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1557 0 0) ((close _V10_Dcount__refs__atom_D588_k313) (##inline ##vcore.cdr (bruijn ##.expr.590 7 1))) ((bruijn ##.k.1556 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k313, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k311(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k311, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 6 1)) ((bruijn ##.x.902 38 0) (close _V10_Dcount__refs__atom_D588_k312) 'continuation (##inline ##vcore.car (bruijn ##.expr.590 6 1))) ((bruijn ##.k.1556 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k312, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D608_k320(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k320, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.118.607 4 1) (bruijn ##.k.1546 1 0) (bruijn ##.expr.120.609 2 1) (bruijn ##.x.1547 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D608_k319(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k319, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.120.609 1 1))) ((bruijn ##.x.921 26 0) (close _V10_Dloop_D608_k320) (bruijn ##.body.117.610 1 2)) ((bruijn ##.k.1546 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_k320, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D608_k324(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k324, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.122.613 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.122.613 0 0))) ((bruijn ##.kk.119.611 3 1) (bruijn ##.k.1539 1 0) (##inline ##vcore.cdr (bruijn ##.expr.120.609 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.122.613 0 0)) (bruijn ##.body.117.610 6 2))) ((bruijn ##.k.1539 1 0) #f)) ((bruijn ##.k.1539 1 0) #f))
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
static void _V10_Dloop_D608_k323(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k323, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.121.612 1 0)) ((close _V10_Dloop_D608_k324) (##inline ##vcore.cdr (bruijn ##.expr.121.612 1 0))) ((bruijn ##.k.1539 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D608_k324, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D608_k326(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k326, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.118.607 8 1) (bruijn ##.k.1535 3 0) (bruijn ##.expr.120.609 6 1) (bruijn ##.x.1537 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D608_k325(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k325, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 30 0) (close _V10_Dloop_D608_k326) (bruijn ##.body.117.610 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_k326, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D608_k322(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k322, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D608_k323) (close _V10_Dloop_D608_k325))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D608_k323, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_k325, self)})));
}
static void _V10_Dloop_D608_lambda105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_lambda105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D608_k322) (##inline ##vcore.car (bruijn ##.expr.120.609 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D608_k322, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D608_lambda104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_lambda104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1534 0 0) (close _V10_Dloop_D608_lambda105))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_lambda105, self)})));
}
static void _V10_Dloop_D608_k321(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_k321, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1532 1 0) (close _V10_Dloop_D608_lambda104) (bruijn ##.loop.608 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_lambda104, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D608_lambda103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D608_lambda103, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D608_k319) (close _V10_Dloop_D608_k321))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D608_k319, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_k321, self)})));
}
static void _V10_Dcount__refs__atom_D588_lambda102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D608_lambda103)) ((bruijn ##.loop.608 0 0) (bruijn ##.k.1531 1 0) (##inline ##vcore.cdr (bruijn ##.expr.590 11 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D608_lambda103, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VNULL);
    }
}
static void _V10_Dcount__refs__atom_D588_lambda101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1530 0 0) (close _V10_Dcount__refs__atom_D588_lambda102))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda102, self)})));
}
static void _V10_Dcount__refs__atom_D588_k327(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k327, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1551 0 0) (bruijn ##.k.1549 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcount__refs__atom_D588_lambda108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 12 3) (bruijn ##.k.1553 0 0) (bruijn ##.body.617 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 2,
      _var0,
      _var1);
}
static void _V10_Dcount__refs__atom_D588_lambda107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.924 20 0) (bruijn ##.k.1552 0 0) (close _V10_Dcount__refs__atom_D588_lambda108) (bruijn ##.body.616 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda108, self)})),
      statics->vars[2]);
}
static void _V10_Dcount__refs__atom_D588_lambda106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda106, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.615 0 1)) (##vcore.call-with-values (close _V10_Dcount__refs__atom_D588_k327) (close _V10_Dcount__refs__atom_D588_lambda107) (bruijn ##.kk.104.591 8 1)) ((bruijn ##.k.1549 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k327, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda107, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k318(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k318, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1529 0 0) (##vcore.call-with-values (bruijn ##.k.1528 1 0) (close _V10_Dcount__refs__atom_D588_lambda101) (close _V10_Dcount__refs__atom_D588_lambda106)) ((bruijn ##.k.1528 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda101, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda106, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k317(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k317, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.590 7 1)) ((bruijn ##.x.902 39 0) (close _V10_Dcount__refs__atom_D588_k318) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.590 7 1))) ((bruijn ##.k.1528 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k318, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__atom_D588_k329(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k329, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2321) ((##vcore.+ 1 (bruijn ##.x.1525 1 0))) ((bruijn ##.x.903 42 0) (bruijn ##.k.1522 3 0) (bruijn ##.count-table.586 12 0) (bruijn ##.expr.590 11 1) (bruijn ##.reg.2321 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VEncodeInt(1l),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 12-1, 0),
      VGetArg(statics, 11-1, 1),
      self->vars[0]);
    }
}
static void _V10_Dcount__refs__atom_D588_lambda110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1526 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dcount__refs__atom_D588_lambda109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2320) ((##vcore.symbol? (bruijn ##.expr.590 9 1))) (if (bruijn ##.reg.2320 0 0) ((bruijn ##.x.906 37 0) (close _V10_Dcount__refs__atom_D588_k329) (bruijn ##.count-table.586 10 0) (bruijn ##.expr.590 9 1) (close _V10_Dcount__refs__atom_D588_lambda110)) ((bruijn ##.k.1522 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k329, self)})),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 9-1, 1),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda110, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dcount__refs__atom_D588_k328(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k328, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1515 6 0) (close _V10_Dcount__refs__atom_D588_lambda109) (bruijn ##.kk.104.591 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda109, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dcount__refs__atom_D588_k316(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k316, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D588_k317) (close _V10_Dcount__refs__atom_D588_k328))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k317, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k328, self)})));
}
static void _V10_Dcount__refs__atom_D588_k310(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k310, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D588_k311) (close _V10_Dcount__refs__atom_D588_k316))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k311, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k316, self)})));
}
static void _V10_Dcount__refs__atom_D588_k304(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k304, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D588_k305) (close _V10_Dcount__refs__atom_D588_k310))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k305, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k310, self)})));
}
static void _V10_Dcount__refs__atom_D588_k300(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k300, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D588_k301) (close _V10_Dcount__refs__atom_D588_k304))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k301, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k304, self)})));
}
static void _V10_Dcount__refs__atom_D588_k296(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_k296, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__atom_D588_k297) (close _V10_Dcount__refs__atom_D588_k300))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k297, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k300, self)})));
}
static void _V10_Dcount__refs__atom_D588_lambda95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda95, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcount__refs__atom_D588_k293) (close _V10_Dcount__refs__atom_D588_k296))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__atom_D588_k293, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_k296, self)})));
}
static void _V10_Dcount__refs__atom_D588_lambda94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__atom_D588_lambda94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1514 0 0) (close _V10_Dcount__refs__atom_D588_lambda95))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda95, self)})));
}
static void _V10_Dloop_D625_k334(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k334, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.129.624 4 1) (bruijn ##.k.1690 1 0) (bruijn ##.expr.131.626 2 1) (bruijn ##.x.1691 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D625_k333(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k333, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.131.626 1 1))) ((bruijn ##.x.921 22 0) (close _V10_Dloop_D625_k334) (bruijn ##.vals.128.627 1 2)) ((bruijn ##.k.1690 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_k334, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D625_k338(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k338, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.133.630 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.133.630 0 0))) ((bruijn ##.kk.130.628 3 1) (bruijn ##.k.1683 1 0) (##inline ##vcore.cdr (bruijn ##.expr.131.626 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.133.630 0 0)) (bruijn ##.vals.128.627 6 2))) ((bruijn ##.k.1683 1 0) #f)) ((bruijn ##.k.1683 1 0) #f))
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
static void _V10_Dloop_D625_k337(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k337, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.132.629 1 0)) ((close _V10_Dloop_D625_k338) (##inline ##vcore.cdr (bruijn ##.expr.132.629 1 0))) ((bruijn ##.k.1683 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D625_k338, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D625_k340(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k340, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.129.624 8 1) (bruijn ##.k.1679 3 0) (bruijn ##.expr.131.626 6 1) (bruijn ##.x.1681 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D625_k339(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k339, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 26 0) (close _V10_Dloop_D625_k340) (bruijn ##.vals.128.627 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_k340, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D625_k336(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k336, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D625_k337) (close _V10_Dloop_D625_k339))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D625_k337, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_k339, self)})));
}
static void _V10_Dloop_D625_lambda117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_lambda117, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D625_k336) (##inline ##vcore.car (bruijn ##.expr.131.626 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D625_k336, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D625_lambda116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_lambda116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1678 0 0) (close _V10_Dloop_D625_lambda117))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_lambda117, self)})));
}
static void _V10_Dloop_D625_k335(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_k335, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1676 1 0) (close _V10_Dloop_D625_lambda116) (bruijn ##.loop.625 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_lambda116, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D625_lambda115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D625_lambda115, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D625_k333) (close _V10_Dloop_D625_k335))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D625_k333, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_k335, self)})));
}
static void _V10_Dcount__refs__apply_D589_lambda114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D625_lambda115)) ((bruijn ##.loop.625 0 0) (bruijn ##.k.1675 1 0) (##inline ##vcore.car (bruijn ##.expr.126.622 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D625_lambda115, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Dcount__refs__apply_D589_lambda113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1674 0 0) (close _V10_Dcount__refs__apply_D589_lambda114))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda114, self)})));
}
static void _V10_Dcount__refs__apply_D589_k342(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k342, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1697 0 0) (bruijn ##.k.1693 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D589_k343(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k343, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 9 3) (bruijn ##.k.1698 1 0) (##inline ##vcore.car (bruijn ##.expr.134.634 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 2,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_lambda119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.924 17 0) (close _V10_Dcount__refs__apply_D589_k343) (bruijn ##.count-refs-atom.588 8 2) (bruijn ##.vals.633 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k343, self)})),
      VGetArg(statics, 8-1, 2),
      statics->up->vars[2]);
}
static void _V10_Dcount__refs__apply_D589_k341(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k341, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.134.634 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.134.634 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D589_k342) (close _V10_Dcount__refs__apply_D589_lambda119) (bruijn ##.kk.123.619 5 1)) ((bruijn ##.k.1693 1 0) #f)) ((bruijn ##.k.1693 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k342, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda119, self)})),
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
static void _V10_Dcount__refs__apply_D589_lambda118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda118, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.632 0 1)) ((close _V10_Dcount__refs__apply_D589_k341) (##inline ##vcore.cdr (bruijn ##.expr.126.622 1 0))) ((bruijn ##.k.1693 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k341, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k332(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k332, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.126.622 0 0)) (##vcore.call-with-values (bruijn ##.k.1671 2 0) (close _V10_Dcount__refs__apply_D589_lambda113) (close _V10_Dcount__refs__apply_D589_lambda118)) ((bruijn ##.k.1671 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda113, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda118, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k331(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k331, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1672 0 0) ((close _V10_Dcount__refs__apply_D589_k332) (##inline ##vcore.cdr (bruijn ##.expr.618 3 1))) ((bruijn ##.k.1671 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k332, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k330(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k330, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.618 2 1)) ((bruijn ##.x.902 34 0) (close _V10_Dcount__refs__apply_D589_k331) 'letrec (##inline ##vcore.car (bruijn ##.expr.618 2 1))) ((bruijn ##.k.1671 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k331, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k350(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k350, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1664 0 0) (bruijn ##.k.1658 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dcount__refs__apply_D589_k352(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k352, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 11 3) (bruijn ##.k.1665 2 0) (##inline ##vcore.car (bruijn ##.expr.138.641 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      statics->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_k351(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k351, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-apply.589 10 3) (close _V10_Dcount__refs__apply_D589_k352) (##inline ##vcore.car (bruijn ##.expr.137.639 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k352, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_lambda120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.588 9 2) (close _V10_Dcount__refs__apply_D589_k351) (##inline ##vcore.car (bruijn ##.expr.136.637 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k351, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_k349(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k349, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.138.641 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.138.641 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D589_k350) (close _V10_Dcount__refs__apply_D589_lambda120) (bruijn ##.kk.123.619 6 1)) ((bruijn ##.k.1658 4 0) #f)) ((bruijn ##.k.1658 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k350, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda120, self)})),
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
static void _V10_Dcount__refs__apply_D589_k348(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k348, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.137.639 0 0)) ((close _V10_Dcount__refs__apply_D589_k349) (##inline ##vcore.cdr (bruijn ##.expr.137.639 0 0))) ((bruijn ##.k.1658 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k349, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k347(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k347, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.136.637 0 0)) ((close _V10_Dcount__refs__apply_D589_k348) (##inline ##vcore.cdr (bruijn ##.expr.136.637 0 0))) ((bruijn ##.k.1658 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k348, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k346(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k346, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1659 0 0) ((close _V10_Dcount__refs__apply_D589_k347) (##inline ##vcore.cdr (bruijn ##.expr.618 4 1))) ((bruijn ##.k.1658 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k347, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k345(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k345, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.618 3 1)) ((bruijn ##.x.902 35 0) (close _V10_Dcount__refs__apply_D589_k346) 'if (##inline ##vcore.car (bruijn ##.expr.618 3 1))) ((bruijn ##.k.1658 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k346, self)})),
      _V0if,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k360(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k360, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1650 0 0) (bruijn ##.k.1644 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dcount__refs__apply_D589_k363(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k363, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.903 44 0) (bruijn ##.k.1651 3 0) (bruijn ##.impure-table.587 14 1) (bruijn ##.y.647 5 0) #t)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 14-1, 1),
      VGetArg(statics, 5-1, 0),
      VEncodeBool(true));
}
static void _V10_Dcount__refs__apply_D589_k362(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k362, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.588 13 2) (close _V10_Dcount__refs__apply_D589_k363) (##inline ##vcore.car (bruijn ##.expr.142.648 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k363, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_k361(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k361, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.588 12 2) (close _V10_Dcount__refs__apply_D589_k362) (bruijn ##.y.647 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k362, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dcount__refs__apply_D589_lambda121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.588 11 2) (close _V10_Dcount__refs__apply_D589_k361) (##inline ##vcore.car (bruijn ##.expr.140.644 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k361, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_k359(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k359, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.142.648 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.142.648 0 0))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D589_k360) (close _V10_Dcount__refs__apply_D589_lambda121) (bruijn ##.kk.123.619 8 1)) ((bruijn ##.k.1644 5 0) #f)) ((bruijn ##.k.1644 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k360, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda121, self)})),
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
static void _V10_Dcount__refs__apply_D589_k358(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k358, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D589_k359) (##inline ##vcore.cdr (bruijn ##.expr.141.646 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k359, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dcount__refs__apply_D589_k357(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k357, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.141.646 0 0)) ((close _V10_Dcount__refs__apply_D589_k358) (##inline ##vcore.car (bruijn ##.expr.141.646 0 0))) ((bruijn ##.k.1644 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k358, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k356(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k356, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.140.644 0 0)) ((close _V10_Dcount__refs__apply_D589_k357) (##inline ##vcore.cdr (bruijn ##.expr.140.644 0 0))) ((bruijn ##.k.1644 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k357, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k355(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k355, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1645 0 0) ((close _V10_Dcount__refs__apply_D589_k356) (##inline ##vcore.cdr (bruijn ##.expr.618 5 1))) ((bruijn ##.k.1644 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k356, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k354(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k354, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.618 4 1)) ((bruijn ##.x.902 36 0) (close _V10_Dcount__refs__apply_D589_k355) 'set! (##inline ##vcore.car (bruijn ##.expr.618 4 1))) ((bruijn ##.k.1644 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k355, self)})),
      _V0set_B,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_lambda122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.916 29 0) (bruijn ##.k.1611 0 0) (bruijn ##.expr.145.653 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dloop_D658_k372(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k372, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.150.657 4 1) (bruijn ##.k.1629 1 0) (bruijn ##.expr.152.659 2 1) (bruijn ##.x.1630 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D658_k371(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k371, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.152.659 1 1))) ((bruijn ##.x.921 29 0) (close _V10_Dloop_D658_k372) (bruijn ##.applies.149.660 1 2)) ((bruijn ##.k.1629 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_k372, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D658_k376(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k376, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.154.663 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.154.663 0 0))) ((bruijn ##.kk.151.661 3 1) (bruijn ##.k.1622 1 0) (##inline ##vcore.cdr (bruijn ##.expr.152.659 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.154.663 0 0)) (bruijn ##.applies.149.660 6 2))) ((bruijn ##.k.1622 1 0) #f)) ((bruijn ##.k.1622 1 0) #f))
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
static void _V10_Dloop_D658_k375(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k375, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.153.662 1 0)) ((close _V10_Dloop_D658_k376) (##inline ##vcore.cdr (bruijn ##.expr.153.662 1 0))) ((bruijn ##.k.1622 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D658_k376, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D658_k378(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k378, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.150.657 8 1) (bruijn ##.k.1618 3 0) (bruijn ##.expr.152.659 6 1) (bruijn ##.x.1620 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 1)), 3,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D658_k377(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k377, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 33 0) (close _V10_Dloop_D658_k378) (bruijn ##.applies.149.660 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_k378, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D658_k374(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k374, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D658_k375) (close _V10_Dloop_D658_k377))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D658_k375, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_k377, self)})));
}
static void _V10_Dloop_D658_lambda128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_lambda128, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D658_k374) (##inline ##vcore.car (bruijn ##.expr.152.659 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D658_k374, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D658_lambda127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_lambda127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1617 0 0) (close _V10_Dloop_D658_lambda128))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_lambda128, self)})));
}
static void _V10_Dloop_D658_k373(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_k373, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1615 1 0) (close _V10_Dloop_D658_lambda127) (bruijn ##.loop.658 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_lambda127, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D658_lambda126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D658_lambda126, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D658_k371) (close _V10_Dloop_D658_k373))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D658_k371, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_k373, self)})));
}
static void _V10_Dcount__refs__apply_D589_lambda125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda125, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D658_lambda126)) ((bruijn ##.loop.658 0 0) (bruijn ##.k.1614 1 0) (bruijn ##.head.146.654 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D658_lambda126, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      VNULL);
    }
}
static void _V10_Dcount__refs__apply_D589_lambda124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1613 0 0) (close _V10_Dcount__refs__apply_D589_lambda125))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda125, self)})));
}
static void _V10_Dcount__refs__apply_D589_k379(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k379, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1636 0 0) (bruijn ##.k.1632 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcount__refs__apply_D589_k380(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k380, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs-apply.589 15 3) (bruijn ##.k.1637 1 0) (##inline ##vcore.car (bruijn ##.tail.147.655 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
}
static void _V10_Dcount__refs__apply_D589_lambda130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.924 23 0) (close _V10_Dcount__refs__apply_D589_k380) (bruijn ##.count-refs-apply.589 14 3) (bruijn ##.applies.666 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k380, self)})),
      VGetArg(statics, 14-1, 3),
      statics->vars[2]);
}
static void _V10_Dcount__refs__apply_D589_lambda129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda129, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.665 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.147.655 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.147.655 1 2))) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D589_k379) (close _V10_Dcount__refs__apply_D589_lambda130) (bruijn ##.kk.123.619 11 1)) ((bruijn ##.k.1632 0 0) #f)) ((bruijn ##.k.1632 0 0) #f)) ((bruijn ##.k.1632 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k379, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda130, self)})),
      VGetArg(statics, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_lambda123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda123, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.1612 0 0) (close _V10_Dcount__refs__apply_D589_lambda124) (close _V10_Dcount__refs__apply_D589_lambda129))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda124, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda129, self)})));
}
static void _V10_Dcount__refs__apply_D589_k370(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k370, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.1640 0 0) -1) ((bruijn ##.k.1607 5 0) #f) (##vcore.call-with-values (bruijn ##.k.1607 5 0) (close _V10_Dcount__refs__apply_D589_lambda122) (close _V10_Dcount__refs__apply_D589_lambda123)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda122, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda123, self)})));
}
}
static void _V10_Dcount__refs__apply_D589_k369(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k369, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Dcount__refs__apply_D589_k370) (bruijn ##.x.1641 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k370, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Dcount__refs__apply_D589_k368(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k368, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.917 25 0) (close _V10_Dcount__refs__apply_D589_k369) (bruijn ##.expr.145.653 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k369, self)})),
      _var0);
}
static void _V10_Dcount__refs__apply_D589_k367(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k367, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.144.651 0 0)) ((close _V10_Dcount__refs__apply_D589_k368) (##inline ##vcore.cdr (bruijn ##.expr.144.651 0 0))) ((bruijn ##.k.1607 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k368, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k366(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k366, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1608 0 0) ((close _V10_Dcount__refs__apply_D589_k367) (##inline ##vcore.cdr (bruijn ##.expr.618 6 1))) ((bruijn ##.k.1607 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k367, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k365(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k365, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.618 5 1)) ((bruijn ##.x.902 37 0) (close _V10_Dcount__refs__apply_D589_k366) 'basic-block (##inline ##vcore.car (bruijn ##.expr.618 5 1))) ((bruijn ##.k.1607 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k366, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_k383(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k383, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1603 0 0) (bruijn ##.k.1602 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Dcount__refs__apply_D589_k384(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k384, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.924 18 0) (bruijn ##.k.1604 1 0) (bruijn ##.count-refs-atom.588 9 2) (##inline ##vcore.cdr (bruijn ##.expr.618 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      statics->vars[0],
      VGetArg(statics, 9-1, 2),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
static void _V10_Dcount__refs__apply_D589_lambda131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.count-refs-atom.588 8 2) (close _V10_Dcount__refs__apply_D589_k384) (##inline ##vcore.car (bruijn ##.expr.618 7 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k384, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
}
static void _V10_Dcount__refs__apply_D589_k382(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k382, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.618 6 1)) (##vcore.call-with-values (close _V10_Dcount__refs__apply_D589_k383) (close _V10_Dcount__refs__apply_D589_lambda131) (bruijn ##.kk.123.619 5 1)) ((bruijn ##.k.1602 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k383, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda131, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcount__refs__apply_D589_lambda132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 22 0) (bruijn ##.k.1600 0 0) (##string ##.string.2335) (bruijn ##.expr.618 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2335.sym, VPOINTER_OTHER),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dcount__refs__apply_D589_k385(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k385, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1594 5 0) (close _V10_Dcount__refs__apply_D589_lambda132) (bruijn ##.kk.123.619 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda132, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Dcount__refs__apply_D589_k381(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k381, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D589_k382) (close _V10_Dcount__refs__apply_D589_k385))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k382, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k385, self)})));
}
static void _V10_Dcount__refs__apply_D589_k364(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k364, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D589_k365) (close _V10_Dcount__refs__apply_D589_k381))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k365, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k381, self)})));
}
static void _V10_Dcount__refs__apply_D589_k353(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k353, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D589_k354) (close _V10_Dcount__refs__apply_D589_k364))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k354, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k364, self)})));
}
static void _V10_Dcount__refs__apply_D589_k344(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_k344, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs__apply_D589_k345) (close _V10_Dcount__refs__apply_D589_k353))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k345, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k353, self)})));
}
static void _V10_Dcount__refs__apply_D589_lambda112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda112, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dcount__refs__apply_D589_k330) (close _V10_Dcount__refs__apply_D589_k344))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs__apply_D589_k330, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_k344, self)})));
}
static void _V10_Dcount__refs__apply_D589_lambda111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs__apply_D589_lambda111, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1593 0 0) (close _V10_Dcount__refs__apply_D589_lambda112))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda112, self)})));
}
static void _V10_Dcount__refs_D341_k387(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_k387, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1703 1 0) ((bruijn ##.count-refs-apply.589 2 3) (bruijn ##.k.1704 0 0) (bruijn ##.expr.585 5 1)) ((bruijn ##.count-refs-atom.588 2 2) (bruijn ##.k.1704 0 0) (bruijn ##.expr.585 5 1)))
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
static void _V10_Dcount__refs_D341_k388(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_k388, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.922 13 0) (bruijn ##.k.1511 5 0) (bruijn ##.count-table.586 2 0) (bruijn ##.impure-table.587 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      statics->up->vars[1]);
}
static void _V10_Dcount__refs_D341_k386(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_k386, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dcount__refs_D341_k387) (close _V10_Dcount__refs_D341_k388))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dcount__refs_D341_k387, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D341_k388, self)})));
}
static void _V10_Dcount__refs_D341_k292(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_k292, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 4 ((bruijn ##.x.1512 2 0) (bruijn ##.x.1513 1 0) (close _V10_Dcount__refs__atom_D588_lambda94) (close _V10_Dcount__refs__apply_D589_lambda111)) ((bruijn ##.application?.331 4 0) (close _V10_Dcount__refs_D341_k386) (bruijn ##.expr.585 3 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__atom_D588_lambda94, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs__apply_D589_lambda111, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D341_k386, self)})),
      statics->up->up->vars[1]);
    }
}
static void _V10_Dcount__refs_D341_k291(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_k291, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.923 8 0) (close _V10_Dcount__refs_D341_k292) (##intrinsic ##vcore.eqv?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D341_k292, self)})),
      _V40_V10vcore_Deqv_Q);
}
static void _V10_Dcount__refs_D341_lambda93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcount__refs_D341_lambda93, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.923 7 0) (close _V10_Dcount__refs_D341_k291) (##intrinsic ##vcore.eqv?))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D341_k291, self)})),
      _V40_V10vcore_Deqv_Q);
}
static void _V10_Doptimize__lambda_D674_k392(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k392, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1715 0 0) (bruijn ##.k.1711 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__lambda_D674_k393(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k393, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1716 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.683 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.171.688 3 0)) (##inline ##vcore.cons (bruijn ##.x.1719 0 0) '()))))
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
static void _V10_Doptimize__lambda_D674_lambda136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_lambda136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.678 6 4) (close _V10_Doptimize__lambda_D674_k393) (##inline ##vcore.car (bruijn ##.expr.172.690 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_k393, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__lambda_D674_k391(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k391, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.172.690 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.172.690 0 0))) (##vcore.call-with-values (close _V10_Doptimize__lambda_D674_k392) (close _V10_Doptimize__lambda_D674_lambda136) (bruijn ##.kk.168.684 3 1)) ((bruijn ##.k.1711 2 0) #f)) ((bruijn ##.k.1711 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_k392, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_lambda136, self)})),
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
static void _V10_Doptimize__lambda_D674_k390(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k390, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.171.688 0 0)) ((close _V10_Doptimize__lambda_D674_k391) (##inline ##vcore.cdr (bruijn ##.expr.171.688 0 0))) ((bruijn ##.k.1711 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D674_k391, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D674_k389(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k389, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.683 2 1)) ((close _V10_Doptimize__lambda_D674_k390) (##inline ##vcore.cdr (bruijn ##.expr.683 2 1))) ((bruijn ##.k.1711 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D674_k390, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__lambda_D674_lambda137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_lambda137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 16 0) (bruijn ##.k.1709 0 0) (##string ##.string.2336) (bruijn ##.expr.683 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2336.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
static void _V10_Doptimize__lambda_D674_k394(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_k394, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1707 1 0) (close _V10_Doptimize__lambda_D674_lambda137) (bruijn ##.kk.168.684 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_lambda137, self)})),
      statics->vars[1]);
}
static void _V10_Doptimize__lambda_D674_lambda135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_lambda135, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__lambda_D674_k389) (close _V10_Doptimize__lambda_D674_k394))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__lambda_D674_k389, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_k394, self)})));
}
static void _V10_Doptimize__lambda_D674_lambda134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__lambda_D674_lambda134, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1706 0 0) (close _V10_Doptimize__lambda_D674_lambda135))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_lambda135, self)})));
}
static void _V10_Dinline__let_D675_k397(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k397, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1721 3 0) (##inline ##vcore.cons (bruijn ##.x.1724 1 0) (bruijn ##.x.1725 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dinline__let_D675_k396(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k396, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 13 0) (close _V10_Dinline__let_D675_k397) (bruijn ##.done-xs.694 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k397, self)})),
      statics->up->vars[3]);
}
static void _V10_Dinline__let_D675_k395(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k395, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.679 2 5) (close _V10_Dinline__let_D675_k396) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.x.1728 0 0) (##inline ##vcore.cons (bruijn ##.expr.692 1 1) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k396, self)})),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        statics->vars[1],
        VNULL))));
}
static void _V10_Dinline__let_D675_k407(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k407, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1764 0 0) ((bruijn ##.k.1762 2 0) (bruijn ##.p.1764 0 0)) ((bruijn ##.x.907 35 0) (bruijn ##.k.1762 2 0) (bruijn ##.refs.701 5 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l));
}
}
static void _V10_Dinline__let_D675_k406(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k406, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1763 0 0) ((bruijn ##.k.1762 1 0) (bruijn ##.p.1763 0 0)) (##vcore.eqv? (close _V10_Dinline__let_D675_k407) (##inline ##vcore.car (bruijn ##.x.698 7 0)) '##foreign.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k407, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
      _V10foreign_Dfunction);
}
}
static void _V10_Dinline__let_D675_k405(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k405, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1761 1 0) ((bruijn ##.k.1762 0 0) (bruijn ##.p.1761 1 0)) (##vcore.eqv? (close _V10_Dinline__let_D675_k406) (##inline ##vcore.car (bruijn ##.x.698 6 0)) 'quote))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k406, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      _V0quote);
}
}
static void _V10_Dinline__let_D675_k410(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k410, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.x.698 8 0)) ((bruijn ##.x.904 38 0) (bruijn ##.k.1756 0 0) (##inline ##vcore.car (bruijn ##.x.698 8 0)) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '())))) ((bruijn ##.k.1756 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 0)),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D675_k413(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k413, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1747 3 0) (##inline ##vcore.not (bruijn ##.x.1750 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Dinline__let_D675_lambda139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1751 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dinline__let_D675_k412(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k412, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1752 0 0)) ((bruijn ##.x.906 37 0) (close _V10_Dinline__let_D675_k413) (bruijn ##.impure-table.681 12 7) (bruijn ##.x.698 9 0) (close _V10_Dinline__let_D675_lambda139)) ((bruijn ##.k.1747 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k413, self)})),
      VGetArg(statics, 12-1, 7),
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda139, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D675_lambda140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1753 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dinline__let_D675_k411(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k411, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1754 0 0)) ((bruijn ##.x.906 36 0) (close _V10_Dinline__let_D675_k412) (bruijn ##.impure-table.681 11 7) (bruijn ##.y.697 9 0) (close _V10_Dinline__let_D675_lambda140)) ((bruijn ##.k.1747 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k412, self)})),
      VGetArg(statics, 11-1, 7),
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda140, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D675_k409(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k409, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1746 1 0) ((close _V10_Dinline__let_D675_k410) (close _V10_Dinline__let_D675_k411)) ((bruijn ##.k.1747 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k410, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k411, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D675_k418(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k418, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2322) ((##vcore.- (bruijn ##.refs.701 10 0) 1)) ((bruijn ##.add-refs!.339 18 8) (bruijn ##.k.1736 4 0) (bruijn ##.ref-table.680 16 6) (bruijn ##.xrefs.702 3 0) (bruijn ##.reg.2322 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 16-1, 6),
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Dinline__let_D675_k417(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k417, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dinline__let_D675_k418) (bruijn ##.dummy.175.704 1 2) (bruijn ##.x.1739 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k418, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Dinline__let_D675_lambda141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.341 16 10) (bruijn ##.k.1740 0 0) (bruijn ##.x.698 11 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      _var0,
      VGetArg(statics, 11-1, 0));
}
static void _V10_Dinline__let_D675_k419(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k419, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1741 1 0) (bruijn ##.xpure.703 2 1) (bruijn ##.xpure.174.706 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Dinline__let_D675_lambda142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda142, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Dinline__let_D675_k419) (bruijn ##.xrefs.702 1 0) (bruijn ##.xrefs.173.705 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k419, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Dinline__let_D675_k416(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k416, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1743 1 0)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Dinline__let_D675_k417) (close _V10_Dinline__let_D675_lambda141) (close _V10_Dinline__let_D675_lambda142))) ((bruijn ##.k.1736 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k417, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda141, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda142, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dinline__let_D675_k422(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k422, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.inline-let.675 14 1) (bruijn ##.k.1721 13 0) (bruijn ##.x.1734 0 0) (bruijn ##.done-ys.693 13 2) (bruijn ##.done-xs.694 13 3) (bruijn ##.ys.699 10 0) (bruijn ##.xs.700 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 6,
      VGetArg(statics, 13-1, 0),
      _var0,
      VGetArg(statics, 13-1, 2),
      VGetArg(statics, 13-1, 3),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dinline__let_D675_k421(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k421, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.substitute.334 15 3) (close _V10_Dinline__let_D675_k422) (bruijn ##.y.697 11 0) (bruijn ##.x.698 10 0) (bruijn ##.expr.692 12 1) (bruijn ##.refs.701 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k422, self)})),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 12-1, 1),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dinline__let_D675_k420(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k420, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.903 40 0) (close _V10_Dinline__let_D675_k421) (bruijn ##.ref-table.680 12 6) (bruijn ##.y.697 10 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 40-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k421, self)})),
      VGetArg(statics, 12-1, 6),
      VGetArg(statics, 10-1, 0),
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D675_k415(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k415, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k416) (close _V10_Dinline__let_D675_k420))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k416, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k420, self)})));
}
static void _V10_Dinline__let_D675_k414(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k414, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1731 0 0) ((bruijn ##.x.907 34 0) (close _V10_Dinline__let_D675_k415) (bruijn ##.refs.701 4 0) 1) ((bruijn ##.inline-let.675 10 1) (bruijn ##.k.1721 9 0) (bruijn ##.expr.692 9 1) (##inline ##vcore.cons (bruijn ##.y.697 8 0) (bruijn ##.done-ys.693 9 2)) (##inline ##vcore.cons (bruijn ##.x.698 7 0) (bruijn ##.done-xs.694 9 3)) (bruijn ##.ys.699 6 0) (bruijn ##.xs.700 5 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k415, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 6,
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 9-1, 1),
      VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VGetArg(statics, 9-1, 2)),
      VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VGetArg(statics, 9-1, 3)),
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 5-1, 0));
}
}
static void _V10_Dinline__let_D675_k408(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k408, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k409) (close _V10_Dinline__let_D675_k414))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k409, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k414, self)})));
}
static void _V10_Dinline__let_D675_k404(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k404, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k405) (close _V10_Dinline__let_D675_k408))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k405, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k408, self)})));
}
static void _V10_Dinline__let_D675_k403(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k403, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1730 0 0) ((bruijn ##.inline-let.675 7 1) (bruijn ##.k.1721 6 0) (bruijn ##.expr.692 6 1) (bruijn ##.done-ys.693 6 2) (bruijn ##.done-xs.694 6 3) (bruijn ##.ys.699 3 0) (bruijn ##.xs.700 2 0)) ((bruijn ##.x.905 33 0) (close _V10_Dinline__let_D675_k404) (bruijn ##.x.698 4 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 6,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 6-1, 2),
      VGetArg(statics, 6-1, 3),
      statics->up->up->vars[0],
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k404, self)})),
      statics->up->up->up->vars[0]);
}
}
static void _V10_Dinline__let_D675_k402(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k402, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.907 30 0) (close _V10_Dinline__let_D675_k403) (bruijn ##.refs.701 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k403, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D675_lambda143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1767 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Dinline__let_D675_k401(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k401, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.906 30 0) (close _V10_Dinline__let_D675_k402) (bruijn ##.ref-table.680 5 6) (bruijn ##.y.697 3 0) (close _V10_Dinline__let_D675_lambda143))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k402, self)})),
      VGetArg(statics, 5-1, 6),
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda143, self)})));
}
static void _V10_Dinline__let_D675_k400(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k400, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k401) (##inline ##vcore.cdr (bruijn ##.xs.696 3 5)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k401, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[5]));
}
static void _V10_Dinline__let_D675_k399(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k399, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k400) (##inline ##vcore.cdr (bruijn ##.ys.695 2 4)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k400, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[4]));
}
static void _V10_Dinline__let_D675_k398(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_k398, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dinline__let_D675_k399) (##inline ##vcore.car (bruijn ##.xs.696 1 5)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k399, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->vars[5]));
}
static void _V10_Dinline__let_D675_lambda138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Dinline__let_D675_lambda138, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.ys.695 0 4)) (if (##inline ##vcore.null? (bruijn ##.done-ys.693 0 2)) ((bruijn ##.optimize-apply.678 1 4) (bruijn ##.k.1721 0 0) (bruijn ##.expr.692 0 1)) ((bruijn ##.x.921 11 0) (close _V10_Dinline__let_D675_k395) (bruijn ##.done-ys.693 0 2))) ((close _V10_Dinline__let_D675_k398) (##inline ##vcore.car (bruijn ##.ys.695 0 4))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var4))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[4]), 2,
      _var0,
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_k395, self)})),
      _var2);
}
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dinline__let_D675_k398, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var4));
}
}
static void _V10_Doptimize__let_D676_k432(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k432, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1897 0 0) (bruijn ##.k.1887 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Doptimize__let_D676_k439(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k439, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.1939 0 0) ((bruijn ##.k.1937 2 0) (bruijn ##.p.1939 0 0)) ((bruijn ##.x.907 43 0) (bruijn ##.k.1937 2 0) (bruijn ##.x.1900 5 0) 1))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 43-1, 0)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      VEncodeInt(1l));
}
}
static void _V10_Doptimize__let_D676_k438(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k438, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1938 0 0) ((bruijn ##.k.1937 1 0) (bruijn ##.p.1938 0 0)) (##vcore.eqv? (close _V10_Doptimize__let_D676_k439) (##inline ##vcore.car (bruijn ##.x.1899 5 0)) '##foreign.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k439, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
      _V10foreign_Dfunction);
}
}
static void _V10_Doptimize__let_D676_k437(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k437, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1936 1 0) ((bruijn ##.k.1937 0 0) (bruijn ##.p.1936 1 0)) (##vcore.eqv? (close _V10_Doptimize__let_D676_k438) (##inline ##vcore.car (bruijn ##.x.1899 4 0)) 'quote))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k438, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]),
      _V0quote);
}
}
static void _V10_Doptimize__let_D676_k442(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k442, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.x.1899 6 0)) ((bruijn ##.x.904 46 0) (bruijn ##.k.1931 0 0) (##inline ##vcore.car (bruijn ##.x.1899 6 0)) (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'continuation (##inline ##vcore.qcons 'case-lambda '())))) ((bruijn ##.k.1931 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      _var0,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0continuation,
        VInlineCons2(runtime,
        _V0case__lambda,
        VNULL))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k445(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k445, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1922 3 0) (##inline ##vcore.not (bruijn ##.x.1925 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineNot2(runtime,
        _var0));
}
static void _V10_Doptimize__let_D676_lambda147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1926 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Doptimize__let_D676_k444(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k444, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1927 0 0)) ((bruijn ##.x.906 45 0) (close _V10_Doptimize__let_D676_k445) (bruijn ##.impure-table.681 20 7) (bruijn ##.x.1899 7 0) (close _V10_Doptimize__let_D676_lambda147)) ((bruijn ##.k.1922 2 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 45-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k445, self)})),
      VGetArg(statics, 20-1, 7),
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda147, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_lambda148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1928 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Doptimize__let_D676_k443(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k443, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1929 0 0)) ((bruijn ##.x.906 44 0) (close _V10_Doptimize__let_D676_k444) (bruijn ##.impure-table.681 19 7) (bruijn ##.y.714 11 0) (close _V10_Doptimize__let_D676_lambda148)) ((bruijn ##.k.1922 1 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 44-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k444, self)})),
      VGetArg(statics, 19-1, 7),
      VGetArg(statics, 11-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda148, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k441(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k441, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1921 1 0) ((close _V10_Doptimize__let_D676_k442) (close _V10_Doptimize__let_D676_k443)) ((bruijn ##.k.1922 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k442, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k443, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k450(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k450, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.2323) ((##vcore.- (bruijn ##.x.1900 10 0) 1)) ((bruijn ##.add-refs!.339 26 8) (bruijn ##.k.1907 4 0) (bruijn ##.ref-table.680 24 6) (bruijn ##.xrefs.721 3 0) (bruijn ##.reg.2323 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 10-1, 0),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 8)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 24-1, 6),
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
static void _V10_Doptimize__let_D676_k449(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k449, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__let_D676_k450) (bruijn ##.dummy.214.723 1 2) (bruijn ##.x.1910 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k450, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__let_D676_lambda149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.341 24 10) (bruijn ##.k.1911 0 0) (bruijn ##.x.1899 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 10)), 2,
      _var0,
      VGetArg(statics, 9-1, 0));
}
static void _V10_Doptimize__let_D676_k451(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k451, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.1912 1 0) (bruijn ##.xpure.722 2 1) (bruijn ##.xpure.213.725 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__let_D676_lambda150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda150, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__let_D676_k451) (bruijn ##.xrefs.721 1 0) (bruijn ##.xrefs.212.724 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k451, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__let_D676_k448(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k448, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.1914 1 0)) (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k449) (close _V10_Doptimize__let_D676_lambda149) (close _V10_Doptimize__let_D676_lambda150))) ((bruijn ##.k.1907 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k449, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda149, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda150, self)})));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k454(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k454, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 22 4) (bruijn ##.k.1898 10 0) (bruijn ##.x.1905 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 4)), 2,
      VGetArg(statics, 10-1, 0),
      _var0);
}
static void _V10_Doptimize__let_D676_k453(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k453, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.substitute.334 23 3) (close _V10_Doptimize__let_D676_k454) (bruijn ##.y.714 13 0) (bruijn ##.x.1899 8 0) (bruijn ##.expr.716 11 0) (bruijn ##.x.1900 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 3)), 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k454, self)})),
      VGetArg(statics, 13-1, 0),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 11-1, 0),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Doptimize__let_D676_k452(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k452, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.903 48 0) (close _V10_Doptimize__let_D676_k453) (bruijn ##.ref-table.680 20 6) (bruijn ##.y.714 12 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 48-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k453, self)})),
      VGetArg(statics, 20-1, 6),
      VGetArg(statics, 12-1, 0),
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D676_k447(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k447, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k448) (close _V10_Doptimize__let_D676_k452))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k448, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k452, self)})));
}
static void _V10_Doptimize__let_D676_k455(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k455, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1898 7 0) (##inline ##vcore.cons (bruijn ##.x.1915 0 0) (##inline ##vcore.cons (bruijn ##.x.1899 6 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VNULL)));
}
static void _V10_Doptimize__let_D676_k446(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k446, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1902 0 0) ((bruijn ##.x.907 42 0) (close _V10_Doptimize__let_D676_k447) (bruijn ##.x.1900 4 0) 1) ((bruijn ##.optimize-atom.679 18 5) (close _V10_Doptimize__let_D676_k455) (##inline ##vcore.cons 'continuation (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.y.714 10 0) '()) (##inline ##vcore.cons (bruijn ##.expr.716 8 0) '())))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k447, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(1l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k455, self)})),
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
static void _V10_Doptimize__let_D676_k440(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k440, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k441) (close _V10_Doptimize__let_D676_k446))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k441, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k446, self)})));
}
static void _V10_Doptimize__let_D676_k436(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k436, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k437) (close _V10_Doptimize__let_D676_k440))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k437, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k440, self)})));
}
static void _V10_Doptimize__let_D676_k435(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k435, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1901 0 0) ((bruijn ##.optimize-apply.678 15 4) (bruijn ##.k.1898 3 0) (bruijn ##.expr.716 5 0)) ((bruijn ##.x.905 41 0) (close _V10_Doptimize__let_D676_k436) (bruijn ##.x.1899 2 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      statics->up->up->vars[0],
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 41-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k436, self)})),
      statics->up->vars[0]);
}
}
static void _V10_Doptimize__let_D676_k434(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k434, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.907 38 0) (close _V10_Doptimize__let_D676_k435) (bruijn ##.x.1900 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k435, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D676_lambda151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1942 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
}
static void _V10_Doptimize__let_D676_k433(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k433, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.906 38 0) (close _V10_Doptimize__let_D676_k434) (bruijn ##.ref-table.680 13 6) (bruijn ##.y.714 5 0) (close _V10_Doptimize__let_D676_lambda151))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k434, self)})),
      VGetArg(statics, 13-1, 6),
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda151, self)})));
}
static void _V10_Doptimize__let_D676_lambda146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.679 12 5) (close _V10_Doptimize__let_D676_k433) (##inline ##vcore.car (bruijn ##.expr.183.717 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k433, self)})),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D676_k431(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k431, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.183.717 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.183.717 0 0))) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k432) (close _V10_Doptimize__let_D676_lambda146) (bruijn ##.kk.176.708 9 1)) ((bruijn ##.k.1887 8 0) #f)) ((bruijn ##.k.1887 8 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k432, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda146, self)})),
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
static void _V10_Doptimize__let_D676_k430(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k430, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.182.715 1 0))) ((close _V10_Doptimize__let_D676_k431) (##inline ##vcore.cdr (bruijn ##.let-expr.707 9 1))) ((bruijn ##.k.1887 7 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k431, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k429(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k429, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.182.715 0 0)) ((close _V10_Doptimize__let_D676_k430) (##inline ##vcore.car (bruijn ##.expr.182.715 0 0))) ((bruijn ##.k.1887 6 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k430, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k428(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k428, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.181.713 1 0))) ((close _V10_Doptimize__let_D676_k429) (##inline ##vcore.cdr (bruijn ##.expr.180.712 2 0))) ((bruijn ##.k.1887 5 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k429, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k427(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k427, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.181.713 0 0)) ((close _V10_Doptimize__let_D676_k428) (##inline ##vcore.car (bruijn ##.expr.181.713 0 0))) ((bruijn ##.k.1887 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k428, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k426(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k426, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.180.712 0 0)) ((close _V10_Doptimize__let_D676_k427) (##inline ##vcore.car (bruijn ##.expr.180.712 0 0))) ((bruijn ##.k.1887 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k427, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k425(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k425, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1889 0 0) ((close _V10_Doptimize__let_D676_k426) (##inline ##vcore.cdr (bruijn ##.expr.179.711 1 0))) ((bruijn ##.k.1887 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k426, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k424(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k424, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.179.711 0 0)) ((bruijn ##.x.902 33 0) (close _V10_Doptimize__let_D676_k425) 'continuation (##inline ##vcore.car (bruijn ##.expr.179.711 0 0))) ((bruijn ##.k.1887 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k425, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k423(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k423, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 2 1)) ((close _V10_Doptimize__let_D676_k424) (##inline ##vcore.car (bruijn ##.let-expr.707 2 1))) ((bruijn ##.k.1887 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k424, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k462(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k462, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1880 0 0) (bruijn ##.k.1872 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__let_D676_lambda152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 9 4) (bruijn ##.k.1881 0 0) (##inline ##vcore.car (bruijn ##.expr.187.729 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D676_k461(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k461, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.187.729 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.187.729 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.let-expr.707 7 1))) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k462) (close _V10_Doptimize__let_D676_lambda152) (bruijn ##.kk.176.708 6 1)) ((bruijn ##.k.1872 4 0) #f)) ((bruijn ##.k.1872 4 0) #f)) ((bruijn ##.k.1872 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k462, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda152, self)})),
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
static void _V10_Doptimize__let_D676_k460(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k460, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.186.728 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.186.728 0 0))) ((close _V10_Doptimize__let_D676_k461) (##inline ##vcore.cdr (bruijn ##.expr.186.728 0 0))) ((bruijn ##.k.1872 3 0) #f)) ((bruijn ##.k.1872 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k461, .env = self }, }, 1,
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
static void _V10_Doptimize__let_D676_k459(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k459, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1874 0 0) ((close _V10_Doptimize__let_D676_k460) (##inline ##vcore.cdr (bruijn ##.expr.185.727 1 0))) ((bruijn ##.k.1872 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k460, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k458(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k458, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.185.727 0 0)) ((bruijn ##.x.902 34 0) (close _V10_Doptimize__let_D676_k459) 'lambda (##inline ##vcore.car (bruijn ##.expr.185.727 0 0))) ((bruijn ##.k.1872 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k459, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k457(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k457, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 3 1)) ((close _V10_Doptimize__let_D676_k458) (##inline ##vcore.car (bruijn ##.let-expr.707 3 1))) ((bruijn ##.k.1872 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k458, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D736_k469(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_k469, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.193.735 4 1) (bruijn ##.k.1837 1 0) (bruijn ##.expr.195.737 2 1) (bruijn ##.x.1838 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D736_k468(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_k468, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.195.737 1 1))) ((bruijn ##.x.921 23 0) (close _V10_Dloop_D736_k469) (bruijn ##.ys.192.738 1 2)) ((bruijn ##.k.1837 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_k469, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D736_k472(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_k472, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.193.735 7 1) (bruijn ##.k.1831 2 0) (bruijn ##.expr.195.737 5 1) (bruijn ##.x.1833 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D736_k471(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_k471, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 26 0) (close _V10_Dloop_D736_k472) (bruijn ##.ys.192.738 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_k472, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D736_lambda157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_lambda157, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.194.739 0 1) (close _V10_Dloop_D736_k471) (##inline ##vcore.cdr (bruijn ##.expr.195.737 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.195.737 3 1)) (bruijn ##.ys.192.738 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_k471, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D736_lambda156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_lambda156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1830 0 0) (close _V10_Dloop_D736_lambda157))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_lambda157, self)})));
}
static void _V10_Dloop_D736_k470(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_k470, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1828 1 0) (close _V10_Dloop_D736_lambda156) (bruijn ##.loop.736 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_lambda156, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D736_lambda155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D736_lambda155, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D736_k468) (close _V10_Dloop_D736_k470))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D736_k468, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_k470, self)})));
}
static void _V10_Doptimize__let_D676_lambda154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda154, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D736_lambda155)) ((bruijn ##.loop.736 0 0) (bruijn ##.k.1827 1 0) (##inline ##vcore.car (bruijn ##.expr.190.733 3 0)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D736_lambda155, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL);
    }
}
static void _V10_Doptimize__let_D676_lambda153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1826 0 0) (close _V10_Doptimize__let_D676_lambda154))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda154, self)})));
}
static void _V10_Dloop_D747_k475(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_k475, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.199.746 4 1) (bruijn ##.k.1855 1 0) (bruijn ##.expr.201.748 2 1) (bruijn ##.x.1856 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D747_k474(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_k474, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.201.748 1 1))) ((bruijn ##.x.921 25 0) (close _V10_Dloop_D747_k475) (bruijn ##.xs.198.749 1 2)) ((bruijn ##.k.1855 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_k475, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D747_k478(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_k478, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.199.746 7 1) (bruijn ##.k.1849 2 0) (bruijn ##.expr.201.748 5 1) (bruijn ##.x.1851 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D747_k477(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_k477, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 28 0) (close _V10_Dloop_D747_k478) (bruijn ##.xs.198.749 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_k478, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D747_lambda163(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_lambda163, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.200.750 0 1) (close _V10_Dloop_D747_k477) (##inline ##vcore.cdr (bruijn ##.expr.201.748 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.201.748 3 1)) (bruijn ##.xs.198.749 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_k477, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D747_lambda162(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_lambda162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1848 0 0) (close _V10_Dloop_D747_lambda163))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_lambda163, self)})));
}
static void _V10_Dloop_D747_k476(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_k476, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1846 1 0) (close _V10_Dloop_D747_lambda162) (bruijn ##.loop.747 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_lambda162, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D747_lambda161(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D747_lambda161, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D747_k474) (close _V10_Dloop_D747_k476))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D747_k474, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_k476, self)})));
}
static void _V10_Doptimize__let_D676_lambda160(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda160, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D747_lambda161)) ((bruijn ##.loop.747 0 0) (bruijn ##.k.1845 1 0) (##inline ##vcore.cdr (bruijn ##.let-expr.707 12 1)) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D747_lambda161, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)),
      VNULL);
    }
}
static void _V10_Doptimize__let_D676_lambda159(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1844 0 0) (close _V10_Doptimize__let_D676_lambda160))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda160, self)})));
}
static void _V10_Doptimize__let_D676_k479(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k479, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1860 0 0) (bruijn ##.k.1858 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__let_D676_k483(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k483, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1866 1 0)) ((bruijn ##.x.919 28 0) (bruijn ##.k.1865 0 0) (##string ##.string.2337)) ((bruijn ##.k.1865 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2337.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k485(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k485, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.inline-let.675 17 1) (bruijn ##.k.1861 5 0) (##inline ##vcore.car (bruijn ##.expr.196.743 7 0)) '() '() (bruijn ##.ys.742 8 2) (bruijn ##.x.1863 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 6,
      VGetArg(statics, 5-1, 0),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 0)),
      VNULL,
      VNULL,
      VGetArg(statics, 8-1, 2),
      _var0);
}
static void _V10_Doptimize__let_D676_k484(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k484, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 27 0) (close _V10_Doptimize__let_D676_k485) (bruijn ##.optimize-atom.679 16 5) (bruijn ##.xs.753 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k485, self)})),
      VGetArg(statics, 16-1, 5),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Doptimize__let_D676_k482(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k482, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k483) (close _V10_Doptimize__let_D676_k484))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k483, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k484, self)})));
}
static void _V10_Doptimize__let_D676_k481(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k481, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.907 38 0) (close _V10_Doptimize__let_D676_k482) (bruijn ##.x.1867 1 0) (bruijn ##.x.1868 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k482, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D676_k480(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k480, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.909 35 0) (close _V10_Doptimize__let_D676_k481) (bruijn ##.xs.753 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k481, self)})),
      statics->up->vars[2]);
}
static void _V10_Doptimize__let_D676_lambda165(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.909 34 0) (close _V10_Doptimize__let_D676_k480) (bruijn ##.ys.742 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k480, self)})),
      statics->up->up->vars[2]);
}
static void _V10_Doptimize__let_D676_lambda164(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda164, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.752 0 1)) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k479) (close _V10_Doptimize__let_D676_lambda165) (bruijn ##.kk.176.708 9 1)) ((bruijn ##.k.1858 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k479, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda165, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k473(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k473, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.196.743 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.196.743 0 0))) (##vcore.call-with-values (bruijn ##.k.1840 1 0) (close _V10_Doptimize__let_D676_lambda159) (close _V10_Doptimize__let_D676_lambda164)) ((bruijn ##.k.1840 1 0) #f)) ((bruijn ##.k.1840 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda159, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda164, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_lambda158(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda158, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.741 0 1)) ((close _V10_Doptimize__let_D676_k473) (##inline ##vcore.cdr (bruijn ##.expr.190.733 1 0))) ((bruijn ##.k.1840 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k473, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k467(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k467, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.190.733 0 0)) (##vcore.call-with-values (bruijn ##.k.1822 3 0) (close _V10_Doptimize__let_D676_lambda153) (close _V10_Doptimize__let_D676_lambda158)) ((bruijn ##.k.1822 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda153, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda158, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k466(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k466, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1824 0 0) ((close _V10_Doptimize__let_D676_k467) (##inline ##vcore.cdr (bruijn ##.expr.189.732 1 0))) ((bruijn ##.k.1822 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k467, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k465(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k465, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.189.732 0 0)) ((bruijn ##.x.902 35 0) (close _V10_Doptimize__let_D676_k466) 'lambda (##inline ##vcore.car (bruijn ##.expr.189.732 0 0))) ((bruijn ##.k.1822 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k466, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k464(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k464, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 4 1)) ((close _V10_Doptimize__let_D676_k465) (##inline ##vcore.car (bruijn ##.let-expr.707 4 1))) ((bruijn ##.k.1822 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k465, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k492(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k492, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1815 0 0) (bruijn ##.k.1807 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__let_D676_lambda166(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 11 4) (bruijn ##.k.1816 0 0) (##inline ##vcore.car (bruijn ##.expr.205.757 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D676_k491(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k491, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.205.757 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.205.757 0 0))) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.let-expr.707 9 1))) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k492) (close _V10_Doptimize__let_D676_lambda166) (bruijn ##.kk.176.708 8 1)) ((bruijn ##.k.1807 4 0) #f)) ((bruijn ##.k.1807 4 0) #f)) ((bruijn ##.k.1807 4 0) #f))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k492, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda166, self)})),
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
static void _V10_Doptimize__let_D676_k490(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k490, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.204.756 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.expr.204.756 0 0))) ((close _V10_Doptimize__let_D676_k491) (##inline ##vcore.cdr (bruijn ##.expr.204.756 0 0))) ((bruijn ##.k.1807 3 0) #f)) ((bruijn ##.k.1807 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k491, .env = self }, }, 1,
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
static void _V10_Doptimize__let_D676_k489(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k489, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1809 0 0) ((close _V10_Doptimize__let_D676_k490) (##inline ##vcore.cdr (bruijn ##.expr.203.755 1 0))) ((bruijn ##.k.1807 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k490, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k488(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k488, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.203.755 0 0)) ((bruijn ##.x.902 36 0) (close _V10_Doptimize__let_D676_k489) 'continuation (##inline ##vcore.car (bruijn ##.expr.203.755 0 0))) ((bruijn ##.k.1807 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k489, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k487(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k487, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 5 1)) ((close _V10_Doptimize__let_D676_k488) (##inline ##vcore.car (bruijn ##.let-expr.707 5 1))) ((bruijn ##.k.1807 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k488, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k501(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k501, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1791 0 0) (bruijn ##.k.1785 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 0));
}
static void _V10_Doptimize__let_D676_k505(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k505, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.not (bruijn ##.x.1801 1 0)) ((bruijn ##.x.919 30 0) (bruijn ##.k.1800 0 0) (##string ##.string.2337)) ((bruijn ##.k.1800 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2337.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k508(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k508, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1792 6 0) (##inline ##vcore.cons (bruijn ##.x.1794 1 0) (bruijn ##.x.1795 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Doptimize__let_D676_k507(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k507, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 30 0) (close _V10_Doptimize__let_D676_k508) (bruijn ##.optimize-atom.679 19 5) (bruijn ##.xs.765 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k508, self)})),
      VGetArg(statics, 19-1, 5),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Doptimize__let_D676_k506(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k506, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.679 18 5) (close _V10_Doptimize__let_D676_k507) (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (bruijn ##.ys.762 7 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.209.763 6 0)) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k507, self)})),
      VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VGetArg(statics, 7-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        VNULL))));
}
static void _V10_Doptimize__let_D676_k504(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k504, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k505) (close _V10_Doptimize__let_D676_k506))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k505, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k506, self)})));
}
static void _V10_Doptimize__let_D676_k503(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k503, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.908 39 0) (close _V10_Doptimize__let_D676_k504) (bruijn ##.x.1802 1 0) (bruijn ##.x.1803 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 39-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k504, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Doptimize__let_D676_k502(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k502, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.909 37 0) (close _V10_Doptimize__let_D676_k503) (bruijn ##.xs.765 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k503, self)})),
      statics->up->vars[0]);
}
static void _V10_Doptimize__let_D676_lambda167(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.taillength.336 16 5) (close _V10_Doptimize__let_D676_k502) (bruijn ##.ys.762 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k502, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__let_D676_k500(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k500, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__let_D676_k501) (close _V10_Doptimize__let_D676_lambda167) (bruijn ##.kk.176.708 11 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k501, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda167, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__let_D676_k499(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k499, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.209.763 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.209.763 0 0))) ((close _V10_Doptimize__let_D676_k500) (##inline ##vcore.cdr (bruijn ##.let-expr.707 11 1))) ((bruijn ##.k.1785 5 0) #f)) ((bruijn ##.k.1785 5 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k500, .env = self }, }, 1,
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
static void _V10_Doptimize__let_D676_k498(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k498, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k499) (##inline ##vcore.cdr (bruijn ##.expr.208.761 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k499, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__let_D676_k497(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k497, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.208.761 0 0)) ((close _V10_Doptimize__let_D676_k498) (##inline ##vcore.car (bruijn ##.expr.208.761 0 0))) ((bruijn ##.k.1785 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k498, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k496(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k496, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1787 0 0) ((close _V10_Doptimize__let_D676_k497) (##inline ##vcore.cdr (bruijn ##.expr.207.760 1 0))) ((bruijn ##.k.1785 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k497, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k495(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k495, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.207.760 0 0)) ((bruijn ##.x.902 37 0) (close _V10_Doptimize__let_D676_k496) 'lambda (##inline ##vcore.car (bruijn ##.expr.207.760 0 0))) ((bruijn ##.k.1785 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k496, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k494(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k494, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 6 1)) ((close _V10_Doptimize__let_D676_k495) (##inline ##vcore.car (bruijn ##.let-expr.707 6 1))) ((bruijn ##.k.1785 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k495, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k513(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k513, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1781 0 0) (bruijn ##.k.1778 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__let_D676_lambda168(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 23 0) (bruijn ##.k.1782 0 0) (##string ##.string.2338))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2338.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D676_k512(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k512, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1780 0 0) (##vcore.call-with-values (close _V10_Doptimize__let_D676_k513) (close _V10_Doptimize__let_D676_lambda168) (bruijn ##.kk.176.708 8 1)) ((bruijn ##.k.1778 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k513, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda168, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k511(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k511, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.211.767 0 0)) ((bruijn ##.x.902 38 0) (close _V10_Doptimize__let_D676_k512) 'continuation (##inline ##vcore.car (bruijn ##.expr.211.767 0 0))) ((bruijn ##.k.1778 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k512, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_k510(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k510, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.let-expr.707 7 1)) ((close _V10_Doptimize__let_D676_k511) (##inline ##vcore.car (bruijn ##.let-expr.707 7 1))) ((bruijn ##.k.1778 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k511, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__let_D676_lambda169(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 21 0) (bruijn ##.k.1776 0 0) (##string ##.string.2339))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D2339.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__let_D676_k514(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k514, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1769 6 0) (close _V10_Doptimize__let_D676_lambda169) (bruijn ##.kk.176.708 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda169, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__let_D676_k509(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k509, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k510) (close _V10_Doptimize__let_D676_k514))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k510, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k514, self)})));
}
static void _V10_Doptimize__let_D676_k493(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k493, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k494) (close _V10_Doptimize__let_D676_k509))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k494, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k509, self)})));
}
static void _V10_Doptimize__let_D676_k486(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k486, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k487) (close _V10_Doptimize__let_D676_k493))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k487, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k493, self)})));
}
static void _V10_Doptimize__let_D676_k463(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k463, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k464) (close _V10_Doptimize__let_D676_k486))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k464, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k486, self)})));
}
static void _V10_Doptimize__let_D676_k456(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_k456, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__let_D676_k457) (close _V10_Doptimize__let_D676_k463))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k457, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k463, self)})));
}
static void _V10_Doptimize__let_D676_lambda145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda145, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__let_D676_k423) (close _V10_Doptimize__let_D676_k456))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__let_D676_k423, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_k456, self)})));
}
static void _V10_Doptimize__let_D676_lambda144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__let_D676_lambda144, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1768 0 0) (close _V10_Doptimize__let_D676_lambda145))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda145, self)})));
}
static void _V10_Dloop_D775_k520(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k520, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.222.774 5 1) (bruijn ##.k.1972 2 0) (bruijn ##.expr.224.776 3 1) (bruijn ##.x.1973 1 0) (bruijn ##.x.1974 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D775_k519(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k519, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 21 0) (close _V10_Dloop_D775_k520) (bruijn ##.vals.221.778 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k520, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D775_k518(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k518, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.224.776 1 1))) ((bruijn ##.x.921 20 0) (close _V10_Dloop_D775_k519) (bruijn ##.args.220.777 1 2)) ((bruijn ##.k.1972 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k519, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D775_k524(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k524, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.226.782 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.226.782 0 0))) ((bruijn ##.kk.223.779 3 1) (bruijn ##.k.1964 1 0) (##inline ##vcore.cdr (bruijn ##.expr.224.776 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.225.780 2 0)) (bruijn ##.args.220.777 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.226.782 0 0)) (bruijn ##.vals.221.778 6 3))) ((bruijn ##.k.1964 1 0) #f)) ((bruijn ##.k.1964 1 0) #f))
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
static void _V10_Dloop_D775_k523(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k523, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.225.780 1 0)) ((close _V10_Dloop_D775_k524) (##inline ##vcore.cdr (bruijn ##.expr.225.780 1 0))) ((bruijn ##.k.1964 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D775_k524, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D775_k527(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k527, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.222.774 9 1) (bruijn ##.k.1959 4 0) (bruijn ##.expr.224.776 7 1) (bruijn ##.x.1961 1 0) (bruijn ##.x.1962 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D775_k526(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k526, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 25 0) (close _V10_Dloop_D775_k527) (bruijn ##.vals.221.778 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k527, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D775_k525(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k525, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 24 0) (close _V10_Dloop_D775_k526) (bruijn ##.args.220.777 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k526, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D775_k522(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k522, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D775_k523) (close _V10_Dloop_D775_k525))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D775_k523, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k525, self)})));
}
static void _V10_Dloop_D775_lambda176(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_lambda176, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D775_k522) (##inline ##vcore.car (bruijn ##.expr.224.776 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D775_k522, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D775_lambda175(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_lambda175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1958 0 0) (close _V10_Dloop_D775_lambda176))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_lambda176, self)})));
}
static void _V10_Dloop_D775_k521(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_k521, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1956 1 0) (close _V10_Dloop_D775_lambda175) (bruijn ##.loop.775 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_lambda175, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D775_lambda174(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D775_lambda174, got ~D~N"
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
  // ((close _V10_Dloop_D775_k518) (close _V10_Dloop_D775_k521))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D775_k518, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_k521, self)})));
}
static void _V10_Doptimize__letrec_D677_lambda173(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda173, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D775_lambda174)) ((bruijn ##.loop.775 0 0) (bruijn ##.k.1955 1 0) (##inline ##vcore.car (bruijn ##.expr.218.772 3 0)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D775_lambda174, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCar2(runtime,
        statics->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__letrec_D677_lambda172(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1954 0 0) (close _V10_Doptimize__letrec_D677_lambda173))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda173, self)})));
}
static void _V10_Doptimize__letrec_D677_k529(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k529, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.1980 0 0) (bruijn ##.k.1976 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__letrec_D677_k532(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k532, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.1981 3 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.1983 1 0) (##inline ##vcore.cons (bruijn ##.x.1985 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Doptimize__letrec_D677_k531(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k531, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.678 10 4) (close _V10_Doptimize__letrec_D677_k532) (##inline ##vcore.car (bruijn ##.expr.227.787 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k532, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Doptimize__letrec_D677_k530(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k530, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 20 0) (close _V10_Doptimize__letrec_D677_k531) (bruijn ##.x.910 30 0) (bruijn ##.args.785 3 2) (bruijn ##.x.1986 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k531, self)})),
      VGetArg(statics, 30-1, 0),
      statics->up->up->vars[2],
      _var0);
}
static void _V10_Doptimize__letrec_D677_lambda178(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 19 0) (close _V10_Doptimize__letrec_D677_k530) (bruijn ##.optimize-atom.679 8 5) (bruijn ##.vals.786 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k530, self)})),
      VGetArg(statics, 8-1, 5),
      statics->up->vars[3]);
}
static void _V10_Doptimize__letrec_D677_k528(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k528, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.227.787 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.227.787 0 0))) (##vcore.call-with-values (close _V10_Doptimize__letrec_D677_k529) (close _V10_Doptimize__letrec_D677_lambda178) (bruijn ##.kk.215.769 5 1)) ((bruijn ##.k.1976 1 0) #f)) ((bruijn ##.k.1976 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k529, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda178, self)})),
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
static void _V10_Doptimize__letrec_D677_lambda177(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda177, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.784 0 1)) ((close _V10_Doptimize__letrec_D677_k528) (##inline ##vcore.cdr (bruijn ##.expr.218.772 1 0))) ((bruijn ##.k.1976 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D677_k528, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D677_k517(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k517, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.218.772 0 0)) (##vcore.call-with-values (bruijn ##.k.1951 2 0) (close _V10_Doptimize__letrec_D677_lambda172) (close _V10_Doptimize__letrec_D677_lambda177)) ((bruijn ##.k.1951 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda172, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda177, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D677_k516(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k516, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.1952 0 0) ((close _V10_Doptimize__letrec_D677_k517) (##inline ##vcore.cdr (bruijn ##.letrec-expr.768 3 1))) ((bruijn ##.k.1951 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D677_k517, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D677_k515(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k515, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.letrec-expr.768 2 1)) ((bruijn ##.x.902 32 0) (close _V10_Doptimize__letrec_D677_k516) 'letrec (##inline ##vcore.car (bruijn ##.letrec-expr.768 2 1))) ((bruijn ##.k.1951 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k516, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__letrec_D677_k533(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_k533, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.911 23 0) (bruijn ##.k.1948 1 0) (##string ##.string.2333))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D2333.sym, VPOINTER_OTHER));
}
static void _V10_Doptimize__letrec_D677_lambda171(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda171, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__letrec_D677_k515) (close _V10_Doptimize__letrec_D677_k533))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__letrec_D677_k515, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_k533, self)})));
}
static void _V10_Doptimize__letrec_D677_lambda170(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__letrec_D677_lambda170, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1947 0 0) (close _V10_Doptimize__letrec_D677_lambda171))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda171, self)})));
}
static void _V10_Doptimize__apply_D678_k537(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k537, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2156 0 0) (bruijn ##.k.2153 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_lambda181(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.676 6 2) (bruijn ##.k.2157 0 0) (bruijn ##.expr.789 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      _var0,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Doptimize__apply_D678_k536(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k536, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2155 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k537) (close _V10_Doptimize__apply_D678_lambda181) (bruijn ##.kk.228.790 3 1)) ((bruijn ##.k.2153 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k537, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda181, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k535(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k535, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.231.793 0 0)) ((bruijn ##.x.902 33 0) (close _V10_Doptimize__apply_D678_k536) 'continuation (##inline ##vcore.car (bruijn ##.expr.231.793 0 0))) ((bruijn ##.k.2153 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k536, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k534(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k534, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 2 1)) ((close _V10_Doptimize__apply_D678_k535) (##inline ##vcore.car (bruijn ##.expr.789 2 1))) ((bruijn ##.k.2153 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k535, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k542(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k542, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2149 0 0) (bruijn ##.k.2146 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_lambda182(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-let.676 7 2) (bruijn ##.k.2150 0 0) (bruijn ##.expr.789 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__apply_D678_k541(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k541, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2148 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k542) (close _V10_Doptimize__apply_D678_lambda182) (bruijn ##.kk.228.790 4 1)) ((bruijn ##.k.2146 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k542, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda182, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k540(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k540, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.233.795 0 0)) ((bruijn ##.x.902 34 0) (close _V10_Doptimize__apply_D678_k541) 'lambda (##inline ##vcore.car (bruijn ##.expr.233.795 0 0))) ((bruijn ##.k.2146 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k541, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k539(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k539, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 3 1)) ((close _V10_Doptimize__apply_D678_k540) (##inline ##vcore.car (bruijn ##.expr.789 3 1))) ((bruijn ##.k.2146 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k540, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k546(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k546, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2142 0 0) (bruijn ##.k.2140 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_lambda183(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-letrec.677 7 3) (bruijn ##.k.2143 0 0) (bruijn ##.expr.789 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 2,
      _var0,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__apply_D678_k545(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k545, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2141 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k546) (close _V10_Doptimize__apply_D678_lambda183) (bruijn ##.kk.228.790 4 1)) ((bruijn ##.k.2140 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k546, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda183, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k544(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k544, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 4 1)) ((bruijn ##.x.902 34 0) (close _V10_Doptimize__apply_D678_k545) 'letrec (##inline ##vcore.car (bruijn ##.expr.789 4 1))) ((bruijn ##.k.2140 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k545, self)})),
      _V0letrec,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k553(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k553, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2128 0 0) (bruijn ##.k.2121 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k556(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k556, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 15 4) (bruijn ##.k.2129 4 0) (##inline ##vcore.car (bruijn ##.expr.237.799 6 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 4)), 2,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)));
}
static void _V10_Doptimize__apply_D678_k555(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k555, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.340 16 9) (close _V10_Doptimize__apply_D678_k556) (bruijn ##.ref-table.680 14 6) (bruijn ##.bcount.803 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 9)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k556, self)})),
      VGetArg(statics, 14-1, 6),
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_k554(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k554, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D678_k555) (bruijn ##.dummy.252.805 1 2) (bruijn ##.x.2132 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k555, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D678_lambda185(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.341 15 10) (bruijn ##.k.2133 0 0) (##inline ##vcore.car (bruijn ##.expr.238.801 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D678_k557(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k557, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.2134 1 0) (bruijn ##.bpure.804 2 1) (bruijn ##.bpure.251.807 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__apply_D678_lambda186(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda186, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D678_k557) (bruijn ##.bcount.803 1 0) (bruijn ##.bcount.250.806 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k557, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D678_lambda184(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k554) (close _V10_Doptimize__apply_D678_lambda185) (close _V10_Doptimize__apply_D678_lambda186)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k554, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda185, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda186, self)})));
    }
}
static void _V10_Doptimize__apply_D678_k552(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k552, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.238.801 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.238.801 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k553) (close _V10_Doptimize__apply_D678_lambda184) (bruijn ##.kk.228.790 8 1)) ((bruijn ##.k.2121 4 0) #f)) ((bruijn ##.k.2121 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k553, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda184, self)})),
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
static void _V10_Doptimize__apply_D678_k551(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k551, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.237.799 0 0)) ((close _V10_Doptimize__apply_D678_k552) (##inline ##vcore.cdr (bruijn ##.expr.237.799 0 0))) ((bruijn ##.k.2121 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k552, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k550(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k550, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.236.798 0 0)) (if (##inline ##vcore.eq? #t (##inline ##vcore.car (bruijn ##.expr.236.798 0 0))) ((close _V10_Doptimize__apply_D678_k551) (##inline ##vcore.cdr (bruijn ##.expr.236.798 0 0))) ((bruijn ##.k.2121 2 0) #f)) ((bruijn ##.k.2121 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k551, .env = self }, }, 1,
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
static void _V10_Doptimize__apply_D678_k549(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k549, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2122 0 0) ((close _V10_Doptimize__apply_D678_k550) (##inline ##vcore.cdr (bruijn ##.expr.789 6 1))) ((bruijn ##.k.2121 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k550, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k548(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k548, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 5 1)) ((bruijn ##.x.902 35 0) (close _V10_Doptimize__apply_D678_k549) 'if (##inline ##vcore.car (bruijn ##.expr.789 5 1))) ((bruijn ##.k.2121 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k549, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k564(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k564, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2109 0 0) (bruijn ##.k.2102 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k567(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k567, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 16 4) (bruijn ##.k.2110 4 0) (##inline ##vcore.car (bruijn ##.expr.242.812 5 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 4)), 2,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)));
}
static void _V10_Doptimize__apply_D678_k566(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k566, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sub-refs!.340 17 9) (close _V10_Doptimize__apply_D678_k567) (bruijn ##.ref-table.680 15 6) (bruijn ##.acount.814 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k567, self)})),
      VGetArg(statics, 15-1, 6),
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_k565(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k565, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__apply_D678_k566) (bruijn ##.dummy.255.816 1 2) (bruijn ##.x.2113 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k566, self)})),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Doptimize__apply_D678_lambda188(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.341 16 10) (bruijn ##.k.2114 0 0) (##inline ##vcore.car (bruijn ##.expr.241.810 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 10)), 2,
      _var0,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Doptimize__apply_D678_k568(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k568, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.2115 1 0) (bruijn ##.apure.815 2 1) (bruijn ##.apure.254.818 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__apply_D678_lambda189(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda189, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__apply_D678_k568) (bruijn ##.acount.814 1 0) (bruijn ##.acount.253.817 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k568, self)})),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Doptimize__apply_D678_lambda187(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k565) (close _V10_Doptimize__apply_D678_lambda188) (close _V10_Doptimize__apply_D678_lambda189)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k565, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda188, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda189, self)})));
    }
}
static void _V10_Doptimize__apply_D678_k563(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k563, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.242.812 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.242.812 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k564) (close _V10_Doptimize__apply_D678_lambda187) (bruijn ##.kk.228.790 9 1)) ((bruijn ##.k.2102 4 0) #f)) ((bruijn ##.k.2102 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k564, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda187, self)})),
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
static void _V10_Doptimize__apply_D678_k562(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k562, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.241.810 0 0)) ((close _V10_Doptimize__apply_D678_k563) (##inline ##vcore.cdr (bruijn ##.expr.241.810 0 0))) ((bruijn ##.k.2102 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k563, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k561(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k561, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.240.809 0 0)) (if (##inline ##vcore.eq? #f (##inline ##vcore.car (bruijn ##.expr.240.809 0 0))) ((close _V10_Doptimize__apply_D678_k562) (##inline ##vcore.cdr (bruijn ##.expr.240.809 0 0))) ((bruijn ##.k.2102 2 0) #f)) ((bruijn ##.k.2102 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineEq2(runtime,
        VEncodeBool(false),
        VInlineCar2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k562, .env = self }, }, 1,
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
static void _V10_Doptimize__apply_D678_k560(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k560, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2103 0 0) ((close _V10_Doptimize__apply_D678_k561) (##inline ##vcore.cdr (bruijn ##.expr.789 7 1))) ((bruijn ##.k.2102 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k561, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k559(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k559, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 6 1)) ((bruijn ##.x.902 36 0) (close _V10_Doptimize__apply_D678_k560) 'if (##inline ##vcore.car (bruijn ##.expr.789 6 1))) ((bruijn ##.k.2102 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k560, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k575(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k575, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2092 0 0) (bruijn ##.k.2086 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k577(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k577, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2093 2 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.244.820 5 0)) (##inline ##vcore.cons (bruijn ##.x.2096 1 0) (##inline ##vcore.cons (bruijn ##.x.2098 0 0) '())))))
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
static void _V10_Doptimize__apply_D678_k576(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k576, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.678 14 4) (close _V10_Doptimize__apply_D678_k577) (##inline ##vcore.car (bruijn ##.expr.246.824 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k577, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Doptimize__apply_D678_lambda190(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.678 13 4) (close _V10_Doptimize__apply_D678_k576) (##inline ##vcore.car (bruijn ##.expr.245.822 2 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k576, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]));
}
static void _V10_Doptimize__apply_D678_k574(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k574, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.246.824 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.246.824 0 0))) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k575) (close _V10_Doptimize__apply_D678_lambda190) (bruijn ##.kk.228.790 10 1)) ((bruijn ##.k.2086 4 0) #f)) ((bruijn ##.k.2086 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k575, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda190, self)})),
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
static void _V10_Doptimize__apply_D678_k573(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k573, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.245.822 0 0)) ((close _V10_Doptimize__apply_D678_k574) (##inline ##vcore.cdr (bruijn ##.expr.245.822 0 0))) ((bruijn ##.k.2086 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k574, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k572(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k572, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.244.820 0 0)) ((close _V10_Doptimize__apply_D678_k573) (##inline ##vcore.cdr (bruijn ##.expr.244.820 0 0))) ((bruijn ##.k.2086 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k573, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k571(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k571, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2087 0 0) ((close _V10_Doptimize__apply_D678_k572) (##inline ##vcore.cdr (bruijn ##.expr.789 8 1))) ((bruijn ##.k.2086 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k572, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k570(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k570, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 7 1)) ((bruijn ##.x.902 37 0) (close _V10_Doptimize__apply_D678_k571) 'if (##inline ##vcore.car (bruijn ##.expr.789 7 1))) ((bruijn ##.k.2086 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k571, self)})),
      _V0if,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k581(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k581, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2082 0 0) (bruijn ##.k.2080 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_lambda191(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2083 0 0) (bruijn ##.expr.789 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 10-1, 1));
}
static void _V10_Doptimize__apply_D678_k580(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k580, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2081 0 0) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k581) (close _V10_Doptimize__apply_D678_lambda191) (bruijn ##.kk.228.790 8 1)) ((bruijn ##.k.2080 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k581, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda191, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k579(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k579, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 8 1)) ((bruijn ##.x.902 38 0) (close _V10_Doptimize__apply_D678_k580) 'basic-block (##inline ##vcore.car (bruijn ##.expr.789 8 1))) ((bruijn ##.k.2080 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 38-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k580, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k588(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k588, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2003 0 0) (bruijn ##.k.2001 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k589(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k589, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.inlining?.673 17 2) (basic-block 1 1 (##.reg.2326) ((##vcore.symbol? (bruijn ##.f.828 6 0))) (if (bruijn ##.reg.2326 0 0) ((bruijn ##.x.912 36 0) (bruijn ##.k.2077 1 0) (bruijn ##.f.828 6 0)) ((bruijn ##.k.2077 1 0) #f))) ((bruijn ##.k.2077 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 17-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 2,
      statics->vars[0],
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k592(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k592, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 18 4) (bruijn ##.k.2004 3 0) (##inline ##vcore.cons (bruijn ##.x.2007 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##inline (##inline ##vcore.cons (bruijn ##.f.828 7 0) (bruijn ##.x.2011 0 0))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 4)), 2,
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
static void _V10_Doptimize__apply_D678_k591(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k591, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 28 0) (close _V10_Doptimize__apply_D678_k592) (bruijn ##.optimize-atom.679 17 5) (bruijn ##.xs.831 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k592, self)})),
      VGetArg(statics, 17-1, 5),
      statics->up->up->vars[0]);
}
static void _V10_Doptimize__apply_D678_k593(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k593, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.inlining?.673 18 2) (basic-block 1 1 (##.reg.2325) ((##vcore.symbol? (bruijn ##.f.828 7 0))) (if (bruijn ##.reg.2325 0 0) ((bruijn ##.x.918 31 0) (bruijn ##.k.2075 1 0) (bruijn ##.f.828 7 0)) ((bruijn ##.k.2075 1 0) #f))) ((bruijn ##.k.2075 0 0) #f))
if(VDecodeBool(
VGetArg(statics, 18-1, 2))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      statics->vars[0],
      VGetArg(statics, 7-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_lambda194(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.916 46 0) (bruijn ##.k.2027 0 0) (bruijn ##.expr.260.840 3 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 3,
      _var0,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dloop_D845_k608(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_k608, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.265.844 4 1) (bruijn ##.k.2040 1 0) (bruijn ##.expr.267.846 2 1) (bruijn ##.x.2041 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V10_Dloop_D845_k607(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_k607, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.267.846 1 1))) ((bruijn ##.x.921 46 0) (close _V10_Dloop_D845_k608) (bruijn ##.next-regs.264.847 1 2)) ((bruijn ##.k.2040 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 46-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_k608, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D845_k611(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_k611, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.265.844 7 1) (bruijn ##.k.2034 2 0) (bruijn ##.expr.267.846 5 1) (bruijn ##.x.2036 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 1),
      _var0);
}
static void _V10_Dloop_D845_k610(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_k610, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 49 0) (close _V10_Dloop_D845_k611) (bruijn ##.next-regs.264.847 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_k611, self)})),
      statics->up->up->up->vars[2]);
}
static void _V10_Dloop_D845_lambda200(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_lambda200, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.kk.266.848 0 1) (close _V10_Dloop_D845_k610) (##inline ##vcore.cdr (bruijn ##.expr.267.846 3 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.267.846 3 1)) (bruijn ##.next-regs.264.847 3 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_k610, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        statics->up->up->vars[2]));
}
static void _V10_Dloop_D845_lambda199(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_lambda199, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.2033 0 0) (close _V10_Dloop_D845_lambda200))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_lambda200, self)})));
}
static void _V10_Dloop_D845_k609(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_k609, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2031 1 0) (close _V10_Dloop_D845_lambda199) (bruijn ##.loop.845 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_lambda199, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D845_lambda198(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D845_lambda198, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dloop_D845_k607) (close _V10_Dloop_D845_k609))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D845_k607, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_k609, self)})));
}
static void _V10_Doptimize__apply_D678_lambda197(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda197, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D845_lambda198)) ((bruijn ##.loop.845 0 0) (bruijn ##.k.2030 1 0) (bruijn ##.head.261.841 3 1) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D845_lambda198, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->up->up->vars[1],
      VNULL);
    }
}
static void _V10_Doptimize__apply_D678_lambda196(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda196, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.2029 0 0) (close _V10_Doptimize__apply_D678_lambda197))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda197, self)})));
}
static void _V10_Doptimize__apply_D678_k612(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k612, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2047 0 0) (bruijn ##.k.2043 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__apply_D678_k614(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k614, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2048 3 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons (bruijn ##.reg.2324 1 0) (##inline ##vcore.cons (bruijn ##.x.2014 15 0) (bruijn ##.x.2060 0 0)))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VGetArg(statics, 15-1, 0),
        _var0))));
}
static void _V10_Doptimize__apply_D678_k613(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k613, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2049 0 0) ((bruijn ##.k.2048 1 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.2014 13 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (bruijn ##.x.2015 12 0) '()))) '()) '()))))) (basic-block 1 1 (##.reg.2324) ((##vcore.+ (bruijn ##.next-cost.839 8 0) 1)) ((bruijn ##.x.914 52 0) (close _V10_Doptimize__apply_D678_k614) (bruijn ##.next-regs.851 3 2) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.tail.262.842 4 2)) '()))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VNULL,
        VInlineCons2(runtime,
        VGetArg(statics, 12-1, 0),
        VNULL))),
        VNULL),
        VNULL)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 52-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k614, self)})),
      statics->up->up->vars[2],
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[2]),
        VNULL));
    }
}
}
static void _V10_Doptimize__apply_D678_lambda202(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda202, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.915 49 0) (close _V10_Doptimize__apply_D678_k613) (bruijn ##.next-cost.839 6 0) 4095)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 49-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k613, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeInt(4095l));
}
static void _V10_Doptimize__apply_D678_lambda201(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda201, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.850 0 1)) (if (##inline ##vcore.pair? (bruijn ##.tail.262.842 1 2)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.tail.262.842 1 2))) (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k612) (close _V10_Doptimize__apply_D678_lambda202) (bruijn ##.kk.256.835 9 1)) ((bruijn ##.k.2043 0 0) #f)) ((bruijn ##.k.2043 0 0) #f)) ((bruijn ##.k.2043 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[2]))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[2])))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k612, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda202, self)})),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_lambda195(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda195, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call-with-values (bruijn ##.k.2028 0 0) (close _V10_Doptimize__apply_D678_lambda196) (close _V10_Doptimize__apply_D678_lambda201))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda196, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda201, self)})));
}
static void _V10_Doptimize__apply_D678_k606(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k606, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.x.2063 0 0) -1) ((bruijn ##.k.2023 6 0) #f) (##vcore.call-with-values (bruijn ##.k.2023 6 0) (close _V10_Doptimize__apply_D678_lambda194) (close _V10_Doptimize__apply_D678_lambda195)))
if(VDecodeBool(
VInlineEq2(runtime,
        _var0,
        VEncodeInt(-1l)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda194, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda195, self)})));
}
}
static void _V10_Doptimize__apply_D678_k605(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k605, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.cmp (close _V10_Doptimize__apply_D678_k606) (bruijn ##.x.2064 0 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VCmp2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k606, self)})),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Doptimize__apply_D678_k604(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k604, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.917 42 0) (close _V10_Doptimize__apply_D678_k605) (bruijn ##.expr.260.840 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 42-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k605, self)})),
      _var0);
}
static void _V10_Doptimize__apply_D678_k603(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k603, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k604) (##inline ##vcore.cdr (bruijn ##.expr.259.838 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k604, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__apply_D678_k602(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k602, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.259.838 0 0)) ((close _V10_Doptimize__apply_D678_k603) (##inline ##vcore.car (bruijn ##.expr.259.838 0 0))) ((bruijn ##.k.2023 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k603, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k601(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k601, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2024 0 0) ((close _V10_Doptimize__apply_D678_k602) (##inline ##vcore.cdr (bruijn ##.x.2015 3 0))) ((bruijn ##.k.2023 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k602, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k600(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k600, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.2015 2 0)) ((bruijn ##.x.902 53 0) (close _V10_Doptimize__apply_D678_k601) 'basic-block (##inline ##vcore.car (bruijn ##.x.2015 2 0))) ((bruijn ##.k.2023 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 53-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k601, self)})),
      _V0basic__block,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_lambda203(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda203, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2018 0 0) (##inline ##vcore.cons 'basic-block (##inline ##vcore.cons '1 (##inline ##vcore.cons (bruijn ##.x.2014 4 0) (##inline ##vcore.cons (bruijn ##.x.2015 3 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0basic__block,
        VInlineCons2(runtime,
        VEncodeInt(1l),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)))));
}
static void _V10_Doptimize__apply_D678_k615(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k615, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2016 1 0) (close _V10_Doptimize__apply_D678_lambda203) (bruijn ##.kk.256.835 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda203, self)})),
      statics->vars[1]);
}
static void _V10_Doptimize__apply_D678_lambda193(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda193, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__apply_D678_k600) (close _V10_Doptimize__apply_D678_k615))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k600, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k615, self)})));
}
static void _V10_Doptimize__apply_D678_k599(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k599, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.2004 7 0) (close _V10_Doptimize__apply_D678_lambda193))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      VGetArg(statics, 7-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda193, self)})));
}
static void _V10_Doptimize__apply_D678_k598(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k598, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-apply.678 21 4) (close _V10_Doptimize__apply_D678_k599) (##inline ##vcore.cons (bruijn ##.k.830 8 0) (##inline ##vcore.cons (bruijn ##.reg.832 3 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k599, self)})),
      VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)));
}
static void _V10_Doptimize__apply_D678_k597(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k597, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k598) (##inline ##vcore.cons (bruijn ##.reg.832 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.f.828 9 0) (bruijn ##.x.2070 0 0)) '())))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k598, .env = self }, }, 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 9-1, 0),
        _var0),
        VNULL)));
}
static void _V10_Doptimize__apply_D678_k596(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k596, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 30 0) (close _V10_Doptimize__apply_D678_k597) (bruijn ##.optimize-atom.679 19 5) (bruijn ##.xs.831 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k597, self)})),
      VGetArg(statics, 19-1, 5),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k595(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k595, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.add-ref!.337 20 6) (close _V10_Doptimize__apply_D678_k596) (bruijn ##.ref-table.680 18 6) (bruijn ##.reg.832 0 0) 1)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 6)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k596, self)})),
      VGetArg(statics, 18-1, 6),
      _var0,
      VEncodeInt(1l));
}
static void _V10_Doptimize__apply_D678_k618(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k618, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2004 5 0) (##inline ##vcore.cons (bruijn ##.x.2071 2 0) (##inline ##vcore.cons (bruijn ##.x.2073 1 0) (bruijn ##.x.2074 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)));
}
static void _V10_Doptimize__apply_D678_k617(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k617, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 30 0) (close _V10_Doptimize__apply_D678_k618) (bruijn ##.optimize-atom.679 19 5) (bruijn ##.xs.831 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k618, self)})),
      VGetArg(statics, 19-1, 5),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k616(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k616, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-atom.679 18 5) (close _V10_Doptimize__apply_D678_k617) (bruijn ##.k.830 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k617, self)})),
      VGetArg(statics, 5-1, 0));
}
static void _V10_Doptimize__apply_D678_k594(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k594, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2012 0 0) ((bruijn ##.x.913 35 0) (close _V10_Doptimize__apply_D678_k595) (##string ##.string.2340)) ((bruijn ##.optimize-atom.679 17 5) (close _V10_Doptimize__apply_D678_k616) (bruijn ##.f.828 6 0)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k595, self)})),
      VEncodePointer(&_V10_Dstring_D2340.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k616, self)})),
      VGetArg(statics, 6-1, 0));
}
}
static void _V10_Doptimize__apply_D678_k590(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k590, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2005 0 0) ((bruijn ##.optimize-atom.679 16 5) (close _V10_Doptimize__apply_D678_k591) (bruijn ##.k.830 3 0)) ((close _V10_Doptimize__apply_D678_k593) (close _V10_Doptimize__apply_D678_k594)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k591, self)})),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k593, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k594, self)})));
}
}
static void _V10_Doptimize__apply_D678_lambda192(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k589) (close _V10_Doptimize__apply_D678_k590))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k589, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k590, self)})));
}
static void _V10_Doptimize__apply_D678_k587(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k587, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Doptimize__apply_D678_k588) (close _V10_Doptimize__apply_D678_lambda192) (bruijn ##.kk.228.790 12 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k588, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda192, self)})),
      VGetArg(statics, 12-1, 1));
}
static void _V10_Doptimize__apply_D678_k586(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k586, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k587) (##inline ##vcore.cdr (bruijn ##.expr.249.829 1 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k587, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Doptimize__apply_D678_k585(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k585, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.249.829 0 0)) ((close _V10_Doptimize__apply_D678_k586) (##inline ##vcore.car (bruijn ##.expr.249.829 0 0))) ((bruijn ##.k.2001 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k586, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_k584(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k584, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k585) (##inline ##vcore.cdr (bruijn ##.expr.789 10 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k585, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Doptimize__apply_D678_k583(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k583, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.789 9 1)) ((close _V10_Doptimize__apply_D678_k584) (##inline ##vcore.car (bruijn ##.expr.789 9 1))) ((bruijn ##.k.2001 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k584, .env = self }, }, 1,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__apply_D678_lambda204(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda204, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.919 23 0) (bruijn ##.k.1999 0 0) (##string ##.string.2341) (bruijn ##.expr.789 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D2341.sym, VPOINTER_OTHER),
      VGetArg(statics, 10-1, 1));
}
static void _V10_Doptimize__apply_D678_k619(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k619, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.1990 8 0) (close _V10_Doptimize__apply_D678_lambda204) (bruijn ##.kk.228.790 8 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 8-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda204, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__apply_D678_k582(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k582, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k583) (close _V10_Doptimize__apply_D678_k619))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k583, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k619, self)})));
}
static void _V10_Doptimize__apply_D678_k578(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k578, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k579) (close _V10_Doptimize__apply_D678_k582))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k579, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k582, self)})));
}
static void _V10_Doptimize__apply_D678_k569(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k569, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k570) (close _V10_Doptimize__apply_D678_k578))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k570, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k578, self)})));
}
static void _V10_Doptimize__apply_D678_k558(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k558, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k559) (close _V10_Doptimize__apply_D678_k569))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k559, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k569, self)})));
}
static void _V10_Doptimize__apply_D678_k547(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k547, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k548) (close _V10_Doptimize__apply_D678_k558))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k548, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k558, self)})));
}
static void _V10_Doptimize__apply_D678_k543(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k543, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k544) (close _V10_Doptimize__apply_D678_k547))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k544, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k547, self)})));
}
static void _V10_Doptimize__apply_D678_k538(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_k538, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__apply_D678_k539) (close _V10_Doptimize__apply_D678_k543))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k539, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k543, self)})));
}
static void _V10_Doptimize__apply_D678_lambda180(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda180, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__apply_D678_k534) (close _V10_Doptimize__apply_D678_k538))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__apply_D678_k534, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_k538, self)})));
}
static void _V10_Doptimize__apply_D678_lambda179(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__apply_D678_lambda179, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.1989 0 0) (close _V10_Doptimize__apply_D678_lambda180))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda180, self)})));
}
static void _V10_Doptimize__atom_D679_k622(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k622, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2229 0 0) (bruijn ##.k.2227 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D679_lambda207(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda207, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2230 0 0) (bruijn ##.expr.854 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Doptimize__atom_D679_k621(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k621, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2228 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k622) (close _V10_Doptimize__atom_D679_lambda207) (bruijn ##.kk.269.855 2 1)) ((bruijn ##.k.2227 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k622, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda207, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k620(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k620, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 2 1)) ((bruijn ##.x.902 32 0) (close _V10_Doptimize__atom_D679_k621) 'quote (##inline ##vcore.car (bruijn ##.expr.854 2 1))) ((bruijn ##.k.2227 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k621, self)})),
      _V0quote,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k626(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k626, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2223 0 0) (bruijn ##.k.2221 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D679_lambda208(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda208, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2224 0 0) (bruijn ##.expr.854 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 1));
}
static void _V10_Doptimize__atom_D679_k625(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k625, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2222 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k626) (close _V10_Doptimize__atom_D679_lambda208) (bruijn ##.kk.269.855 3 1)) ((bruijn ##.k.2221 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k626, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda208, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k624(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k624, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 3 1)) ((bruijn ##.x.902 33 0) (close _V10_Doptimize__atom_D679_k625) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.854 3 1))) ((bruijn ##.k.2221 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k625, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k630(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k630, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2217 0 0) (bruijn ##.k.2215 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D679_lambda209(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda209, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2218 0 0) (bruijn ##.expr.854 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__atom_D679_k629(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k629, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2216 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k630) (close _V10_Doptimize__atom_D679_lambda209) (bruijn ##.kk.269.855 4 1)) ((bruijn ##.k.2215 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k630, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda209, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k628(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k628, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 4 1)) ((bruijn ##.x.902 34 0) (close _V10_Doptimize__atom_D679_k629) '##inline (##inline ##vcore.car (bruijn ##.expr.854 4 1))) ((bruijn ##.k.2215 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k629, self)})),
      _V10inline,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k634(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k634, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2211 0 0) (bruijn ##.k.2209 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D679_lambda210(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda210, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.674 8 0) (bruijn ##.k.2212 0 0) (bruijn ##.expr.854 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      _var0,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Doptimize__atom_D679_k633(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k633, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2210 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k634) (close _V10_Doptimize__atom_D679_lambda210) (bruijn ##.kk.269.855 5 1)) ((bruijn ##.k.2209 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k634, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda210, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k632(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k632, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 5 1)) ((bruijn ##.x.902 35 0) (close _V10_Doptimize__atom_D679_k633) 'lambda (##inline ##vcore.car (bruijn ##.expr.854 5 1))) ((bruijn ##.k.2209 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k633, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k638(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k638, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2205 0 0) (bruijn ##.k.2203 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__atom_D679_lambda211(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda211, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.674 9 0) (bruijn ##.k.2206 0 0) (bruijn ##.expr.854 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__atom_D679_k637(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k637, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2204 0 0) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k638) (close _V10_Doptimize__atom_D679_lambda211) (bruijn ##.kk.269.855 6 1)) ((bruijn ##.k.2203 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k638, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda211, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k636(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k636, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 6 1)) ((bruijn ##.x.902 36 0) (close _V10_Doptimize__atom_D679_k637) 'continuation (##inline ##vcore.car (bruijn ##.expr.854 6 1))) ((bruijn ##.k.2203 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k637, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D865_k644(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k644, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.280.864 5 1) (bruijn ##.k.2189 2 0) (bruijn ##.expr.282.866 3 1) (bruijn ##.x.2190 1 0) (bruijn ##.x.2191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      statics->up->vars[0],
      statics->up->up->vars[1],
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D865_k643(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k643, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 25 0) (close _V10_Dloop_D865_k644) (bruijn ##.body.279.868 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k644, self)})),
      statics->up->vars[3]);
}
static void _V10_Dloop_D865_k642(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k642, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.282.866 1 1))) ((bruijn ##.x.921 24 0) (close _V10_Dloop_D865_k643) (bruijn ##.args.278.867 1 2)) ((bruijn ##.k.2189 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k643, self)})),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D865_k648(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k648, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.284.872 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.284.872 0 0))) ((bruijn ##.kk.281.869 3 1) (bruijn ##.k.2181 1 0) (##inline ##vcore.cdr (bruijn ##.expr.282.866 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.283.870 2 0)) (bruijn ##.args.278.867 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.284.872 0 0)) (bruijn ##.body.279.868 6 3))) ((bruijn ##.k.2181 1 0) #f)) ((bruijn ##.k.2181 1 0) #f))
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
static void _V10_Dloop_D865_k647(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k647, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.283.870 1 0)) ((close _V10_Dloop_D865_k648) (##inline ##vcore.cdr (bruijn ##.expr.283.870 1 0))) ((bruijn ##.k.2181 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D865_k648, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D865_k651(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k651, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.280.864 9 1) (bruijn ##.k.2176 4 0) (bruijn ##.expr.282.866 7 1) (bruijn ##.x.2178 1 0) (bruijn ##.x.2179 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 1)), 4,
      statics->up->up->up->vars[0],
      VGetArg(statics, 7-1, 1),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D865_k650(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k650, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 29 0) (close _V10_Dloop_D865_k651) (bruijn ##.body.279.868 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k651, self)})),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dloop_D865_k649(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k649, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.921 28 0) (close _V10_Dloop_D865_k650) (bruijn ##.args.278.867 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k650, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dloop_D865_k646(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k646, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D865_k647) (close _V10_Dloop_D865_k649))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D865_k647, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k649, self)})));
}
static void _V10_Dloop_D865_lambda216(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_lambda216, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dloop_D865_k646) (##inline ##vcore.car (bruijn ##.expr.282.866 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D865_k646, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
}
static void _V10_Dloop_D865_lambda215(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_lambda215, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.2175 0 0) (close _V10_Dloop_D865_lambda216))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_lambda216, self)})));
}
static void _V10_Dloop_D865_k645(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_k645, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2173 1 0) (close _V10_Dloop_D865_lambda215) (bruijn ##.loop.865 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_lambda215, self)})),
      statics->up->vars[0]);
}
static void _V10_Dloop_D865_lambda214(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D865_lambda214, got ~D~N"
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
  // ((close _V10_Dloop_D865_k642) (close _V10_Dloop_D865_k645))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D865_k642, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_k645, self)})));
}
static void _V10_Doptimize__atom_D679_lambda213(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda213, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D865_lambda214)) ((bruijn ##.loop.865 0 0) (bruijn ##.k.2172 1 0) (##inline ##vcore.cdr (bruijn ##.expr.854 11 1)) '() '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D865_lambda214, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)),
      VNULL,
      VNULL);
    }
}
static void _V10_Doptimize__atom_D679_lambda212(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda212, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.2171 0 0) (close _V10_Doptimize__atom_D679_lambda213))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda213, self)})));
}
static void _V10_Doptimize__atom_D679_k652(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k652, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2195 0 0) (bruijn ##.k.2193 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__atom_D679_k653(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k653, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2196 1 0) (##inline ##vcore.cons 'case-lambda (bruijn ##.x.2197 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0case__lambda,
        _var0));
}
static void _V10_Doptimize__atom_D679_k654(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k654, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2198 1 0) (##inline ##vcore.cons (bruijn ##.args.877 1 1) (##inline ##vcore.cons (bruijn ##.x.2200 0 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        statics->vars[1],
        VInlineCons2(runtime,
        _var0,
        VNULL)));
}
static void _V10_Doptimize__atom_D679_lambda219(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda219, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.optimize-apply.678 12 4) (close _V10_Doptimize__atom_D679_k654) (bruijn ##.body.878 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k654, self)})),
      _var2);
}
static void _V10_Doptimize__atom_D679_lambda218(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda218, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.920 22 0) (close _V10_Doptimize__atom_D679_k653) (close _V10_Doptimize__atom_D679_lambda219) (bruijn ##.args.875 1 2) (bruijn ##.body.876 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k653, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda219, self)})),
      statics->vars[2],
      statics->vars[3]);
}
static void _V10_Doptimize__atom_D679_lambda217(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda217, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.874 0 1)) (##vcore.call-with-values (close _V10_Doptimize__atom_D679_k652) (close _V10_Doptimize__atom_D679_lambda218) (bruijn ##.kk.269.855 8 1)) ((bruijn ##.k.2193 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k652, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda218, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k641(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k641, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2170 0 0) (##vcore.call-with-values (bruijn ##.k.2169 1 0) (close _V10_Doptimize__atom_D679_lambda212) (close _V10_Doptimize__atom_D679_lambda217)) ((bruijn ##.k.2169 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda212, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda217, self)})));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_k640(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k640, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.854 7 1)) ((bruijn ##.x.902 37 0) (close _V10_Doptimize__atom_D679_k641) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.854 7 1))) ((bruijn ##.k.2169 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k641, self)})),
      _V0case__lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__atom_D679_lambda220(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda220, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2167 0 0) (bruijn ##.expr.854 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__atom_D679_k655(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k655, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2160 6 0) (close _V10_Doptimize__atom_D679_lambda220) (bruijn ##.kk.269.855 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda220, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__atom_D679_k639(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k639, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D679_k640) (close _V10_Doptimize__atom_D679_k655))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k640, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k655, self)})));
}
static void _V10_Doptimize__atom_D679_k635(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k635, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D679_k636) (close _V10_Doptimize__atom_D679_k639))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k636, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k639, self)})));
}
static void _V10_Doptimize__atom_D679_k631(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k631, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D679_k632) (close _V10_Doptimize__atom_D679_k635))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k632, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k635, self)})));
}
static void _V10_Doptimize__atom_D679_k627(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k627, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D679_k628) (close _V10_Doptimize__atom_D679_k631))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k628, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k631, self)})));
}
static void _V10_Doptimize__atom_D679_k623(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_k623, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__atom_D679_k624) (close _V10_Doptimize__atom_D679_k627))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k624, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k627, self)})));
}
static void _V10_Doptimize__atom_D679_lambda206(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda206, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__atom_D679_k620) (close _V10_Doptimize__atom_D679_k623))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__atom_D679_k620, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_k623, self)})));
}
static void _V10_Doptimize__atom_D679_lambda205(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__atom_D679_lambda205, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.k.2159 0 0) (close _V10_Doptimize__atom_D679_lambda206))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda206, self)})));
}
static void _V10_Doptimize__impl_D342_k660(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k660, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2272 0 0) (bruijn ##.k.2270 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda222(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda222, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2273 0 0) (bruijn ##.expr.672 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 7-1, 1));
}
static void _V10_Doptimize__impl_D342_k659(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k659, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2271 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k660) (close _V10_Doptimize__impl_D342_lambda222) (bruijn ##.kk.160.881 2 1)) ((bruijn ##.k.2270 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k660, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda222, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k658(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k658, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 5 1)) ((bruijn ##.x.902 33 0) (close _V10_Doptimize__impl_D342_k659) 'quote (##inline ##vcore.car (bruijn ##.expr.672 5 1))) ((bruijn ##.k.2270 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 5-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 33-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k659, self)})),
      _V0quote,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k664(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k664, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2266 0 0) (bruijn ##.k.2264 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda223(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda223, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2267 0 0) (bruijn ##.expr.672 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Doptimize__impl_D342_k663(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k663, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2265 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k664) (close _V10_Doptimize__impl_D342_lambda223) (bruijn ##.kk.160.881 3 1)) ((bruijn ##.k.2264 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k664, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda223, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k662(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k662, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 6 1)) ((bruijn ##.x.902 34 0) (close _V10_Doptimize__impl_D342_k663) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.672 6 1))) ((bruijn ##.k.2264 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 6-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 34-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k663, self)})),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k668(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k668, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2260 0 0) (bruijn ##.k.2258 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda224(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda224, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2261 0 0) (bruijn ##.expr.672 9 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 9-1, 1));
}
static void _V10_Doptimize__impl_D342_k667(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k667, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2259 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k668) (close _V10_Doptimize__impl_D342_lambda224) (bruijn ##.kk.160.881 4 1)) ((bruijn ##.k.2258 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k668, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda224, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k666(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k666, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 7 1)) ((bruijn ##.x.902 35 0) (close _V10_Doptimize__impl_D342_k667) '##inline (##inline ##vcore.car (bruijn ##.expr.672 7 1))) ((bruijn ##.k.2258 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 7-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 35-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k667, self)})),
      _V10inline,
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k672(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k672, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2254 0 0) (bruijn ##.k.2252 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda225(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda225, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.674 9 0) (bruijn ##.k.2255 0 0) (bruijn ##.expr.672 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      _var0,
      VGetArg(statics, 10-1, 1));
}
static void _V10_Doptimize__impl_D342_k671(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k671, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2253 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k672) (close _V10_Doptimize__impl_D342_lambda225) (bruijn ##.kk.160.881 5 1)) ((bruijn ##.k.2252 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k672, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda225, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k670(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k670, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 8 1)) ((bruijn ##.x.902 36 0) (close _V10_Doptimize__impl_D342_k671) 'lambda (##inline ##vcore.car (bruijn ##.expr.672 8 1))) ((bruijn ##.k.2252 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 8-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k671, self)})),
      _V0lambda,
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k676(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k676, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2248 0 0) (bruijn ##.k.2246 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda226(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda226, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-lambda.674 10 0) (bruijn ##.k.2249 0 0) (bruijn ##.expr.672 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D342_k675(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k675, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2247 0 0) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k676) (close _V10_Doptimize__impl_D342_lambda226) (bruijn ##.kk.160.881 6 1)) ((bruijn ##.k.2246 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k676, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda226, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k674(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k674, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 9 1)) ((bruijn ##.x.902 37 0) (close _V10_Doptimize__impl_D342_k675) 'continuation (##inline ##vcore.car (bruijn ##.expr.672 9 1))) ((bruijn ##.k.2246 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 9-1, 1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 37-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k675, self)})),
      _V0continuation,
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_k679(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k679, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2243 0 0) (bruijn ##.k.2242 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
static void _V10_Doptimize__impl_D342_lambda227(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda227, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-apply.678 10 4) (bruijn ##.k.2244 0 0) (bruijn ##.expr.672 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D342_k678(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k678, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.672 10 1)) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k679) (close _V10_Doptimize__impl_D342_lambda227) (bruijn ##.kk.160.881 6 1)) ((bruijn ##.k.2242 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VGetArg(statics, 10-1, 1)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k679, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda227, self)})),
      VGetArg(statics, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize__impl_D342_lambda228(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda228, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2240 0 0) (bruijn ##.expr.672 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Doptimize__impl_D342_k680(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k680, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2233 6 0) (close _V10_Doptimize__impl_D342_lambda228) (bruijn ##.kk.160.881 6 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda228, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Doptimize__impl_D342_k677(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k677, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D342_k678) (close _V10_Doptimize__impl_D342_k680))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k678, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k680, self)})));
}
static void _V10_Doptimize__impl_D342_k673(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k673, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D342_k674) (close _V10_Doptimize__impl_D342_k677))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k674, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k677, self)})));
}
static void _V10_Doptimize__impl_D342_k669(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k669, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D342_k670) (close _V10_Doptimize__impl_D342_k673))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k670, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k673, self)})));
}
static void _V10_Doptimize__impl_D342_k665(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k665, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D342_k666) (close _V10_Doptimize__impl_D342_k669))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k666, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k669, self)})));
}
static void _V10_Doptimize__impl_D342_k661(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k661, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize__impl_D342_k662) (close _V10_Doptimize__impl_D342_k665))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k662, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k665, self)})));
}
static void _V10_Doptimize__impl_D342_lambda221(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda221, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize__impl_D342_k658) (close _V10_Doptimize__impl_D342_k661))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize__impl_D342_k658, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k661, self)})));
}
static void _V10_Doptimize__impl_D342_k657(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k657, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.1705 3 0) (close _V10_Doptimize__impl_D342_lambda221))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda221, self)})));
}
static void _V10_Doptimize__impl_D342_k656(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k656, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Doptimize__impl_D342_k657) (bruijn ##.dummy.159.682 1 8) (bruijn ##.x.2275 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k657, self)})),
      VEncodeInt(1l), VEncodeInt(8l),
      _var0
    );
}
static void _V10_Doptimize__impl_D342_lambda229(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda229, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.count-refs.341 3 10) (bruijn ##.k.2276 0 0) (bruijn ##.expr.672 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 2,
      _var0,
      statics->up->vars[1]);
}
static void _V10_Doptimize__impl_D342_k681(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_k681, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.2277 1 0) (bruijn ##.impure-table.681 2 7) (bruijn ##.impure-table.158.880 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->vars[0],
      VEncodeInt(2l), VEncodeInt(7l),
      statics->vars[2]
    );
}
static void _V10_Doptimize__impl_D342_lambda230(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda230, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (set! (close _V10_Doptimize__impl_D342_k681) (bruijn ##.ref-table.680 1 6) (bruijn ##.ref-table.157.879 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k681, self)})),
      VEncodeInt(1l), VEncodeInt(6l),
      _var1
    );
}
static void _V10_Doptimize__impl_D342_lambda133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize__impl_D342_lambda133, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 9 ((close _V10_Doptimize__lambda_D674_lambda134) (close _V10_Dinline__let_D675_lambda138) (close _V10_Doptimize__let_D676_lambda144) (close _V10_Doptimize__letrec_D677_lambda170) (close _V10_Doptimize__apply_D678_lambda179) (close _V10_Doptimize__atom_D679_lambda205) #f #f #f) (##vcore.call-with-values (close _V10_Doptimize__impl_D342_k656) (close _V10_Doptimize__impl_D342_lambda229) (close _V10_Doptimize__impl_D342_lambda230)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__lambda_D674_lambda134, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dinline__let_D675_lambda138, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__let_D676_lambda144, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__letrec_D677_lambda170, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__apply_D678_lambda179, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__atom_D679_lambda205, self)}));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = VEncodeBool(false);
    self->vars[8] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_k656, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda229, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda230, self)})));
    }
}
static void _V10_Doptimize_D343_k684(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k684, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2300 0 0) (bruijn ##.k.2298 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Doptimize_D343_lambda233(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_lambda233, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2301 0 0) (bruijn ##.expr.889 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[1]);
}
static void _V10_Doptimize_D343_k683(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k683, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2299 0 0) (##vcore.call-with-values (close _V10_Doptimize_D343_k684) (close _V10_Doptimize_D343_lambda233) (bruijn ##.kk.285.892 2 1)) ((bruijn ##.k.2298 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k684, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_lambda233, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D343_k682(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k682, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.889 2 1)) ((bruijn ##.x.902 30 0) (close _V10_Doptimize_D343_k683) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.889 2 1))) ((bruijn ##.k.2298 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k683, self)})),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D343_k690(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k690, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.2290 0 0) (bruijn ##.k.2285 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Doptimize_D343_k691(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k691, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.2291 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.289.896 3 0)) (##inline ##vcore.cons (bruijn ##.x.2294 0 0) '()))))
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
static void _V10_Doptimize_D343_lambda234(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_lambda234, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.optimize-impl.342 8 11) (close _V10_Doptimize_D343_k691) (##inline ##vcore.car (bruijn ##.expr.290.898 1 0)) (bruijn ##.inlining?.890 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 11)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k691, self)})),
      VInlineCar2(runtime,
        statics->vars[0]),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Doptimize_D343_k689(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k689, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.290.898 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.290.898 0 0))) (##vcore.call-with-values (close _V10_Doptimize_D343_k690) (close _V10_Doptimize_D343_lambda234) (bruijn ##.kk.285.892 5 1)) ((bruijn ##.k.2285 3 0) #f)) ((bruijn ##.k.2285 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k690, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_lambda234, self)})),
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
static void _V10_Doptimize_D343_k688(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k688, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.289.896 0 0)) ((close _V10_Doptimize_D343_k689) (##inline ##vcore.cdr (bruijn ##.expr.289.896 0 0))) ((bruijn ##.k.2285 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D343_k689, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D343_k687(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k687, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.2286 0 0) ((close _V10_Doptimize_D343_k688) (##inline ##vcore.cdr (bruijn ##.expr.889 4 1))) ((bruijn ##.k.2285 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D343_k688, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D343_k686(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k686, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.889 3 1)) ((bruijn ##.x.902 31 0) (close _V10_Doptimize_D343_k687) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.889 3 1))) ((bruijn ##.k.2285 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k687, self)})),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Doptimize_D343_lambda235(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_lambda235, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.optimize-impl.342 5 11) (bruijn ##.k.2283 0 0) (bruijn ##.expr.889 4 1) (bruijn ##.inlining?.890 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      _var0,
      statics->up->up->up->vars[1],
      statics->up->up->up->vars[2]);
}
static void _V10_Doptimize_D343_k692(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k692, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.2280 2 0) (close _V10_Doptimize_D343_lambda235) (bruijn ##.kk.285.892 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_lambda235, self)})),
      statics->up->vars[1]);
}
static void _V10_Doptimize_D343_k685(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_k685, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Doptimize_D343_k686) (close _V10_Doptimize_D343_k692))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D343_k686, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k692, self)})));
}
static void _V10_Doptimize_D343_lambda232(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_lambda232, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Doptimize_D343_k682) (close _V10_Doptimize_D343_k685))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Doptimize_D343_k682, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_k685, self)})));
}
static void _V10_Doptimize_D343_lambda231(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Doptimize_D343_lambda231, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.2279 0 0) (close _V10_Doptimize_D343_lambda232))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_lambda232, self)})));
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
  // (letrec 13 ((close _V10_Dapplication_Q_D331_lambda2) (close _V10_Dcombination_Q_D332_lambda3) (close _V10_Dto__cps_D333_lambda4) (close _V10_Dsubstitute_D334_lambda47) (close _V10_Dspecial__apply_Q_D335_lambda82) (close _V10_Dtaillength_D336_lambda83) (close _V10_Dadd__ref_B_D337_lambda85) (close _V10_Dsub__ref_B_D338_lambda87) (close _V10_Dadd__refs_B_D339_lambda89) (close _V10_Dsub__refs_B_D340_lambda91) (close _V10_Dcount__refs_D341_lambda93) (close _V10_Doptimize__impl_D342_lambda133) (close _V10_Doptimize_D343_lambda231)) ((bruijn ##.k.901 36 0) (##inline ##vcore.cons (##inline ##vcore.cons 'to-cps (bruijn ##.to-cps.333 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'optimize (bruijn ##.optimize.343 0 12)) '()))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D331_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D332_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dto__cps_D333_lambda4, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsubstitute_D334_lambda47, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dspecial__apply_Q_D335_lambda82, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtaillength_D336_lambda83, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__ref_B_D337_lambda85, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__ref_B_D338_lambda87, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dadd__refs_B_D339_lambda89, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsub__refs_B_D340_lambda91, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcount__refs_D341_lambda93, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize__impl_D342_lambda133, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Doptimize_D343_lambda231, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 36-1, 0)), 1,
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
  // ((bruijn ##..vcore.import.291 26 0) (close _V0vanity_V0compiler_V0cps_V20_k35) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k35, self)})),
      _V0cadr);
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
  // ((bruijn ##..vcore.import.291 25 0) (close _V0vanity_V0compiler_V0cps_V20_k34) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k34, self)})),
      _V0caddr);
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
  // ((bruijn ##..vcore.import.291 24 0) (close _V0vanity_V0compiler_V0cps_V20_k33) 'mangle-library)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k33, self)})),
      _V0mangle__library);
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
  // ((bruijn ##..vcore.import.291 23 0) (close _V0vanity_V0compiler_V0cps_V20_k32) 'hash-table->alist)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k32, self)})),
      _V0hash__table___Galist);
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
  // ((bruijn ##..vcore.import.291 22 0) (close _V0vanity_V0compiler_V0cps_V20_k31) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k31, self)})),
      _V0for__each);
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
  // ((bruijn ##..vcore.import.291 21 0) (close _V0vanity_V0compiler_V0cps_V20_k30) 'make-hash-table)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k30, self)})),
      _V0make__hash__table);
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
  // ((bruijn ##..vcore.import.291 20 0) (close _V0vanity_V0compiler_V0cps_V20_k29) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k29, self)})),
      _V0values);
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
  // ((bruijn ##..vcore.import.291 19 0) (close _V0vanity_V0compiler_V0cps_V20_k28) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k28, self)})),
      _V0reverse);
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
  // ((bruijn ##..vcore.import.291 18 0) (close _V0vanity_V0compiler_V0cps_V20_k27) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k27, self)})),
      _V0map);
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
  // ((bruijn ##..vcore.import.291 17 0) (close _V0vanity_V0compiler_V0cps_V20_k26) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k26, self)})),
      _V0compiler__error);
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
  // ((bruijn ##..vcore.import.291 16 0) (close _V0vanity_V0compiler_V0cps_V20_k25) 'is-basic-intrinsic?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k25, self)})),
      _V0is__basic__intrinsic_Q);
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
  // ((bruijn ##..vcore.import.291 15 0) (close _V0vanity_V0compiler_V0cps_V20_k24) 'num-pairs)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k24, self)})),
      _V0num__pairs);
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
  // ((bruijn ##..vcore.import.291 14 0) (close _V0vanity_V0compiler_V0cps_V20_k23) 'split-at-right)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k23, self)})),
      _V0split__at__right);
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
  // ((bruijn ##..vcore.import.291 13 0) (close _V0vanity_V0compiler_V0cps_V20_k22) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k22, self)})),
      _V0_G);
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
  // ((bruijn ##..vcore.import.291 12 0) (close _V0vanity_V0compiler_V0cps_V20_k21) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k21, self)})),
      _V0append);
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
  // ((bruijn ##..vcore.import.291 11 0) (close _V0vanity_V0compiler_V0cps_V20_k20) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k20, self)})),
      _V0gensym);
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
  // ((bruijn ##..vcore.import.291 10 0) (close _V0vanity_V0compiler_V0cps_V20_k19) 'lookup-inline-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k19, self)})),
      _V0lookup__inline__name);
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
  // ((bruijn ##..vcore.import.291 9 0) (close _V0vanity_V0compiler_V0cps_V20_k18) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k18, self)})),
      _V0error);
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
  // ((bruijn ##..vcore.import.291 8 0) (close _V0vanity_V0compiler_V0cps_V20_k17) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k17, self)})),
      _V0list);
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
  // ((bruijn ##..vcore.import.291 7 0) (close _V0vanity_V0compiler_V0cps_V20_k16) 'length)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k16, self)})),
      _V0length);
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
  // ((bruijn ##..vcore.import.291 6 0) (close _V0vanity_V0compiler_V0cps_V20_k15) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k15, self)})),
      _V0_L_E);
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
  // ((bruijn ##..vcore.import.291 5 0) (close _V0vanity_V0compiler_V0cps_V20_k14) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k14, self)})),
      _V0_E);
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
  // ((bruijn ##..vcore.import.291 4 0) (close _V0vanity_V0compiler_V0cps_V20_k13) 'hash-table-ref)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k13, self)})),
      _V0hash__table__ref);
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
  // ((bruijn ##..vcore.import.291 3 0) (close _V0vanity_V0compiler_V0cps_V20_k12) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k12, self)})),
      _V0atom_Q);
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
  // ((bruijn ##..vcore.import.291 2 0) (close _V0vanity_V0compiler_V0cps_V20_k11) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k11, self)})),
      _V0memv);
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
  // ((bruijn ##..vcore.import.291 1 0) (close _V0vanity_V0compiler_V0cps_V20_k10) 'hash-table-set!)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k10, self)})),
      _V0hash__table__set_B);
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
  // ((bruijn ##..vcore.import.291 0 0) (close _V0vanity_V0compiler_V0cps_V20_k9) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k9, self)})),
      _V0equal_Q);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0cps_V20_k8) (##string ##.string.2342) (bruijn ##.x.2306 6 0) (bruijn ##.x.2307 5 0) (bruijn ##.x.2308 4 0) (bruijn ##.x.2309 3 0) (bruijn ##.x.2310 2 0) (bruijn ##.x.2311 1 0) (bruijn ##.x.2312 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 9,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k8, self)})),
      VEncodePointer(&_V10_Dstring_D2342.sym, VPOINTER_OTHER),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k7) (##string ##.string.2343))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k7, self)})),
      VEncodePointer(&_V10_Dstring_D2343.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k6) (##string ##.string.2344))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k6, self)})),
      VEncodePointer(&_V10_Dstring_D2344.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k5) (##string ##.string.2345))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k5, self)})),
      VEncodePointer(&_V10_Dstring_D2345.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k4) (##string ##.string.2346))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D2346.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k3) (##string ##.string.2347))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D2347.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k2) (##string ##.string.2348))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D2348.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0cps_V20_k1) (##string ##.string.2349))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0cps_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D2349.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0cps_V20 = (VFunc)_V0vanity_V0compiler_V0cps_V20_lambda1;
