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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D254 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D253 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
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
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D252 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static VPair _V10_Dpair_D251 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D250 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D249 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D248 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
VWEAK VWORD _V0vanity__scheme__0_D0;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0vanity__scheme__0_D0 = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "vanity-scheme-0.0" };
VWEAK VWORD _V0vanity__scheme;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0vanity__scheme = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "vanity-scheme" };
VWEAK VWORD _V0ieee__float;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0ieee__float = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "ieee-float" };
VWEAK VWORD _V0r7rs;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0r7rs = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "r7rs" };
VWEAK VWORD _V0ungensym;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0ungensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "ungensym" };
VWEAK VWORD _V0get__feature__list;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0get__feature__list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "get-feature-list" };
VWEAK VWORD _V0set__feature__list_B;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0set__feature__list_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "set-feature-list!" };
VWEAK VWORD _V0gcc__path;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0gcc__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "gcc-path" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0compiler__warning;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0compiler__warning = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "compiler-warning" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0resolve__file__path;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0resolve__file__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "resolve-file-path" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D247 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "gcc" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "VExePath" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D245 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "mingw64/bin/gcc.exe" };
static struct { VBlob sym; char bytes[9]; } _V10_Dstring_D244 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 9 }, "~A/../~A" };
VWEAK VWORD _V0windows;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0windows = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "windows" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D243 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "/" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D242 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "vsc: compiler-warning: ~A:" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, " " };
VWEAK VWORD _V40_V10vcore_Dgensym;
VWEAK VClosure _VW_V40_V10vcore_Dgensym = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VGensym, NULL };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "##." };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0read__all, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _var0, _var1, _var2);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _var0, _var1);
V_DECLARE_FUNC_MIN(_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0filter, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strchr, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, _var0);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0strrchr, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0utils_V0ungensym, _var0, _var1);
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.191) ((##vcore.blob=? (bruijn ##.%x.111 1 0) (##string ##.string.240))) ((bruijn ##.%k.110 2 0) (bruijn ##.%r.191 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VBlobEqv2(runtime, NULL,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D240.sym, VPOINTER_OTHER));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.190 1 1) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6) (bruijn ##.str.68 2 0) 0 3) ((bruijn ##.%k.110 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k6, self)))),
      statics->up->vars[0],
      VEncodeInt(0l),
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.%k.106 6 0) (bruijn ##.%x.108 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      VGetArg(statics, 6-1, 0),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.i.70 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10) (bruijn ##.str.69 1 0) 0 (bruijn ##.i.70 0 0)) ((bruijn ##.%k.106 5 0) (bruijn ##.sym.67 5 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k10, self)))),
      statics->vars[0],
      VEncodeInt(0l),
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VGetArg(statics, 5-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler utils strrchr) #t (bruijn ##.strrchr.54 5 1) (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9) (bruijn ##.str.69 0 0) #\.)
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k9, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VEncodeChar('.');
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strrchr(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.107 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8) (bruijn ##.str.68 2 0) 3) ((bruijn ##.%k.106 3 0) (bruijn ##.sym.67 3 1)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k8, self)))),
      statics->up->vars[0],
      VEncodeInt(3l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.189 ##.%p.190) ((##vcore.string-length (bruijn ##.str.68 1 0)) (##vcore.> (bruijn ##.%x.189 0 0) 3)) ((close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5) (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      self->vars[0],
      VEncodeInt(3l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k7, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0ungensym(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0ungensym, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4) (bruijn ##.sym.67 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym_V0k4, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.192) ((##vcore.>= (bruijn ##.i.75 1 1) 0)) (if (bruijn ##.%p.192 0 0) (basic-block 2 2 (##.%x.193 ##.p.21.194) ((##vcore.string-ref (bruijn ##.str.71 5 1) (bruijn ##.i.75 2 1)) (##vcore.eq? (bruijn ##.%x.193 0 0) (bruijn ##.chr.72 5 2))) (if (bruijn ##.p.21.194 0 1) ((bruijn ##.%k.115 2 0) (bruijn ##.i.75 2 1)) (basic-block 1 1 (##.%x.195) ((##vcore.- (bruijn ##.i.75 3 1) 1)) (##qualified-call (vanity compiler utils strrchr ##.loop.12.74) #f (bruijn ##.loop.12.74 4 0) (bruijn ##.%k.115 3 0) (bruijn ##.%x.195 0 0))))) (##qualified-call (vanity compiler utils strrchr ##.finalize.13.73) #f (bruijn ##.finalize.13.73 3 0) (bruijn ##.%k.115 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->vars[1],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 2));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSub2(runtime, NULL,
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
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
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
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74")) (basic-block 2 2 (##.%x.196 ##.%x.197) ((##vcore.string-length (bruijn ##.str.71 3 1)) (##vcore.- (bruijn ##.%x.196 0 0) 1)) (##qualified-call (vanity compiler utils strrchr ##.loop.12.74) #f (bruijn ##.loop.12.74 1 0) (bruijn ##.%k.113 3 0) (bruijn ##.%x.197 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74, self))));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VSub2(runtime, NULL,
      self->vars[0],
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(statics->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dloop_D12_D74(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.114 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0utils_V0strrchr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strrchr, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3) (close "_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73"))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V0lambda3, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr_V10_Dfinalize_D13_D73, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.199) ((##vcore.< (bruijn ##.i.82 1 1) (bruijn ##.y.10.198 4 0))) (if (bruijn ##.%p.199 0 0) (basic-block 2 2 (##.%x.200 ##.p.11.201) ((##vcore.string-ref (bruijn ##.str.77 6 1) (bruijn ##.i.82 2 1)) (##vcore.eq? (bruijn ##.%x.200 0 0) (bruijn ##.chr.78 6 2))) (if (bruijn ##.p.11.201 0 1) ((bruijn ##.%k.123 2 0) (bruijn ##.i.82 2 1)) (basic-block 1 1 (##.%x.202) ((##vcore.+ (bruijn ##.i.82 3 1) 1)) (##qualified-call (vanity compiler utils strchr ##.loop.1.81) #f (bruijn ##.loop.1.81 4 0) (bruijn ##.%k.123 3 0) (bruijn ##.%x.202 0 0))))) (##qualified-call (vanity compiler utils strchr ##.finalize.2.80) #f (bruijn ##.finalize.2.80 3 0) (bruijn ##.%k.123 1 0))))
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
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 6-1, 2));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[1]);
} else {
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
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
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
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80(runtime, _closure_env, 1, _arg0);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81")) (##qualified-call (vanity compiler utils strchr ##.loop.1.81) #f (bruijn ##.loop.1.81 0 0) (bruijn ##.%k.121 3 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dloop_D1_D81(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.122 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0utils_V0strchr(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0strchr, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.y.10.198) ((##vcore.string-length (bruijn ##.str.77 1 1))) ((close _V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4) (close "_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80")))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V0lambda4, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr_V10_Dfinalize_D2_D80, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0get__feature__list(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0get__feature__list, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.127 0 0) (bruijn ##.feature-list.58 1 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[5]);
}
void _V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
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
  // (set! (bruijn ##.%k.128 0 0) (bruijn ##.feature-list.58 1 5) (bruijn ##.lst.84 0 1))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      _var0,
      VEncodeInt(1l), VEncodeInt(5l),
      _var1
    );
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.207) ((##vcore.cons (bruijn ##.%x.205 2 0) (bruijn ##.%x.133 1 0))) ((bruijn ##.%k.129 6 0) (bruijn ##.%r.207 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.131 0 0) (basic-block 2 2 (##.%x.205 ##.%x.206) ((##vcore.car (bruijn ##.lst.86 4 2)) (##vcore.cdr (bruijn ##.lst.86 4 2))) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.61 5 8) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k12) (bruijn ##.p.85 4 1) (bruijn ##.%x.206 0 1))) (basic-block 1 1 (##.%x.208) ((##vcore.cdr (bruijn ##.lst.86 4 2))) (##qualified-call (vanity compiler utils filter) #t (bruijn ##.filter.61 5 8) (bruijn ##.%k.129 4 0) (bruijn ##.p.85 4 1) (bruijn ##.%x.208 0 0))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k12, self))));
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0utils;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->up->up->vars[1];
    VWORD _arg2 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0filter(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0filter(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (basic-block 1 1 (##.%p.203) ((##vcore.null? (bruijn ##.lst.86 1 2))) (if (bruijn ##.%p.203 0 0) ((bruijn ##.%k.129 1 0) '()) (basic-block 1 1 (##.%x.204) ((##vcore.car (bruijn ##.lst.86 2 2))) ((bruijn ##.p.85 2 1) (close _V50_V0vanity_V0compiler_V0utils_V0filter_V0k11) (bruijn ##.%x.204 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[2]);
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
      statics->up->vars[2]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter_V0k11, self)))),
      self->vars[0]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.newline.22 4 0) (bruijn ##.%k.137 2 0) (bruijn ##.%x.138 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.23 3 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k16, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.write.25 6 3) (bruijn ##.%k.139 2 0) (bruijn ##.irr.89 2 1) (bruijn ##.%x.140 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 3)), 3,
      statics->up->vars[0],
      statics->up->vars[1],
      _var0);
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.current-error-port.23 5 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k19, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.display.24 5 2) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18) (##string ##.string.241) (bruijn ##.%x.141 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k18, self)))),
      VEncodePointer(&_V10_Dstring_D241.sym, VPOINTER_OTHER),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.current-error-port.23 4 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k17, self)))));
}
static void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.for-each.26 3 4) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5) (bruijn ##.irritants.88 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[4]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k15, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0lambda5, self)))),
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.format.27 3 5) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14) (bruijn ##.%x.142 0 0) (##string ##.string.242) (bruijn ##.msg.87 1 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k14, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D242.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__warning(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
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
  // ((bruijn ##.current-error-port.23 2 1) (close _V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning_V0k13, self)))));
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.raise (bruijn ##.%k.143 1 0) (bruijn ##.%x.144 0 0))
    VCallFuncWithGC(runtime, (VFunc)VRaise, 2,
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0compiler__error(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, ...) {
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
  // (##vcore.record (close _V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20) #f 'compiler-error (bruijn ##.msg.90 0 1) (bruijn ##.irritants.91 0 2))
    VCallFuncWithGC(runtime, (VFunc)VCreateRecord2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error_V0k20, self)))),
      VEncodeBool(false),
      _V0compiler__error,
      _var1,
      _varargs);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.fd.96 0 0) ((bruijn ##.%k.146 4 0) (bruijn ##.fd.96 0 0)) (basic-block 1 1 (##.%x.211) ((##vcore.cdr (bruijn ##.paths.95 5 1))) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.94) #f (bruijn ##.loop.94 6 0) (bruijn ##.%k.146 5 0) (bruijn ##.%x.211 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
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
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.open-input-file.28 7 6) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22) (bruijn ##.%x.149 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k22, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.209) ((##vcore.null? (bruijn ##.paths.95 1 1))) (if (bruijn ##.%p.209 0 0) ((bruijn ##.%k.146 1 0) #f) (basic-block 1 1 (##.%x.210) ((##vcore.car (bruijn ##.paths.95 2 1))) ((bruijn ##.string-append.29 6 7) (close _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21) (bruijn ##.%x.210 0 0) (##string ##.string.243) (bruijn ##.file.92 4 1)))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94_V0k21, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D243.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94")) (##qualified-call (vanity compiler utils search-open-input-file ##.loop.94) #f (bruijn ##.loop.94 0 0) (bruijn ##.%k.145 1 0) (bruijn ##.paths.93 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94, self))));
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
       _V50_V0vanity_V0compiler_V0utils_V0search__open__input__file_V10_Dloop_D94(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.154 0 0) ((bruijn ##.%k.152 4 0) (bruijn ##.path.101 1 0)) (basic-block 1 1 (##.%x.214) ((##vcore.cdr (bruijn ##.paths.100 5 1))) (##qualified-call (vanity compiler utils resolve-file-path ##.loop.99) #f (bruijn ##.loop.99 6 0) (bruijn ##.%k.152 5 0) (bruijn ##.%x.214 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->vars[0]);
} else {
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
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.file-exists?.30 7 8) (close _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24) (bruijn ##.path.101 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k24, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.212) ((##vcore.null? (bruijn ##.paths.100 1 1))) (if (bruijn ##.%p.212 0 0) ((bruijn ##.%k.152 1 0) #f) (basic-block 1 1 (##.%x.213) ((##vcore.car (bruijn ##.paths.100 2 1))) ((bruijn ##.string-append.29 6 7) (close _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23) (bruijn ##.%x.213 0 0) (##string ##.string.243) (bruijn ##.file.97 4 1)))))
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
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 7)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99_V0k23, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D243.sym, VPOINTER_OTHER),
      statics->up->up->up->vars[1]);
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99")) (##qualified-call (vanity compiler utils resolve-file-path ##.loop.99) #f (bruijn ##.loop.99 0 0) (bruijn ##.%k.151 1 0) (bruijn ##.paths.98 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99, self))));
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
       _V50_V0vanity_V0compiler_V0utils_V0resolve__file__path_V10_Dloop_D99(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.216) ((##vcore.cons (bruijn ##.expr.103 3 0) (bruijn ##.%x.159 1 0))) ((bruijn ##.%k.157 4 0) (bruijn ##.%r.216 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.215) ((##vcore.eof-object? (bruijn ##.expr.103 1 0))) (if (bruijn ##.%p.215 0 0) ((bruijn ##.%k.157 2 0) '()) (##qualified-call (vanity compiler utils read-all) #t (bruijn ##.read-all.66 3 13) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26) (bruijn ##.port.102 2 1))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k26, self))));
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
  // ((bruijn ##.read.31 2 9) (close _V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25) (bruijn ##.port.102 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[9]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all_V0k25, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.32 5 10) (bruijn ##.%k.183 2 0) (##string ##.string.244) (bruijn ##.%x.184 0 0) (##string ##.string.245))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 4,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D244.sym, VPOINTER_OTHER),
      _var0,
      VEncodePointer(&_V10_Dstring_D245.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.%x.185 0 0) (close _V0vanity_V0compiler_V0utils_V20_V0k29))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k29, self)))));
}
static void _V0vanity_V0compiler_V0utils_V20_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.217 1 0) (##vcore.function (close _V0vanity_V0compiler_V0utils_V20_V0k28) (##string ##.string.246)) ((bruijn ##.%k.183 0 0) (##string ##.string.247)))
if(VDecodeBool(
statics->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VFunction2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k28, self)))),
      VEncodePointer(&_V10_Dstring_D246.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D247.sym, VPOINTER_OTHER));
}
}
static void _V0vanity_V0compiler_V0utils_V20_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 22 22 (##.%x.218 ##.%x.219 ##.%x.220 ##.%x.221 ##.%x.222 ##.%x.223 ##.%x.224 ##.%x.225 ##.%x.226 ##.%x.227 ##.%x.228 ##.%x.229 ##.%x.230 ##.%x.231 ##.%x.232 ##.%x.233 ##.%x.234 ##.%x.235 ##.%x.236 ##.%x.237 ##.%x.238 ##.%r.239) ((##vcore.cons 'read-all (bruijn ##.read-all.66 3 13)) (##vcore.cons 'resolve-file-path (bruijn ##.resolve-file-path.65 3 12)) (##vcore.cons 'search-open-input-file (bruijn ##.search-open-input-file.64 3 11)) (##vcore.cons 'compiler-error (bruijn ##.compiler-error.63 3 10)) (##vcore.cons 'compiler-warning (bruijn ##.compiler-warning.62 3 9)) (##vcore.cons 'gensym (bruijn ##.gensym.59 3 6)) (##vcore.cons 'filter (bruijn ##.filter.61 3 8)) (##vcore.cons 'gcc-path (bruijn ##.gcc-path.60 3 7)) (##vcore.cons 'set-feature-list! (bruijn ##.set-feature-list!.57 3 4)) (##vcore.cons 'get-feature-list (bruijn ##.get-feature-list.56 3 3)) (##vcore.cons 'ungensym (bruijn ##.ungensym.53 3 0)) (##vcore.cons (bruijn ##.%x.228 0 10) '()) (##vcore.cons (bruijn ##.%x.227 0 9) (bruijn ##.%x.229 0 11)) (##vcore.cons (bruijn ##.%x.226 0 8) (bruijn ##.%x.230 0 12)) (##vcore.cons (bruijn ##.%x.225 0 7) (bruijn ##.%x.231 0 13)) (##vcore.cons (bruijn ##.%x.224 0 6) (bruijn ##.%x.232 0 14)) (##vcore.cons (bruijn ##.%x.223 0 5) (bruijn ##.%x.233 0 15)) (##vcore.cons (bruijn ##.%x.222 0 4) (bruijn ##.%x.234 0 16)) (##vcore.cons (bruijn ##.%x.221 0 3) (bruijn ##.%x.235 0 17)) (##vcore.cons (bruijn ##.%x.220 0 2) (bruijn ##.%x.236 0 18)) (##vcore.cons (bruijn ##.%x.219 0 1) (bruijn ##.%x.237 0 19)) (##vcore.cons (bruijn ##.%x.218 0 0) (bruijn ##.%x.238 0 20))) ((bruijn ##.%k.105 8 0) (bruijn ##.%r.239 0 21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[22]; } container;
    self = &container.self;
    VInitEnv(self, 22, 22, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0read__all,
      statics->up->up->vars[13]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0resolve__file__path,
      statics->up->up->vars[12]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0search__open__input__file,
      statics->up->up->vars[11]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0compiler__error,
      statics->up->up->vars[10]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0compiler__warning,
      statics->up->up->vars[9]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0gensym,
      statics->up->up->vars[6]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0filter,
      statics->up->up->vars[8]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0gcc__path,
      statics->up->up->vars[7]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      _V0set__feature__list_B,
      statics->up->up->vars[4]);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      _V0get__feature__list,
      statics->up->up->vars[3]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      _V0ungensym,
      statics->up->up->vars[0]);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[21]);
    }
}
static void _V0vanity_V0compiler_V0utils_V20_V0k31(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k32) (bruijn ##.feature-list.58 2 5) '(##pair ##.pair.251))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k32, self)))),
      VEncodeInt(2l), VEncodeInt(5l),
      VEncodePointer(&_V10_Dpair_D251, VPOINTER_PAIR)
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0utils_V20_V0k31) (bruijn ##.gcc-path.60 2 7) (bruijn ##.%x.181 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k31, self)))),
      VEncodeInt(2l), VEncodeInt(7l),
      _var0
    );
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11) {
 if(argc != 12) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda2, got ~D~N"
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
  // (##letrec (vanity compiler utils) 14 ((close "_V50_V0vanity_V0compiler_V0utils_V0ungensym" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0strrchr" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0strchr" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0get__feature__list" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B" (vanity compiler utils)) #f (##intrinsic ##vcore.gensym) #f (close "_V50_V0vanity_V0compiler_V0utils_V0filter" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__warning" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0compiler__error" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path" (vanity compiler utils)) (close "_V50_V0vanity_V0compiler_V0utils_V0read__all" (vanity compiler utils))) (basic-block 1 1 (##.%p.217) ((##vcore.eq? (bruijn ##.platform.33 2 11) 'windows)) ((close _V0vanity_V0compiler_V0utils_V20_V0k27) (close _V0vanity_V0compiler_V0utils_V20_V0k30))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[14]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0utils = self;
    VInitEnv(self, 14, 14, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0ungensym, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strrchr, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0strchr, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0get__feature__list, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0set__feature__list_B, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[5] = VEncodeBool(false);
    self->vars[6] = _V40_V10vcore_Dgensym;
    self->vars[7] = VEncodeBool(false);
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0filter, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__warning, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0compiler__error, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0search__open__input__file, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0resolve__file__path, _V60_V0vanity_V0compiler_V0utils))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0utils_V0read__all, _V60_V0vanity_V0compiler_V0utils))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0utils_V20", &_V60_V0vanity_V0compiler_V0utils);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->up->vars[11],
      _V0windows);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k30, self)))));
    }
    }
}
static void _V0vanity_V0compiler_V0utils_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0utils_V20_V0lambda2) (##string ##.string.252) (bruijn ##.%x.186 0 0) 'newline 'current-error-port 'display 'write 'for-each 'format 'open-input-file 'string-append 'file-exists? 'read 'sprintf 'platform)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 15,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D252.sym, VPOINTER_OTHER),
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
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0utils_V20_V0k3) (bruijn ##.%x.187 1 0) (bruijn ##.%x.188 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k3, self)))),
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0utils_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k2) (##string ##.string.253))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D253.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0utils_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0utils_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0utils_V20_V0k1) (##string ##.string.254))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0utils_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D254.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0utils_V20 = (VFunc)_V0vanity_V0compiler_V0utils_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
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
  _V0vanity__scheme__0_D0 = VEncodePointer(VInternSymbol(-1138579618, &_VW_V0vanity__scheme__0_D0.sym), VPOINTER_OTHER);
  _V0vanity__scheme = VEncodePointer(VInternSymbol(275192804, &_VW_V0vanity__scheme.sym), VPOINTER_OTHER);
  _V0ieee__float = VEncodePointer(VInternSymbol(-1891017625, &_VW_V0ieee__float.sym), VPOINTER_OTHER);
  _V0r7rs = VEncodePointer(VInternSymbol(982406193, &_VW_V0r7rs.sym), VPOINTER_OTHER);
  _V0ungensym = VEncodePointer(VInternSymbol(798488995, &_VW_V0ungensym.sym), VPOINTER_OTHER);
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
  _V10_Dpair_D251.first = _V0r7rs;
  _V10_Dpair_D251.rest = VEncodePointer(&_V10_Dpair_D250, VPOINTER_PAIR);
  _V10_Dpair_D250.first = _V0ieee__float;
  _V10_Dpair_D250.rest = VEncodePointer(&_V10_Dpair_D249, VPOINTER_PAIR);
  _V10_Dpair_D249.first = _V0vanity__scheme;
  _V10_Dpair_D249.rest = VEncodePointer(&_V10_Dpair_D248, VPOINTER_PAIR);
  _V10_Dpair_D248.first = _V0vanity__scheme__0_D0;
  _V10_Dpair_D248.rest = VNULL;
  _V40_V10vcore_Dgensym = VEncodePointer(VLookupConstant("_V40_V10vcore_Dgensym", &_VW_V40_V10vcore_Dgensym), VPOINTER_CLOSURE);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
