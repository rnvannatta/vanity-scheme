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

VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D99 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D98 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D97 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "mingw64/bin/gcc.exe" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D96 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A/../~A" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D95 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D94 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vsc: compiler-warning: ~A:" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D93 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D92 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D91 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D90 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0gcc__path = VEncodePointer(VInternSymbol(-1275049822, &_VW_V0gcc__path.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VInternSymbol(1130831505, &_VW_V0gensym.sym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VInternSymbol(245497745, &_VW_V0compiler__warning.sym), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VInternSymbol(689389284, &_VW_V0windows.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V0platform = VEncodePointer(VInternSymbol(546385074, &_VW_V0platform.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0read = VEncodePointer(VInternSymbol(974172663, &_VW_V0read.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VInternSymbol(165226251, &_VW_V0open__input__file.sym), VPOINTER_OTHER);
  _V0format = VEncodePointer(VInternSymbol(1942012929, &_VW_V0format.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0write = VEncodePointer(VInternSymbol(-1997196379, &_VW_V0write.sym), VPOINTER_OTHER);
  _V0display = VEncodePointer(VInternSymbol(-911502848, &_VW_V0display.sym), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VInternSymbol(-1722675676, &_VW_V0current__error__port.sym), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VInternSymbol(830312827, &_VW_V0newline.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0read__all, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0filter, _var0, _var1, _var2);
static void _V0vanity_V0compiler_V0utils_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.41 3 0) (##string ##.string.90) (bruijn ##.x.42 0 0) 'newline 'current-error-port 'display 'write 'for-each 'format 'open-input-file 'string-append 'read 'sprintf 'platform)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 14,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D90.sym, VPOINTER_OTHER),
      _var0,
      _V0newline,
      _V0current__error__port,
      _V0display,
      _V0write,
      _V0for__each,
      _V0format,
      _V0open__input__file,
      _V0string__append,
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0utils_V20_V0k3) (bruijn ##.x.43 1 0) (bruijn ##.x.44 0 0))
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k2) (##string ##.string.91))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D91.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k1) (##string ##.string.92))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D92.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0filter_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.46 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.26 2 2)) (bruijn ##.x.50 0 0)))
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
  // (if (bruijn ##.p.48 0 0) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.20 2 2) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k5) (bruijn ##.p.25 1 1) (##inline ##vcore.cdr (bruijn ##.lst.26 1 2))) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.20 2 2) (bruijn ##.k.46 1 0) (bruijn ##.p.25 1 1) (##inline ##vcore.cdr (bruijn ##.lst.26 1 2))))
if(VDecodeBool(
_var0)) {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k5, self))));
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      VInlineCdr2(runtime,
        statics->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
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
  // (if (##inline ##vcore.null? (bruijn ##.lst.26 0 2)) ((bruijn ##.k.46 0 0) '()) ((bruijn ##.p.25 0 1) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k4) (##inline ##vcore.car (bruijn ##.lst.26 0 2))))
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
  // ((bruijn ##.newline.0 4 1) (bruijn ##.k.54 2 0) (bruijn ##.x.55 0 0))
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
  // ((bruijn ##.write.3 6 4) (bruijn ##.k.56 2 0) (bruijn ##.irr.29 2 1) (bruijn ##.x.57 0 0))
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
  // ((bruijn ##.display.2 5 3) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k11) (##string ##.string.93) (bruijn ##.x.58 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k11, self)))),
      VEncodePointer(&_V10_Dstring_D93.sym, VPOINTER_OTHER),
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
  // ((bruijn ##.for-each.4 3 5) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k8) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda4) (bruijn ##.irritants.28 1 2))
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
  // ((bruijn ##.format.5 3 6) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k7) (bruijn ##.x.59 0 0) (##string ##.string.94) (bruijn ##.msg.27 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k7, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D94.sym, VPOINTER_OTHER),
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
  // (##vcore.raise (bruijn ##.k.60 1 0) (bruijn ##.x.61 0 0))
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
  // (##vcore.record (close _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13) #f 'compiler-error (bruijn ##.msg.30 0 1) (bruijn ##.irritants.31 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k13, self)))),
      VEncodeBool(false),
      _V0compiler__error,
      _var1,
      _varargs);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.36 0 0) ((bruijn ##.k.63 2 0) (bruijn ##.fd.36 0 0)) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.34) #f (bruijn ##.loop.34 3 0) (bruijn ##.k.63 2 0) (##inline ##vcore.cdr (bruijn ##.paths.35 2 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.open-input-file.6 5 7) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k15) (bruijn ##.x.66 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k15, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.paths.35 0 1)) ((bruijn ##.k.63 0 0) #f) ((bruijn ##.string-append.7 4 8) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k14) (##inline ##vcore.car (bruijn ##.paths.35 0 1)) (##string ##.string.95) (bruijn ##.file.32 2 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[8]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34_V0k14, self)))),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D95.sym, VPOINTER_OTHER),
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34")) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.34) #f (bruijn ##.loop.34 0 0) (bruijn ##.k.62 1 0) (bruijn ##.paths.33 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34, self))));
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
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D34(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.68 3 0) (##inline ##vcore.cons (bruijn ##.expr.38 2 0) (bruijn ##.x.70 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.89) ((##vcore.eof-object? (bruijn ##.expr.38 1 0))) (if (bruijn ##.reg.89 0 0) ((bruijn ##.k.68 2 0) '()) (##qualified-call (vanity compiler utils read-all) #t (bruijn ##.read-all.24 3 6) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k17) (bruijn ##.port.37 2 1))))
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
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k17, self))));
    VWORD _arg1 = 
      statics->up->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0read__all(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
  // ((bruijn ##.read.8 2 9) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k16) (bruijn ##.port.37 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k16, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.9 4 10) (bruijn ##.k.86 2 0) (##string ##.string.96) (bruijn ##.x.87 0 0) (##string ##.string.97))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[10]), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D96.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D97.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.88 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0k20))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k20, self)))));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.eq? (bruijn ##.platform.10 2 11) 'windows) (##vcore.function (close _V0vanity_V0compiler_V0utils_V20_V0k19) (##string ##.string.98)) ((bruijn ##.k.86 0 0) (##string ##.string.99)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->up->vars[11],
        _V0windows))) {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k19, self)))),
      VEncodePointer(&_V10_Dstring_D98.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D99.sym, VPOINTER_OTHER));
}
}
static void _V0vanity_V0compiler_V0utils_V20_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.45 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'read-all (bruijn ##.read-all.24 1 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.23 1 5)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-error (bruijn ##.compiler-error.22 1 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-warning (bruijn ##.compiler-warning.21 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'gensym (bruijn ##.gensym.18 1 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.20 1 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'gcc-path (bruijn ##.gcc-path.19 1 1)) '()))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__all,
        statics->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0search__open__input__file,
        statics->vars[5]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__error,
        statics->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__warning,
        statics->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gensym,
        statics->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        statics->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gcc__path,
        statics->vars[1]),
        VNULL))))))));
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
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k22) (bruijn ##.gcc-path.19 1 1) (bruijn ##.x.84 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k22, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0utils_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 12) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda3, got ~D~N"
  "-- expected 12~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[12]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 12, 12, statics);
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
  // (##letrec (vanity compiler utils) 7 ((##intrinsic ##vcore.gensym) #f (close "_V50_V0vanity_V0compiler_V0utils_V0filter" "_V60_V0vanity_V0compiler_V0utils") (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" "_V60_V0vanity_V0compiler_V0utils") (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" "_V60_V0vanity_V0compiler_V0utils") (close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" "_V60_V0vanity_V0compiler_V0utils") (close "_V50_V0vanity_V0compiler_V0utils_V0read__all" "_V60_V0vanity_V0compiler_V0utils")) ((close _V0vanity_V0compiler_V0utils_V20_V0k18) (close _V0vanity_V0compiler_V0utils_V20_V0k21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0utils = self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = _V40_V10vcore_Dgensym;
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0utils_V20", &_V60_V0vanity_V0compiler_V0utils);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k18, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k21, self)))));
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
  // (##vcore.call-with-values (bruijn ##.k.40 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0lambda2) (close _V0vanity_V0compiler_V0utils_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda1;
