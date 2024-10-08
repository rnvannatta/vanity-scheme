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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D289 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D288 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[35]; } _V10_Dstring_D286 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 35 }, "_V0vanity_V0compiler_V0library_V20" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0read__all;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0read__all = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "read-all" };
VWEAK VWORD _V0search__open__input__file;VWEAK struct { VBlob sym; char bytes[23]; } _VW_V0search__open__input__file = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 23 }, "search-open-input-file" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0_L_E;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0_L_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "<=" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0char___Ginteger;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0char___Ginteger = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "char->integer" };
VWEAK VWORD _V0_L;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_L = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "<" };
VWEAK VWORD _V0_P;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_P = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "+" };
VWEAK VWORD _V0string__ref;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0string__ref = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "string-ref" };
VWEAK VWORD _V0string__length;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__length = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-length" };
VWEAK VWORD _V0_G;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_G = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, ">" };
VWEAK VWORD _V0symbol___Gstring;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0symbol___Gstring = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "symbol->string" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0fold;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0fold = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "fold" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0sprintf;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0sprintf = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "sprintf" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0call_Wcc;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0call_Wcc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "call/cc" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0gather__dependencies;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0gather__dependencies = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "gather-dependencies" };
VWEAK VWORD _V0import___Gpath;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0import___Gpath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "import->path" };
VWEAK VWORD _V0import__basepath;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0import__basepath = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "import-basepath" };
VWEAK VWORD _V0valid__import_Q;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0valid__import_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "valid-import\?" };
VWEAK VWORD _V0header__from__library;VWEAK struct { VBlob sym; char bytes[20]; } _VW_V0header__from__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 20 }, "header-from-library" };
VWEAK VWORD _V0register__library__interface_B;VWEAK struct { VBlob sym; char bytes[28]; } _VW_V0register__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 28 }, "register-library-interface!" };
VWEAK VWORD _V0find__library__interface_B;VWEAK struct { VBlob sym; char bytes[24]; } _VW_V0find__library__interface_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 24 }, "find-library-interface!" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D285 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "not a valid library" };
VWEAK VWORD _V0define__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0define__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "define-library" };
VWEAK VWORD _V0inline__export;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0inline__export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "inline-export" };
VWEAK VWORD _V0inline__import;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0inline__import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "inline-import" };
VWEAK VWORD _V0export;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0export = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "export" };
VWEAK VWORD _V0import;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0import = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "import" };
VWEAK VWORD _V0define__library__interface;VWEAK struct { VBlob sym; char bytes[25]; } _VW_V0define__library__interface = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 25 }, "define-library-interface" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D284 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "." };
static struct { VBlob sym; char bytes[6]; } _V10_Dstring_D283 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 6 }, "~A/~A" };
static struct { VBlob sym; char bytes[8]; } _V10_Dstring_D282 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 8 }, "~A.scmh" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D281 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "library already registered" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D280 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "library header must only have one statement" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D279 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "unable to find library" };
static __attribute__((constructor)) void VDllMain1() {
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0read__all = VEncodePointer(VLookupConstant("_V0read__all", &_VW_V0read__all), VPOINTER_OTHER);
  _V0search__open__input__file = VEncodePointer(VLookupConstant("_V0search__open__input__file", &_VW_V0search__open__input__file), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0_L_E = VEncodePointer(VLookupConstant("_V0_L_E", &_VW_V0_L_E), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0char___Ginteger = VEncodePointer(VLookupConstant("_V0char___Ginteger", &_VW_V0char___Ginteger), VPOINTER_OTHER);
  _V0_L = VEncodePointer(VLookupConstant("_V0_L", &_VW_V0_L), VPOINTER_OTHER);
  _V0_P = VEncodePointer(VLookupConstant("_V0_P", &_VW_V0_P), VPOINTER_OTHER);
  _V0string__ref = VEncodePointer(VLookupConstant("_V0string__ref", &_VW_V0string__ref), VPOINTER_OTHER);
  _V0string__length = VEncodePointer(VLookupConstant("_V0string__length", &_VW_V0string__length), VPOINTER_OTHER);
  _V0_G = VEncodePointer(VLookupConstant("_V0_G", &_VW_V0_G), VPOINTER_OTHER);
  _V0symbol___Gstring = VEncodePointer(VLookupConstant("_V0symbol___Gstring", &_VW_V0symbol___Gstring), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0fold = VEncodePointer(VLookupConstant("_V0fold", &_VW_V0fold), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0sprintf = VEncodePointer(VLookupConstant("_V0sprintf", &_VW_V0sprintf), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0call_Wcc = VEncodePointer(VLookupConstant("_V0call_Wcc", &_VW_V0call_Wcc), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0gather__dependencies = VEncodePointer(VLookupConstant("_V0gather__dependencies", &_VW_V0gather__dependencies), VPOINTER_OTHER);
  _V0import___Gpath = VEncodePointer(VLookupConstant("_V0import___Gpath", &_VW_V0import___Gpath), VPOINTER_OTHER);
  _V0import__basepath = VEncodePointer(VLookupConstant("_V0import__basepath", &_VW_V0import__basepath), VPOINTER_OTHER);
  _V0valid__import_Q = VEncodePointer(VLookupConstant("_V0valid__import_Q", &_VW_V0valid__import_Q), VPOINTER_OTHER);
  _V0header__from__library = VEncodePointer(VLookupConstant("_V0header__from__library", &_VW_V0header__from__library), VPOINTER_OTHER);
  _V0register__library__interface_B = VEncodePointer(VLookupConstant("_V0register__library__interface_B", &_VW_V0register__library__interface_B), VPOINTER_OTHER);
  _V0find__library__interface_B = VEncodePointer(VLookupConstant("_V0find__library__interface_B", &_VW_V0find__library__interface_B), VPOINTER_OTHER);
  _V0define__library = VEncodePointer(VLookupConstant("_V0define__library", &_VW_V0define__library), VPOINTER_OTHER);
  _V0inline__export = VEncodePointer(VLookupConstant("_V0inline__export", &_VW_V0inline__export), VPOINTER_OTHER);
  _V0inline__import = VEncodePointer(VLookupConstant("_V0inline__import", &_VW_V0inline__import), VPOINTER_OTHER);
  _V0export = VEncodePointer(VLookupConstant("_V0export", &_VW_V0export), VPOINTER_OTHER);
  _V0import = VEncodePointer(VLookupConstant("_V0import", &_VW_V0import), VPOINTER_OTHER);
  _V0define__library__interface = VEncodePointer(VLookupConstant("_V0define__library__interface", &_VW_V0define__library__interface), VPOINTER_OTHER);
}
static void _V10_Dload__library__interface_D43_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k34, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.fd.57 1 0) ((bruijn ##.read-all.16 5 1) (bruijn ##.k.140 0 0) (bruijn ##.fd.57 1 0)) ((bruijn ##.compiler-error.35 5 20) (bruijn ##.k.140 0 0) (##string ##.string.279) (bruijn ##.import.55 3 1)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      _var0,
      upenv->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 20), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D279.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]);
}
 }
}
static void _V10_Dload__library__interface_D43_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k38, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.null?.36 8 21) (bruijn ##.k.138 1 0) (bruijn ##.x.139 0 0))
    V_CALL(VGetArg(upenv, 8-1, 21), runtime,
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Dload__library__interface_D43_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k37, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.137 1 0) ((bruijn ##.cdr.40 7 25) (close _V10_Dload__library__interface_D43_k38) (bruijn ##.parse.58 2 0)) ((bruijn ##.k.138 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 7-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k38, env)}),
      upenv->up->vars[0]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dload__library__interface_D43_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k40, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.135 1 0) ((bruijn ##.car.41 8 26) (bruijn ##.k.136 0 0) (bruijn ##.parse.58 3 0)) ((bruijn ##.compiler-error.35 8 20) (bruijn ##.k.136 0 0) (##string ##.string.280)))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 8-1, 26), runtime,
      _var0,
      upenv->up->up->vars[0]);
} else {
    V_CALL(VGetArg(upenv, 8-1, 20), runtime,
      _var0,
      VEncodePointer(&_V10_Dstring_D280.sym, VPOINTER_OTHER));
}
 }
}
static void _V10_Dload__library__interface_D43_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k43, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.132 8 0) (bruijn ##.parse.59 2 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dload__library__interface_D43_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k42, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.register-library-interface!.44 8 2) (close _V10_Dload__library__interface_D43_k43) (bruijn ##.parse.59 1 0))
    V_CALL(VGetArg(upenv, 8-1, 2), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k43, env)}),
      upenv->vars[0]);
 }
}
static void _V10_Dload__library__interface_D43_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k41, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.close-port.15 8 0) (close _V10_Dload__library__interface_D43_k42) (bruijn ##.fd.57 4 0))
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k42, env)}),
      upenv->up->up->up->vars[0]);
 }
}
static void _V10_Dload__library__interface_D43_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k39, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D43_k40) (close _V10_Dload__library__interface_D43_k41))
    V_CALL_FUNC(_V10_Dload__library__interface_D43_k40, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k41, env)}));
 }
}
static void _V10_Dload__library__interface_D43_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k36, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D43_k37) (close _V10_Dload__library__interface_D43_k39))
    V_CALL_FUNC(_V10_Dload__library__interface_D43_k37, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k39, env)}));
 }
}
static void _V10_Dload__library__interface_D43_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k35, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.pair?.32 5 17) (close _V10_Dload__library__interface_D43_k36) (bruijn ##.parse.58 0 0))
    V_CALL(VGetArg(upenv, 5-1, 17), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k36, env)}),
      _var0);
 }
}
static void _V10_Dload__library__interface_D43_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dload__library__interface_D43_k34) (close _V10_Dload__library__interface_D43_k35))
    V_CALL_FUNC(_V10_Dload__library__interface_D43_k34, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k35, env)}));
 }
}
static void _V10_Dload__library__interface_D43_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.search-open-input-file.17 3 2) (close _V10_Dload__library__interface_D43_k33) (bruijn ##.x.141 0 0) (bruijn ##.paths.56 1 2))
    V_CALL(upenv->up->up->vars[2], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k33, env)}),
      _var0,
      upenv->vars[2]);
 }
}
static void _V10_Dload__library__interface_D43_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dload__library__interface_D43_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dload__library__interface_D43_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.import->path.51 1 9) (close _V10_Dload__library__interface_D43_k32) (bruijn ##.import.55 0 1))
    V_CALL(upenv->vars[9], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_k32, env)}),
      _var1);
 }
}
static void _V10_Dregister__library__interface_B_D44_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k47, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.compiler-error.35 6 20) (bruijn ##.k.148 1 0) (##string ##.string.281) (bruijn ##.x.149 0 0))
    V_CALL(VGetArg(upenv, 6-1, 20), runtime,
      upenv->vars[0],
      VEncodePointer(&_V10_Dstring_D281.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dregister__library__interface_B_D44_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k46, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.147 1 0) ((bruijn ##.cadr.34 5 19) (close _V10_Dregister__library__interface_B_D44_k47) (bruijn ##.lib.60 3 1)) ((bruijn ##.k.148 0 0) #f))
if(VDecodeBool(
upenv->vars[0])) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k47, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dregister__library__interface_B_D44_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k51, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.142 6 0) (bruijn ##.library-interfaces.42 7 0) (bruijn ##.x.144 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VGetArg(upenv, 6-1, 0),
      VEncodeInt(7l), VEncodeInt(0l),
      _var0
    );
 }
}
static void _V10_Dregister__library__interface_B_D44_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k50, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.18 7 3) (close _V10_Dregister__library__interface_B_D44_k51) (bruijn ##.x.145 0 0) (bruijn ##.library-interfaces.42 6 0))
    V_CALL(VGetArg(upenv, 7-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k51, env)}),
      _var0,
      VGetArg(upenv, 6-1, 0));
 }
}
static void _V10_Dregister__library__interface_B_D44_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k49, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.18 6 3) (close _V10_Dregister__library__interface_B_D44_k50) (bruijn ##.x.146 0 0) (bruijn ##.lib.60 4 1))
    V_CALL(VGetArg(upenv, 6-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k50, env)}),
      _var0,
      upenv->up->up->up->vars[1]);
 }
}
static void _V10_Dregister__library__interface_B_D44_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k48, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cadr.34 5 19) (close _V10_Dregister__library__interface_B_D44_k49) (bruijn ##.lib.60 3 1))
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k49, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dregister__library__interface_B_D44_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k45, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dregister__library__interface_B_D44_k46) (close _V10_Dregister__library__interface_B_D44_k48))
    V_CALL_FUNC(_V10_Dregister__library__interface_B_D44_k46, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k48, env)}));
 }
}
static void _V10_Dregister__library__interface_B_D44_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_k44, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assoc.19 3 4) (close _V10_Dregister__library__interface_B_D44_k45) (bruijn ##.x.150 0 0) (bruijn ##.library-interfaces.42 2 0))
    V_CALL(upenv->up->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k45, env)}),
      _var0,
      upenv->up->vars[0]);
 }
}
static void _V10_Dregister__library__interface_B_D44_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dregister__library__interface_B_D44_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dregister__library__interface_B_D44_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cadr.34 2 19) (close _V10_Dregister__library__interface_B_D44_k44) (bruijn ##.lib.60 0 1))
    V_CALL(upenv->up->vars[19], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_k44, env)}),
      _var1);
 }
}
static void _V10_Dfind__library__interface_B_D45_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__library__interface_B_D45_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__library__interface_B_D45_k52, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.lookup.63 0 0) ((bruijn ##.cdr.40 3 25) (bruijn ##.k.151 1 0) (bruijn ##.lookup.63 0 0)) ((bruijn ##.load-library-interface.43 2 1) (bruijn ##.k.151 1 0) (bruijn ##.import.61 1 1) (bruijn ##.paths.62 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[25], runtime,
      upenv->vars[0],
      _var0);
} else {
    V_CALL(upenv->up->vars[1], runtime,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
}
 }
}
static void _V10_Dfind__library__interface_B_D45_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfind__library__interface_B_D45_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dfind__library__interface_B_D45_lambda5, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.assoc.19 2 4) (close _V10_Dfind__library__interface_B_D45_k52) (bruijn ##.import.61 0 1) (bruijn ##.library-interfaces.42 1 0))
    V_CALL(upenv->up->vars[4], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__library__interface_B_D45_k52, env)}),
      _var1,
      upenv->vars[0]);
 }
}
static void _V10_Dacceptable__char_Q_D46_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k62, runtime, upenv, 1, argc, _var0) {
  // (if (bruijn ##.p.155 0 0) ((bruijn ##.k.152 10 0) (bruijn ##.p.155 0 0)) ((bruijn ##.memv.21 12 6) (bruijn ##.k.152 10 0) (bruijn ##.c.64 10 1) (##inline ##vcore.qcons '#\- (##inline ##vcore.qcons '#\_ '()))))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 12-1, 6), runtime,
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 10-1, 1),
      VInlineCons2(runtime,
        VEncodeChar('-'),
        VInlineCons2(runtime,
        VEncodeChar('_'),
        VNULL)));
}
 }
}
static void _V10_Dacceptable__char_Q_D46_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k61, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<=.20 11 5) (close _V10_Dacceptable__char_Q_D46_k62) (bruijn ##.x.158 1 0) (bruijn ##.i.65 8 0) (bruijn ##.x.159 0 0))
    V_CALL(VGetArg(upenv, 11-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k62, env)}),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 0),
      _var0);
 }
}
static void _V10_Dacceptable__char_Q_D46_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k60, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.char->integer.22 10 7) (close _V10_Dacceptable__char_Q_D46_k61) #\9)
    V_CALL(VGetArg(upenv, 10-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k61, env)}),
      VEncodeChar('9'));
 }
}
static void _V10_Dacceptable__char_Q_D46_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k59, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.154 0 0) ((bruijn ##.k.152 7 0) (bruijn ##.p.154 0 0)) ((bruijn ##.char->integer.22 9 7) (close _V10_Dacceptable__char_Q_D46_k60) #\0))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 9-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k60, env)}),
      VEncodeChar('0'));
}
 }
}
static void _V10_Dacceptable__char_Q_D46_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k58, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<=.20 8 5) (close _V10_Dacceptable__char_Q_D46_k59) (bruijn ##.x.160 1 0) (bruijn ##.i.65 5 0) (bruijn ##.x.161 0 0))
    V_CALL(VGetArg(upenv, 8-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k59, env)}),
      upenv->vars[0],
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dacceptable__char_Q_D46_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k57, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.char->integer.22 7 7) (close _V10_Dacceptable__char_Q_D46_k58) #\Z)
    V_CALL(VGetArg(upenv, 7-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k58, env)}),
      VEncodeChar('Z'));
 }
}
static void _V10_Dacceptable__char_Q_D46_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k56, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.153 0 0) ((bruijn ##.k.152 4 0) (bruijn ##.p.153 0 0)) ((bruijn ##.char->integer.22 6 7) (close _V10_Dacceptable__char_Q_D46_k57) #\A))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      _var0);
} else {
    V_CALL(VGetArg(upenv, 6-1, 7), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k57, env)}),
      VEncodeChar('A'));
}
 }
}
static void _V10_Dacceptable__char_Q_D46_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k55, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.<=.20 5 5) (close _V10_Dacceptable__char_Q_D46_k56) (bruijn ##.x.162 1 0) (bruijn ##.i.65 2 0) (bruijn ##.x.163 0 0))
    V_CALL(VGetArg(upenv, 5-1, 5), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k56, env)}),
      upenv->vars[0],
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dacceptable__char_Q_D46_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k54, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.char->integer.22 4 7) (close _V10_Dacceptable__char_Q_D46_k55) #\z)
    V_CALL(upenv->up->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k55, env)}),
      VEncodeChar('z'));
 }
}
static void _V10_Dacceptable__char_Q_D46_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_k53, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.char->integer.22 3 7) (close _V10_Dacceptable__char_Q_D46_k54) #\a)
    V_CALL(upenv->up->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k54, env)}),
      VEncodeChar('a'));
 }
}
static void _V10_Dacceptable__char_Q_D46_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__char_Q_D46_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__char_Q_D46_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.char->integer.22 2 7) (close _V10_Dacceptable__char_Q_D46_k53) (bruijn ##.c.64 0 1))
    V_CALL(upenv->up->vars[7], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_k53, env)}),
      _var1);
 }
}
static void _V10_Dloop_D68_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k67, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.loop.68 5 0) (bruijn ##.k.165 4 0) (bruijn ##.x.168 0 0))
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dloop_D68_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k66, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.167 0 0) ((bruijn ##.+.24 8 9) (close _V10_Dloop_D68_k67) (bruijn ##.i.69 3 1) 1) ((bruijn ##.k.165 3 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k67, env)}),
      upenv->up->up->vars[1],
      VEncodeInt(1l));
} else {
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dloop_D68_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k65, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.acceptable-char?.46 6 4) (close _V10_Dloop_D68_k66) (bruijn ##.x.169 0 0))
    V_CALL(VGetArg(upenv, 6-1, 4), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k66, env)}),
      _var0);
 }
}
static void _V10_Dloop_D68_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_k64, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.166 0 0) ((bruijn ##.string-ref.25 6 10) (close _V10_Dloop_D68_k65) (bruijn ##.str.66 4 1) (bruijn ##.i.69 1 1)) ((bruijn ##.k.165 1 0) #t))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k65, env)}),
      upenv->up->up->up->vars[1],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(true));
}
 }
}
static void _V10_Dloop_D68_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D68_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dloop_D68_lambda8, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.<.23 5 8) (close _V10_Dloop_D68_k64) (bruijn ##.i.69 0 1) (bruijn ##.len.67 2 0))
    V_CALL(VGetArg(upenv, 5-1, 8), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_k64, env)}),
      _var1,
      upenv->up->vars[0]);
 }
}
static void _V10_Dacceptable__characters_Q_D47_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__characters_Q_D47_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__characters_Q_D47_k63, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D68_lambda8)) ((bruijn ##.loop.68 0 0) (bruijn ##.k.164 2 0) 0))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D68_lambda8, env)});
    V_CALL(env->vars[0], runtime,
      upenv->up->vars[0],
      VEncodeInt(0l));
    }
 }
}
static void _V10_Dacceptable__characters_Q_D47_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dacceptable__characters_Q_D47_lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dacceptable__characters_Q_D47_lambda7, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.string-length.26 2 11) (close _V10_Dacceptable__characters_Q_D47_k63) (bruijn ##.str.66 0 1))
    V_CALL(upenv->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__characters_Q_D47_k63, env)}),
      _var1);
 }
}
static void _V10_Dandf_D48_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dandf_D48_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dandf_D48_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (if (bruijn ##.a.70 0 1) ((bruijn ##.k.170 0 0) (bruijn ##.b.71 0 2)) ((bruijn ##.k.170 0 0) #f))
if(VDecodeBool(
_var1)) {
    V_CALL(_var0, runtime,
      _var2);
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalid__import__element_Q_D49_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_k72, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.acceptable-characters?.47 6 5) (bruijn ##.k.171 5 0) (bruijn ##.x.174 0 0))
    V_CALL(VGetArg(upenv, 6-1, 5), runtime,
      VGetArg(upenv, 5-1, 0),
      _var0);
 }
}
static void _V10_Dvalid__import__element_Q_D49_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_k71, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.173 0 0) ((bruijn ##.symbol->string.28 6 13) (close _V10_Dvalid__import__element_Q_D49_k72) (bruijn ##.x.72 4 1)) ((bruijn ##.k.171 4 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 6-1, 13), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_k72, env)}),
      upenv->up->up->up->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalid__import__element_Q_D49_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_k70, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.>.27 5 12) (close _V10_Dvalid__import__element_Q_D49_k71) (bruijn ##.x.175 0 0) 0)
    V_CALL(VGetArg(upenv, 5-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_k71, env)}),
      _var0,
      VEncodeInt(0l));
 }
}
static void _V10_Dvalid__import__element_Q_D49_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_k69, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.string-length.26 4 11) (close _V10_Dvalid__import__element_Q_D49_k70) (bruijn ##.x.176 0 0))
    V_CALL(upenv->up->up->up->vars[11], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_k70, env)}),
      _var0);
 }
}
static void _V10_Dvalid__import__element_Q_D49_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_k68, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.symbol->string.28 3 13) (close _V10_Dvalid__import__element_Q_D49_k69) (bruijn ##.x.72 1 1)) ((bruijn ##.k.171 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[13], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_k69, env)}),
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalid__import__element_Q_D49_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import__element_Q_D49_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import__element_Q_D49_lambda10, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.symbol?.29 2 14) (close _V10_Dvalid__import__element_Q_D49_k68) (bruijn ##.x.72 0 1))
    V_CALL(upenv->up->vars[14], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_k68, env)}),
      _var1);
 }
}
static void _V10_Dvalid__import_Q_D50_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import_Q_D50_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import_Q_D50_k74, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.fold.31 4 16) (bruijn ##.k.177 2 0) (bruijn ##.andf.48 3 6) #t (bruijn ##.x.179 0 0))
    V_CALL(upenv->up->up->up->vars[16], runtime,
      upenv->up->vars[0],
      upenv->up->up->vars[6],
      VEncodeBool(true),
      _var0);
 }
}
static void _V10_Dvalid__import_Q_D50_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import_Q_D50_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import_Q_D50_k73, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.178 0 0) ((bruijn ##.map.30 3 15) (close _V10_Dvalid__import_Q_D50_k74) (bruijn ##.valid-import-element?.49 2 7) (bruijn ##.import.73 1 1)) ((bruijn ##.k.177 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->vars[15], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import_Q_D50_k74, env)}),
      upenv->up->vars[7],
      upenv->vars[1]);
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dvalid__import_Q_D50_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dvalid__import_Q_D50_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dvalid__import_Q_D50_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.32 2 17) (close _V10_Dvalid__import_Q_D50_k73) (bruijn ##.import.73 0 1))
    V_CALL(upenv->up->vars[17], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import_Q_D50_k73, env)}),
      _var1);
 }
}
static void _V10_Dimport___Gpath_D51_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k77, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.33 5 18) (bruijn ##.k.180 3 0) (##string ##.string.282) (bruijn ##.x.182 0 0))
    V_CALL(VGetArg(upenv, 5-1, 18), runtime,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D282.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10_Dimport___Gpath_D51_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k80, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.33 7 18) (bruijn ##.k.180 5 0) (##string ##.string.283) (bruijn ##.x.183 2 0) (bruijn ##.x.184 0 0))
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D283.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dimport___Gpath_D51_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k79, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.import->path.51 5 9) (close _V10_Dimport___Gpath_D51_k80) (bruijn ##.x.185 0 0))
    V_CALL(VGetArg(upenv, 5-1, 9), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k80, env)}),
      _var0);
 }
}
static void _V10_Dimport___Gpath_D51_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k78, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 5 25) (close _V10_Dimport___Gpath_D51_k79) (bruijn ##.import.74 3 1))
    V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k79, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dimport___Gpath_D51_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k76, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.181 0 0) ((bruijn ##.car.41 4 26) (close _V10_Dimport___Gpath_D51_k77) (bruijn ##.import.74 2 1)) ((bruijn ##.car.41 4 26) (close _V10_Dimport___Gpath_D51_k78) (bruijn ##.import.74 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k77, env)}),
      upenv->up->vars[1]);
} else {
    V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k78, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dimport___Gpath_D51_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_k75, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.36 3 21) (close _V10_Dimport___Gpath_D51_k76) (bruijn ##.x.186 0 0))
    V_CALL(upenv->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k76, env)}),
      _var0);
 }
}
static void _V10_Dimport___Gpath_D51_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport___Gpath_D51_lambda12, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport___Gpath_D51_lambda12, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.40 2 25) (close _V10_Dimport___Gpath_D51_k75) (bruijn ##.import.74 0 1))
    V_CALL(upenv->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_k75, env)}),
      _var1);
 }
}
static void _V10_Dimport__basepath_D52_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_k85, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.sprintf.33 7 18) (bruijn ##.k.187 5 0) (##string ##.string.283) (bruijn ##.x.189 2 0) (bruijn ##.x.190 0 0))
    V_CALL(VGetArg(upenv, 7-1, 18), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodePointer(&_V10_Dstring_D283.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dimport__basepath_D52_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_k84, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.import-basepath.52 5 10) (close _V10_Dimport__basepath_D52_k85) (bruijn ##.x.191 0 0))
    V_CALL(VGetArg(upenv, 5-1, 10), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_k85, env)}),
      _var0);
 }
}
static void _V10_Dimport__basepath_D52_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_k83, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 5 25) (close _V10_Dimport__basepath_D52_k84) (bruijn ##.import.75 3 1))
    V_CALL(VGetArg(upenv, 5-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_k84, env)}),
      upenv->up->up->vars[1]);
 }
}
static void _V10_Dimport__basepath_D52_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_k82, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.188 0 0) ((bruijn ##.k.187 2 0) (##string ##.string.284)) ((bruijn ##.car.41 4 26) (close _V10_Dimport__basepath_D52_k83) (bruijn ##.import.75 2 1)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodePointer(&_V10_Dstring_D284.sym, VPOINTER_OTHER));
} else {
    V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_k83, env)}),
      upenv->up->vars[1]);
}
 }
}
static void _V10_Dimport__basepath_D52_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_k81, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.null?.36 3 21) (close _V10_Dimport__basepath_D52_k82) (bruijn ##.x.192 0 0))
    V_CALL(upenv->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_k82, env)}),
      _var0);
 }
}
static void _V10_Dimport__basepath_D52_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dimport__basepath_D52_lambda13, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dimport__basepath_D52_lambda13, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.cdr.40 2 25) (close _V10_Dimport__basepath_D52_k81) (bruijn ##.import.75 0 1))
    V_CALL(upenv->up->vars[25], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_k81, env)}),
      _var1);
 }
}
static void _V10_Diter_D77_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k87, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.194 2 0) (##inline ##vcore.cons 'define-library-interface (##inline ##vcore.cons (bruijn ##.x.197 0 0) (##inline ##vcore.cons (##inline ##vcore.cons 'import (bruijn ##.imports.79 2 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'export (bruijn ##.exports.78 2 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'inline-import '()) (##inline ##vcore.cons (##inline ##vcore.cons 'inline-export '()) '())))))))
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        _V0define__library__interface,
        VInlineCons2(runtime,
        _var0,
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import,
        upenv->up->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0export,
        upenv->up->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inline__import,
        VNULL),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0inline__export,
        VNULL),
        VNULL)))))));
 }
}
static void _V10_Diter_D77_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k93, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.81 7 1) (bruijn ##.k.219 4 0) (bruijn ##.x.221 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D77_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k92, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.77 9 0) (close _V10_Diter_D77_k93) (bruijn ##.x.222 1 0) (bruijn ##.imports.79 8 2) (bruijn ##.x.223 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k93, env)}),
      upenv->vars[0],
      VGetArg(upenv, 8-1, 2),
      _var0);
 }
}
static void _V10_Diter_D77_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k91, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 11 25) (close _V10_Diter_D77_k92) (bruijn ##.rest.80 7 3))
    V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k92, env)}),
      VGetArg(upenv, 7-1, 3));
 }
}
static void _V10_Diter_D77_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k90, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.220 0 0) ((bruijn ##.append.38 10 23) (close _V10_Diter_D77_k91) (bruijn ##.exports.78 6 1) (##inline ##vcore.cdr (bruijn ##.expr.7.83 2 0))) ((bruijn ##.k.219 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k91, env)}),
      VGetArg(upenv, 6-1, 1),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D77_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k89, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.83 1 0)) ((bruijn ##.equal?.39 9 24) (close _V10_Diter_D77_k90) 'export (##inline ##vcore.car (bruijn ##.expr.7.83 1 0))) ((bruijn ##.k.219 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k90, env)}),
      _V0export,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D77_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k99, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.81 9 1) (bruijn ##.k.212 4 0) (bruijn ##.x.214 0 0))
    V_CALL(VGetArg(upenv, 9-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Diter_D77_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k98, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.77 11 0) (close _V10_Diter_D77_k99) (bruijn ##.exports.78 10 1) (bruijn ##.x.215 1 0) (bruijn ##.x.216 0 0))
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k99, env)}),
      VGetArg(upenv, 10-1, 1),
      upenv->vars[0],
      _var0);
 }
}
static void _V10_Diter_D77_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k97, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 13 25) (close _V10_Diter_D77_k98) (bruijn ##.rest.80 9 3))
    V_CALL(VGetArg(upenv, 13-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k98, env)}),
      VGetArg(upenv, 9-1, 3));
 }
}
static void _V10_Diter_D77_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k96, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.213 0 0) ((bruijn ##.append.38 12 23) (close _V10_Diter_D77_k97) (bruijn ##.imports.79 8 2) (##inline ##vcore.cdr (bruijn ##.expr.8.85 2 0))) ((bruijn ##.k.212 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 12-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k97, env)}),
      VGetArg(upenv, 8-1, 2),
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D77_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k95, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.85 1 0)) ((bruijn ##.equal?.39 11 24) (close _V10_Diter_D77_k96) 'import (##inline ##vcore.car (bruijn ##.expr.8.85 1 0))) ((bruijn ##.k.212 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 11-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k96, env)}),
      _V0import,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Diter_D77_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k102, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.5.81 7 1) (bruijn ##.k.206 7 0) (bruijn ##.x.209 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Diter_D77_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k101, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.77 9 0) (close _V10_Diter_D77_k102) (bruijn ##.exports.78 8 1) (bruijn ##.imports.79 8 2) (bruijn ##.x.210 0 0))
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k102, env)}),
      VGetArg(upenv, 8-1, 1),
      VGetArg(upenv, 8-1, 2),
      _var0);
 }
}
static void _V10_Diter_D77_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k100, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 11 25) (close _V10_Diter_D77_k101) (bruijn ##.rest.80 7 3))
    V_CALL(VGetArg(upenv, 11-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k101, env)}),
      VGetArg(upenv, 7-1, 3));
 }
}
static void _V10_Diter_D77_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_lambda18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D77_k95) (close _V10_Diter_D77_k100))
    V_CALL_FUNC(_V10_Diter_D77_k95, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k100, env)}));
 }
}
static void _V10_Diter_D77_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k94, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D77_lambda18) (bruijn ##.input.6.82 2 0))
    V_CALL_FUNC(_V10_Diter_D77_lambda18, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Diter_D77_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_lambda17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D77_k89) (close _V10_Diter_D77_k94))
    V_CALL_FUNC(_V10_Diter_D77_k89, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k94, env)}));
 }
}
static void _V10_Diter_D77_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k88, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D77_lambda17) (bruijn ##.input.6.82 0 0))
    V_CALL_FUNC(_V10_Diter_D77_lambda17, env, runtime,
      _var0);
 }
}
static void _V10_Diter_D77_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_lambda16, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_lambda16, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.41 6 26) (close _V10_Diter_D77_k88) (bruijn ##.rest.80 2 3))
    V_CALL(VGetArg(upenv, 6-1, 26), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k88, env)}),
      upenv->up->vars[3]);
 }
}
static void _V10_Diter_D77_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_k86, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.195 0 0) ((bruijn ##.cadr.34 5 19) (close _V10_Diter_D77_k87) (bruijn ##.lib.76 3 1)) ((bruijn ##.call/cc.37 5 22) (bruijn ##.k.194 1 0) (close _V10_Diter_D77_lambda16)))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 5-1, 19), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k87, env)}),
      upenv->up->up->vars[1]);
} else {
    V_CALL(VGetArg(upenv, 5-1, 22), runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_lambda16, env)}));
}
 }
}
static void _V10_Diter_D77_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D77_lambda15, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Diter_D77_lambda15, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((bruijn ##.null?.36 4 21) (close _V10_Diter_D77_k86) (bruijn ##.rest.80 0 3))
    V_CALL(upenv->up->up->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_k86, env)}),
      _var3);
 }
}
static void _V10_Dheader__from__library_D53_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k106, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.87 6 1) (bruijn ##.k.234 3 0) (bruijn ##.x.237 0 0))
    V_CALL(VGetArg(upenv, 6-1, 1), runtime,
      upenv->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dheader__from__library_D53_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k105, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.90 0 0)) ((bruijn ##.iter.77 6 0) (close _V10_Dheader__from__library_D53_k106) '() '() (##inline ##vcore.cdr (bruijn ##.expr.3.90 0 0))) ((bruijn ##.k.234 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k106, env)}),
      VNULL,
      VNULL,
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dheader__from__library_D53_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k104, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.235 0 0) ((close _V10_Dheader__from__library_D53_k105) (##inline ##vcore.cdr (bruijn ##.expr.2.89 2 0))) ((bruijn ##.k.234 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dheader__from__library_D53_k105, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dheader__from__library_D53_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k103, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.89 1 0)) ((bruijn ##.equal?.39 7 24) (close _V10_Dheader__from__library_D53_k104) 'define-library (##inline ##vcore.car (bruijn ##.expr.2.89 1 0))) ((bruijn ##.k.234 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k104, env)}),
      _V0define__library,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dheader__from__library_D53_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k110, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.87 7 1) (bruijn ##.k.229 2 0) (bruijn ##.x.231 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dheader__from__library_D53_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k109, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.230 0 0) ((bruijn ##.compiler-error.35 10 20) (close _V10_Dheader__from__library_D53_k110) (##string ##.string.285) (bruijn ##.lib.76 8 1)) ((bruijn ##.k.229 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 10-1, 20), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k110, env)}),
      VEncodePointer(&_V10_Dstring_D285.sym, VPOINTER_OTHER),
      VGetArg(upenv, 8-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dheader__from__library_D53_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k108, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.93 1 0)) ((bruijn ##.equal?.39 9 24) (close _V10_Dheader__from__library_D53_k109) 'define-library (##inline ##vcore.car (bruijn ##.expr.4.93 1 0))) ((bruijn ##.k.229 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k109, env)}),
      _V0define__library,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dheader__from__library_D53_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k111, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.0.87 5 1) (bruijn ##.k.225 5 0) #f)
    V_CALL(VGetArg(upenv, 5-1, 1), runtime,
      VGetArg(upenv, 5-1, 0),
      VEncodeBool(false));
 }
}
static void _V10_Dheader__from__library_D53_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_lambda22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dheader__from__library_D53_k108) (close _V10_Dheader__from__library_D53_k111))
    V_CALL_FUNC(_V10_Dheader__from__library_D53_k108, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k111, env)}));
 }
}
static void _V10_Dheader__from__library_D53_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_k107, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dheader__from__library_D53_lambda22) (bruijn ##.input.1.88 2 0))
    V_CALL_FUNC(_V10_Dheader__from__library_D53_lambda22, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dheader__from__library_D53_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_lambda21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dheader__from__library_D53_k103) (close _V10_Dheader__from__library_D53_k107))
    V_CALL_FUNC(_V10_Dheader__from__library_D53_k103, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_k107, env)}));
 }
}
static void _V10_Dheader__from__library_D53_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_lambda20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dheader__from__library_D53_lambda21) (bruijn ##.input.1.88 0 0))
    V_CALL_FUNC(_V10_Dheader__from__library_D53_lambda21, env, runtime,
      _var0);
 }
}
static void _V10_Dheader__from__library_D53_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_lambda19, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_lambda19, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dheader__from__library_D53_lambda20) (bruijn ##.lib.76 2 1))
    V_CALL_FUNC(_V10_Dheader__from__library_D53_lambda20, env, runtime,
      upenv->up->vars[1]);
 }
}
static void _V10_Dheader__from__library_D53_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dheader__from__library_D53_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dheader__from__library_D53_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Diter_D77_lambda15)) ((bruijn ##.call/cc.37 3 22) (bruijn ##.k.193 1 0) (close _V10_Dheader__from__library_D53_lambda19)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D77_lambda15, env)});
    V_CALL(upenv->up->up->vars[22], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_lambda19, env)}));
    }
 }
}
static void _V10_Dgather__dependencies_D54_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k118, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.95 7 1) (bruijn ##.k.256 4 0) (bruijn ##.x.258 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      upenv->up->up->up->vars[0],
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k117, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.append.38 10 23) (close _V10_Dgather__dependencies_D54_k118) (##inline ##vcore.cdr (bruijn ##.expr.11.97 4 0)) (bruijn ##.x.259 0 0))
    V_CALL(VGetArg(upenv, 10-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k118, env)}),
      VInlineCdr2(runtime,
        upenv->up->up->up->vars[0]),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k116, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.54 8 12) (close _V10_Dgather__dependencies_D54_k117) (bruijn ##.x.260 0 0))
    V_CALL(VGetArg(upenv, 8-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k117, env)}),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k115, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.257 0 0) ((bruijn ##.cdr.40 8 25) (close _V10_Dgather__dependencies_D54_k116) (bruijn ##.statements.94 6 1)) ((bruijn ##.k.256 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL(VGetArg(upenv, 8-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k116, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__dependencies_D54_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k114, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.97 1 0)) ((bruijn ##.equal?.39 7 24) (close _V10_Dgather__dependencies_D54_k115) 'import (##inline ##vcore.car (bruijn ##.expr.11.97 1 0))) ((bruijn ##.k.256 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 7-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k115, env)}),
      _V0import,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__dependencies_D54_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k126, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.95 11 1) (bruijn ##.k.247 6 0) (bruijn ##.x.250 0 0))
    V_CALL(VGetArg(upenv, 11-1, 1), runtime,
      VGetArg(upenv, 6-1, 0),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k125, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.append.38 14 23) (close _V10_Dgather__dependencies_D54_k126) (bruijn ##.x.251 2 0) (bruijn ##.x.252 0 0))
    V_CALL(VGetArg(upenv, 14-1, 23), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k126, env)}),
      upenv->up->vars[0],
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k124, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.54 12 12) (close _V10_Dgather__dependencies_D54_k125) (bruijn ##.x.253 0 0))
    V_CALL(VGetArg(upenv, 12-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k125, env)}),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k123, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 12 25) (close _V10_Dgather__dependencies_D54_k124) (bruijn ##.statements.94 10 1))
    V_CALL(VGetArg(upenv, 12-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k124, env)}),
      VGetArg(upenv, 10-1, 1));
 }
}
static void _V10_Dgather__dependencies_D54_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k122, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.13.100 0 0)) ((bruijn ##.gather-dependencies.54 10 12) (close _V10_Dgather__dependencies_D54_k123) (##inline ##vcore.cdr (bruijn ##.expr.13.100 0 0))) ((bruijn ##.k.247 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    V_CALL(VGetArg(upenv, 10-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k123, env)}),
      VInlineCdr2(runtime,
        _var0));
} else {
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__dependencies_D54_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k121, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.248 0 0) ((close _V10_Dgather__dependencies_D54_k122) (##inline ##vcore.cdr (bruijn ##.expr.12.99 2 0))) ((bruijn ##.k.247 1 0) #f))
if(VDecodeBool(
_var0)) {
    V_CALL_FUNC(_V10_Dgather__dependencies_D54_k122, env, runtime,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    V_CALL(upenv->vars[0], runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__dependencies_D54_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k120, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.12.99 1 0)) ((bruijn ##.equal?.39 9 24) (close _V10_Dgather__dependencies_D54_k121) 'define-library (##inline ##vcore.car (bruijn ##.expr.12.99 1 0))) ((bruijn ##.k.247 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    V_CALL(VGetArg(upenv, 9-1, 24), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k121, env)}),
      _V0define__library,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    V_CALL(_var0, runtime,
      VEncodeBool(false));
}
 }
}
static void _V10_Dgather__dependencies_D54_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k129, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.kk.9.95 7 1) (bruijn ##.k.241 7 0) (bruijn ##.x.244 0 0))
    V_CALL(VGetArg(upenv, 7-1, 1), runtime,
      VGetArg(upenv, 7-1, 0),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k128, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gather-dependencies.54 9 12) (close _V10_Dgather__dependencies_D54_k129) (bruijn ##.x.245 0 0))
    V_CALL(VGetArg(upenv, 9-1, 12), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k129, env)}),
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k127, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.40 9 25) (close _V10_Dgather__dependencies_D54_k128) (bruijn ##.statements.94 7 1))
    V_CALL(VGetArg(upenv, 9-1, 25), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k128, env)}),
      VGetArg(upenv, 7-1, 1));
 }
}
static void _V10_Dgather__dependencies_D54_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_lambda26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D54_k120) (close _V10_Dgather__dependencies_D54_k127))
    V_CALL_FUNC(_V10_Dgather__dependencies_D54_k120, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k127, env)}));
 }
}
static void _V10_Dgather__dependencies_D54_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k119, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D54_lambda26) (bruijn ##.input.10.96 2 0))
    V_CALL_FUNC(_V10_Dgather__dependencies_D54_lambda26, env, runtime,
      upenv->up->vars[0]);
 }
}
static void _V10_Dgather__dependencies_D54_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_lambda25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D54_k114) (close _V10_Dgather__dependencies_D54_k119))
    V_CALL_FUNC(_V10_Dgather__dependencies_D54_k114, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k119, env)}));
 }
}
static void _V10_Dgather__dependencies_D54_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k113, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dgather__dependencies_D54_lambda25) (bruijn ##.input.10.96 0 0))
    V_CALL_FUNC(_V10_Dgather__dependencies_D54_lambda25, env, runtime,
      _var0);
 }
}
static void _V10_Dgather__dependencies_D54_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_lambda24, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_lambda24, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.car.41 4 26) (close _V10_Dgather__dependencies_D54_k113) (bruijn ##.statements.94 2 1))
    V_CALL(upenv->up->up->up->vars[26], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k113, env)}),
      upenv->up->vars[1]);
 }
}
static void _V10_Dgather__dependencies_D54_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_k112, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.240 0 0) ((bruijn ##.k.239 1 0) '()) ((bruijn ##.call/cc.37 3 22) (bruijn ##.k.239 1 0) (close _V10_Dgather__dependencies_D54_lambda24)))
if(VDecodeBool(
_var0)) {
    V_CALL(upenv->vars[0], runtime,
      VNULL);
} else {
    V_CALL(upenv->up->up->vars[22], runtime,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_lambda24, env)}));
}
 }
}
static void _V10_Dgather__dependencies_D54_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgather__dependencies_D54_lambda23, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10_Dgather__dependencies_D54_lambda23, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.36 2 21) (close _V10_Dgather__dependencies_D54_k112) (bruijn ##.statements.94 0 1))
    V_CALL(upenv->up->vars[21], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_k112, env)}),
      _var1);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k130, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##.k.104 34 0) (##inline ##vcore.cons (##inline ##vcore.cons 'find-library-interface! (bruijn ##.find-library-interface!.45 1 3)) (##inline ##vcore.cons (##inline ##vcore.cons 'register-library-interface! (bruijn ##.register-library-interface!.44 1 2)) (##inline ##vcore.cons (##inline ##vcore.cons 'header-from-library (bruijn ##.header-from-library.53 1 11)) (##inline ##vcore.cons (##inline ##vcore.cons 'valid-import? (bruijn ##.valid-import?.50 1 8)) (##inline ##vcore.cons (##inline ##vcore.cons 'import-basepath (bruijn ##.import-basepath.52 1 10)) (##inline ##vcore.cons (##inline ##vcore.cons 'import->path (bruijn ##.import->path.51 1 9)) (##inline ##vcore.cons (##inline ##vcore.cons 'gather-dependencies (bruijn ##.gather-dependencies.54 1 12)) '()))))))))
    V_CALL(VGetArg(upenv, 34-1, 0), runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0find__library__interface_B,
        upenv->vars[3]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0register__library__interface_B,
        upenv->vars[2]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0header__from__library,
        upenv->vars[11]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0valid__import_Q,
        upenv->vars[8]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import__basepath,
        upenv->vars[10]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0import___Gpath,
        upenv->vars[9]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0gather__dependencies,
        upenv->vars[12]),
        VNULL))))))));
 }
}
static void _V0vanity_V0compiler_V0library_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18, VWORD _var19, VWORD _var20, VWORD _var21, VWORD _var22, VWORD _var23, VWORD _var24, VWORD _var25, VWORD _var26) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_lambda2, runtime, upenv, 27, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7, _var8, _var9, _var10, _var11, _var12, _var13, _var14, _var15, _var16, _var17, _var18, _var19, _var20, _var21, _var22, _var23, _var24, _var25, _var26) {
  struct { VEnv env; VWORD argv[27]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 27, 27, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  env->vars[8] = _var8;
  env->vars[9] = _var9;
  env->vars[10] = _var10;
  env->vars[11] = _var11;
  env->vars[12] = _var12;
  env->vars[13] = _var13;
  env->vars[14] = _var14;
  env->vars[15] = _var15;
  env->vars[16] = _var16;
  env->vars[17] = _var17;
  env->vars[18] = _var18;
  env->vars[19] = _var19;
  env->vars[20] = _var20;
  env->vars[21] = _var21;
  env->vars[22] = _var22;
  env->vars[23] = _var23;
  env->vars[24] = _var24;
  env->vars[25] = _var25;
  env->vars[26] = _var26;
  // (letrec 13 (#f (close _V10_Dload__library__interface_D43_lambda3) (close _V10_Dregister__library__interface_B_D44_lambda4) (close _V10_Dfind__library__interface_B_D45_lambda5) (close _V10_Dacceptable__char_Q_D46_lambda6) (close _V10_Dacceptable__characters_Q_D47_lambda7) (close _V10_Dandf_D48_lambda9) (close _V10_Dvalid__import__element_Q_D49_lambda10) (close _V10_Dvalid__import_Q_D50_lambda11) (close _V10_Dimport___Gpath_D51_lambda12) (close _V10_Dimport__basepath_D52_lambda13) (close _V10_Dheader__from__library_D53_lambda14) (close _V10_Dgather__dependencies_D54_lambda23)) (set! (close _V0vanity_V0compiler_V0library_V20_k130) (bruijn ##.library-interfaces.42 0 0) '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[13]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 13, 13, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dload__library__interface_D43_lambda3, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dregister__library__interface_B_D44_lambda4, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfind__library__interface_B_D45_lambda5, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__char_Q_D46_lambda6, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dacceptable__characters_Q_D47_lambda7, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dandf_D48_lambda9, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import__element_Q_D49_lambda10, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dvalid__import_Q_D50_lambda11, env)});
    env->vars[9] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport___Gpath_D51_lambda12, env)});
    env->vars[10] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dimport__basepath_D52_lambda13, env)});
    env->vars[11] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dheader__from__library_D53_lambda14, env)});
    env->vars[12] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgather__dependencies_D54_lambda23, env)});
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k130, env)}),
      VEncodeInt(0l), VEncodeInt(0l),
      VNULL
    );
    }
 }
}
static void _V0vanity_V0compiler_V0library_V20_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k31, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0library_V20_lambda2) (bruijn ##.x.105 26 0) (bruijn ##.x.106 25 0) (bruijn ##.x.107 24 0) (bruijn ##.x.108 23 0) (bruijn ##.x.109 22 0) (bruijn ##.x.110 21 0) (bruijn ##.x.111 20 0) (bruijn ##.x.112 19 0) (bruijn ##.x.113 18 0) (bruijn ##.x.114 17 0) (bruijn ##.x.115 16 0) (bruijn ##.x.116 15 0) (bruijn ##.x.117 14 0) (bruijn ##.x.118 13 0) (bruijn ##.x.119 12 0) (bruijn ##.x.120 11 0) (bruijn ##.x.121 10 0) (bruijn ##.x.122 9 0) (bruijn ##.x.123 8 0) (bruijn ##.x.124 7 0) (bruijn ##.x.125 6 0) (bruijn ##.x.126 5 0) (bruijn ##.x.127 4 0) (bruijn ##.x.128 3 0) (bruijn ##.x.129 2 0) (bruijn ##.x.130 1 0) (bruijn ##.x.131 0 0))
    V_CALL_FUNC(_V0vanity_V0compiler_V0library_V20_lambda2, env, runtime,
      VGetArg(upenv, 26-1, 0),
      VGetArg(upenv, 25-1, 0),
      VGetArg(upenv, 24-1, 0),
      VGetArg(upenv, 23-1, 0),
      VGetArg(upenv, 22-1, 0),
      VGetArg(upenv, 21-1, 0),
      VGetArg(upenv, 20-1, 0),
      VGetArg(upenv, 19-1, 0),
      VGetArg(upenv, 18-1, 0),
      VGetArg(upenv, 17-1, 0),
      VGetArg(upenv, 16-1, 0),
      VGetArg(upenv, 15-1, 0),
      VGetArg(upenv, 14-1, 0),
      VGetArg(upenv, 13-1, 0),
      VGetArg(upenv, 12-1, 0),
      VGetArg(upenv, 11-1, 0),
      VGetArg(upenv, 10-1, 0),
      VGetArg(upenv, 9-1, 0),
      VGetArg(upenv, 8-1, 0),
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 26 0) (close _V0vanity_V0compiler_V0library_V20_k31) 'car)
    V_CALL(VGetArg(upenv, 26-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k31, env)}),
      _V0car);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 25 0) (close _V0vanity_V0compiler_V0library_V20_k30) 'cdr)
    V_CALL(VGetArg(upenv, 25-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k30, env)}),
      _V0cdr);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 24 0) (close _V0vanity_V0compiler_V0library_V20_k29) 'equal?)
    V_CALL(VGetArg(upenv, 24-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k29, env)}),
      _V0equal_Q);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k27, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 23 0) (close _V0vanity_V0compiler_V0library_V20_k28) 'append)
    V_CALL(VGetArg(upenv, 23-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k28, env)}),
      _V0append);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 22 0) (close _V0vanity_V0compiler_V0library_V20_k27) 'call/cc)
    V_CALL(VGetArg(upenv, 22-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k27, env)}),
      _V0call_Wcc);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k25, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 21 0) (close _V0vanity_V0compiler_V0library_V20_k26) 'null?)
    V_CALL(VGetArg(upenv, 21-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k26, env)}),
      _V0null_Q);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k24, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 20 0) (close _V0vanity_V0compiler_V0library_V20_k25) 'compiler-error)
    V_CALL(VGetArg(upenv, 20-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k25, env)}),
      _V0compiler__error);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k23, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 19 0) (close _V0vanity_V0compiler_V0library_V20_k24) 'cadr)
    V_CALL(VGetArg(upenv, 19-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k24, env)}),
      _V0cadr);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 18 0) (close _V0vanity_V0compiler_V0library_V20_k23) 'sprintf)
    V_CALL(VGetArg(upenv, 18-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k23, env)}),
      _V0sprintf);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k21, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 17 0) (close _V0vanity_V0compiler_V0library_V20_k22) 'pair?)
    V_CALL(VGetArg(upenv, 17-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k22, env)}),
      _V0pair_Q);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 16 0) (close _V0vanity_V0compiler_V0library_V20_k21) 'fold)
    V_CALL(VGetArg(upenv, 16-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k21, env)}),
      _V0fold);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 15 0) (close _V0vanity_V0compiler_V0library_V20_k20) 'map)
    V_CALL(VGetArg(upenv, 15-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k20, env)}),
      _V0map);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 14 0) (close _V0vanity_V0compiler_V0library_V20_k19) 'symbol?)
    V_CALL(VGetArg(upenv, 14-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k19, env)}),
      _V0symbol_Q);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 13 0) (close _V0vanity_V0compiler_V0library_V20_k18) 'symbol->string)
    V_CALL(VGetArg(upenv, 13-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k18, env)}),
      _V0symbol___Gstring);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 12 0) (close _V0vanity_V0compiler_V0library_V20_k17) '>)
    V_CALL(VGetArg(upenv, 12-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k17, env)}),
      _V0_G);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 11 0) (close _V0vanity_V0compiler_V0library_V20_k16) 'string-length)
    V_CALL(VGetArg(upenv, 11-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k16, env)}),
      _V0string__length);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 10 0) (close _V0vanity_V0compiler_V0library_V20_k15) 'string-ref)
    V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k15, env)}),
      _V0string__ref);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 9 0) (close _V0vanity_V0compiler_V0library_V20_k14) '+)
    V_CALL(VGetArg(upenv, 9-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k14, env)}),
      _V0_P);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 8 0) (close _V0vanity_V0compiler_V0library_V20_k13) '<)
    V_CALL(VGetArg(upenv, 8-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k13, env)}),
      _V0_L);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 7 0) (close _V0vanity_V0compiler_V0library_V20_k12) 'char->integer)
    V_CALL(VGetArg(upenv, 7-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k12, env)}),
      _V0char___Ginteger);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 6 0) (close _V0vanity_V0compiler_V0library_V20_k11) 'memv)
    V_CALL(VGetArg(upenv, 6-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k11, env)}),
      _V0memv);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 5 0) (close _V0vanity_V0compiler_V0library_V20_k10) '<=)
    V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k10, env)}),
      _V0_L_E);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 4 0) (close _V0vanity_V0compiler_V0library_V20_k9) 'assoc)
    V_CALL(upenv->up->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k9, env)}),
      _V0assoc);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 3 0) (close _V0vanity_V0compiler_V0library_V20_k8) 'cons)
    V_CALL(upenv->up->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k8, env)}),
      _V0cons);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 2 0) (close _V0vanity_V0compiler_V0library_V20_k7) 'search-open-input-file)
    V_CALL(upenv->up->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k7, env)}),
      _V0search__open__input__file);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 1 0) (close _V0vanity_V0compiler_V0library_V20_k6) 'read-all)
    V_CALL(upenv->vars[0], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k6, env)}),
      _V0read__all);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.14 0 0) (close _V0vanity_V0compiler_V0library_V20_k5) 'close-port)
    V_CALL(_var0, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k5, env)}),
      _V0close__port);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0library_V20_k4) (##string ##.string.286) (bruijn ##.x.276 2 0) (bruijn ##.x.277 1 0) (bruijn ##.x.278 0 0))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D286.sym, VPOINTER_OTHER),
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
 }
}
static void _V0vanity_V0compiler_V0library_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k3) (##string ##.string.287))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D287.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0library_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k2) (##string ##.string.288))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D288.sym, VPOINTER_OTHER));
 }
}
static void _V0vanity_V0compiler_V0library_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0library_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0library_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0library_V20_k1) (##string ##.string.289))
    V_CALL_FUNC(VLoadLibrary2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0library_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D289.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0library_V20 = (VFunc)_V0vanity_V0compiler_V0library_V20_lambda1;
