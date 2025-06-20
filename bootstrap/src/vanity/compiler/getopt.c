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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D221 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D220 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0getopt;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getopt" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D219 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D218 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static __attribute__((constructor)) void VDllMain1() {
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VLookupConstant("_V0assoc", &_VW_V0assoc), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VLookupConstant("_V0caddr", &_VW_V0caddr), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VLookupConstant("_V0memq", &_VW_V0memq), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VLookupConstant("_V0string___Glist", &_VW_V0string___Glist), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VLookupConstant("_V0cadr", &_VW_V0cadr), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VLookupConstant("_V0cddr", &_VW_V0cddr), VPOINTER_OTHER);
  _V0getopt = VEncodePointer(VLookupConstant("_V0getopt", &_VW_V0getopt), VPOINTER_OTHER);
}
static void _V10_Ddecode__longopt_D33_k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.decode-longopt.33 3 0) (bruijn ##.k.70 2 0) (bruijn ##.x.72 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      statics->up->vars[0],
      _var0);
}
static void _V10_Ddecode__longopt_D33_k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.decode-longopt.33 4 0) (bruijn ##.k.70 3 0) (##inline ##vcore.cons (bruijn ##.x.75 0 0) (##inline ##vcore.cdr (bruijn ##.longopt.39 3 1))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])));
}
static void _V10_Ddecode__longopt_D33_k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.66 11 0) (bruijn ##.k.70 4 0) (##inline ##vcore.car (bruijn ##.longopt.39 4 1)) #f (bruijn ##.x.81 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 4,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
      VEncodeBool(false),
      _var0);
}
static void _V10_Ddecode__longopt_D33_k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.66 13 0) (bruijn ##.k.70 6 0) (##inline ##vcore.car (bruijn ##.longopt.39 6 1)) (bruijn ##.x.85 1 0) (bruijn ##.x.86 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 4,
      VGetArg(statics, 6-1, 0),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
      statics->vars[0],
      _var0);
}
static void _V10_Ddecode__longopt_D33_k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V10_Ddecode__longopt_D33_k19) (##inline ##vcore.car (bruijn ##.longopt.39 5 1)))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k19, self)})),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
static void _V10_Ddecode__longopt_D33_k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.88 0 0)) ((bruijn ##.x.67 10 0) (close _V10_Ddecode__longopt_D33_k18) (bruijn ##.longopt.39 4 1)) ((bruijn ##.k.70 4 0) (bruijn ##.longopt.39 4 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k18, self)})),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
}
static void _V10_Ddecode__longopt_D33_lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddecode__longopt_D33_lambda3, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.202) ((##vcore.symbol? (bruijn ##.longopt.39 1 1))) (if (bruijn ##.reg.202 0 0) (##vcore.symbol->string (close _V10_Ddecode__longopt_D33_k14) (bruijn ##.longopt.39 1 1)) (basic-block 1 1 (##.reg.203) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.longopt.39 2 1)))) (if (bruijn ##.reg.203 0 0) (##vcore.symbol->string (close _V10_Ddecode__longopt_D33_k15) (##inline ##vcore.car (bruijn ##.longopt.39 2 1))) (basic-block 1 1 (##.reg.204) ((##vcore.string? (bruijn ##.longopt.39 3 1))) (if (bruijn ##.reg.204 0 0) ((bruijn ##.x.66 10 0) (bruijn ##.k.70 3 0) (bruijn ##.longopt.39 3 1) #f (bruijn ##.longopt.39 3 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.longopt.39 3 1))) (##vcore.string->symbol (close _V10_Ddecode__longopt_D33_k16) (##inline ##vcore.car (bruijn ##.longopt.39 3 1))) ((bruijn ##.x.68 8 0) (close _V10_Ddecode__longopt_D33_k17) (bruijn ##.longopt.39 3 1)))))))))
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
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k14, self)})),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->vars[1]));
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k15, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringP2(runtime, NULL,
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 4,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodeBool(false),
      statics->up->up->vars[1]);
} else {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        statics->up->up->vars[1])))) {
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k16, self)})),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_k17, self)})),
      statics->up->up->vars[1]);
}
}
    }
}
    }
}
    }
}
static void _V10_Dloop_D44_k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 5 0) (##inline ##vcore.cons (##inline ##vcore.cons #\? (bruijn ##.x.99 1 0)) (bruijn ##.x.97 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeChar('?'),
        statics->vars[0]),
        _var0));
}
static void _V10_Dloop_D44_k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 9 5) (close _V10_Dloop_D44_k24) (##inline ##vcore.cdr (bruijn ##.args.40 8 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k24, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1)));
}
static void _V10_Dloop_D44_k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.126 1 0) (##inline ##vcore.eq? (bruijn ##.x.127 0 0) #\:))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        VEncodeChar(':')));
}
static void _V10_Dloop_D44_k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.mem.46 1 0))) ((bruijn ##.x.67 14 0) (close _V10_Dloop_D44_k26) (bruijn ##.mem.46 1 0)) ((bruijn ##.k.126 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k26, self)})),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D44_k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.46 3 0)) #f) (bruijn ##.x.102 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VEncodeBool(false)),
        _var0));
}
static void _V10_Dloop_D44_k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 9 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.46 6 0)) (bruijn ##.x.110 1 0)) (bruijn ##.x.107 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        statics->vars[0]),
        _var0));
}
static void _V10_Dloop_D44_k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 13 5) (close _V10_Dloop_D44_k31) (##inline ##vcore.cdr (bruijn ##.args.40 12 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k31, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 12-1, 1)));
}
static void _V10_Dloop_D44_k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 9 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.46 6 0)) (bruijn ##.x.119 2 0)) (bruijn ##.x.116 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 6-1, 0)),
        statics->up->vars[0]),
        _var0));
}
static void _V10_Dloop_D44_k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 13 5) (close _V10_Dloop_D44_k34) (bruijn ##.x.117 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k34, self)})),
      _var0);
}
static void _V10_Dloop_D44_k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 16 0) (close _V10_Dloop_D44_k33) (bruijn ##.args.40 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k33, self)})),
      VGetArg(statics, 11-1, 1));
}
static void _V10_Dloop_D44_k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.122 0 0)) (basic-block 1 1 (##.reg.209) ((##vcore.+ (bruijn ##.i.45 7 1) 1)) (##vcore.substring (close _V10_Dloop_D44_k30) (bruijn ##.arg.42 10 0) (bruijn ##.reg.209 0 0))) (if (##inline ##vcore.not (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.40 10 1)))) ((bruijn ##.x.66 17 0) (bruijn ##.k.93 6 0) (##inline ##vcore.cons #\: (##inline ##vcore.car (bruijn ##.mem.46 3 0)))) ((bruijn ##.x.67 16 0) (close _V10_Dloop_D44_k32) (bruijn ##.args.40 10 1))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 7-1, 1),
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k30, self)})),
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
} else {
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 10-1, 1)))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 2,
      VGetArg(statics, 6-1, 0),
      VInlineCons2(runtime,
        VEncodeChar(':'),
        VInlineCar2(runtime,
        statics->up->up->vars[0])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k32, self)})),
      VGetArg(statics, 10-1, 1));
}
}
}
static void _V10_Dloop_D44_k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.124 0 0)) (basic-block 1 1 (##.reg.207) ((##vcore.+ (bruijn ##.i.45 5 1) 1)) ((bruijn ##.loop.44 6 0) (close _V10_Dloop_D44_k28) (bruijn ##.reg.207 0 0))) (basic-block 1 1 (##.reg.208) ((##vcore.+ (bruijn ##.i.45 5 1) 1)) (##vcore.= (close _V10_Dloop_D44_k29) (bruijn ##.reg.205 7 0) (bruijn ##.reg.208 0 0))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k28, self)})),
      self->vars[0]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k29, self)})),
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
}
}
static void _V10_Dloop_D44_k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.mem.46 0 0)) (##vcore.substring (close _V10_Dloop_D44_k23) (bruijn ##.arg.42 6 0) (bruijn ##.i.45 3 1)) ((close _V10_Dloop_D44_k25) (close _V10_Dloop_D44_k27)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k23, self)})),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D44_k25, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k27, self)})));
}
}
static void _V10_Dloop_D44_k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.94 0 0) (basic-block 1 1 (##.reg.206) ((##vcore.string-ref (bruijn ##.arg.42 5 0) (bruijn ##.i.45 2 1))) ((bruijn ##.x.64 15 0) (close _V10_Dloop_D44_k22) (bruijn ##.reg.206 0 0) (bruijn ##.opts.41 6 2))) ((bruijn ##.iter.38 6 5) (bruijn ##.k.93 1 0) (##inline ##vcore.cdr (bruijn ##.args.40 5 1))))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k22, self)})),
      self->vars[0],
      VGetArg(statics, 6-1, 2));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      statics->vars[0],
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
}
}
static void _V10_Dloop_D44_lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D44_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.< (close _V10_Dloop_D44_k21) (bruijn ##.i.45 0 1) (bruijn ##.reg.205 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_k21, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dgetopt__short_D36_k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__short_D36_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.205) ((##vcore.string-length (bruijn ##.arg.42 1 0))) (letrec 1 ((close _V10_Dloop_D44_lambda5)) ((bruijn ##.loop.44 0 0) (bruijn ##.k.92 3 0) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D44_lambda5, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(1l));
    }
    }
}
static void _V10_Dgetopt__short_D36_lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__short_D36_lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V10_Dgetopt__short_D36_k20) (##inline ##vcore.car (bruijn ##.args.40 0 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgetopt__short_D36_k20, .env = self }, }, 1,
      VInlineCar2(runtime,
        _var1));
}
static void _V10_Dloop_D50_k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D50_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.63 17 0) (bruijn ##.k.133 2 0) (bruijn ##.x.135 0 0) (##string ##.string.217))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D50_k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D50_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.63 20 0) (bruijn ##.k.133 5 0) (bruijn ##.x.137 2 0) (bruijn ##.x.138 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
static void _V10_Dloop_D50_k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D50_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.212) ((##vcore.+ (bruijn ##.i.51 4 1) 1)) (##vcore.substring (close _V10_Dloop_D50_k39) (bruijn ##.arg.48 7 0) (bruijn ##.reg.212 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k39, self)})),
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
}
static void _V10_Dloop_D50_k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D50_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.134 0 0) (##vcore.substring (close _V10_Dloop_D50_k37) (bruijn ##.arg.48 4 0) 0 (bruijn ##.i.51 1 1)) (basic-block 1 1 (##.reg.211) ((##vcore.string-ref (bruijn ##.arg.48 5 0) (bruijn ##.i.51 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.211 0 0) #\=) (##vcore.substring (close _V10_Dloop_D50_k38) (bruijn ##.arg.48 5 0) 0 (bruijn ##.i.51 2 1)) (basic-block 1 1 (##.reg.213) ((##vcore.+ (bruijn ##.i.51 3 1) 1)) ((bruijn ##.loop.50 4 0) (bruijn ##.k.133 3 0) (bruijn ##.reg.213 0 0))))))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k37, self)})),
      statics->up->up->up->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[1]);
if(VDecodeBool(
VInlineEq2(runtime,
        self->vars[0],
        VEncodeChar('=')))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k38, self)})),
      VGetArg(statics, 5-1, 0),
      VEncodeInt(0l),
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      statics->up->up->vars[0],
      self->vars[0]);
    }
}
    }
}
}
static void _V10_Dloop_D50_lambda8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D50_lambda8, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.= (close _V10_Dloop_D50_k36) (bruijn ##.i.51 0 1) (bruijn ##.reg.210 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_k36, self)})),
      _var1,
      statics->up->vars[0]);
}
static void _V10_Dgetopt__long_D37_k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.210) ((##vcore.string-length (bruijn ##.arg.48 1 0))) (letrec 1 ((close _V10_Dloop_D50_lambda8)) ((bruijn ##.loop.50 0 0) (bruijn ##.k.132 3 0) 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      statics->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D50_lambda8, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, self->vars[0]), 2,
      statics->up->up->vars[0],
      VEncodeInt(2l));
    }
    }
}
static void _V10_Dgetopt__long_D37_lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_lambda7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Dgetopt__long_D37_k35) (##inline ##vcore.car (bruijn ##.args.47 1 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dgetopt__long_D37_k35, .env = self }, }, 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
static void _V10_Dgetopt__long_D37_k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.142 4 0) (##inline ##vcore.cons (##inline ##vcore.cons #\? (bruijn ##.x.147 1 0)) (bruijn ##.x.145 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeChar('?'),
        statics->vars[0]),
        _var0));
}
static void _V10_Dgetopt__long_D37_k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 5 5) (close _V10_Dgetopt__long_D37_k43) (##inline ##vcore.cdr (bruijn ##.args.47 4 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k43, self)})),
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]));
}
static void _V10_Dgetopt__long_D37_k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.142 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.152 1 0) #f) (bruijn ##.x.150 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VEncodeBool(false)),
        _var0));
}
static void _V10_Dgetopt__long_D37_k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 6 5) (close _V10_Dgetopt__long_D37_k46) (##inline ##vcore.cdr (bruijn ##.args.47 5 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k46, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
}
static void _V10_Dgetopt__long_D37_k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.142 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.157 1 0) (bruijn ##.val.53 6 2)) (bruijn ##.x.155 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 6-1, 2)),
        _var0));
}
static void _V10_Dgetopt__long_D37_k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 7 5) (close _V10_Dgetopt__long_D37_k49) (##inline ##vcore.cdr (bruijn ##.args.47 6 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k49, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
static void _V10_Dgetopt__long_D37_k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.142 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.162 3 0) (bruijn ##.x.163 2 0)) (bruijn ##.x.160 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        statics->up->vars[0]),
        _var0));
}
static void _V10_Dgetopt__long_D37_k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.iter.38 9 5) (close _V10_Dgetopt__long_D37_k53) (bruijn ##.x.161 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k53, self)})),
      _var0);
}
static void _V10_Dgetopt__long_D37_k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 12 0) (close _V10_Dgetopt__long_D37_k52) (bruijn ##.args.47 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k52, self)})),
      VGetArg(statics, 7-1, 1));
}
static void _V10_Dgetopt__long_D37_k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.67 12 0) (close _V10_Dgetopt__long_D37_k51) (bruijn ##.args.47 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k51, self)})),
      VGetArg(statics, 6-1, 1));
}
static void _V10_Dgetopt__long_D37_k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.66 13 0) (bruijn ##.k.142 5 0) (##inline ##vcore.cons #\: (bruijn ##.x.165 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VInlineCons2(runtime,
        VEncodeChar(':'),
        _var0));
}
static void _V10_Dgetopt__long_D37_k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.167 0 0)) ((bruijn ##.x.62 16 0) (close _V10_Dgetopt__long_D37_k48) (bruijn ##.ass.54 2 0)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.47 5 1))) ((bruijn ##.x.62 16 0) (close _V10_Dgetopt__long_D37_k50) (bruijn ##.ass.54 2 0)) ((bruijn ##.x.62 16 0) (close _V10_Dgetopt__long_D37_k54) (bruijn ##.ass.54 2 0))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k48, self)})),
      statics->up->vars[0]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k50, self)})),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k54, self)})),
      statics->up->vars[0]);
}
}
}
static void _V10_Dgetopt__long_D37_k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.168 0 0)) ((bruijn ##.x.62 15 0) (close _V10_Dgetopt__long_D37_k45) (bruijn ##.ass.54 1 0)) ((bruijn ##.x.61 16 0) (close _V10_Dgetopt__long_D37_k47) (bruijn ##.val.53 3 2) (##string ##.string.217)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k45, self)})),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k47, self)})),
      statics->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER));
}
}
static void _V10_Dgetopt__long_D37_k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.ass.54 0 0)) (##vcore.substring (close _V10_Dgetopt__long_D37_k42) (bruijn ##.arg.52 2 1) 2) ((bruijn ##.x.67 9 0) (close _V10_Dgetopt__long_D37_k44) (bruijn ##.ass.54 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k42, self)})),
      statics->up->vars[1],
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k44, self)})),
      _var0);
}
}
static void _V10_Dgetopt__long_D37_k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.60 15 0) (close _V10_Dgetopt__long_D37_k41) (bruijn ##.x.169 0 0) (bruijn ##.longs.34 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k41, self)})),
      _var0,
      statics->up->up->vars[1]);
}
static void _V10_Dgetopt__long_D37_lambda9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.substring (close _V10_Dgetopt__long_D37_k40) (bruijn ##.arg.52 0 1) 2)
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_k40, self)})),
      _var1,
      VEncodeInt(2l));
}
static void _V10_Dgetopt__long_D37_lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt__long_D37_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.131 0 0) (close _V10_Dgetopt__long_D37_lambda7) (close _V10_Dgetopt__long_D37_lambda9))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda7, self)})),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda9, self)})));
}
static void _V10_Diter_D38_k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.192 1 0) ((bruijn ##.k.193 0 0) (bruijn ##.p.192 1 0)) (basic-block 1 1 (##.reg.216) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.55 3 1)))) (##vcore.< (bruijn ##.k.193 1 0) (bruijn ##.reg.216 0 0) 2)))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
    VCallFuncWithGC(runtime, (VFunc)VCmpLt, 3,
      statics->vars[0],
      self->vars[0],
      VEncodeInt(2l));
    }
}
}
static void _V10_Diter_D38_k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.170 3 0) (##inline ##vcore.cons (##inline ##vcore.cons #t (##inline ##vcore.car (bruijn ##.args.55 3 1))) (bruijn ##.x.174 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        statics->up->up->vars[1])),
        _var0));
}
static void _V10_Diter_D38_lambda11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.179 0 0) (##inline ##vcore.cons #f (bruijn ##.e.56 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VEncodeBool(false),
        _var1));
}
static void _V10_Diter_D38_k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.178 0 0) ((bruijn ##.x.59 20 0) (bruijn ##.k.170 6 0) (close _V10_Diter_D38_lambda11) (##inline ##vcore.cdr (bruijn ##.args.55 6 1))) ((bruijn ##.getopt-long.37 7 4) (bruijn ##.k.170 6 0) (bruijn ##.args.55 6 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      VGetArg(statics, 6-1, 0),
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_lambda11, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 4)), 2,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1));
}
}
static void _V10_Diter_D38_k63(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.170 7 0) (##inline ##vcore.cons (##inline ##vcore.cons #t (##inline ##vcore.car (bruijn ##.args.55 7 1))) (bruijn ##.x.185 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1))),
        _var0));
}
static void _V10_Diter_D38_k62(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) ((bruijn ##.getopt-short.36 7 3) (bruijn ##.k.170 6 0) (bruijn ##.args.55 6 1) (bruijn ##.opts.35 7 2)) ((bruijn ##.iter.38 7 5) (close _V10_Diter_D38_k63) (##inline ##vcore.cdr (bruijn ##.args.55 6 1))))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 3)), 3,
      VGetArg(statics, 6-1, 0),
      VGetArg(statics, 6-1, 1),
      VGetArg(statics, 7-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 5)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k63, self)})),
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1)));
}
}
static void _V10_Diter_D38_k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) (basic-block 1 1 (##.reg.214) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.55 5 1)))) (##vcore.= (close _V10_Diter_D38_k61) (bruijn ##.reg.214 0 0) 2)) (basic-block 1 1 (##.reg.215) ((##vcore.string-ref (##inline ##vcore.car (bruijn ##.args.55 5 1)) 0)) ((bruijn ##.x.61 17 0) (close _V10_Diter_D38_k62) (bruijn ##.reg.215 0 0) #\-)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
    VCallFuncWithGC(runtime, (VFunc)VCmpEq, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k61, self)})),
      self->vars[0],
      VEncodeInt(2l));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)),
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k62, self)})),
      self->vars[0],
      VEncodeChar('-'));
    }
}
}
static void _V10_Diter_D38_k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.61 15 0) (close _V10_Diter_D38_k60) (bruijn ##.x.190 0 0) (##string ##.string.218))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k60, self)})),
      _var0,
      VEncodePointer(&_V10_Dstring_D218.sym, VPOINTER_OTHER));
}
static void _V10_Diter_D38_k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) ((bruijn ##.iter.38 3 5) (close _V10_Diter_D38_k58) (##inline ##vcore.cdr (bruijn ##.args.55 2 1))) (##vcore.substring (close _V10_Diter_D38_k59) (##inline ##vcore.car (bruijn ##.args.55 2 1)) 0 2))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[5]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k58, self)})),
      VInlineCdr2(runtime,
        statics->up->vars[1]));
} else {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k59, self)})),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VEncodeInt(0l),
      VEncodeInt(2l));
}
}
static void _V10_Diter_D38_k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V10_Diter_D38_k56) (close _V10_Diter_D38_k57))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D38_k56, .env = self }, }, 1,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k57, self)})));
}
static void _V10_Diter_D38_lambda10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D38_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.55 0 1)) ((bruijn ##.k.170 0 0) '()) ((bruijn ##.x.61 12 0) (close _V10_Diter_D38_k55) (##inline ##vcore.car (bruijn ##.args.55 0 1)) (##string ##.string.219)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_k55, self)})),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D219.sym, VPOINTER_OTHER));
}
}
static void _V10_Dgetopt_D29_k65(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt_D29_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter.38 2 5) (bruijn ##.k.69 4 0) (##inline ##vcore.cdr (bruijn ##.args.31 4 2)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[5]), 2,
      statics->up->up->up->vars[0],
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]));
}
static void _V10_Dgetopt_D29_k64(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt_D29_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V10_Dgetopt_D29_k65) (bruijn ##.longs.34 1 1) (bruijn ##.x.199 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = self }, }, 4,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k65, self)})),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
static void _V10_Dgetopt_D29_k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt_D29_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((close _V10_Ddecode__longopt_D33_lambda3) #f (bruijn ##.x.91 1 0) (close _V10_Dgetopt__short_D36_lambda4) (close _V10_Dgetopt__long_D37_lambda6) (close _V10_Diter_D38_lambda10)) ((bruijn ##.x.59 13 0) (close _V10_Dgetopt_D29_k64) (bruijn ##.decode-longopt.33 0 0) (bruijn ##.longopts.32 2 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddecode__longopt_D33_lambda3, self)}));
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = statics->vars[0];
    self->vars[3] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__short_D36_lambda4, self)}));
    self->vars[4] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt__long_D37_lambda6, self)}));
    self->vars[5] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D38_lambda10, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k64, self)})),
      self->vars[0],
      statics->up->vars[3]);
    }
}
static void _V10_Dgetopt_D29_lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgetopt_D29_lambda2, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[4]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 4, 4, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  // ((bruijn ##.x.65 5 0) (close _V10_Dgetopt_D29_k13) (bruijn ##.optstring.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_k13, self)})),
      _var1);
}
static void _V0vanity_V0compiler_V0getopt_V20_k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close _V10_Dgetopt_D29_lambda2)) ((bruijn ##.k.58 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'getopt (bruijn ##.getopt.29 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgetopt_D29_lambda2, self)}));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0getopt,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0getopt_V20_k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0getopt_V20_k12) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k12, self)})),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0getopt_V20_k11) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k11, self)})),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0getopt_V20_k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0getopt_V20_k10) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k10, self)})),
      _V0list);
}
static void _V0vanity_V0compiler_V0getopt_V20_k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0getopt_V20_k9) 'string->list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k9, self)})),
      _V0string___Glist);
}
static void _V0vanity_V0compiler_V0getopt_V20_k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0getopt_V20_k8) 'memq)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k8, self)})),
      _V0memq);
}
static void _V0vanity_V0compiler_V0getopt_V20_k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0getopt_V20_k7) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k7, self)})),
      _V0values);
}
static void _V0vanity_V0compiler_V0getopt_V20_k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0getopt_V20_k6) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k6, self)})),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0getopt_V20_k5) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k5, self)})),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0getopt_V20_k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0getopt_V20_k4) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k4, self)})),
      _V0assoc);
}
static void _V0vanity_V0compiler_V0getopt_V20_k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0getopt_V20_k3) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k3, self)})),
      _V0map);
}
static void _V0vanity_V0compiler_V0getopt_V20_k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0getopt_V20_k2) (##string ##.string.220) (bruijn ##.x.201 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k2, self)})),
      VEncodePointer(&_V10_Dstring_D220.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0compiler_V0getopt_V20_lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_k1) (##string ##.string.221))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_k1, self)})),
      VEncodePointer(&_V10_Dstring_D221.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_lambda1;
