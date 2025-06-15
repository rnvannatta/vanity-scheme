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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D325 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D324 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D323 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D322 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0gather__dependencies;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0gather__dependencies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "gather-dependencies" };
VWEAK VWORD _V0import___Gpath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0import___Gpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "import->path" };
VWEAK VWORD _V0import__basepath;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0import__basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "import-basepath" };
VWEAK VWORD _V0valid__import_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0valid__import_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "valid-import\?" };
VWEAK VWORD _V0header__from__library;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0header__from__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "header-from-library" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0find__library__interface_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0find__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "find-library-interface!" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "not a valid library" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0constant__export;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0constant__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "constant-export" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V0define__library__interface;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0define__library__interface = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "define-library-interface" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D320 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D319 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D318 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D317 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D316 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
static __attribute__((constructor)) void VDllMain1() {
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VLookupConstant("_V0read__all", &_VW_V0read__all), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VLookupConstant("_V0search__open__input__file", &_VW_V0search__open__input__file), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0gather__dependencies = VEncodePointer(VLookupConstant("_V0gather__dependencies", &_VW_V0gather__dependencies), VPOINTER_OTHER);
  _V0import___Gpath = VEncodePointer(VLookupConstant("_V0import___Gpath", &_VW_V0import___Gpath), VPOINTER_OTHER);
  _V0import__basepath = VEncodePointer(VLookupConstant("_V0import__basepath", &_VW_V0import__basepath), VPOINTER_OTHER);
  _V0valid__import_Q = VEncodePointer(VLookupConstant("_V0valid__import_Q", &_VW_V0valid__import_Q), VPOINTER_OTHER);
  _V0header__from__library = VEncodePointer(VLookupConstant("_V0header__from__library", &_VW_V0header__from__library), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VLookupConstant("_V0register__library__interface_B", &_VW_V0register__library__interface_B), VPOINTER_OTHER);
  _V0find__library__interface_B = VEncodePointer(VLookupConstant("_V0find__library__interface_B", &_VW_V0find__library__interface_B), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VLookupConstant("_V0define__library", &_VW_V0define__library), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VLookupConstant("_V0define__constant", &_VW_V0define__constant), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V0constant__export = VEncodePointer(VLookupConstant("_V0constant__export", &_VW_V0constant__export), VPOINTER_OTHER);
  _V0export = VEncodePointer(VLookupConstant("_V0export", &_VW_V0export), VPOINTER_OTHER);
  _V0import = VEncodePointer(VLookupConstant("_V0import", &_VW_V0import), VPOINTER_OTHER);
  _V0define__library__interface = VEncodePointer(VLookupConstant("_V0define__library__interface", &_VW_V0define__library__interface), VPOINTER_OTHER);
}
static void _V10_Dload__library__interface_D48_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.62 1 0) ((bruijn ##.x.120 15 0) (bruijn ##.k.139 0 0) (bruijn ##.fd.62 1 0)) ((bruijn ##.x.119 16 0) (bruijn ##.k.139 0 0) (##string ##.string.316) (bruijn ##.import.60 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D316.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
static void _V10_Dload__library__interface_D48_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.parse.63 1 0)) ((bruijn ##.k.137 0 0) (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.63 1 0)))) ((bruijn ##.k.137 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dload__library__interface_D48_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.134 1 0) ((bruijn ##.k.135 0 0) (##inline ##vcore.car (bruijn ##.parse.63 2 0))) ((bruijn ##.x.119 18 0) (bruijn ##.k.135 0 0) (##string ##.string.317)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D317.sym, VPOINTER_OTHER));
}
}
static void _V10_Dload__library__interface_D48_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.131 7 0) (bruijn ##.parse.64 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      statics->up->vars[0]);
}
static void _V10_Dload__library__interface_D48_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.register-library-interface!.49 7 2) (close _V10_Dload__library__interface_D48_k27) (bruijn ##.parse.64 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k27, self)})),
      statics->vars[0]);
}
static void _V10_Dload__library__interface_D48_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.118 19 0) (close _V10_Dload__library__interface_D48_k26) (bruijn ##.fd.62 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k26, self)})),
      statics->up->up->vars[0]);
}
static void _V10_Dload__library__interface_D48_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D48_k24) (close _V10_Dload__library__interface_D48_k25))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dload__library__interface_D48_k24, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k25, self)})));
}
static void _V10_Dload__library__interface_D48_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D48_k22) (close _V10_Dload__library__interface_D48_k23))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dload__library__interface_D48_k22, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k23, self)})));
}
static void _V10_Dload__library__interface_D48_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D48_k20) (close _V10_Dload__library__interface_D48_k21))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dload__library__interface_D48_k20, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k21, self)})));
}
static void _V10_Dload__library__interface_D48_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.121 12 0) (close _V10_Dload__library__interface_D48_k19) (bruijn ##.x.140 0 0) (bruijn ##.paths.61 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k19, self)})),
      _var0,
      statics->vars[2]);
}
static void _V10_Dload__library__interface_D48_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D48_lambda2, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.import->path.56 1 9) (close _V10_Dload__library__interface_D48_k18) (bruijn ##.import.60 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[9]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_k18, self)})),
      _var1);
}
static void _V10_Dregister__library__interface_B_D49_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.141 4 0) (bruijn ##.x.143 0 0) (bruijn ##.lib.65 4 1))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[1]);
}
static void _V10_Dregister__library__interface_B_D49_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.123 12 0) (close _V10_Dregister__library__interface_B_D49_k31) (bruijn ##.x.144 0 0) (bruijn ##.library-interfaces.47 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_k31, self)})),
      _var0,
      statics->up->up->up->vars[0]);
}
static void _V10_Dregister__library__interface_B_D49_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.141 3 0) (bruijn ##.library-interfaces.47 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.147 0 0) (bruijn ##.lib.65 3 1)) (bruijn ##.library-interfaces.47 4 0)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      statics->up->up->vars[0],
      VEncodeInt(4l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        statics->up->up->vars[1]),
        statics->up->up->up->vars[0])
    );
}
static void _V10_Dregister__library__interface_B_D49_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.142 0 0) ((bruijn ##.x.122 12 0) (close _V10_Dregister__library__interface_B_D49_k30) (bruijn ##.lib.65 2 1)) ((bruijn ##.x.122 12 0) (close _V10_Dregister__library__interface_B_D49_k32) (bruijn ##.lib.65 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_k30, self)})),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_k32, self)})),
      statics->up->vars[1]);
}
}
static void _V10_Dregister__library__interface_B_D49_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.123 10 0) (close _V10_Dregister__library__interface_B_D49_k29) (bruijn ##.x.148 0 0) (bruijn ##.library-interfaces.47 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_k29, self)})),
      _var0,
      statics->up->vars[0]);
}
static void _V10_Dregister__library__interface_B_D49_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D49_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.122 10 0) (close _V10_Dregister__library__interface_B_D49_k28) (bruijn ##.lib.65 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_k28, self)})),
      _var1);
}
static void _V10_Dfind__library__interface_B_D50_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__library__interface_B_D50_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.68 0 0) ((bruijn ##.k.149 1 0) (##inline ##vcore.cdr (bruijn ##.lookup.68 0 0))) ((bruijn ##.load-library-interface.48 2 1) (bruijn ##.k.149 1 0) (bruijn ##.import.66 1 1) (bruijn ##.paths.67 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[1]), 3,
      statics->vars[0],
      statics->vars[1],
      statics->vars[2]);
}
}
static void _V10_Dfind__library__interface_B_D50_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__library__interface_B_D50_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.123 9 0) (close _V10_Dfind__library__interface_B_D50_k33) (bruijn ##.import.66 0 1) (bruijn ##.library-interfaces.47 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__library__interface_B_D50_k33, self)})),
      _var1,
      statics->vars[0]);
}
static void _V10_Dacceptable__char_Q_D51_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D51_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.150 6 0) (bruijn ##.p.153 0 0)) ((bruijn ##.x.124 14 0) (bruijn ##.k.150 6 0) (bruijn ##.c.69 6 1) (##inline ##vcore.qcons '#\- (##inline ##vcore.qcons '#\_ '()))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      VInlineCons2(runtime,
        VEncodeChar('-'),
        VInlineCons2(runtime,
        VEncodeChar('_'),
        VNULL)));
}
}
static void _V10_Dacceptable__char_Q_D51_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D51_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.152 0 0) ((bruijn ##.k.150 4 0) (bruijn ##.p.152 0 0)) (basic-block 2 2 (##.reg.309 ##.reg.310) ((##vcore.char-integer #\0) (##vcore.char-integer #\9)) (##vcore.<= (close _V10_Dacceptable__char_Q_D51_k36) (bruijn ##.reg.309 0 0) (bruijn ##.reg.304 4 0) (bruijn ##.reg.310 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('0'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('9'));
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D51_k36, self)})),
      self->vars[0],
      statics->up->up->up->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dacceptable__char_Q_D51_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D51_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.151 0 0) ((bruijn ##.k.150 2 0) (bruijn ##.p.151 0 0)) (basic-block 2 2 (##.reg.307 ##.reg.308) ((##vcore.char-integer #\A) (##vcore.char-integer #\Z)) (##vcore.<= (close _V10_Dacceptable__char_Q_D51_k35) (bruijn ##.reg.307 0 0) (bruijn ##.reg.304 2 0) (bruijn ##.reg.308 0 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      _var0);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('A'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('Z'));
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D51_k35, self)})),
      self->vars[0],
      statics->up->vars[0],
      self->vars[1]);
    }
}
}
static void _V10_Dacceptable__char_Q_D51_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D51_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 3 3 (##.reg.304 ##.reg.305 ##.reg.306) ((##vcore.char-integer (bruijn ##.c.69 1 1)) (##vcore.char-integer #\a) (##vcore.char-integer #\z)) (##vcore.<= (close _V10_Dacceptable__char_Q_D51_k34) (bruijn ##.reg.305 0 1) (bruijn ##.reg.304 0 0) (bruijn ##.reg.306 0 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('a'));
    self->vars[2] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('z'));
    VCallFuncWithGC(runtime, (VFunc)VCmpLe, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D51_k34, self)})),
      self->vars[1],
      self->vars[0],
      self->vars[2]);
    }
}
static void _V10_Dloop_D73_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) (basic-block 1 1 (##.reg.313) ((##vcore.+ (bruijn ##.i.74 4 1) 1)) ((bruijn ##.loop.73 5 0) (bruijn ##.k.163 4 0) (bruijn ##.reg.313 0 0))) ((bruijn ##.k.163 3 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      statics->up->up->up->vars[0],
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D73_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.164 0 0) (basic-block 1 1 (##.reg.312) ((##vcore.string-ref (bruijn ##.str.71 5 1) (bruijn ##.i.74 2 1))) ((bruijn ##.acceptable-char?.51 6 4) (close _V10_Dloop_D73_k38) (bruijn ##.reg.312 0 0))) ((bruijn ##.k.163 1 0) #t))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 4)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k38, self)})),
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
}
}
static void _V10_Dloop_D73_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D73_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D73_k37) (bruijn ##.i.74 0 1) (bruijn ##.reg.311 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_k37, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dacceptable__characters_Q_D52_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__characters_Q_D52_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.311) ((##vcore.string-length (bruijn ##.str.71 1 1))) (letrec 1 ((close _V10_Dloop_D73_lambda7)) ((bruijn ##.loop.73 0 0) (bruijn ##.k.162 2 0) 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[1]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D73_lambda7, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->vars[0],
      VEncodeInt(0l));
    }
    }
}
static void _V10_Dandf_D53_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dandf_D53_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.a.75 0 1) ((bruijn ##.k.168 0 0) (bruijn ##.b.76 0 2)) ((bruijn ##.k.168 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalid__import__element_Q_D54_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D54_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.acceptable-characters?.52 6 5) (bruijn ##.k.169 5 0) (bruijn ##.x.172 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      VGetArg(statics, 5-1, 0),
      _var0);
}
static void _V10_Dvalid__import__element_Q_D54_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D54_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.171 0 0) (##vcore.symbol->string (close _V10_Dvalid__import__element_Q_D54_k41) (bruijn ##.x.77 4 1)) ((bruijn ##.k.169 4 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D54_k41, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dvalid__import__element_Q_D54_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D54_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.315) ((##vcore.string-length (bruijn ##.x.174 1 0))) (##vcore.> (close _V10_Dvalid__import__element_Q_D54_k40) (bruijn ##.reg.315 0 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCmpGt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D54_k40, self)})),
      self->vars[0],
      VEncodeInt(0l));
    }
}
static void _V10_Dvalid__import__element_Q_D54_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D54_lambda9, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.314) ((##vcore.symbol? (bruijn ##.x.77 1 1))) (if (bruijn ##.reg.314 0 0) (##vcore.symbol->string (close _V10_Dvalid__import__element_Q_D54_k39) (bruijn ##.x.77 1 1)) ((bruijn ##.k.169 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D54_k39, self)})),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
static void _V10_Dvalid__import_Q_D55_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import_Q_D55_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.126 7 0) (bruijn ##.k.175 1 0) (bruijn ##.andf.53 2 6) #t (bruijn ##.x.177 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 4,
      statics->vars[0],
      statics->up->vars[6],
      VEncodeBool(true),
      _var0);
}
static void _V10_Dvalid__import_Q_D55_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import_Q_D55_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.import.78 0 1)) ((bruijn ##.x.125 7 0) (close _V10_Dvalid__import_Q_D55_k42) (bruijn ##.valid-import-element?.54 1 7) (bruijn ##.import.78 0 1)) ((bruijn ##.k.175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import_Q_D55_k42, self)})),
      statics->vars[7],
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dimport___Gpath_D56_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D56_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.127 6 0) (bruijn ##.k.178 1 0) (##string ##.string.319) (##inline ##vcore.car (bruijn ##.import.79 1 1)) (bruijn ##.x.182 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D319.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dimport___Gpath_D56_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D56_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.79 0 1))) ((bruijn ##.x.127 5 0) (bruijn ##.k.178 0 0) (##string ##.string.318) (##inline ##vcore.car (bruijn ##.import.79 0 1))) ((bruijn ##.import->path.56 1 9) (close _V10_Dimport___Gpath_D56_k43) (##inline ##vcore.cdr (bruijn ##.import.79 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D318.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[9]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D56_k43, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Dimport__basepath_D57_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D57_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.127 6 0) (bruijn ##.k.185 1 0) (##string ##.string.319) (##inline ##vcore.car (bruijn ##.import.80 1 1)) (bruijn ##.x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D319.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
static void _V10_Dimport__basepath_D57_lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D57_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.80 0 1))) ((bruijn ##.k.185 0 0) (##string ##.string.320)) ((bruijn ##.import-basepath.57 1 10) (close _V10_Dimport__basepath_D57_k44) (##inline ##vcore.cdr (bruijn ##.import.80 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D320.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[10]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D57_k44, self)})),
      VInlineCdr2(runtime,
        _var1));
}
}
static void _V10_Diter_D82_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.192 1 0) (##inline ##vcore.cons 'define-library-interface (##inline ##vcore.cons (bruijn ##.x.195 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'import (bruijn ##.imports.85 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'export (bruijn ##.exports.84 1 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'constant-export (bruijn ##.constants.83 1 1)) '()))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define__library__interface,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import,
        statics->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0export,
        statics->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0constant__export,
        statics->vars[1]),
        VNULL))))));
}
static void _V10_Diter_D82_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 0 0) (bruijn ##.k.239 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D82_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 7 0) (bruijn ##.k.242 1 0) (bruijn ##.constants.83 6 1) (bruijn ##.x.243 0 0) (bruijn ##.imports.85 6 3) (##inline ##vcore.cdr (bruijn ##.rest.86 6 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 5,
      statics->vars[0],
      VGetArg(statics, 6-1, 1),
      _var0,
      VGetArg(statics, 6-1, 3),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 4)));
}
static void _V10_Diter_D82_lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 10 0) (close _V10_Diter_D82_k50) (bruijn ##.exports.84 5 2) (##inline ##vcore.cdr (bruijn ##.input.6.88 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k50, self)})),
      VGetArg(statics, 5-1, 2),
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
}
static void _V10_Diter_D82_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) (##vcore.call-with-values (close _V10_Diter_D82_k49) (close _V10_Diter_D82_lambda16) (bruijn ##.kk.5.87 3 1)) ((bruijn ##.k.239 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k49, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda16, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 1 0)) ((bruijn ##.x.128 9 0) (close _V10_Diter_D82_k48) 'export (##inline ##vcore.car (bruijn ##.input.6.88 1 0))) ((bruijn ##.k.239 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k48, self)})),
      _V0export,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.233 0 0) (bruijn ##.k.231 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D82_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 8 0) (bruijn ##.k.234 1 0) (bruijn ##.constants.83 7 1) (bruijn ##.exports.84 7 2) (bruijn ##.x.235 0 0) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 5,
      statics->vars[0],
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      _var0,
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4)));
}
static void _V10_Diter_D82_lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 11 0) (close _V10_Diter_D82_k55) (bruijn ##.imports.85 6 3) (##inline ##vcore.cdr (bruijn ##.input.6.88 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k55, self)})),
      VGetArg(statics, 6-1, 3),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
}
static void _V10_Diter_D82_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) (##vcore.call-with-values (close _V10_Diter_D82_k54) (close _V10_Diter_D82_lambda17) (bruijn ##.kk.5.87 4 1)) ((bruijn ##.k.231 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k54, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda17, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 2 0)) ((bruijn ##.x.128 10 0) (close _V10_Diter_D82_k53) 'import (##inline ##vcore.car (bruijn ##.input.6.88 2 0))) ((bruijn ##.k.231 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k53, self)})),
      _V0import,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.225 0 0) (bruijn ##.k.223 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Diter_D82_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 9 0) (bruijn ##.k.226 1 0) (bruijn ##.constants.83 8 1) (bruijn ##.exports.84 8 2) (bruijn ##.imports.85 8 3) (bruijn ##.x.227 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 5,
      statics->vars[0],
      VGetArg(statics, 8-1, 1),
      VGetArg(statics, 8-1, 2),
      VGetArg(statics, 8-1, 3),
      _var0);
}
static void _V10_Diter_D82_lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 12 0) (close _V10_Diter_D82_k60) (##inline ##vcore.cdr (bruijn ##.input.6.88 5 0)) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k60, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4)));
}
static void _V10_Diter_D82_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) (##vcore.call-with-values (close _V10_Diter_D82_k59) (close _V10_Diter_D82_lambda18) (bruijn ##.kk.5.87 5 1)) ((bruijn ##.k.223 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k59, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda18, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 3 0)) ((bruijn ##.x.128 11 0) (close _V10_Diter_D82_k58) 'begin (##inline ##vcore.car (bruijn ##.input.6.88 3 0))) ((bruijn ##.k.223 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k58, self)})),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.215 0 0) (bruijn ##.k.210 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
static void _V10_Diter_D82_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 12 0) (bruijn ##.k.216 1 0) (##inline ##vcore.cons (bruijn ##.x.219 0 0) (bruijn ##.constants.83 11 1)) (bruijn ##.exports.84 11 2) (bruijn ##.imports.85 11 3) (##inline ##vcore.cdr (bruijn ##.rest.86 11 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 5,
      statics->vars[0],
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 11-1, 1)),
      VGetArg(statics, 11-1, 2),
      VGetArg(statics, 11-1, 3),
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 4)));
}
static void _V10_Diter_D82_lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.130 14 0) (close _V10_Diter_D82_k67) (##inline ##vcore.car (bruijn ##.expr.11.96 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.98 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k67, self)})),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
static void _V10_Diter_D82_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.98 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.98 0 0))) (##vcore.call-with-values (close _V10_Diter_D82_k66) (close _V10_Diter_D82_lambda19) (bruijn ##.kk.5.87 8 1)) ((bruijn ##.k.210 3 0) #f)) ((bruijn ##.k.210 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k66, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda19, self)})),
      VGetArg(statics, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.96 0 0)) ((close _V10_Diter_D82_k65) (##inline ##vcore.cdr (bruijn ##.expr.11.96 0 0))) ((bruijn ##.k.210 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k65, .env = self }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((close _V10_Diter_D82_k64) (##inline ##vcore.cdr (bruijn ##.input.6.88 5 0))) ((bruijn ##.k.210 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k64, .env = self }, }, 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 4 0)) ((bruijn ##.x.128 12 0) (close _V10_Diter_D82_k63) 'define-constant (##inline ##vcore.car (bruijn ##.input.6.88 4 0))) ((bruijn ##.k.210 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k63, self)})),
      _V0define__constant,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D82_lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 8 0) (bruijn ##.k.207 0 0) (bruijn ##.constants.83 7 1) (bruijn ##.exports.84 7 2) (bruijn ##.imports.85 7 3) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 5,
      _var0,
      VGetArg(statics, 7-1, 1),
      VGetArg(statics, 7-1, 2),
      VGetArg(statics, 7-1, 3),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4)));
}
static void _V10_Diter_D82_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.202 5 0) (close _V10_Diter_D82_lambda20) (bruijn ##.kk.5.87 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda20, self)})),
      VGetArg(statics, 5-1, 1));
}
static void _V10_Diter_D82_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D82_k62) (close _V10_Diter_D82_k68))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k62, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k68, self)})));
}
static void _V10_Diter_D82_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D82_k57) (close _V10_Diter_D82_k61))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k57, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k61, self)})));
}
static void _V10_Diter_D82_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D82_k52) (close _V10_Diter_D82_k56))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k52, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k56, self)})));
}
static void _V10_Diter_D82_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D82_k47) (close _V10_Diter_D82_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k47, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k51, self)})));
}
static void _V10_Diter_D82_lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Diter_D82_k46) (##inline ##vcore.car (bruijn ##.rest.86 1 4)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D82_k46, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->vars[4]));
}
static void _V10_Diter_D82_lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D82_lambda14, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[5]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 5, 5, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  // (if (##inline ##vcore.null? (bruijn ##.rest.86 0 4)) ((bruijn ##.x.122 12 0) (close _V10_Diter_D82_k45) (bruijn ##.lib.81 2 1)) (##vcore.call/cc (bruijn ##.k.192 0 0) (close _V10_Diter_D82_lambda15)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_k45, self)})),
      statics->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda15, self)})));
}
}
static void _V10_Dheader__from__library_D58_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.260 0 0) (bruijn ##.k.257 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dheader__from__library_D58_lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_lambda22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.82 5 0) (bruijn ##.k.261 0 0) '() '() '() (##inline ##vcore.cdr (bruijn ##.expr.3.103 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 5,
      _var0,
      VNULL,
      VNULL,
      VNULL,
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dheader__from__library_D58_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.103 0 0)) (##vcore.call-with-values (close _V10_Dheader__from__library_D58_k72) (close _V10_Dheader__from__library_D58_lambda22) (bruijn ##.kk.0.100 3 1)) ((bruijn ##.k.257 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k72, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_lambda22, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dheader__from__library_D58_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.258 0 0) ((close _V10_Dheader__from__library_D58_k71) (##inline ##vcore.cdr (bruijn ##.lib.81 4 1))) ((bruijn ##.k.257 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dheader__from__library_D58_k71, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dheader__from__library_D58_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.81 3 1)) ((bruijn ##.x.128 7 0) (close _V10_Dheader__from__library_D58_k70) 'define-library (##inline ##vcore.car (bruijn ##.lib.81 3 1))) ((bruijn ##.k.257 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k70, self)})),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dheader__from__library_D58_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.253 0 0) (bruijn ##.k.251 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dheader__from__library_D58_lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.119 19 0) (bruijn ##.k.254 0 0) (##string ##.string.321) (bruijn ##.lib.81 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D321.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dheader__from__library_D58_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) (##vcore.call-with-values (close _V10_Dheader__from__library_D58_k76) (close _V10_Dheader__from__library_D58_lambda23) (bruijn ##.kk.0.100 3 1)) ((bruijn ##.k.251 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k76, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_lambda23, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dheader__from__library_D58_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.81 4 1)) ((bruijn ##.x.128 8 0) (close _V10_Dheader__from__library_D58_k75) 'define-library (##inline ##vcore.car (bruijn ##.lib.81 4 1))) ((bruijn ##.k.251 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k75, self)})),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dheader__from__library_D58_lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_lambda24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.249 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V10_Dheader__from__library_D58_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.246 2 0) (close _V10_Dheader__from__library_D58_lambda24) (bruijn ##.kk.0.100 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_lambda24, self)})),
      statics->up->vars[1]);
}
static void _V10_Dheader__from__library_D58_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dheader__from__library_D58_k74) (close _V10_Dheader__from__library_D58_k77))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dheader__from__library_D58_k74, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k77, self)})));
}
static void _V10_Dheader__from__library_D58_lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dheader__from__library_D58_k69) (close _V10_Dheader__from__library_D58_k73))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dheader__from__library_D58_k69, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_k73, self)})));
}
static void _V10_Dheader__from__library_D58_lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D58_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D82_lambda14)) (##vcore.call/cc (bruijn ##.k.191 1 0) (close _V10_Dheader__from__library_D58_lambda21)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D82_lambda14, self)}));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_lambda21, self)})));
    }
}
static void _V10_Dgather__dependencies_D59_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.283 0 0) (bruijn ##.k.281 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
static void _V10_Dgather__dependencies_D59_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.129 9 0) (bruijn ##.k.284 1 0) (##inline ##vcore.cdr (bruijn ##.input.14.109 4 0)) (bruijn ##.x.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]),
      _var0);
}
static void _V10_Dgather__dependencies_D59_lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_lambda27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.59 6 12) (close _V10_Dgather__dependencies_D59_k82) (##inline ##vcore.cdr (bruijn ##.statements.107 5 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k82, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
}
static void _V10_Dgather__dependencies_D59_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.282 0 0) (##vcore.call-with-values (close _V10_Dgather__dependencies_D59_k81) (close _V10_Dgather__dependencies_D59_lambda27) (bruijn ##.kk.13.108 3 1)) ((bruijn ##.k.281 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k81, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_lambda27, self)})),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__dependencies_D59_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.109 1 0)) ((bruijn ##.x.128 7 0) (close _V10_Dgather__dependencies_D59_k80) 'import (##inline ##vcore.car (bruijn ##.input.14.109 1 0))) ((bruijn ##.k.281 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k80, self)})),
      _V0import,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__dependencies_D59_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.274 0 0) (bruijn ##.k.271 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
static void _V10_Dgather__dependencies_D59_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.129 12 0) (bruijn ##.k.275 2 0) (bruijn ##.x.276 1 0) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V10_Dgather__dependencies_D59_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.59 9 12) (close _V10_Dgather__dependencies_D59_k89) (##inline ##vcore.cdr (bruijn ##.statements.107 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 12)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k89, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
static void _V10_Dgather__dependencies_D59_lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.59 8 12) (close _V10_Dgather__dependencies_D59_k88) (##inline ##vcore.cdr (bruijn ##.expr.17.113 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 12)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k88, self)})),
      VInlineCdr2(runtime,
        statics->vars[0]));
}
static void _V10_Dgather__dependencies_D59_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.113 0 0)) (##vcore.call-with-values (close _V10_Dgather__dependencies_D59_k87) (close _V10_Dgather__dependencies_D59_lambda28) (bruijn ##.kk.13.108 5 1)) ((bruijn ##.k.271 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k87, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_lambda28, self)})),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__dependencies_D59_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) ((close _V10_Dgather__dependencies_D59_k86) (##inline ##vcore.cdr (bruijn ##.input.14.109 3 0))) ((bruijn ##.k.271 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__dependencies_D59_k86, .env = self }, }, 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__dependencies_D59_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.109 2 0)) ((bruijn ##.x.128 8 0) (close _V10_Dgather__dependencies_D59_k85) 'define-library (##inline ##vcore.car (bruijn ##.input.14.109 2 0))) ((bruijn ##.k.271 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k85, self)})),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dgather__dependencies_D59_lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_lambda29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.gather-dependencies.59 6 12) (bruijn ##.k.268 0 0) (##inline ##vcore.cdr (bruijn ##.statements.107 5 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 2,
      _var0,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
}
static void _V10_Dgather__dependencies_D59_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.265 3 0) (close _V10_Dgather__dependencies_D59_lambda29) (bruijn ##.kk.13.108 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_lambda29, self)})),
      statics->up->up->vars[1]);
}
static void _V10_Dgather__dependencies_D59_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D59_k84) (close _V10_Dgather__dependencies_D59_k90))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__dependencies_D59_k84, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k90, self)})));
}
static void _V10_Dgather__dependencies_D59_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D59_k79) (close _V10_Dgather__dependencies_D59_k83))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__dependencies_D59_k79, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_k83, self)})));
}
static void _V10_Dgather__dependencies_D59_lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V10_Dgather__dependencies_D59_k78) (##inline ##vcore.car (bruijn ##.statements.107 1 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgather__dependencies_D59_k78, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
static void _V10_Dgather__dependencies_D59_lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D59_lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.statements.107 0 1)) ((bruijn ##.k.263 0 0) '()) (##vcore.call/cc (bruijn ##.k.263 0 0) (close _V10_Dgather__dependencies_D59_lambda26)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_lambda26, self)})));
}
}
static void _V0vanity_V0compiler_V0library_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 13 ('() (close _V10_Dload__library__interface_D48_lambda2) (close _V10_Dregister__library__interface_B_D49_lambda3) (close _V10_Dfind__library__interface_B_D50_lambda4) (close _V10_Dacceptable__char_Q_D51_lambda5) (close _V10_Dacceptable__characters_Q_D52_lambda6) (close _V10_Dandf_D53_lambda8) (close _V10_Dvalid__import__element_Q_D54_lambda9) (close _V10_Dvalid__import_Q_D55_lambda10) (close _V10_Dimport___Gpath_D56_lambda11) (close _V10_Dimport__basepath_D57_lambda12) (close _V10_Dheader__from__library_D58_lambda13) (close _V10_Dgather__dependencies_D59_lambda25)) ((bruijn ##.k.117 18 0) (##inline ##vcore.cons (##inline ##vcore.cons 'find-library-interface! (bruijn ##.find-library-interface!.50 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.49 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'header-from-library (bruijn ##.header-from-library.58 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'valid-import? (bruijn ##.valid-import?.55 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'import-basepath (bruijn ##.import-basepath.57 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'import->path (bruijn ##.import->path.56 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.59 0 12)) '())))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D48_lambda2, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D49_lambda3, self)}));
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__library__interface_B_D50_lambda4, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D51_lambda5, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__characters_Q_D52_lambda6, self)}));
    self->vars[6] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dandf_D53_lambda8, self)}));
    self->vars[7] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D54_lambda9, self)}));
    self->vars[8] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import_Q_D55_lambda10, self)}));
    self->vars[9] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D56_lambda11, self)}));
    self->vars[10] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D57_lambda12, self)}));
    self->vars[11] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D58_lambda13, self)}));
    self->vars[12] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D59_lambda25, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0find__library__interface_B,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0register__library__interface_B,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0header__from__library,
        self->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0valid__import_Q,
        self->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import__basepath,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import___Gpath,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gather__dependencies,
        self->vars[12]),
        VNULL))))))));
    }
}
static void _V0vanity_V0compiler_V0library_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 12 0) (close _V0vanity_V0compiler_V0library_V20_k17) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k17, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0library_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 11 0) (close _V0vanity_V0compiler_V0library_V20_k16) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k16, self)})),
      _V0append);
}
static void _V0vanity_V0compiler_V0library_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 10 0) (close _V0vanity_V0compiler_V0library_V20_k15) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k15, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0library_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 9 0) (close _V0vanity_V0compiler_V0library_V20_k14) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k14, self)})),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0library_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 8 0) (close _V0vanity_V0compiler_V0library_V20_k13) 'fold)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k13, self)})),
      _V0fold);
}
static void _V0vanity_V0compiler_V0library_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 7 0) (close _V0vanity_V0compiler_V0library_V20_k12) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k12, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0library_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 6 0) (close _V0vanity_V0compiler_V0library_V20_k11) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k11, self)})),
      _V0memv);
}
static void _V0vanity_V0compiler_V0library_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 5 0) (close _V0vanity_V0compiler_V0library_V20_k10) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k10, self)})),
      _V0assoc);
}
static void _V0vanity_V0compiler_V0library_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 4 0) (close _V0vanity_V0compiler_V0library_V20_k9) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k9, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0library_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 3 0) (close _V0vanity_V0compiler_V0library_V20_k8) 'search-open-input-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k8, self)})),
      _V0search__open__input__file);
}
static void _V0vanity_V0compiler_V0library_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 2 0) (close _V0vanity_V0compiler_V0library_V20_k7) 'read-all)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k7, self)})),
      _V0read__all);
}
static void _V0vanity_V0compiler_V0library_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 1 0) (close _V0vanity_V0compiler_V0library_V20_k6) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k6, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0library_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 0 0) (close _V0vanity_V0compiler_V0library_V20_k5) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k5, self)})),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0library_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0library_V20_k4) (##string ##.string.322) (bruijn ##.x.301 2 0) (bruijn ##.x.302 1 0) (bruijn ##.x.303 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D322.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0library_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k3) (##string ##.string.323))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D323.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k2) (##string ##.string.324))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D324.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k1) (##string ##.string.325))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D325.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_lambda1;
