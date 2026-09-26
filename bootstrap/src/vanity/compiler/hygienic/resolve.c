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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0resolve;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D359 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D358 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "_V0vanity_V0hashtable_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D357 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D356 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D355 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
VWEAK VWORD _V0make__hash__table;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0make__hash__table = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "make-hash-table" };
VWEAK VWORD _V0current__hash;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0current__hash = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "current-hash" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0set__scope__bindings_B;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0set__scope__bindings_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "set-scope-bindings!" };
VWEAK VWORD _V0explain__scopes_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0explain__scopes_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "explain-scopes\?" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0scope__set___Gstring;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0scope__set___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "scope-set->string" };
VWEAK VWORD _V0lset__xor;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0lset__xor = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "lset-xor" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0lset_L_E;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lset_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lset<=" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0length;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "length" };
VWEAK VWORD _V0get__scope__bindings;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0get__scope__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "get-scope-bindings" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0hash__table__set_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0hash__table__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "hash-table-set!" };
VWEAK VWORD _V0hash__table__ref;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0hash__table__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "hash-table-ref" };
VWEAK VWORD _V0toplevel__scope;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0toplevel__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "toplevel-scope" };
VWEAK VWORD _V0lset_E;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0lset_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "lset=" };
VWEAK VWORD _V0get__syntax__scopes;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__syntax__scopes = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-syntax-scopes" };
VWEAK VWORD _V0get__syntax__data;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0get__syntax__data = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "get-syntax-data" };
VWEAK VWORD _V0make__syntax;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0make__syntax = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "make-syntax" };
VWEAK VWORD _V0global__scope;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0global__scope = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "global-scope" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0identifier_Q;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "identifier\?" };
static struct { VBlob sym; char bytes[46]; } _V10_Dstring_D354 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 46 }, "_V0vanity_V0compiler_V0hygienic_V0resolve_V20" };
VWEAK VWORD _V0literal__keyword_Q;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0literal__keyword_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "literal-keyword\?" };
VWEAK VWORD _V0literal__identifier_E_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0literal__identifier_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "literal-identifier=\?" };
VWEAK VWORD _V0free__identifier_E_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0free__identifier_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "free-identifier=\?" };
VWEAK VWORD _V0bound__identifier_E_Q;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0bound__identifier_E_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "bound-identifier=\?" };
VWEAK VWORD _V0user__toplevel__identifier_Q;VWEAK struct { VBlob sym; char bytes[26]; } _VW_V0user__toplevel__identifier_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 26 }, "user-toplevel-identifier\?" };
VWEAK VWORD _V0binding__name;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0binding__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "binding-name" };
VWEAK VWORD _V0universe__binding_Q;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0universe__binding_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "universe-binding\?" };
VWEAK VWORD _V0register__universe__binding_B;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V0register__universe__binding_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "register-universe-binding!" };
VWEAK VWORD _V0find__exact__binding;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0find__exact__binding = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "find-exact-binding" };
VWEAK VWORD _V0resolve__identifier;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0resolve__identifier = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "resolve-identifier" };
VWEAK VWORD _V0find__all__matching__bindings;VWEAK struct { VBlob sym; char bytes[27]; } _VW_V0find__all__matching__bindings = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 27 }, "find-all-matching-bindings" };
VWEAK VWORD _V0add__binding_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0add__binding_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "add-binding!" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D353 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "use site ~A" };
static struct { VBlob sym; char bytes[10]; } _V10_Dstring_D352 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 10 }, "winner ~A" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D351 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "incomparable candidate ~A" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D350 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "ambiguous identifier" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D349 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "  use site: ~A ~A~N" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D348 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "  winner:   ~A~N" };
static struct { VBlob sym; char bytes[18]; } _V10_Dstring_D347 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 18 }, "  candidate: ~A~N" };
static struct { VBlob sym; char bytes[56]; } _V10_Dstring_D346 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 56 }, "    incomparable with winner; symmetric difference ~A~N" };
VWEAK VWORD _V40_V10vcore_Deq_Q;
VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0register__universe__binding_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic resolve literal-identifier=?) #t (bruijn ##.literal-identifier=?.41 7 1) (bruijn ##.%k.115 6 0) (bruijn ##.x.56 6 1) (bruijn ##.%x.118 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.make-syntax.4 7 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k11) (bruijn ##.sym.57 5 2) (bruijn ##.%x.119 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k11, self)))),
      VGetArg(statics, 5-1, 2),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.2 6 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k10) (bruijn ##.%x.120 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k10, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.280) ((##vcore.eq? (bruijn ##.%x.121 1 0) (bruijn ##.sym.57 3 2))) (if (bruijn ##.%p.280 0 0) ((bruijn ##.global-scope.3 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k9)) ((bruijn ##.%k.115 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k9, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.116 0 0) ((bruijn ##.get-syntax-data.5 3 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k8) (bruijn ##.x.56 1 1)) ((bruijn ##.%k.115 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k8, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.identifier?.1 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k7) (bruijn ##.x.56 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q_V0k7, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.281) ((##vcore.not (bruijn ##.binding.62 1 0))) (if (bruijn ##.%p.281 0 0) ((bruijn ##.%k.123 2 0) (bruijn ##.%p.281 0 0)) (##qualified-call (vanity compiler hygienic resolve universe-binding?) #t (bruijn ##.universe-binding?.46 5 6) (bruijn ##.%k.123 2 0) (bruijn ##.binding.62 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic resolve resolve-identifier) #t (bruijn ##.resolve-identifier.50 3 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60_V0k12) (bruijn ##.id.61 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60_V0k12, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.127 0 0) (##qualified-call (vanity compiler hygienic resolve literal-identifier=? ##.universe-level?.60) #f (bruijn ##.universe-level?.60 5 0) (bruijn ##.%k.122 6 0) (bruijn ##.b.59 6 2)) ((bruijn ##.%k.122 6 0) #f))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.282) ((##vcore.eq? (bruijn ##.%x.128 2 0) (bruijn ##.%x.129 1 0))) (if (bruijn ##.%p.282 0 0) (##qualified-call (vanity compiler hygienic resolve literal-identifier=? ##.universe-level?.60) #f (bruijn ##.universe-level?.60 4 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k16) (bruijn ##.a.58 5 1)) ((bruijn ##.%k.122 5 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k16, self))));
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.5 5 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k15) (bruijn ##.b.59 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k15, self)))),
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.125 0 0) ((bruijn ##.%k.122 2 0) (bruijn ##.%p.125 0 0)) ((bruijn ##.get-syntax-data.5 4 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k14) (bruijn ##.a.58 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k14, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60")) (##qualified-call (vanity compiler hygienic resolve free-identifier=?) #t (bruijn ##.free-identifier=?.42 2 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k13) (bruijn ##.a.58 1 1) (bruijn ##.b.59 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V10_Duniverse__level_Q_D60, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q_V0k13, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ba.131 2 0) ((bruijn ##.%k.136 0 0) (bruijn ##.ba.131 2 0)) ((bruijn ##.%k.136 0 0) (bruijn ##.bb.132 1 0)))
if(VDecodeBool(
statics->up->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.284) ((##vcore.eq? (bruijn ##.%x.134 2 0) (bruijn ##.%x.135 1 0))) ((bruijn ##.%k.130 6 0) (bruijn ##.%r.284 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.5 6 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k22) (bruijn ##.b.64 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k22, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.133 0 0) (basic-block 1 1 (##.%r.283) ((##vcore.eq? (bruijn ##.ba.131 3 0) (bruijn ##.bb.132 2 0))) ((bruijn ##.%k.130 4 0) (bruijn ##.%r.283 0 0))) ((bruijn ##.get-syntax-data.5 5 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k21) (bruijn ##.a.63 3 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k21, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k19) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k20))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k19, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k20, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic resolve resolve-identifier) #t (bruijn ##.resolve-identifier.50 2 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k18) (bruijn ##.b.64 1 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k18, self))));
    VWORD _arg1 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler hygienic resolve resolve-identifier) #t (bruijn ##.resolve-identifier.50 1 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k17) (bruijn ##.a.63 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q_V0k17, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.7 7 6) (bruijn ##.%k.137 5 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.139 1 0) (bruijn ##.%x.140 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 4,
      VGetArg(statics, 5-1, 0),
      _V40_V10vcore_Deq_Q,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 6 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k26) (bruijn ##.b.68 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k26, self)))),
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.285) ((##vcore.eq? (bruijn ##.%x.141 2 0) (bruijn ##.%x.142 1 0))) (if (bruijn ##.%p.285 0 0) ((bruijn ##.get-syntax-scopes.6 5 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k25) (bruijn ##.a.67 3 1)) ((bruijn ##.%k.137 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k25, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.5 3 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k24) (bruijn ##.b.68 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k24, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-data.5 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k23) (bruijn ##.a.67 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q_V0k23, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.7 6 6) (bruijn ##.%k.143 4 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.144 3 0) (bruijn ##.%x.145 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 6)), 4,
      statics->up->up->up->vars[0],
      _V40_V10vcore_Deq_Q,
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.2 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k30) (bruijn ##.%x.146 1 0) (bruijn ##.%x.147 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k30, self)))),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.toplevel-scope.8 4 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k29))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k29, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.global-scope.3 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k28))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k28, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-scopes.6 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k27) (bruijn ##.id.69 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q_V0k27, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.149 0 0) (bruijn ##.key.70 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.hash-table-ref.9 2 8) (bruijn ##.%k.148 0 0) (bruijn ##.universe-bindings.48 1 8) (bruijn ##.key.70 0 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name_V0lambda3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 4,
      _var0,
      statics->vars[8],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.151 0 0) ((bruijn ##.%k.150 1 0) #t) ((bruijn ##.%k.150 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.152 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.hash-table-ref.9 2 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0k31) (bruijn ##.universe-bindings.48 1 8) (bruijn ##.key.71 0 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0lambda4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[8]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0k31, self)))),
      statics->vars[8],
      _var1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0register__universe__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0register__universe__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.hash-table-set!.10 2 9) (bruijn ##.%k.153 0 0) (bruijn ##.universe-bindings.48 1 8) (bruijn ##.key.72 0 1) (bruijn ##.name.73 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[9]), 4,
      _var0,
      statics->vars[8],
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset=.7 17 6) (bruijn ##.%k.165 2 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.166 0 0) (bruijn ##.all-id-scopes.76 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 6)), 4,
      statics->up->vars[0],
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 12-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 16 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k38) (bruijn ##.%x.167 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k38, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.289 1 0) ((bruijn ##.caar.11 15 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k37) (bruijn ##.bindings.80 5 1)) ((bruijn ##.%k.165 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k37, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.162 0 0) ((bruijn ##.cdar.12 15 11) (bruijn ##.%k.159 5 0) (bruijn ##.bindings.80 5 1)) (basic-block 1 1 (##.%x.290) ((##vcore.cdr (bruijn ##.bindings.80 6 1))) (##qualified-call (vanity compiler hygienic resolve find-exact-binding ##.loop.77 ##.loop2.79) #f (bruijn ##.loop2.79 7 0) (bruijn ##.%k.159 6 0) (bruijn ##.%x.290 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 11)), 2,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 5-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.289) ((##vcore.eq? (bruijn ##.%x.168 1 0) (bruijn ##.id-sym.75 9 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k36) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k39)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k36, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k39, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-data.5 12 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k35) (bruijn ##.%x.169 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k35, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.287) ((##vcore.null? (bruijn ##.bindings.80 1 1))) (if (bruijn ##.%p.287 0 0) (basic-block 1 1 (##.%x.288) ((##vcore.cdr (bruijn ##.rest-id-scopes.78 5 1))) (##qualified-call (vanity compiler hygienic resolve find-exact-binding ##.loop.77) #f (bruijn ##.loop.77 6 0) (bruijn ##.%k.159 2 0) (bruijn ##.%x.288 0 0))) ((bruijn ##.caar.11 11 10) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k34) (bruijn ##.bindings.80 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79_V0k34, self)))),
      statics->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic resolve find-exact-binding ##.loop.77 ##.loop2.79) #f (bruijn ##.loop2.79 2 0) (bruijn ##.%k.157 4 0) (bruijn ##.%x.170 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.286) ((##vcore.null? (bruijn ##.rest-id-scopes.78 1 1))) (if (bruijn ##.%p.286 0 0) ((bruijn ##.%k.157 1 0) #f) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79")) (basic-block 1 1 (##.%x.291) ((##vcore.car (bruijn ##.rest-id-scopes.78 3 1))) ((bruijn ##.get-scope-bindings.13 10 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V0k40) (bruijn ##.%x.291 0 0))))))
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
      VEncodeBool(false));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V10_Dloop2_D79, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77_V0k40, self)))),
      self->vars[0]);
    }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.155 2 0) (bruijn ##.%x.156 1 0)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77")) (##qualified-call (vanity compiler hygienic resolve find-exact-binding ##.loop.77) #f (bruijn ##.loop.77 0 0) (bruijn ##.%k.154 4 0) (bruijn ##.all-id-scopes.76 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V10_Dloop_D77(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k33) (bruijn ##.id.74 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k33, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.5 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k32) (bruijn ##.id.74 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding_V0k32, self)))),
      _var1);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.293) ((##vcore.cdr (bruijn ##.max-id.83 1 0))) ((bruijn ##.%k.172 5 0) (bruijn ##.%r.293 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic resolve check-unambiguous) #t (bruijn ##.check-unambiguous.54 5 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k43) (bruijn ##.id.81 4 1) (bruijn ##.max-id.83 0 0) (bruijn ##.candidate-ids.82 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k43, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.length.14 8 13) (bruijn ##.%k.175 2 0) (bruijn ##.%x.176 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 13)), 2,
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.294) ((##vcore.car (bruijn ##.e.84 1 1))) ((bruijn ##.get-syntax-scopes.6 7 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k44) (bruijn ##.%x.294 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k44, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.173 1 0)) (basic-block 1 1 (##.%p.292) ((##vcore.null? (bruijn ##.candidate-ids.82 1 0))) (if (bruijn ##.%p.292 0 0) ((bruijn ##.%k.172 3 0) #f) (##qualified-call (vanity compiler hygienic resolve argmax) #t (bruijn ##.argmax.52 4 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k42) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0lambda5) (bruijn ##.candidate-ids.82 1 0)))))
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
      VEncodeBool(false));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k42, self))));
    VWORD _arg1 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0lambda5, self))));
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##qualified-call (vanity compiler hygienic resolve find-all-matching-bindings) #t (bruijn ##.find-all-matching-bindings.51 1 11) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k41) (bruijn ##.id.81 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier_V0k41, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.17 13 16) (bruijn ##.%k.181 6 0) (bruijn ##.%x.183 2 0) (bruijn ##.%x.184 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 16)), 3,
      VGetArg(statics, 6-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.297) ((##vcore.cdr (bruijn ##.rest-id-scopes.89 5 1))) (##qualified-call (vanity compiler hygienic resolve find-all-matching-bindings ##.loop.88) #f (bruijn ##.loop.88 6 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k49) (bruijn ##.%x.297 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k49, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lset<=.16 16 15) (bruijn ##.%k.186 5 0) (##intrinsic ##vcore.eq?) (bruijn ##.%x.188 0 0) (bruijn ##.all-id-scopes.87 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 15)), 4,
      VGetArg(statics, 5-1, 0),
      _V40_V10vcore_Deq_Q,
      _var0,
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.299) ((##vcore.eq? (bruijn ##.%x.190 1 0) (bruijn ##.id-sym.86 9 0))) (if (bruijn ##.%p.299 0 0) (basic-block 1 1 (##.%x.300) ((##vcore.car (bruijn ##.e.90 4 1))) ((bruijn ##.get-syntax-scopes.6 15 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k51) (bruijn ##.%x.300 0 0))) ((bruijn ##.%k.186 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k51, self)))),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.298) ((##vcore.car (bruijn ##.e.90 1 1))) ((bruijn ##.get-syntax-data.5 12 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k50) (bruijn ##.%x.298 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k50, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.15 10 14) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k48) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0lambda6) (bruijn ##.%x.192 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k48, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0lambda6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.295) ((##vcore.null? (bruijn ##.rest-id-scopes.89 1 1))) (if (bruijn ##.%p.295 0 0) ((bruijn ##.%k.181 1 0) '()) (basic-block 1 1 (##.%x.296) ((##vcore.car (bruijn ##.rest-id-scopes.89 2 1))) ((bruijn ##.get-scope-bindings.13 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k47) (bruijn ##.%x.296 0 0)))))
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
      VNULL);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88_V0k47, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.179 2 0) (bruijn ##.%x.180 1 0)) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88")) (##qualified-call (vanity compiler hygienic resolve find-all-matching-bindings ##.loop.88) #f (bruijn ##.loop.88 0 0) (bruijn ##.%k.178 4 0) (bruijn ##.all-id-scopes.87 1 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->vars[0];
    self->vars[1] = statics->vars[0];
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V10_Dloop_D88(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k46) (bruijn ##.id.85 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k46, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.get-syntax-data.5 2 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k45) (bruijn ##.id.85 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings_V0k45, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.305) ((##vcore.cdr (bruijn ##.%x.195 1 0))) ((bruijn ##.%k.194 5 0) (bruijn ##.%r.305 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.306 ##.%p.307) ((##vcore.car (bruijn ##.b.94 2 2)) (##vcore.> (bruijn ##.fa.95 1 0) (bruijn ##.%x.306 0 0))) (if (bruijn ##.%p.307 0 1) (basic-block 1 1 (##.%r.308) ((##vcore.cons (bruijn ##.fa.95 2 0) (bruijn ##.a.93 3 1))) ((bruijn ##.%k.196 3 0) (bruijn ##.%r.308 0 0))) ((bruijn ##.%k.196 2 0) (bruijn ##.b.94 2 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[2]);
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.f.91 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k54) (bruijn ##.a.93 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k54, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 3 3 (##.%x.302 ##.%x.303 ##.%x.304) ((##vcore.car (bruijn ##.xs.92 3 2)) (##vcore.cons (bruijn ##.%x.201 1 0) (bruijn ##.%x.302 0 0)) (##vcore.cdr (bruijn ##.xs.92 3 2))) ((bruijn ##.fold.18 5 17) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k53) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0lambda7) (bruijn ##.%x.303 0 1) (bruijn ##.%x.304 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 17)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k53, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0lambda7, self)))),
      self->vars[1],
      self->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%x.301) ((##vcore.car (bruijn ##.xs.92 1 2))) ((bruijn ##.f.91 1 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k52) (bruijn ##.%x.301 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax_V0k52, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.format.20 19 19) (bruijn ##.%k.207 8 0) (bruijn ##.err.99 13 0) (##string ##.string.346) (bruijn ##.%x.211 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 19)), 4,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 13-1, 0),
      VEncodePointer(&_V10_Dstring_D346.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.scope-set->string.22 18 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k68) (bruijn ##.%x.212 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k68, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.210 0 0) ((bruijn ##.%k.207 6 0) #void) ((bruijn ##.lset-xor.21 17 20) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k67) (##intrinsic ##vcore.eq?) (bruijn ##.e-scopes.102 2 0) (bruijn ##.winner-scopes.100 11 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 20)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k67, self)))),
      _V40_V10vcore_Deq_Q,
      statics->up->vars[0],
      VGetArg(statics, 11-1, 1));
}
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k65(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.lset<=.16 16 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k66) (##intrinsic ##vcore.eq?) (bruijn ##.e-scopes.102 1 0) (bruijn ##.winner-scopes.100 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 15)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k66, self)))),
      _V40_V10vcore_Deq_Q,
      statics->vars[0],
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.20 16 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k65) (bruijn ##.err.99 10 0) (##string ##.string.347) (bruijn ##.%x.213 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 19)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k65, self)))),
      VGetArg(statics, 10-1, 0),
      VEncodePointer(&_V10_Dstring_D347.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.209 1 0)) ((bruijn ##.scope-set->string.22 15 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k64) (bruijn ##.e-scopes.102 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k64, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.310) ((##vcore.eq? (bruijn ##.e.101 1 1) (bruijn ##.max-id.97 10 2))) (if (bruijn ##.%p.310 0 0) ((bruijn ##.%k.207 1 0) #void) (basic-block 1 1 (##.%x.311) ((##vcore.car (bruijn ##.e.101 2 1))) ((bruijn ##.get-syntax-scopes.6 13 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k63) (bruijn ##.%x.311 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 10-1, 2));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VVOID);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k63, self)))),
      self->vars[0]);
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k62(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.19 10 18) (bruijn ##.%k.204 8 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0lambda8) (bruijn ##.candidate-ids.98 8 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 18)), 3,
      VGetArg(statics, 8-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0lambda8, self)))),
      VGetArg(statics, 8-1, 3));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.20 10 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k62) (bruijn ##.err.99 4 0) (##string ##.string.348) (bruijn ##.%x.215 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 19)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k62, self)))),
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D348.sym, VPOINTER_OTHER),
      _var0);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k60(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.scope-set->string.22 9 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k61) (bruijn ##.winner-scopes.100 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k61, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.20 9 19) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k60) (bruijn ##.err.99 3 0) (##string ##.string.349) (bruijn ##.%x.216 2 0) (bruijn ##.%x.217 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 19)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k60, self)))),
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D349.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.scope-set->string.22 8 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k59) (bruijn ##.%x.218 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k59, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 7 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k58) (bruijn ##.id.96 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k58, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 2 ((bruijn ##.%x.205 3 0) (bruijn ##.%x.206 1 0)) ((bruijn ##.get-syntax-data.5 6 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k57) (bruijn ##.id.96 4 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = statics->up->up->vars[0];
    self->vars[1] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k57, self)))),
      statics->up->up->up->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.309) ((##vcore.car (bruijn ##.max-id.97 2 2))) ((bruijn ##.get-syntax-scopes.6 4 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k56) (bruijn ##.%x.309 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k56, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity, got ~D~N"
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
  // ((bruijn ##.current-error-port.23 2 22) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k55))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[22]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity_V0k55, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.235 1 0) (##qualified-call (vanity compiler hygienic resolve explain-ambiguity) #t (bruijn ##.explain-ambiguity.53 10 13) (bruijn ##.%k.236 0 0) (bruijn ##.id.103 9 1) (bruijn ##.max-id.104 9 2) (bruijn ##.candidate-ids.105 9 3)) ((bruijn ##.%k.236 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0resolve;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 9-1, 3);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity, _V60_V0vanity_V0compiler_V0hygienic_V0resolve)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.24 21 23) (bruijn ##.%k.222 15 0) (##string ##.string.350) (bruijn ##.%x.224 9 0) (bruijn ##.%x.225 6 0) (bruijn ##.%x.226 4 0) (bruijn ##.%x.227 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 23)), 6,
      VGetArg(statics, 15-1, 0),
      VEncodePointer(&_V10_Dstring_D350.sym, VPOINTER_OTHER),
      VGetArg(statics, 9-1, 0),
      VGetArg(statics, 6-1, 0),
      statics->up->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.25 20 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k83) (##string ##.string.351) (bruijn ##.%x.228 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 24)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k83, self)))),
      VEncodePointer(&_V10_Dstring_D351.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.scope-set->string.22 19 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k82) (bruijn ##.%x.229 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k82, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.315) ((##vcore.car (bruijn ##.e.107 12 1))) ((bruijn ##.get-syntax-scopes.6 18 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k81) (bruijn ##.%x.315 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k81, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.25 16 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k80) (##string ##.string.352) (bruijn ##.%x.231 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 24)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k80, self)))),
      VEncodePointer(&_V10_Dstring_D352.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.scope-set->string.22 15 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k79) (bruijn ##.id-scopes.106 10 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k79, self)))),
      VGetArg(statics, 10-1, 0));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.sprintf.25 14 24) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k78) (##string ##.string.353) (bruijn ##.%x.232 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 24)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k78, self)))),
      VEncodePointer(&_V10_Dstring_D353.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.scope-set->string.22 13 21) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k77) (bruijn ##.%x.233 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 21)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k77, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.get-syntax-scopes.6 12 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k76) (bruijn ##.id.103 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k76, self)))),
      VGetArg(statics, 10-1, 1));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k74(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.314) ((##vcore.car (bruijn ##.max-id.104 9 2))) ((bruijn ##.get-syntax-data.5 11 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k75) (bruijn ##.%x.314 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k75, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k73) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k74))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k73, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k74, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.223 0 0) ((bruijn ##.%k.222 3 0) #void) ((bruijn ##.explain-scopes?.26 9 25) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k72)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 25)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k72, self)))));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.lset<=.16 8 15) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k71) (##intrinsic ##vcore.eq?) (bruijn ##.%x.237 0 0) (bruijn ##.id-scopes.106 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 15)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k71, self)))),
      _V40_V10vcore_Deq_Q,
      _var0,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.313) ((##vcore.car (bruijn ##.e.107 1 1))) ((bruijn ##.get-syntax-scopes.6 7 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k70) (bruijn ##.%x.313 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k70, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((bruijn ##.%x.221 1 0)) ((bruijn ##.for-each.19 5 18) (bruijn ##.%k.220 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0lambda9) (bruijn ##.candidate-ids.105 3 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = statics->vars[0];
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 18)), 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0lambda9, self)))),
      statics->up->up->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous, got ~D~N"
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
  // (basic-block 1 1 (##.%x.312) ((##vcore.car (bruijn ##.max-id.104 1 2))) ((bruijn ##.get-syntax-scopes.6 3 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k69) (bruijn ##.%x.312 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous_V0k69, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.317 1 0) (basic-block 2 2 (##.%x.320 ##.%r.321) ((##vcore.cdr (bruijn ##.scopes.110 5 0)) (##vcore.pair? (bruijn ##.%x.320 0 0))) ((bruijn ##.%k.247 1 0) (bruijn ##.%r.321 0 1))) ((bruijn ##.%k.247 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.244 1 0) ((bruijn ##.cadr.28 8 27) (bruijn ##.%k.245 0 0) (bruijn ##.scopes.110 5 0)) ((bruijn ##.%k.245 0 0) (bruijn ##.scope.316 4 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 27)), 2,
      _var0,
      VGetArg(statics, 5-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.319) ((##vcore.cons (bruijn ##.%x.318 2 0) (bruijn ##.%x.243 1 0))) ((bruijn ##.set-scope-bindings!.27 11 26) (bruijn ##.%k.240 9 0) (bruijn ##.scope.112 3 0) (bruijn ##.%x.319 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 26)), 3,
      VGetArg(statics, 9-1, 0),
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.318) ((##vcore.cons (bruijn ##.id.108 7 1) (bruijn ##.binding.109 7 2))) ((bruijn ##.get-scope-bindings.13 9 12) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k90) (bruijn ##.scope.112 1 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k90, self)))),
      statics->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k88) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k89))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k88, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k89, self)))));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.317) ((##vcore.eq? (bruijn ##.scope.316 2 0) (bruijn ##.%x.249 1 0))) ((close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k86) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k87)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k86, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k87, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.scope.316) ((##vcore.car (bruijn ##.scopes.110 1 0))) ((bruijn ##.global-scope.3 4 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k85)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k85, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.get-syntax-scopes.6 2 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k84) (bruijn ##.id.108 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B_V0k84, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 24 24 (##.%x.322 ##.%x.323 ##.%x.324 ##.%x.325 ##.%x.326 ##.%x.327 ##.%x.328 ##.%x.329 ##.%x.330 ##.%x.331 ##.%x.332 ##.%x.333 ##.%x.334 ##.%x.335 ##.%x.336 ##.%x.337 ##.%x.338 ##.%x.339 ##.%x.340 ##.%x.341 ##.%x.342 ##.%x.343 ##.%x.344 ##.%r.345) ((##vcore.cons 'add-binding! (bruijn ##.add-binding!.55 2 15)) (##vcore.cons 'find-all-matching-bindings (bruijn ##.find-all-matching-bindings.51 2 11)) (##vcore.cons 'resolve-identifier (bruijn ##.resolve-identifier.50 2 10)) (##vcore.cons 'find-exact-binding (bruijn ##.find-exact-binding.49 2 9)) (##vcore.cons 'register-universe-binding! (bruijn ##.register-universe-binding!.47 2 7)) (##vcore.cons 'universe-binding? (bruijn ##.universe-binding?.46 2 6)) (##vcore.cons 'binding-name (bruijn ##.binding-name.45 2 5)) (##vcore.cons 'user-toplevel-identifier? (bruijn ##.user-toplevel-identifier?.44 2 4)) (##vcore.cons 'bound-identifier=? (bruijn ##.bound-identifier=?.43 2 3)) (##vcore.cons 'free-identifier=? (bruijn ##.free-identifier=?.42 2 2)) (##vcore.cons 'literal-identifier=? (bruijn ##.literal-identifier=?.41 2 1)) (##vcore.cons 'literal-keyword? (bruijn ##.literal-keyword?.40 2 0)) (##vcore.cons (bruijn ##.%x.333 0 11) '()) (##vcore.cons (bruijn ##.%x.332 0 10) (bruijn ##.%x.334 0 12)) (##vcore.cons (bruijn ##.%x.331 0 9) (bruijn ##.%x.335 0 13)) (##vcore.cons (bruijn ##.%x.330 0 8) (bruijn ##.%x.336 0 14)) (##vcore.cons (bruijn ##.%x.329 0 7) (bruijn ##.%x.337 0 15)) (##vcore.cons (bruijn ##.%x.328 0 6) (bruijn ##.%x.338 0 16)) (##vcore.cons (bruijn ##.%x.327 0 5) (bruijn ##.%x.339 0 17)) (##vcore.cons (bruijn ##.%x.326 0 4) (bruijn ##.%x.340 0 18)) (##vcore.cons (bruijn ##.%x.325 0 3) (bruijn ##.%x.341 0 19)) (##vcore.cons (bruijn ##.%x.324 0 2) (bruijn ##.%x.342 0 20)) (##vcore.cons (bruijn ##.%x.323 0 1) (bruijn ##.%x.343 0 21)) (##vcore.cons (bruijn ##.%x.322 0 0) (bruijn ##.%x.344 0 22))) ((bruijn ##.%k.114 10 0) (bruijn ##.%r.345 0 23)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[24]; } container;
    self = &container.self;
    VInitEnv(self, 24, 24, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0add__binding_B,
      statics->up->vars[15]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0find__all__matching__bindings,
      statics->up->vars[11]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0resolve__identifier,
      statics->up->vars[10]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0find__exact__binding,
      statics->up->vars[9]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0register__universe__binding_B,
      statics->up->vars[7]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0universe__binding_Q,
      statics->up->vars[6]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0binding__name,
      statics->up->vars[5]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0user__toplevel__identifier_Q,
      statics->up->vars[4]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0bound__identifier_E_Q,
      statics->up->vars[3]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0free__identifier_E_Q,
      statics->up->vars[2]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0literal__identifier_E_Q,
      statics->up->vars[1]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      _V0literal__keyword_Q,
      statics->up->vars[0]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[11],
      VNULL);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[20]);
    self->vars[22] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[21]);
    self->vars[23] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[22]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[23]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k92) (bruijn ##.universe-bindings.48 1 8) (bruijn ##.%x.273 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k92, self)))),
      VEncodeInt(1l), VEncodeInt(8l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26, VWORD _var27, VWORD _var28, VWORD _var29) {
 if(argc != 30) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda2, got ~D~N"
  "-- expected 30~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[30]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 30, 30, statics);
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
  self->vars[22] = _var22;
  self->vars[23] = _var23;
  self->vars[24] = _var24;
  self->vars[25] = _var25;
  self->vars[26] = _var26;
  self->vars[27] = _var27;
  self->vars[28] = _var28;
  self->vars[29] = _var29;
  // (##letrec (vanity compiler hygienic resolve) 16 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0register__universe__binding_B" (vanity compiler hygienic resolve)) #f (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous" (vanity compiler hygienic resolve)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B" (vanity compiler hygienic resolve))) ((bruijn ##.make-hash-table.30 1 29) (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k91) (##intrinsic ##vcore.eq?) (bruijn ##.current-hash.29 1 28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[16]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0resolve = self;
    VInitEnv(self, 16, 16, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__keyword_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0literal__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0free__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0bound__identifier_E_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0user__toplevel__identifier_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0binding__name, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0universe__binding_Q, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0register__universe__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[8] = VEncodeBool(false);
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__exact__binding, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0resolve__identifier, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0find__all__matching__bindings, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0argmax, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0explain__ambiguity, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0check__unambiguous, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0resolve_V0add__binding_B, _V60_V0vanity_V0compiler_V0hygienic_V0resolve))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0resolve_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0resolve);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[29]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k91, self)))),
      _V40_V10vcore_Deq_Q,
      statics->vars[28]);
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda2) (##string ##.string.354) (bruijn ##.%x.274 0 0) 'identifier? 'list 'global-scope 'make-syntax 'get-syntax-data 'get-syntax-scopes 'lset= 'toplevel-scope 'hash-table-ref 'hash-table-set! 'caar 'cdar 'get-scope-bindings 'length 'filter 'lset<= 'append 'fold 'for-each 'format 'lset-xor 'scope-set->string 'current-error-port 'compiler-error 'sprintf 'explain-scopes? 'set-scope-bindings! 'cadr 'current-hash 'make-hash-table)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 33,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D354.sym, VPOINTER_OTHER),
      _var0,
      _V0identifier_Q,
      _V0list,
      _V0global__scope,
      _V0make__syntax,
      _V0get__syntax__data,
      _V0get__syntax__scopes,
      _V0lset_E,
      _V0toplevel__scope,
      _V0hash__table__ref,
      _V0hash__table__set_B,
      _V0caar,
      _V0cdar,
      _V0get__scope__bindings,
      _V0length,
      _V0filter,
      _V0lset_L_E,
      _V0append,
      _V0fold,
      _V0for__each,
      _V0format,
      _V0lset__xor,
      _V0scope__set___Gstring,
      _V0current__error__port,
      _V0compiler__error,
      _V0sprintf,
      _V0explain__scopes_Q,
      _V0set__scope__bindings_B,
      _V0cadr,
      _V0current__hash,
      _V0make__hash__table);
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k6) (bruijn ##.%x.275 4 0) (bruijn ##.%x.276 3 0) (bruijn ##.%x.277 2 0) (bruijn ##.%x.278 1 0) (bruijn ##.%x.279 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 6,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k6, self)))),
      statics->up->up->up->vars[0],
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k5) (##string ##.string.355))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k5, self)))),
      VEncodePointer(&_V10_Dstring_D355.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k4) (##string ##.string.356))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D356.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k3) (##string ##.string.357))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D357.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k2) (##string ##.string.358))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D358.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k1) (##string ##.string.359))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D359.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0resolve_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0resolve_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0make__hash__table = VEncodePointer(VInternSymbol(-2146525516, &_VW_V0make__hash__table.sym), VPOINTER_OTHER);
  _V0current__hash = VEncodePointer(VInternSymbol(-1388026837, &_VW_V0current__hash.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0set__scope__bindings_B = VEncodePointer(VInternSymbol(-32175007, &_VW_V0set__scope__bindings_B.sym), VPOINTER_OTHER);
  _V0explain__scopes_Q = VEncodePointer(VInternSymbol(-133964656, &_VW_V0explain__scopes_Q.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0scope__set___Gstring = VEncodePointer(VInternSymbol(648674922, &_VW_V0scope__set___Gstring.sym), VPOINTER_OTHER);
  _V0lset__xor = VEncodePointer(VInternSymbol(1623232448, &_VW_V0lset__xor.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0lset_L_E = VEncodePointer(VInternSymbol(2095333289, &_VW_V0lset_L_E.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0length = VEncodePointer(VInternSymbol(-1077292005, &_VW_V0length.sym), VPOINTER_OTHER);
  _V0get__scope__bindings = VEncodePointer(VInternSymbol(706853436, &_VW_V0get__scope__bindings.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0hash__table__set_B = VEncodePointer(VInternSymbol(-799540310, &_VW_V0hash__table__set_B.sym), VPOINTER_OTHER);
  _V0hash__table__ref = VEncodePointer(VInternSymbol(987278019, &_VW_V0hash__table__ref.sym), VPOINTER_OTHER);
  _V0toplevel__scope = VEncodePointer(VInternSymbol(-729565561, &_VW_V0toplevel__scope.sym), VPOINTER_OTHER);
  _V0lset_E = VEncodePointer(VInternSymbol(338280255, &_VW_V0lset_E.sym), VPOINTER_OTHER);
  _V0get__syntax__scopes = VEncodePointer(VInternSymbol(1433535723, &_VW_V0get__syntax__scopes.sym), VPOINTER_OTHER);
  _V0get__syntax__data = VEncodePointer(VInternSymbol(-1271181522, &_VW_V0get__syntax__data.sym), VPOINTER_OTHER);
  _V0make__syntax = VEncodePointer(VInternSymbol(1292393424, &_VW_V0make__syntax.sym), VPOINTER_OTHER);
  _V0global__scope = VEncodePointer(VInternSymbol(1381586664, &_VW_V0global__scope.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0identifier_Q = VEncodePointer(VInternSymbol(1823737055, &_VW_V0identifier_Q.sym), VPOINTER_OTHER);
  _V0literal__keyword_Q = VEncodePointer(VInternSymbol(-160587926, &_VW_V0literal__keyword_Q.sym), VPOINTER_OTHER);
  _V0literal__identifier_E_Q = VEncodePointer(VInternSymbol(-662120349, &_VW_V0literal__identifier_E_Q.sym), VPOINTER_OTHER);
  _V0free__identifier_E_Q = VEncodePointer(VInternSymbol(727630904, &_VW_V0free__identifier_E_Q.sym), VPOINTER_OTHER);
  _V0bound__identifier_E_Q = VEncodePointer(VInternSymbol(688761204, &_VW_V0bound__identifier_E_Q.sym), VPOINTER_OTHER);
  _V0user__toplevel__identifier_Q = VEncodePointer(VInternSymbol(-1281975389, &_VW_V0user__toplevel__identifier_Q.sym), VPOINTER_OTHER);
  _V0binding__name = VEncodePointer(VInternSymbol(1103717583, &_VW_V0binding__name.sym), VPOINTER_OTHER);
  _V0universe__binding_Q = VEncodePointer(VInternSymbol(1097860348, &_VW_V0universe__binding_Q.sym), VPOINTER_OTHER);
  _V0register__universe__binding_B = VEncodePointer(VInternSymbol(490434088, &_VW_V0register__universe__binding_B.sym), VPOINTER_OTHER);
  _V0find__exact__binding = VEncodePointer(VInternSymbol(-707282992, &_VW_V0find__exact__binding.sym), VPOINTER_OTHER);
  _V0resolve__identifier = VEncodePointer(VInternSymbol(-1339332219, &_VW_V0resolve__identifier.sym), VPOINTER_OTHER);
  _V0find__all__matching__bindings = VEncodePointer(VInternSymbol(-511703733, &_VW_V0find__all__matching__bindings.sym), VPOINTER_OTHER);
  _V0add__binding_B = VEncodePointer(VInternSymbol(716197556, &_VW_V0add__binding_B.sym), VPOINTER_OTHER);
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
