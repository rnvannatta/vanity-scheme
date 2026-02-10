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

VEnv * _V60_V0vanity_V0compiler_V0library;

VWEAK VWORD _V0gather__dependencies;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0gather__dependencies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "gather-dependencies" };
VWEAK VWORD _V0import___Gpath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0import___Gpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "import->path" };
VWEAK VWORD _V0import__basepath;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0import__basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "import-basepath" };
VWEAK VWORD _V0valid__import_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0valid__import_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "valid-import\?" };
VWEAK VWORD _V0header__from__library;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0header__from__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "header-from-library" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0find__library__interface_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0find__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "find-library-interface!" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D309 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D308 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D307 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D306 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D305 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D304 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "not a valid library" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0constant__export;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0constant__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "constant-export" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0define__library__interface;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0define__library__interface = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "define-library-interface" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D303 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D302 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D301 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D300 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0gather__dependencies = VEncodePointer(VInternSymbol(670285661, &_VW_V0gather__dependencies.sym), VPOINTER_OTHER);
  _V0import___Gpath = VEncodePointer(VInternSymbol(1827680974, &_VW_V0import___Gpath.sym), VPOINTER_OTHER);
  _V0import__basepath = VEncodePointer(VInternSymbol(442654183, &_VW_V0import__basepath.sym), VPOINTER_OTHER);
  _V0valid__import_Q = VEncodePointer(VInternSymbol(1339346449, &_VW_V0valid__import_Q.sym), VPOINTER_OTHER);
  _V0header__from__library = VEncodePointer(VInternSymbol(2134186384, &_VW_V0header__from__library.sym), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VInternSymbol(847975606, &_VW_V0register__library__interface_B.sym), VPOINTER_OTHER);
  _V0find__library__interface_B = VEncodePointer(VInternSymbol(-1961983799, &_VW_V0find__library__interface_B.sym), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VInternSymbol(471311928, &_VW_V0define__constant.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0constant__export = VEncodePointer(VInternSymbol(2123793904, &_VW_V0constant__export.sym), VPOINTER_OTHER);
  _V0export = VEncodePointer(VInternSymbol(1426862643, &_VW_V0export.sym), VPOINTER_OTHER);
  _V0define__library__interface = VEncodePointer(VInternSymbol(-1266559609, &_VW_V0define__library__interface.sym), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VInternSymbol(410494053, &_VW_V0define__library.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0andf, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__basepath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69, _var0, _var1, _var2, _var3, _var4);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0header__from__library, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _var0, _var1);
static void _V0vanity_V0compiler_V0library_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.117 4 0) (##string ##.string.300) (bruijn ##.x.118 0 0) 'equal? 'append 'compiler-error 'cadr 'list 'sprintf 'map 'fold 'memv 'assoc 'close-port 'read-all 'search-open-input-file)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 16,
      statics->up->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D300.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0append,
      _V0compiler__error,
      _V0cadr,
      _V0list,
      _V0sprintf,
      _V0map,
      _V0fold,
      _V0memv,
      _V0assoc,
      _V0close__port,
      _V0read__all,
      _V0search__open__input__file);
}
static void _V0vanity_V0compiler_V0library_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0library_V20_V0k4) (bruijn ##.x.119 2 0) (bruijn ##.x.120 1 0) (bruijn ##.x.121 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k4, self)))),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0library_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k3) (##string ##.string.301))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D301.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k2) (##string ##.string.302))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D302.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k1) (##string ##.string.303))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D303.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.141 0 0) (bruijn ##.k.139 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.19 8 2) (bruijn ##.k.142 1 0) (##inline ##vcore.cdr (bruijn ##.input.14.61 4 0)) (bruijn ##.x.143 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 2)), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[0]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.46 6 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9) (##inline ##vcore.cdr (bruijn ##.statements.59 5 1)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.140 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5) (bruijn ##.kk.13.60 3 1)) ((bruijn ##.k.139 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.61 1 0)) ((bruijn ##.equal?.18 5 1) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7) 'import (##inline ##vcore.car (bruijn ##.input.14.61 1 0))) ((bruijn ##.k.139 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, self)))),
      _V0import,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.132 0 0) (bruijn ##.k.129 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.19 10 2) (bruijn ##.k.133 2 0) (bruijn ##.x.134 1 0) (bruijn ##.x.135 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.46 8 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16) (##inline ##vcore.cdr (bruijn ##.statements.59 7 1)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 7-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.46 7 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15) (##inline ##vcore.cdr (bruijn ##.expr.17.65 1 0)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->vars[0]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.17.65 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6) (bruijn ##.kk.13.60 4 1)) ((bruijn ##.k.129 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.130 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13) (##inline ##vcore.cdr (bruijn ##.input.14.61 2 0))) ((bruijn ##.k.129 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.14.61 1 0)) ((bruijn ##.equal?.18 5 1) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12) 'define-library (##inline ##vcore.car (bruijn ##.input.14.61 1 0))) ((bruijn ##.k.129 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.46 4 0) (bruijn ##.k.126 0 0) (##inline ##vcore.cdr (bruijn ##.statements.59 3 1)))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k17(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.125 1 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7) (bruijn ##.kk.13.60 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda7, self)))),
      statics->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k17))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k17, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5) (##inline ##vcore.car (bruijn ##.statements.59 1 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (bruijn ##.statements.59 0 1)) ((bruijn ##.k.123 0 0) '()) (##vcore.call/cc (bruijn ##.k.123 0 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, self)))));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.147 1 0) (##inline ##vcore.cons 'define-library-interface (##inline ##vcore.cons (bruijn ##.x.150 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'import (bruijn ##.imports.72 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'export (bruijn ##.exports.71 1 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'constant-export (bruijn ##.constants.70 1 1)) '()))))))
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
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.192 0 0) (bruijn ##.k.190 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 7 0) (bruijn ##.k.193 1 0) (bruijn ##.constants.70 6 1) (bruijn ##.x.194 0 0) (bruijn ##.imports.72 6 3) (##inline ##vcore.cdr (bruijn ##.rest.73 6 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.19 9 2) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k23) (bruijn ##.exports.71 5 2) (##inline ##vcore.cdr (bruijn ##.input.6.75 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k23, self)))),
      VGetArg(statics, 5-1, 2),
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.191 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k22) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda9) (bruijn ##.kk.5.74 3 1)) ((bruijn ##.k.190 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda9, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.75 1 0)) ((bruijn ##.equal?.18 7 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k21) 'export (##inline ##vcore.car (bruijn ##.input.6.75 1 0))) ((bruijn ##.k.190 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k21, self)))),
      _V0export,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.184 0 0) (bruijn ##.k.182 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 7 0) (bruijn ##.k.185 1 0) (bruijn ##.constants.70 6 1) (bruijn ##.exports.71 6 2) (bruijn ##.x.186 0 0) (##inline ##vcore.cdr (bruijn ##.rest.73 6 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      _var0;
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 4));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.19 9 2) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k28) (bruijn ##.imports.72 5 3) (##inline ##vcore.cdr (bruijn ##.input.6.75 3 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k28, self)))),
      VGetArg(statics, 5-1, 3),
      VInlineCdr2(runtime,
        statics->up->up->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k27) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda10) (bruijn ##.kk.5.74 3 1)) ((bruijn ##.k.182 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k27, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda10, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.75 1 0)) ((bruijn ##.equal?.18 7 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k26) 'import (##inline ##vcore.car (bruijn ##.input.6.75 1 0))) ((bruijn ##.k.182 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k26, self)))),
      _V0import,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.176 0 0) (bruijn ##.k.174 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 7 0) (bruijn ##.k.177 1 0) (bruijn ##.constants.70 6 1) (bruijn ##.exports.71 6 2) (bruijn ##.imports.72 6 3) (bruijn ##.x.178 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 6-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 6-1, 3);
    VWORD _arg4 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.19 9 2) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k33) (##inline ##vcore.cdr (bruijn ##.input.6.75 3 0)) (##inline ##vcore.cdr (bruijn ##.rest.73 5 4)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k33, self)))),
      VInlineCdr2(runtime,
        statics->up->up->vars[0]),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 4)));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.175 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k32) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda11) (bruijn ##.kk.5.74 3 1)) ((bruijn ##.k.174 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k32, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda11, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.75 1 0)) ((bruijn ##.equal?.18 7 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k31) 'begin (##inline ##vcore.car (bruijn ##.input.6.75 1 0))) ((bruijn ##.k.174 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k31, self)))),
      _V0begin,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.166 0 0) (bruijn ##.k.161 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 9 0) (bruijn ##.k.167 1 0) (##inline ##vcore.cons (bruijn ##.x.170 0 0) (bruijn ##.constants.70 8 1)) (bruijn ##.exports.71 8 2) (bruijn ##.imports.72 8 3) (##inline ##vcore.cdr (bruijn ##.rest.73 8 4)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VGetArg(statics, 8-1, 1));
    VWORD _arg2 = 
      VGetArg(statics, 8-1, 2);
    VWORD _arg3 = 
      VGetArg(statics, 8-1, 3);
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 4));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.list.22 11 5) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k40) (##inline ##vcore.car (bruijn ##.expr.11.83 2 0)) (##inline ##vcore.car (bruijn ##.expr.12.85 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k40, self)))),
      VInlineCar2(runtime,
        statics->up->vars[0]),
      VInlineCar2(runtime,
        statics->vars[0]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.85 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.12.85 0 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k39) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda12) (bruijn ##.kk.5.74 5 1)) ((bruijn ##.k.161 3 0) #f)) ((bruijn ##.k.161 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k39, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda12, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.83 0 0)) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k38) (##inline ##vcore.cdr (bruijn ##.expr.11.83 0 0))) ((bruijn ##.k.161 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k38, self)), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.162 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k37) (##inline ##vcore.cdr (bruijn ##.input.6.75 2 0))) ((bruijn ##.k.161 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k37, self)), 1,
      VInlineCdr2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.input.6.75 1 0)) ((bruijn ##.equal?.18 7 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k36) 'define-constant (##inline ##vcore.car (bruijn ##.input.6.75 1 0))) ((bruijn ##.k.161 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k36, self)))),
      _V0define__constant,
      VInlineCar2(runtime,
        statics->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 4 0) (bruijn ##.k.158 0 0) (bruijn ##.constants.70 3 1) (bruijn ##.exports.71 3 2) (bruijn ##.imports.72 3 3) (##inline ##vcore.cdr (bruijn ##.rest.73 3 4)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->up->vars[1];
    VWORD _arg2 = 
      statics->up->up->vars[2];
    VWORD _arg3 = 
      statics->up->up->vars[3];
    VWORD _arg4 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[4]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k41(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.157 1 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda13) (bruijn ##.kk.5.74 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda13, self)))),
      statics->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k35) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k41))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k41, self)))));
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k29(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k30) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k34))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k30, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k34, self)))));
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k24(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k25) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k29))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k25, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k29, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k20) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k24))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k20, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k24, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k19) (##inline ##vcore.car (bruijn ##.rest.73 1 4)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k19, self)), 1,
      VInlineCar2(runtime,
        statics->vars[4]));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69, got ~D~N"
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
  // (if (##inline ##vcore.null? (bruijn ##.rest.73 0 4)) ((bruijn ##.cadr.21 4 4) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k18) (bruijn ##.lib.68 2 1)) (##vcore.call/cc (bruijn ##.k.147 0 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda8)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var4))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0k18, self)))),
      statics->up->vars[1]);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69_V0lambda8, self)))));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.209 0 0) (bruijn ##.k.206 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library header-from-library ##.iter.69) #f (bruijn ##.iter.69 5 0) (bruijn ##.k.210 0 0) '() '() '() (##inline ##vcore.cdr (bruijn ##.expr.3.90 1 0)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 0));
   VEnv * _closure_env = _closure->env;
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
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69(runtime, _closure_env, 5, _arg0, _arg1, _arg2, _arg3, _arg4);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.90 0 0)) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k45) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda15) (bruijn ##.kk.0.87 3 1)) ((bruijn ##.k.206 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k45, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda15, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.207 0 0) ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k44) (##inline ##vcore.cdr (bruijn ##.lib.68 4 1))) ((bruijn ##.k.206 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k44, self)), 1,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.68 3 1)) ((bruijn ##.equal?.18 5 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k43) 'define-library (##inline ##vcore.car (bruijn ##.lib.68 3 1))) ((bruijn ##.k.206 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k43, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.202 0 0) (bruijn ##.k.200 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.20 7 3) (bruijn ##.k.203 0 0) (##string ##.string.304) (bruijn ##.lib.68 5 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D304.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.201 0 0) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k49) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda16) (bruijn ##.kk.0.87 2 1)) ((bruijn ##.k.200 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k49, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda16, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.lib.68 3 1)) ((bruijn ##.equal?.18 5 1) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k48) 'define-library (##inline ##vcore.car (bruijn ##.lib.68 3 1))) ((bruijn ##.k.200 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->up->up->vars[1]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k48, self)))),
      _V0define__library,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.198 0 0) #f)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k50(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.k.197 0 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda17) (bruijn ##.kk.0.87 0 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      self->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda17, self)))),
      self->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k46(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k47) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k50))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k47, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k50, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k42) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k46))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k42, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0k46, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0header__from__library(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0header__from__library" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69")) (##vcore.call/cc (bruijn ##.k.146 1 0) (close _V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda14)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V10_Diter_D69, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library_V0lambda14, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k51" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.23 3 6) (bruijn ##.k.212 1 0) (##string ##.string.306) (##inline ##vcore.car (bruijn ##.import.94 1 1)) (bruijn ##.x.215 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D306.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import__basepath" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.94 0 1))) ((bruijn ##.k.212 0 0) (##string ##.string.305)) (##qualified-call (vanity compiler library import-basepath) #t (bruijn ##.import-basepath.48 1 2) (close _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k51) (##inline ##vcore.cdr (bruijn ##.import.94 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D305.sym, VPOINTER_OTHER));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k51, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__basepath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k52" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.23 3 6) (bruijn ##.k.218 1 0) (##string ##.string.306) (##inline ##vcore.car (bruijn ##.import.95 1 1)) (bruijn ##.x.222 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[6]), 4,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D306.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        statics->vars[1]),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0import___Gpath" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.import.95 0 1))) ((bruijn ##.sprintf.23 2 6) (bruijn ##.k.218 0 0) (##string ##.string.307) (##inline ##vcore.car (bruijn ##.import.95 0 1))) (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.49 1 3) (close _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k52) (##inline ##vcore.cdr (bruijn ##.import.95 0 1))))
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var1)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D307.sym, VPOINTER_OTHER),
      VInlineCar2(runtime,
        _var1));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k52, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        _var1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k53" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.25 3 8) (bruijn ##.k.225 1 0) (bruijn ##.andf.52 2 6) #t (bruijn ##.x.227 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[8]), 4,
      statics->vars[0],
      statics->up->vars[6],
      VEncodeBool(true),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (if (##inline ##vcore.pair? (bruijn ##.import.96 0 1)) ((bruijn ##.map.24 2 7) (close _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k53) (bruijn ##.valid-import-element?.51 1 5) (bruijn ##.import.96 0 1)) ((bruijn ##.k.225 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k53, self)))),
      statics->vars[5],
      _var1);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k55" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library acceptable-characters?) #t (bruijn ##.acceptable-characters?.53 5 7) (bruijn ##.k.228 4 0) (bruijn ##.x.231 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k54" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.reg.284 ##.reg.285) ((##vcore.string-length (bruijn ##.x.233 1 0)) (##vcore.> (bruijn ##.reg.284 0 0) 0)) (if (bruijn ##.reg.285 0 1) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k55) (bruijn ##.x.97 3 1)) ((bruijn ##.k.228 3 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k55, self)))),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.283) ((##vcore.symbol? (bruijn ##.x.97 1 1))) (if (bruijn ##.reg.283 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k54) (bruijn ##.x.97 1 1)) ((bruijn ##.k.228 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k54, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0andf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0andf" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0andf, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.a.98 0 1) ((bruijn ##.k.234 0 0) (bruijn ##.b.99 0 2)) ((bruijn ##.k.234 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102_V0k56" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.238 0 0) (basic-block 1 1 (##.reg.289) ((##vcore.+ (bruijn ##.i.103 4 1) 1)) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.102) #f (bruijn ##.loop.102 5 0) (bruijn ##.k.236 4 0) (bruijn ##.reg.289 0 0))) ((bruijn ##.k.236 3 0) #f))
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
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.287) ((##vcore.< (bruijn ##.i.103 1 1) (bruijn ##.reg.286 3 0))) (if (bruijn ##.reg.287 0 0) (basic-block 1 1 (##.reg.288) ((##vcore.string-ref (bruijn ##.str.100 5 1) (bruijn ##.i.103 2 1))) (##qualified-call (vanity compiler library acceptable-char?) #t (bruijn ##.acceptable-char?.54 6 8) (close _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102_V0k56) (bruijn ##.reg.288 0 0))) ((bruijn ##.k.236 1 0) #t)))
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
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102_V0k56, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(runtime, _closure_env, 2, _arg0, _arg1);
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
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 1 1 (##.reg.286) ((##vcore.string-length (bruijn ##.str.100 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102")) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.102) #f (bruijn ##.loop.102 0 0) (bruijn ##.k.235 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(0l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D102(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q" };
 VRecordCall2(runtime, &dbg);
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
  // (basic-block 4 4 (##.reg.290 ##.reg.291 ##.reg.292 ##.reg.293) ((##vcore.char-integer (bruijn ##.c.104 1 1)) (##vcore.char-integer #\a) (##vcore.char-integer #\z) (##vcore.<= (bruijn ##.reg.291 0 1) (bruijn ##.reg.290 0 0) (bruijn ##.reg.292 0 2))) (if (bruijn ##.reg.293 0 3) ((bruijn ##.k.241 1 0) (bruijn ##.reg.293 0 3)) (basic-block 3 3 (##.reg.294 ##.reg.295 ##.reg.296) ((##vcore.char-integer #\A) (##vcore.char-integer #\Z) (##vcore.<= (bruijn ##.reg.294 0 0) (bruijn ##.reg.290 1 0) (bruijn ##.reg.295 0 1))) (if (bruijn ##.reg.296 0 2) ((bruijn ##.k.241 2 0) (bruijn ##.reg.296 0 2)) (basic-block 3 3 (##.reg.297 ##.reg.298 ##.reg.299) ((##vcore.char-integer #\0) (##vcore.char-integer #\9) (##vcore.<= (bruijn ##.reg.297 0 0) (bruijn ##.reg.290 2 0) (bruijn ##.reg.298 0 1))) (if (bruijn ##.reg.299 0 2) ((bruijn ##.k.241 3 0) (bruijn ##.reg.299 0 2)) ((bruijn ##.memv.26 5 9) (bruijn ##.k.241 3 0) (bruijn ##.c.104 3 1) (##inline ##vcore.qcons '#\- (##inline ##vcore.qcons '#\_ '())))))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 9)), 3,
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
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k57" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.lookup.108 0 0) ((bruijn ##.k.253 1 0) (##inline ##vcore.cdr (bruijn ##.lookup.108 0 0))) (##qualified-call (vanity compiler library load-library-interface) #t (bruijn ##.load-library-interface.57 2 11) (bruijn ##.k.253 1 0) (bruijn ##.import.106 1 1) (bruijn ##.paths.107 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCdr2(runtime,
        _var0));
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      statics->vars[1];
    VWORD _arg2 = 
      statics->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0load__library__interface(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.assoc.27 2 10) (close _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k57) (bruijn ##.import.106 0 1) (bruijn ##.library-interfaces.58 1 12))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[10]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k57, self)))),
      _var1,
      statics->vars[12]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k61" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.254 4 0) (bruijn ##.x.256 0 0) (bruijn ##.lib.109 4 1))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k60" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.27 5 10) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k61) (bruijn ##.x.257 0 0) (bruijn ##.library-interfaces.58 4 12))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k61, self)))),
      _var0,
      statics->up->up->up->vars[12]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k62" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (bruijn ##.k.254 3 0) (bruijn ##.library-interfaces.58 4 12) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.260 0 0) (bruijn ##.lib.109 3 1)) (bruijn ##.library-interfaces.58 4 12)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->up->vars[0],
      VEncodeInt(4l), VEncodeInt(12l),
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _var0,
        statics->up->up->vars[1]),
        statics->up->up->up->vars[12])
    );
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k59" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.255 0 0) ((bruijn ##.cadr.21 4 4) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k60) (bruijn ##.lib.109 2 1)) ((bruijn ##.cadr.21 4 4) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k62) (bruijn ##.lib.109 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k60, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k62, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k58" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.27 3 10) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k59) (bruijn ##.x.261 0 0) (bruijn ##.library-interfaces.58 2 12))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[10]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k59, self)))),
      _var0,
      statics->up->vars[12]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.cadr.21 2 4) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k58) (bruijn ##.lib.109 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[4]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k58, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k65" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.112 1 0) ((bruijn ##.read-all.29 5 12) (bruijn ##.k.268 0 0) (bruijn ##.fd.112 1 0)) ((bruijn ##.compiler-error.20 5 3) (bruijn ##.k.268 0 0) (##string ##.string.308) (bruijn ##.import.110 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 12)), 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D308.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k67" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.parse.113 1 0)) ((bruijn ##.k.266 0 0) (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.parse.113 1 0)))) ((bruijn ##.k.266 0 0) #f))
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
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k69" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.263 1 0) ((bruijn ##.k.264 0 0) (##inline ##vcore.car (bruijn ##.parse.113 2 0))) ((bruijn ##.compiler-error.20 7 3) (bruijn ##.k.264 0 0) (##string ##.string.309)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCar2(runtime,
        statics->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D309.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k72(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.262 5 0) (bruijn ##.parse.114 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k71(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler library register-library-interface!) #t (bruijn ##.register-library-interface!.56 6 10) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k72) (bruijn ##.parse.114 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k72, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k70" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.28 7 11) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k71) (bruijn ##.fd.112 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 11)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k71, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k68" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k69) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k70))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k69, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k70, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k66" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k67) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k68))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k67, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k68, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k64" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k65) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k66))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k65, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k66, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k63" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.search-open-input-file.30 3 13) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k64) (bruijn ##.x.269 0 0) (bruijn ##.paths.111 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[13]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k64, self)))),
      _var0,
      statics->vars[2]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0library_V0load__library__interface" };
 VRecordCall2(runtime, &dbg);
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
  // (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.49 1 3) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k63) (bruijn ##.import.110 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k63, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0compiler_V0library_V20_V0k73(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.k.122 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'find-library-interface! (bruijn ##.find-library-interface!.55 0 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.56 0 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'header-from-library (bruijn ##.header-from-library.47 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'valid-import? (bruijn ##.valid-import?.50 0 4)) (##inline ##vcore.cons (##inline ##vcore.cons 'import-basepath (bruijn ##.import-basepath.48 0 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'import->path (bruijn ##.import->path.49 0 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.46 0 0)) '()))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0find__library__interface_B,
        self->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0register__library__interface_B,
        self->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0header__from__library,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0valid__import_Q,
        self->vars[4]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import__basepath,
        self->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import___Gpath,
        self->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gather__dependencies,
        self->vars[0]),
        VNULL))))))));
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 14) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda3, got ~D~N"
  "-- expected 14~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[14]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 14, 14, statics);
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
  self->vars[13] = _var13;
  // (##letrec (vanity compiler library) 13 ((close "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0header__from__library" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0import__basepath" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0import___Gpath" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0andf" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B" "_V60_V0vanity_V0compiler_V0library") (close "_V50_V0vanity_V0compiler_V0library_V0load__library__interface" "_V60_V0vanity_V0compiler_V0library") #f) (set! (close _V0vanity_V0compiler_V0library_V20_V0k73) (bruijn ##.library-interfaces.58 0 12) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[13]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0library = self;
    VInitEnv(self, 13, 13, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0header__from__library, _V60_V0vanity_V0compiler_V0library))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0andf, _V60_V0vanity_V0compiler_V0library))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _V60_V0vanity_V0compiler_V0library))));
    self->vars[12] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0library_V20", &_V60_V0vanity_V0compiler_V0library);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k73, self)))),
      VEncodeInt(0l), VEncodeInt(12l),
      VNULL
    );
    }
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0library_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.116 0 0) (close _V0vanity_V0compiler_V0library_V20_V0lambda2) (close _V0vanity_V0compiler_V0library_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda1;
