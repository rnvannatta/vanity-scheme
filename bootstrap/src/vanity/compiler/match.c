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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D460 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D459 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D458 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0typevector_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0typevector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "typevector\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cadar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cadar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cadar" };
VWEAK VWORD _V0cddar;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0cddar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "cddar" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0transform__match;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0transform__match = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "transform-match" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D457 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "input" };
VWEAK VWORD _V0else;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0else = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "else" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D456 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "match expression contains too many ellipses" };
static struct { VBlob sym; char bytes[70]; } _V10_Dstring_D455 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 70 }, "match expressions such as (x ... y ...) or (x ... . y) are ill formed" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D454 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
static struct { VBlob sym; char bytes[30]; } _V10_Dstring_D453 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 30 }, "unknown form in match pattern" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[16]; } _V10_Dstring_D452 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 16 }, "malformed quote" };
VWEAK VWORD _V10vcore_Dblob_E_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dblob_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.blob=\?" };
VWEAK VWORD _V10vcore_Dstring_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dstring_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.string\?" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V10vcore_Dnull_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V10vcore_Dnull_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "##vcore.null\?" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D451 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "kk" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D450 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "expr" };
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
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D449 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "head" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D448 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "tail" };
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
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D447 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "typevectors in matches not supported" };
static struct { VBlob sym; char bytes[39]; } _V10_Dstring_D446 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 39 }, "vectors in matches not implemented yet" };
static __attribute__((constructor)) void VDllMain1() {
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0typevector_Q = VEncodePointer(VLookupConstant("_V0typevector_Q", &_VW_V0typevector_Q), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VLookupConstant("_V0compiler__warning", &_VW_V0compiler__warning), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0cadar = VEncodePointer(VLookupConstant("_V0cadar", &_VW_V0cadar), VPOINTER_OTHER);
  _V0cddar = VEncodePointer(VLookupConstant("_V0cddar", &_VW_V0cddar), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0transform__match, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0check__pattern, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0match_V0gather__variables, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.87 4 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern.31 4 1)) (bruijn ##.x.95 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.32 8 2) (bruijn ##.k.111 1 0) (bruijn ##.x.112 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern.31 7 1))) ((bruijn ##.x.74 21 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k24) (bruijn ##.pattern.31 7 1)) ((bruijn ##.k.111 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k24, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 10 0) (bruijn ##.k.87 9 0) (##inline ##vcore.cons (bruijn ##.x.106 1 0) (##inline ##vcore.cons (bruijn ##.x.108 0 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 9 1)))) (bruijn ##.eqv?.32 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1))));
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 23 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k27) (bruijn ##.pattern.31 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k27, self)))),
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 8 0) (bruijn ##.k.87 7 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 7 1)) (bruijn ##.eqv?.32 7 2)) ((bruijn ##.x.74 21 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k26) (bruijn ##.pattern.31 7 1)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k26, self)))),
      VGetArg(statics, 7-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 7 0) (bruijn ##.k.87 6 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 6 1)) (bruijn ##.eqv?.32 6 2)) ((close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k23) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k25)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k25, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.99 0 0) ((bruijn ##.x.77 16 0) (bruijn ##.k.87 5 0) (##string ##.string.447) (##inline ##vcore.car (bruijn ##.pattern.31 5 1))) ((bruijn ##.x.75 18 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k22) (##inline ##vcore.car (bruijn ##.pattern.31 5 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D447.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k22, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.91 0 0) (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 3 0) (bruijn ##.k.87 2 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 2 1)) (bruijn ##.eqv?.32 2 2)) (basic-block 1 1 (##.reg.436) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern.31 3 1)))) (if (bruijn ##.reg.436 0 0) (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 4 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k20) (##inline ##vcore.cdr (bruijn ##.pattern.31 3 1)) (bruijn ##.eqv?.32 3 2)) (basic-block 1 1 (##.reg.437) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern.31 4 1)))) (if (bruijn ##.reg.437 0 0) ((bruijn ##.x.77 15 0) (bruijn ##.k.87 4 0) (##string ##.string.446) (##inline ##vcore.car (bruijn ##.pattern.31 4 1))) ((bruijn ##.x.76 16 0) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k21) (##inline ##vcore.car (bruijn ##.pattern.31 4 1))))))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      statics->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k20, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D446.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k21, self)))),
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.89 0 0) (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 2 0) (bruijn ##.k.87 1 0) (##inline ##vcore.cdr (bruijn ##.pattern.31 1 1)) (bruijn ##.eqv?.32 1 2)) ((bruijn ##.eqv?.32 1 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k19) (##inline ##vcore.car (bruijn ##.pattern.31 1 1)) '...))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k19, self)))),
      VInlineCar2(runtime,
        statics->vars[1]),
      _V0_D_D_D);
}
}
void _V50_V0vanity_V0compiler_V0match_V0gather__variables(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0gather__variables, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.pattern.31 0 1)) ((bruijn ##.k.87 0 0) '()) ((bruijn ##.eqv?.32 0 2) (close _V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k18) (##inline ##vcore.car (bruijn ##.pattern.31 0 1)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables_V0k18, self)))),
      VInlineCar2(runtime,
        _var1),
      _V0_U);
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.eqv? (bruijn ##.k.133 1 0) (bruijn ##.x.135 0 0) '...)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      statics->vars[0],
      _var0,
      _V0_D_D_D);
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.pattern.35 2 1)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.pattern.35 2 1))) ((bruijn ##.x.79 13 0) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k29) (bruijn ##.pattern.35 2 1)) ((bruijn ##.k.133 0 0) #f)) ((bruijn ##.k.133 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->up->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k29, self)))),
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
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.440) ((##vcore.+ (bruijn ##.infinites.36 5 2) 1)) (##qualified-call (vanity compiler match check-pattern ##.iter.34) (bruijn ##.iter.34 6 0) (bruijn ##.k.121 5 0) (bruijn ##.x.125 1 0) (bruijn ##.reg.440 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 2),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.124 0 0) ((bruijn ##.x.78 15 0) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k32) (bruijn ##.pattern.35 3 1)) ((bruijn ##.k.121 3 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k32, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.129 0 0) (##qualified-call (vanity compiler match check-pattern ##.iter.34) (bruijn ##.iter.34 4 0) (bruijn ##.k.121 3 0) (##inline ##vcore.cdr (bruijn ##.pattern.35 3 1)) (bruijn ##.infinites.36 3 2)) ((bruijn ##.k.121 3 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.123 0 0) (##qualified-call (vanity compiler match check-pattern) (bruijn ##.check-pattern.29 5 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k31) (##inline ##vcore.car (bruijn ##.pattern.35 2 1))) (if (##inline ##vcore.pair? (bruijn ##.pattern.35 2 1)) (##qualified-call (vanity compiler match check-pattern) (bruijn ##.check-pattern.29 5 1) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k33) (##inline ##vcore.car (bruijn ##.pattern.35 2 1))) (basic-block 1 1 (##.reg.441) ((##vcore.<= (bruijn ##.infinites.36 3 2) 1)) ((bruijn ##.k.121 3 0) (bruijn ##.reg.441 0 0)))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k31, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[1]))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k33, self))));
    VWORD _arg1 = 
      VInlineCar2(runtime,
        statics->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->up->vars[2],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.438) ((##vcore.symbol? (bruijn ##.pattern.35 1 1))) (if (bruijn ##.reg.438 0 0) (basic-block 1 1 (##.reg.439) ((##vcore.<= (bruijn ##.infinites.36 2 2) 0)) ((bruijn ##.k.121 2 0) (bruijn ##.reg.439 0 0))) ((close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k28) (close _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k30))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLe(runtime, NULL,
      statics->up->vars[2],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k28, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34_V0k30, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0check__pattern(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0check__pattern, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34")) (##qualified-call (vanity compiler match check-pattern ##.iter.34) (bruijn ##.iter.34 0 0) (bruijn ##.k.120 1 0) (bruijn ##.pattern.33 1 1) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern_V10_Diter_D34(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.138 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cmp (##inline ##vcore.cons (##inline ##vcore.cons 'num-pairs (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 7 1)) '())) (##inline ##vcore.cons (bruijn ##.len.46 4 0) '()))) (##inline ##vcore.cons '-1 '()))) (##inline ##vcore.cons '#f (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons 'split-at-right (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 7 1)) (##inline ##vcore.cons (bruijn ##.len.46 4 0) '()))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.head.47 2 0) (##inline ##vcore.cons (bruijn ##.tail.48 1 0) '())) (##inline ##vcore.cons (bruijn ##.x.152 0 0) '()))) '()))) '())))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 7 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k39) (##inline ##vcore.cons (bruijn ##.head.47 1 0) (##inline ##vcore.cons (bruijn ##.tail.48 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.41 6 1)))) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.251 5 0) (##inline ##vcore.qcons '... '())) (##inline ##vcore.cons (bruijn ##.tail-pattern.45 4 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.42 6 2)))) (bruijn ##.success-expr.43 6 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k39, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1))));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VInlineCons2(runtime,
        _V0_D_D_D,
        VNULL)),
        VInlineCons2(runtime,
        statics->up->up->up->vars[0],
        VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2))));
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 13 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k38) (##string ##.string.448))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k38, self)))),
      VEncodePointer(&_V10_Dstring_D448.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.138 20 0) (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons 'loop (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.41 20 1)) '())) (bruijn ##.x.243 7 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.not (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.expr.56 8 0) '())) '())) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (bruijn ##.x.236 6 0))) '()))) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k2.55 9 0) '()) (##inline ##vcore.cons (bruijn ##.x.212 2 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.k.54 10 0) (##inline ##vcore.cons (bruijn ##.expr.56 8 0) (bruijn ##.x.216 1 0))) '())))) '())) '()))) (##inline ##vcore.cons 'loop '()))) '()))))) '()))) '())) '()))) (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons 'tail-expr (bruijn ##.variables.52 12 0)) (##inline ##vcore.cons (bruijn ##.x.181 0 0) '()))) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 20 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k55) (##inline ##vcore.cons 'tail-expr (##inline ##vcore.cdr (bruijn ##.expr-stack.41 19 1))) (##inline ##vcore.cons (bruijn ##.tail-pattern.50 13 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.42 19 2))) (bruijn ##.success-expr.43 19 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k55, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _V0tail__expr,
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 1)));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        VGetArg(statics, 13-1, 0),
        VInlineCdr2(runtime,
        VGetArg(statics, 19-1, 2)));
    VWORD _arg3 = 
      VGetArg(statics, 19-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.217 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.61 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 22 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k54) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda2) (bruijn ##.syms.53 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda2, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 18 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k53) (bruijn ##.x.219 2 0) (bruijn ##.x.220 1 0) (##inline ##vcore.cons (bruijn ##.k2.55 6 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.expr.56 5 0) '())) (bruijn ##.x.224 0 0))))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 18-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k53, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
      VInlineCons2(runtime,
        VGetArg(statics, 6-1, 0),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dcdr,
        VInlineCons2(runtime,
        VGetArg(statics, 5-1, 0),
        VNULL)),
        _var0));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.225 0 0) (##inline ##vcore.cons '##vcore.cons (##inline ##vcore.cons (bruijn ##.var.59 0 1) (##inline ##vcore.cons (bruijn ##.sym.60 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V10vcore_Dcons,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 20 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k52) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda3) (bruijn ##.variables.52 8 0) (bruijn ##.syms.53 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda3, self)))),
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 25 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k51) (bruijn ##.pattern.49 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k51, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 24 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k50) (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.expr.56 2 0) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k50, self)))),
      VInlineCons2(runtime,
        _V10vcore_Dcar,
        VInlineCons2(runtime,
        statics->up->vars[0],
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.237 0 0) (##inline ##vcore.cons 'reverse (##inline ##vcore.cons (bruijn ##.sym.58 0 1) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0reverse,
        VInlineCons2(runtime,
        _var1,
        VNULL)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 17 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k49) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda4) (bruijn ##.syms.53 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda4, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.244 0 0) (##inline ##vcore.cons (bruijn ##.sym.57 0 1) (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons '() '())) '())))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k48) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda5) (bruijn ##.syms.53 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0lambda5, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 19 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k47) (##string ##.string.450))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k47, self)))),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 18 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k46) (##string ##.string.451))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k46, self)))),
      VEncodePointer(&_V10_Dstring_D451.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 17 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k45) (##string ##.string.451))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k45, self)))),
      VEncodePointer(&_V10_Dstring_D451.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.86 12 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k44) (bruijn ##.x.82 16 0) (bruijn ##.variables.52 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k44, self)))),
      VGetArg(statics, 16-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match gather-variables) (bruijn ##.gather-variables.28 10 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k43) (bruijn ##.x.250 0 0) (bruijn ##.eqv?.38 9 2))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k43, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0gather__variables(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k42) (bruijn ##.pattern.49 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k42, self)))),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.85 10 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k41) (bruijn ##.pattern-stack.42 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k41, self)))),
      VGetArg(statics, 5-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.442) ((##vcore.> (bruijn ##.len.46 1 0) 0)) (if (bruijn ##.reg.442 0 0) ((bruijn ##.x.82 12 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k37) (##string ##.string.449)) ((bruijn ##.x.74 20 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k40) (bruijn ##.pattern-stack.42 4 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k37, self)))),
      VEncodePointer(&_V10_Dstring_D449.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k40, self)))),
      statics->up->up->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.84 8 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k36) (bruijn ##.tail-pattern.45 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k36, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.85 6 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k35) (bruijn ##.pattern-stack.42 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k35, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39, got ~D~N"
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
  // ((bruijn ##.x.74 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k34) (bruijn ##.pattern-stack.42 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39_V0k34, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 3 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 3 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.262 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 5 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.null? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 5 1)) '())) (##inline ##vcore.cons (bruijn ##.x.277 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 6 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'and (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.string? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 6 1)) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.blob=? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 6 1)) '()))) '()))) (##inline ##vcore.cons (bruijn ##.x.286 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 7 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.eq? (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pattern-stack.63 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 7 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.303 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.38 10 2) (bruijn ##.k.376 1 0) (bruijn ##.x.377 0 0) 'quote)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      statics->vars[0],
      _var0,
      _V0quote);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 7 2))) ((bruijn ##.x.74 23 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k64) (bruijn ##.pattern-stack.63 7 2)) ((bruijn ##.k.376 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k64, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.327 1 0) (##inline ##vcore.not (##inline ##vcore.null? (bruijn ##.x.329 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineNot2(runtime,
        VInlineNullP2(runtime,
        _var0)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.326 1 0) ((bruijn ##.k.327 0 0) (bruijn ##.p.326 1 0)) ((bruijn ##.x.85 15 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k69) (bruijn ##.pattern-stack.63 10 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k69, self)))),
      VGetArg(statics, 10-1, 2));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.324 1 0) ((bruijn ##.x.77 24 0) (bruijn ##.k.325 0 0) (##string ##.string.452)) ((bruijn ##.k.325 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D452.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 13 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons 'equal? (##inline ##vcore.cons (##inline ##vcore.cons 'quote (##inline ##vcore.cons (bruijn ##.x.323 1 0) '())) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 13 1)) '()))) (##inline ##vcore.cons (bruijn ##.x.315 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 13 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k74) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 12 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 12 2)) (bruijn ##.success-expr.64 12 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 13-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k74, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.83 18 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k73) (bruijn ##.pattern-stack.63 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k73, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k71) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k72))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k71, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k72, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k68) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k70))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k70, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k67) (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.x.331 0 0))))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k67, self)), 1,
      VInlineNot2(runtime,
        VInlinePairP2(runtime,
        _var0)));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eqv?.38 12 2) (bruijn ##.k.370 2 0) (bruijn ##.x.372 0 0) '...)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 3,
      statics->up->vars[0],
      _var0,
      _V0_D_D_D);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.x.373 0 0)) ((bruijn ##.x.83 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k77) (bruijn ##.pattern-stack.63 9 2)) ((bruijn ##.k.370 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k77, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2))) ((bruijn ##.x.73 25 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k76) (bruijn ##.pattern-stack.63 8 2)) ((bruijn ##.k.370 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k76, self)))),
      VGetArg(statics, 8-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 10 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.65 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 10 1)) '())) '()) (##inline ##vcore.cons (bruijn ##.x.336 0 0) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-ellipses.39) (bruijn ##.match-ellipses.39 10 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k80) (##inline ##vcore.cons (bruijn ##.sym.65 0 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 9 1))) (bruijn ##.pattern-stack.63 9 2) (bruijn ##.success-expr.64 9 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k80, self))));
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)));
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.253 12 0) (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.sym.66 3 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr-stack.62 12 1)) '())) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'if (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.pair? (##inline ##vcore.cons (bruijn ##.sym.66 3 0) '())) (##inline ##vcore.cons (bruijn ##.x.350 0 0) '()))) '()))))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 12 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k84) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.car (##inline ##vcore.cons (bruijn ##.sym.66 2 0) '())) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.cdr (##inline ##vcore.cons (bruijn ##.sym.66 2 0) '())) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 11 1)))) (##inline ##vcore.cons (bruijn ##.x.353 1 0) (##inline ##vcore.cons (bruijn ##.x.355 0 0) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 11 2)))) (bruijn ##.success-expr.64 11 3))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k84, self))));
    VWORD _arg1 = 
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
        VGetArg(statics, 11-1, 1))));
    VWORD _arg2 = 
      VInlineCons2(runtime,
        statics->vars[0],
        VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2))));
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 27 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k83) (bruijn ##.pattern-stack.63 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k83, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 25 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k82) (bruijn ##.pattern-stack.63 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k82, self)))),
      VGetArg(statics, 9-1, 2));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.332 0 0) ((bruijn ##.x.82 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k79) (##string ##.string.450)) (if (##inline ##vcore.pair? (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2))) ((bruijn ##.x.82 16 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k81) (##string ##.string.450)) ((bruijn ##.x.77 21 0) (bruijn ##.k.253 8 0) (##string ##.string.453) (##inline ##vcore.car (bruijn ##.pattern-stack.63 8 2)))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k79, self)))),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k81, self)))),
      VEncodePointer(&_V10_Dstring_D450.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 3,
      VGetArg(statics, 8-1, 0),
      VEncodePointer(&_V10_Dstring_D453.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)));
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.310 0 0) ((bruijn ##.x.73 24 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k66) (bruijn ##.pattern-stack.63 7 2)) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k75) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k78)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k66, self)))),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k75, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k78, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.299 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 7 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k62) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 6 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 6 2)) (bruijn ##.success-expr.64 6 3)) ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k63) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k65)))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k62, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k63, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k65, self)))));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.271 0 0) ((bruijn ##.x.77 17 0) (bruijn ##.k.253 4 0) (##string ##.string.447) (##inline ##vcore.car (bruijn ##.pattern-stack.63 4 2))) (if (##inline ##vcore.null? (##inline ##vcore.car (bruijn ##.pattern-stack.63 4 2))) (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 5 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k59) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 4 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 4 2)) (bruijn ##.success-expr.64 4 3)) (basic-block 1 1 (##.reg.445) ((##vcore.string? (##inline ##vcore.car (bruijn ##.pattern-stack.63 5 2)))) (if (bruijn ##.reg.445 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 6 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k60) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 5 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 5 2)) (bruijn ##.success-expr.64 5 3)) ((bruijn ##.x.75 20 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k61) (##inline ##vcore.car (bruijn ##.pattern-stack.63 5 2)))))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D447.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]));
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCar2(runtime,
        statics->up->up->up->vars[2])))) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k59, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    VWORD _arg3 = 
      statics->up->up->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k60, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 2));
    VWORD _arg3 = 
      VGetArg(statics, 5-1, 3);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k61, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)));
}
    }
}
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 2 1) (bruijn ##.k.253 1 0) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 1 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 1 2)) (bruijn ##.success-expr.64 1 3)) (basic-block 1 1 (##.reg.443) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.pattern-stack.63 2 2)))) (if (bruijn ##.reg.443 0 0) (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 3 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k57) (##inline ##vcore.cdr (bruijn ##.expr-stack.62 2 1)) (##inline ##vcore.cdr (bruijn ##.pattern-stack.63 2 2)) (bruijn ##.success-expr.64 2 3)) (basic-block 1 1 (##.reg.444) ((##vcore.vector? (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2)))) (if (bruijn ##.reg.444 0 0) ((bruijn ##.x.77 16 0) (bruijn ##.k.253 3 0) (##string ##.string.446) (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2))) ((bruijn ##.x.76 17 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k58) (##inline ##vcore.car (bruijn ##.pattern-stack.63 3 2))))))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    VWORD _arg3 = 
      statics->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[1]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k57, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->up->vars[2]);
    VWORD _arg3 = 
      statics->up->vars[3];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D446.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k58, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[2]));
}
    }
}
    }
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.pattern-stack.63 0 2)) ((bruijn ##.k.253 0 0) (bruijn ##.success-expr.64 0 3)) ((bruijn ##.eqv?.38 2 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k56) (##inline ##vcore.car (bruijn ##.pattern-stack.63 0 2)) '_))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40_V0k56, self)))),
      VInlineCar2(runtime,
        _var2),
      _V0_U);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.397 3 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.407 0 0))) (##inline ##vcore.cons (bruijn ##.x.386 7 0) '()))) '()))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.81 20 0) (bruijn ##.k.423 2 0) (##string ##.string.455))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D455.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 19 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k95) (##string ##.string.456) (bruijn ##.x.425 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k95, self)))),
      VEncodePointer(&_V10_Dstring_D456.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.426 1 0)) ((bruijn ##.x.74 25 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k94) (bruijn ##.patterns.70 5 1)) ((bruijn ##.k.423 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k94, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.397 11 0) (##inline ##vcore.cons (bruijn ##.x.409 1 0) (bruijn ##.x.410 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VInlineCons2(runtime,
        statics->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.69) (bruijn ##.loop.69 11 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k102) (##inline ##vcore.cdr (bruijn ##.patterns.70 10 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k102, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.match-iter.40) (bruijn ##.match-iter.40 14 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k101) (bruijn ##.x.412 3 0) (bruijn ##.x.413 1 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.call-with-values (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons '() (bruijn ##.x.420 0 0))) (##inline ##vcore.cons (bruijn ##.x.386 13 0) '()))) '()))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k101, self))));
    VWORD _arg1 = 
      statics->up->up->vars[0];
    VWORD _arg2 = 
      statics->vars[0];
    VWORD _arg3 = 
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
        VNULL);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40(runtime, _closure->env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 29 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k100) (bruijn ##.patterns.70 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k100, self)))),
      VGetArg(statics, 8-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 21 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k99) (bruijn ##.x.421 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k99, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 26 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k98) (bruijn ##.patterns.70 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k98, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.80 19 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k97) (bruijn ##.x.387 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k97, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k93) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k96))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k96, self)))));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match check-pattern) (bruijn ##.check-pattern.29 10 1) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k92) (bruijn ##.x.427 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 1));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k92, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0check__pattern(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.401 0 0) ((bruijn ##.x.73 23 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k90) (bruijn ##.patterns.70 2 1)) ((bruijn ##.x.74 22 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k91) (bruijn ##.patterns.70 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k90, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k91, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eqv?.38 7 2) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k89) (bruijn ##.x.428 0 0) 'else)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k89, self)))),
      _var0,
      _V0else);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.patterns.70 0 1)) ((bruijn ##.k.397 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'error (##inline ##vcore.cons '(##string ##.string.454) '())) '())) ((bruijn ##.x.74 20 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k88) (bruijn ##.patterns.70 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0error,
        VInlineCons2(runtime,
        VEncodePointer(&_V10_Dstring_D454.sym, VPOINTER_OTHER),
        VNULL)),
        VNULL));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69_V0k88, self)))),
      _var1);
}
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.137 7 0) (##inline ##vcore.cons '##vcore.call/cc (##inline ##vcore.cons (##inline ##vcore.cons 'lambda (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.386 5 0) '()) (##inline ##vcore.cons (##inline ##vcore.cons 'let (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.387 4 0) (##inline ##vcore.cons (bruijn ##.x.432 3 0) '())) '()) (bruijn ##.x.396 0 0))) '()))) '())))
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
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler match transform-match ##.loop.69) (bruijn ##.loop.69 1 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k104) (bruijn ##.x.429 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k104, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69")) ((bruijn ##.x.78 15 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k103) (bruijn ##.expr.37 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dloop_D69, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k103, self)))),
      VGetArg(statics, 5-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.79 12 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k87) (bruijn ##.expr.37 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k87, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.82 8 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k86) (##string ##.string.457))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k86, self)))),
      VEncodePointer(&_V10_Dstring_D457.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0match_V0transform__match(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0match_V0transform__match, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 2 ((close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39") (close "_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40")) ((bruijn ##.x.82 7 0) (close _V50_V0vanity_V0compiler_V0match_V0transform__match_V0k85) (##string ##.string.451)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__ellipses_D39, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V10_Dmatch__iter_D40, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match_V0k85, self)))),
      VEncodePointer(&_V10_Dstring_D451.sym, VPOINTER_OTHER));
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0match_V0gather__variables") (close "_V50_V0vanity_V0compiler_V0match_V0check__pattern") (close "_V50_V0vanity_V0compiler_V0match_V0transform__match")) ((bruijn ##.k.72 18 0) (##inline ##vcore.cons (##inline ##vcore.cons 'transform-match (bruijn ##.transform-match.30 0 2)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0gather__variables, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0check__pattern, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0match_V0transform__match, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0transform__match,
        self->vars[2]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0match_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 13 0) (close _V0vanity_V0compiler_V0match_V20_V0k17) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k17, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0match_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 12 0) (close _V0vanity_V0compiler_V0match_V20_V0k16) 'cddar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k16, self)))),
      _V0cddar);
}
static void _V0vanity_V0compiler_V0match_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 11 0) (close _V0vanity_V0compiler_V0match_V20_V0k15) 'num-pairs)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k15, self)))),
      _V0num__pairs);
}
static void _V0vanity_V0compiler_V0match_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0match_V20_V0k14) 'cadar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k14, self)))),
      _V0cadar);
}
static void _V0vanity_V0compiler_V0match_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0match_V20_V0k13) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k13, self)))),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0match_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0match_V20_V0k12) 'compiler-warning)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k12, self)))),
      _V0compiler__warning);
}
static void _V0vanity_V0compiler_V0match_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0match_V20_V0k11) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k11, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0match_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0match_V20_V0k10) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k10, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0match_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0match_V20_V0k9) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k9, self)))),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0match_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0match_V20_V0k8) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k8, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0match_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0match_V20_V0k7) 'typevector?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k7, self)))),
      _V0typevector_Q);
}
static void _V0vanity_V0compiler_V0match_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0match_V20_V0k6) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k6, self)))),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0match_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0match_V20_V0k5) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k5, self)))),
      _V0caar);
}
static void _V0vanity_V0compiler_V0match_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0match_V20_V0k4) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k4, self)))),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0match_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0match_V20_V0k3) (##string ##.string.458) (bruijn ##.x.434 1 0) (bruijn ##.x.435 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D458.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0match_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k2) (##string ##.string.459))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D459.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0match_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0match_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0match_V20_V0k1) (##string ##.string.460))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0match_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D460.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0match_V20 = (VFunc)_V0vanity_V0compiler_V0match_V20_V0lambda1;
