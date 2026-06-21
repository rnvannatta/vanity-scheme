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

VEnv * _V60_V0vanity_V0assert;

static VPair _V10_Dpair_D109 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D108 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D107 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D106 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D105 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D104 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D103 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0loop;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0loop = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "loop" };
static VPair _V10_Dpair_D102 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D101 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D100 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D99 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D98 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D97 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D96 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D95 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V10_Dloop_D14;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V10_Dloop_D14 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "##.loop.14" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D94 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "Assertion failed: ~A is not equal to ~A\n" };
static VPair _V10_Dpair_D93 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D92 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D91 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D90 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D89 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D88 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static VPair _V10_Dpair_D87 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D86 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D85 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D84 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D83 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mp;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mp = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%p" };
static VPair _V10_Dpair_D82 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D81 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D80 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D79 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D78 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D77 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D76 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D75 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D74 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D73 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D72 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D71 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0rest;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0rest = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "rest" };
static VPair _V10_Dpair_D70 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D69 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D68 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0y;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0y = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "y" };
VWEAK VWORD _V0x;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0x = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "x" };
static VPair _V10_Dpair_D67 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D66 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D65 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0assert__equal;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0assert__equal = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "assert-equal" };
VWEAK VWORD _V0assert;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0assert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "assert" };
VWEAK VWORD _V0vanity;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0vanity = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "vanity" };
static VPair _V10_Dpair_D64 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D63 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D62 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D61 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D60 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D59 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D58 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D57 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D56 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "_V0vanity_V0assert_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D55 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D54 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D53 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D52 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D51 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D50 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D49 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D48 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D47 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D46 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D45 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D44 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D43 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D42 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D41 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D40 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
V_DECLARE_FUNC(_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0assert_V0assert__equal);
static void _V0vanity_V0assert_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0assert_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.18 2 0) (##string ##.string.56) (bruijn ##.%x.19 0 0) 'current-error-port 'format 'equal?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 6,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D56.sym, VPOINTER_OTHER),
      _var0,
      _V0current__error__port,
      _V0format,
      _V0equal_Q);
}
static void _V0vanity_V0assert_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0assert_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0assert_V20_V0k2) (bruijn ##.%x.20 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0assert_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0assert_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0assert_V20_V0k1) (##string ##.string.57))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D57.sym, VPOINTER_OTHER));
}
static void _V10_Dassert__equal_D9_V0k5(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.exit (bruijn ##.%k.22 3 0) 1)
    VCallFuncWithGC(runtime, (VFunc)VExit2, 2,
      statics->up->up->vars[0],
      VEncodeInt(1l));
}
static void _V10_Dassert__equal_D9_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassert__equal_D9_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassert__equal_D9_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.2 5 2) (close _V10_Dassert__equal_D9_V0k5) (bruijn ##.%x.24 0 0) (##string ##.string.94) (bruijn ##.x.10 3 1) (bruijn ##.y.11 3 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k5, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D94.sym, VPOINTER_OTHER),
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
}
static void _V10_Dassert__equal_D9_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dassert__equal_D9_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dassert__equal_D9_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.33) ((##vcore.not (bruijn ##.%x.25 1 0))) (if (bruijn ##.%p.33 0 0) ((bruijn ##.current-error-port.1 4 1) (close _V10_Dassert__equal_D9_V0k4)) ((bruijn ##.%k.22 2 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k4, self)))));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k6(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.37) ((##vcore.cdr (bruijn ##.rest.15 3 1))) (##qualified-call (vanity assert assert-equal ##.loop.14) #f (bruijn ##.loop.14 4 0) (bruijn ##.%k.27 3 0) (bruijn ##.%x.37 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[1]);
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
       _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.34 ##.%p.35) ((##vcore.null? (bruijn ##.rest.15 1 1)) (##vcore.not (bruijn ##.%x.34 0 0))) (if (bruijn ##.%p.35 0 1) (basic-block 1 1 (##.%x.36) ((##vcore.car (bruijn ##.rest.15 2 1))) (##qualified-call (vanity assert assert-equal) #t (bruijn ##.assert-equal.9 5 0) (close _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k6) (bruijn ##.x.12 4 1) (bruijn ##.%x.36 0 0))) ((bruijn ##.%k.27 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0assert;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k6, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal, _V60_V0vanity_V0assert)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0assert_V0assert__equal(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
__attribute__((used)) static void _V20CaseError__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, ...) {
 // ("_V50_V0vanity_V0assert_V0assert__equal" #t (##pair ##.pair.79) (3 ((bruijn ##.equal?.3 2 3) (close _V10_Dassert__equal_D9_V0k3) (bruijn ##.x.10 0 1) (bruijn ##.y.11 0 2))) (2 + (letrec 1 ((close "_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14")) (##qualified-call (vanity assert assert-equal ##.loop.14) #f (bruijn ##.loop.14 0 0) (bruijn ##.%k.26 1 0) (bruijn ##.rest.13 1 2)))))
 VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0assert_V0assert__equal, got ~D~N"
 "-- expected 3~N"
 "-- expected 2 or more~N"
 , argc);
}
__attribute__((used)) static void _V20Case0__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V20Case0__V50_V0vanity_V0assert_V0assert__equal" };
 VRecordCall2(runtime, &dbg);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.equal?.3 2 3) (close _V10_Dassert__equal_D9_V0k3) (bruijn ##.x.10 0 1) (bruijn ##.y.11 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[3]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dassert__equal_D9_V0k3, self)))),
      _var1,
      _var2);
}
__attribute__((used)) static void _V20Case1__V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V20Case1__V50_V0vanity_V0assert_V0assert__equal" };
 VRecordCall2(runtime, &dbg);
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 2, argc, _var1);
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _varargs;
  // (letrec 1 ((close "_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14")) (##qualified-call (vanity assert assert-equal ##.loop.14) #f (bruijn ##.loop.14 0 0) (bruijn ##.%k.26 1 0) (bruijn ##.rest.13 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, self))));
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
       _V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0assert_V0assert__equal(VRuntime * runtime, VEnv * statics, int argc, ...);
asm(
".intel_syntax noprefix\n"
#ifdef __linux__
".type _V50_V0vanity_V0assert_V0assert__equal, @function\n"
#endif
".globl _V50_V0vanity_V0assert_V0assert__equal\n"
"_V50_V0vanity_V0assert_V0assert__equal:\n"
"    cmp " ARGC_REG ", 3\n"
"    je _V20Case0__V50_V0vanity_V0assert_V0assert__equal\n"
"    cmp " ARGC_REG ", 2\n"
"    jge _V20Case1__V50_V0vanity_V0assert_V0assert__equal\n"
"    jmp _V20CaseError__V50_V0vanity_V0assert_V0assert__equal\n"
);
static void _V0vanity_V0assert_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0assert_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0lambda3, got ~D~N"
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
  // (##letrec (vanity assert) 1 ((close "_V50_V0vanity_V0assert_V0assert__equal" (vanity assert))) (basic-block 2 2 (##.%x.38 ##.%r.39) ((##vcore.cons 'assert-equal (bruijn ##.assert-equal.9 1 0)) (##vcore.cons (bruijn ##.%x.38 0 0) '())) ((bruijn ##.%k.21 2 0) (bruijn ##.%r.39 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    _V60_V0vanity_V0assert = self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0assert_V0assert__equal, _V60_V0vanity_V0assert))));
    VRegisterStaticEnv("_V0vanity_V0assert_V20", &_V60_V0vanity_V0assert);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0assert__equal,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0assert_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0assert_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0assert_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.17 0 0) (close _V0vanity_V0assert_V20_V0lambda2) (close _V0vanity_V0assert_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0assert_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0assert_V20 = (VFunc)_V0vanity_V0assert_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0loop = VEncodePointer(VInternSymbol(-596409721, &_VW_V0loop.sym), VPOINTER_OTHER);
  _V10_Dloop_D14 = VEncodePointer(VInternSymbol(1715561454, &_VW_V10_Dloop_D14.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0_Mp = VEncodePointer(VInternSymbol(-513073359, &_VW_V0_Mp.sym), VPOINTER_OTHER);
  _V0rest = VEncodePointer(VInternSymbol(1577985677, &_VW_V0rest.sym), VPOINTER_OTHER);
  _V0y = VEncodePointer(VInternSymbol(-1581629518, &_VW_V0y.sym), VPOINTER_OTHER);
  _V0x = VEncodePointer(VInternSymbol(-2096885469, &_VW_V0x.sym), VPOINTER_OTHER);
  _V0assert__equal = VEncodePointer(VInternSymbol(1192061083, &_VW_V0assert__equal.sym), VPOINTER_OTHER);
  _V0assert = VEncodePointer(VInternSymbol(239906196, &_VW_V0assert.sym), VPOINTER_OTHER);
  _V0vanity = VEncodePointer(VInternSymbol(-312377406, &_VW_V0vanity.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D109.first = VEncodePointer(&_V10_Dpair_D102, VPOINTER_PAIR);
  _V10_Dpair_D109.rest = VEncodePointer(&_V10_Dpair_D108, VPOINTER_PAIR);
  _V10_Dpair_D108.first = VEncodePointer(&_V10_Dpair_D107, VPOINTER_PAIR);
  _V10_Dpair_D108.rest = VNULL;
  _V10_Dpair_D107.first = VEncodePointer(&_V10_Dpair_D103, VPOINTER_PAIR);
  _V10_Dpair_D107.rest = VEncodePointer(&_V10_Dpair_D106, VPOINTER_PAIR);
  _V10_Dpair_D106.first = VEncodePointer(&_V10_Dpair_D105, VPOINTER_PAIR);
  _V10_Dpair_D106.rest = VEncodePointer(&_V10_Dpair_D77, VPOINTER_PAIR);
  _V10_Dpair_D105.first = _V0_Mk;
  _V10_Dpair_D105.rest = VEncodePointer(&_V10_Dpair_D104, VPOINTER_PAIR);
  _V10_Dpair_D104.first = _V0x;
  _V10_Dpair_D104.rest = VEncodePointer(&_V10_Dpair_D99, VPOINTER_PAIR);
  _V10_Dpair_D103.first = _V0loop;
  _V10_Dpair_D103.rest = VNULL;
  _V10_Dpair_D102.first = VEncodePointer(&_V10_Dpair_D98, VPOINTER_PAIR);
  _V10_Dpair_D102.rest = VEncodePointer(&_V10_Dpair_D101, VPOINTER_PAIR);
  _V10_Dpair_D101.first = VEncodePointer(&_V10_Dpair_D100, VPOINTER_PAIR);
  _V10_Dpair_D101.rest = VNULL;
  _V10_Dpair_D100.first = _V0_Mk;
  _V10_Dpair_D100.rest = VEncodePointer(&_V10_Dpair_D99, VPOINTER_PAIR);
  _V10_Dpair_D99.first = _V0rest;
  _V10_Dpair_D99.rest = VNULL;
  _V10_Dpair_D98.first = _V0vanity;
  _V10_Dpair_D98.rest = VEncodePointer(&_V10_Dpair_D97, VPOINTER_PAIR);
  _V10_Dpair_D97.first = _V0assert;
  _V10_Dpair_D97.rest = VEncodePointer(&_V10_Dpair_D96, VPOINTER_PAIR);
  _V10_Dpair_D96.first = _V0assert__equal;
  _V10_Dpair_D96.rest = VEncodePointer(&_V10_Dpair_D95, VPOINTER_PAIR);
  _V10_Dpair_D95.first = _V10_Dloop_D14;
  _V10_Dpair_D95.rest = VNULL;
  _V10_Dpair_D93.first = VEncodePointer(&_V10_Dpair_D89, VPOINTER_PAIR);
  _V10_Dpair_D93.rest = VEncodePointer(&_V10_Dpair_D92, VPOINTER_PAIR);
  _V10_Dpair_D92.first = VEncodePointer(&_V10_Dpair_D91, VPOINTER_PAIR);
  _V10_Dpair_D92.rest = VNULL;
  _V10_Dpair_D91.first = _V0unquote;
  _V10_Dpair_D91.rest = VEncodePointer(&_V10_Dpair_D90, VPOINTER_PAIR);
  _V10_Dpair_D90.first = _V0unmangled__env;
  _V10_Dpair_D90.rest = VNULL;
  _V10_Dpair_D89.first = VEncodeBool(false);
  _V10_Dpair_D89.rest = VEncodePointer(&_V10_Dpair_D88, VPOINTER_PAIR);
  _V10_Dpair_D88.first = _V0_U;
  _V10_Dpair_D88.rest = VNULL;
  _V10_Dpair_D87.first = VEncodePointer(&_V10_Dpair_D49, VPOINTER_PAIR);
  _V10_Dpair_D87.rest = VEncodePointer(&_V10_Dpair_D86, VPOINTER_PAIR);
  _V10_Dpair_D86.first = VEncodePointer(&_V10_Dpair_D85, VPOINTER_PAIR);
  _V10_Dpair_D86.rest = VNULL;
  _V10_Dpair_D85.first = VEncodePointer(&_V10_Dpair_D83, VPOINTER_PAIR);
  _V10_Dpair_D85.rest = VEncodePointer(&_V10_Dpair_D84, VPOINTER_PAIR);
  _V10_Dpair_D84.first = VEncodePointer(&_V10_Dpair_D47, VPOINTER_PAIR);
  _V10_Dpair_D84.rest = VEncodePointer(&_V10_Dpair_D80, VPOINTER_PAIR);
  _V10_Dpair_D83.first = _V0_Mp;
  _V10_Dpair_D83.rest = VNULL;
  _V10_Dpair_D82.first = VEncodePointer(&_V10_Dpair_D49, VPOINTER_PAIR);
  _V10_Dpair_D82.rest = VEncodePointer(&_V10_Dpair_D81, VPOINTER_PAIR);
  _V10_Dpair_D81.first = VEncodePointer(&_V10_Dpair_D80, VPOINTER_PAIR);
  _V10_Dpair_D81.rest = VNULL;
  _V10_Dpair_D80.first = VEncodePointer(&_V10_Dpair_D70, VPOINTER_PAIR);
  _V10_Dpair_D80.rest = VEncodePointer(&_V10_Dpair_D77, VPOINTER_PAIR);
  _V10_Dpair_D79.first = VEncodePointer(&_V10_Dpair_D75, VPOINTER_PAIR);
  _V10_Dpair_D79.rest = VEncodePointer(&_V10_Dpair_D78, VPOINTER_PAIR);
  _V10_Dpair_D78.first = VEncodePointer(&_V10_Dpair_D77, VPOINTER_PAIR);
  _V10_Dpair_D78.rest = VNULL;
  _V10_Dpair_D77.first = VEncodePointer(&_V10_Dpair_D65, VPOINTER_PAIR);
  _V10_Dpair_D77.rest = VEncodePointer(&_V10_Dpair_D76, VPOINTER_PAIR);
  _V10_Dpair_D76.first = VEncodePointer(&_V10_Dpair_D61, VPOINTER_PAIR);
  _V10_Dpair_D76.rest = VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR);
  _V10_Dpair_D75.first = VEncodePointer(&_V10_Dpair_D67, VPOINTER_PAIR);
  _V10_Dpair_D75.rest = VEncodePointer(&_V10_Dpair_D74, VPOINTER_PAIR);
  _V10_Dpair_D74.first = VEncodePointer(&_V10_Dpair_D70, VPOINTER_PAIR);
  _V10_Dpair_D74.rest = VEncodePointer(&_V10_Dpair_D73, VPOINTER_PAIR);
  _V10_Dpair_D73.first = VEncodePointer(&_V10_Dpair_D72, VPOINTER_PAIR);
  _V10_Dpair_D73.rest = VNULL;
  _V10_Dpair_D72.first = _V0_Mk;
  _V10_Dpair_D72.rest = VEncodePointer(&_V10_Dpair_D71, VPOINTER_PAIR);
  _V10_Dpair_D71.first = _V0x;
  _V10_Dpair_D71.rest = _V0rest;
  _V10_Dpair_D70.first = _V0_Mk;
  _V10_Dpair_D70.rest = VEncodePointer(&_V10_Dpair_D69, VPOINTER_PAIR);
  _V10_Dpair_D69.first = _V0x;
  _V10_Dpair_D69.rest = VEncodePointer(&_V10_Dpair_D68, VPOINTER_PAIR);
  _V10_Dpair_D68.first = _V0y;
  _V10_Dpair_D68.rest = VNULL;
  _V10_Dpair_D67.first = _V0vanity;
  _V10_Dpair_D67.rest = VEncodePointer(&_V10_Dpair_D66, VPOINTER_PAIR);
  _V10_Dpair_D66.first = _V0assert;
  _V10_Dpair_D66.rest = VEncodePointer(&_V10_Dpair_D65, VPOINTER_PAIR);
  _V10_Dpair_D65.first = _V0assert__equal;
  _V10_Dpair_D65.rest = VNULL;
  _V10_Dpair_D64.first = VEncodePointer(&_V10_Dpair_D63, VPOINTER_PAIR);
  _V10_Dpair_D64.rest = VEncodePointer(&_V10_Dpair_D45, VPOINTER_PAIR);
  _V10_Dpair_D63.first = VEncodeBool(false);
  _V10_Dpair_D63.rest = VEncodePointer(&_V10_Dpair_D62, VPOINTER_PAIR);
  _V10_Dpair_D62.first = VEncodePointer(&_V10_Dpair_D61, VPOINTER_PAIR);
  _V10_Dpair_D62.rest = VNULL;
  _V10_Dpair_D61.first = _V0_Mk;
  _V10_Dpair_D61.rest = VEncodePointer(&_V10_Dpair_D60, VPOINTER_PAIR);
  _V10_Dpair_D60.first = _V0current__error__port;
  _V10_Dpair_D60.rest = VEncodePointer(&_V10_Dpair_D59, VPOINTER_PAIR);
  _V10_Dpair_D59.first = _V0format;
  _V10_Dpair_D59.rest = VEncodePointer(&_V10_Dpair_D58, VPOINTER_PAIR);
  _V10_Dpair_D58.first = _V0equal_Q;
  _V10_Dpair_D58.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D55.first = VEncodePointer(&_V10_Dpair_D49, VPOINTER_PAIR);
  _V10_Dpair_D55.rest = VEncodePointer(&_V10_Dpair_D54, VPOINTER_PAIR);
  _V10_Dpair_D54.first = VEncodePointer(&_V10_Dpair_D53, VPOINTER_PAIR);
  _V10_Dpair_D54.rest = VNULL;
  _V10_Dpair_D53.first = VEncodePointer(&_V10_Dpair_D47, VPOINTER_PAIR);
  _V10_Dpair_D53.rest = VEncodePointer(&_V10_Dpair_D50, VPOINTER_PAIR);
  _V10_Dpair_D52.first = VEncodePointer(&_V10_Dpair_D49, VPOINTER_PAIR);
  _V10_Dpair_D52.rest = VEncodePointer(&_V10_Dpair_D51, VPOINTER_PAIR);
  _V10_Dpair_D51.first = VEncodePointer(&_V10_Dpair_D50, VPOINTER_PAIR);
  _V10_Dpair_D51.rest = VNULL;
  _V10_Dpair_D50.first = VEncodePointer(&_V10_Dpair_D40, VPOINTER_PAIR);
  _V10_Dpair_D50.rest = VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR);
  _V10_Dpair_D49.first = VEncodeBool(false);
  _V10_Dpair_D49.rest = VEncodePointer(&_V10_Dpair_D48, VPOINTER_PAIR);
  _V10_Dpair_D48.first = VEncodePointer(&_V10_Dpair_D47, VPOINTER_PAIR);
  _V10_Dpair_D48.rest = VNULL;
  _V10_Dpair_D47.first = _V0_Mx;
  _V10_Dpair_D47.rest = VNULL;
  _V10_Dpair_D46.first = VEncodePointer(&_V10_Dpair_D42, VPOINTER_PAIR);
  _V10_Dpair_D46.rest = VEncodePointer(&_V10_Dpair_D45, VPOINTER_PAIR);
  _V10_Dpair_D45.first = VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR);
  _V10_Dpair_D45.rest = VNULL;
  _V10_Dpair_D44.first = VEncodePointer(&_V10_Dpair_D42, VPOINTER_PAIR);
  _V10_Dpair_D44.rest = VEncodePointer(&_V10_Dpair_D43, VPOINTER_PAIR);
  _V10_Dpair_D43.first = VNULL;
  _V10_Dpair_D43.rest = VNULL;
  _V10_Dpair_D42.first = VEncodeBool(false);
  _V10_Dpair_D42.rest = VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR);
  _V10_Dpair_D41.first = VEncodePointer(&_V10_Dpair_D40, VPOINTER_PAIR);
  _V10_Dpair_D41.rest = VNULL;
  _V10_Dpair_D40.first = _V0_Mk;
  _V10_Dpair_D40.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0assert_V20_V0k2, VEncodePointer(&_V10_Dpair_D55, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0assert_V20_V0k1, VEncodePointer(&_V10_Dpair_D52, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0assert_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D46, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dassert__equal_D9_V0k5, VEncodePointer(&_V10_Dpair_D93, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dassert__equal_D9_V0k4, VEncodePointer(&_V10_Dpair_D87, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V10_Dassert__equal_D9_V0k3, VEncodePointer(&_V10_Dpair_D82, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14_V0k6, VEncodePointer(&_V10_Dpair_D93, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0assert_V0assert__equal_V10_Dloop_D14, VEncodePointer(&_V10_Dpair_D109, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V50_V0vanity_V0assert_V0assert__equal, VEncodePointer(&_V10_Dpair_D79, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0assert_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D64, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0assert_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D44, VPOINTER_PAIR));
}
