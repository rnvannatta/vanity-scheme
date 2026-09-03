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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D716 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D715 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D714 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0resolve__file__path;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0resolve__file__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "resolve-file-path" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0filter;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0filter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "filter" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D713 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
VWEAK VWORD _V0gather__dependencies;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0gather__dependencies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "gather-dependencies" };
VWEAK VWORD _V0import___Gpath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0import___Gpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "import->path" };
VWEAK VWORD _V0import__basepath;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0import__basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "import-basepath" };
VWEAK VWORD _V0valid__import_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0valid__import_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "valid-import\?" };
VWEAK VWORD _V0import__path;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0import__path = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "import-path" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0library__exists_Q;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0library__exists_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "library-exists\?" };
VWEAK VWORD _V0process__import_B;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0process__import_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "process-import!" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D712 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D711 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0constant__export;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0constant__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "constant-export" };
VWEAK VWORD _V0prefix;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0prefix = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "prefix" };
VWEAK VWORD _V0except;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0except = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "except" };
VWEAK VWORD _V0only;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0only = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "only" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D710 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
static struct { VBlob sym; char bytes[15]; } _V10_Dstring_D709 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 15 }, "invalid export" };
VWEAK VWORD _V0rename;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0rename = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "rename" };
static VPair _V10_Dpair_D708 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static VPair _V10_Dpair_D707 = { .base = { .tag = VPAIR, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D706 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D705 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D704 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0library__exists_Q, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__path, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0extract__exports, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0extract__constants, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0process__import_B, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0andf, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0import__basepath, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _var0, _var1);
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.270 0 0) (bruijn ##.%k.268 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.61 13 1) (bruijn ##.%k.271 3 0) (bruijn ##.%x.272 2 0) (bruijn ##.%x.273 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.530) ((##vcore.cdr (bruijn ##.statements.113 10 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 11 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9) (bruijn ##.%x.530 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k9, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 10 2) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8) (bruijn ##.import-path.108 9 12) (bruijn ##.libs.529 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k8, self)))),
      VGetArg(statics, 9-1, 12),
      statics->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.269 0 0) (basic-block 1 1 (##.libs.529) ((##vcore.cdr (bruijn ##.input.56.518 4 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4) (bruijn ##.kk.55.114 5 1))) ((bruijn ##.%k.268 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k7, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda4, self)))),
      VGetArg(statics, 5-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.519 1 1) (basic-block 1 1 (##.%x.528) ((##vcore.car (bruijn ##.input.56.518 2 0))) ((bruijn ##.equal?.60 7 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6) 'import (bruijn ##.%x.528 0 0))) ((bruijn ##.%k.268 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k6, self)))),
      _V0import,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.261 0 0) (bruijn ##.%k.258 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.append.61 15 1) (bruijn ##.%k.262 3 0) (bruijn ##.%x.263 2 0) (bruijn ##.%x.264 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 3,
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.527) ((##vcore.cdr (bruijn ##.statements.113 12 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 13 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15) (bruijn ##.%x.527 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k15, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 11 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14) (bruijn ##.body.526 1 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k14, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.259 0 0) (basic-block 2 2 (##.expr.59.523 ##.%p.524) ((##vcore.cdr (bruijn ##.input.56.518 5 0)) (##vcore.pair? (bruijn ##.expr.59.523 0 0))) (if (bruijn ##.%p.524 0 1) (basic-block 2 2 (##.name.525 ##.body.526) ((##vcore.car (bruijn ##.expr.59.523 1 0)) (##vcore.cdr (bruijn ##.expr.59.523 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5) (bruijn ##.kk.55.114 7 1))) ((bruijn ##.%k.258 3 0) #f))) ((bruijn ##.%k.258 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k13, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda5, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.520 1 0) (basic-block 1 1 (##.%x.522) ((##vcore.car (bruijn ##.input.56.518 3 0))) ((bruijn ##.equal?.60 8 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12) 'define-library (bruijn ##.%x.522 0 0))) ((bruijn ##.%k.258 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k12, self)))),
      _V0define__library,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.521) ((##vcore.cdr (bruijn ##.statements.113 6 1))) (##qualified-call (vanity compiler library gather-dependencies) #t (bruijn ##.gather-dependencies.96 7 0) (bruijn ##.%k.255 1 0) (bruijn ##.%x.521 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0gather__dependencies(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.254 2 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6) (bruijn ##.kk.55.114 2 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda6, self)))),
      statics->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.520) ((##vcore.pair? (bruijn ##.input.56.518 1 0))) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k16, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.input.56.518 ##.%p.519) ((##vcore.car (bruijn ##.statements.113 3 1)) (##vcore.pair? (bruijn ##.input.56.518 0 0))) ((close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k5, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0k10, self)))));
    }
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
  // (basic-block 1 1 (##.%p.517) ((##vcore.null? (bruijn ##.statements.113 1 1))) (if (bruijn ##.%p.517 0 0) ((bruijn ##.%k.252 1 0) '()) (##vcore.call/cc (bruijn ##.%k.252 1 0) (close _V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda3))))
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
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies_V0lambda3, self)))));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.63 5 3) (bruijn ##.%k.276 3 0) (##string ##.string.705) (bruijn ##.%x.533 1 0) (bruijn ##.%x.279 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER),
      statics->vars[0],
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
  // (basic-block 2 2 (##.%x.531 ##.%p.532) ((##vcore.cdr (bruijn ##.import.122 1 1)) (##vcore.null? (bruijn ##.%x.531 0 0))) (if (bruijn ##.%p.532 0 1) ((bruijn ##.%k.276 1 0) (##string ##.string.704)) (basic-block 2 2 (##.%x.533 ##.%x.534) ((##vcore.car (bruijn ##.import.122 2 1)) (##vcore.cdr (bruijn ##.import.122 2 1))) (##qualified-call (vanity compiler library import-basepath) #t (bruijn ##.import-basepath.97 3 1) (close _V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17) (bruijn ##.%x.534 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D704.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath_V0k17, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__basepath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.sprintf.63 5 3) (bruijn ##.%k.282 3 0) (##string ##.string.705) (bruijn ##.%x.538 1 0) (bruijn ##.%x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 4,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D705.sym, VPOINTER_OTHER),
      statics->vars[0],
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
  // (basic-block 2 2 (##.%x.535 ##.%p.536) ((##vcore.cdr (bruijn ##.import.123 1 1)) (##vcore.null? (bruijn ##.%x.535 0 0))) (if (bruijn ##.%p.536 0 1) (basic-block 1 1 (##.%x.537) ((##vcore.car (bruijn ##.import.123 2 1))) ((bruijn ##.sprintf.63 4 3) (bruijn ##.%k.282 2 0) (##string ##.string.706) (bruijn ##.%x.537 0 0))) (basic-block 2 2 (##.%x.538 ##.%x.539) ((##vcore.car (bruijn ##.import.123 2 1)) (##vcore.cdr (bruijn ##.import.123 2 1))) (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 3 2) (close _V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18) (bruijn ##.%x.539 0 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[3]), 3,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D706.sym, VPOINTER_OTHER),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[1]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath_V0k18, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.fold.64 4 4) (bruijn ##.%k.289 2 0) (bruijn ##.andf.101 3 5) #t (bruijn ##.%x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[4]), 4,
      statics->up->vars[0],
      statics->up->up->vars[5],
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
  // (basic-block 1 1 (##.%p.540) ((##vcore.pair? (bruijn ##.import.124 1 1))) (if (bruijn ##.%p.540 0 0) ((bruijn ##.map.62 3 2) (close _V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19) (bruijn ##.valid-import-element?.100 2 4) (bruijn ##.import.124 1 1)) ((bruijn ##.%k.289 1 0) #f)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[2]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q_V0k19, self)))),
      statics->up->vars[4],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library acceptable-characters?) #t (bruijn ##.acceptable-characters?.102 5 6) (bruijn ##.%k.292 4 0) (bruijn ##.%x.295 0 0))
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
void _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.542 ##.%p.543) ((##vcore.string-length (bruijn ##.%x.297 1 0)) (##vcore.> (bruijn ##.%x.542 0 0) 0)) (if (bruijn ##.%p.543 0 1) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21) (bruijn ##.x.125 3 1)) ((bruijn ##.%k.292 3 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k21, self)))),
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
  // (basic-block 1 1 (##.%p.541) ((##vcore.symbol? (bruijn ##.x.125 1 1))) (if (bruijn ##.%p.541 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20) (bruijn ##.x.125 1 1)) ((bruijn ##.%k.292 1 0) #f)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q_V0k20, self)))),
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0andf(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0andf, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (if (bruijn ##.a.126 0 1) ((bruijn ##.%k.298 0 0) (bruijn ##.b.127 0 2)) ((bruijn ##.%k.298 0 0) #f))
if(VDecodeBool(
_var1)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.302 0 0) (basic-block 1 1 (##.%x.547) ((##vcore.+ (bruijn ##.i.131 4 1) 1)) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.130) #f (bruijn ##.loop.130 5 0) (bruijn ##.%k.300 4 0) (bruijn ##.%x.547 0 0))) ((bruijn ##.%k.300 3 0) #f))
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
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.545) ((##vcore.< (bruijn ##.i.131 1 1) (bruijn ##.len.544 3 0))) (if (bruijn ##.%p.545 0 0) (basic-block 1 1 (##.%x.546) ((##vcore.string-ref (bruijn ##.str.128 5 1) (bruijn ##.i.131 2 1))) (##qualified-call (vanity compiler library acceptable-char?) #t (bruijn ##.acceptable-char?.103 6 7) (close _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22) (bruijn ##.%x.546 0 0))) ((bruijn ##.%k.300 1 0) #t)))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130_V0k22, self))));
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
  // (basic-block 1 1 (##.len.544) ((##vcore.string-length (bruijn ##.str.128 1 1))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130")) (##qualified-call (vanity compiler library acceptable-characters? ##.loop.130) #f (bruijn ##.loop.130 0 0) (bruijn ##.%k.299 2 0) 0)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130, self))));
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
       _V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q_V10_Dloop_D130(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
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
  // (basic-block 4 4 (##.i.548 ##.%x.549 ##.%x.550 ##.%p.551) ((##vcore.char-integer (bruijn ##.c.132 1 1)) (##vcore.char-integer #\a) (##vcore.char-integer #\z) (##vcore.<= (bruijn ##.%x.549 0 1) (bruijn ##.i.548 0 0) (bruijn ##.%x.550 0 2))) (if (bruijn ##.%p.551 0 3) ((bruijn ##.%k.305 1 0) (bruijn ##.%p.551 0 3)) (basic-block 3 3 (##.%x.552 ##.%x.553 ##.%p.554) ((##vcore.char-integer #\A) (##vcore.char-integer #\Z) (##vcore.<= (bruijn ##.%x.552 0 0) (bruijn ##.i.548 1 0) (bruijn ##.%x.553 0 1))) (if (bruijn ##.%p.554 0 2) ((bruijn ##.%k.305 2 0) (bruijn ##.%p.554 0 2)) (basic-block 3 3 (##.%x.555 ##.%x.556 ##.%p.557) ((##vcore.char-integer #\0) (##vcore.char-integer #\9) (##vcore.<= (bruijn ##.%x.555 0 0) (bruijn ##.i.548 2 0) (bruijn ##.%x.556 0 1))) (if (bruijn ##.%p.557 0 2) ((bruijn ##.%k.305 3 0) (bruijn ##.%p.557 0 2)) ((bruijn ##.memv.65 5 5) (bruijn ##.%k.305 3 0) (bruijn ##.c.132 3 1) '(##pair ##.pair.708))))))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 3,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodePointer(&_V10_Dpair_D708, VPOINTER_PAIR));
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.560) ((##vcore.cons (bruijn ##.%x.558 4 0) (bruijn ##.%x.318 1 0))) ((bruijn ##.%k.316 5 0) (bruijn ##.%r.560 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25) (bruijn ##.%x.319 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k25, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.string-append.72 6 12) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24) (bruijn ##.prefix.140 2 2) (bruijn ##.%x.320 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 12)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k24, self)))),
      statics->up->vars[2],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.558 ##.%x.559) ((##vcore.car (bruijn ##.import.139 1 1)) (##vcore.cdr (bruijn ##.import.139 1 1))) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23) (bruijn ##.%x.559 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136_V0k23, self)))),
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.49.143 1 0) ((bruijn ##.cadr.67 7 7) (bruijn ##.%k.325 0 0) (bruijn ##.x.49.143 1 0)) (basic-block 1 1 (##.%r.564) ((##vcore.cdr (bruijn ##.import.141 4 1))) ((bruijn ##.%k.325 1 0) (bruijn ##.%r.564 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 7)), 2,
      _var0,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.563) ((##vcore.cons (bruijn ##.%x.561 3 0) (bruijn ##.%x.324 1 0))) ((bruijn ##.%k.322 4 0) (bruijn ##.%r.563 0 0)))
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
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k27, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k28, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 2 2 (##.%x.561 ##.%x.562) ((##vcore.car (bruijn ##.import.141 1 1)) (##vcore.cdr (bruijn ##.import.141 1 1))) ((bruijn ##.assv.71 5 11) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26) (bruijn ##.%x.562 0 1) (bruijn ##.renames.142 1 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 11)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137_V0k26, self)))),
      self->vars[1],
      statics->vars[2]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.338 0 0) (bruijn ##.%k.333 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.577) ((##vcore.cons (bruijn ##.a.571 3 0) (bruijn ##.b.574 2 0))) ((bruijn ##.%k.339 1 0) (bruijn ##.%r.577 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.334 0 0) (basic-block 2 2 (##.expr.53.569 ##.%p.570) ((##vcore.cdr (bruijn ##.e.144 6 1)) (##vcore.pair? (bruijn ##.expr.53.569 0 0))) (if (bruijn ##.%p.570 0 1) (basic-block 3 3 (##.a.571 ##.expr.54.572 ##.%p.573) ((##vcore.car (bruijn ##.expr.53.569 1 0)) (##vcore.cdr (bruijn ##.expr.53.569 1 0)) (##vcore.pair? (bruijn ##.expr.54.572 0 1))) (if (bruijn ##.%p.573 0 2) (basic-block 3 3 (##.b.574 ##.%x.575 ##.%p.576) ((##vcore.car (bruijn ##.expr.54.572 1 1)) (##vcore.cdr (bruijn ##.expr.54.572 1 1)) (##vcore.null? (bruijn ##.%x.575 0 1))) (if (bruijn ##.%p.576 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8) (bruijn ##.kk.50.145 7 1)) ((bruijn ##.%k.333 5 0) #f))) ((bruijn ##.%k.333 4 0) #f))) ((bruijn ##.%k.333 3 0) #f))) ((bruijn ##.%k.333 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k31, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda8, self)))),
      VGetArg(statics, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.565 1 0) (basic-block 1 1 (##.%x.568) ((##vcore.car (bruijn ##.e.144 4 1))) ((bruijn ##.equal?.60 8 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30) 'rename (bruijn ##.%x.568 0 0))) ((bruijn ##.%k.333 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k30, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.566 1 0) ((bruijn ##.%k.331 0 0) #void) ((bruijn ##.compiler-error.70 9 10) (bruijn ##.%k.331 0 0) (##string ##.string.709) (bruijn ##.e.144 5 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VVOID);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 10)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D709.sym, VPOINTER_OTHER),
      VGetArg(statics, 5-1, 1));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%r.567) ((##vcore.cons (bruijn ##.e.144 5 1) (bruijn ##.e.144 5 1))) ((bruijn ##.%k.329 2 0) (bruijn ##.%r.567 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.566) ((##vcore.symbol? (bruijn ##.e.144 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k33, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k34, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.328 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9) (bruijn ##.kk.50.145 1 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda9, self)))),
      statics->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.565) ((##vcore.pair? (bruijn ##.e.144 2 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k29, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0k32, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.327 0 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda7))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138_V0lambda7, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.422 0 0) (bruijn ##.%k.419 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.430 0 0) (bruijn ##.%k.426 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 21 6) (bruijn ##.%k.431 2 0) (bruijn ##.path.643 5 0) (bruijn ##.%x.432 1 0) (bruijn ##.%x.433 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 6)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.652) ((##vcore.cdr (bruijn ##.e.168 1 1))) ((bruijn ##.memv.65 22 5) (bruijn ##.%k.434 1 0) (bruijn ##.%x.652 0 0) (bruijn ##.names.641 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 20 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14) (bruijn ##.constant-imports.649 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k42, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda14, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.653) ((##vcore.cdr (bruijn ##.e.167 1 1))) ((bruijn ##.memv.65 21 5) (bruijn ##.%k.436 1 0) (bruijn ##.%x.653 0 0) (bruijn ##.names.641 11 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 5)), 3,
      statics->vars[0],
      self->vars[0],
      VGetArg(statics, 11-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 19 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15) (bruijn ##.imports.646 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k41, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda15, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.642 1 0) (basic-block 3 3 (##.path.643 ##.expr.28.644 ##.%p.645) ((##vcore.car (bruijn ##.resolved-import.158 4 0)) (##vcore.cdr (bruijn ##.resolved-import.158 4 0)) (##vcore.pair? (bruijn ##.expr.28.644 0 1))) (if (bruijn ##.%p.645 0 2) (basic-block 3 3 (##.imports.646 ##.expr.29.647 ##.%p.648) ((##vcore.car (bruijn ##.expr.28.644 1 1)) (##vcore.cdr (bruijn ##.expr.28.644 1 1)) (##vcore.pair? (bruijn ##.expr.29.647 0 1))) (if (bruijn ##.%p.648 0 2) (basic-block 3 3 (##.constant-imports.649 ##.%x.650 ##.%p.651) ((##vcore.car (bruijn ##.expr.29.647 1 1)) (##vcore.cdr (bruijn ##.expr.29.647 1 1)) (##vcore.null? (bruijn ##.%x.650 0 1))) (if (bruijn ##.%p.651 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13) (bruijn ##.kk.25.159 5 1)) ((bruijn ##.%k.426 3 0) #f))) ((bruijn ##.%k.426 2 0) #f))) ((bruijn ##.%k.426 1 0) #f))) ((bruijn ##.%k.426 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k40, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda13, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 14 8) (bruijn ##.%k.424 1 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.642) ((##vcore.pair? (bruijn ##.resolved-import.158 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k39, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k43, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.423 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda12, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 10 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38) (bruijn ##.import.640 1 0) (bruijn ##.paths.135 9 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k38, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 9-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.420 0 0) (basic-block 2 2 (##.expr.17.638 ##.%p.639) ((##vcore.cdr (bruijn ##.import.134 7 1)) (##vcore.pair? (bruijn ##.expr.17.638 0 0))) (if (bruijn ##.%p.639 0 1) (basic-block 2 2 (##.import.640 ##.names.641) ((##vcore.car (bruijn ##.expr.17.638 1 0)) (##vcore.cdr (bruijn ##.expr.17.638 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11) (bruijn ##.kk.14.152 6 1))) ((bruijn ##.%k.419 3 0) #f))) ((bruijn ##.%k.419 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k37, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda11, self)))),
      VGetArg(statics, 6-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.578 1 0) (basic-block 1 1 (##.%x.637) ((##vcore.car (bruijn ##.import.134 5 1))) ((bruijn ##.equal?.60 7 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36) 'only (bruijn ##.%x.637 0 0))) ((bruijn ##.%k.419 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k36, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.398 0 0) (bruijn ##.%k.395 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.406 0 0) (bruijn ##.%k.402 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 22 6) (bruijn ##.%k.407 2 0) (bruijn ##.path.624 5 0) (bruijn ##.%x.408 1 0) (bruijn ##.%x.409 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 6)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.634) ((##vcore.not (bruijn ##.%x.411 1 0))) ((bruijn ##.%k.410 3 0) (bruijn ##.%r.634 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.633) ((##vcore.cdr (bruijn ##.e.183 1 1))) ((bruijn ##.memv.65 23 5) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53) (bruijn ##.%x.633 0 0) (bruijn ##.names.622 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k53, self)))),
      self->vars[0],
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 21 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19) (bruijn ##.constant-imports.630 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 21-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k52, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda19, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.636) ((##vcore.not (bruijn ##.%x.414 1 0))) ((bruijn ##.%k.413 3 0) (bruijn ##.%r.636 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%x.635) ((##vcore.cdr (bruijn ##.e.182 1 1))) ((bruijn ##.memv.65 22 5) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54) (bruijn ##.%x.635 0 0) (bruijn ##.names.622 11 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k54, self)))),
      self->vars[0],
      VGetArg(statics, 11-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.filter.69 20 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20) (bruijn ##.imports.627 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k51, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda20, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.623 1 0) (basic-block 3 3 (##.path.624 ##.expr.33.625 ##.%p.626) ((##vcore.car (bruijn ##.resolved-import.173 4 0)) (##vcore.cdr (bruijn ##.resolved-import.173 4 0)) (##vcore.pair? (bruijn ##.expr.33.625 0 1))) (if (bruijn ##.%p.626 0 2) (basic-block 3 3 (##.imports.627 ##.expr.34.628 ##.%p.629) ((##vcore.car (bruijn ##.expr.33.625 1 1)) (##vcore.cdr (bruijn ##.expr.33.625 1 1)) (##vcore.pair? (bruijn ##.expr.34.628 0 1))) (if (bruijn ##.%p.629 0 2) (basic-block 3 3 (##.constant-imports.630 ##.%x.631 ##.%p.632) ((##vcore.car (bruijn ##.expr.34.628 1 1)) (##vcore.cdr (bruijn ##.expr.34.628 1 1)) (##vcore.null? (bruijn ##.%x.631 0 1))) (if (bruijn ##.%p.632 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18) (bruijn ##.kk.30.174 5 1)) ((bruijn ##.%k.402 3 0) #f))) ((bruijn ##.%k.402 2 0) #f))) ((bruijn ##.%k.402 1 0) #f))) ((bruijn ##.%k.402 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k50, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda18, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 15 8) (bruijn ##.%k.400 1 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.623) ((##vcore.pair? (bruijn ##.resolved-import.173 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k49, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k55, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.399 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda17, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 11 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48) (bruijn ##.import.621 1 0) (bruijn ##.paths.135 10 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k48, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.396 0 0) (basic-block 2 2 (##.expr.19.619 ##.%p.620) ((##vcore.cdr (bruijn ##.import.134 8 1)) (##vcore.pair? (bruijn ##.expr.19.619 0 0))) (if (bruijn ##.%p.620 0 1) (basic-block 2 2 (##.import.621 ##.names.622) ((##vcore.car (bruijn ##.expr.19.619 1 0)) (##vcore.cdr (bruijn ##.expr.19.619 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16) (bruijn ##.kk.14.152 7 1))) ((bruijn ##.%k.395 3 0) #f))) ((bruijn ##.%k.395 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k47, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda16, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.579 1 0) (basic-block 1 1 (##.%x.618) ((##vcore.car (bruijn ##.import.134 6 1))) ((bruijn ##.equal?.60 8 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46) 'except (bruijn ##.%x.618 0 0))) ((bruijn ##.%k.395 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k46, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.377 0 0) (bruijn ##.%k.372 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.385 0 0) (bruijn ##.%k.381 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 25 6) (bruijn ##.%k.386 3 0) (bruijn ##.path.609 6 0) (bruijn ##.%x.387 1 0) (bruijn ##.%x.388 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 6)), 4,
      statics->up->up->vars[0],
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.prefix-import.136) #f (bruijn ##.prefix-import.136 22 0) (bruijn ##.%k.389 0 0) (bruijn ##.x.41.200 0 1) (bruijn ##.stringfix.198 2 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 22-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 24 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24) (bruijn ##.constant-imports.615 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k65, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda24, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.prefix-import.136) #f (bruijn ##.prefix-import.136 21 0) (bruijn ##.%k.390 0 0) (bruijn ##.x.40.199 0 1) (bruijn ##.stringfix.198 1 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 23 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25) (bruijn ##.imports.612 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k64, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda25, self)))),
      statics->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63) (bruijn ##.prefix.605 9 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k63, self)))),
      VGetArg(statics, 9-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.608 1 0) (basic-block 3 3 (##.path.609 ##.expr.38.610 ##.%p.611) ((##vcore.car (bruijn ##.resolved-import.189 4 0)) (##vcore.cdr (bruijn ##.resolved-import.189 4 0)) (##vcore.pair? (bruijn ##.expr.38.610 0 1))) (if (bruijn ##.%p.611 0 2) (basic-block 3 3 (##.imports.612 ##.expr.39.613 ##.%p.614) ((##vcore.car (bruijn ##.expr.38.610 1 1)) (##vcore.cdr (bruijn ##.expr.38.610 1 1)) (##vcore.pair? (bruijn ##.expr.39.613 0 1))) (if (bruijn ##.%p.614 0 2) (basic-block 3 3 (##.constant-imports.615 ##.%x.616 ##.%p.617) ((##vcore.car (bruijn ##.expr.39.613 1 1)) (##vcore.cdr (bruijn ##.expr.39.613 1 1)) (##vcore.null? (bruijn ##.%x.616 0 1))) (if (bruijn ##.%p.617 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23) (bruijn ##.kk.35.190 5 1)) ((bruijn ##.%k.381 3 0) #f))) ((bruijn ##.%k.381 2 0) #f))) ((bruijn ##.%k.381 1 0) #f))) ((bruijn ##.%k.381 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k62, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda23, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 17 8) (bruijn ##.%k.379 1 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.608) ((##vcore.pair? (bruijn ##.resolved-import.189 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k61, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k66, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.378 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda22, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 13 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60) (bruijn ##.import.602 2 0) (bruijn ##.paths.135 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k60, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.373 0 0) (basic-block 2 2 (##.expr.21.600 ##.%p.601) ((##vcore.cdr (bruijn ##.import.134 9 1)) (##vcore.pair? (bruijn ##.expr.21.600 0 0))) (if (bruijn ##.%p.601 0 1) (basic-block 3 3 (##.import.602 ##.expr.22.603 ##.%p.604) ((##vcore.car (bruijn ##.expr.21.600 1 0)) (##vcore.cdr (bruijn ##.expr.21.600 1 0)) (##vcore.pair? (bruijn ##.expr.22.603 0 1))) (if (bruijn ##.%p.604 0 2) (basic-block 3 3 (##.prefix.605 ##.%x.606 ##.%p.607) ((##vcore.car (bruijn ##.expr.22.603 1 1)) (##vcore.cdr (bruijn ##.expr.22.603 1 1)) (##vcore.null? (bruijn ##.%x.606 0 1))) (if (bruijn ##.%p.607 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21) (bruijn ##.kk.14.152 9 1)) ((bruijn ##.%k.372 5 0) #f))) ((bruijn ##.%k.372 4 0) #f))) ((bruijn ##.%k.372 3 0) #f))) ((bruijn ##.%k.372 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k59, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda21, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.580 1 0) (basic-block 1 1 (##.%x.599) ((##vcore.car (bruijn ##.import.134 7 1))) ((bruijn ##.equal?.60 9 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58) 'prefix (bruijn ##.%x.599 0 0))) ((bruijn ##.%k.372 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k58, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.355 0 0) (bruijn ##.%k.352 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.363 0 0) (bruijn ##.%k.359 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 24 6) (bruijn ##.%k.364 2 0) (bruijn ##.path.590 5 0) (bruijn ##.%x.365 1 0) (bruijn ##.%x.366 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 6)), 4,
      statics->up->vars[0],
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.rename-import.137) #f (bruijn ##.rename-import.137 21 1) (bruijn ##.%k.367 0 0) (bruijn ##.x.48.215 0 1) (bruijn ##.renames.588 11 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 21-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 11-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 23 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29) (bruijn ##.constant-imports.596 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k75, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda29, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library process-import! ##.rename-import.137) #f (bruijn ##.rename-import.137 20 1) (bruijn ##.%k.368 0 0) (bruijn ##.x.47.214 0 1) (bruijn ##.renames.588 10 1))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 20-1, 1));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 22 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30) (bruijn ##.imports.593 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k74, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda30, self)))),
      statics->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.589 1 0) (basic-block 3 3 (##.path.590 ##.expr.45.591 ##.%p.592) ((##vcore.car (bruijn ##.resolved-import.205 4 0)) (##vcore.cdr (bruijn ##.resolved-import.205 4 0)) (##vcore.pair? (bruijn ##.expr.45.591 0 1))) (if (bruijn ##.%p.592 0 2) (basic-block 3 3 (##.imports.593 ##.expr.46.594 ##.%p.595) ((##vcore.car (bruijn ##.expr.45.591 1 1)) (##vcore.cdr (bruijn ##.expr.45.591 1 1)) (##vcore.pair? (bruijn ##.expr.46.594 0 1))) (if (bruijn ##.%p.595 0 2) (basic-block 3 3 (##.constant-imports.596 ##.%x.597 ##.%p.598) ((##vcore.car (bruijn ##.expr.46.594 1 1)) (##vcore.cdr (bruijn ##.expr.46.594 1 1)) (##vcore.null? (bruijn ##.%x.597 0 1))) (if (bruijn ##.%p.598 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28) (bruijn ##.kk.42.206 5 1)) ((bruijn ##.%k.359 3 0) #f))) ((bruijn ##.%k.359 2 0) #f))) ((bruijn ##.%k.359 1 0) #f))) ((bruijn ##.%k.359 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k73, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda28, self)))),
      VGetArg(statics, 5-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.error.68 17 8) (bruijn ##.%k.357 1 0) (##string ##.string.710))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 8)), 2,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D710.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.589) ((##vcore.pair? (bruijn ##.resolved-import.205 2 0))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k72, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k76, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.%k.356 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda27, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library process-import!) #t (bruijn ##.process-import!.104 13 8) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71) (bruijn ##.import.587 1 0) (bruijn ##.paths.135 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k71, self))));
    VWORD _arg1 = 
      statics->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0process__import_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.353 0 0) (basic-block 2 2 (##.expr.24.585 ##.%p.586) ((##vcore.cdr (bruijn ##.import.134 10 1)) (##vcore.pair? (bruijn ##.expr.24.585 0 0))) (if (bruijn ##.%p.586 0 1) (basic-block 2 2 (##.import.587 ##.renames.588) ((##vcore.car (bruijn ##.expr.24.585 1 0)) (##vcore.cdr (bruijn ##.expr.24.585 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26) (bruijn ##.kk.14.152 9 1))) ((bruijn ##.%k.352 3 0) #f))) ((bruijn ##.%k.352 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k70, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda26, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.581 1 0) (basic-block 1 1 (##.%x.584) ((##vcore.car (bruijn ##.import.134 8 1))) ((bruijn ##.equal?.60 10 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69) 'rename (bruijn ##.%x.584 0 0))) ((bruijn ##.%k.352 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k69, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.66 14 6) (bruijn ##.%k.343 5 0) (bruijn ##.import.134 12 1) (bruijn ##.%x.344 2 0) (bruijn ##.%x.345 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 6)), 4,
      VGetArg(statics, 5-1, 0),
      VGetArg(statics, 12-1, 1),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.582 ##.%r.583) ((##vcore.car (bruijn ##.e.217 2 1)) (##vcore.cons (bruijn ##.%x.347 1 0) (bruijn ##.%x.582 0 0))) ((bruijn ##.%k.346 2 0) (bruijn ##.%r.583 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.67 14 7) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83) (bruijn ##.e.217 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 7)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k83, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 13 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32) (bruijn ##.%x.349 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k82, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda32, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library extract-constants) #t (bruijn ##.extract-constants.105 11 9) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81) (bruijn ##.lib.216 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k81, self))));
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0extract__constants(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.62 11 2) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80) (bruijn ##.process-export.138 8 2) (bruijn ##.%x.350 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k80, self)))),
      VGetArg(statics, 8-1, 2),
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library extract-exports) #t (bruijn ##.extract-exports.106 9 10) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79) (bruijn ##.lib.216 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k79, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0extract__exports(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler library find-library-interface!) #t (bruijn ##.find-library-interface!.107 8 11) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78) (bruijn ##.import.134 7 1) (bruijn ##.paths.135 7 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k78, self))));
    VWORD _arg1 = 
      VGetArg(statics, 7-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _V60_V0vanity_V0compiler_V0library)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.342 4 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31) (bruijn ##.kk.14.152 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda31, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.581) ((##vcore.pair? (bruijn ##.import.134 6 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k68, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k77, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.580) ((##vcore.pair? (bruijn ##.import.134 5 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k57, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k67, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.579) ((##vcore.pair? (bruijn ##.import.134 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k45, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k56, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.578) ((##vcore.pair? (bruijn ##.import.134 3 1))) ((close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k35, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0k44, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0process__import_B(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0process__import_B, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (letrec 3 ((close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136") (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137") (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138")) (##vcore.call/cc (bruijn ##.%k.315 1 0) (close _V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprefix__import_D136, self))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Drename__import_D137, self))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V10_Dprocess__export_D138, self))));
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      statics->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B_V0lambda10, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.13.219 0 0) (basic-block 1 1 (##.%r.654) ((##vcore.cdr (bruijn ##.x.13.219 1 0))) ((bruijn ##.%k.440 3 0) (bruijn ##.%r.654 0 0))) ((bruijn ##.%k.440 2 0) '()))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 14) (close _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85) 'constant-export (bruijn ##.%x.441 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k85, self)))),
      _V0constant__export,
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__constants(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__constants, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cddr.73 2 13) (close _V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84) (bruijn ##.lib.218 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants_V0k84, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.x.12.221 0 0) (basic-block 1 1 (##.%r.655) ((##vcore.cdr (bruijn ##.x.12.221 1 0))) ((bruijn ##.%k.442 3 0) (bruijn ##.%r.655 0 0))) ((bruijn ##.%k.442 2 0) '()))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
}
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 14) (close _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87) 'export (bruijn ##.%x.443 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k87, self)))),
      _V0export,
      _var0);
}
void _V50_V0vanity_V0compiler_V0library_V0extract__exports(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0extract__exports, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cddr.73 2 13) (close _V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86) (bruijn ##.lib.220 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[13]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports_V0k86, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.224 0 0) (basic-block 1 1 (##.%r.656) ((##vcore.cdr (bruijn ##.lookup.224 1 0))) ((bruijn ##.%k.444 2 0) (bruijn ##.%r.656 0 0))) (##qualified-call (vanity compiler library load-library-interface) #t (bruijn ##.load-library-interface.111 2 15) (bruijn ##.%k.444 1 0) (bruijn ##.import.222 1 1) (bruijn ##.paths.223 1 2)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
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
  // ((bruijn ##.assoc.74 2 14) (close _V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88) (bruijn ##.import.222 0 1) (bruijn ##.library-interfaces.112 1 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B_V0k88, self)))),
      _var1,
      statics->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.476 0 0) (bruijn ##.%k.473 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 9 12) (bruijn ##.%k.477 0 0) (bruijn ##.import.681 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.474 0 0) (basic-block 2 2 (##.expr.4.679 ##.%p.680) ((##vcore.cdr (bruijn ##.import.225 6 1)) (##vcore.pair? (bruijn ##.expr.4.679 0 0))) (if (bruijn ##.%p.680 0 1) (basic-block 1 1 (##.import.681) ((##vcore.car (bruijn ##.expr.4.679 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k91) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34) (bruijn ##.kk.1.226 6 1))) ((bruijn ##.%k.473 3 0) #f))) ((bruijn ##.%k.473 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k91, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda34, self)))),
      VGetArg(statics, 6-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.657 1 0) (basic-block 1 1 (##.%x.678) ((##vcore.car (bruijn ##.import.225 4 1))) ((bruijn ##.equal?.60 6 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k90) 'only (bruijn ##.%x.678 0 0))) ((bruijn ##.%k.473 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k90, self)))),
      _V0only,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.469 0 0) (bruijn ##.%k.466 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 10 12) (bruijn ##.%k.470 0 0) (bruijn ##.import.677 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.467 0 0) (basic-block 2 2 (##.expr.6.675 ##.%p.676) ((##vcore.cdr (bruijn ##.import.225 7 1)) (##vcore.pair? (bruijn ##.expr.6.675 0 0))) (if (bruijn ##.%p.676 0 1) (basic-block 1 1 (##.import.677) ((##vcore.car (bruijn ##.expr.6.675 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k95) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35) (bruijn ##.kk.1.226 7 1))) ((bruijn ##.%k.466 3 0) #f))) ((bruijn ##.%k.466 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k95, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda35, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.658 1 0) (basic-block 1 1 (##.%x.674) ((##vcore.car (bruijn ##.import.225 5 1))) ((bruijn ##.equal?.60 7 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k94) 'except (bruijn ##.%x.674 0 0))) ((bruijn ##.%k.466 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k94, self)))),
      _V0except,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.461 0 0) (bruijn ##.%k.456 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 12 12) (bruijn ##.%k.462 0 0) (bruijn ##.import.668 2 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.457 0 0) (basic-block 2 2 (##.expr.8.666 ##.%p.667) ((##vcore.cdr (bruijn ##.import.225 8 1)) (##vcore.pair? (bruijn ##.expr.8.666 0 0))) (if (bruijn ##.%p.667 0 1) (basic-block 3 3 (##.import.668 ##.expr.9.669 ##.%p.670) ((##vcore.car (bruijn ##.expr.8.666 1 0)) (##vcore.cdr (bruijn ##.expr.8.666 1 0)) (##vcore.pair? (bruijn ##.expr.9.669 0 1))) (if (bruijn ##.%p.670 0 2) (basic-block 3 3 (##.prefix.671 ##.%x.672 ##.%p.673) ((##vcore.car (bruijn ##.expr.9.669 1 1)) (##vcore.cdr (bruijn ##.expr.9.669 1 1)) (##vcore.null? (bruijn ##.%x.672 0 1))) (if (bruijn ##.%p.673 0 2) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k99) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36) (bruijn ##.kk.1.226 9 1)) ((bruijn ##.%k.456 5 0) #f))) ((bruijn ##.%k.456 4 0) #f))) ((bruijn ##.%k.456 3 0) #f))) ((bruijn ##.%k.456 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    self->vars[2] = _VBasic_VPairP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[1]);
    self->vars[2] = _VBasic_VNullP2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k99, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda36, self)))),
      VGetArg(statics, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.659 1 0) (basic-block 1 1 (##.%x.665) ((##vcore.car (bruijn ##.import.225 6 1))) ((bruijn ##.equal?.60 8 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k98) 'prefix (bruijn ##.%x.665 0 0))) ((bruijn ##.%k.456 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k98, self)))),
      _V0prefix,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%x.452 0 0) (bruijn ##.%k.449 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 5-1, 0));
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler library import-path) #t (bruijn ##.import-path.108 12 12) (bruijn ##.%k.453 0 0) (bruijn ##.import.664 1 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      statics->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import__path(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.450 0 0) (basic-block 2 2 (##.expr.11.662 ##.%p.663) ((##vcore.cdr (bruijn ##.import.225 9 1)) (##vcore.pair? (bruijn ##.expr.11.662 0 0))) (if (bruijn ##.%p.663 0 1) (basic-block 1 1 (##.import.664) ((##vcore.car (bruijn ##.expr.11.662 1 0))) (##vcore.call-with-values (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k103) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37) (bruijn ##.kk.1.226 9 1))) ((bruijn ##.%k.449 3 0) #f))) ((bruijn ##.%k.449 2 0) #f))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[0]);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k103, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda37, self)))),
      VGetArg(statics, 9-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodeBool(false));
}
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.660 1 0) (basic-block 1 1 (##.%x.661) ((##vcore.car (bruijn ##.import.225 7 1))) ((bruijn ##.equal?.60 9 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k102) 'rename (bruijn ##.%x.661 0 0))) ((bruijn ##.%k.449 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k102, self)))),
      _V0rename,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.%k.447 0 0) (bruijn ##.import.225 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(statics, 6-1, 1));
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k104(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##vcore.call-with-values (bruijn ##.%k.446 4 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38) (bruijn ##.kk.1.226 4 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      statics->up->up->up->vars[0],
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda38, self)))),
      statics->up->up->up->vars[1]);
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k100(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.660) ((##vcore.pair? (bruijn ##.import.225 5 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k101) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k104)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k101, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k104, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k96(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.659) ((##vcore.pair? (bruijn ##.import.225 4 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k97) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k100)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k97, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k100, self)))));
    }
}
static void _V50_V0vanity_V0compiler_V0library_V0import__path_V0k92(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.658) ((##vcore.pair? (bruijn ##.import.225 3 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k93) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k96)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k93, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k96, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%p.657) ((##vcore.pair? (bruijn ##.import.225 2 1))) ((close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k89) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0k92)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k89, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0k92, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0import__path(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0import__path, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call/cc (bruijn ##.%k.445 0 0) (close _V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda33))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path_V0lambda33, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.479 4 0) (bruijn ##.%x.481 0 0) (bruijn ##.lib.242 4 1))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      statics->up->up->up->vars[0],
      _var0,
      statics->up->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 5 14) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108) (bruijn ##.%x.482 0 0) (bruijn ##.library-interfaces.112 4 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 14)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k108, self)))),
      _var0,
      statics->up->up->up->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.682 ##.%x.683) ((##vcore.cons (bruijn ##.%x.485 1 0) (bruijn ##.lib.242 4 1)) (##vcore.cons (bruijn ##.%x.682 0 0) (bruijn ##.library-interfaces.112 5 16))) (set! (bruijn ##.%k.479 4 0) (bruijn ##.library-interfaces.112 5 16) (bruijn ##.%x.683 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VGetArg(statics, 5-1, 16));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      statics->up->up->up->vars[0],
      VEncodeInt(5l), VEncodeInt(16l),
      self->vars[1]
    );
    }
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.480 0 0) ((bruijn ##.cadr.67 4 7) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107) (bruijn ##.lib.242 2 1)) ((bruijn ##.cadr.67 4 7) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109) (bruijn ##.lib.242 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k107, self)))),
      statics->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k109, self)))),
      statics->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.74 3 14) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106) (bruijn ##.%x.486 0 0) (bruijn ##.library-interfaces.112 2 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k106, self)))),
      _var0,
      statics->up->vars[16]);
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
  // ((bruijn ##.cadr.67 2 7) (close _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105) (bruijn ##.lib.242 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B_V0k105, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.resolve-file-path.75 4 15) (bruijn ##.%k.487 2 0) (bruijn ##.%x.489 0 0) (bruijn ##.paths.244 2 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[15]), 3,
      statics->up->vars[0],
      _var0,
      statics->up->vars[2]);
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.488 0 0) ((bruijn ##.%k.487 1 0) (bruijn ##.%p.488 0 0)) (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 2 2) (close _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111) (bruijn ##.import.243 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      _var0);
} else {
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k111, self))));
    VWORD _arg1 = 
      statics->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0library_V0library__exists_Q(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0library__exists_Q, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((bruijn ##.assoc.74 2 14) (close _V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110) (bruijn ##.import.243 0 1) (bruijn ##.library-interfaces.112 1 16))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[14]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q_V0k110, self)))),
      _var1,
      statics->vars[16]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.fd.247 1 0) ((bruijn ##.read-all.77 5 17) (bruijn ##.%k.496 0 0) (bruijn ##.fd.247 1 0)) ((bruijn ##.compiler-error.70 5 10) (bruijn ##.%k.496 0 0) (##string ##.string.711) (bruijn ##.import.245 3 1)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 17)), 2,
      _var0,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 10)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D711.sym, VPOINTER_OTHER),
      statics->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.684 1 0) (basic-block 2 2 (##.%x.686 ##.%r.687) ((##vcore.cdr (bruijn ##.parse.248 3 0)) (##vcore.null? (bruijn ##.%x.686 0 0))) ((bruijn ##.%k.494 1 0) (bruijn ##.%r.687 0 1))) ((bruijn ##.%k.494 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->vars[0]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.491 1 0) (basic-block 1 1 (##.%r.685) ((##vcore.car (bruijn ##.parse.248 4 0))) ((bruijn ##.%k.492 1 0) (bruijn ##.%r.685 0 0))) ((bruijn ##.compiler-error.70 8 10) (bruijn ##.%k.492 0 0) (##string ##.string.712)))
if(VDecodeBool(
statics->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D712.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.%k.490 6 0) (bruijn ##.parse.249 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      self->vars[0]);
}
static void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler library register-library-interface!) #t (bruijn ##.register-library-interface!.109 7 13) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121) (bruijn ##.parse.249 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k121, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0register__library__interface_B(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.close-port.76 8 16) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120) (bruijn ##.fd.247 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 16)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k120, self)))),
      statics->up->up->up->vars[0]);
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k118, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k119, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.684) ((##vcore.pair? (bruijn ##.parse.248 1 0))) ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k116, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k117, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k114, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k115, self)))));
}
void _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.search-open-input-file.78 3 18) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113) (bruijn ##.%x.497 0 0) (bruijn ##.paths.246 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[18]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k113, self)))),
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
  // (##qualified-call (vanity compiler library import->path) #t (bruijn ##.import->path.98 1 2) (close _V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112) (bruijn ##.import.245 0 1))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0library;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface_V0k112, self))));
    VWORD _arg1 = 
      _var1;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library)}, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0library_V0import___Gpath(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
static void _V0vanity_V0compiler_V0library_V20_V0k122(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 16 16 (##.%x.688 ##.%x.689 ##.%x.690 ##.%x.691 ##.%x.692 ##.%x.693 ##.%x.694 ##.%x.695 ##.%x.696 ##.%x.697 ##.%x.698 ##.%x.699 ##.%x.700 ##.%x.701 ##.%x.702 ##.%r.703) ((##vcore.cons 'process-import! (bruijn ##.process-import!.104 1 8)) (##vcore.cons 'library-exists? (bruijn ##.library-exists?.110 1 14)) (##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.109 1 13)) (##vcore.cons 'import-path (bruijn ##.import-path.108 1 12)) (##vcore.cons 'valid-import? (bruijn ##.valid-import?.99 1 3)) (##vcore.cons 'import-basepath (bruijn ##.import-basepath.97 1 1)) (##vcore.cons 'import->path (bruijn ##.import->path.98 1 2)) (##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.96 1 0)) (##vcore.cons (bruijn ##.%x.695 0 7) '()) (##vcore.cons (bruijn ##.%x.694 0 6) (bruijn ##.%x.696 0 8)) (##vcore.cons (bruijn ##.%x.693 0 5) (bruijn ##.%x.697 0 9)) (##vcore.cons (bruijn ##.%x.692 0 4) (bruijn ##.%x.698 0 10)) (##vcore.cons (bruijn ##.%x.691 0 3) (bruijn ##.%x.699 0 11)) (##vcore.cons (bruijn ##.%x.690 0 2) (bruijn ##.%x.700 0 12)) (##vcore.cons (bruijn ##.%x.689 0 1) (bruijn ##.%x.701 0 13)) (##vcore.cons (bruijn ##.%x.688 0 0) (bruijn ##.%x.702 0 14))) ((bruijn ##.%k.251 7 0) (bruijn ##.%r.703 0 15)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[16]; } container;
    self = &container.self;
    VInitEnv(self, 16, 16, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0process__import_B,
      statics->vars[8]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      _V0library__exists_Q,
      statics->vars[14]);
    self->vars[2] = _VBasic_VCons2(runtime, NULL,
      _V0register__library__interface_B,
      statics->vars[13]);
    self->vars[3] = _VBasic_VCons2(runtime, NULL,
      _V0import__path,
      statics->vars[12]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      _V0valid__import_Q,
      statics->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      _V0import__basepath,
      statics->vars[1]);
    self->vars[6] = _VBasic_VCons2(runtime, NULL,
      _V0import___Gpath,
      statics->vars[2]);
    self->vars[7] = _VBasic_VCons2(runtime, NULL,
      _V0gather__dependencies,
      statics->vars[0]);
    self->vars[8] = _VBasic_VCons2(runtime, NULL,
      self->vars[7],
      VNULL);
    self->vars[9] = _VBasic_VCons2(runtime, NULL,
      self->vars[6],
      self->vars[8]);
    self->vars[10] = _VBasic_VCons2(runtime, NULL,
      self->vars[5],
      self->vars[9]);
    self->vars[11] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      self->vars[10]);
    self->vars[12] = _VBasic_VCons2(runtime, NULL,
      self->vars[3],
      self->vars[11]);
    self->vars[13] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[12]);
    self->vars[14] = _VBasic_VCons2(runtime, NULL,
      self->vars[1],
      self->vars[13]);
    self->vars[15] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      self->vars[14]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[15]);
    }
}
static void _V0vanity_V0compiler_V0library_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18) {
 if(argc != 19) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_V0lambda2, got ~D~N"
  "-- expected 19~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[19]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 19, 19, statics);
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
  self->vars[14] = _var14;
  self->vars[15] = _var15;
  self->vars[16] = _var16;
  self->vars[17] = _var17;
  self->vars[18] = _var18;
  // (##letrec (vanity compiler library) 17 ((close "_V50_V0vanity_V0compiler_V0library_V0gather__dependencies" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import__basepath" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import___Gpath" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0valid__import_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0andf" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0process__import_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0extract__constants" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0extract__exports" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0import__path" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0library__exists_Q" (vanity compiler library)) (close "_V50_V0vanity_V0compiler_V0library_V0load__library__interface" (vanity compiler library)) #f) (set! (close _V0vanity_V0compiler_V0library_V20_V0k122) (bruijn ##.library-interfaces.112 0 16) '()))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[17]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0library = self;
    VInitEnv(self, 17, 17, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0gather__dependencies, _V60_V0vanity_V0compiler_V0library))));
    self->vars[1] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__basepath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import___Gpath, _V60_V0vanity_V0compiler_V0library))));
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0valid__import__element_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0andf, _V60_V0vanity_V0compiler_V0library))));
    self->vars[6] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__characters_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[7] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0acceptable__char_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[8] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0process__import_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[9] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__constants, _V60_V0vanity_V0compiler_V0library))));
    self->vars[10] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0extract__exports, _V60_V0vanity_V0compiler_V0library))));
    self->vars[11] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0find__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[12] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0import__path, _V60_V0vanity_V0compiler_V0library))));
    self->vars[13] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0register__library__interface_B, _V60_V0vanity_V0compiler_V0library))));
    self->vars[14] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0library__exists_Q, _V60_V0vanity_V0compiler_V0library))));
    self->vars[15] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0library_V0load__library__interface, _V60_V0vanity_V0compiler_V0library))));
    self->vars[16] = VEncodeBool(false);
    VRegisterStaticEnv("_V0vanity_V0compiler_V0library_V20", &_V60_V0vanity_V0compiler_V0library);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k122, self)))),
      VEncodeInt(0l), VEncodeInt(16l),
      VNULL
    );
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0library_V20_V0lambda2) (##string ##.string.713) (bruijn ##.%x.513 0 0) 'equal? 'append 'map 'sprintf 'fold 'memv 'list 'cadr 'error 'filter 'compiler-error 'assv 'string-append 'cddr 'assoc 'resolve-file-path 'close-port 'read-all 'search-open-input-file)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 22,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D713.sym, VPOINTER_OTHER),
      _var0,
      _V0equal_Q,
      _V0append,
      _V0map,
      _V0sprintf,
      _V0fold,
      _V0memv,
      _V0list,
      _V0cadr,
      _V0error,
      _V0filter,
      _V0compiler__error,
      _V0assv,
      _V0string__append,
      _V0cddr,
      _V0assoc,
      _V0resolve__file__path,
      _V0close__port,
      _V0read__all,
      _V0search__open__input__file);
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
  // (##vcore.vector (close _V0vanity_V0compiler_V0library_V20_V0k4) (bruijn ##.%x.514 2 0) (bruijn ##.%x.515 1 0) (bruijn ##.%x.516 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k4, self)))),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k3) (##string ##.string.714))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D714.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k2) (##string ##.string.715))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D715.sym, VPOINTER_OTHER));
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_V0k1) (##string ##.string.716))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D716.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0search__open__input__file = VEncodePointer(VInternSymbol(1642999496, &_VW_V0search__open__input__file.sym), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VInternSymbol(644502567, &_VW_V0read__all.sym), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VInternSymbol(-1573046396, &_VW_V0close__port.sym), VPOINTER_OTHER);
  _V0resolve__file__path = VEncodePointer(VInternSymbol(1687182104, &_VW_V0resolve__file__path.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VInternSymbol(1893973929, &_VW_V0string__append.sym), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VInternSymbol(-1259600321, &_VW_V0assv.sym), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VInternSymbol(1345485686, &_VW_V0compiler__error.sym), VPOINTER_OTHER);
  _V0filter = VEncodePointer(VInternSymbol(-52975199, &_VW_V0filter.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VInternSymbol(157128241, &_VW_V0memv.sym), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VInternSymbol(2090893058, &_VW_V0fold.sym), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VInternSymbol(1933004612, &_VW_V0sprintf.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0gather__dependencies = VEncodePointer(VInternSymbol(670285661, &_VW_V0gather__dependencies.sym), VPOINTER_OTHER);
  _V0import___Gpath = VEncodePointer(VInternSymbol(1827680974, &_VW_V0import___Gpath.sym), VPOINTER_OTHER);
  _V0import__basepath = VEncodePointer(VInternSymbol(442654183, &_VW_V0import__basepath.sym), VPOINTER_OTHER);
  _V0valid__import_Q = VEncodePointer(VInternSymbol(1339346449, &_VW_V0valid__import_Q.sym), VPOINTER_OTHER);
  _V0import__path = VEncodePointer(VInternSymbol(-195691845, &_VW_V0import__path.sym), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VInternSymbol(847975606, &_VW_V0register__library__interface_B.sym), VPOINTER_OTHER);
  _V0library__exists_Q = VEncodePointer(VInternSymbol(2058153055, &_VW_V0library__exists_Q.sym), VPOINTER_OTHER);
  _V0process__import_B = VEncodePointer(VInternSymbol(-62344956, &_VW_V0process__import_B.sym), VPOINTER_OTHER);
  _V0export = VEncodePointer(VInternSymbol(1426862643, &_VW_V0export.sym), VPOINTER_OTHER);
  _V0constant__export = VEncodePointer(VInternSymbol(2123793904, &_VW_V0constant__export.sym), VPOINTER_OTHER);
  _V0prefix = VEncodePointer(VInternSymbol(1117607804, &_VW_V0prefix.sym), VPOINTER_OTHER);
  _V0except = VEncodePointer(VInternSymbol(-444186265, &_VW_V0except.sym), VPOINTER_OTHER);
  _V0only = VEncodePointer(VInternSymbol(1014778380, &_VW_V0only.sym), VPOINTER_OTHER);
  _V0rename = VEncodePointer(VInternSymbol(1807760215, &_VW_V0rename.sym), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VInternSymbol(410494053, &_VW_V0define__library.sym), VPOINTER_OTHER);
  _V0import = VEncodePointer(VInternSymbol(268366565, &_VW_V0import.sym), VPOINTER_OTHER);
  _V10_Dpair_D708.first = VEncodeChar('-');
  _V10_Dpair_D708.rest = VEncodePointer(&_V10_Dpair_D707, VPOINTER_PAIR);
  _V10_Dpair_D707.first = VEncodeChar('_');
  _V10_Dpair_D707.rest = VNULL;
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
