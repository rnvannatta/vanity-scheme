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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0eval;

VWEAK VWORD _V0eval;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eval = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eval" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D109 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "too few args to lambda" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D108 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "too many args to lambda" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D107 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "eval: stray null" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D106 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "eval: symbol not found" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D105 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D104 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D103 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D102 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D101 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "_V0vanity_V0compiler_V0hygienic_V0eval_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0eval = VEncodePointer(VInternSymbol(-2078907041, &_VW_V0eval.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.38 5 0) (##string ##.string.101) (bruijn ##.x.39 0 0) 'map 'cadr 'caddr 'cadddr 'append 'for-each 'error 'assoc)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 11,
      VGetArg(statics, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D101.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0cadr,
      _V0caddr,
      _V0cadddr,
      _V0append,
      _V0for__each,
      _V0error,
      _V0assoc);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5) (bruijn ##.x.40 3 0) (bruijn ##.x.41 2 0) (bruijn ##.x.42 1 0) (bruijn ##.x.43 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4) (##string ##.string.102))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D102.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3) (##string ##.string.103))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D103.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2) (##string ##.string.104))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D104.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1) (##string ##.string.105))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D105.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.22 0 0) ((bruijn ##.k.45 2 0) (##inline ##vcore.cdr (bruijn ##.lookup.22 0 0))) ((bruijn ##.error.6 4 7) (bruijn ##.k.45 2 0) (##string ##.string.106) (bruijn ##.expr.20 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D106.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 6 0) (bruijn ##.k.51 3 0) (bruijn ##.x.52 2 0) (bruijn ##.x.53 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.bind-formals.19 5 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9) (bruijn ##.x.54 0 0) (bruijn ##.args.23 2 1) (bruijn ##.env.21 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, self)))),
      _var0,
      statics->up->vars[1],
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.1 5 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8) (bruijn ##.expr.20 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((bruijn ##.caddr.2 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7) (bruijn ##.expr.20 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 8 0) (bruijn ##.k.45 7 0) (bruijn ##.x.56 0 0) (bruijn ##.env.25 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      VGetArg(statics, 7-1, 0),
      _var0,
      statics->up->up->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.2 8 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16) (bruijn ##.expr.20 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.57 0 0) (bruijn ##.binding.27 0 1) (bruijn ##.val.28 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.5 8 6) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5) (bruijn ##.bindings.24 3 0) (bruijn ##.vals.26 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 8 0) (bruijn ##.k.58 1 0) (bruijn ##.x.59 0 0) (bruijn ##.env.25 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      statics->vars[0],
      _var0,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.1 8 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17) (bruijn ##.pair.29 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.0 7 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6) (bruijn ##.x.60 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.1 6 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13) (bruijn ##.expr.20 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, self)))),
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.4 5 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12) (bruijn ##.bindings.24 0 0) (bruijn ##.env.21 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, self)))),
      _var0,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.61 0 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.pair.30 0 1)) #void))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var1),
        VVOID));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.0 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7) (bruijn ##.x.63 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 5 0) (bruijn ##.k.45 4 0) (bruijn ##.x.66 0 0) (bruijn ##.env.21 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 5 0) (bruijn ##.k.45 4 0) (bruijn ##.x.67 0 0) (bruijn ##.env.21 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.65 0 0) ((bruijn ##.caddr.2 5 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20) (bruijn ##.expr.20 3 1)) ((bruijn ##.cadddr.3 5 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21) (bruijn ##.expr.20 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eval.18 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19) (bruijn ##.x.68 0 0) (bruijn ##.env.21 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, self)))),
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 4 0) (bruijn ##.k.45 3 0) (bruijn ##.x.70 0 0) (bruijn ##.env.21 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      statics->up->up->vars[0],
      _var0,
      statics->up->up->vars[2]);
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.2 4 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24) (bruijn ##.expr.20 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eval.18 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23) (bruijn ##.x.71 0 0) (bruijn ##.env.21 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23, self)))),
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.eval.18 5 0) (bruijn ##.k.45 4 0) (bruijn ##.x.73 0 0) (bruijn ##.env.21 4 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.31 0 0) ((bruijn ##.k.45 3 0) (bruijn ##.ret.31 0 0)) ((bruijn ##.caddr.2 5 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27) (bruijn ##.expr.20 3 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, self)))),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.eval.18 3 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26) (bruijn ##.x.74 0 0) (bruijn ##.env.21 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, self)))),
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.k.45 3 0) (bruijn ##.x.75 1 0) (bruijn ##.x.76 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      statics->up->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.eval.18 4 0) (bruijn ##.k.77 0 0) (bruijn ##.e.32 0 1) (bruijn ##.env.21 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      _var0,
      _var1,
      statics->up->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.0 4 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8) (##inline ##vcore.cdr (bruijn ##.expr.20 2 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda8, self)))),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.100) ((##vcore.symbol? (bruijn ##.expr.20 1 1))) (if (bruijn ##.reg.100 0 0) ((bruijn ##.assoc.7 3 8) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6) (bruijn ##.expr.20 1 1) (bruijn ##.env.21 1 2)) (if (##inline ##vcore.null? (bruijn ##.expr.20 1 1)) ((bruijn ##.error.6 3 7) (bruijn ##.k.45 1 0) (##string ##.string.107)) (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20 1 1))) ((bruijn ##.k.45 1 0) (bruijn ##.expr.20 1 1)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'quote) ((bruijn ##.cadr.1 3 2) (bruijn ##.k.45 1 0) (bruijn ##.expr.20 1 1)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'lambda) ((bruijn ##.k.45 1 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'letrec) ((bruijn ##.cadr.1 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10) (bruijn ##.expr.20 1 1)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'if) ((bruijn ##.cadr.1 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18) (bruijn ##.expr.20 1 1)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'begin) ((bruijn ##.cadr.1 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22) (bruijn ##.expr.20 1 1)) (if (##inline ##vcore.eq? (##inline ##vcore.car (bruijn ##.expr.20 1 1)) 'or) ((bruijn ##.cadr.1 3 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25) (bruijn ##.expr.20 1 1)) ((bruijn ##.eval.18 2 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28) (##inline ##vcore.car (bruijn ##.expr.20 1 1)) (bruijn ##.env.21 1 2))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, self)))),
      statics->vars[1],
      statics->vars[2]);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        statics->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D107.sym, VPOINTER_OTHER));
} else {
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        statics->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0quote))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      statics->vars[0],
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0lambda))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, self)))));
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0letrec))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, self)))),
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0if))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, self)))),
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0begin))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, self)))),
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlineEq2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _V0or))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, self)))),
      VInlineCar2(runtime,
        statics->vars[1]),
      statics->vars[2]);
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
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  // (if (##inline ##vcore.null? (bruijn ##.formals.33 0 1)) (if (##inline ##vcore.null? (bruijn ##.args.34 0 2)) ((bruijn ##.k.87 0 0) (bruijn ##.env.35 0 3)) ((bruijn ##.error.6 2 7) (bruijn ##.k.87 0 0) (##string ##.string.108))) (if (##inline ##vcore.pair? (bruijn ##.formals.33 0 1)) (if (##inline ##vcore.pair? (bruijn ##.args.34 0 2)) ((bruijn ##.bind-formals.19 1 1) (bruijn ##.k.87 0 0) (##inline ##vcore.cdr (bruijn ##.formals.33 0 1)) (##inline ##vcore.cdr (bruijn ##.args.34 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.formals.33 0 1)) (##inline ##vcore.car (bruijn ##.args.34 0 2))) (bruijn ##.env.35 0 3))) ((bruijn ##.error.6 2 7) (bruijn ##.k.87 0 0) (##string ##.string.109))) ((bruijn ##.k.87 0 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.formals.33 0 1) (bruijn ##.args.34 0 2)) (bruijn ##.env.35 0 3)))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var3);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D108.sym, VPOINTER_OTHER));
}
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
if(VDecodeBool(
VInlinePairP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 4,
      _var0,
      VInlineCdr2(runtime,
        _var1),
      VInlineCdr2(runtime,
        _var2),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var1),
        VInlineCar2(runtime,
        _var2)),
        _var3));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D109.sym, VPOINTER_OTHER));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var1,
        _var2),
        _var3));
}
}
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity compiler hygienic eval) 2 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval" (vanity compiler hygienic eval)) (close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals" (vanity compiler hygienic eval))) ((bruijn ##.k.44 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'eval (bruijn ##.eval.18 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0eval = self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0eval_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0eval);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0eval,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.37 0 0) (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2) (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0eval_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1;
