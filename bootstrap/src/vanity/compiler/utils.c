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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D111 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D110 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D109 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0platform;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0platform = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "platform" };
VWEAK VWORD _V0current__error__port;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0current__error__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "current-error-port" };
VWEAK VWORD _V0newline;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0newline = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "newline" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0write;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0write = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "write" };
VWEAK VWORD _V0format;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0format = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "format" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0open__input__file;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "open-input-file" };
VWEAK VWORD _V0read;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0read = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "read" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V40_V10vcore_Dgensym;VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D108 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vsc: compiler-warning: ~A:" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D107 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D106 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D105 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D104 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D103 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "mingw64/bin/gcc.exe" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D102 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A/../~A" };
static __attribute__((constructor)) void VDllMain1() {
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0platform = VEncodePointer(VLookupConstant("_V0platform", &_VW_V0platform), VPOINTER_OTHER);
  _V0current__error__port = VEncodePointer(VLookupConstant("_V0current__error__port", &_VW_V0current__error__port), VPOINTER_OTHER);
  _V0newline = VEncodePointer(VLookupConstant("_V0newline", &_VW_V0newline), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VLookupConstant("_V0for__each", &_VW_V0for__each), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0write = VEncodePointer(VLookupConstant("_V0write", &_VW_V0write), VPOINTER_OTHER);
  _V0format = VEncodePointer(VLookupConstant("_V0format", &_VW_V0format), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0open__input__file = VEncodePointer(VLookupConstant("_V0open__input__file", &_VW_V0open__input__file), VPOINTER_OTHER);
  _V0read = VEncodePointer(VLookupConstant("_V0read", &_VW_V0read), VPOINTER_OTHER);
  _V0windows = VEncodePointer(VLookupConstant("_V0windows", &_VW_V0windows), VPOINTER_OTHER);
  _V0gcc__path = VEncodePointer(VLookupConstant("_V0gcc__path", &_VW_V0gcc__path), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VLookupConstant("_V0filter", &_VW_V0filter), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0compiler__warning = VEncodePointer(VLookupConstant("_V0compiler__warning", &_VW_V0compiler__warning), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VLookupConstant("_V0search__open__input__file", &_VW_V0search__open__input__file), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VLookupConstant("_V0read__all", &_VW_V0read__all), VPOINTER_OTHER);
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0utils_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.42 14 0) (bruijn ##.k.96 2 0) (##string ##.string.102) (bruijn ##.x.97 0 0) (##string ##.string.103))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D102.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D103.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.98 0 0) (close _V0vanity_V0compiler_V0utils_V20_k18))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k18, self)})));
}
static void _V0vanity_V0compiler_V0utils_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.95 1 0) (##vcore.function (close _V0vanity_V0compiler_V0utils_V20_k17) (##string ##.string.104)) ((bruijn ##.k.96 0 0) (##string ##.string.105)))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k17, self)})),
      VEncodePointer(&_V10_Dstring_D104.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D105.sym, VPOINTER_OTHER));
}
}
static void _V10_Dread__all_D19_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__all_D19_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.53 3 0) (##inline ##vcore.cons (bruijn ##.expr.27 2 0) (bruijn ##.x.55 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        statics->up->vars[0],
        _var0));
}
static void _V10_Dread__all_D19_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__all_D19_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.101) ((##vcore.eof-object? (bruijn ##.expr.27 1 0))) (if (bruijn ##.reg.101 0 0) ((bruijn ##.k.53 2 0) '()) ((bruijn ##.read-all.19 3 0) (close _V10_Dread__all_D19_k21) (bruijn ##.port.26 2 1))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D19_k21, self)})),
      statics->up->vars[1]);
}
    }
}
static void _V10_Dread__all_D19_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dread__all_D19_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.52 4 0) (close _V10_Dread__all_D19_k20) (bruijn ##.port.26 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D19_k20, self)})),
      _var1);
}
static void _V10_Dloop_D30_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D30_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.32 0 0) ((bruijn ##.k.57 2 0) (bruijn ##.fd.32 0 0)) ((bruijn ##.loop.30 3 0) (bruijn ##.k.57 2 0) (##inline ##vcore.cdr (bruijn ##.paths.31 2 1))))
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
static void _V10_Dloop_D30_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D30_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.51 8 0) (close _V10_Dloop_D30_k23) (bruijn ##.x.60 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D30_k23, self)})),
      _var0);
}
static void _V10_Dloop_D30_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D30_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.paths.31 0 1)) ((bruijn ##.k.57 0 0) #f) ((bruijn ##.x.50 8 0) (close _V10_Dloop_D30_k22) (##inline ##vcore.car (bruijn ##.paths.31 0 1)) (##string ##.string.106) (bruijn ##.file.28 2 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D30_k22, self)})),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D106.sym, VPOINTER_OTHER),
      statics->up->vars[1]);
}
}
static void _V10_Dsearch__open__input__file_D20_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dsearch__open__input__file_D20_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 1 ((close _V10_Dloop_D30_lambda4)) ((bruijn ##.loop.30 0 0) (bruijn ##.k.56 1 0) (bruijn ##.paths.29 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D30_lambda4, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->vars[0],
      statics->vars[2]);
    }
}
static void _V10_Dcompiler__error_D21_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__error_D21_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.k.62 1 0) (bruijn ##.x.63 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dcompiler__error_D21_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__error_D21_lambda5, got ~D~N"
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
  // (##vcore.record (close _V10_Dcompiler__error_D21_k24) #f 'compiler-error (bruijn ##.msg.33 0 1) (bruijn ##.irritants.34 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D21_k24, self)})),
      VEncodeBool(false),
      _V0compiler__error,
      _var1,
      _varargs);
}
static void _V10_Dcompiler__warning_D22_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.45 15 0) (bruijn ##.k.64 4 0) (bruijn ##.x.67 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      statics->up->up->up->vars[0],
      _var0);
}
static void _V10_Dcompiler__warning_D22_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.44 15 0) (close _V10_Dcompiler__warning_D22_k28))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k28, self)})));
}
static void _V10_Dcompiler__warning_D22_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.48 14 0) (bruijn ##.k.68 3 0) (bruijn ##.irr.37 3 1) (bruijn ##.x.70 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      _var0);
}
static void _V10_Dcompiler__warning_D22_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.44 17 0) (close _V10_Dcompiler__warning_D22_k31))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k31, self)})));
}
static void _V10_Dcompiler__warning_D22_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.47 13 0) (close _V10_Dcompiler__warning_D22_k30) (##string ##.string.107) (bruijn ##.x.71 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k30, self)})),
      VEncodePointer(&_V10_Dstring_D107.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dcompiler__warning_D22_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.44 15 0) (close _V10_Dcompiler__warning_D22_k29))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k29, self)})));
}
static void _V10_Dcompiler__warning_D22_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.46 12 0) (close _V10_Dcompiler__warning_D22_k27) (close _V10_Dcompiler__warning_D22_lambda7) (bruijn ##.irritants.36 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k27, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_lambda7, self)})),
      statics->up->vars[2]);
}
static void _V10_Dcompiler__warning_D22_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.49 8 0) (close _V10_Dcompiler__warning_D22_k26) (bruijn ##.x.72 0 0) (##string ##.string.108) (bruijn ##.msg.35 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k26, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D108.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
static void _V10_Dcompiler__warning_D22_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
 if(argc < 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcompiler__warning_D22_lambda6, got ~D~N"
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
  // ((bruijn ##.x.44 12 0) (close _V10_Dcompiler__warning_D22_k25))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_k25, self)})));
}
static void _V10_Dfilter_D23_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D23_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.73 2 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.lst.39 2 2)) (bruijn ##.x.77 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->vars[2]),
        _var0));
}
static void _V10_Dfilter_D23_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D23_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.75 0 0) ((bruijn ##.filter.23 2 4) (close _V10_Dfilter_D23_k33) (bruijn ##.p.38 1 1) (##inline ##vcore.cdr (bruijn ##.lst.39 1 2))) ((bruijn ##.filter.23 2 4) (bruijn ##.k.73 1 0) (bruijn ##.p.38 1 1) (##inline ##vcore.cdr (bruijn ##.lst.39 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D23_k33, self)})),
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 3,
      statics->vars[0],
      statics->vars[1],
      VInlineCdr2(runtime,
        statics->vars[2]));
}
}
static void _V10_Dfilter_D23_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfilter_D23_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.lst.39 0 2)) ((bruijn ##.k.73 0 0) '()) ((bruijn ##.p.38 0 1) (close _V10_Dfilter_D23_k32) (##inline ##vcore.car (bruijn ##.lst.39 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var1), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D23_k32, self)})),
      VInlineCar2(runtime,
        _var2));
}
}
static void _V0vanity_V0compiler_V0utils_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 7 ((close _V10_Dread__all_D19_lambda2) (close _V10_Dsearch__open__input__file_D20_lambda3) (close _V10_Dcompiler__error_D21_lambda5) (close _V10_Dcompiler__warning_D22_lambda6) (close _V10_Dfilter_D23_lambda8) (bruijn ##.x.81 1 0) (##intrinsic ##vcore.gensym)) ((bruijn ##.k.41 17 0) (##inline ##vcore.cons (##inline ##vcore.cons 'read-all (bruijn ##.read-all.19 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.20 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-error (bruijn ##.compiler-error.21 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'compiler-warning (bruijn ##.compiler-warning.22 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'gensym (bruijn ##.gensym.25 0 6)) (##inline ##vcore.cons (##inline ##vcore.cons 'filter (bruijn ##.filter.23 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'gcc-path (bruijn ##.gcc-path.24 0 5)) '())))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[7]; } container;
    self = &container.self;
    VInitEnv(self, 7, 7, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dread__all_D19_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dsearch__open__input__file_D20_lambda3, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__error_D21_lambda5, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcompiler__warning_D22_lambda6, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfilter_D23_lambda8, self)}));
    self->vars[5] = statics->vars[0];
    self->vars[6] = _V40_V10vcore_Dgensym;
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0read__all,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0search__open__input__file,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__error,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0compiler__warning,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gensym,
        self->vars[6]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0filter,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gcc__path,
        self->vars[5]),
        VNULL))))))));
    }
}
static void _V0vanity_V0compiler_V0utils_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0utils_V20_k16) (close _V0vanity_V0compiler_V0utils_V20_k19))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0utils_V20_k16, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k19, self)})));
}
static void _V0vanity_V0compiler_V0utils_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.eqv? (close _V0vanity_V0compiler_V0utils_V20_k15) (bruijn ##.x.43 9 0) 'windows)
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k15, self)})),
      VGetArg(statics, 9-1, 0),
      _V0windows);
}
static void _V0vanity_V0compiler_V0utils_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 10 0) (close _V0vanity_V0compiler_V0utils_V20_k14) 'read)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k14, self)})),
      _V0read);
}
static void _V0vanity_V0compiler_V0utils_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0utils_V20_k13) 'open-input-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k13, self)})),
      _V0open__input__file);
}
static void _V0vanity_V0compiler_V0utils_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0utils_V20_k12) 'string-append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k12, self)})),
      _V0string__append);
}
static void _V0vanity_V0compiler_V0utils_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0utils_V20_k11) 'format)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k11, self)})),
      _V0format);
}
static void _V0vanity_V0compiler_V0utils_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0utils_V20_k10) 'write)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k10, self)})),
      _V0write);
}
static void _V0vanity_V0compiler_V0utils_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0utils_V20_k9) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k9, self)})),
      _V0display);
}
static void _V0vanity_V0compiler_V0utils_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0utils_V20_k8) 'for-each)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k8, self)})),
      _V0for__each);
}
static void _V0vanity_V0compiler_V0utils_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0utils_V20_k7) 'newline)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k7, self)})),
      _V0newline);
}
static void _V0vanity_V0compiler_V0utils_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0utils_V20_k6) 'current-error-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k6, self)})),
      _V0current__error__port);
}
static void _V0vanity_V0compiler_V0utils_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0utils_V20_k5) 'platform)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k5, self)})),
      _V0platform);
}
static void _V0vanity_V0compiler_V0utils_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0utils_V20_k4) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k4, self)})),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0utils_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0utils_V20_k3) (##string ##.string.109) (bruijn ##.x.99 1 0) (bruijn ##.x.100 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D109.sym, VPOINTER_OTHER),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0utils_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_k2) (##string ##.string.110))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D110.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_k1) (##string ##.string.111))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D111.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_lambda1;
