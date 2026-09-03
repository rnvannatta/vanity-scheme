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
VBlob * VInternSymbol(int hash, VBlob * sym);

V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D524 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D523 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D522 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0s8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0s8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "s8vector->list" };
VWEAK VWORD _V0u8vector___Glist;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0u8vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "u8vector->list" };
VWEAK VWORD _V0s16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s16vector->list" };
VWEAK VWORD _V0u16vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0u16vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "u16vector->list" };
VWEAK VWORD _V0s32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0s32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "s32vector->list" };
VWEAK VWORD _V0f32vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f32vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f32vector->list" };
VWEAK VWORD _V0f64vector___Glist;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0f64vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "f64vector->list" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D521 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
static VPair _V10_Dpair_D520 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D519 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D518 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0global__form__env;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0global__form__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "global-form-env" };
VWEAK VWORD _V0global__forms;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__forms = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-forms" };
VWEAK VWORD _V0global__identifier;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0global__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "global-identifier" };
VWEAK VWORD _V0let;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0let = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "let" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quasiquote;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0quasiquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "quasiquote" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
VWEAK VWORD _V10vcore_Dappend;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dappend = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.append" };
VWEAK VWORD _V0unquote__splicing;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0unquote__splicing = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "unquote-splicing" };
VWEAK VWORD _V10vcore_Dlist___Gs8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gs8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->s8vector" };
VWEAK VWORD _V10vcore_Dlist___Gu8vector;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V10vcore_Dlist___Gu8vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "##vcore.list->u8vector" };
VWEAK VWORD _V10vcore_Dlist___Gs16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s16vector" };
VWEAK VWORD _V10vcore_Dlist___Gu16vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gu16vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->u16vector" };
VWEAK VWORD _V10vcore_Dlist___Gs32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gs32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->s32vector" };
VWEAK VWORD _V10vcore_Dlist___Gf32vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf32vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f32vector" };
VWEAK VWORD _V10vcore_Dlist___Gf64vector;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V10vcore_Dlist___Gf64vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "##vcore.list->f64vector" };
VWEAK VWORD _V10vcore_Dlist___Gvector;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V10vcore_Dlist___Gvector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "##vcore.list->vector" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
VWEAK VWORD _V10vcore_Dcons;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V10vcore_Dcons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "##vcore.cons" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V0quasisyntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0quasisyntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "quasisyntax" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _var0, _var1);
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 2 3) (bruijn ##.%k.62 1 0) 1 (bruijn ##.%x.63 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.3 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5) (bruijn ##.form.47 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax_V0k5, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.14 7 11) (bruijn ##.%k.182 1 0) (bruijn ##.%x.183 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.181 1 0) ((bruijn ##.syntax-car.17 6 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10) (bruijn ##.expr.49 4 2)) ((bruijn ##.%k.182 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k10, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.357 ##.%x.358 ##.%x.359 ##.%x.360 ##.%x.361 ##.%x.362 ##.%x.363 ##.%r.364) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.77 1 0) (bruijn ##.%x.357 0 0)) (##vcore.cons (bruijn ##.%x.358 0 1) '()) (##vcore.cons (bruijn ##.%x.74 2 0) (bruijn ##.%x.359 0 2)) (##vcore.cons (bruijn ##.%x.72 5 0) (bruijn ##.%x.360 0 3)) (##vcore.cons (bruijn ##.%x.361 0 4) '()) (##vcore.cons (bruijn ##.%x.355 6 1) (bruijn ##.%x.362 0 5)) (##vcore.cons (bruijn ##.%x.67 9 0) (bruijn ##.%x.363 0 6))) ((bruijn ##.%k.64 15 0) (bruijn ##.%r.364 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k18, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17) (bruijn ##.%x.356 1 0) (bruijn ##.%x.80 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k17, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.356) ((##vcore.+ (bruijn ##.quotation.48 11 1) 1)) ((bruijn ##.syntax-cadr.3 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16) (bruijn ##.expr.49 11 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k16, self)))),
      VGetArg(statics, 11-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.354 ##.%x.355) ((##vcore.cons (bruijn ##.%x.83 1 0) '()) (##vcore.cons (bruijn ##.%x.81 2 0) (bruijn ##.%x.354 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k15, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14) 'quasisyntax)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k14, self))));
    VWORD _arg1 = 
      _V0quasisyntax;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k13, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.368 ##.%r.369) ((##vcore.cons (bruijn ##.%x.89 1 0) '()) (##vcore.cons (bruijn ##.%x.87 2 0) (bruijn ##.%x.368 0 0))) ((bruijn ##.%k.64 12 0) (bruijn ##.%r.369 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21) (bruijn ##.x.51 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k21, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.371 ##.%r.372) ((##vcore.cons (bruijn ##.%x.93 1 0) '()) (##vcore.cons (bruijn ##.%x.91 2 0) (bruijn ##.%x.371 0 0))) ((bruijn ##.%k.64 13 0) (bruijn ##.%r.372 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.6 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23) (bruijn ##.x.51 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k23, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.374 ##.%r.375) ((##vcore.cons (bruijn ##.%x.97 1 0) '()) (##vcore.cons (bruijn ##.%x.95 2 0) (bruijn ##.%x.374 0 0))) ((bruijn ##.%k.64 14 0) (bruijn ##.%r.375 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.7 14 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25) (bruijn ##.x.51 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k25, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.377 ##.%r.378) ((##vcore.cons (bruijn ##.%x.101 1 0) '()) (##vcore.cons (bruijn ##.%x.99 2 0) (bruijn ##.%x.377 0 0))) ((bruijn ##.%k.64 15 0) (bruijn ##.%r.378 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.8 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27) (bruijn ##.x.51 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k27, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.380 ##.%r.381) ((##vcore.cons (bruijn ##.%x.105 1 0) '()) (##vcore.cons (bruijn ##.%x.103 2 0) (bruijn ##.%x.380 0 0))) ((bruijn ##.%k.64 16 0) (bruijn ##.%r.381 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.9 16 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29) (bruijn ##.x.51 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k29, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.383 ##.%r.384) ((##vcore.cons (bruijn ##.%x.109 1 0) '()) (##vcore.cons (bruijn ##.%x.107 2 0) (bruijn ##.%x.383 0 0))) ((bruijn ##.%k.64 17 0) (bruijn ##.%r.384 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.10 17 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31) (bruijn ##.x.51 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k31, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.386 ##.%r.387) ((##vcore.cons (bruijn ##.%x.113 1 0) '()) (##vcore.cons (bruijn ##.%x.111 2 0) (bruijn ##.%x.386 0 0))) ((bruijn ##.%k.64 18 0) (bruijn ##.%r.387 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.11 18 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33) (bruijn ##.x.51 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k33, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.389 ##.%r.390) ((##vcore.cons (bruijn ##.%x.117 1 0) '()) (##vcore.cons (bruijn ##.%x.115 2 0) (bruijn ##.%x.389 0 0))) ((bruijn ##.%k.64 19 0) (bruijn ##.%r.390 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.12 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35) (bruijn ##.x.51 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k35, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.394 ##.%x.395 ##.%x.396 ##.%x.397 ##.%x.398 ##.%x.399 ##.%x.400 ##.%r.401) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.128 1 0) (bruijn ##.%x.394 0 0)) (##vcore.cons (bruijn ##.%x.395 0 1) '()) (##vcore.cons (bruijn ##.%x.125 2 0) (bruijn ##.%x.396 0 2)) (##vcore.cons (bruijn ##.%x.123 4 0) (bruijn ##.%x.397 0 3)) (##vcore.cons (bruijn ##.%x.398 0 4) '()) (##vcore.cons (bruijn ##.%x.392 5 1) (bruijn ##.%x.399 0 5)) (##vcore.cons (bruijn ##.%x.118 8 0) (bruijn ##.%x.400 0 6))) ((bruijn ##.%k.64 17 0) (bruijn ##.%r.401 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k41, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.393) ((##vcore.- (bruijn ##.quotation.48 14 1) 1)) (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40) (bruijn ##.%x.393 0 0) (bruijn ##.x.51 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k40, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.391 ##.%x.392) ((##vcore.cons (bruijn ##.%x.133 1 0) '()) (##vcore.cons (bruijn ##.%x.131 2 0) (bruijn ##.%x.391 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k39, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38) 'unquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k38, self))));
    VWORD _arg1 = 
      _V0unquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k37, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.366) ((##vcore.= (bruijn ##.quotation.48 8 1) 1)) (if (bruijn ##.%p.366 0 0) (basic-block 1 1 (##.%p.367) ((##vcore.vector? (bruijn ##.x.51 2 0))) (if (bruijn ##.%p.367 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20) '##vcore.list->vector) (basic-block 1 1 (##.%p.370) ((##vcore.f64vector? (bruijn ##.x.51 3 0))) (if (bruijn ##.%p.370 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22) '##vcore.list->f64vector) (basic-block 1 1 (##.%p.373) ((##vcore.f32vector? (bruijn ##.x.51 4 0))) (if (bruijn ##.%p.373 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24) '##vcore.list->f32vector) (basic-block 1 1 (##.%p.376) ((##vcore.s32vector? (bruijn ##.x.51 5 0))) (if (bruijn ##.%p.376 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26) '##vcore.list->s32vector) (basic-block 1 1 (##.%p.379) ((##vcore.u16vector? (bruijn ##.x.51 6 0))) (if (bruijn ##.%p.379 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28) '##vcore.list->u16vector) (basic-block 1 1 (##.%p.382) ((##vcore.s16vector? (bruijn ##.x.51 7 0))) (if (bruijn ##.%p.382 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30) '##vcore.list->s16vector) (basic-block 1 1 (##.%p.385) ((##vcore.u8vector? (bruijn ##.x.51 8 0))) (if (bruijn ##.%p.385 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32) '##vcore.list->u8vector) (basic-block 1 1 (##.%p.388) ((##vcore.s8vector? (bruijn ##.x.51 9 0))) (if (bruijn ##.%p.388 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34) '##vcore.list->s8vector) ((bruijn ##.%k.64 16 0) (bruijn ##.x.51 9 0)))))))))))))))))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k20, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k22, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf64vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k24, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k26, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k28, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k30, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k32, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k34, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k36, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.423) ((##vcore.eq? (bruijn ##.%x.177 1 0) 'unquote-splicing)) ((bruijn ##.%k.175 5 0) (bruijn ##.%r.423 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.14 14 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48) (bruijn ##.%x.178 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k48, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.176 0 0) ((bruijn ##.syntax-caar.15 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47) (bruijn ##.expr.49 11 2)) ((bruijn ##.%k.175 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k47, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 12 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46) (bruijn ##.%x.179 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k46, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.174 1 0) ((bruijn ##.syntax-caar.15 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45) (bruijn ##.expr.49 9 2)) ((bruijn ##.%k.175 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k45, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.403 ##.%x.404 ##.%r.405) ((##vcore.cons (bruijn ##.%x.140 1 0) '()) (##vcore.cons (bruijn ##.%x.138 3 0) (bruijn ##.%x.403 0 0)) (##vcore.cons (bruijn ##.%x.136 5 0) (bruijn ##.%x.404 0 1))) ((bruijn ##.%k.64 16 0) (bruijn ##.%r.405 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54) (bruijn ##.quotation.48 14 1) (bruijn ##.%x.141 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k54, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 15 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53) (bruijn ##.expr.49 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k53, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 14 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52) (bruijn ##.%x.142 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k52, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 13 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51) (bruijn ##.expr.49 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k51, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.414 ##.%x.415 ##.%x.416 ##.%x.417 ##.%x.418 ##.%r.419) ((##vcore.cons (bruijn ##.%x.152 1 0) '()) (##vcore.cons (bruijn ##.%x.413 3 4) (bruijn ##.%x.414 0 0)) (##vcore.cons (bruijn ##.%x.407 10 1) (bruijn ##.%x.415 0 1)) (##vcore.cons (bruijn ##.%x.146 13 0) (bruijn ##.%x.416 0 2)) (##vcore.cons (bruijn ##.%x.417 0 3) '()) (##vcore.cons (bruijn ##.%x.143 14 0) (bruijn ##.%x.418 0 4))) ((bruijn ##.%k.64 25 0) (bruijn ##.%r.419 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 24 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65) (bruijn ##.quotation.48 23 1) (bruijn ##.%x.153 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k65, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.409 ##.%x.410 ##.%x.411 ##.%x.412 ##.%x.413) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.159 1 0) (bruijn ##.%x.409 0 0)) (##vcore.cons (bruijn ##.%x.410 0 1) '()) (##vcore.cons (bruijn ##.%x.156 2 0) (bruijn ##.%x.411 0 2)) (##vcore.cons (bruijn ##.%x.154 6 0) (bruijn ##.%x.412 0 3))) ((bruijn ##.syntax-cdr.18 24 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64) (bruijn ##.expr.49 22 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k64, self)))),
      VGetArg(statics, 22-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 21 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k63, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 20 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62) (bruijn ##.%x.408 2 0) (bruijn ##.%x.162 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k62, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 20 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61) (bruijn ##.%x.163 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k61, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.408) ((##vcore.- (bruijn ##.quotation.48 17 1) 1)) ((bruijn ##.syntax-car.17 19 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60) (bruijn ##.expr.49 17 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k60, self)))),
      VGetArg(statics, 17-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.406 ##.%x.407) ((##vcore.cons (bruijn ##.%x.166 1 0) '()) (##vcore.cons (bruijn ##.%x.164 2 0) (bruijn ##.%x.406 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k59, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58) 'unquote-splicing)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k58, self))));
    VWORD _arg1 = 
      _V0unquote__splicing;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k57, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56) '##vcore.cons)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k56, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.420 ##.%x.421 ##.%r.422) ((##vcore.cons (bruijn ##.%x.171 1 0) '()) (##vcore.cons (bruijn ##.%x.169 3 0) (bruijn ##.%x.420 0 0)) (##vcore.cons (bruijn ##.%x.167 5 0) (bruijn ##.%x.421 0 1))) ((bruijn ##.%k.64 15 0) (bruijn ##.%r.422 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 14 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70) (bruijn ##.quotation.48 13 1) (bruijn ##.%x.172 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k70, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 14 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69) (bruijn ##.expr.49 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k69, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 12 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68) (bruijn ##.quotation.48 11 1) (bruijn ##.%x.173 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k68, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 12 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67) (bruijn ##.expr.49 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k67, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.134 0 0) (basic-block 1 1 (##.%p.402) ((##vcore.= (bruijn ##.quotation.48 10 1) 1)) (if (bruijn ##.%p.402 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50) '##vcore.append) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55) '##vcore.cons))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k50, self))));
    VWORD _arg1 = 
      _V10vcore_Dappend;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k55, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k66, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k44, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k49, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.16 9 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43) (bruijn ##.%x.180 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k43, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.353) ((##vcore.eq? (bruijn ##.x.2.50 1 0) 'quasisyntax)) (if (bruijn ##.%p.353 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12) '##vcore.cons) (basic-block 1 1 (##.%p.365) ((##vcore.eq? (bruijn ##.x.2.50 2 0) 'unquote)) (if (bruijn ##.%p.365 0 0) ((bruijn ##.syntax-cadr.3 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19) (bruijn ##.expr.49 6 2)) ((bruijn ##.syntax-car.17 8 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42) (bruijn ##.expr.49 6 2))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0quasisyntax);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k12, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0unquote);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k19, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k42, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k11, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 4 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8) (bruijn ##.%x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k8, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.424 ##.%r.425) ((##vcore.cons (bruijn ##.%x.188 1 0) '()) (##vcore.cons (bruijn ##.%x.186 4 0) (bruijn ##.%x.424 0 0))) ((bruijn ##.%k.64 7 0) (bruijn ##.%r.425 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasisyntax-impl) #t (bruijn ##.expand-quasisyntax-impl.41 6 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75) (bruijn ##.quotation.48 5 1) (bruijn ##.%x.189 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k75, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74) (bruijn ##.%x.190 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k74, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms syntax-unpack) #t (bruijn ##.syntax-unpack.45 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73) (bruijn ##.expr.49 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k73, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.426 ##.%r.427) ((##vcore.cons (bruijn ##.expr.49 4 2) '()) (##vcore.cons (bruijn ##.%x.191 1 0) (bruijn ##.%x.426 0 0))) ((bruijn ##.%k.64 4 0) (bruijn ##.%r.427 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.185 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72) '##vcore.list->vector) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76) 'syntax))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k72, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k76, self))));
    VWORD _arg1 = 
      _V0syntax;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.65 0 0) ((bruijn ##.syntax-car.17 3 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7) (bruijn ##.expr.49 1 2)) ((bruijn ##.syntax-vector?.4 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71) (bruijn ##.expr.49 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k7, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k71, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.16 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6) (bruijn ##.expr.49 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl_V0k6, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 2 5) (bruijn ##.%k.193 1 0) 1 (bruijn ##.%x.194 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax-cadr.3 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77) (bruijn ##.form.52 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote_V0k77, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.get-syntax-data.14 7 11) (bruijn ##.%k.313 1 0) (bruijn ##.%x.314 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.312 1 0) ((bruijn ##.syntax-car.17 6 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82) (bruijn ##.expr.54 4 2)) ((bruijn ##.%k.313 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k82, self)))),
      statics->up->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%r.439) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.208 1 0) (bruijn ##.%x.432 0 0)) (##vcore.cons (bruijn ##.%x.433 0 1) '()) (##vcore.cons (bruijn ##.%x.205 2 0) (bruijn ##.%x.434 0 2)) (##vcore.cons (bruijn ##.%x.203 5 0) (bruijn ##.%x.435 0 3)) (##vcore.cons (bruijn ##.%x.436 0 4) '()) (##vcore.cons (bruijn ##.%x.430 6 1) (bruijn ##.%x.437 0 5)) (##vcore.cons (bruijn ##.%x.198 9 0) (bruijn ##.%x.438 0 6))) ((bruijn ##.%k.195 15 0) (bruijn ##.%r.439 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 9-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k90, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 13 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89) (bruijn ##.%x.431 1 0) (bruijn ##.%x.211 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k89, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.431) ((##vcore.+ (bruijn ##.quotation.53 11 1) 1)) ((bruijn ##.syntax-cadr.3 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88) (bruijn ##.expr.54 11 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k88, self)))),
      VGetArg(statics, 11-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.429 ##.%x.430) ((##vcore.cons (bruijn ##.%x.214 1 0) '()) (##vcore.cons (bruijn ##.%x.212 2 0) (bruijn ##.%x.429 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k87, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 8 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86) 'quasiquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k86, self))));
    VWORD _arg1 = 
      _V0quasiquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 7 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k85, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.443 ##.%r.444) ((##vcore.cons (bruijn ##.%x.220 1 0) '()) (##vcore.cons (bruijn ##.%x.218 2 0) (bruijn ##.%x.443 0 0))) ((bruijn ##.%k.195 12 0) (bruijn ##.%r.444 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93) (bruijn ##.x.56 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k93, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.446 ##.%r.447) ((##vcore.cons (bruijn ##.%x.224 1 0) '()) (##vcore.cons (bruijn ##.%x.222 2 0) (bruijn ##.%x.446 0 0))) ((bruijn ##.%k.195 13 0) (bruijn ##.%r.447 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f64vector->list.6 13 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95) (bruijn ##.x.56 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k95, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.449 ##.%r.450) ((##vcore.cons (bruijn ##.%x.228 1 0) '()) (##vcore.cons (bruijn ##.%x.226 2 0) (bruijn ##.%x.449 0 0))) ((bruijn ##.%k.195 14 0) (bruijn ##.%r.450 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f32vector->list.7 14 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97) (bruijn ##.x.56 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k97, self)))),
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.452 ##.%r.453) ((##vcore.cons (bruijn ##.%x.232 1 0) '()) (##vcore.cons (bruijn ##.%x.230 2 0) (bruijn ##.%x.452 0 0))) ((bruijn ##.%k.195 15 0) (bruijn ##.%r.453 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s32vector->list.8 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99) (bruijn ##.x.56 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k99, self)))),
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.455 ##.%r.456) ((##vcore.cons (bruijn ##.%x.236 1 0) '()) (##vcore.cons (bruijn ##.%x.234 2 0) (bruijn ##.%x.455 0 0))) ((bruijn ##.%k.195 16 0) (bruijn ##.%r.456 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u16vector->list.9 16 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101) (bruijn ##.x.56 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k101, self)))),
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.458 ##.%r.459) ((##vcore.cons (bruijn ##.%x.240 1 0) '()) (##vcore.cons (bruijn ##.%x.238 2 0) (bruijn ##.%x.458 0 0))) ((bruijn ##.%k.195 17 0) (bruijn ##.%r.459 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s16vector->list.10 17 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103) (bruijn ##.x.56 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k103, self)))),
      VGetArg(statics, 8-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.461 ##.%r.462) ((##vcore.cons (bruijn ##.%x.244 1 0) '()) (##vcore.cons (bruijn ##.%x.242 2 0) (bruijn ##.%x.461 0 0))) ((bruijn ##.%k.195 18 0) (bruijn ##.%r.462 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.u8vector->list.11 18 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105) (bruijn ##.x.56 9 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k105, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.464 ##.%r.465) ((##vcore.cons (bruijn ##.%x.248 1 0) '()) (##vcore.cons (bruijn ##.%x.246 2 0) (bruijn ##.%x.464 0 0))) ((bruijn ##.%k.195 19 0) (bruijn ##.%r.465 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.s8vector->list.12 19 9) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107) (bruijn ##.x.56 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k107, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 8 8 (##.%x.469 ##.%x.470 ##.%x.471 ##.%x.472 ##.%x.473 ##.%x.474 ##.%x.475 ##.%r.476) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.259 1 0) (bruijn ##.%x.469 0 0)) (##vcore.cons (bruijn ##.%x.470 0 1) '()) (##vcore.cons (bruijn ##.%x.256 2 0) (bruijn ##.%x.471 0 2)) (##vcore.cons (bruijn ##.%x.254 4 0) (bruijn ##.%x.472 0 3)) (##vcore.cons (bruijn ##.%x.473 0 4) '()) (##vcore.cons (bruijn ##.%x.467 5 1) (bruijn ##.%x.474 0 5)) (##vcore.cons (bruijn ##.%x.249 8 0) (bruijn ##.%x.475 0 6))) ((bruijn ##.%k.195 17 0) (bruijn ##.%r.476 0 7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[8]; } container;
    self = &container.self;
    VInitEnv(self, 8, 8, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      VNULL);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      self->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      self->vars[6]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      self->vars[7]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k113, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.468) ((##vcore.- (bruijn ##.quotation.53 14 1) 1)) (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112) (bruijn ##.%x.468 0 0) (bruijn ##.x.56 7 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 14-1, 1),
      VEncodeInt(1l));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k112, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.466 ##.%x.467) ((##vcore.cons (bruijn ##.%x.264 1 0) '()) (##vcore.cons (bruijn ##.%x.262 2 0) (bruijn ##.%x.466 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k111, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110) 'unquote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k110, self))));
    VWORD _arg1 = 
      _V0unquote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k109, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.441) ((##vcore.= (bruijn ##.quotation.53 8 1) 1)) (if (bruijn ##.%p.441 0 0) (basic-block 1 1 (##.%p.442) ((##vcore.vector? (bruijn ##.x.56 2 0))) (if (bruijn ##.%p.442 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92) '##vcore.list->vector) (basic-block 1 1 (##.%p.445) ((##vcore.f64vector? (bruijn ##.x.56 3 0))) (if (bruijn ##.%p.445 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94) '##vcore.list->f64vector) (basic-block 1 1 (##.%p.448) ((##vcore.f32vector? (bruijn ##.x.56 4 0))) (if (bruijn ##.%p.448 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96) '##vcore.list->f32vector) (basic-block 1 1 (##.%p.451) ((##vcore.s32vector? (bruijn ##.x.56 5 0))) (if (bruijn ##.%p.451 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98) '##vcore.list->s32vector) (basic-block 1 1 (##.%p.454) ((##vcore.u16vector? (bruijn ##.x.56 6 0))) (if (bruijn ##.%p.454 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100) '##vcore.list->u16vector) (basic-block 1 1 (##.%p.457) ((##vcore.s16vector? (bruijn ##.x.56 7 0))) (if (bruijn ##.%p.457 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 15 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102) '##vcore.list->s16vector) (basic-block 1 1 (##.%p.460) ((##vcore.u8vector? (bruijn ##.x.56 8 0))) (if (bruijn ##.%p.460 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104) '##vcore.list->u8vector) (basic-block 1 1 (##.%p.463) ((##vcore.s8vector? (bruijn ##.x.56 9 0))) (if (bruijn ##.%p.463 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 17 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106) '##vcore.list->s8vector) ((bruijn ##.%k.195 16 0) (bruijn ##.x.56 9 0)))))))))))))))))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 9 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108) '##vcore.cons)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k92, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF64VectorP(runtime, NULL,
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k94, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf64vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VF32VectorP(runtime, NULL,
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k96, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gf32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS32VectorP(runtime, NULL,
      VGetArg(statics, 5-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k98, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs32vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU16VectorP(runtime, NULL,
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k100, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS16VectorP(runtime, NULL,
      VGetArg(statics, 7-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k102, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs16vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VU8VectorP(runtime, NULL,
      VGetArg(statics, 8-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k104, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gu8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VS8VectorP(runtime, NULL,
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k106, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gs8vector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VGetArg(statics, 9-1, 0));
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k108, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.498) ((##vcore.eq? (bruijn ##.%x.308 1 0) 'unquote-splicing)) ((bruijn ##.%k.306 5 0) (bruijn ##.%r.498 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0unquote__splicing);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.14 14 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120) (bruijn ##.%x.309 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k120, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.307 0 0) ((bruijn ##.syntax-caar.15 13 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119) (bruijn ##.expr.54 11 2)) ((bruijn ##.%k.306 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k119, self)))),
      VGetArg(statics, 11-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 12 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118) (bruijn ##.%x.310 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k118, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.305 1 0) ((bruijn ##.syntax-caar.15 11 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117) (bruijn ##.expr.54 9 2)) ((bruijn ##.%k.306 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k117, self)))),
      VGetArg(statics, 9-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.478 ##.%x.479 ##.%r.480) ((##vcore.cons (bruijn ##.%x.271 1 0) '()) (##vcore.cons (bruijn ##.%x.269 3 0) (bruijn ##.%x.478 0 0)) (##vcore.cons (bruijn ##.%x.267 5 0) (bruijn ##.%x.479 0 1))) ((bruijn ##.%k.195 16 0) (bruijn ##.%r.480 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126) (bruijn ##.quotation.53 14 1) (bruijn ##.%x.272 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k126, self))));
    VWORD _arg1 = 
      VGetArg(statics, 14-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 15 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125) (bruijn ##.expr.54 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k125, self)))),
      VGetArg(statics, 13-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 14 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124) (bruijn ##.%x.273 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k124, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 13 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123) (bruijn ##.expr.54 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k123, self)))),
      VGetArg(statics, 11-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 6 6 (##.%x.489 ##.%x.490 ##.%x.491 ##.%x.492 ##.%x.493 ##.%r.494) ((##vcore.cons (bruijn ##.%x.283 1 0) '()) (##vcore.cons (bruijn ##.%x.488 3 4) (bruijn ##.%x.489 0 0)) (##vcore.cons (bruijn ##.%x.482 10 1) (bruijn ##.%x.490 0 1)) (##vcore.cons (bruijn ##.%x.277 13 0) (bruijn ##.%x.491 0 2)) (##vcore.cons (bruijn ##.%x.492 0 3) '()) (##vcore.cons (bruijn ##.%x.274 14 0) (bruijn ##.%x.493 0 4))) ((bruijn ##.%k.195 25 0) (bruijn ##.%r.494 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[4],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[1]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 13-1, 0),
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      VNULL);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 14-1, 0),
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 1,
      self->vars[5]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 24 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137) (bruijn ##.quotation.53 23 1) (bruijn ##.%x.284 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k137, self))));
    VWORD _arg1 = 
      VGetArg(statics, 23-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 5 5 (##.%x.484 ##.%x.485 ##.%x.486 ##.%x.487 ##.%x.488) ((##vcore.cons '() '()) (##vcore.cons (bruijn ##.%x.290 1 0) (bruijn ##.%x.484 0 0)) (##vcore.cons (bruijn ##.%x.485 0 1) '()) (##vcore.cons (bruijn ##.%x.287 2 0) (bruijn ##.%x.486 0 2)) (##vcore.cons (bruijn ##.%x.285 6 0) (bruijn ##.%x.487 0 3))) ((bruijn ##.syntax-cdr.18 24 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136) (bruijn ##.expr.54 22 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[5]; } container;
    self = &container.self;
    VInitEnv(self, 5, 5, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VNULL,
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 6-1, 0),
      self->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k136, self)))),
      VGetArg(statics, 22-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 21 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k135, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 20 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134) (bruijn ##.%x.483 2 0) (bruijn ##.%x.293 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k134, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 20 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133) (bruijn ##.%x.294 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k133, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.483) ((##vcore.- (bruijn ##.quotation.53 17 1) 1)) ((bruijn ##.syntax-car.17 19 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132) (bruijn ##.expr.54 17 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
      VGetArg(statics, 17-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k132, self)))),
      VGetArg(statics, 17-1, 2));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.481 ##.%x.482) ((##vcore.cons (bruijn ##.%x.297 1 0) '()) (##vcore.cons (bruijn ##.%x.295 2 0) (bruijn ##.%x.481 0 0))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 16 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131) '##vcore.cons))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      self->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k131, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 14 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130) 'unquote-splicing)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k130, self))));
    VWORD _arg1 = 
      _V0unquote__splicing;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 13 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129) 'quote)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k129, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 12 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128) '##vcore.cons)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k128, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.495 ##.%x.496 ##.%r.497) ((##vcore.cons (bruijn ##.%x.302 1 0) '()) (##vcore.cons (bruijn ##.%x.300 3 0) (bruijn ##.%x.495 0 0)) (##vcore.cons (bruijn ##.%x.298 5 0) (bruijn ##.%x.496 0 1))) ((bruijn ##.%k.195 15 0) (bruijn ##.%r.497 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      self->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 14 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142) (bruijn ##.quotation.53 13 1) (bruijn ##.%x.303 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k142, self))));
    VWORD _arg1 = 
      VGetArg(statics, 13-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cdr.18 14 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141) (bruijn ##.expr.54 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 15)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k141, self)))),
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140) (bruijn ##.quotation.53 11 1) (bruijn ##.%x.304 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k140, self))));
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-car.17 12 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139) (bruijn ##.expr.54 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k139, self)))),
      VGetArg(statics, 10-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.265 0 0) (basic-block 1 1 (##.%p.477) ((##vcore.= (bruijn ##.quotation.53 10 1) 1)) (if (bruijn ##.%p.477 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122) '##vcore.append) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 11 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127) '##vcore.cons))) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 10 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138) '##vcore.cons))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k122, self))));
    VWORD _arg1 = 
      _V10vcore_Dappend;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k127, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k138, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k121, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-pair?.16 9 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115) (bruijn ##.%x.311 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 13)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k115, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.428) ((##vcore.eq? (bruijn ##.x.1.55 1 0) 'quasiquote)) (if (bruijn ##.%p.428 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 6 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84) '##vcore.cons) (basic-block 1 1 (##.%p.440) ((##vcore.eq? (bruijn ##.x.1.55 2 0) 'unquote)) (if (bruijn ##.%p.440 0 0) ((bruijn ##.syntax-cadr.3 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91) (bruijn ##.expr.54 6 2)) ((bruijn ##.syntax-car.17 8 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114) (bruijn ##.expr.54 6 2))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      _V0quasiquote);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k84, self))));
    VWORD _arg1 = 
      _V10vcore_Dcons;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      _V0unquote);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k91, self)))),
      VGetArg(statics, 6-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 14)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k114, self)))),
      VGetArg(statics, 6-1, 2));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k81, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k83, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.identifier?.13 4 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80) (bruijn ##.%x.315 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k80, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.499 ##.%r.500) ((##vcore.cons (bruijn ##.%x.319 1 0) '()) (##vcore.cons (bruijn ##.%x.317 4 0) (bruijn ##.%x.499 0 0))) ((bruijn ##.%k.195 7 0) (bruijn ##.%r.500 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms expand-quasiquote-impl) #t (bruijn ##.expand-quasiquote-impl.43 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147) (bruijn ##.quotation.53 5 1) (bruijn ##.%x.320 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k147, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.vector->list.5 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146) (bruijn ##.%x.321 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k146, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic global-forms syntax-unpack) #t (bruijn ##.syntax-unpack.45 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145) (bruijn ##.expr.54 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k145, self))));
    VWORD _arg1 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.501 ##.%r.502) ((##vcore.cons (bruijn ##.expr.54 4 2) '()) (##vcore.cons (bruijn ##.%x.322 1 0) (bruijn ##.%x.501 0 0))) ((bruijn ##.%k.195 4 0) (bruijn ##.%r.502 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[2],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.316 0 0) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144) '##vcore.list->vector) (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148) 'quote))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k144, self))));
    VWORD _arg1 = 
      _V10vcore_Dlist___Gvector;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k148, self))));
    VWORD _arg1 = 
      _V0quote;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.196 0 0) ((bruijn ##.syntax-car.17 3 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79) (bruijn ##.expr.54 1 2)) ((bruijn ##.syntax-vector?.4 3 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143) (bruijn ##.expr.54 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k79, self)))),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k143, self)))),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax-pair?.16 2 13) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78) (bruijn ##.expr.54 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl_V0k78, self)))),
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.505) ((##vcore.cons (bruijn ##.%x.504 3 1) (bruijn ##.%x.326 1 0))) ((bruijn ##.%k.324 8 0) (bruijn ##.%r.505 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.19 8 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154) (bruijn ##.syntax-cadr.3 8 0) (bruijn ##.%x.327 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k154, self)))),
      VGetArg(statics, 8-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.503 ##.%x.504) ((##vcore.cons (bruijn ##.%x.330 2 0) (bruijn ##.%x.331 1 0)) (##vcore.cons (bruijn ##.%x.328 4 0) (bruijn ##.%x.503 0 0))) ((bruijn ##.syntax-cadr.3 7 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153) (bruijn ##.form.57 5 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k153, self)))),
      VGetArg(statics, 5-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cddr.20 5 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152) (bruijn ##.form.57 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 17)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k152, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-map.19 4 16) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151) (bruijn ##.syntax-car.17 4 14) (bruijn ##.%x.332 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[16]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k151, self)))),
      statics->up->up->up->vars[14],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.syntax-cadr.3 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150) (bruijn ##.form.57 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k150, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic global-forms global-identifier) #t (bruijn ##.global-identifier.46 1 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149) 'lambda)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0global__forms;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let_V0k149, self))));
    VWORD _arg1 = 
      _V0lambda;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.334 0 0) ((bruijn ##.get-syntax-data.14 3 11) (bruijn ##.%k.333 1 0) (bruijn ##.x.58 1 1)) ((bruijn ##.%k.333 1 0) (bruijn ##.x.58 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[11]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.21 2 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155) (bruijn ##.x.58 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[18]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack_V0k155, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.make-syntax.22 4 19) (bruijn ##.%k.335 2 0) (bruijn ##.expr.59 2 1) (bruijn ##.%x.336 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[19]), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.24 3 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157) (bruijn ##.%x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[21]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k157, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.global-scope.23 2 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[20]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier_V0k156, self)))));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.512 ##.%x.513 ##.%x.514 ##.%x.515 ##.%x.516 ##.%r.517) ((##vcore.cons 'global-identifier (bruijn ##.global-identifier.46 2 8)) (##vcore.cons 'global-forms (bruijn ##.global-forms.39 2 1)) (##vcore.cons 'global-form-env (bruijn ##.global-form-env.38 2 0)) (##vcore.cons (bruijn ##.%x.514 0 2) '()) (##vcore.cons (bruijn ##.%x.513 0 1) (bruijn ##.%x.515 0 3)) (##vcore.cons (bruijn ##.%x.512 0 0) (bruijn ##.%x.516 0 4))) ((bruijn ##.%k.61 8 0) (bruijn ##.%r.517 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0global__identifier,
      statics->up->vars[8]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0global__forms,
      statics->up->vars[1]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0global__form__env,
      statics->up->vars[0]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[5]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.506 ##.%x.507 ##.%x.508 ##.%x.509 ##.%x.510 ##.%x.511) ((##vcore.cons 'let (bruijn ##.expand-let.44 1 6)) (##vcore.cons 'quasiquote (bruijn ##.expand-quasiquote.42 1 4)) (##vcore.cons 'quasisyntax (bruijn ##.expand-quasisyntax.40 1 2)) (##vcore.cons (bruijn ##.%x.508 0 2) '()) (##vcore.cons (bruijn ##.%x.507 0 1) (bruijn ##.%x.509 0 3)) (##vcore.cons (bruijn ##.%x.506 0 0) (bruijn ##.%x.510 0 4))) (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159) (bruijn ##.global-form-env.38 1 0) (bruijn ##.%x.511 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0let,
      statics->vars[6]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0quasiquote,
      statics->vars[4]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0quasisyntax,
      statics->vars[2]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k159, self)))),
      VEncodeInt(1l), VEncodeInt(0l),
      self->vars[5]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21) {
 if(argc != 22) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, got ~D~N"
  "-- expected 22~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[22]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 22, 22, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  self->vars[9] = _var9;
  self->vars[10] = _var10;
  self->vars[11] = _var11;
  self->vars[12] = _var12;
  self->vars[13] = _var13;
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  self->vars[19] = _var19;
  self->vars[20] = _var20;
  self->vars[21] = _var21;
  // (##letrec (vanity compiler hygienic global-forms) 9 (#f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack" (vanity compiler hygienic global-forms)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier" (vanity compiler hygienic global-forms))) (set! (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158) (bruijn ##.global-forms.39 0 1) '(##pair ##.pair.520)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[9]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0global__forms = self;
    VInitEnv(self, 9, 9, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasisyntax__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__quasiquote__impl, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0expand__let, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0global__forms_V0global__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0global__forms))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0global__forms_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0global__forms);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k158, self)))),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodePointer(&_V10_Dpair_D520, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2) (##string ##.string.521) (bruijn ##.%x.349 0 0) 'syntax-cadr 'syntax-vector? 'vector->list 'f64vector->list 'f32vector->list 's32vector->list 'u16vector->list 's16vector->list 'u8vector->list 's8vector->list 'identifier? 'get-syntax-data 'syntax-caar 'syntax-pair? 'syntax-car 'syntax-cdr 'syntax-map 'syntax-cddr 'syntax? 'make-syntax 'global-scope 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 25,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D521.sym, VPOINTER_OTHER),
      _var0,
      _V0syntax__cadr,
      _V0syntax__vector_Q,
      _V0vector___Glist,
      _V0f64vector___Glist,
      _V0f32vector___Glist,
      _V0s32vector___Glist,
      _V0u16vector___Glist,
      _V0s16vector___Glist,
      _V0u8vector___Glist,
      _V0s8vector___Glist,
      _V0identifier_Q,
      _V0get__syntax__data,
      _V0syntax__caar,
      _V0syntax__pair_Q,
      _V0syntax__car,
      _V0syntax__cdr,
      _V0syntax__map,
      _V0syntax__cddr,
      _V0syntax_Q,
      _V0make__syntax,
      _V0global__scope,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4) (bruijn ##.%x.350 2 0) (bruijn ##.%x.351 1 0) (bruijn ##.%x.352 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3) (##string ##.string.522))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D522.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2) (##string ##.string.523))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D523.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1) (##string ##.string.524))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D524.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0global__forms_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0global__forms_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0s8vector___Glist = VEncodePointer(VInternSymbol(-909584740, &_VW_V0s8vector___Glist.sym), VPOINTER_OTHER);
  _V0u8vector___Glist = VEncodePointer(VInternSymbol(-1502612760, &_VW_V0u8vector___Glist.sym), VPOINTER_OTHER);
  _V0s16vector___Glist = VEncodePointer(VInternSymbol(730976843, &_VW_V0s16vector___Glist.sym), VPOINTER_OTHER);
  _V0u16vector___Glist = VEncodePointer(VInternSymbol(403480187, &_VW_V0u16vector___Glist.sym), VPOINTER_OTHER);
  _V0s32vector___Glist = VEncodePointer(VInternSymbol(1109387554, &_VW_V0s32vector___Glist.sym), VPOINTER_OTHER);
  _V0f32vector___Glist = VEncodePointer(VInternSymbol(1214355089, &_VW_V0f32vector___Glist.sym), VPOINTER_OTHER);
  _V0f64vector___Glist = VEncodePointer(VInternSymbol(1257547487, &_VW_V0f64vector___Glist.sym), VPOINTER_OTHER);
  _V0vector___Glist = VEncodePointer(VInternSymbol(45656078, &_VW_V0vector___Glist.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0global__form__env = VEncodePointer(VInternSymbol(1415805201, &_VW_V0global__form__env.sym), VPOINTER_OTHER);
  _V0global__forms = VEncodePointer(VInternSymbol(1252986977, &_VW_V0global__forms.sym), VPOINTER_OTHER);
  _V0global__identifier = VEncodePointer(VInternSymbol(-1557481786, &_VW_V0global__identifier.sym), VPOINTER_OTHER);
  _V0let = VEncodePointer(VInternSymbol(-599055874, &_VW_V0let.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quasiquote = VEncodePointer(VInternSymbol(-1666054212, &_VW_V0quasiquote.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V10vcore_Dappend = VEncodePointer(VInternSymbol(1742285522, &_VW_V10vcore_Dappend.sym), VPOINTER_OTHER);
  _V0unquote__splicing = VEncodePointer(VInternSymbol(-922270485, &_VW_V0unquote__splicing.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs8vector = VEncodePointer(VInternSymbol(-1495667680, &_VW_V10vcore_Dlist___Gs8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu8vector = VEncodePointer(VInternSymbol(-398660499, &_VW_V10vcore_Dlist___Gu8vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs16vector = VEncodePointer(VInternSymbol(-604043574, &_VW_V10vcore_Dlist___Gs16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gu16vector = VEncodePointer(VInternSymbol(-288736869, &_VW_V10vcore_Dlist___Gu16vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gs32vector = VEncodePointer(VInternSymbol(-1792200977, &_VW_V10vcore_Dlist___Gs32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf32vector = VEncodePointer(VInternSymbol(-797019339, &_VW_V10vcore_Dlist___Gf32vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gf64vector = VEncodePointer(VInternSymbol(-1111467472, &_VW_V10vcore_Dlist___Gf64vector.sym), VPOINTER_OTHER);
  _V10vcore_Dlist___Gvector = VEncodePointer(VInternSymbol(484282061, &_VW_V10vcore_Dlist___Gvector.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V10vcore_Dcons = VEncodePointer(VInternSymbol(-774369668, &_VW_V10vcore_Dcons.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0quasisyntax = VEncodePointer(VInternSymbol(71445183, &_VW_V0quasisyntax.sym), VPOINTER_OTHER);
  _V10_Dpair_D520.first = _V0let;
  _V10_Dpair_D520.rest = VEncodePointer(&_V10_Dpair_D519, VPOINTER_PAIR);
  _V10_Dpair_D519.first = _V0quasiquote;
  _V10_Dpair_D519.rest = VEncodePointer(&_V10_Dpair_D518, VPOINTER_PAIR);
  _V10_Dpair_D518.first = _V0quasisyntax;
  _V10_Dpair_D518.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
