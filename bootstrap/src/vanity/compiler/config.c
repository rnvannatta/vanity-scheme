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

VEnv * _V60_V0vanity_V0compiler_V0config;

static VPair _V10_Dpair_D42 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D41 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0linux;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0linux = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "linux" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
static VPair _V10_Dpair_D40 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D39 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D38 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D37 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0unmangled__env;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0unmangled__env = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "unmangled-env" };
VWEAK VWORD _V0unquote;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0unquote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "unquote" };
static VPair _V10_Dpair_D36 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D35 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_U;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_U = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "_" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D34 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "/usr/local/" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D33 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static VPair _V10_Dpair_D32 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D31 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D30 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D29 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D28 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D27 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mx;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mx = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%x" };
static VPair _V10_Dpair_D26 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D25 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D24 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D23 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D22 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D21 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D20 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0_Mk;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_Mk = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "%k" };
static void _V0vanity_V0compiler_V0config_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.%k.6 1 0) (##string ##.string.33) (bruijn ##.%x.7 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D33.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0compiler_V0config_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0config_V20_V0k1))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0k1, self)))));
}
static void _V0vanity_V0compiler_V0config_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.14 ##.%x.15 ##.%x.16 ##.%x.17 ##.%x.18 ##.%r.19) ((##vcore.cons 'install-root (bruijn ##.install-root.2 1 1)) (##vcore.cons 'version (bruijn ##.version.3 1 2)) (##vcore.cons 'platform (bruijn ##.platform.1 1 0)) (##vcore.cons (bruijn ##.%x.16 0 2) '()) (##vcore.cons (bruijn ##.%x.15 0 1) (bruijn ##.%x.17 0 3)) (##vcore.cons (bruijn ##.%x.14 0 0) (bruijn ##.%x.18 0 4))) ((bruijn ##.%k.8 2 0) (bruijn ##.%r.19 0 5)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0install__root,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0version,
      statics->vars[2]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0platform,
      statics->vars[0]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      VNULL);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[4]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[5]);
    }
}
static void _V0vanity_V0compiler_V0config_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0config_V20_V0k3) (bruijn ##.platform.1 0 0) 'linux)
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0k3, self)))),
      VEncodeInt(0l), VEncodeInt(0l),
      _V0linux
    );
}
static void _V0vanity_V0compiler_V0config_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##letrec (vanity compiler config) 3 (#f (##string ##.string.34) #f) (set! (close _V0vanity_V0compiler_V0config_V20_V0k2) (bruijn ##.version.3 0 2) '(##pair ##.pair.42)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0config = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodePointer(&_V10_Dstring_D34.sym, VPOINTER_OTHER);
    self->vars[2] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0config_V20", &_V60_V0vanity_V0compiler_V0config);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0k2, self)))),
      VEncodeInt(0l), VEncodeInt(2l),
      VEncodePointer(&_V10_Dpair_D42, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0config_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.%k.5 0 0) (close _V0vanity_V0compiler_V0config_V20_V0lambda2) (close _V0vanity_V0compiler_V0config_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0config_V20 = (VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0linux = VEncodePointer(VInternSymbol(1612496074, &_VW_V0linux.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0version = VEncodePointer(VInternSymbol(-909072658, &_VW_V0version.sym), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VInternSymbol(-197696181, &_VW_V0install__root.sym), VPOINTER_OTHER);
  _V0unmangled__env = VEncodePointer(VInternSymbol(892869034, &_VW_V0unmangled__env.sym), VPOINTER_OTHER);
  _V0unquote = VEncodePointer(VInternSymbol(-374061087, &_VW_V0unquote.sym), VPOINTER_OTHER);
  _V0_U = VEncodePointer(VInternSymbol(-540102218, &_VW_V0_U.sym), VPOINTER_OTHER);
  _V0_Mx = VEncodePointer(VInternSymbol(-1853698215, &_VW_V0_Mx.sym), VPOINTER_OTHER);
  _V0_Mk = VEncodePointer(VInternSymbol(-865914236, &_VW_V0_Mk.sym), VPOINTER_OTHER);
  _V10_Dpair_D42.first = VEncodeInt(0l);
  _V10_Dpair_D42.rest = VEncodePointer(&_V10_Dpair_D41, VPOINTER_PAIR);
  _V10_Dpair_D41.first = VEncodeInt(0l);
  _V10_Dpair_D41.rest = VNULL;
  _V10_Dpair_D40.first = VEncodePointer(&_V10_Dpair_D36, VPOINTER_PAIR);
  _V10_Dpair_D40.rest = VEncodePointer(&_V10_Dpair_D39, VPOINTER_PAIR);
  _V10_Dpair_D39.first = VEncodePointer(&_V10_Dpair_D38, VPOINTER_PAIR);
  _V10_Dpair_D39.rest = VNULL;
  _V10_Dpair_D38.first = _V0unquote;
  _V10_Dpair_D38.rest = VEncodePointer(&_V10_Dpair_D37, VPOINTER_PAIR);
  _V10_Dpair_D37.first = _V0unmangled__env;
  _V10_Dpair_D37.rest = VNULL;
  _V10_Dpair_D36.first = VEncodeBool(false);
  _V10_Dpair_D36.rest = VEncodePointer(&_V10_Dpair_D35, VPOINTER_PAIR);
  _V10_Dpair_D35.first = _V0_U;
  _V10_Dpair_D35.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
  _V10_Dpair_D32.first = VEncodePointer(&_V10_Dpair_D29, VPOINTER_PAIR);
  _V10_Dpair_D32.rest = VEncodePointer(&_V10_Dpair_D31, VPOINTER_PAIR);
  _V10_Dpair_D31.first = VEncodePointer(&_V10_Dpair_D30, VPOINTER_PAIR);
  _V10_Dpair_D31.rest = VNULL;
  _V10_Dpair_D30.first = VEncodePointer(&_V10_Dpair_D20, VPOINTER_PAIR);
  _V10_Dpair_D30.rest = VEncodePointer(&_V10_Dpair_D21, VPOINTER_PAIR);
  _V10_Dpair_D29.first = VEncodeBool(false);
  _V10_Dpair_D29.rest = VEncodePointer(&_V10_Dpair_D28, VPOINTER_PAIR);
  _V10_Dpair_D28.first = VEncodePointer(&_V10_Dpair_D27, VPOINTER_PAIR);
  _V10_Dpair_D28.rest = VNULL;
  _V10_Dpair_D27.first = _V0_Mx;
  _V10_Dpair_D27.rest = VNULL;
  _V10_Dpair_D26.first = VEncodePointer(&_V10_Dpair_D22, VPOINTER_PAIR);
  _V10_Dpair_D26.rest = VEncodePointer(&_V10_Dpair_D25, VPOINTER_PAIR);
  _V10_Dpair_D25.first = VEncodePointer(&_V10_Dpair_D21, VPOINTER_PAIR);
  _V10_Dpair_D25.rest = VNULL;
  _V10_Dpair_D24.first = VEncodePointer(&_V10_Dpair_D22, VPOINTER_PAIR);
  _V10_Dpair_D24.rest = VEncodePointer(&_V10_Dpair_D23, VPOINTER_PAIR);
  _V10_Dpair_D23.first = VNULL;
  _V10_Dpair_D23.rest = VNULL;
  _V10_Dpair_D22.first = VEncodeBool(false);
  _V10_Dpair_D22.rest = VEncodePointer(&_V10_Dpair_D21, VPOINTER_PAIR);
  _V10_Dpair_D21.first = VEncodePointer(&_V10_Dpair_D20, VPOINTER_PAIR);
  _V10_Dpair_D21.rest = VNULL;
  _V10_Dpair_D20.first = _V0_Mk;
  _V10_Dpair_D20.rest = VNULL;
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0k1, VEncodePointer(&_V10_Dpair_D32, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda2, VEncodePointer(&_V10_Dpair_D26, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0k3, VEncodePointer(&_V10_Dpair_D40, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0k2, VEncodePointer(&_V10_Dpair_D40, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda3, VEncodePointer(&_V10_Dpair_D26, VPOINTER_PAIR));
  VRegisterProcDebugInfo((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda1, VEncodePointer(&_V10_Dpair_D24, VPOINTER_PAIR));
}
