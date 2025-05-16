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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D246 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D245 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D244 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D243 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0lookup__intrinsic__name;VWEAK struct { VBlob sym; char bytes[22]; } _VW_V0lookup__intrinsic__name = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 22 }, "lookup-intrinsic-name" };
VWEAK VWORD _V0atom_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0atom_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "atom\?" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0cdar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cdar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cdar" };
VWEAK VWORD _V0caar;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0caar = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "caar" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0string__append;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0string__append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "string-append" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0open__output__string;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V0open__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "open-output-string" };
VWEAK VWORD _V0get__output__string;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V0get__output__string = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "get-output-string" };
VWEAK VWORD _V0close__port;VWEAK struct { VBlob sym; char bytes[11]; } _VW_V0close__port = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 11 }, "close-port" };
VWEAK VWORD _V0_E;VWEAK struct { VBlob sym; char bytes[2]; } _VW_V0_E = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 2 }, "=" };
VWEAK VWORD _V0display;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0display = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "display" };
VWEAK VWORD _V0free__variables;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0free__variables = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "free-variables" };
VWEAK VWORD _V0mangle__library;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0mangle__library = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "mangle-library" };
VWEAK VWORD _V0mangle__symbol;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0mangle__symbol = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "mangle-symbol" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0and;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0and = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "and" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0set_B;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0set_B = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "set!" };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
static struct { VBlob sym; char bytes[81]; } _V10_Dstring_D242 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 81 }, "library name must be a string which is a valid c identifier or a list of symbols" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D241 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V20" };
static struct { VBlob sym; char bytes[28]; } _V10_Dstring_D240 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 28 }, "non-symbol in library path:" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D239 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_A" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D238 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_D" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D237 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "__" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D236 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_P" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D235 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_T" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D234 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_U" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D233 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_C" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D232 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Q" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D231 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_G" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D230 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_E" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D229 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_L" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D228 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_J" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D227 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_W" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D226 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_S" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_R" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_M" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_Z" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "_B" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[4]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 4 }, "_V0" };
static struct { VBlob sym; char bytes[5]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 5 }, "_V10" };
static __attribute__((constructor)) void VDllMain1() {
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0lookup__intrinsic__name = VEncodePointer(VLookupConstant("_V0lookup__intrinsic__name", &_VW_V0lookup__intrinsic__name), VPOINTER_OTHER);
  _V0atom_Q = VEncodePointer(VLookupConstant("_V0atom_Q", &_VW_V0atom_Q), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VLookupConstant("_V0cadddr", &_VW_V0cadddr), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0cdar = VEncodePointer(VLookupConstant("_V0cdar", &_VW_V0cdar), VPOINTER_OTHER);
  _V0caar = VEncodePointer(VLookupConstant("_V0caar", &_VW_V0caar), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0string__append = VEncodePointer(VLookupConstant("_V0string__append", &_VW_V0string__append), VPOINTER_OTHER);
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0open__output__string = VEncodePointer(VLookupConstant("_V0open__output__string", &_VW_V0open__output__string), VPOINTER_OTHER);
  _V0get__output__string = VEncodePointer(VLookupConstant("_V0get__output__string", &_VW_V0get__output__string), VPOINTER_OTHER);
  _V0close__port = VEncodePointer(VLookupConstant("_V0close__port", &_VW_V0close__port), VPOINTER_OTHER);
  _V0_E = VEncodePointer(VLookupConstant("_V0_E", &_VW_V0_E), VPOINTER_OTHER);
  _V0display = VEncodePointer(VLookupConstant("_V0display", &_VW_V0display), VPOINTER_OTHER);
  _V0free__variables = VEncodePointer(VLookupConstant("_V0free__variables", &_VW_V0free__variables), VPOINTER_OTHER);
  _V0mangle__library = VEncodePointer(VLookupConstant("_V0mangle__library", &_VW_V0mangle__library), VPOINTER_OTHER);
  _V0mangle__symbol = VEncodePointer(VLookupConstant("_V0mangle__symbol", &_VW_V0mangle__symbol), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0and = VEncodePointer(VLookupConstant("_V0and", &_VW_V0and), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0set_B = VEncodePointer(VLookupConstant("_V0set_B", &_VW_V0set_B), VPOINTER_OTHER);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
}
static void _V10_Dmangle__symbol_D35_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__symbol_D35_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.eq? (bruijn ##.reg.212 1 0) #\#) ((bruijn ##.x.83 7 0) (bruijn ##.k.113 0 0) (##string ##.string.219) (bruijn ##.port.41 2 0)) ((bruijn ##.x.83 7 0) (bruijn ##.k.113 0 0) (##string ##.string.220) (bruijn ##.port.41 2 0)))
if(VDecodeBool(
VInlineEq2(runtime,
        statics->vars[0],
        VEncodeChar('#')))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D42_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string->symbol (bruijn ##.k.86 3 0) (bruijn ##.ret.44 1 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      statics->up->up->vars[0],
      statics->vars[0]);
}
static void _V10_Dloop_D42_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.81 13 0) (close _V10_Dloop_D42_k30) (bruijn ##.port.41 6 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k30, self)})),
      VGetArg(statics, 6-1, 0));
}
static void _V10_Dloop_D42_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.111 0 0) ((bruijn ##.k.93 18 0) (##string ##.string.239)) (basic-block 1 1 (##.reg.215) ((##vcore.string-ref (bruijn ##.str.39 29 0) (bruijn ##.i.43 23 1))) ((bruijn ##.k.93 19 0) (bruijn ##.reg.215 0 0))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D239.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 29-1, 0),
      VGetArg(statics, 23-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 1,
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D42_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.110 0 0) ((bruijn ##.k.93 17 0) (##string ##.string.238)) (##vcore.eqv? (close _V10_Dloop_D42_k50) (bruijn ##.reg.213 19 0) '#\@))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D238.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k50, self)})),
      VGetArg(statics, 19-1, 0),
      VEncodeChar('@'));
}
}
static void _V10_Dloop_D42_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.109 0 0) ((bruijn ##.k.93 16 0) (##string ##.string.237)) (##vcore.eqv? (close _V10_Dloop_D42_k49) (bruijn ##.reg.213 18 0) '#\.))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D237.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k49, self)})),
      VGetArg(statics, 18-1, 0),
      VEncodeChar('.'));
}
}
static void _V10_Dloop_D42_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.108 0 0) ((bruijn ##.k.93 15 0) (##string ##.string.236)) (##vcore.eqv? (close _V10_Dloop_D42_k48) (bruijn ##.reg.213 17 0) '#\-))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D236.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k48, self)})),
      VGetArg(statics, 17-1, 0),
      VEncodeChar('-'));
}
}
static void _V10_Dloop_D42_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.107 0 0) ((bruijn ##.k.93 14 0) (##string ##.string.235)) (##vcore.eqv? (close _V10_Dloop_D42_k47) (bruijn ##.reg.213 16 0) '#\+))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D235.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k47, self)})),
      VGetArg(statics, 16-1, 0),
      VEncodeChar('+'));
}
}
static void _V10_Dloop_D42_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.106 0 0) ((bruijn ##.k.93 13 0) (##string ##.string.234)) (##vcore.eqv? (close _V10_Dloop_D42_k46) (bruijn ##.reg.213 15 0) '#\~))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D234.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k46, self)})),
      VGetArg(statics, 15-1, 0),
      VEncodeChar('~'));
}
}
static void _V10_Dloop_D42_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.105 0 0) ((bruijn ##.k.93 12 0) (##string ##.string.233)) (##vcore.eqv? (close _V10_Dloop_D42_k45) (bruijn ##.reg.213 14 0) '#\_))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D233.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k45, self)})),
      VGetArg(statics, 14-1, 0),
      VEncodeChar('_'));
}
}
static void _V10_Dloop_D42_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.104 0 0) ((bruijn ##.k.93 11 0) (##string ##.string.232)) (##vcore.eqv? (close _V10_Dloop_D42_k44) (bruijn ##.reg.213 13 0) '#\^))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D232.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k44, self)})),
      VGetArg(statics, 13-1, 0),
      VEncodeChar('^'));
}
}
static void _V10_Dloop_D42_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.103 0 0) ((bruijn ##.k.93 10 0) (##string ##.string.231)) (##vcore.eqv? (close _V10_Dloop_D42_k43) (bruijn ##.reg.213 12 0) '#\?))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D231.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k43, self)})),
      VGetArg(statics, 12-1, 0),
      VEncodeChar('?'));
}
}
static void _V10_Dloop_D42_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.102 0 0) ((bruijn ##.k.93 9 0) (##string ##.string.230)) (##vcore.eqv? (close _V10_Dloop_D42_k42) (bruijn ##.reg.213 11 0) '#\>))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D230.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k42, self)})),
      VGetArg(statics, 11-1, 0),
      VEncodeChar('>'));
}
}
static void _V10_Dloop_D42_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.101 0 0) ((bruijn ##.k.93 8 0) (##string ##.string.229)) (##vcore.eqv? (close _V10_Dloop_D42_k41) (bruijn ##.reg.213 10 0) '#\=))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D229.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k41, self)})),
      VGetArg(statics, 10-1, 0),
      VEncodeChar('='));
}
}
static void _V10_Dloop_D42_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.100 0 0) ((bruijn ##.k.93 7 0) (##string ##.string.228)) (##vcore.eqv? (close _V10_Dloop_D42_k40) (bruijn ##.reg.213 9 0) '#\<))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D228.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k40, self)})),
      VGetArg(statics, 9-1, 0),
      VEncodeChar('<'));
}
}
static void _V10_Dloop_D42_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.99 0 0) ((bruijn ##.k.93 6 0) (##string ##.string.227)) (##vcore.eqv? (close _V10_Dloop_D42_k39) (bruijn ##.reg.213 8 0) '#\:))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D227.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k39, self)})),
      VGetArg(statics, 8-1, 0),
      VEncodeChar(':'));
}
}
static void _V10_Dloop_D42_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.98 0 0) ((bruijn ##.k.93 5 0) (##string ##.string.226)) (##vcore.eqv? (close _V10_Dloop_D42_k38) (bruijn ##.reg.213 7 0) '#\/))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VEncodePointer(&_V10_Dstring_D226.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k38, self)})),
      VGetArg(statics, 7-1, 0),
      VEncodeChar('/'));
}
}
static void _V10_Dloop_D42_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.97 0 0) ((bruijn ##.k.93 4 0) (##string ##.string.225)) (##vcore.eqv? (close _V10_Dloop_D42_k37) (bruijn ##.reg.213 6 0) '#\*))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D225.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k37, self)})),
      VGetArg(statics, 6-1, 0),
      VEncodeChar('*'));
}
}
static void _V10_Dloop_D42_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.96 0 0) ((bruijn ##.k.93 3 0) (##string ##.string.224)) (##vcore.eqv? (close _V10_Dloop_D42_k36) (bruijn ##.reg.213 5 0) '#\&))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D224.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k36, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeChar('&'));
}
}
static void _V10_Dloop_D42_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.95 0 0) ((bruijn ##.k.93 2 0) (##string ##.string.223)) (##vcore.eqv? (close _V10_Dloop_D42_k35) (bruijn ##.reg.213 4 0) '#\%))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k35, self)})),
      statics->up->up->up->vars[0],
      VEncodeChar('%'));
}
}
static void _V10_Dloop_D42_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) ((bruijn ##.k.93 1 0) (##string ##.string.222)) (##vcore.eqv? (close _V10_Dloop_D42_k34) (bruijn ##.reg.213 3 0) '#\$))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k34, self)})),
      statics->up->up->vars[0],
      VEncodeChar('$'));
}
}
static void _V10_Dloop_D42_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.92 1 0) ((bruijn ##.k.93 0 0) (##string ##.string.221)) (##vcore.eqv? (close _V10_Dloop_D42_k33) (bruijn ##.reg.213 2 0) '#\!))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k33, self)})),
      statics->up->vars[0],
      VEncodeChar('!'));
}
}
static void _V10_Dloop_D42_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.214) ((##vcore.+ (bruijn ##.i.43 6 1) 1)) ((bruijn ##.loop.42 7 0) (bruijn ##.k.86 6 0) (bruijn ##.reg.214 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D42_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.83 13 0) (close _V10_Dloop_D42_k52) (bruijn ##.x.91 0 0) (bruijn ##.port.41 8 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k52, self)})),
      _var0,
      VGetArg(statics, 8-1, 0));
}
static void _V10_Dloop_D42_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D42_k32) (close _V10_Dloop_D42_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D42_k32, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k51, self)})));
}
static void _V10_Dloop_D42_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.87 0 0) ((bruijn ##.x.80 13 0) (close _V10_Dloop_D42_k29) (bruijn ##.port.41 5 0)) (basic-block 1 1 (##.reg.213) ((##vcore.string-ref (bruijn ##.str.39 8 0) (bruijn ##.i.43 2 1))) (##vcore.eqv? (close _V10_Dloop_D42_k31) (bruijn ##.reg.213 0 0) '#\#)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k29, self)})),
      VGetArg(statics, 5-1, 0));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 8-1, 0),
      statics->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k31, self)})),
      self->vars[0],
      VEncodeChar('#'));
    }
}
}
static void _V10_Dloop_D42_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D42_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.x.82 10 0) (close _V10_Dloop_D42_k28) (bruijn ##.i.43 0 1) (bruijn ##.reg.211 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_k28, self)})),
      _var1,
      VGetArg(statics, 5-1, 0));
}
static void _V10_Dmangle__symbol_D35_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__symbol_D35_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dloop_D42_lambda3)) ((bruijn ##.loop.42 0 0) (bruijn ##.k.84 6 0) 0))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D42_lambda3, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      VGetArg(statics, 6-1, 0),
      VEncodeInt(0l));
    }
}
static void _V10_Dmangle__symbol_D35_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__symbol_D35_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.212) ((##vcore.string-ref (bruijn ##.str.39 3 0) 0)) ((close _V10_Dmangle__symbol_D35_k26) (close _V10_Dmangle__symbol_D35_k27)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dmangle__symbol_D35_k26, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__symbol_D35_k27, self)})));
    }
}
static void _V10_Dmangle__symbol_D35_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__symbol_D35_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.211) ((##vcore.string-length (bruijn ##.str.39 1 0))) ((bruijn ##.x.79 8 0) (close _V10_Dmangle__symbol_D35_k25)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__symbol_D35_k25, self)})));
    }
}
static void _V10_Dmangle__symbol_D35_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__symbol_D35_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.symbol->string (close _V10_Dmangle__symbol_D35_k24) (bruijn ##.sym.38 0 1))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__symbol_D35_k24, self)})),
      _var1);
}
static void _V10_Dloop_D47_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.symbol->string (bruijn ##.k.124 1 0) (bruijn ##.x.125 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D47_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.reg.217 1 0) ((bruijn ##.mangle-symbol.35 7 0) (close _V10_Dloop_D47_k55) (bruijn ##.e.50 2 0)) ((bruijn ##.x.76 15 0) (bruijn ##.k.124 0 0) (##string ##.string.240) (bruijn ##.e.50 2 0)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D47_k55, self)})),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      _var0,
      VEncodePointer(&_V10_Dstring_D240.sym, VPOINTER_OTHER),
      statics->up->vars[0]);
}
}
static void _V10_Dloop_D47_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.47 5 0) (bruijn ##.k.118 4 0) (bruijn ##.x.120 0 0) (##inline ##vcore.cdr (bruijn ##.ks.49 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 3,
      statics->up->up->up->vars[0],
      _var0,
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
}
static void _V10_Dloop_D47_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.77 14 0) (close _V10_Dloop_D47_k57) (bruijn ##.x.122 0 0) (bruijn ##.knil.48 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D47_k57, self)})),
      _var0,
      statics->up->up->vars[1]);
}
static void _V10_Dloop_D47_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.217) ((##vcore.symbol? (bruijn ##.e.50 1 0))) ((close _V10_Dloop_D47_k54) (close _V10_Dloop_D47_k56)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D47_k54, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D47_k56, self)})));
    }
}
static void _V10_Dloop_D47_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D47_lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.ks.49 0 2)) ((bruijn ##.k.118 0 0) (bruijn ##.knil.48 0 1)) ((close _V10_Dloop_D47_k53) (##inline ##vcore.car (bruijn ##.ks.49 0 2))))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var2))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var1);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D47_k53, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var2));
}
}
static void _V10_Dmangle__library_D36_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__library_D36_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.47 1 0) (bruijn ##.k.115 3 0) (##string ##.string.241) (bruijn ##.x.126 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 3,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D241.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_Dmangle__library_D36_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmangle__library_D36_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.216) ((##vcore.string? (bruijn ##.lib.46 1 1))) (if (bruijn ##.reg.216 0 0) ((bruijn ##.k.115 1 0) (bruijn ##.lib.46 1 1)) (if (##inline ##vcore.pair? (bruijn ##.lib.46 1 1)) (letrec 1 ((close _V10_Dloop_D47_lambda5)) ((bruijn ##.x.78 9 0) (close _V10_Dmangle__library_D36_k58) (bruijn ##.lib.46 2 1))) ((bruijn ##.x.76 10 0) (bruijn ##.k.115 1 0) (##string ##.string.242) (bruijn ##.lib.46 1 1)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      statics->vars[1]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        statics->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D47_lambda5, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__library_D36_k58, self)})),
      statics->up->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      statics->vars[0],
      VEncodePointer(&_V10_Dstring_D242.sym, VPOINTER_OTHER),
      statics->vars[1]);
}
}
    }
}
static void _V10_Dmerge_D52_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmerge_D52_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.130 0 0) ((bruijn ##.merge.52 2 0) (bruijn ##.k.128 1 0) (##inline ##vcore.cdr (bruijn ##.a.54 1 1)) (bruijn ##.b.55 1 2)) ((bruijn ##.merge.52 2 0) (bruijn ##.k.128 1 0) (##inline ##vcore.cdr (bruijn ##.a.54 1 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.54 1 1)) (bruijn ##.b.55 1 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      statics->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 3,
      statics->vars[0],
      VInlineCdr2(runtime,
        statics->vars[1]),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        statics->vars[2]));
}
}
static void _V10_Dmerge_D52_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmerge_D52_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.null? (bruijn ##.a.54 0 1)) ((bruijn ##.k.128 0 0) (bruijn ##.b.55 0 2)) ((bruijn ##.x.70 17 0) (close _V10_Dmerge_D52_k59) (##inline ##vcore.car (bruijn ##.a.54 0 1)) (bruijn ##.b.55 0 2)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmerge_D52_k59, self)})),
      VInlineCar2(runtime,
        _var1),
      _var2);
}
}
static void _V10_Dappend__improper_D53_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__improper_D53_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.136 1 0) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.a.56 1 1)) (bruijn ##.x.139 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->vars[1]),
        _var0));
}
static void _V10_Dappend__improper_D53_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dappend__improper_D53_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (if (##inline ##vcore.pair? (bruijn ##.a.56 0 1)) ((bruijn ##.append-improper.53 1 1) (close _V10_Dappend__improper_D53_k60) (##inline ##vcore.cdr (bruijn ##.a.56 0 1)) (bruijn ##.b.57 0 2)) (if (##inline ##vcore.null? (bruijn ##.a.56 0 1)) ((bruijn ##.k.136 0 0) (bruijn ##.b.57 0 2)) ((bruijn ##.k.136 0 0) (##inline ##vcore.cons (bruijn ##.a.56 0 1) (bruijn ##.b.57 0 2)))))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[1]), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__improper_D53_k60, self)})),
      VInlineCdr2(runtime,
        _var1),
      _var2);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      _var2);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _var1,
        _var2));
}
}
}
static void _V10_Dloop_D58_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.145 1 0) ((bruijn ##.k.146 0 0) (bruijn ##.p.145 1 0)) ((bruijn ##.x.66 25 0) (bruijn ##.k.146 0 0) (bruijn ##.expr.60 3 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      _var0,
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D58_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.144 0 0) ((bruijn ##.k.142 3 0) '()) ((bruijn ##.x.65 26 0) (bruijn ##.k.142 3 0) (bruijn ##.expr.60 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      statics->up->up->vars[0],
      statics->up->up->vars[2]);
}
}
static void _V10_Dloop_D58_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dloop_D58_k62) (close _V10_Dloop_D58_k63))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D58_k62, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k63, self)})));
}
static void _V10_Dloop_D58_k74(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.52 14 0) (bruijn ##.k.142 12 0) (bruijn ##.x.151 2 0) (bruijn ##.x.152 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      VGetArg(statics, 12-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D58_k73(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 12 0) (close _V10_Dloop_D58_k74) (bruijn ##.bound.59 11 1) (bruijn ##.x.153 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k74, self)})),
      VGetArg(statics, 11-1, 1),
      _var0);
}
static void _V10_Dloop_D58_k72(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 30 0) (close _V10_Dloop_D58_k73) (bruijn ##.expr.60 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 30-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k73, self)})),
      VGetArg(statics, 10-1, 2));
}
static void _V10_Dloop_D58_k71(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.merge.52 11 0) (close _V10_Dloop_D58_k72) (bruijn ##.x.154 2 0) (bruijn ##.x.155 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k72, self)})),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D58_k70(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 9 0) (close _V10_Dloop_D58_k71) (bruijn ##.bound.59 8 1) (bruijn ##.x.156 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k71, self)})),
      VGetArg(statics, 8-1, 1),
      _var0);
}
static void _V10_Dloop_D58_k69(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.69 26 0) (close _V10_Dloop_D58_k70) (bruijn ##.expr.60 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k70, self)})),
      VGetArg(statics, 7-1, 2));
}
static void _V10_Dloop_D58_k68(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 7 0) (close _V10_Dloop_D58_k69) (bruijn ##.bound.59 6 1) (bruijn ##.x.157 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k69, self)})),
      VGetArg(statics, 6-1, 1),
      _var0);
}
static void _V10_Dloop_D58_k79(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.52 12 0) (bruijn ##.k.142 10 0) (bruijn ##.x.159 2 0) (bruijn ##.x.160 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      VGetArg(statics, 10-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D58_k78(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 10 0) (close _V10_Dloop_D58_k79) (bruijn ##.bound.59 9 1) (bruijn ##.x.161 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k79, self)})),
      VGetArg(statics, 9-1, 1),
      _var0);
}
static void _V10_Dloop_D58_k77(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.69 27 0) (close _V10_Dloop_D58_k78) (bruijn ##.expr.60 8 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k78, self)})),
      VGetArg(statics, 8-1, 2));
}
static void _V10_Dloop_D58_k76(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 8 0) (close _V10_Dloop_D58_k77) (bruijn ##.bound.59 7 1) (bruijn ##.x.162 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k77, self)})),
      VGetArg(statics, 7-1, 1),
      _var0);
}
static void _V10_Dloop_D58_k83(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.58 11 0) (bruijn ##.k.142 10 0) (bruijn ##.x.164 1 0) (bruijn ##.x.165 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 10-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D58_k82(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 24 0) (close _V10_Dloop_D58_k83) (bruijn ##.expr.60 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k83, self)})),
      VGetArg(statics, 9-1, 2));
}
static void _V10_Dloop_D58_k81(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.53 10 1) (close _V10_Dloop_D58_k82) (bruijn ##.x.166 0 0) (bruijn ##.bound.59 8 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k82, self)})),
      _var0,
      VGetArg(statics, 8-1, 1));
}
static void _V10_Dloop2_D61_k89(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.52 17 0) (bruijn ##.k.168 5 0) (bruijn ##.x.170 1 0) (bruijn ##.x.171 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop2_D61_k88(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop2.61 5 0) (close _V10_Dloop2_D61_k89) (##inline ##vcore.cdr (bruijn ##.cases.62 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_k89, self)})),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dloop2_D61_k87(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 14 0) (close _V10_Dloop2_D61_k88) (bruijn ##.x.173 1 0) (bruijn ##.x.174 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_k88, self)})),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop2_D61_k86(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.71 29 0) (close _V10_Dloop2_D61_k87) (bruijn ##.cases.62 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_k87, self)})),
      statics->up->vars[1]);
}
static void _V10_Dloop2_D61_k85(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.53 13 1) (close _V10_Dloop2_D61_k86) (bruijn ##.x.175 0 0) (bruijn ##.bound.59 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_k86, self)})),
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dloop2_D61_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop2_D61_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.cases.62 0 1)) ((bruijn ##.k.168 0 0) '()) ((bruijn ##.x.72 26 0) (close _V10_Dloop2_D61_k85) (bruijn ##.cases.62 0 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 26-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_k85, self)})),
      _var1);
}
}
static void _V10_Dloop_D58_k96(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.loop.58 16 0) (bruijn ##.k.142 15 0) (bruijn ##.x.178 3 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.181 1 0) (bruijn ##.x.182 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      VGetArg(statics, 15-1, 0),
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        statics->vars[0],
        _var0)));
}
static void _V10_Dloop_D58_k95(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.73 29 0) (close _V10_Dloop_D58_k96) (bruijn ##.expr.60 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 29-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k96, self)})),
      VGetArg(statics, 14-1, 2));
}
static void _V10_Dloop_D58_k94(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 27 0) (close _V10_Dloop_D58_k95) (bruijn ##.x.75 26 0) (bruijn ##.x.183 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 27-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k95, self)})),
      VGetArg(statics, 26-1, 0),
      _var0);
}
static void _V10_Dloop_D58_k93(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.75 25 0) (close _V10_Dloop_D58_k94) (bruijn ##.expr.60 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 25-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k94, self)})),
      VGetArg(statics, 12-1, 2));
}
static void _V10_Dloop_D58_k92(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append-improper.53 13 1) (close _V10_Dloop_D58_k93) (bruijn ##.x.184 0 0) (bruijn ##.bound.59 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k93, self)})),
      _var0,
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dloop_D58_k91(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.74 24 0) (close _V10_Dloop_D58_k92) (##intrinsic ##vcore.car) (bruijn ##.x.185 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k92, self)})),
      _V40_V10vcore_Dcar,
      _var0);
}
static void _V10_Dloop_D58_k99(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.merge.52 14 0) (bruijn ##.k.142 12 0) (bruijn ##.x.188 1 0) (bruijn ##.x.189 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      VGetArg(statics, 12-1, 0),
      statics->vars[0],
      _var0);
}
static void _V10_Dloop_D58_k98(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.loop.58 12 0) (close _V10_Dloop_D58_k99) (bruijn ##.bound.59 11 1) (##inline ##vcore.cdr (bruijn ##.expr.60 11 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k99, self)})),
      VGetArg(statics, 11-1, 1),
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 2)));
}
static void _V10_Dloop_D58_k97(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.186 0 0) ((bruijn ##.loop.58 11 0) (bruijn ##.k.142 10 0) (bruijn ##.bound.59 10 1) (##inline ##vcore.cdr (bruijn ##.expr.60 10 2))) ((bruijn ##.loop.58 11 0) (close _V10_Dloop_D58_k98) (bruijn ##.bound.59 10 1) (##inline ##vcore.car (bruijn ##.expr.60 10 2))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      VGetArg(statics, 10-1, 0),
      VGetArg(statics, 10-1, 1),
      VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 2)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k98, self)})),
      VGetArg(statics, 10-1, 1),
      VInlineCar2(runtime,
        VGetArg(statics, 10-1, 2)));
}
}
static void _V10_Dloop_D58_k90(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) ((bruijn ##.x.75 22 0) (close _V10_Dloop_D58_k91) (bruijn ##.expr.60 9 2)) (##vcore.eqv? (close _V10_Dloop_D58_k97) (##inline ##vcore.car (bruijn ##.expr.60 9 2)) 'set!))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k91, self)})),
      VGetArg(statics, 9-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k97, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 9-1, 2)),
      _V0set_B);
}
}
static void _V10_Dloop_D58_k84(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.167 0 0) (letrec 1 ((close _V10_Dloop2_D61_lambda10)) ((bruijn ##.loop2.61 0 0) (bruijn ##.k.142 9 0) (##inline ##vcore.cdr (bruijn ##.expr.60 9 2)))) (##vcore.eqv? (close _V10_Dloop_D58_k90) (##inline ##vcore.car (bruijn ##.expr.60 8 2)) 'letrec))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop2_D61_lambda10, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      VGetArg(statics, 9-1, 0),
      VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 2)));
    }
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k90, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 8-1, 2)),
      _V0letrec);
}
}
static void _V10_Dloop_D58_k80(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.163 0 0) ((bruijn ##.x.75 20 0) (close _V10_Dloop_D58_k81) (bruijn ##.expr.60 7 2)) (##vcore.eqv? (close _V10_Dloop_D58_k84) (##inline ##vcore.car (bruijn ##.expr.60 7 2)) 'case-lambda))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k81, self)})),
      VGetArg(statics, 7-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k84, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 7-1, 2)),
      _V0case__lambda);
}
}
static void _V10_Dloop_D58_k75(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.158 0 0) ((bruijn ##.x.75 19 0) (close _V10_Dloop_D58_k76) (bruijn ##.expr.60 6 2)) (##vcore.eqv? (close _V10_Dloop_D58_k80) (##inline ##vcore.car (bruijn ##.expr.60 6 2)) 'lambda))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k76, self)})),
      VGetArg(statics, 6-1, 2));
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k80, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 2)),
      _V0lambda);
}
}
static void _V10_Dloop_D58_k67(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.150 0 0) ((bruijn ##.x.75 18 0) (close _V10_Dloop_D58_k68) (bruijn ##.expr.60 5 2)) ((bruijn ##.x.70 23 0) (close _V10_Dloop_D58_k75) (##inline ##vcore.car (bruijn ##.expr.60 5 2)) (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'and (##inline ##vcore.qcons 'or '())))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k68, self)})),
      VGetArg(statics, 5-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 23-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k75, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 2)),
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0and,
        VInlineCons2(runtime,
        _V0or,
        VNULL))));
}
}
static void _V10_Dloop_D58_k66(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.149 0 0) ((bruijn ##.k.142 4 0) '()) (##vcore.eqv? (close _V10_Dloop_D58_k67) (##inline ##vcore.car (bruijn ##.expr.60 4 2)) 'if))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k67, self)})),
      VInlineCar2(runtime,
        statics->up->up->up->vars[2]),
      _V0if);
}
}
static void _V10_Dloop_D58_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.148 0 0) ((bruijn ##.k.142 3 0) '()) (##vcore.eqv? (close _V10_Dloop_D58_k66) (##inline ##vcore.car (bruijn ##.expr.60 3 2)) '##foreign.function))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k66, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[2]),
      _V10foreign_Dfunction);
}
}
static void _V10_Dloop_D58_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.147 0 0) ((bruijn ##.k.142 2 0) '()) (##vcore.eqv? (close _V10_Dloop_D58_k65) (##inline ##vcore.car (bruijn ##.expr.60 2 2)) 'quote))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      VNULL);
} else {
    VCallFuncWithGC(runtime, (VFunc)VEqv, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k65, self)})),
      VInlineCar2(runtime,
        statics->up->vars[2]),
      _V0quote);
}
}
static void _V10_Dloop_D58_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D58_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.reg.218) ((##vcore.symbol? (bruijn ##.expr.60 1 2))) (if (bruijn ##.reg.218 0 0) ((bruijn ##.x.70 19 0) (close _V10_Dloop_D58_k61) (bruijn ##.expr.60 1 2) (bruijn ##.bound.59 1 1)) ((bruijn ##.x.67 22 0) (close _V10_Dloop_D58_k64) (bruijn ##.expr.60 1 2))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      statics->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k61, self)})),
      statics->vars[2],
      statics->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 22-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_k64, self)})),
      statics->vars[2]);
}
    }
}
static void _V10_Dfree__variables_D37_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dfree__variables_D37_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (letrec 2 ((close _V10_Dmerge_D52_lambda7) (close _V10_Dappend__improper_D53_lambda8)) (letrec 1 ((close _V10_Dloop_D58_lambda9)) ((bruijn ##.loop.58 0 0) (bruijn ##.k.127 2 0) '() (bruijn ##.expr.51 2 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmerge_D52_lambda7, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dappend__improper_D53_lambda8, self)}));
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D58_lambda9, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 3,
      statics->up->vars[0],
      VNULL,
      statics->up->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0variables_V20_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 3 ((close _V10_Dmangle__symbol_D35_lambda2) (close _V10_Dmangle__library_D36_lambda4) (close _V10_Dfree__variables_D37_lambda6)) ((bruijn ##.k.64 24 0) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-symbol (bruijn ##.mangle-symbol.35 0 0)) (##inline ##vcore.cons (##inline ##vcore.cons 'mangle-library (bruijn ##.mangle-library.36 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'free-variables (bruijn ##.free-variables.37 0 2)) '())))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__symbol_D35_lambda2, self)}));
    self->vars[1] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmangle__library_D36_lambda4, self)}));
    self->vars[2] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dfree__variables_D37_lambda6, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 24-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__symbol,
        self->vars[0]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0mangle__library,
        self->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0free__variables,
        self->vars[2]),
        VNULL))));
    }
}
static void _V0vanity_V0compiler_V0variables_V20_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 18 0) (close _V0vanity_V0compiler_V0variables_V20_k23) 'display)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k23, self)})),
      _V0display);
}
static void _V0vanity_V0compiler_V0variables_V20_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 17 0) (close _V0vanity_V0compiler_V0variables_V20_k22) '=)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k22, self)})),
      _V0_E);
}
static void _V0vanity_V0compiler_V0variables_V20_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 16 0) (close _V0vanity_V0compiler_V0variables_V20_k21) 'close-port)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k21, self)})),
      _V0close__port);
}
static void _V0vanity_V0compiler_V0variables_V20_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 15 0) (close _V0vanity_V0compiler_V0variables_V20_k20) 'get-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k20, self)})),
      _V0get__output__string);
}
static void _V0vanity_V0compiler_V0variables_V20_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 14 0) (close _V0vanity_V0compiler_V0variables_V20_k19) 'open-output-string)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k19, self)})),
      _V0open__output__string);
}
static void _V0vanity_V0compiler_V0variables_V20_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 13 0) (close _V0vanity_V0compiler_V0variables_V20_k18) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k18, self)})),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0variables_V20_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 12 0) (close _V0vanity_V0compiler_V0variables_V20_k17) 'string-append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k17, self)})),
      _V0string__append);
}
static void _V0vanity_V0compiler_V0variables_V20_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 11 0) (close _V0vanity_V0compiler_V0variables_V20_k16) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k16, self)})),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0variables_V20_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 10 0) (close _V0vanity_V0compiler_V0variables_V20_k15) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k15, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0variables_V20_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 9 0) (close _V0vanity_V0compiler_V0variables_V20_k14) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k14, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0variables_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 8 0) (close _V0vanity_V0compiler_V0variables_V20_k13) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k13, self)})),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0variables_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 7 0) (close _V0vanity_V0compiler_V0variables_V20_k12) 'caar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k12, self)})),
      _V0caar);
}
static void _V0vanity_V0compiler_V0variables_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 6 0) (close _V0vanity_V0compiler_V0variables_V20_k11) 'cdar)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k11, self)})),
      _V0cdar);
}
static void _V0vanity_V0compiler_V0variables_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 5 0) (close _V0vanity_V0compiler_V0variables_V20_k10) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k10, self)})),
      _V0memv);
}
static void _V0vanity_V0compiler_V0variables_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 4 0) (close _V0vanity_V0compiler_V0variables_V20_k9) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k9, self)})),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0variables_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 3 0) (close _V0vanity_V0compiler_V0variables_V20_k8) 'cadddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k8, self)})),
      _V0cadddr);
}
static void _V0vanity_V0compiler_V0variables_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 2 0) (close _V0vanity_V0compiler_V0variables_V20_k7) 'atom?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k7, self)})),
      _V0atom_Q);
}
static void _V0vanity_V0compiler_V0variables_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 1 0) (close _V0vanity_V0compiler_V0variables_V20_k6) 'lookup-intrinsic-name)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k6, self)})),
      _V0lookup__intrinsic__name);
}
static void _V0vanity_V0compiler_V0variables_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.1 0 0) (close _V0vanity_V0compiler_V0variables_V20_k5) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k5, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0variables_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0variables_V20_k4) (##string ##.string.243) (bruijn ##.x.208 2 0) (bruijn ##.x.209 1 0) (bruijn ##.x.210 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 5,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k4, self)})),
      VEncodePointer(&_V10_Dstring_D243.sym, VPOINTER_OTHER),
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0variables_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k3) (##string ##.string.244))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k3, self)})),
      VEncodePointer(&_V10_Dstring_D244.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k2) (##string ##.string.245))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D245.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0variables_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0variables_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0variables_V20_k1) (##string ##.string.246))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0variables_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D246.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0variables_V20 = (VFunc)_V0vanity_V0compiler_V0variables_V20_lambda1;
