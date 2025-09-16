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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D330 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D329 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D328 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D327 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
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
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D326 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "not a valid library" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0constant__export;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0constant__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "constant-export" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V0define__library__interface;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0define__library__interface = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "define-library-interface" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D325 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D324 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D323 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D322 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D321 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0header__from__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__basepath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0andf, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.62 1 0) ((bruijn ##.x.120 15 0) (bruijn ##.k.139 0 0) (bruijn ##.fd.62 1 0)) ((bruijn ##.x.119 16 0) (bruijn ##.k.139 0 0) (##string ##.string.321) (bruijn ##.import.60 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D321.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k22, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.134 1 0) ((bruijn ##.k.135 0 0) (##inline ##vcore.car (bruijn ##.parse.63 2 0))) ((bruijn ##.x.119 18 0) (bruijn ##.k.135 0 0) (##string ##.string.322)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D322.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.131 7 0) (bruijn ##.parse.64 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library register-library-interface!) (bruijn ##.register-library-interface!.49 7 2) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k27) (bruijn ##.parse.64 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 2));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k27, self))));
    VWORD _arg1 = 
      statics->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.118 19 0) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k26) (bruijn ##.fd.62 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k26, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k24) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k25))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k25, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k22) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k23))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k22, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k23, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k20) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k21))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k21, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.121 12 0) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k19) (bruijn ##.x.140 0 0) (bruijn ##.paths.61 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k19, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##qualified-call (vanity compiler library import->path) (bruijn ##.import->path.56 1 9) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k18) (bruijn ##.import.60 0 1))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[9]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k18, self))));
    VWORD _arg1 = 
      _var1;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.141 4 0) (bruijn ##.x.143 0 0) (bruijn ##.lib.65 4 1))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.123 12 0) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k31) (bruijn ##.x.144 0 0) (bruijn ##.library-interfaces.47 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k31, self)))),
      _var0,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.141 3 0) (bruijn ##.library-interfaces.47 4 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.147 0 0) (bruijn ##.lib.65 3 1)) (bruijn ##.library-interfaces.47 4 0)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->up->vars[0],
      VEncodeInt(4l), VEncodeInt(0l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        statics->up->up->vars[1]),
        statics->up->up->up->vars[0])
    );
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.142 0 0) ((bruijn ##.x.122 12 0) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k30) (bruijn ##.lib.65 2 1)) ((bruijn ##.x.122 12 0) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k32) (bruijn ##.lib.65 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k30, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k32, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.123 10 0) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k29) (bruijn ##.x.148 0 0) (bruijn ##.library-interfaces.47 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k29, self)))),
      _var0,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.122 10 0) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k28) (bruijn ##.lib.65 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k28, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.68 0 0) ((bruijn ##.k.149 1 0) (##inline ##vcore.cdr (bruijn ##.lookup.68 0 0))) (##qualified-call (vanity compiler library load-library-interface) (bruijn ##.load-library-interface.48 2 1) (bruijn ##.k.149 1 0) (bruijn ##.import.66 1 1) (bruijn ##.paths.67 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[1]);
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0load__library__interface(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.x.123 9 0) (close _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k33) (bruijn ##.import.66 0 1) (bruijn ##.library-interfaces.47 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k33, self)))),
      _var1,
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 4 4 (##.reg.304 ##.reg.305 ##.reg.306 ##.reg.307) ((##vcore.char-integer (bruijn ##.c.69 1 1)) (##vcore.char-integer #\a) (##vcore.char-integer #\z) (##vcore.<= (bruijn ##.reg.305 0 1) (bruijn ##.reg.304 0 0) (bruijn ##.reg.306 0 2))) (if (bruijn ##.reg.307 0 3) ((bruijn ##.k.150 1 0) (bruijn ##.reg.307 0 3)) (basic-block 3 3 (##.reg.308 ##.reg.309 ##.reg.310) ((##vcore.char-integer #\A) (##vcore.char-integer #\Z) (##vcore.<= (bruijn ##.reg.308 0 0) (bruijn ##.reg.304 1 0) (bruijn ##.reg.309 0 1))) (if (bruijn ##.reg.310 0 2) ((bruijn ##.k.150 2 0) (bruijn ##.reg.310 0 2)) (basic-block 3 3 (##.reg.311 ##.reg.312 ##.reg.313) ((##vcore.char-integer #\0) (##vcore.char-integer #\9) (##vcore.<= (bruijn ##.reg.311 0 0) (bruijn ##.reg.304 2 0) (bruijn ##.reg.312 0 1))) (if (bruijn ##.reg.313 0 2) ((bruijn ##.k.150 3 0) (bruijn ##.reg.313 0 2)) ((bruijn ##.x.124 11 0) (bruijn ##.k.150 3 0) (bruijn ##.c.69 3 1) (##inline ##vcore.qcons '#\- (##inline ##vcore.qcons '#\_ '())))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[4]; } container;
    self = &container.self;
    VInitEnv(self, 4, 4, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('a'));
    self->vars[2] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('z'));
    self->vars[3] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[1],
      self->vars[0],
      self->vars[2]);
if(VDecodeBool(
self->vars[3])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[3]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('A'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('Z'));
    self->vars[2] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[0],
      statics->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[2]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('0'));
    self->vars[1] = _VBasic_VCharInt2(runtime, NULL,
      VEncodeChar('9'));
    self->vars[2] = _VBasic_VCmpLe(runtime, NULL,
      self->vars[0],
      statics->up->vars[0],
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VInlineCons2(runtime,
        VEncodeChar('-'),
        VInlineCons2(runtime,
        VEncodeChar('_'),
        VNULL)));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) (basic-block 1 1 (##.reg.317) ((##vcore.+ (bruijn ##.i.74 4 1) 1)) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.73) (bruijn ##.loop.73 5 0) (bruijn ##.k.163 4 0) (bruijn ##.reg.317 0 0))) ((bruijn ##.k.163 3 0) #f))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.315) ((##vcore.< (bruijn ##.i.74 1 1) (bruijn ##.reg.314 3 0))) (if (bruijn ##.reg.315 0 0) (basic-block 1 1 (##.reg.316) ((##vcore.string-ref (bruijn ##.str.71 5 1) (bruijn ##.i.74 2 1))) (##qualified-call (vanity compiler library acceptable-char?) (bruijn ##.acceptable-char?.51 6 4) (close _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73_V0k34) (bruijn ##.reg.316 0 0))) ((bruijn ##.k.163 1 0) #t)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      statics->up->vars[1]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 4));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73_V0k34, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(true));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.314) ((##vcore.string-length (bruijn ##.str.71 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73")) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.73) (bruijn ##.loop.73 0 0) (bruijn ##.k.162 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D73(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0andf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0andf, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library acceptable-characters?) (bruijn ##.acceptable-characters?.52 5 5) (bruijn ##.k.169 4 0) (bruijn ##.x.172 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 5));
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.319 ##.reg.320) ((##vcore.string-length (bruijn ##.x.174 1 0)) (##vcore.> (bruijn ##.reg.319 0 0) 0)) (if (bruijn ##.reg.320 0 1) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k36) (bruijn ##.x.77 3 1)) ((bruijn ##.k.169 3 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCmpGt(runtime, NULL,
      self->vars[0],
      VEncodeInt(0l));
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k36, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.318) ((##vcore.symbol? (bruijn ##.x.77 1 1))) (if (bruijn ##.reg.318 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k35) (bruijn ##.x.77 1 1)) ((bruijn ##.k.169 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k35, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k37, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.pair? (bruijn ##.import.78 0 1)) ((bruijn ##.x.125 7 0) (close _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k37) (bruijn ##.valid-import-element?.54 1 7) (bruijn ##.import.78 0 1)) ((bruijn ##.k.175 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k37, self)))),
      statics->vars[7],
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.127 6 0) (bruijn ##.k.178 1 0) (##string ##.string.324) (##inline ##vcore.car (bruijn ##.import.79 1 1)) (bruijn ##.x.182 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D324.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.79 0 1))) ((bruijn ##.x.127 5 0) (bruijn ##.k.178 0 0) (##string ##.string.323) (##inline ##vcore.car (bruijn ##.import.79 0 1))) (##qualified-call (vanity compiler library import->path) (bruijn ##.import->path.56 1 9) (close _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k38) (##inline ##vcore.cdr (bruijn ##.import.79 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D323.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var1));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[9]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k38, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.127 6 0) (bruijn ##.k.185 1 0) (##string ##.string.324) (##inline ##vcore.car (bruijn ##.import.80 1 1)) (bruijn ##.x.188 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D324.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.80 0 1))) ((bruijn ##.k.185 0 0) (##string ##.string.325)) (##qualified-call (vanity compiler library import-basepath) (bruijn ##.import-basepath.57 1 10) (close _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k39) (##inline ##vcore.cdr (bruijn ##.import.80 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D325.sym, VPOINTER_OTHER));
} else {
  {
    VClosure * _closure = VDecodeClosure(statics->vars[10]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k39, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__basepath(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k40, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.241 0 0) (bruijn ##.k.239 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 7 0) (bruijn ##.k.242 1 0) (bruijn ##.constants.83 6 1) (bruijn ##.x.243 0 0) (bruijn ##.imports.85 6 3) (##inline ##vcore.cdr (bruijn ##.rest.86 6 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      _var0;
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 10 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k45) (bruijn ##.exports.84 5 2) (##inline ##vcore.cdr (bruijn ##.input.6.88 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k45, self)))),
      VGetArg(statics, 5-1, 2),
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k44) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda3) (bruijn ##.kk.5.87 3 1)) ((bruijn ##.k.239 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k44, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda3, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 1 0)) ((bruijn ##.x.128 9 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k43) 'export (##inline ##vcore.car (bruijn ##.input.6.88 1 0))) ((bruijn ##.k.239 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k43, self)))),
      _V0export,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.233 0 0) (bruijn ##.k.231 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 8 0) (bruijn ##.k.234 1 0) (bruijn ##.constants.83 7 1) (bruijn ##.exports.84 7 2) (bruijn ##.x.235 0 0) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    VWORD _arg3 = 
      _var0;
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 11 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k50) (bruijn ##.imports.85 6 3) (##inline ##vcore.cdr (bruijn ##.input.6.88 4 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k50, self)))),
      VGetArg(statics, 6-1, 3),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.232 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k49) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda4) (bruijn ##.kk.5.87 4 1)) ((bruijn ##.k.231 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda4, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 2 0)) ((bruijn ##.x.128 10 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k48) 'import (##inline ##vcore.car (bruijn ##.input.6.88 2 0))) ((bruijn ##.k.231 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k48, self)))),
      _V0import,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.225 0 0) (bruijn ##.k.223 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 9 0) (bruijn ##.k.226 1 0) (bruijn ##.constants.83 8 1) (bruijn ##.exports.84 8 2) (bruijn ##.imports.85 8 3) (bruijn ##.x.227 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.129 12 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k55) (##inline ##vcore.cdr (bruijn ##.input.6.88 5 0)) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k55, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)),
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4)));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.224 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k54) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda5) (bruijn ##.kk.5.87 5 1)) ((bruijn ##.k.223 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k54, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda5, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 3 0)) ((bruijn ##.x.128 11 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k53) 'begin (##inline ##vcore.car (bruijn ##.input.6.88 3 0))) ((bruijn ##.k.223 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k53, self)))),
      _V0begin,
      VInlineCar2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.215 0 0) (bruijn ##.k.210 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 12 0) (bruijn ##.k.216 1 0) (##inline ##vcore.cons (bruijn ##.x.219 0 0) (bruijn ##.constants.83 11 1)) (bruijn ##.exports.84 11 2) (bruijn ##.imports.85 11 3) (##inline ##vcore.cdr (bruijn ##.rest.86 11 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 0));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 11-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 11-1, 3);
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.130 14 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k62) (##inline ##vcore.car (bruijn ##.expr.11.96 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.98 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k62, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.98 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.98 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k61) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda6) (bruijn ##.kk.5.87 8 1)) ((bruijn ##.k.210 3 0) #f)) ((bruijn ##.k.210 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k61, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda6, self)))),
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
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.96 0 0)) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k60) (##inline ##vcore.cdr (bruijn ##.expr.11.96 0 0))) ((bruijn ##.k.210 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k60, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.211 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k59) (##inline ##vcore.cdr (bruijn ##.input.6.88 5 0))) ((bruijn ##.k.210 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k59, self)), 1,
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 0)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.88 4 0)) ((bruijn ##.x.128 12 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k58) 'define-constant (##inline ##vcore.car (bruijn ##.input.6.88 4 0))) ((bruijn ##.k.210 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k58, self)))),
      _V0define__constant,
      VInlineCar2(runtime,
        statics->up->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 8 0) (bruijn ##.k.207 0 0) (bruijn ##.constants.83 7 1) (bruijn ##.exports.84 7 2) (bruijn ##.imports.85 7 3) (##inline ##vcore.cdr (bruijn ##.rest.86 7 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 7-1, 3);
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 4));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.202 5 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda7) (bruijn ##.kk.5.87 5 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda7, self)))),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k57) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k63))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k63, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k52) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k56))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k52, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k56, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k47) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k51))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k47, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k51, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k42) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k46))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k46, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k41) (##inline ##vcore.car (bruijn ##.rest.86 1 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k41, self)), 1,
      VInlineCar2(runtime,
        statics->vars[4]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.rest.86 0 4)) ((bruijn ##.x.122 12 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k40) (bruijn ##.lib.81 2 1)) (##vcore.call/cc (bruijn ##.k.192 0 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0k40, self)))),
      statics->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82_V0lambda2, self)))));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.260 0 0) (bruijn ##.k.257 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.82) (bruijn ##.iter.82 5 0) (bruijn ##.k.261 0 0) '() '() '() (##inline ##vcore.cdr (bruijn ##.expr.3.103 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VNULL;
    VWORD _arg2 = 
      VNULL;
    VWORD _arg3 = 
      VNULL;
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82(runtime, _closure->env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.103 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k67) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda9) (bruijn ##.kk.0.100 3 1)) ((bruijn ##.k.257 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k67, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda9, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.258 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k66) (##inline ##vcore.cdr (bruijn ##.lib.81 4 1))) ((bruijn ##.k.257 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k66, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.81 3 1)) ((bruijn ##.x.128 7 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k65) 'define-library (##inline ##vcore.car (bruijn ##.lib.81 3 1))) ((bruijn ##.k.257 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k65, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.253 0 0) (bruijn ##.k.251 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.119 19 0) (bruijn ##.k.254 0 0) (##string ##.string.326) (bruijn ##.lib.81 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D326.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.252 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k71) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda10) (bruijn ##.kk.0.100 3 1)) ((bruijn ##.k.251 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k71, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda10, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.81 4 1)) ((bruijn ##.x.128 8 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k70) 'define-library (##inline ##vcore.car (bruijn ##.lib.81 4 1))) ((bruijn ##.k.251 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k70, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.249 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.246 2 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda11) (bruijn ##.kk.0.100 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda11, self)))),
      statics->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k69) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k72))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k69, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k72, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k64) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k68))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k64, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k68, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82")) (##vcore.call/cc (bruijn ##.k.191 1 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda8)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D82, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda8, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.283 0 0) (bruijn ##.k.281 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k77, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) (bruijn ##.gather-dependencies.59 6 12) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k77) (##inline ##vcore.cdr (bruijn ##.statements.107 5 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 12));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k77, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.282 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k76) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda13) (bruijn ##.kk.13.108 3 1)) ((bruijn ##.k.281 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k76, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda13, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.109 1 0)) ((bruijn ##.x.128 7 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k75) 'import (##inline ##vcore.car (bruijn ##.input.14.109 1 0))) ((bruijn ##.k.281 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k75, self)))),
      _V0import,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.274 0 0) (bruijn ##.k.271 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.129 12 0) (bruijn ##.k.275 2 0) (bruijn ##.x.276 1 0) (bruijn ##.x.277 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) (bruijn ##.gather-dependencies.59 9 12) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k84) (##inline ##vcore.cdr (bruijn ##.statements.107 8 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 12));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k84, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) (bruijn ##.gather-dependencies.59 8 12) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k83) (##inline ##vcore.cdr (bruijn ##.expr.17.113 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 8-1, 12));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k83, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.113 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k82) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda14) (bruijn ##.kk.13.108 5 1)) ((bruijn ##.k.271 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda14, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.272 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k81) (##inline ##vcore.cdr (bruijn ##.input.14.109 3 0))) ((bruijn ##.k.271 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k81, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.109 2 0)) ((bruijn ##.x.128 8 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k80) 'define-library (##inline ##vcore.car (bruijn ##.input.14.109 2 0))) ((bruijn ##.k.271 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k80, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library gather-dependencies) (bruijn ##.gather-dependencies.59 6 12) (bruijn ##.k.268 0 0) (##inline ##vcore.cdr (bruijn ##.statements.107 5 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 12));
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.265 3 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda15) (bruijn ##.kk.13.108 3 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda15, self)))),
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k79) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k85))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k79, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k85, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k74) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k78))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k74, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k78, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k73) (##inline ##vcore.car (bruijn ##.statements.107 1 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k73, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.statements.107 0 1)) ((bruijn ##.k.263 0 0) '()) (##vcore.call/cc (bruijn ##.k.263 0 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda12)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda12, self)))));
}
}
static void _V0vanity_V0compiler_V0library_V20_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 13 ('() (close "_V50_V0vanity_V0compiler_V0library_V0load__library__interface") (close "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B") (close "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B") (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q") (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q") (close "_V50_V0vanity_V0compiler_V0library_V0andf") (close "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q") (close "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q") (close "_V50_V0vanity_V0compiler_V0library_V0import___Gpath") (close "_V50_V0vanity_V0compiler_V0library_V0import__basepath") (close "_V50_V0vanity_V0compiler_V0library_V0header__from__library") (close "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies")) ((bruijn ##.k.117 18 0) (##inline ##vcore.cons (##inline ##vcore.cons 'find-library-interface! (bruijn ##.find-library-interface!.50 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.49 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'header-from-library (bruijn ##.header-from-library.58 0 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'valid-import? (bruijn ##.valid-import?.55 0 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'import-basepath (bruijn ##.import-basepath.57 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'import->path (bruijn ##.import->path.56 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.59 0 12)) '())))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = VNULL;
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, self))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, self))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0andf, self))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, self))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, self))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, self))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, self))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library, self))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, self))));
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
static void _V0vanity_V0compiler_V0library_V20_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 12 0) (close _V0vanity_V0compiler_V0library_V20_V0k17) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k17, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0library_V20_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 11 0) (close _V0vanity_V0compiler_V0library_V20_V0k16) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k16, self)))),
      _V0append);
}
static void _V0vanity_V0compiler_V0library_V20_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 10 0) (close _V0vanity_V0compiler_V0library_V20_V0k15) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k15, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0library_V20_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 9 0) (close _V0vanity_V0compiler_V0library_V20_V0k14) 'sprintf)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k14, self)))),
      _V0sprintf);
}
static void _V0vanity_V0compiler_V0library_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 8 0) (close _V0vanity_V0compiler_V0library_V20_V0k13) 'fold)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k13, self)))),
      _V0fold);
}
static void _V0vanity_V0compiler_V0library_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 7 0) (close _V0vanity_V0compiler_V0library_V20_V0k12) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k12, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0library_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 6 0) (close _V0vanity_V0compiler_V0library_V20_V0k11) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k11, self)))),
      _V0memv);
}
static void _V0vanity_V0compiler_V0library_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 5 0) (close _V0vanity_V0compiler_V0library_V20_V0k10) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k10, self)))),
      _V0assoc);
}
static void _V0vanity_V0compiler_V0library_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 4 0) (close _V0vanity_V0compiler_V0library_V20_V0k9) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k9, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0library_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 3 0) (close _V0vanity_V0compiler_V0library_V20_V0k8) 'search-open-input-file)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k8, self)))),
      _V0search__open__input__file);
}
static void _V0vanity_V0compiler_V0library_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 2 0) (close _V0vanity_V0compiler_V0library_V20_V0k7) 'read-all)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k7, self)))),
      _V0read__all);
}
static void _V0vanity_V0compiler_V0library_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 1 0) (close _V0vanity_V0compiler_V0library_V20_V0k6) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k6, self)))),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0library_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.18 0 0) (close _V0vanity_V0compiler_V0library_V20_V0k5) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k5, self)))),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0library_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0library_V20_V0k4) (##string ##.string.327) (bruijn ##.x.301 2 0) (bruijn ##.x.302 1 0) (bruijn ##.x.303 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D327.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0library_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k3) (##string ##.string.328))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D328.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k2) (##string ##.string.329))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D329.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k1) (##string ##.string.330))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D330.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda1;
