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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0types;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D482 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D481 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0make__parameter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0make__parameter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "make-parameter" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0list_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0list_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "list\?" };
VWEAK VWORD _V0any;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0any = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "any" };
VWEAK VWORD _V0vector__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "vector-map" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0vector__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "vector-for-each" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D480 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V40_V10vcore_Dcons;
VWEAK VClosure _VW_V40_V10vcore_Dcons = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCons2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector;
VWEAK VClosure _VW_V40_V10vcore_Dvector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCreateVector, NULL };
VWEAK VWORD _V40_V10vcore_Dmake__vector;
VWEAK VClosure _VW_V40_V10vcore_Dmake__vector = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMakeVector, NULL };
VWEAK VWORD _V0flip__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "flip-scope" };
VWEAK VWORD _V0eager__flip__scope;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0eager__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "eager-flip-scope" };
VWEAK VWORD _V0lazy__flip__scope;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0lazy__flip__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "lazy-flip-scope" };
VWEAK VWORD _V0syntax__vector__for__each;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0syntax__vector__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "syntax-vector-for-each" };
VWEAK VWORD _V0syntax__vector__map;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-map" };
VWEAK VWORD _V0syntax__vector__ref;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0syntax__vector__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "syntax-vector-ref" };
VWEAK VWORD _V0syntax__make__vector;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0syntax__make__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "syntax-make-vector" };
VWEAK VWORD _V0syntax__vector;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0syntax__vector = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "syntax-vector" };
VWEAK VWORD _V0syntax__vector_Q;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0syntax__vector_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "syntax-vector\?" };
VWEAK VWORD _V0syntax__caddr;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-caddr" };
VWEAK VWORD _V0syntax__list;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-list" };
VWEAK VWORD _V0syntax__for__each;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0syntax__for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "syntax-for-each" };
VWEAK VWORD _V0syntax__map;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-map" };
VWEAK VWORD _V0syntax__cddr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cddr" };
VWEAK VWORD _V0syntax__cdar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cdar" };
VWEAK VWORD _V0syntax__cadr;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cadr" };
VWEAK VWORD _V0syntax__caar;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-caar" };
VWEAK VWORD _V0syntax__cdr;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-cdr" };
VWEAK VWORD _V0syntax__car;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0syntax__car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "syntax-car" };
VWEAK VWORD _V0syntax__cons;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0syntax__cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "syntax-cons" };
VWEAK VWORD _V0syntax__pair_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-pair\?" };
VWEAK VWORD _V0syntax__null_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0syntax__null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "syntax-null\?" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0syntax_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0syntax_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "syntax\?" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0scope_E_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0scope_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "scope=\?" };
VWEAK VWORD _V0scope_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0scope_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "scope\?" };
VWEAK VWORD _V0make__scope;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0make__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "make-scope" };
static VPair _V10_Dpair_D479 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D478 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0flips;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0flips = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "flips" };
VWEAK VWORD _V0data;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "data" };
VWEAK VWORD _V0syntax;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "syntax" };
static VPair _V10_Dpair_D477 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0bindings;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "bindings" };
VWEAK VWORD _V0scope;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "scope" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0get__syntax__data__impl;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0get__syntax__data__impl = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "get-syntax-data-impl" };
VWEAK VWORD _V0set__syntax__data_B;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0set__syntax__data_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "set-syntax-data!" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
static struct { VBlob sym; char bytes[31]; } _V10_Dstring_D476 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 31 }, "not a record of the right type" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0set__syntax__scopes_B;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0set__syntax__scopes_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "set-syntax-scopes!" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _var0, _var1);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.133 1 0) (bruijn ##.vector-for-each.5 3 0) (bruijn ##.f.70 1 1) (bruijn ##.%x.134 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[0],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.6 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4) (bruijn ##.syntax-unpack.47 1 20) (bruijn ##.args.71 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each_V0k4, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.135 1 0) (bruijn ##.vector-map.7 3 2) (bruijn ##.f.72 1 1) (bruijn ##.%x.136 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 4,
      statics->vars[0],
      statics->up->up->vars[2],
      statics->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, got ~D~N"
  "-- expected 2 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // ((bruijn ##.map.6 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5) (bruijn ##.syntax-unpack.47 1 20) (bruijn ##.args.73 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map_V0k5, self)))),
      statics->vars[20],
      _varargs);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.354) ((##vcore.vector-ref (bruijn ##.%x.138 1 0) (bruijn ##.i.75 2 2))) ((bruijn ##.%k.137 2 0) (bruijn ##.%r.354 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorRef2(runtime, NULL,
      statics->vars[0],
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6) (bruijn ##.v.74 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref_V0k6, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.356) ((##vcore.vector? (bruijn ##.%x.142 1 0))) ((bruijn ##.%k.139 4 0) (bruijn ##.%r.356 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.141 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8) (bruijn ##.x.76 2 1)) ((bruijn ##.%k.139 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k8, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.355) ((##vcore.vector? (bruijn ##.x.76 1 1))) (if (bruijn ##.%p.355 0 0) ((bruijn ##.%k.139 1 0) (bruijn ##.%p.355 0 0)) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7) (bruijn ##.x.76 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VVectorP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q_V0k7, self)))),
      statics->vars[1]);
}
    }
}
static void _V10_Dsyntax__for__each_D34_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each) #t (bruijn ##.syntax-for-each.34 4 7) (bruijn ##.%k.143 3 0) (bruijn ##.f.77 3 1) (bruijn ##.%x.145 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V10_Dsyntax__for__each_D34_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 3 14) (close _V10_Dsyntax__for__each_D34_V0k12) (bruijn ##.xs.78 2 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k12, self))));
    VWORD _arg1 = 
      statics->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V10_Dsyntax__for__each_D34_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.77 2 1) (close _V10_Dsyntax__for__each_D34_V0k11) (bruijn ##.%x.146 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k11, self)))),
      _var0);
}
static void _V10_Dsyntax__for__each_D34_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsyntax__for__each_D34_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.144 0 0) ((bruijn ##.%k.143 1 0) #void) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (close _V10_Dsyntax__for__each_D34_V0k10) (bruijn ##.xs.78 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k10, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 4 0) (bruijn ##.%k.148 3 0) (bruijn ##.%x.150 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.map.6 6 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16) (bruijn ##.syntax-cdr.41 5 14) (bruijn ##.xss.82 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k16, self)))),
      VGetArg(statics, 5-1, 14),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15) (bruijn ##.f.79 4 1) (bruijn ##.%x.151 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k15, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.149 0 0) ((bruijn ##.%k.148 1 0) #void) ((bruijn ##.map.6 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14) (bruijn ##.syntax-car.42 4 15) (bruijn ##.xss.82 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k14, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.8 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13) (bruijn ##.syntax-null?.45 3 18) (bruijn ##.xss.82 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81_V0k13, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" #t #f (3 (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 1 18) (close _V10_Dsyntax__for__each_D34_V0k9) (bruijn ##.xs.78 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 0 0) (bruijn ##.%k.147 1 0) (bruijn ##.xss.80 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 1 18) (close _V10_Dsyntax__for__each_D34_V0k9) (bruijn ##.xs.78 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dsyntax__for__each_D34_V0k9, self))));
    VWORD _arg1 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81")) (##qualified-call (vanity compiler hygienic types syntax-for-each ##.loop.81) #f (bruijn ##.loop.81 0 0) (bruijn ##.%k.147 1 0) (bruijn ##.xss.80 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each_V10_Dloop_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.357) ((##vcore.cons (bruijn ##.%x.155 3 0) (bruijn ##.%x.156 1 0))) ((bruijn ##.%k.153 6 0) (bruijn ##.%r.357 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21) (bruijn ##.%x.157 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k21, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 6 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20) (bruijn ##.xs.86 3 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k20, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.f.83 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19) (bruijn ##.%x.158 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k19, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.154 0 0) ((bruijn ##.%k.153 1 0) '()) (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 4 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18) (bruijn ##.xs.86 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k18, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-null?) #t (bruijn ##.syntax-null?.45 3 18) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17) (bruijn ##.xs.86 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85_V0k17, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.358) ((##vcore.cons (bruijn ##.%x.162 3 0) (bruijn ##.%x.163 1 0))) ((bruijn ##.%k.160 6 0) (bruijn ##.%r.358 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 5 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26) (bruijn ##.%x.164 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.6 7 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25) (bruijn ##.syntax-cdr.41 6 14) (bruijn ##.xss.90 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k25, self)))),
      VGetArg(statics, 6-1, 14),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.apply (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24) (bruijn ##.f.87 4 1) (bruijn ##.%x.165 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k24, self)))),
      statics->up->up->up->vars[1],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.161 0 0) ((bruijn ##.%k.160 1 0) '()) ((bruijn ##.map.6 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23) (bruijn ##.syntax-car.42 4 15) (bruijn ##.xss.90 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k23, self)))),
      statics->up->up->up->vars[15],
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.any.8 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22) (bruijn ##.syntax-null?.45 3 18) (bruijn ##.xss.90 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89_V0k22, self)))),
      statics->up->up->vars[18],
      _var1);
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" #t #f (3 (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 0 0) (bruijn ##.%k.152 1 0) (bruijn ##.xs.84 1 2)))) (2 + (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 0 0) (bruijn ##.%k.159 1 0) (bruijn ##.xss.88 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.85) #f (bruijn ##.loop.85 0 0) (bruijn ##.%k.152 1 0) (bruijn ##.xs.84 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D85(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89")) (##qualified-call (vanity compiler hygienic types syntax-map ##.loop.89) #f (bruijn ##.loop.89 0 0) (bruijn ##.%k.159 1 0) (bruijn ##.xss.88 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map_V10_Dloop_D89(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, @function\n"
#endif
".globl _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
"    jmp _V20CaseError__V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map\n"
);
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 3 15) (bruijn ##.%k.166 2 0) (bruijn ##.%x.167 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28) (bruijn ##.%x.168 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k28, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27) (bruijn ##.pair.91 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr_V0k27, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (bruijn ##.%k.169 1 0) (bruijn ##.%x.170 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29) (bruijn ##.pair.92 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr_V0k29, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 2 14) (bruijn ##.%k.171 1 0) (bruijn ##.%x.172 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30) (bruijn ##.pair.93 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar_V0k30, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (bruijn ##.%k.173 1 0) (bruijn ##.%x.174 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-cdr) #t (bruijn ##.syntax-cdr.41 1 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31) (bruijn ##.pair.94 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr_V0k31, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 2 15) (bruijn ##.%k.175 1 0) (bruijn ##.%x.176 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-car) #t (bruijn ##.syntax-car.42 1 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32) (bruijn ##.pair.95 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar_V0k32, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.359) ((##vcore.cdr (bruijn ##.%x.178 1 0))) ((bruijn ##.%k.177 2 0) (bruijn ##.%r.359 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33) (bruijn ##.pair.96 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr_V0k33, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.360) ((##vcore.car (bruijn ##.%x.180 1 0))) ((bruijn ##.%k.179 2 0) (bruijn ##.%r.360 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types syntax-unpack) #t (bruijn ##.syntax-unpack.47 1 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34) (bruijn ##.pair.97 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car_V0k34, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.362) ((##vcore.pair? (bruijn ##.%x.184 1 0))) ((bruijn ##.%k.181 4 0) (bruijn ##.%r.362 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.183 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36) (bruijn ##.x.98 2 1)) ((bruijn ##.%k.181 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k36, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.361) ((##vcore.pair? (bruijn ##.x.98 1 1))) (if (bruijn ##.%p.361 0 0) ((bruijn ##.%k.181 1 0) #t) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35) (bruijn ##.x.98 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q_V0k35, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.364) ((##vcore.null? (bruijn ##.%x.188 1 0))) ((bruijn ##.%k.185 4 0) (bruijn ##.%r.364 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.187 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 3 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38) (bruijn ##.x.99 2 1)) ((bruijn ##.%k.185 2 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k38, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.363) ((##vcore.null? (bruijn ##.x.99 1 1))) (if (bruijn ##.%p.363 0 0) ((bruijn ##.%k.185 1 0) #t) ((bruijn ##.syntax?.59 2 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37) (bruijn ##.x.99 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q_V0k37, self)))),
      statics->vars[1]);
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (bruijn ##.%k.189 1 0) (bruijn ##.x.100 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.190 0 0) (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.52 2 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40) (bruijn ##.x.100 1 1)) ((bruijn ##.%k.189 1 0) (bruijn ##.x.100 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k40, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39) (bruijn ##.x.100 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack_V0k39, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.191 4 0) (bruijn ##.%x.193 2 0) (bruijn ##.%x.194 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.50 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44) (bruijn ##.%x.195 0 0) (bruijn ##.sc.102 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k44, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43) (bruijn ##.v.101 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k43, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types eager-flip-scope) #t (bruijn ##.eager-flip-scope.48 4 21) (bruijn ##.%k.197 0 0) (bruijn ##.e.103 0 1) (bruijn ##.sc.102 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.196 0 0) ((bruijn ##.map.6 4 1) (bruijn ##.%k.191 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda3) (bruijn ##.v.101 2 1)) ((bruijn ##.%k.191 2 0) (bruijn ##.v.101 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0lambda3, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.192 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42) (bruijn ##.v.101 1 1)) ((bruijn ##.list?.9 3 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45) (bruijn ##.v.101 1 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k42, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k45, self)))),
      statics->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types identifier?) #t (bruijn ##.identifier?.53 1 26) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41) (bruijn ##.v.101 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope_V0k41, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.198 4 0) (bruijn ##.%x.200 2 0) (bruijn ##.%x.201 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types flip-scope-set) #t (bruijn ##.flip-scope-set.50 4 23) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49) (bruijn ##.%x.202 0 0) (bruijn ##.x.105 3 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k49, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 3 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48) (bruijn ##.stx.104 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k48, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.365 1 0) ((bruijn ##.%k.206 0 0) (bruijn ##.%p.365 1 0)) (basic-block 1 1 (##.%r.366) ((##vcore.pair? (bruijn ##.stx.104 4 1))) ((bruijn ##.%k.206 1 0) (bruijn ##.%r.366 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 5 31) (bruijn ##.%k.198 4 0) (bruijn ##.stx.104 4 1) (bruijn ##.%x.204 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.203 0 0) ((bruijn ##.list.13 5 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52) (bruijn ##.x.105 3 2)) ((bruijn ##.%k.198 3 0) (bruijn ##.stx.104 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k52, self)))),
      statics->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.199 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47) (bruijn ##.stx.104 1 1)) (basic-block 1 1 (##.%p.365) ((##vcore.symbol? (bruijn ##.stx.104 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k47, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k50, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k51, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46) (bruijn ##.stx.104 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope_V0k46, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.372) ((##vcore.cons (bruijn ##.%x.370 2 0) (bruijn ##.%x.212 1 0))) ((bruijn ##.%k.209 4 0) (bruijn ##.%r.372 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.367 ##.%p.368) ((##vcore.car (bruijn ##.set.109 1 1)) (##vcore.eq? (bruijn ##.%x.367 0 0) (bruijn ##.x.107 4 2))) (if (bruijn ##.%p.368 0 1) (basic-block 1 1 (##.%r.369) ((##vcore.cdr (bruijn ##.set.109 2 1))) ((bruijn ##.%k.209 2 0) (bruijn ##.%r.369 0 0))) (basic-block 2 2 (##.%x.370 ##.%x.371) ((##vcore.car (bruijn ##.set.109 2 1)) (##vcore.cdr (bruijn ##.set.109 2 1))) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.108) #f (bruijn ##.loop.108 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54) (bruijn ##.%x.371 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->up->vars[2]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108_V0k54, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.208 0 0) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108")) (##qualified-call (vanity compiler hygienic types flip-scope-set ##.loop.108) #f (bruijn ##.loop.108 0 0) (bruijn ##.%k.207 2 0) (bruijn ##.set.106 2 1))) (basic-block 1 1 (##.%r.373) ((##vcore.cons (bruijn ##.x.107 2 2) (bruijn ##.set.106 2 1))) ((bruijn ##.%k.207 2 0) (bruijn ##.%r.373 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V10_Dloop_D108(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[2],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.memq.10 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53) (bruijn ##.x.107 0 2) (bruijn ##.set.106 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set_V0k53, self)))),
      _var2,
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 1 30) (bruijn ##.%k.215 0 0) (bruijn ##.stx.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      self->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types propogate-flips) #t (bruijn ##.propogate-flips.52 1 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55) (bruijn ##.stx.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data_V0k55, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 11 31) (bruijn ##.%k.220 4 0) (bruijn ##.%x.222 2 0) (bruijn ##.%x.223 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset-xor.11 11 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61) (##intrinsic ##vcore.eq?) (bruijn ##.%x.224 0 0) (bruijn ##.scopes.112 7 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 6)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k61, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 7-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 9 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60) (bruijn ##.stx.115 2 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k60, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.375 1 0) ((bruijn ##.%k.227 0 0) (bruijn ##.%p.375 1 0)) (basic-block 1 1 (##.%r.376) ((##vcore.pair? (bruijn ##.stx.115 4 1))) ((bruijn ##.%k.227 1 0) (bruijn ##.%r.376 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.225 0 0) (##qualified-call (vanity compiler hygienic types make-syntax) #t (bruijn ##.make-syntax.58 10 31) (bruijn ##.%k.220 3 0) (bruijn ##.stx.115 3 1) (bruijn ##.scopes.112 7 0)) ((bruijn ##.%k.220 3 0) (bruijn ##.stx.115 3 1)))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.221 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 8 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59) (bruijn ##.stx.115 1 1)) (basic-block 1 1 (##.%p.375) ((##vcore.symbol? (bruijn ##.stx.115 2 1))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k59, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k62, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k63, self)))));
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 7 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58) (bruijn ##.stx.115 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 32)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114_V0k58, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.380) ((##vcore.cons (bruijn ##.%x.230 3 0) (bruijn ##.%x.231 1 0))) (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.56 12 29) (bruijn ##.%k.216 11 0) (bruijn ##.stx.111 11 1) (bruijn ##.%x.380 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 11-1, 1);
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.379) ((##vcore.cdr (bruijn ##.data.113 4 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.114) #f (bruijn ##.flip.114 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66) (bruijn ##.%x.379 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k66, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.378) ((##vcore.car (bruijn ##.data.113 2 0))) (##qualified-call (vanity compiler hygienic types propogate-flips ##.flip.114) #f (bruijn ##.flip.114 2 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65) (bruijn ##.%x.378 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k65, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types set-syntax-data!) #t (bruijn ##.set-syntax-data!.56 9 29) (bruijn ##.%k.216 8 0) (bruijn ##.stx.111 8 1) (bruijn ##.%x.235 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.vector-map.7 9 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68) (bruijn ##.flip.114 2 1) (bruijn ##.data.113 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k68, self)))),
      statics->up->vars[1],
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.219 1 0) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114")) (basic-block 1 1 (##.%p.377) ((##vcore.pair? (bruijn ##.data.113 1 0))) (if (bruijn ##.%p.377 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.54 7 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64) (bruijn ##.stx.111 6 1) '()) (basic-block 1 1 (##.%p.381) ((##vcore.vector? (bruijn ##.data.113 2 0))) (if (bruijn ##.%p.381 0 0) (##qualified-call (vanity compiler hygienic types set-syntax-scopes!) #t (bruijn ##.set-syntax-scopes!.54 8 27) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67) (bruijn ##.stx.111 7 1) '()) ((bruijn ##.%k.216 7 0) #f))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->vars[0];
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V10_Dflip_D114, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k64, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k67, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.217 1 0)) (basic-block 1 1 (##.%p.374) ((##vcore.null? (bruijn ##.scopes.112 1 0))) (if (bruijn ##.%p.374 0 0) ((bruijn ##.%k.216 3 0) #void) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 4 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57) (bruijn ##.stx.111 3 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VVOID);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k57, self))));
    VWORD _arg1 = 
      statics->up->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types get-syntax-scopes) #t (bruijn ##.get-syntax-scopes.55 1 28) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56) (bruijn ##.stx.111 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips_V0k56, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.382) ((##vcore.symbol? (bruijn ##.%x.238 1 0))) ((bruijn ##.%k.236 3 0) (bruijn ##.%r.382 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.237 0 0) (##qualified-call (vanity compiler hygienic types get-syntax-data-impl) #t (bruijn ##.get-syntax-data-impl.57 2 30) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70) (bruijn ##.x.116 1 1)) ((bruijn ##.%k.236 1 0) #f))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k70, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.syntax?.59 1 32) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69) (bruijn ##.x.116 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[32]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q_V0k69, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.239 3 0) (bruijn ##.%x.241 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.240 0 0) (##vcore.record-set! (bruijn ##.%k.239 1 0) (bruijn ##.rec.117 1 1) 2 (bruijn ##.x.118 1 2)) (basic-block 2 2 (##.%x.383 ##.%x.384) ((##vcore.cons (bruijn ##.rec.117 2 1) '()) (##vcore.cons 'set-syntax-scopes! (bruijn ##.%x.383 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72) #f 'error (##string ##.string.476) (bruijn ##.%x.384 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(2l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k72, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71) (bruijn ##.rec.117 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B_V0k71, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.244 3 0) (bruijn ##.%x.246 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.245 0 0) (basic-block 1 1 (##.%r.385) ((##vcore.record-ref (bruijn ##.rec.119 2 1) 2)) ((bruijn ##.%k.244 2 0) (bruijn ##.%r.385 0 0))) (basic-block 2 2 (##.%x.386 ##.%x.387) ((##vcore.cons (bruijn ##.rec.119 2 1) '()) (##vcore.cons 'get-syntax-scopes (bruijn ##.%x.386 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74) #f 'error (##string ##.string.476) (bruijn ##.%x.387 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k74, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73) (bruijn ##.rec.119 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes_V0k73, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.249 3 0) (bruijn ##.%x.251 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.250 0 0) (##vcore.record-set! (bruijn ##.%k.249 1 0) (bruijn ##.rec.120 1 1) 1 (bruijn ##.x.121 1 2)) (basic-block 2 2 (##.%x.388 ##.%x.389) ((##vcore.cons (bruijn ##.rec.120 2 1) '()) (##vcore.cons 'set-syntax-data! (bruijn ##.%x.388 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76) #f 'error (##string ##.string.476) (bruijn ##.%x.389 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k76, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75) (bruijn ##.rec.120 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B_V0k75, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.254 3 0) (bruijn ##.%x.256 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.255 0 0) (basic-block 1 1 (##.%r.390) ((##vcore.record-ref (bruijn ##.rec.122 2 1) 1)) ((bruijn ##.%k.254 2 0) (bruijn ##.%r.390 0 0))) (basic-block 2 2 (##.%x.391 ##.%x.392) ((##vcore.cons (bruijn ##.rec.122 2 1) '()) (##vcore.cons 'get-syntax-data-impl (bruijn ##.%x.391 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78) #f 'error (##string ##.string.476) (bruijn ##.%x.392 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data__impl,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k78, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.syntax?.4) #t (bruijn ##.syntax?.4.60 1 33) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77) (bruijn ##.rec.122 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl_V0k77, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.259 0 0) (bruijn ##.syntax.3.61 1 34) (bruijn ##.data.123 0 1) (bruijn ##.flips.124 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 4,
      _var0,
      statics->vars[34],
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.393) ((##vcore.record? (bruijn ##.x.125 1 1))) (if (bruijn ##.%p.393 0 0) (basic-block 2 2 (##.%x.394 ##.%r.395) ((##vcore.record-ref (bruijn ##.x.125 2 1) 0) (##vcore.eqv? (bruijn ##.%x.394 0 0) (bruijn ##.syntax.3.61 3 34))) ((bruijn ##.%k.260 2 0) (bruijn ##.%r.395 0 1))) ((bruijn ##.%k.260 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[34]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic types make-scope-impl) #t (bruijn ##.make-scope-impl.66 1 39) (bruijn ##.%k.263 0 0) '())
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.264 3 0) (bruijn ##.%x.266 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.265 0 0) (##vcore.record-set! (bruijn ##.%k.264 1 0) (bruijn ##.rec.126 1 1) 1 (bruijn ##.x.127 1 2)) (basic-block 2 2 (##.%x.396 ##.%x.397) ((##vcore.cons (bruijn ##.rec.126 2 1) '()) (##vcore.cons 'set-scope-bindings! (bruijn ##.%x.396 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80) #f 'error (##string ##.string.476) (bruijn ##.%x.397 0 1))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VRecordSet2, 4,
      statics->vars[0],
      statics->vars[1],
      VEncodeInt(1l),
      statics->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k80, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.68 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79) (bruijn ##.rec.126 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B_V0k79, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.269 3 0) (bruijn ##.%x.271 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.270 0 0) (basic-block 1 1 (##.%r.398) ((##vcore.record-ref (bruijn ##.rec.128 2 1) 1)) ((bruijn ##.%k.269 2 0) (bruijn ##.%r.398 0 0))) (basic-block 2 2 (##.%x.399 ##.%x.400) ((##vcore.cons (bruijn ##.rec.128 2 1) '()) (##vcore.cons 'get-scope-bindings (bruijn ##.%x.399 0 0))) (##vcore.record (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82) #f 'error (##string ##.string.476) (bruijn ##.%x.400 0 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      VNULL);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      self->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k82, self)))),
      VEncodeBool(false),
      _V0error,
      VEncodePointer(&_V10_Dstring_D476.sym, VPOINTER_OTHER),
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic types ##.scope?.2) #t (bruijn ##.scope?.2.68 1 41) (close _V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81) (bruijn ##.rec.128 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings_V0k81, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##vcore.record (bruijn ##.%k.274 0 0) (bruijn ##.scope.1.69 1 42) (bruijn ##.bindings.129 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 3,
      _var0,
      statics->vars[42],
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.401) ((##vcore.record? (bruijn ##.x.130 1 1))) (if (bruijn ##.%p.401 0 0) (basic-block 2 2 (##.%x.402 ##.%r.403) ((##vcore.record-ref (bruijn ##.x.130 2 1) 0) (##vcore.eqv? (bruijn ##.%x.402 0 0) (bruijn ##.scope.1.69 3 42))) ((bruijn ##.%k.275 2 0) (bruijn ##.%r.403 0 1))) ((bruijn ##.%k.275 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VRecordP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VRecordRef2(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(0l));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[42]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 70 70 (##.%x.406 ##.%x.407 ##.%x.408 ##.%x.409 ##.%x.410 ##.%x.411 ##.%x.412 ##.%x.413 ##.%x.414 ##.%x.415 ##.%x.416 ##.%x.417 ##.%x.418 ##.%x.419 ##.%x.420 ##.%x.421 ##.%x.422 ##.%x.423 ##.%x.424 ##.%x.425 ##.%x.426 ##.%x.427 ##.%x.428 ##.%x.429 ##.%x.430 ##.%x.431 ##.%x.432 ##.%x.433 ##.%x.434 ##.%x.435 ##.%x.436 ##.%x.437 ##.%x.438 ##.%x.439 ##.%x.440 ##.%x.441 ##.%x.442 ##.%x.443 ##.%x.444 ##.%x.445 ##.%x.446 ##.%x.447 ##.%x.448 ##.%x.449 ##.%x.450 ##.%x.451 ##.%x.452 ##.%x.453 ##.%x.454 ##.%x.455 ##.%x.456 ##.%x.457 ##.%x.458 ##.%x.459 ##.%x.460 ##.%x.461 ##.%x.462 ##.%x.463 ##.%x.464 ##.%x.465 ##.%x.466 ##.%x.467 ##.%x.468 ##.%x.469 ##.%x.470 ##.%x.471 ##.%x.472 ##.%x.473 ##.%x.474 ##.%r.475) ((##vcore.cons 'make-scope (bruijn ##.make-scope.63 5 36)) (##vcore.cons 'scope? (bruijn ##.scope?.67 5 40)) (##vcore.cons 'scope=? (##intrinsic ##vcore.eq?)) (##vcore.cons 'get-scope-bindings (bruijn ##.get-scope-bindings.65 5 38)) (##vcore.cons 'set-scope-bindings! (bruijn ##.set-scope-bindings!.64 5 37)) (##vcore.cons 'global-scope (bruijn ##.global-scope.62 5 35)) (##vcore.cons 'identifier? (bruijn ##.identifier?.53 5 26)) (##vcore.cons 'get-syntax-scopes (bruijn ##.get-syntax-scopes.55 5 28)) (##vcore.cons 'set-syntax-scopes! (bruijn ##.set-syntax-scopes!.54 5 27)) (##vcore.cons 'make-syntax (bruijn ##.make-syntax.58 5 31)) (##vcore.cons 'syntax? (bruijn ##.syntax?.59 5 32)) (##vcore.cons 'get-syntax-data (bruijn ##.get-syntax-data.51 5 24)) (##vcore.cons 'set-syntax-data! (bruijn ##.set-syntax-data!.56 5 29)) (##vcore.cons 'syntax-null? (bruijn ##.syntax-null?.45 5 18)) (##vcore.cons 'syntax-pair? (bruijn ##.syntax-pair?.44 5 17)) (##vcore.cons 'syntax-cons (bruijn ##.syntax-cons.43 5 16)) (##vcore.cons 'syntax-car (bruijn ##.syntax-car.42 5 15)) (##vcore.cons 'syntax-cdr (bruijn ##.syntax-cdr.41 5 14)) (##vcore.cons 'syntax-caar (bruijn ##.syntax-caar.40 5 13)) (##vcore.cons 'syntax-cadr (bruijn ##.syntax-cadr.39 5 12)) (##vcore.cons 'syntax-cdar (bruijn ##.syntax-cdar.38 5 11)) (##vcore.cons 'syntax-cddr (bruijn ##.syntax-cddr.37 5 10)) (##vcore.cons 'syntax-map (bruijn ##.syntax-map.35 5 8)) (##vcore.cons 'syntax-for-each (bruijn ##.syntax-for-each.34 5 7)) (##vcore.cons 'syntax-list (bruijn ##.syntax-list.33 5 6)) (##vcore.cons 'syntax-caddr (bruijn ##.syntax-caddr.36 5 9)) (##vcore.cons 'syntax-vector? (bruijn ##.syntax-vector?.32 5 5)) (##vcore.cons 'syntax-vector (bruijn ##.syntax-vector.31 5 4)) (##vcore.cons 'syntax-make-vector (bruijn ##.syntax-make-vector.30 5 3)) (##vcore.cons 'syntax-vector-ref (bruijn ##.syntax-vector-ref.29 5 2)) (##vcore.cons 'syntax-vector-map (bruijn ##.syntax-vector-map.28 5 1)) (##vcore.cons 'syntax-vector-for-each (bruijn ##.syntax-vector-for-each.27 5 0)) (##vcore.cons 'lazy-flip-scope (bruijn ##.lazy-flip-scope.49 5 22)) (##vcore.cons 'eager-flip-scope (bruijn ##.eager-flip-scope.48 5 21)) (##vcore.cons 'flip-scope (bruijn ##.flip-scope.46 5 19)) (##vcore.cons (bruijn ##.%x.440 0 34) '()) (##vcore.cons (bruijn ##.%x.439 0 33) (bruijn ##.%x.441 0 35)) (##vcore.cons (bruijn ##.%x.438 0 32) (bruijn ##.%x.442 0 36)) (##vcore.cons (bruijn ##.%x.437 0 31) (bruijn ##.%x.443 0 37)) (##vcore.cons (bruijn ##.%x.436 0 30) (bruijn ##.%x.444 0 38)) (##vcore.cons (bruijn ##.%x.435 0 29) (bruijn ##.%x.445 0 39)) (##vcore.cons (bruijn ##.%x.434 0 28) (bruijn ##.%x.446 0 40)) (##vcore.cons (bruijn ##.%x.433 0 27) (bruijn ##.%x.447 0 41)) (##vcore.cons (bruijn ##.%x.432 0 26) (bruijn ##.%x.448 0 42)) (##vcore.cons (bruijn ##.%x.431 0 25) (bruijn ##.%x.449 0 43)) (##vcore.cons (bruijn ##.%x.430 0 24) (bruijn ##.%x.450 0 44)) (##vcore.cons (bruijn ##.%x.429 0 23) (bruijn ##.%x.451 0 45)) (##vcore.cons (bruijn ##.%x.428 0 22) (bruijn ##.%x.452 0 46)) (##vcore.cons (bruijn ##.%x.427 0 21) (bruijn ##.%x.453 0 47)) (##vcore.cons (bruijn ##.%x.426 0 20) (bruijn ##.%x.454 0 48)) (##vcore.cons (bruijn ##.%x.425 0 19) (bruijn ##.%x.455 0 49)) (##vcore.cons (bruijn ##.%x.424 0 18) (bruijn ##.%x.456 0 50)) (##vcore.cons (bruijn ##.%x.423 0 17) (bruijn ##.%x.457 0 51)) (##vcore.cons (bruijn ##.%x.422 0 16) (bruijn ##.%x.458 0 52)) (##vcore.cons (bruijn ##.%x.421 0 15) (bruijn ##.%x.459 0 53)) (##vcore.cons (bruijn ##.%x.420 0 14) (bruijn ##.%x.460 0 54)) (##vcore.cons (bruijn ##.%x.419 0 13) (bruijn ##.%x.461 0 55)) (##vcore.cons (bruijn ##.%x.418 0 12) (bruijn ##.%x.462 0 56)) (##vcore.cons (bruijn ##.%x.417 0 11) (bruijn ##.%x.463 0 57)) (##vcore.cons (bruijn ##.%x.416 0 10) (bruijn ##.%x.464 0 58)) (##vcore.cons (bruijn ##.%x.415 0 9) (bruijn ##.%x.465 0 59)) (##vcore.cons (bruijn ##.%x.414 0 8) (bruijn ##.%x.466 0 60)) (##vcore.cons (bruijn ##.%x.413 0 7) (bruijn ##.%x.467 0 61)) (##vcore.cons (bruijn ##.%x.412 0 6) (bruijn ##.%x.468 0 62)) (##vcore.cons (bruijn ##.%x.411 0 5) (bruijn ##.%x.469 0 63)) (##vcore.cons (bruijn ##.%x.410 0 4) (bruijn ##.%x.470 0 64)) (##vcore.cons (bruijn ##.%x.409 0 3) (bruijn ##.%x.471 0 65)) (##vcore.cons (bruijn ##.%x.408 0 2) (bruijn ##.%x.472 0 66)) (##vcore.cons (bruijn ##.%x.407 0 1) (bruijn ##.%x.473 0 67)) (##vcore.cons (bruijn ##.%x.406 0 0) (bruijn ##.%x.474 0 68))) ((bruijn ##.%k.132 10 0) (bruijn ##.%r.475 0 69)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[70]; } container;
    self = &container.self;
    VInitEnv(self, 70, 70, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0make__scope,
      VGetArg(statics, 5-1, 36));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0scope_Q,
      VGetArg(statics, 5-1, 40));
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0scope_E_Q,
      _V40_V10vcore_Deq_Q);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0get__scope__bindings,
      VGetArg(statics, 5-1, 38));
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0set__scope__bindings_B,
      VGetArg(statics, 5-1, 37));
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0global__scope,
      VGetArg(statics, 5-1, 35));
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0identifier_Q,
      VGetArg(statics, 5-1, 26));
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__scopes,
      VGetArg(statics, 5-1, 28));
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__scopes_B,
      VGetArg(statics, 5-1, 27));
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0make__syntax,
      VGetArg(statics, 5-1, 31));
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0syntax_Q,
      VGetArg(statics, 5-1, 32));
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0get__syntax__data,
      VGetArg(statics, 5-1, 24));
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      _V0set__syntax__data_B,
      VGetArg(statics, 5-1, 29));
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__null_Q,
      VGetArg(statics, 5-1, 18));
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__pair_Q,
      VGetArg(statics, 5-1, 17));
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cons,
      VGetArg(statics, 5-1, 16));
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__car,
      VGetArg(statics, 5-1, 15));
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdr,
      VGetArg(statics, 5-1, 14));
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caar,
      VGetArg(statics, 5-1, 13));
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cadr,
      VGetArg(statics, 5-1, 12));
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cdar,
      VGetArg(statics, 5-1, 11));
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__cddr,
      VGetArg(statics, 5-1, 10));
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__map,
      VGetArg(statics, 5-1, 8));
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__for__each,
      VGetArg(statics, 5-1, 7));
    self->vars[24] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__list,
      VGetArg(statics, 5-1, 6));
    self->vars[25] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__caddr,
      VGetArg(statics, 5-1, 9));
    self->vars[26] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector_Q,
      VGetArg(statics, 5-1, 5));
    self->vars[27] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector,
      VGetArg(statics, 5-1, 4));
    self->vars[28] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__make__vector,
      VGetArg(statics, 5-1, 3));
    self->vars[29] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__ref,
      VGetArg(statics, 5-1, 2));
    self->vars[30] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__map,
      VGetArg(statics, 5-1, 1));
    self->vars[31] = _VBasic_VCons2(runtime, NULL,
      _V0syntax__vector__for__each,
      VGetArg(statics, 5-1, 0));
    self->vars[32] = _VBasic_VCons2(runtime, NULL,
      _V0lazy__flip__scope,
      VGetArg(statics, 5-1, 22));
    self->vars[33] = _VBasic_VCons2(runtime, NULL,
      _V0eager__flip__scope,
      VGetArg(statics, 5-1, 21));
    self->vars[34] = _VBasic_VCons2(runtime, NULL,
      _V0flip__scope,
      VGetArg(statics, 5-1, 19));
    self->vars[35] = _VBasic_VCons2(runtime, NULL,
      self->vars[34],
      VNULL);
    self->vars[36] = _VBasic_VCons2(runtime, NULL,
      self->vars[33],
      self->vars[35]);
    self->vars[37] = _VBasic_VCons2(runtime, NULL,
      self->vars[32],
      self->vars[36]);
    self->vars[38] = _VBasic_VCons2(runtime, NULL,
      self->vars[31],
      self->vars[37]);
    self->vars[39] = _VBasic_VCons2(runtime, NULL,
      self->vars[30],
      self->vars[38]);
    self->vars[40] = _VBasic_VCons2(runtime, NULL,
      self->vars[29],
      self->vars[39]);
    self->vars[41] = _VBasic_VCons2(runtime, NULL,
      self->vars[28],
      self->vars[40]);
    self->vars[42] = _VBasic_VCons2(runtime, NULL,
      self->vars[27],
      self->vars[41]);
    self->vars[43] = _VBasic_VCons2(runtime, NULL,
      self->vars[26],
      self->vars[42]);
    self->vars[44] = _VBasic_VCons2(runtime, NULL,
      self->vars[25],
      self->vars[43]);
    self->vars[45] = _VBasic_VCons2(runtime, NULL,
      self->vars[24],
      self->vars[44]);
    self->vars[46] = _VBasic_VCons2(runtime, NULL,
      self->vars[23],
      self->vars[45]);
    self->vars[47] = _VBasic_VCons2(runtime, NULL,
      self->vars[22],
      self->vars[46]);
    self->vars[48] = _VBasic_VCons2(runtime, NULL,
      self->vars[21],
      self->vars[47]);
    self->vars[49] = _VBasic_VCons2(runtime, NULL,
      self->vars[20],
      self->vars[48]);
    self->vars[50] = _VBasic_VCons2(runtime, NULL,
      self->vars[19],
      self->vars[49]);
    self->vars[51] = _VBasic_VCons2(runtime, NULL,
      self->vars[18],
      self->vars[50]);
    self->vars[52] = _VBasic_VCons2(runtime, NULL,
      self->vars[17],
      self->vars[51]);
    self->vars[53] = _VBasic_VCons2(runtime, NULL,
      self->vars[16],
      self->vars[52]);
    self->vars[54] = _VBasic_VCons2(runtime, NULL,
      self->vars[15],
      self->vars[53]);
    self->vars[55] = _VBasic_VCons2(runtime, NULL,
      self->vars[14],
      self->vars[54]);
    self->vars[56] = _VBasic_VCons2(runtime, NULL,
      self->vars[13],
      self->vars[55]);
    self->vars[57] = _VBasic_VCons2(runtime, NULL,
      self->vars[12],
      self->vars[56]);
    self->vars[58] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      self->vars[57]);
    self->vars[59] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[58]);
    self->vars[60] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[59]);
    self->vars[61] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[60]);
    self->vars[62] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[61]);
    self->vars[63] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[62]);
    self->vars[64] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[63]);
    self->vars[65] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[64]);
    self->vars[66] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[65]);
    self->vars[67] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[66]);
    self->vars[68] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[67]);
    self->vars[69] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[68]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[69]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94) (bruijn ##.syntax-make-vector.30 4 3) (##intrinsic ##vcore.make-vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k94, self)))),
      VEncodeInt(4l), VEncodeInt(3l),
      _V40_V10vcore_Dmake__vector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93) (bruijn ##.syntax-vector.31 4 4) (##intrinsic ##vcore.vector))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k93, self)))),
      VEncodeInt(4l), VEncodeInt(4l),
      _V40_V10vcore_Dvector
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92) (bruijn ##.syntax-list.33 4 6) (bruijn ##.list.13 5 8))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k92, self)))),
      VEncodeInt(4l), VEncodeInt(6l),
      VGetArg(statics, 5-1, 8)
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91) (bruijn ##.syntax-cons.43 4 16) (##intrinsic ##vcore.cons))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k91, self)))),
      VEncodeInt(4l), VEncodeInt(16l),
      _V40_V10vcore_Dcons
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90) (bruijn ##.flip-scope.46 4 19) (bruijn ##.lazy-flip-scope.49 4 22))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k90, self)))),
      VEncodeInt(4l), VEncodeInt(19l),
      statics->up->up->up->vars[22]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89) (bruijn ##.syntax?.59 4 32) (bruijn ##.syntax?.4.60 4 33))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k89, self)))),
      VEncodeInt(4l), VEncodeInt(32l),
      statics->up->up->up->vars[33]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.405) ((##vcore.cons 'syntax '(##pair ##.pair.479))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88) (bruijn ##.syntax.3.61 4 34) (bruijn ##.%x.405 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0syntax,
      VEncodePointer(&_V10_Dpair_D479, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k88, self)))),
      VEncodeInt(4l), VEncodeInt(34l),
      self->vars[0]
    );
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87) (bruijn ##.global-scope.62 3 35) (bruijn ##.%x.348 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k87, self)))),
      VEncodeInt(3l), VEncodeInt(35l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-parameter.12 3 7) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86) (bruijn ##.%x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k86, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler hygienic types make-scope) #t (bruijn ##.make-scope.63 1 36) (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0types;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k85, self))));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types)}, 1, _arg0);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope(runtime, _closure_env, 1, _arg0);
    }
  }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84) (bruijn ##.scope?.67 1 40) (bruijn ##.scope?.2.68 1 41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k84, self)))),
      VEncodeInt(1l), VEncodeInt(40l),
      statics->vars[41]
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[9]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 9, 9, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  // (##letrec (vanity compiler hygienic types) 43 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4" (vanity compiler hygienic types)) #f #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings" (vanity compiler hygienic types)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl" (vanity compiler hygienic types)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2" (vanity compiler hygienic types)) #f) (basic-block 1 1 (##.%x.404) ((##vcore.cons 'scope '(##pair ##.pair.477))) (set! (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83) (bruijn ##.scope.1.69 1 42) (bruijn ##.%x.404 0 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[43]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0types = self;
    VInitEnv(self, 43, 43, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector__ref, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[3] = VEncodeBool(false);
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__vector_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[6] = VEncodeBool(false);
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__for__each, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__map, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cddr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cadr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__caar, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__cdr, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__car, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[16] = VEncodeBool(false);
    self->vars[17] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__pair_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[18] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__null_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[19] = VEncodeBool(false);
    self->vars[20] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0syntax__unpack, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[21] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0eager__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[22] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0lazy__flip__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[23] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0flip__scope__set, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[24] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[25] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0propogate__flips, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[26] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[27] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__scopes_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[28] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__scopes, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[29] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__syntax__data_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[30] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__syntax__data__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[31] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__syntax, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[32] = VEncodeBool(false);
    self->vars[33] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dsyntax_Q_D4, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[34] = VEncodeBool(false);
    self->vars[35] = VEncodeBool(false);
    self->vars[36] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[37] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0set__scope__bindings_B, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[38] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0get__scope__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[39] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V0make__scope__impl, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[40] = VEncodeBool(false);
    self->vars[41] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0types_V10_Dscope_Q_D2, _V60_V0vanity_V0compiler_V0hygienic_V0types))));
    self->vars[42] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0types_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0types);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0scope,
      VEncodePointer(&_V10_Dpair_D477, VPOINTER_PAIR));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k83, self)))),
      VEncodeInt(1l), VEncodeInt(42l),
      self->vars[0]
    );
    }
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2) (##string ##.string.480) (bruijn ##.%x.351 0 0) 'vector-for-each 'map 'vector-map 'any 'list? 'memq 'lset-xor 'make-parameter 'list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 12,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D480.sym, VPOINTER_OTHER),
      _var0,
      _V0vector__for__each,
      _V0map,
      _V0vector__map,
      _V0any,
      _V0list_Q,
      _V0memq,
      _V0lset__xor,
      _V0make__parameter,
      _V0list);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3) (bruijn ##.%x.352 1 0) (bruijn ##.%x.353 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2) (##string ##.string.481))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D481.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1) (##string ##.string.482))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D482.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0types_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0types_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0make__parameter = VEncodePointer(VInternSymbol(57061984, &_VW_V0make__parameter.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0list_Q = VEncodePointer(VInternSymbol(746894953, &_VW_V0list_Q.sym), VPOINTER_OTHER);
  _V0any = VEncodePointer(VInternSymbol(1273566383, &_VW_V0any.sym), VPOINTER_OTHER);
  _V0vector__map = VEncodePointer(VInternSymbol(848807183, &_VW_V0vector__map.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0vector__for__each = VEncodePointer(VInternSymbol(2135063694, &_VW_V0vector__for__each.sym), VPOINTER_OTHER);
  _V0flip__scope = VEncodePointer(VInternSymbol(-1341584941, &_VW_V0flip__scope.sym), VPOINTER_OTHER);
  _V0eager__flip__scope = VEncodePointer(VInternSymbol(-1453646135, &_VW_V0eager__flip__scope.sym), VPOINTER_OTHER);
  _V0lazy__flip__scope = VEncodePointer(VInternSymbol(24378627, &_VW_V0lazy__flip__scope.sym), VPOINTER_OTHER);
  _V0syntax__vector__for__each = VEncodePointer(VInternSymbol(1789865652, &_VW_V0syntax__vector__for__each.sym), VPOINTER_OTHER);
  _V0syntax__vector__map = VEncodePointer(VInternSymbol(-1500491324, &_VW_V0syntax__vector__map.sym), VPOINTER_OTHER);
  _V0syntax__vector__ref = VEncodePointer(VInternSymbol(1415884220, &_VW_V0syntax__vector__ref.sym), VPOINTER_OTHER);
  _V0syntax__make__vector = VEncodePointer(VInternSymbol(1757627800, &_VW_V0syntax__make__vector.sym), VPOINTER_OTHER);
  _V0syntax__vector = VEncodePointer(VInternSymbol(2095870854, &_VW_V0syntax__vector.sym), VPOINTER_OTHER);
  _V0syntax__vector_Q = VEncodePointer(VInternSymbol(-1354385234, &_VW_V0syntax__vector_Q.sym), VPOINTER_OTHER);
  _V0syntax__caddr = VEncodePointer(VInternSymbol(43375589, &_VW_V0syntax__caddr.sym), VPOINTER_OTHER);
  _V0syntax__list = VEncodePointer(VInternSymbol(-605002697, &_VW_V0syntax__list.sym), VPOINTER_OTHER);
  _V0syntax__for__each = VEncodePointer(VInternSymbol(-248708222, &_VW_V0syntax__for__each.sym), VPOINTER_OTHER);
  _V0syntax__map = VEncodePointer(VInternSymbol(-1912397961, &_VW_V0syntax__map.sym), VPOINTER_OTHER);
  _V0syntax__cddr = VEncodePointer(VInternSymbol(1072813644, &_VW_V0syntax__cddr.sym), VPOINTER_OTHER);
  _V0syntax__cdar = VEncodePointer(VInternSymbol(528412582, &_VW_V0syntax__cdar.sym), VPOINTER_OTHER);
  _V0syntax__cadr = VEncodePointer(VInternSymbol(-176119071, &_VW_V0syntax__cadr.sym), VPOINTER_OTHER);
  _V0syntax__caar = VEncodePointer(VInternSymbol(-1227349665, &_VW_V0syntax__caar.sym), VPOINTER_OTHER);
  _V0syntax__cdr = VEncodePointer(VInternSymbol(1215523264, &_VW_V0syntax__cdr.sym), VPOINTER_OTHER);
  _V0syntax__car = VEncodePointer(VInternSymbol(1390011611, &_VW_V0syntax__car.sym), VPOINTER_OTHER);
  _V0syntax__cons = VEncodePointer(VInternSymbol(-713299037, &_VW_V0syntax__cons.sym), VPOINTER_OTHER);
  _V0syntax__pair_Q = VEncodePointer(VInternSymbol(-1139867809, &_VW_V0syntax__pair_Q.sym), VPOINTER_OTHER);
  _V0syntax__null_Q = VEncodePointer(VInternSymbol(-1668028446, &_VW_V0syntax__null_Q.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0syntax_Q = VEncodePointer(VInternSymbol(563065347, &_VW_V0syntax_Q.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0scope_E_Q = VEncodePointer(VInternSymbol(-1451629464, &_VW_V0scope_E_Q.sym), VPOINTER_OTHER);
  _V0scope_Q = VEncodePointer(VInternSymbol(1860486257, &_VW_V0scope_Q.sym), VPOINTER_OTHER);
  _V0make__scope = VEncodePointer(VInternSymbol(1685021352, &_VW_V0make__scope.sym), VPOINTER_OTHER);
  _V0flips = VEncodePointer(VInternSymbol(-1883505206, &_VW_V0flips.sym), VPOINTER_OTHER);
  _V0data = VEncodePointer(VInternSymbol(1429020067, &_VW_V0data.sym), VPOINTER_OTHER);
  _V0syntax = VEncodePointer(VInternSymbol(-1845358186, &_VW_V0syntax.sym), VPOINTER_OTHER);
  _V0bindings = VEncodePointer(VInternSymbol(-448679587, &_VW_V0bindings.sym), VPOINTER_OTHER);
  _V0scope = VEncodePointer(VInternSymbol(70154970, &_VW_V0scope.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0get__syntax__data__impl = VEncodePointer(VInternSymbol(-1401117803, &_VW_V0get__syntax__data__impl.sym), VPOINTER_OTHER);
  _V0set__syntax__data_B = VEncodePointer(VInternSymbol(1171015389, &_VW_V0set__syntax__data_B.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0set__syntax__scopes_B = VEncodePointer(VInternSymbol(-1743293188, &_VW_V0set__syntax__scopes_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dcons = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcons", &_VW_V40_V10vcore_Dcons), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector", &_VW_V40_V10vcore_Dvector), VPOINTER_CLOSURE);
  _V40_V10vcore_Dmake__vector = VEncodePointer(VLookupConstant("_V40_V10vcore_Dmake__vector", &_VW_V40_V10vcore_Dmake__vector), VPOINTER_CLOSURE);
  _V10_Dpair_D479.first = _V0data;
  _V10_Dpair_D479.rest = VEncodePointer(&_V10_Dpair_D478, VPOINTER_PAIR);
  _V10_Dpair_D478.first = _V0flips;
  _V10_Dpair_D478.rest = VNULL;
  _V10_Dpair_D477.first = _V0bindings;
  _V10_Dpair_D477.rest = VNULL;
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
