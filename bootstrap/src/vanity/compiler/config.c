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

static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D21 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static VPair _V10_Dpair_D20 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D19 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0linux;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0linux = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "linux" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D18 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "/usr/local/" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static void _V0vanity_V0compiler_V0config_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 6 6 (##.%x.12 ##.%x.13 ##.%x.14 ##.%x.15 ##.%x.16 ##.%r.17) ((##vcore.cons 'install-root (bruijn ##.install-root.2 1 1)) (##vcore.cons 'version (bruijn ##.version.3 1 2)) (##vcore.cons 'platform (bruijn ##.platform.1 1 0)) (##vcore.cons (bruijn ##.%x.14 0 2) '()) (##vcore.cons (bruijn ##.%x.13 0 1) (bruijn ##.%x.15 0 3)) (##vcore.cons (bruijn ##.%x.12 0 0) (bruijn ##.%x.16 0 4))) ((bruijn ##.%k.5 4 0) (bruijn ##.%r.17 0 5)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
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
static void _V0vanity_V0compiler_V0config_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc) {
 if(argc != 0) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0lambda2, got ~D~N"
  "-- expected 0~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[0]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 0, 0, statics);
  // (##letrec (vanity compiler config) 3 (#f (##string ##.string.18) #f) (set! (close _V0vanity_V0compiler_V0config_V20_V0k2) (bruijn ##.version.3 0 2) '(##pair ##.pair.20)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0config = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VEncodeBool(false);
    self->vars[1] = VEncodePointer(&_V10_Dstring_D18.sym, VPOINTER_OTHER);
    self->vars[2] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0config_V20", &_V60_V0vanity_V0compiler_V0config);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0k2, self)))),
      VEncodeInt(0l), VEncodeInt(2l),
      VEncodePointer(&_V10_Dpair_D20, VPOINTER_PAIR)
    );
    }
}
static void _V0vanity_V0compiler_V0config_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0config_V20_V0lambda2) (##string ##.string.21) (bruijn ##.%x.11 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D21.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0compiler_V0config_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0config_V20_V0lambda1, got ~D~N"
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
VFunc _V0vanity_V0compiler_V0config_V20 = (VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0linux = VEncodePointer(VInternSymbol(1612496074, &_VW_V0linux.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0version = VEncodePointer(VInternSymbol(-909072658, &_VW_V0version.sym), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VInternSymbol(-197696181, &_VW_V0install__root.sym), VPOINTER_OTHER);
  _V10_Dpair_D20.first = VEncodeInt(0l);
  _V10_Dpair_D20.rest = VEncodePointer(&_V10_Dpair_D19, VPOINTER_PAIR);
  _V10_Dpair_D19.first = VEncodeInt(0l);
  _V10_Dpair_D19.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
