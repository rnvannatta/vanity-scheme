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

VEnv * _V60_V0vanity_V0compiler_V0utils;

static VPair _V10_Dpair_D128 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D127 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D126 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D125 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vanity__scheme__0_D0;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0vanity__scheme__0_D0 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "vanity-scheme-0.0" };
VWEAK VWORD _V0vanity__scheme;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vanity__scheme = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vanity-scheme" };
VWEAK VWORD _V0ieee__float;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0ieee__float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "ieee-float" };
VWEAK VWORD _V0r7rs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0r7rs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "r7rs" };
VWEAK VWORD _V0get__feature__list;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0get__feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "get-feature-list" };
VWEAK VWORD _V0set__feature__list_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0set__feature__list_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "set-feature-list!" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0resolve__file__path;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0resolve__file__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "resolve-file-path" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D124 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D123 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D122 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "mingw64/bin/gcc.exe" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D121 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A/../~A" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D120 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D119 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vsc: compiler-warning: ~A:" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D118 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D117 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D116 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0file__exists_Q;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0file__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "file-exists\?" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D115 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0vanity__scheme__0_D0 = VEncodePointer(VInternSymbol(-1138579618, &_VW_V0vanity__scheme__0_D0.sym), VPOINTER_OTHER);
  _V0vanity__scheme = VEncodePointer(VInternSymbol(275192804, &_VW_V0vanity__scheme.sym), VPOINTER_OTHER);
  _V0ieee__float = VEncodePointer(VInternSymbol(-1891017625, &_VW_V0ieee__float.sym), VPOINTER_OTHER);
  _V0r7rs = VEncodePointer(VInternSymbol(982406193, &_VW_V0r7rs.sym), VPOINTER_OTHER);
  _V0get__feature__list = VEncodePointer(VInternSymbol(1558223347, &_VW_V0get__feature__list.sym), VPOINTER_OTHER);
  _V0set__feature__list_B = VEncodePointer(VInternSymbol(-1477729665, &_VW_V0set__feature__list_B.sym), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0resolve__file__path = VEncodePointer(VInternSymbol(1687182104, &_VW_V0resolve__file__path.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0read = VEncodePointer(VInternSymbol(974172663, &_VW_V0read.sym), VPOINTER_OTHER);
  _V0file__exists_Q = VEncodePointer(VInternSymbol(-859422530, &_VW_V0file__exists_Q.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VInternSymbol(165226251, &_VW_V0open__input__file.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V10_Dpair_D128.first = _V0r7rs;
  _V10_Dpair_D128.rest = VEncodePointer(&_V10_Dpair_D127, VPOINTER_PAIR);
  _V10_Dpair_D127.first = _V0ieee__float;
  _V10_Dpair_D127.rest = VEncodePointer(&_V10_Dpair_D126, VPOINTER_PAIR);
  _V10_Dpair_D126.first = _V0vanity__scheme;
  _V10_Dpair_D126.rest = VEncodePointer(&_V10_Dpair_D125, VPOINTER_PAIR);
  _V10_Dpair_D125.first = _V0vanity__scheme__0_D0;
  _V10_Dpair_D125.rest = VNULL;
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0read__all, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _var0);
static void _V0vanity_V0compiler_V0utils_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.52 3 0) (##string ##.string.115) (bruijn ##.x.53 0 0) 'newline 'current-error-port 'display 'write 'for-each 'format 'open-input-file 'string-append 'file-exists? 'read 'sprintf 'platform)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 15,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D115.sym, VPOINTER_OTHER),
      _var0,
      _V0newline,
      _V0current__error__port,
      _V0display,
      _V0write,
      _V0for__each,
      _V0format,
      _V0open__input__file,
      _V0string__append,
      _V0file__exists_Q,
      _V0read,
      _V0sprintf,
      _V0platform);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0utils_V20_V0k3) (bruijn ##.x.54 1 0) (bruijn ##.x.55 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k2) (##string ##.string.116))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D116.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k1) (##string ##.string.117))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D117.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0utils_V0get__feature__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0get__feature__list" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0get__feature__list, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.57 0 0) (bruijn ##.feature-list.21 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (set! (bruijn ##.k.58 0 0) (bruijn ##.feature-list.21 1 2) (bruijn ##.lst.30 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(1l), VEncodeInt(2l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.59 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.32 2 2)) (bruijn ##.x.63 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.61 0 0) ((bruijn ##.filter.24 2 5) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5) (bruijn ##.p.31 1 1) (##inline ##vcore.cdr (bruijn ##.lst.32 1 2))) ((bruijn ##.filter.24 2 5) (bruijn ##.k.59 1 0) (bruijn ##.p.31 1 1) (##inline ##vcore.cdr (bruijn ##.lst.32 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k5, self)))),
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0filter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.32 0 2)) ((bruijn ##.k.59 0 0) '()) ((bruijn ##.p.31 0 1) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k4) (##inline ##vcore.car (bruijn ##.lst.32 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k4, self)))),
      VInlineCar2(runtime,
        _var2));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.0 4 1) (bruijn ##.k.67 2 0) (bruijn ##.x.68 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.1 3 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k9, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.write.3 6 4) (bruijn ##.k.69 2 0) (bruijn ##.irr.35 2 1) (bruijn ##.x.70 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k11(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.1 5 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k12))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k12, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.2 5 3) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k11) (##string ##.string.118) (bruijn ##.x.71 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D118.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-error-port.1 4 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k10))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k10, self)))));
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k7(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.4 3 5) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k8) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4) (bruijn ##.irritants.34 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k8, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.5 3 6) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k7) (bruijn ##.x.72 0 0) (##string ##.string.119) (bruijn ##.msg.33 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k7, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D119.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning, got ~D~N"
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
  // ((bruijn ##.current-error-port.1 2 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k6))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[2]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k6, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.73 1 0) (bruijn ##.x.74 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" };
 VRecordCall2(runtime, &dbg);
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__error, got ~D~N"
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
  // (##vcore.record (close _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13) #f 'compiler-error (bruijn ##.msg.36 0 1) (bruijn ##.irritants.37 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13, self)))),
      VEncodeBool(false),
      _V0compiler__error,
      _var1,
      _varargs);
}
static void _V10_Dloop_D40_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D40_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D40_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.42 0 0) ((bruijn ##.k.76 2 0) (bruijn ##.fd.42 0 0)) ((bruijn ##.loop.40 3 0) (bruijn ##.k.76 2 0) (##inline ##vcore.cdr (bruijn ##.paths.41 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Dloop_D40_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D40_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D40_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.open-input-file.6 5 7) (close _V10_Dloop_D40_V0k15) (bruijn ##.x.79 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D40_V0k15, self)))),
      _var0);
}
static void _V10_Dloop_D40_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D40_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D40_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.paths.41 0 1)) ((bruijn ##.k.76 0 0) #f) ((bruijn ##.string-append.7 4 8) (close _V10_Dloop_D40_V0k14) (##inline ##vcore.car (bruijn ##.paths.41 0 1)) (##string ##.string.120) (bruijn ##.file.38 2 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D40_V0k14, self)))),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D120.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D40_V0lambda5)) ((bruijn ##.loop.40 0 0) (bruijn ##.k.75 1 0) (bruijn ##.paths.39 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D40_V0lambda5, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
static void _V10_Dloop_D45_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D45_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D45_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.84 0 0) ((bruijn ##.k.82 2 0) (bruijn ##.path.47 1 0)) ((bruijn ##.loop.45 3 0) (bruijn ##.k.82 2 0) (##inline ##vcore.cdr (bruijn ##.paths.46 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->vars[1]));
}
}
static void _V10_Dloop_D45_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10_Dloop_D45_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D45_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.file-exists?.8 5 9) (close _V10_Dloop_D45_V0k17) (bruijn ##.path.47 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D45_V0k17, self)))),
      _var0);
}
static void _V10_Dloop_D45_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10_Dloop_D45_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D45_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.paths.46 0 1)) ((bruijn ##.k.82 0 0) #f) ((bruijn ##.string-append.7 4 8) (close _V10_Dloop_D45_V0k16) (##inline ##vcore.car (bruijn ##.paths.46 0 1)) (##string ##.string.120) (bruijn ##.file.43 2 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D45_V0k16, self)))),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D120.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D45_V0lambda6)) ((bruijn ##.loop.45 0 0) (bruijn ##.k.81 1 0) (bruijn ##.paths.44 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V10_Dloop_D45_V0lambda6, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.87 3 0) (##inline ##vcore.cons (bruijn ##.expr.49 2 0) (bruijn ##.x.89 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.114) ((##vcore.eof-object? (bruijn ##.expr.49 1 0))) (if (bruijn ##.reg.114 0 0) ((bruijn ##.k.87 2 0) '()) ((bruijn ##.read-all.29 3 10) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k19) (bruijn ##.port.48 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEofP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k19, self)))),
      statics->up->vars[1]);
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.read.9 2 10) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k18) (bruijn ##.port.48 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k18, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.10 4 11) (bruijn ##.k.111 2 0) (##string ##.string.121) (bruijn ##.x.112 0 0) (##string ##.string.122))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[11]), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D121.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D122.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.113 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0k22))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k22, self)))));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.platform.11 2 12) 'windows) (##vcore.function (close _V0vanity_V0compiler_V0utils_V20_V0k21) (##string ##.string.123)) ((bruijn ##.k.111 0 0) (##string ##.string.124)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[12],
        _V0windows))) {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k21, self)))),
      VEncodePointer(&_V10_Dstring_D123.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D124.sym, VPOINTER_OTHER));
}
}
static void _V0vanity_V0compiler_V0utils_V20_V0k25(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.56 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'read-all (bruijn ##.read-all.29 1 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'resolve-file-path (bruijn ##.resolve-file-path.28 1 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.27 1 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-error (bruijn ##.compiler-error.26 1 7)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-warning (bruijn ##.compiler-warning.25 1 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'gensym (bruijn ##.gensym.22 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.24 1 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'gcc-path (bruijn ##.gcc-path.23 1 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'set-feature-list! (bruijn ##.set-feature-list!.20 1 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'get-feature-list (bruijn ##.get-feature-list.19 1 0)) '())))))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__all,
        statics->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0resolve__file__path,
        statics->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0search__open__input__file,
        statics->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__error,
        statics->vars[7]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__warning,
        statics->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gensym,
        statics->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        statics->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gcc__path,
        statics->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0set__feature__list_B,
        statics->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0get__feature__list,
        statics->vars[0]),
        VNULL)))))))))));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k25) (bruijn ##.feature-list.21 1 2) '(##pair ##.pair.128))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k25, self)))),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodePointer(&_V10_Dpair_D128, VPOINTER_PAIR)
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k24) (bruijn ##.gcc-path.23 1 4) (bruijn ##.x.109 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k24, self)))),
      VEncodeInt(1l), VEncodeInt(4l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 13) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda3, got ~D~N"
  "-- expected 13~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[13]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 13, 13, statics);
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
  // (##letrec (vanity compiler utils) 11 ((close "_V50_V0vanity_V0compiler_V0utils_V0get__feature__list" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B" (vanity compiler utils)) #f (##intrinsic ##vcore.gensym) #f (close "_V50_V0vanity_V0compiler_V0utils_V0filter" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0read__all" (vanity compiler utils))) ((close _V0vanity_V0compiler_V0utils_V20_V0k20) (close _V0vanity_V0compiler_V0utils_V20_V0k23)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[11]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0utils = self;
    VInitEnv(self, 11, 11, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[2] = VEncodeBool(false);
    self->vars[3] = _V40_V10vcore_Dgensym;
    self->vars[4] = VEncodeBool(false);
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0utils_V20", &_V60_V0vanity_V0compiler_V0utils);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k23, self)))));
    }
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.51 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0lambda2) (close _V0vanity_V0compiler_V0utils_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda1;
