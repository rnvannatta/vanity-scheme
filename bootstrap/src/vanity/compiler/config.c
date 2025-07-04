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
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D14 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
VWEAK VWORD _V0linux;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0linux = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "linux" };
static struct { VBlob sym; char bytes[12]; } _V10_Dstring_D13 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "/usr/local/" };
static __attribute__((constructor)) void VDllMain1() {
  _V0platform = VEncodePointer(VLookupConstant("_V0platform", &_VW_V0platform), VPOINTER_OTHER);
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
  _V0linux = VEncodePointer(VLookupConstant("_V0linux", &_VW_V0linux), VPOINTER_OTHER);
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
  // (letrec 3 ((##inline ##vcore.qcons '0 (##inline ##vcore.qcons '0 '())) (##string ##.string.13) 'linux) ((bruijn ##.k.5 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'install-root (bruijn ##.install-root.2 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'version (bruijn ##.version.1 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'platform (bruijn ##.platform.3 0 2)) '())))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = VInlineCons2(runtime,
        VEncodeInt(0l),
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VNULL));
    self->vars[1] = VEncodePointer(&_V10_Dstring_D13.sym, VPOINTER_OTHER);
    self->vars[2] = _V0linux;
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0install__root,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0version,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0platform,
        self->vars[2]),
        VNULL))));
    }
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0config_V20_V0k1) (##string ##.string.14))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D14.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0config_V20 = (VFunc)_V0vanity_V0compiler_V0config_V20_V0lambda1;
