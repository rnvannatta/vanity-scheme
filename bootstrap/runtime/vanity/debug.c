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

V_DECLARE_FUNC(VSignalingProcedure, _var0);
V_DECLARE_FUNC_BASIC(VClosureSet, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(VSignalingArguments, _var0);
V_DECLARE_FUNC_BASIC(VGetProcDebugInfo, _var0);
V_DECLARE_FUNC_BASIC(VClosureRef, _var0, _var1, _var2);
V_DECLARE_FUNC_BASIC(VClosureEnvFrameLength, _var0, _var1);
V_DECLARE_FUNC_BASIC(VClosureEnvDepth, _var0);
V_DECLARE_FUNC_MIN(VMultiImport, _var0, _var1, _var2);

VEnv * _V60_V0vanity_V0debug;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D258 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0vector___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0vector___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "vector->list" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0current__output__port;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0current__output__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "current-output-port" };
static struct { VBlob sym; char bytes[22]; } _V10_Dstring_D257 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 22 }, "_V0vanity_V0debug_V20" };
VWEAK VWORD _V0current__signaling__arguments;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0current__signaling__arguments = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "current-signaling-arguments" };
VWEAK VWORD _V40VSignalingProcedure;
VWEAK VClosure _VW_V40VSignalingProcedure = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSignalingProcedure, NULL };
VWEAK VWORD _V0current__signaling__procedure;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0current__signaling__procedure = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "current-signaling-procedure" };
VWEAK VWORD _V0closure__bt;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0closure__bt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "closure-bt" };
VWEAK VWORD _V0closure__env;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0closure__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "closure-env" };
VWEAK VWORD _V0closure__env__frame__length;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0closure__env__frame__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "closure-env-frame-length" };
VWEAK VWORD _V0closure__env__depth;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0closure__env__depth = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "closure-env-depth" };
VWEAK VWORD _V40VClosureSet;
VWEAK VClosure _VW_V40VClosureSet = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureSet, NULL };
VWEAK VWORD _V0closure__set_B;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0closure__set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "closure-set!" };
VWEAK VWORD _V0closure__ref;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0closure__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "closure-ref" };
VWEAK VWORD _V0closure__formals;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0closure__formals = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "closure-formals" };
VWEAK VWORD _V0closure__name;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0closure__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "closure-name" };
VWEAK VWORD _V0closure__debug__info;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0closure__debug__info = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "closure-debug-info" };
VWEAK VWORD _V40VSignalingArguments;
VWEAK VClosure _VW_V40VSignalingArguments = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSignalingArguments, NULL };
static VPair _V10_Dpair_D256 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Q;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "\?" };
VWEAK VWORD _V40VGetProcDebugInfo;
VWEAK VClosure _VW_V40VGetProcDebugInfo = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGetProcDebugInfo, NULL };
static struct { VBlob sym; char bytes[14]; } _V10_Dstring_D255 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 14 }, "##closure~S~N" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D254 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "~A: " };
VWEAK VWORD _V40VClosureRef;
VWEAK VClosure _VW_V40VClosureRef = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureRef, NULL };
VWEAK VWORD _V40VClosureEnvFrameLength;
VWEAK VClosure _VW_V40VClosureEnvFrameLength = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureEnvFrameLength, NULL };
VWEAK VWORD _V40VClosureEnvDepth;
VWEAK VClosure _VW_V40VClosureEnvDepth = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VClosureEnvDepth, NULL };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0current__signaling__arguments, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__name, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__formals, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env__names, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__env, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0debug_V0closure__bt__impl, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0debug_V0closure__bt);
static void _V10_Dclosure__bt_D67_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dclosure__bt_D67_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 2 1) (bruijn ##.%k.120 1 0) (bruijn ##.proc.74 1 1) (bruijn ##.%x.121 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0debug_V0closure__bt" #t #f (2 ((bruijn ##.current-output-port.44 2 0) (close _V10_Dclosure__bt_D67_V0k3))) (3 (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 1 1) (bruijn ##.%k.122 0 0) (bruijn ##.proc.75 0 1) (bruijn ##.port.76 0 2))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt, got ~D~N"
 "-- expected 2~N"
 "-- expected 3~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-output-port.44 2 0) (close _V10_Dclosure__bt_D67_V0k3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dclosure__bt_D67_V0k3, self)))));
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
  // (##qualified-call (vanity debug closure-bt-impl) #t (bruijn ##.closure-bt-impl.68 1 1) (bruijn ##.%k.122 0 0) (bruijn ##.proc.75 0 1) (bruijn ##.port.76 0 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      _var2;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0debug_V0closure__bt, @function\n"
#endif
".globl _V50_V0vanity_V0debug_V0closure__bt\n"
"_V50_V0vanity_V0debug_V0closure__bt:\n"
"    cmp " ARGC_REG ", 2\n"
"    je _V20Case0__V50_V0vanity_V0debug_V0closure__bt\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case1__V50_V0vanity_V0debug_V0closure__bt\n"
"    jmp _V20CaseError__V50_V0vanity_V0debug_V0closure__bt\n"
);
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.200 1 0) (basic-block 1 1 (##.%r.215) ((##vcore.car (bruijn ##.env-names.83 4 2))) ((bruijn ##.%k.147 1 0) (bruijn ##.%r.215 0 0))) ((bruijn ##.%k.147 0 0) '()))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.203 1 0) (basic-block 1 1 (##.%r.211) ((##vcore.car (bruijn ##.names.91 4 2))) ((bruijn ##.%k.145 1 0) (bruijn ##.%r.211 0 0))) ((bruijn ##.%k.145 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.207 1 3) (set! (bruijn ##.%k.140 0 0) (bruijn ##.collect-acc.35.87 8 0) (bruijn ##.*node*.206 1 2)) (##vcore.set-cdr! (bruijn ##.%k.140 0 0) (bruijn ##.collect-acc.35-tail.43.86 9 0) (bruijn ##.*node*.206 1 2)))
if(VDecodeBool(
statics->vars[3])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(8l), VEncodeInt(0l),
      statics->vars[2]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 9-1, 0),
      statics->vars[2]);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.209 1 1) (basic-block 1 1 (##.%r.210) ((##vcore.cdr (bruijn ##.names.91 7 2))) ((bruijn ##.%k.138 1 0) (bruijn ##.%r.210 0 0))) ((bruijn ##.%k.138 0 0) '()))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.loop.33.89) #f (bruijn ##.loop.33.89 7 0) (bruijn ##.%k.133 6 0) (bruijn ##.%x.208 1 0) (bruijn ##.%x.136 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.208 ##.%p.209) ((##vcore.+ (bruijn ##.j.90 5 1) 1) (##vcore.pair? (bruijn ##.names.91 5 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k15, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k16, self)))));
    }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14) (bruijn ##.collect-acc.35-tail.43.86 8 0) (bruijn ##.*node*.206 0 2))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k14, self)))),
      VEncodeInt(8l), VEncodeInt(0l),
      self->vars[2]
    );
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 4 4 (##.%x.204 ##.%x.205 ##.*node*.206 ##.%p.207) (((##basic-intrinsic "VClosureRef") (bruijn ##.proc.77 20 1) (bruijn ##.i.82 13 1) (bruijn ##.j.90 4 1)) (##vcore.cons (bruijn ##.%x.142 1 0) (bruijn ##.%x.204 0 0)) (##vcore.cons (bruijn ##.%x.205 0 1) '()) (##vcore.null? (bruijn ##.collect-acc.35-tail.43.86 8 0))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VClosureRef(runtime, NULL,
      VGetArg(statics, 20-1, 1),
      VGetArg(statics, 13-1, 1),
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      VNULL);
    self->vars[3] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 8-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k13, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.202) ((##vcore.< (bruijn ##.j.90 1 1) (bruijn ##.y.42.201 6 0))) (if (bruijn ##.%p.202 0 0) (basic-block 1 1 (##.%p.203) ((##vcore.pair? (bruijn ##.names.91 2 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11))) (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.finalize.34.88) #f (bruijn ##.finalize.34.88 3 0) (bruijn ##.%k.133 1 0) (bruijn ##.collect-acc.35.87 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k10, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89_V0k11, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.213 1 1) (basic-block 1 1 (##.%r.214) ((##vcore.cdr (bruijn ##.env-names.83 12 2))) ((bruijn ##.%k.130 1 0) (bruijn ##.%r.214 0 0))) ((bruijn ##.%k.130 0 0) '()))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 2));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81) #f (bruijn ##.loop.23.81 12 0) (bruijn ##.%k.125 11 0) (bruijn ##.%x.212 1 0) (bruijn ##.%x.128 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 11-1, 0);
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 2 2 (##.%x.212 ##.%p.213) ((##vcore.+ (bruijn ##.i.82 10 1) 1) (##vcore.pair? (bruijn ##.env-names.83 10 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 10-1, 2));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k21, self)))));
    }
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.newline.45 18 1) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19) (bruijn ##.port.78 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k19, self)))),
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.write.46 18 2) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18) (bruijn ##.%x.131 0 0) (bruijn ##.port.78 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k18, self)))),
      _var0,
      VGetArg(statics, 16-1, 2));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89")) (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81 ##.loop.33.89) #f (bruijn ##.loop.33.89 0 0) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17) 0 (bruijn ##.frame-names.84 5 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k17, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      VGetArg(statics, 5-1, 0);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dloop_D33_D89(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.132 0 0) (bruijn ##.collect-acc.35.93 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6) (close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V10_Dfinalize_D34_D88, self)))));
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda5, self)), 1,
      VNULL);
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.y.42.201) (((##basic-intrinsic "VClosureEnvFrameLength") (bruijn ##.proc.77 11 1) (bruijn ##.i.82 4 1))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda4) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvFrameLength(runtime, NULL,
      VGetArg(statics, 11-1, 1),
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0lambda4, self)), 1,
      VNULL);
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.47 12 3) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9) (bruijn ##.port.78 10 2) (##string ##.string.254) (bruijn ##.i.82 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 3)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k9, self)))),
      VGetArg(statics, 10-1, 2),
      VEncodePointer(&_V10_Dstring_D254.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.199) ((##vcore.< (bruijn ##.i.82 1 1) (bruijn ##.y.32.198 4 0))) (if (bruijn ##.%p.199 0 0) (basic-block 1 1 (##.%p.200) ((##vcore.pair? (bruijn ##.env-names.83 2 2))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8))) (##qualified-call (vanity debug closure-bt-impl ##.finalize.24.80) #f (bruijn ##.finalize.24.80 3 0) (bruijn ##.%k.125 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k7, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81_V0k8, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 1, _arg0);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity debug closure-bt-impl ##.loop.23.81) #f (bruijn ##.loop.23.81 1 0) (bruijn ##.%k.123 7 0) 0 (bruijn ##.%x.148 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 7-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81")) (##qualified-call (vanity debug closure-env-names) #t (bruijn ##.closure-env-names.70 7 3) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k22) (bruijn ##.proc.77 6 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dloop_D23_D81, self))));
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k22, self))));
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env__names(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.124 0 0) #void)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
}
static void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.y.32.198) (((##basic-intrinsic "VClosureEnvDepth") (bruijn ##.proc.77 4 1))) ((close _V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda3) (close "_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvDepth(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0lambda3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V10_Dfinalize_D24_D80, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.197) ((##vcore.cons (bruijn ##.%x.150 2 0) (bruijn ##.%x.151 1 0))) ((bruijn ##.format.47 5 3) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k6) (bruijn ##.port.78 3 2) (##string ##.string.255) (bruijn ##.%x.197 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k6, self)))),
      statics->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D255.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity debug closure-formals) #t (bruijn ##.closure-formals.71 2 4) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k5) (bruijn ##.proc.77 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__formals, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__formals(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__bt__impl(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__bt__impl, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity debug closure-name) #t (bruijn ##.closure-name.72 1 5) (close _V50_V0vanity_V0debug_V0closure__bt__impl_V0k4) (bruijn ##.proc.77 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0debug;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl_V0k4, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__name, _V60_V0vanity_V0debug)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__name(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.222 1 2) (set! (bruijn ##.%k.165 0 0) (bruijn ##.collect-acc.14.104 6 0) (bruijn ##.*node*.221 1 1)) (##vcore.set-cdr! (bruijn ##.%k.165 0 0) (bruijn ##.collect-acc.14-tail.22.103 7 0) (bruijn ##.*node*.221 1 1)))
if(VDecodeBool(
statics->vars[2])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(6l), VEncodeInt(0l),
      statics->vars[1]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 7-1, 0),
      statics->vars[1]);
}
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.223) ((##vcore.+ (bruijn ##.j.107 3 1) 1)) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.loop.12.106) #f (bruijn ##.loop.12.106 4 0) (bruijn ##.%k.161 3 0) (bruijn ##.%x.223 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->vars[1],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25) (bruijn ##.collect-acc.14-tail.22.103 6 0) (bruijn ##.*node*.221 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k25, self)))),
      VEncodeInt(6l), VEncodeInt(0l),
      self->vars[1]
    );
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.219) ((##vcore.< (bruijn ##.j.107 1 1) (bruijn ##.y.21.218 6 0))) (if (bruijn ##.%p.219 0 0) (basic-block 3 3 (##.%x.220 ##.*node*.221 ##.%p.222) (((##basic-intrinsic "VClosureRef") (bruijn ##.proc.94 15 1) (bruijn ##.i.100 9 1) (bruijn ##.j.107 2 1)) (##vcore.cons (bruijn ##.%x.220 0 0) '()) (##vcore.null? (bruijn ##.collect-acc.14-tail.22.103 6 0))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24))) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.finalize.13.105) #f (bruijn ##.finalize.13.105 3 0) (bruijn ##.%k.161 1 0) (bruijn ##.collect-acc.14.104 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VClosureRef(runtime, NULL,
      VGetArg(statics, 15-1, 1),
      VGetArg(statics, 9-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k23, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106_V0k24, self)))));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.225 1 1) (set! (bruijn ##.%k.158 0 0) (bruijn ##.collect-acc.3.97 12 0) (bruijn ##.*node*.224 1 0)) (##vcore.set-cdr! (bruijn ##.%k.158 0 0) (bruijn ##.collect-acc.3-tail.11.96 13 0) (bruijn ##.*node*.224 1 0)))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(12l), VEncodeInt(0l),
      statics->vars[0]
    );
} else {
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      VGetArg(statics, 13-1, 0),
      statics->vars[0]);
}
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.226) ((##vcore.+ (bruijn ##.i.100 9 1) 1)) (##qualified-call (vanity debug closure-env ##.loop.1.99) #f (bruijn ##.loop.1.99 10 0) (bruijn ##.%k.154 9 0) (bruijn ##.%x.226 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29) (bruijn ##.collect-acc.3-tail.11.96 12 0) (bruijn ##.*node*.224 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k29, self)))),
      VEncodeInt(12l), VEncodeInt(0l),
      self->vars[0]
    );
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.*node*.224 ##.%p.225) ((##vcore.cons (bruijn ##.%x.159 1 0) '()) (##vcore.null? (bruijn ##.collect-acc.3-tail.11.96 12 0))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VNULL);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 12-1, 0));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k28, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106")) (##qualified-call (vanity debug closure-env ##.loop.1.99 ##.loop.12.106) #f (bruijn ##.loop.12.106 0 0) (close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0k26, self))));
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dloop_D12_D106(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.160 0 0) (bruijn ##.collect-acc.14.109 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12) (close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda12, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V10_Dfinalize_D13_D105, self)))));
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda11, self)), 1,
      VNULL);
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.217) ((##vcore.< (bruijn ##.i.100 1 1) (bruijn ##.y.10.216 6 0))) (if (bruijn ##.%p.217 0 0) (basic-block 1 1 (##.y.21.218) (((##basic-intrinsic "VClosureEnvFrameLength") (bruijn ##.proc.94 8 1) (bruijn ##.i.100 2 1))) ((close _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda10) '())) (##qualified-call (vanity debug closure-env ##.finalize.2.98) #f (bruijn ##.finalize.2.98 3 0) (bruijn ##.%k.154 1 0) (bruijn ##.collect-acc.3.97 4 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      VGetArg(statics, 6-1, 0));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvFrameLength(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99_V0lambda10, self)), 1,
      VNULL);
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99")) (##qualified-call (vanity debug closure-env ##.loop.1.99) #f (bruijn ##.loop.1.99 0 0) (bruijn ##.%k.152 5 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0debug_V0closure__env_V10_Dloop_D1_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.%k.153 0 0) (bruijn ##.collect-acc.3.110 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda9) (close "_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V10_Dfinalize_D2_D98, self)))));
}
void _V50_V0vanity_V0debug_V0closure__env_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda8) '())
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda8, self)), 1,
      VNULL);
}
void _V50_V0vanity_V0debug_V0closure__env(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.y.10.216) (((##basic-intrinsic "VClosureEnvDepth") (bruijn ##.proc.94 1 1))) ((close _V50_V0vanity_V0debug_V0closure__env_V0lambda7) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VClosureEnvDepth(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env_V0lambda7, self)), 1,
      VNULL);
    }
}
void _V50_V0vanity_V0debug_V0closure__env__names_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.227 1 0) (basic-block 2 2 (##.%x.228 ##.%r.229) ((##vcore.cdr (bruijn ##.ret.227 2 0)) (##vcore.pair? (bruijn ##.%x.228 0 0))) ((bruijn ##.%k.169 1 0) (bruijn ##.%r.229 0 1))) ((bruijn ##.%k.169 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
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
void _V50_V0vanity_V0debug_V0closure__env__names_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.168 0 0) ((bruijn ##.cadr.48 4 4) (bruijn ##.%k.167 2 0) (bruijn ##.ret.227 1 0)) ((bruijn ##.%k.167 2 0) '()))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      statics->up->vars[0],
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
void _V50_V0vanity_V0debug_V0closure__env__names(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__env__names, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.227) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.111 1 1))) ((close _V50_V0vanity_V0debug_V0closure__env__names_V0k30) (close _V50_V0vanity_V0debug_V0closure__env__names_V0k31)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k30, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names_V0k31, self)))));
    }
}
void _V50_V0vanity_V0debug_V0closure__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__formals, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.230) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.113 1 1))) (if (bruijn ##.ret.230 0 0) ((bruijn ##.cdar.49 3 5) (bruijn ##.%k.171 1 0) (bruijn ##.ret.230 0 0)) ((bruijn ##.%k.171 1 0) '(##pair ##.pair.256))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      statics->vars[0],
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dpair_D256, VPOINTER_PAIR));
}
    }
}
void _V50_V0vanity_V0debug_V0closure__name(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0closure__name, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.ret.231) (((##basic-intrinsic "VGetProcDebugInfo") (bruijn ##.proc.115 1 1))) (if (bruijn ##.ret.231 0 0) ((bruijn ##.caar.50 3 6) (bruijn ##.%k.172 1 0) (bruijn ##.ret.231 0 0)) ((bruijn ##.%k.172 1 0) '?)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VGetProcDebugInfo(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 2,
      statics->vars[0],
      self->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _V0_Q);
}
    }
}
void _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.ret.117 0 0) ((bruijn ##.vector->list.51 3 7) (bruijn ##.%k.173 1 0) (bruijn ##.ret.117 0 0)) ((bruijn ##.%k.173 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[7]), 2,
      statics->vars[0],
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0debug_V0current__signaling__arguments(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0debug_V0current__signaling__arguments, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VSignalingArguments") (close _V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32))
    VCallFuncWithGC(runtime, (VFunc)VSignalingArguments, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments_V0k32, self)))));
}
static void _V0vanity_V0debug_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 if(argc != 8) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0lambda2, got ~D~N"
  "-- expected 8~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[8]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 8, 8, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  // (##letrec (vanity debug) 7 ((close "_V50_V0vanity_V0debug_V0closure__bt" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__bt__impl" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__env" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__env__names" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__formals" (vanity debug)) (close "_V50_V0vanity_V0debug_V0closure__name" (vanity debug)) (close "_V50_V0vanity_V0debug_V0current__signaling__arguments" (vanity debug))) (basic-block 22 22 (##.%x.232 ##.%x.233 ##.%x.234 ##.%x.235 ##.%x.236 ##.%x.237 ##.%x.238 ##.%x.239 ##.%x.240 ##.%x.241 ##.%x.242 ##.%x.243 ##.%x.244 ##.%x.245 ##.%x.246 ##.%x.247 ##.%x.248 ##.%x.249 ##.%x.250 ##.%x.251 ##.%x.252 ##.%r.253) ((##vcore.cons 'closure-debug-info (##basic-intrinsic "VGetProcDebugInfo")) (##vcore.cons 'closure-name (bruijn ##.closure-name.72 1 5)) (##vcore.cons 'closure-formals (bruijn ##.closure-formals.71 1 4)) (##vcore.cons 'closure-ref (##basic-intrinsic "VClosureRef")) (##vcore.cons 'closure-set! (##basic-intrinsic "VClosureSet")) (##vcore.cons 'closure-env-depth (##basic-intrinsic "VClosureEnvDepth")) (##vcore.cons 'closure-env-frame-length (##basic-intrinsic "VClosureEnvFrameLength")) (##vcore.cons 'closure-env (bruijn ##.closure-env.69 1 2)) (##vcore.cons 'closure-bt (bruijn ##.closure-bt.67 1 0)) (##vcore.cons 'current-signaling-procedure (##intrinsic "VSignalingProcedure")) (##vcore.cons 'current-signaling-arguments (bruijn ##.current-signaling-arguments.73 1 6)) (##vcore.cons (bruijn ##.%x.242 0 10) '()) (##vcore.cons (bruijn ##.%x.241 0 9) (bruijn ##.%x.243 0 11)) (##vcore.cons (bruijn ##.%x.240 0 8) (bruijn ##.%x.244 0 12)) (##vcore.cons (bruijn ##.%x.239 0 7) (bruijn ##.%x.245 0 13)) (##vcore.cons (bruijn ##.%x.238 0 6) (bruijn ##.%x.246 0 14)) (##vcore.cons (bruijn ##.%x.237 0 5) (bruijn ##.%x.247 0 15)) (##vcore.cons (bruijn ##.%x.236 0 4) (bruijn ##.%x.248 0 16)) (##vcore.cons (bruijn ##.%x.235 0 3) (bruijn ##.%x.249 0 17)) (##vcore.cons (bruijn ##.%x.234 0 2) (bruijn ##.%x.250 0 18)) (##vcore.cons (bruijn ##.%x.233 0 1) (bruijn ##.%x.251 0 19)) (##vcore.cons (bruijn ##.%x.232 0 0) (bruijn ##.%x.252 0 20))) ((bruijn ##.%k.119 5 0) (bruijn ##.%r.253 0 21))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0debug = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt, _V60_V0vanity_V0debug))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__bt__impl, _V60_V0vanity_V0debug))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env, _V60_V0vanity_V0debug))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__env__names, _V60_V0vanity_V0debug))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__formals, _V60_V0vanity_V0debug))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0closure__name, _V60_V0vanity_V0debug))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0debug_V0current__signaling__arguments, _V60_V0vanity_V0debug))));
    VRegisterStaticEnv("_V0vanity_V0debug_V20", &_V60_V0vanity_V0debug);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0closure__debug__info,
      _V40VGetProcDebugInfo);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0closure__name,
      statics->vars[5]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0closure__formals,
      statics->vars[4]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0closure__ref,
      _V40VClosureRef);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0closure__set_B,
      _V40VClosureSet);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env__depth,
      _V40VClosureEnvDepth);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env__frame__length,
      _V40VClosureEnvFrameLength);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0closure__env,
      statics->vars[2]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0closure__bt,
      statics->vars[0]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0current__signaling__procedure,
      _V40VSignalingProcedure);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0current__signaling__arguments,
      statics->vars[6]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[10],
      VNULL);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[9],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[8],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[14]);
    self->vars[16] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[15]);
    self->vars[17] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[16]);
    self->vars[18] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[17]);
    self->vars[19] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[18]);
    self->vars[20] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[19]);
    self->vars[21] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[20]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[21]);
    }
    }
}
static void _V0vanity_V0debug_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0debug_V20_V0lambda2) (##string ##.string.257) (bruijn ##.%x.195 0 0) 'current-output-port 'newline 'write 'format 'cadr 'cdar 'caar 'vector->list)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 11,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D257.sym, VPOINTER_OTHER),
      _var0,
      _V0current__output__port,
      _V0newline,
      _V0write,
      _V0format,
      _V0cadr,
      _V0cdar,
      _V0caar,
      _V0vector___Glist);
}
static void _V0vanity_V0debug_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0debug_V20_V0k2) (bruijn ##.%x.196 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0debug_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0debug_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0debug_V20_V0k1) (##string ##.string.258))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0debug_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D258.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0debug_V20 = (VFunc)_V0vanity_V0debug_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0vector___Glist = VEncodePointer(VInternSymbol(45656078, &_VW_V0vector___Glist.sym), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VInternSymbol(-610927850, &_VW_V0caar.sym), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VInternSymbol(-1104539071, &_VW_V0cdar.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V0current__output__port = VEncodePointer(VInternSymbol(-743992098, &_VW_V0current__output__port.sym), VPOINTER_OTHER);
  _V0current__signaling__arguments = VEncodePointer(VInternSymbol(728005863, &_VW_V0current__signaling__arguments.sym), VPOINTER_OTHER);
  _V0current__signaling__procedure = VEncodePointer(VInternSymbol(-1476053499, &_VW_V0current__signaling__procedure.sym), VPOINTER_OTHER);
  _V0closure__bt = VEncodePointer(VInternSymbol(-151716283, &_VW_V0closure__bt.sym), VPOINTER_OTHER);
  _V0closure__env = VEncodePointer(VInternSymbol(87458653, &_VW_V0closure__env.sym), VPOINTER_OTHER);
  _V0closure__env__frame__length = VEncodePointer(VInternSymbol(1229895409, &_VW_V0closure__env__frame__length.sym), VPOINTER_OTHER);
  _V0closure__env__depth = VEncodePointer(VInternSymbol(-132698800, &_VW_V0closure__env__depth.sym), VPOINTER_OTHER);
  _V0closure__set_B = VEncodePointer(VInternSymbol(494063380, &_VW_V0closure__set_B.sym), VPOINTER_OTHER);
  _V0closure__ref = VEncodePointer(VInternSymbol(-1565626523, &_VW_V0closure__ref.sym), VPOINTER_OTHER);
  _V0closure__formals = VEncodePointer(VInternSymbol(-2003601406, &_VW_V0closure__formals.sym), VPOINTER_OTHER);
  _V0closure__name = VEncodePointer(VInternSymbol(1061393102, &_VW_V0closure__name.sym), VPOINTER_OTHER);
  _V0closure__debug__info = VEncodePointer(VInternSymbol(1339176764, &_VW_V0closure__debug__info.sym), VPOINTER_OTHER);
  _V0_Q = VEncodePointer(VInternSymbol(1576491780, &_VW_V0_Q.sym), VPOINTER_OTHER);
  _V40VSignalingProcedure = VEncodePointer(VLookupConstant("_V40VSignalingProcedure", &_VW_V40VSignalingProcedure), VPOINTER_CLOSURE);
  _V40VClosureSet = VEncodePointer(VLookupConstant("_V40VClosureSet", &_VW_V40VClosureSet), VPOINTER_CLOSURE);
  _V40VSignalingArguments = VEncodePointer(VLookupConstant("_V40VSignalingArguments", &_VW_V40VSignalingArguments), VPOINTER_CLOSURE);
  _V10_Dpair_D256.first = _V0_Q;
  _V10_Dpair_D256.rest = VNULL;
  _V40VGetProcDebugInfo = VEncodePointer(VLookupConstant("_V40VGetProcDebugInfo", &_VW_V40VGetProcDebugInfo), VPOINTER_CLOSURE);
  _V40VClosureRef = VEncodePointer(VLookupConstant("_V40VClosureRef", &_VW_V40VClosureRef), VPOINTER_CLOSURE);
  _V40VClosureEnvFrameLength = VEncodePointer(VLookupConstant("_V40VClosureEnvFrameLength", &_VW_V40VClosureEnvFrameLength), VPOINTER_CLOSURE);
  _V40VClosureEnvDepth = VEncodePointer(VLookupConstant("_V40VClosureEnvDepth", &_VW_V40VClosureEnvDepth), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
