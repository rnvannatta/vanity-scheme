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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
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
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
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
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D445 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static __attribute__((constructor)) void VDllMain1() {
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VLookupConstant("_V0compiler__warning", &_VW_V0compiler__warning), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VLookupConstant("_V0typevector_Q", &_VW_V0typevector_Q), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
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
static void _V10_Dgather__variables_D28_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.89 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern.31 4 1)) (bruijn ##.x.97 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
        _var0));
}
static void _V10_Dgather__variables_D28_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 8 2) (bruijn ##.k.113 1 0) (bruijn ##.x.114 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
static void _V10_Dgather__variables_D28_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern.31 7 1))) ((bruijn ##.x.74 23 0) (close _V10_Dgather__variables_D28_k26) (bruijn ##.pattern.31 7 1)) ((bruijn ##.k.113 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k26, self)})),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__variables_D28_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-variables.28 10 0) (bruijn ##.k.89 9 0) (##inline ##vcore.cons (bruijn ##.x.108 1 0) (##inline ##vcore.cons (bruijn ##.x.110 0 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 9 1)))) (bruijn ##.eqv?.32 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)))),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dgather__variables_D28_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.76 22 0) (close _V10_Dgather__variables_D28_k29) (bruijn ##.pattern.31 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k29, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dgather__variables_D28_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.gather-variables.28 8 0) (bruijn ##.k.89 7 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 7 1)) (bruijn ##.eqv?.32 7 2)) ((bruijn ##.x.74 23 0) (close _V10_Dgather__variables_D28_k28) (bruijn ##.pattern.31 7 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1)),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k28, self)})),
      VGetArg(statics, 7-1, 1));
}
}
static void _V10_Dgather__variables_D28_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.gather-variables.28 7 0) (bruijn ##.k.89 6 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 6 1)) (bruijn ##.eqv?.32 6 2)) ((close _V10_Dgather__variables_D28_k25) (close _V10_Dgather__variables_D28_k27)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__variables_D28_k25, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k27, self)})));
}
}
static void _V10_Dgather__variables_D28_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.x.87 8 0) (bruijn ##.k.89 5 0) (##string ##.string.446) (##inline ##vcore.car (bruijn ##.pattern.31 5 1))) ((bruijn ##.x.84 11 0) (close _V10_Dgather__variables_D28_k24) (##inline ##vcore.car (bruijn ##.pattern.31 5 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D446.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k24, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
}
static void _V10_Dgather__variables_D28_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.93 0 0) ((bruijn ##.gather-variables.28 3 0) (bruijn ##.k.89 2 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 2 1)) (bruijn ##.eqv?.32 2 2)) (basic-block 1 1 (##.reg.438) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern.31 3 1)))) (if (bruijn ##.reg.438 0 0) ((bruijn ##.gather-variables.28 4 0) (close _V10_Dgather__variables_D28_k22) (##inline ##vcore.cdr (bruijn ##.pattern.31 3 1)) (bruijn ##.eqv?.32 3 2)) (basic-block 1 1 (##.reg.439) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern.31 4 1)))) (if (bruijn ##.reg.439 0 0) ((bruijn ##.x.87 7 0) (bruijn ##.k.89 4 0) (##string ##.string.445) (##inline ##vcore.car (bruijn ##.pattern.31 4 1))) ((bruijn ##.x.83 11 0) (close _V10_Dgather__variables_D28_k23) (##inline ##vcore.car (bruijn ##.pattern.31 4 1))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      statics->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k22, self)})),
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      statics->up->up->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D445.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k23, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
    }
}
    }
}
}
static void _V10_Dgather__variables_D28_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) ((bruijn ##.gather-variables.28 2 0) (bruijn ##.k.89 1 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 1 1)) (bruijn ##.eqv?.32 1 2)) ((bruijn ##.eqv?.32 1 2) (close _V10_Dgather__variables_D28_k21) (##inline ##vcore.car (bruijn ##.pattern.31 1 1)) '...))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k21, self)})),
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0_D_D_D);
}
}
static void _V10_Dgather__variables_D28_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__variables_D28_lambda2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.pattern.31 0 1)) ((bruijn ##.k.89 0 0) '()) ((bruijn ##.eqv?.32 0 2) (close _V10_Dgather__variables_D28_k20) (##inline ##vcore.car (bruijn ##.pattern.31 0 1)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_k20, self)})),
      VInlineCar2(runtime,
        _var1),
      _V0_U);
}
}
static void _V10_Diter_D34_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.135 1 0) (bruijn ##.x.137 0 0) '...)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V0_D_D_D);
}
static void _V10_Diter_D34_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.pattern.35 2 1)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.pattern.35 2 1))) ((bruijn ##.x.79 15 0) (close _V10_Diter_D34_k31) (bruijn ##.pattern.35 2 1)) ((bruijn ##.k.135 0 0) #f)) ((bruijn ##.k.135 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_k31, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D34_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.441) ((##vcore.+ (bruijn ##.infinites.36 5 2) 1)) ((bruijn ##.iter.34 6 0) (bruijn ##.k.123 5 0) (bruijn ##.x.127 1 0) (bruijn ##.reg.441 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      self->vars[0]);
    }
}
static void _V10_Diter_D34_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.126 0 0) ((bruijn ##.x.78 17 0) (close _V10_Diter_D34_k34) (bruijn ##.pattern.35 3 1)) ((bruijn ##.k.123 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_k34, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D34_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.131 0 0) ((bruijn ##.iter.34 4 0) (bruijn ##.k.123 3 0) (##inline ##vcore.cdr (bruijn ##.pattern.35 3 1)) (bruijn ##.infinites.36 3 2)) ((bruijn ##.k.123 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->vars[1]),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D34_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.125 0 0) ((bruijn ##.check-pattern.29 5 1) (close _V10_Diter_D34_k33) (##inline ##vcore.car (bruijn ##.pattern.35 2 1))) (if (##inline ##vcore.pair? (bruijn ##.pattern.35 2 1)) ((bruijn ##.check-pattern.29 5 1) (close _V10_Diter_D34_k35) (##inline ##vcore.car (bruijn ##.pattern.35 2 1))) ((bruijn ##.x.88 6 0) (bruijn ##.k.123 2 0) (bruijn ##.infinites.36 2 2) 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_k33, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_k35, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->up->vars[0],
      statics->up->vars[2],
      VEncodeInt(1l));
}
}
}
static void _V10_Diter_D34_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D34_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.440) ((##vcore.symbol? (bruijn ##.pattern.35 1 1))) (if (bruijn ##.reg.440 0 0) ((bruijn ##.x.88 5 0) (bruijn ##.k.123 1 0) (bruijn ##.infinites.36 1 2) 0) ((close _V10_Diter_D34_k30) (close _V10_Diter_D34_k32))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->vars[0],
      statics->vars[2],
      VEncodeInt(0l));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D34_k30, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_k32, self)})));
}
    }
}
static void _V10_Dcheck__pattern_D29_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcheck__pattern_D29_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D34_lambda4)) ((bruijn ##.iter.34 0 0) (bruijn ##.k.122 1 0) (bruijn ##.pattern.33 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D34_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(0l));
    }
}
static void _V10_Dmatch__ellipses_D39_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.140 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cmp (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 7 1)) '())) (##inline ##vcore.cons (bruijn ##.len.46 4 0) '()))) (##inline ##vcore.cons '-1 '()))) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 7 1)) (##inline ##vcore.cons (bruijn ##.len.46 4 0) '()))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.head.47 2 0) (##inline ##vcore.cons (bruijn ##.tail.48 1 0) '())) (##inline ##vcore.cons (bruijn ##.x.154 0 0) '()))) '()))) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
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
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
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
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))),
        VNULL)))));
}
static void _V10_Dmatch__ellipses_D39_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 7 1) (close _V10_Dmatch__ellipses_D39_k42) (##inline ##vcore.cons (bruijn ##.head.47 1 0) (##inline ##vcore.cons (bruijn ##.tail.48 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.41 6 1)))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.253 5 0) (##inline ##vcore.qcons '... '())) (##inline ##vcore.cons (bruijn ##.tail-pattern.45 4 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.42 6 2)))) (bruijn ##.success-expr.43 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k42, self)})),
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)))),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _V0_D_D_D,
        VNULL)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)))),
      VGetArg(statics, 6-1, 3));
}
static void _V10_Dmatch__ellipses_D39_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 24 0) (close _V10_Dmatch__ellipses_D39_k41) (##string ##.string.447))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k41, self)})),
      VEncodePointer(&_V10_Dstring_D447.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D39_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.140 20 0) (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 20 1)) '())) (bruijn ##.x.245 7 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.56 8 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (bruijn ##.x.238 6 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.55 9 0) '()) (##inline ##vcore.cons (bruijn ##.x.214 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (bruijn ##.x.218 1 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.52 12 0)) (##inline ##vcore.cons (bruijn ##.x.183 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
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
        VGetArg(statics, 10-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        _V0loop,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 20-1, 1)),
        VNULL)),
        VGetArg(statics, 7-1, 0)),
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
        VGetArg(statics, 8-1, 0),
        VNULL)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        VGetArg(statics, 6-1, 0))),
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
        VGetArg(statics, 9-1, 0),
        VNULL),
        VInlineCons2(runtime,
        statics->up->vars[0],
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 10-1, 0),
        VInlineCons2(runtime,
        VGetArg(statics, 8-1, 0),
        statics->vars[0])),
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
        VGetArg(statics, 12-1, 0)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
static void _V10_Dmatch__ellipses_D39_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 20 1) (close _V10_Dmatch__ellipses_D39_k58) (##inline ##vcore.cons 'tail-expr (##inline ##vcore.cdr (bruijn ##.expr-stack.41 19 1))) (##inline ##vcore.cons (bruijn ##.tail-pattern.50 13 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.42 19 2))) (bruijn ##.success-expr.43 19 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k58, self)})),
      VInlineCons2(runtime,
        _V0tail__expr,
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1))),
      VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 2))),
      VGetArg(statics, 19-1, 3));
}
static void _V10_Dmatch__ellipses_D39_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.219 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.61 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
static void _V10_Dmatch__ellipses_D39_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 29 0) (close _V10_Dmatch__ellipses_D39_k57) (close _V10_Dmatch__ellipses_D39_lambda7) (bruijn ##.syms.53 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k57, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_lambda7, self)})),
      VGetArg(statics, 9-1, 0));
}
static void _V10_Dmatch__ellipses_D39_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 18 1) (close _V10_Dmatch__ellipses_D39_k56) (bruijn ##.x.221 2 0) (bruijn ##.x.222 1 0) (##inline ##vcore.cons (bruijn ##.k2.55 6 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.56 5 0) '())) (bruijn ##.x.226 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k56, self)})),
      statics->up->vars[0],
      statics->vars[0],
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        _var0)));
}
static void _V10_Dmatch__ellipses_D39_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.227 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.59 0 1) (##inline ##vcore.cons (bruijn ##.sym.60 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcons,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
static void _V10_Dmatch__ellipses_D39_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 27 0) (close _V10_Dmatch__ellipses_D39_k55) (close _V10_Dmatch__ellipses_D39_lambda8) (bruijn ##.variables.52 8 0) (bruijn ##.syms.53 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k55, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_lambda8, self)})),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 7-1, 0));
}
static void _V10_Dmatch__ellipses_D39_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 32 0) (close _V10_Dmatch__ellipses_D39_k54) (bruijn ##.pattern.49 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 32-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k54, self)})),
      VGetArg(statics, 10-1, 0));
}
static void _V10_Dmatch__ellipses_D39_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 31 0) (close _V10_Dmatch__ellipses_D39_k53) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.56 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 31-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k53, self)})),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
static void _V10_Dmatch__ellipses_D39_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.239 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.58 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
static void _V10_Dmatch__ellipses_D39_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 24 0) (close _V10_Dmatch__ellipses_D39_k52) (close _V10_Dmatch__ellipses_D39_lambda9) (bruijn ##.syms.53 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k52, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_lambda9, self)})),
      statics->up->up->up->vars[0]);
}
static void _V10_Dmatch__ellipses_D39_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.246 0 0) (##inline ##vcore.cons (bruijn ##.sym.57 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
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
static void _V10_Dmatch__ellipses_D39_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 23 0) (close _V10_Dmatch__ellipses_D39_k51) (close _V10_Dmatch__ellipses_D39_lambda10) (bruijn ##.syms.53 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k51, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_lambda10, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dmatch__ellipses_D39_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 30 0) (close _V10_Dmatch__ellipses_D39_k50) (##string ##.string.449))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k50, self)})),
      VEncodePointer(&_V10_Dstring_D449.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D39_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 29 0) (close _V10_Dmatch__ellipses_D39_k49) (##string ##.string.450))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k49, self)})),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D39_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 28 0) (close _V10_Dmatch__ellipses_D39_k48) (##string ##.string.450))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k48, self)})),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
}
static void _V10_Dmatch__ellipses_D39_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 19 0) (close _V10_Dmatch__ellipses_D39_k47) (bruijn ##.x.73 27 0) (bruijn ##.variables.52 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k47, self)})),
      VGetArg(statics, 27-1, 0),
      _var0);
}
static void _V10_Dmatch__ellipses_D39_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gather-variables.28 10 0) (close _V10_Dmatch__ellipses_D39_k46) (bruijn ##.x.252 0 0) (bruijn ##.eqv?.38 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k46, self)})),
      _var0,
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dmatch__ellipses_D39_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 23 0) (close _V10_Dmatch__ellipses_D39_k45) (bruijn ##.pattern.49 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k45, self)})),
      statics->vars[0]);
}
static void _V10_Dmatch__ellipses_D39_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.85 12 0) (close _V10_Dmatch__ellipses_D39_k44) (bruijn ##.pattern-stack.42 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k44, self)})),
      VGetArg(statics, 5-1, 2));
}
static void _V10_Dmatch__ellipses_D39_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.141 0 0) ((bruijn ##.x.73 23 0) (close _V10_Dmatch__ellipses_D39_k40) (##string ##.string.448)) ((bruijn ##.x.74 22 0) (close _V10_Dmatch__ellipses_D39_k43) (bruijn ##.pattern-stack.42 4 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k40, self)})),
      VEncodePointer(&_V10_Dstring_D448.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k43, self)})),
      statics->up->up->up->vars[2]);
}
}
static void _V10_Dmatch__ellipses_D39_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 15 0) (close _V10_Dmatch__ellipses_D39_k39) (bruijn ##.len.46 0 0) 0)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k39, self)})),
      _var0,
      VEncodeInt(0l));
}
static void _V10_Dmatch__ellipses_D39_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 12 0) (close _V10_Dmatch__ellipses_D39_k38) (bruijn ##.tail-pattern.45 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k38, self)})),
      _var0);
}
static void _V10_Dmatch__ellipses_D39_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.85 8 0) (close _V10_Dmatch__ellipses_D39_k37) (bruijn ##.pattern-stack.42 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k37, self)})),
      statics->vars[2]);
}
static void _V10_Dmatch__ellipses_D39_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__ellipses_D39_lambda6, got ~D~N"
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
  // ((bruijn ##.x.74 18 0) (close _V10_Dmatch__ellipses_D39_k36) (bruijn ##.pattern-stack.42 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_k36, self)})),
      _var2);
}
static void _V10_Dmatch__iter_D40_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 3 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 3 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.264 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[2]),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[1]),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 5 1)) '())) (##inline ##vcore.cons (bruijn ##.x.279 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dnull_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 6 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 6 1)) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 6 1)) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.288 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dstring_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dblob_E_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
        VNULL))),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 7 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.305 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Deq_Q,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.38 10 2) (bruijn ##.k.378 1 0) (bruijn ##.x.379 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
static void _V10_Dmatch__iter_D40_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 7 2))) ((bruijn ##.x.74 25 0) (close _V10_Dmatch__iter_D40_k67) (bruijn ##.pattern-stack.63 7 2)) ((bruijn ##.k.378 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k67, self)})),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D40_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.329 1 0) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.x.331 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var0)));
}
static void _V10_Dmatch__iter_D40_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.328 1 0) ((bruijn ##.k.329 0 0) (bruijn ##.p.328 1 0)) ((bruijn ##.x.85 17 0) (close _V10_Dmatch__iter_D40_k72) (bruijn ##.pattern-stack.63 10 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k72, self)})),
      VGetArg(statics, 10-1, 2));
}
}
static void _V10_Dmatch__iter_D40_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.326 1 0) ((bruijn ##.x.87 16 0) (bruijn ##.k.327 0 0) (##string ##.string.451)) ((bruijn ##.k.327 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D451.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D40_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 13 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.325 1 0) '())) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 13 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.317 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0equal_Q,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        statics->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 13-1, 1)),
        VNULL))),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 13 1) (close _V10_Dmatch__iter_D40_k77) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 12 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 12 2)) (bruijn ##.success-expr.64 12 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k77, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2)),
      VGetArg(statics, 12-1, 3));
}
static void _V10_Dmatch__iter_D40_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 17 0) (close _V10_Dmatch__iter_D40_k76) (bruijn ##.pattern-stack.63 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k76, self)})),
      VGetArg(statics, 11-1, 2));
}
static void _V10_Dmatch__iter_D40_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D40_k74) (close _V10_Dmatch__iter_D40_k75))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D40_k74, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k75, self)})));
}
static void _V10_Dmatch__iter_D40_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D40_k71) (close _V10_Dmatch__iter_D40_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D40_k71, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k73, self)})));
}
static void _V10_Dmatch__iter_D40_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dmatch__iter_D40_k70) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.333 0 0))))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D40_k70, .env = self }, }, 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var0)));
}
static void _V10_Dmatch__iter_D40_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.38 12 2) (bruijn ##.k.372 2 0) (bruijn ##.x.374 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      statics->up->vars[0],
      _var0,
      _V0_D_D_D);
}
static void _V10_Dmatch__iter_D40_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.375 0 0)) ((bruijn ##.x.86 15 0) (close _V10_Dmatch__iter_D40_k80) (bruijn ##.pattern-stack.63 9 2)) ((bruijn ##.k.372 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k80, self)})),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D40_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2))) ((bruijn ##.x.76 24 0) (close _V10_Dmatch__iter_D40_k79) (bruijn ##.pattern-stack.63 8 2)) ((bruijn ##.k.372 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k79, self)})),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmatch__iter_D40_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.65 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 10 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.338 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 10-1, 1)),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-ellipses.39 10 0) (close _V10_Dmatch__iter_D40_k83) (##inline ##vcore.cons (bruijn ##.sym.65 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 9 1))) (bruijn ##.pattern-stack.63 9 2) (bruijn ##.success-expr.64 9 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k83, self)})),
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1))),
      VGetArg(statics, 9-1, 2),
      VGetArg(statics, 9-1, 3));
}
static void _V10_Dmatch__iter_D40_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.255 12 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.66 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 12 1)) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.66 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.352 0 0) '()))) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 12-1, 1)),
        VNULL)),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dpair_Q,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        _var0,
        VNULL))),
        VNULL))));
}
static void _V10_Dmatch__iter_D40_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 12 1) (close _V10_Dmatch__iter_D40_k87) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.66 2 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.66 2 0) '())) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 11 1)))) (##inline ##vcore.cons (bruijn ##.x.355 1 0) (##inline ##vcore.cons (bruijn ##.x.357 0 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 11 2)))) (bruijn ##.success-expr.64 11 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k87, self)})),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)),
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1)))),
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)))),
      VGetArg(statics, 11-1, 3));
}
static void _V10_Dmatch__iter_D40_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.76 26 0) (close _V10_Dmatch__iter_D40_k86) (bruijn ##.pattern-stack.63 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k86, self)})),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dmatch__iter_D40_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 27 0) (close _V10_Dmatch__iter_D40_k85) (bruijn ##.pattern-stack.63 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k85, self)})),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dmatch__iter_D40_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.334 0 0) ((bruijn ##.x.73 27 0) (close _V10_Dmatch__iter_D40_k82) (##string ##.string.449)) (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2))) ((bruijn ##.x.73 27 0) (close _V10_Dmatch__iter_D40_k84) (##string ##.string.449)) ((bruijn ##.x.87 13 0) (bruijn ##.k.255 8 0) (##string ##.string.452) (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k82, self)})),
      VEncodePointer(&_V10_Dstring_D449.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k84, self)})),
      VEncodePointer(&_V10_Dstring_D449.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D452.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
}
}
}
static void _V10_Dmatch__iter_D40_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.312 0 0) ((bruijn ##.x.76 23 0) (close _V10_Dmatch__iter_D40_k69) (bruijn ##.pattern-stack.63 7 2)) ((close _V10_Dmatch__iter_D40_k78) (close _V10_Dmatch__iter_D40_k81)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k69, self)})),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D40_k78, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k81, self)})));
}
}
static void _V10_Dmatch__iter_D40_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.301 0 0) ((bruijn ##.match-iter.40 7 1) (close _V10_Dmatch__iter_D40_k65) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 6 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 6 2)) (bruijn ##.success-expr.64 6 3)) ((close _V10_Dmatch__iter_D40_k66) (close _V10_Dmatch__iter_D40_k68)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k65, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2)),
      VGetArg(statics, 6-1, 3));
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmatch__iter_D40_k66, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k68, self)})));
}
}
static void _V10_Dmatch__iter_D40_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.273 0 0) ((bruijn ##.x.87 9 0) (bruijn ##.k.255 4 0) (##string ##.string.446) (##inline ##vcore.car (bruijn ##.pattern-stack.63 4 2))) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.pattern-stack.63 4 2))) ((bruijn ##.match-iter.40 5 1) (close _V10_Dmatch__iter_D40_k62) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 4 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 4 2)) (bruijn ##.success-expr.64 4 3)) (basic-block 1 1 (##.reg.444) ((##vcore.string? (##inline ##vcore.car (bruijn ##.pattern-stack.63 5 2)))) (if (bruijn ##.reg.444 0 0) ((bruijn ##.match-iter.40 6 1) (close _V10_Dmatch__iter_D40_k63) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 5 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 5 2)) (bruijn ##.success-expr.64 5 3)) ((bruijn ##.x.84 13 0) (close _V10_Dmatch__iter_D40_k64) (##inline ##vcore.car (bruijn ##.pattern-stack.63 5 2)))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D446.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[2])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k62, self)})),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]),
      statics->up->up->up->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k63, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2)),
      VGetArg(statics, 5-1, 3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k64, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
}
    }
}
}
}
static void _V10_Dmatch__iter_D40_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.match-iter.40 2 1) (bruijn ##.k.255 1 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 1 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 1 2)) (bruijn ##.success-expr.64 1 3)) (basic-block 1 1 (##.reg.442) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern-stack.63 2 2)))) (if (bruijn ##.reg.442 0 0) ((bruijn ##.match-iter.40 3 1) (close _V10_Dmatch__iter_D40_k60) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 2 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 2 2)) (bruijn ##.success-expr.64 2 3)) (basic-block 1 1 (##.reg.443) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2)))) (if (bruijn ##.reg.443 0 0) ((bruijn ##.x.87 8 0) (bruijn ##.k.255 3 0) (##string ##.string.445) (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2))) ((bruijn ##.x.83 12 0) (close _V10_Dmatch__iter_D40_k61) (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2))))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 4,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      VInlineCdr2(runtime,
        statics->vars[2]),
      statics->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->vars[2]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k60, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]),
      VInlineCdr2(runtime,
        statics->up->vars[2]),
      statics->up->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D445.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k61, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
}
    }
}
    }
}
}
static void _V10_Dmatch__iter_D40_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmatch__iter_D40_lambda11, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.pattern-stack.63 0 2)) ((bruijn ##.k.255 0 0) (bruijn ##.success-expr.64 0 3)) ((bruijn ##.eqv?.38 2 2) (close _V10_Dmatch__iter_D40_k59) (##inline ##vcore.car (bruijn ##.pattern-stack.63 0 2)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_k59, self)})),
      VInlineCar2(runtime,
        _var2),
      _V0_U);
}
}
static void _V10_Dloop_D69_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.399 3 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.409 0 0))) (##inline ##vcore.cons (bruijn ##.x.388 7 0) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
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
        VGetArg(statics, 7-1, 0),
        VNULL))),
        VNULL));
}
static void _V10_Dloop_D69_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.77 26 0) (bruijn ##.k.425 2 0) (##string ##.string.454))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D454.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D69_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.77 25 0) (close _V10_Dloop_D69_k98) (##string ##.string.455) (bruijn ##.x.427 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k98, self)})),
      VEncodePointer(&_V10_Dstring_D455.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dloop_D69_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.428 1 0)) ((bruijn ##.x.74 27 0) (close _V10_Dloop_D69_k97) (bruijn ##.patterns.70 5 1)) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k97, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D69_k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.399 11 0) (##inline ##vcore.cons (bruijn ##.x.411 1 0) (bruijn ##.x.412 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
static void _V10_Dloop_D69_k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.69 11 0) (close _V10_Dloop_D69_k105) (##inline ##vcore.cdr (bruijn ##.patterns.70 10 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k105, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)));
}
static void _V10_Dloop_D69_k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.match-iter.40 14 1) (close _V10_Dloop_D69_k104) (bruijn ##.x.414 3 0) (bruijn ##.x.415 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.422 0 0))) (##inline ##vcore.cons (bruijn ##.x.388 13 0) '()))) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k104, self)})),
      statics->up->up->vars[0],
      statics->vars[0],
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
        VGetArg(statics, 13-1, 0),
        VNULL))),
        VNULL));
}
static void _V10_Dloop_D69_k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.76 28 0) (close _V10_Dloop_D69_k103) (bruijn ##.patterns.70 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k103, self)})),
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dloop_D69_k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 28 0) (close _V10_Dloop_D69_k102) (bruijn ##.x.423 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k102, self)})),
      _var0);
}
static void _V10_Dloop_D69_k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 28 0) (close _V10_Dloop_D69_k101) (bruijn ##.patterns.70 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 28-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k101, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dloop_D69_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 26 0) (close _V10_Dloop_D69_k100) (bruijn ##.x.389 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k100, self)})),
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dloop_D69_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D69_k96) (close _V10_Dloop_D69_k99))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D69_k96, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k99, self)})));
}
static void _V10_Dloop_D69_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.check-pattern.29 10 1) (close _V10_Dloop_D69_k95) (bruijn ##.x.429 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k95, self)})),
      _var0);
}
static void _V10_Dloop_D69_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.403 0 0) ((bruijn ##.x.76 22 0) (close _V10_Dloop_D69_k93) (bruijn ##.patterns.70 2 1)) ((bruijn ##.x.74 24 0) (close _V10_Dloop_D69_k94) (bruijn ##.patterns.70 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k93, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k94, self)})),
      statics->up->vars[1]);
}
}
static void _V10_Dloop_D69_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eqv?.38 7 2) (close _V10_Dloop_D69_k92) (bruijn ##.x.430 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k92, self)})),
      _var0,
      _V0else);
}
static void _V10_Dloop_D69_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D69_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.patterns.70 0 1)) ((bruijn ##.k.399 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.453) '())) '())) ((bruijn ##.x.74 22 0) (close _V10_Dloop_D69_k91) (bruijn ##.patterns.70 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D453.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_k91, self)})),
      _var1);
}
}
static void _V10_Dtransform__match_D30_k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.139 7 0) (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.388 5 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.389 4 0) (##inline ##vcore.cons (bruijn ##.x.434 3 0) '())) '()) (bruijn ##.x.398 0 0))) '()))) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcall_Wcc,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0let,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        VNULL)),
        VNULL),
        _var0)),
        VNULL))),
        VNULL)));
}
static void _V10_Dtransform__match_D30_k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.69 1 0) (close _V10_Dtransform__match_D30_k107) (bruijn ##.x.431 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k107, self)})),
      _var0);
}
static void _V10_Dtransform__match_D30_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D69_lambda12)) ((bruijn ##.x.78 17 0) (close _V10_Dtransform__match_D30_k106) (bruijn ##.expr.37 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D69_lambda12, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k106, self)})),
      VGetArg(statics, 5-1, 1));
    }
}
static void _V10_Dtransform__match_D30_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.79 14 0) (close _V10_Dtransform__match_D30_k90) (bruijn ##.expr.37 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k90, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dtransform__match_D30_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 19 0) (close _V10_Dtransform__match_D30_k89) (##string ##.string.456))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k89, self)})),
      VEncodePointer(&_V10_Dstring_D456.sym, VPOINTER_OTHER));
}
static void _V10_Dtransform__match_D30_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dtransform__match_D30_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close _V10_Dmatch__ellipses_D39_lambda6) (close _V10_Dmatch__iter_D40_lambda11)) ((bruijn ##.x.73 18 0) (close _V10_Dtransform__match_D30_k88) (##string ##.string.450)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__ellipses_D39_lambda6, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmatch__iter_D40_lambda11, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_k88, self)})),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
    }
}
static void _V0vanity_V0compiler_V0match_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((close _V10_Dgather__variables_D28_lambda2) (close _V10_Dcheck__pattern_D29_lambda3) (close _V10_Dtransform__match_D30_lambda5)) ((bruijn ##.k.72 20 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.30 0 2)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__variables_D28_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcheck__pattern_D29_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dtransform__match_D30_lambda5, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        self->vars[2]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0match_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 15 0) (close _V0vanity_V0compiler_V0match_V20_k19) '<=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k19, self)})),
      _V0_L_E);
}
static void _V0vanity_V0compiler_V0match_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 14 0) (close _V0vanity_V0compiler_V0match_V20_k18) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k18, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0match_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0match_V20_k17) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k17, self)})),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0match_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0match_V20_k16) 'cddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k16, self)})),
      _V0cddar);
}
static void _V0vanity_V0compiler_V0match_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0match_V20_k15) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k15, self)})),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0match_V20_k14) 'typevector?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k14, self)})),
      _V0typevector_Q);
}
static void _V0vanity_V0compiler_V0match_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0match_V20_k13) 'num-pairs)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k13, self)})),
      _V0num__pairs);
}
static void _V0vanity_V0compiler_V0match_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0match_V20_k12) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k12, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0match_V20_k11) '>)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k11, self)})),
      _V0_G);
}
static void _V0vanity_V0compiler_V0match_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0match_V20_k10) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k10, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0match_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0match_V20_k9) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k9, self)})),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0match_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0match_V20_k8) 'compiler-warning)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k8, self)})),
      _V0compiler__warning);
}
static void _V0vanity_V0compiler_V0match_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0match_V20_k7) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k7, self)})),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0match_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0match_V20_k6) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k6, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0match_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0match_V20_k5) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k5, self)})),
      _V0caar);
}
static void _V0vanity_V0compiler_V0match_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0match_V20_k4) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k4, self)})),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0match_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_k3) (##string ##.string.457) (bruijn ##.x.436 1 0) (bruijn ##.x.437 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k2) (##string ##.string.458))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D458.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_k1) (##string ##.string.459))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D459.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_lambda1;
