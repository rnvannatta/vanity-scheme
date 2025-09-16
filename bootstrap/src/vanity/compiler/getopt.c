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


static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D226 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D225 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
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
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D224 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D223 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D222 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
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
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) (bruijn ##.decode-longopt.33 3 0) (bruijn ##.k.70 2 0) (bruijn ##.x.72 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) (bruijn ##.decode-longopt.33 4 0) (bruijn ##.k.70 3 0) (##inline ##vcore.cons (bruijn ##.x.75 0 0) (##inline ##vcore.cdr (bruijn ##.longopt.39 3 1))))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        statics->up->up->vars[1]));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k16, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k19, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k19) (##inline ##vcore.car (bruijn ##.longopt.39 5 1)))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k19, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.88 0 0)) ((bruijn ##.x.67 10 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k18) (bruijn ##.longopt.39 4 1)) ((bruijn ##.k.70 4 0) (bruijn ##.longopt.39 4 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k18, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.202) ((##vcore.symbol? (bruijn ##.longopt.39 1 1))) (if (bruijn ##.reg.202 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k14) (bruijn ##.longopt.39 1 1)) (basic-block 1 1 (##.reg.203) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.longopt.39 2 1)))) (if (bruijn ##.reg.203 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k15) (##inline ##vcore.car (bruijn ##.longopt.39 2 1))) (basic-block 1 1 (##.reg.204) ((##vcore.string? (bruijn ##.longopt.39 3 1))) (if (bruijn ##.reg.204 0 0) ((bruijn ##.x.66 10 0) (bruijn ##.k.70 3 0) (bruijn ##.longopt.39 3 1) #f (bruijn ##.longopt.39 3 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.longopt.39 3 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k16) (##inline ##vcore.car (bruijn ##.longopt.39 3 1))) ((bruijn ##.x.68 8 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k17) (bruijn ##.longopt.39 3 1)))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k14, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k15, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k16, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k17, self)))),
      statics->up->up->vars[1]);
}
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k23, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k23) (##inline ##vcore.cdr (bruijn ##.args.40 8 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k23, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.126 1 0) (##inline ##vcore.eq? (bruijn ##.x.127 0 0) #\:))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        VEncodeChar(':')));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.mem.46 1 0))) ((bruijn ##.x.67 14 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k25) (bruijn ##.mem.46 1 0)) ((bruijn ##.k.126 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k25, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k27, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.46 5 0)) (bruijn ##.x.110 1 0)) (bruijn ##.x.107 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        statics->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 12 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k29) (##inline ##vcore.cdr (bruijn ##.args.40 11 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k29, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.93 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.46 5 0)) (bruijn ##.x.119 2 0)) (bruijn ##.x.116 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        statics->up->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 12 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k32) (bruijn ##.x.117 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k32, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k31) (bruijn ##.args.40 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k31, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.124 0 0)) (basic-block 1 1 (##.reg.208) ((##vcore.+ (bruijn ##.i.45 5 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) (bruijn ##.loop.44 6 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k27) (bruijn ##.reg.208 0 0))) (basic-block 2 2 (##.reg.209 ##.reg.210) ((##vcore.+ (bruijn ##.i.45 5 1) 1) (##vcore.= (bruijn ##.reg.205 7 0) (bruijn ##.reg.209 0 0))) (if (##inline ##vcore.not (bruijn ##.reg.210 0 1)) (basic-block 1 1 (##.reg.211) ((##vcore.+ (bruijn ##.i.45 6 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k28) (bruijn ##.arg.42 9 0) (bruijn ##.reg.211 0 0))) (if (##inline ##vcore.not (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.40 9 1)))) ((bruijn ##.x.66 16 0) (bruijn ##.k.93 5 0) (##inline ##vcore.cons #\: (##inline ##vcore.car (bruijn ##.mem.46 2 0)))) ((bruijn ##.x.67 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k30) (bruijn ##.args.40 9 1))))))
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
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k27, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 5-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
if(VDecodeBool(
VInlineNot2(runtime,
        self->vars[1]))) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 6-1, 1),
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k28, self)))),
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    }
} else {
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      VGetArg(statics, 5-1, 0),
      VInlineCons2(runtime,
        VEncodeChar(':'),
        VInlineCar2(runtime,
        statics->up->vars[0])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k30, self)))),
      VGetArg(statics, 9-1, 1));
}
}
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.mem.46 0 0)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k22) (bruijn ##.arg.42 6 0) (bruijn ##.i.45 3 1)) ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k24) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k26)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k22, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k24, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k26, self)))));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.206) ((##vcore.< (bruijn ##.i.45 1 1) (bruijn ##.reg.205 3 0))) (if (bruijn ##.reg.206 0 0) (basic-block 1 1 (##.reg.207) ((##vcore.string-ref (bruijn ##.arg.42 5 0) (bruijn ##.i.45 2 1))) ((bruijn ##.x.64 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21) (bruijn ##.reg.207 0 0) (bruijn ##.opts.41 6 2))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 6 5) (bruijn ##.k.93 1 0) (##inline ##vcore.cdr (bruijn ##.args.40 5 1)))))
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
      VGetArg(statics, 5-1, 0),
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, self)))),
      self->vars[0],
      VGetArg(statics, 6-1, 2));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.205) ((##vcore.string-length (bruijn ##.arg.42 1 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44")) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) (bruijn ##.loop.44 0 0) (bruijn ##.k.92 3 0) 1)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V0k20) (##inline ##vcore.car (bruijn ##.args.40 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V0k20, self)), 1,
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.63 17 0) (bruijn ##.k.133 2 0) (bruijn ##.x.135 0 0) (##string ##.string.222))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 0)), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.63 20 0) (bruijn ##.k.133 5 0) (bruijn ##.x.137 2 0) (bruijn ##.x.138 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.215) ((##vcore.+ (bruijn ##.i.51 4 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k36) (bruijn ##.arg.48 7 0) (bruijn ##.reg.215 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k36, self)))),
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.213) ((##vcore.= (bruijn ##.i.51 1 1) (bruijn ##.reg.212 3 0))) (if (bruijn ##.reg.213 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k34) (bruijn ##.arg.48 4 0) 0 (bruijn ##.i.51 1 1)) (basic-block 1 1 (##.reg.214) ((##vcore.string-ref (bruijn ##.arg.48 5 0) (bruijn ##.i.51 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.214 0 0) #\=) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k35) (bruijn ##.arg.48 5 0) 0 (bruijn ##.i.51 2 1)) (basic-block 1 1 (##.reg.216) ((##vcore.+ (bruijn ##.i.51 3 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) (bruijn ##.loop.50 4 0) (bruijn ##.k.133 3 0) (bruijn ##.reg.216 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k34, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k35, self)))),
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
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.212) ((##vcore.string-length (bruijn ##.arg.48 1 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50")) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) (bruijn ##.loop.50 0 0) (bruijn ##.k.132 3 0) 2)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(2l);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33) (##inline ##vcore.car (bruijn ##.args.47 1 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k40, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 5 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k40) (##inline ##vcore.cdr (bruijn ##.args.47 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k40, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k43, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 6 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k43) (##inline ##vcore.cdr (bruijn ##.args.47 5 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k43, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k46, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k46) (##inline ##vcore.cdr (bruijn ##.args.47 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k46, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k50, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k50) (bruijn ##.x.161 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k50, self))));
    VWORD _arg1 = 
      _var0;
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.68 12 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k49) (bruijn ##.args.47 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k49, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.67 12 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k48) (bruijn ##.args.47 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k48, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k51(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k51, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.167 0 0)) ((bruijn ##.x.62 16 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k45) (bruijn ##.ass.54 2 0)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.47 5 1))) ((bruijn ##.x.62 16 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k47) (bruijn ##.ass.54 2 0)) ((bruijn ##.x.62 16 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k51) (bruijn ##.ass.54 2 0))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k45, self)))),
      statics->up->vars[0]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k47, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k51, self)))),
      statics->up->vars[0]);
}
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.168 0 0)) ((bruijn ##.x.62 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k42) (bruijn ##.ass.54 1 0)) ((bruijn ##.x.61 16 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k44) (bruijn ##.val.53 3 2) (##string ##.string.222)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k42, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k44, self)))),
      statics->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D222.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.ass.54 0 0)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39) (bruijn ##.arg.52 2 1) 2) ((bruijn ##.x.67 9 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k41) (bruijn ##.ass.54 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, self)))),
      statics->up->vars[1],
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k41, self)))),
      _var0);
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.60 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38) (bruijn ##.x.169 0 0) (bruijn ##.longs.34 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37) (bruijn ##.arg.52 0 1) 2)
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, self)))),
      _var1,
      VEncodeInt(2l));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.131 0 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k53(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.192 1 0) ((bruijn ##.k.193 0 0) (bruijn ##.p.192 1 0)) (basic-block 2 2 (##.reg.220 ##.reg.221) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.55 3 1))) (##vcore.< (bruijn ##.reg.220 0 0) 2)) ((bruijn ##.k.193 1 0) (bruijn ##.reg.221 0 1))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
    self->vars[1] = _VBasic_VCmpLt(runtime, NULL,
      self->vars[0],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k55(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k55, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.179 0 0) (##inline ##vcore.cons #f (bruijn ##.e.56 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VEncodeBool(false),
        _var1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k59(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k59, got ~D~N"
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k58(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.183 0 0) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36) (bruijn ##.getopt-short.36 7 3) (bruijn ##.k.170 6 0) (bruijn ##.args.55 6 1) (bruijn ##.opts.35 7 2)) (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k59) (##inline ##vcore.cdr (bruijn ##.args.55 6 1))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36(runtime, _closure->env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k59, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k57(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.177 0 0) (basic-block 2 2 (##.reg.217 ##.reg.218) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.55 5 1))) (##vcore.= (bruijn ##.reg.217 0 0) 2)) (if (bruijn ##.reg.218 0 1) ((bruijn ##.x.59 19 0) (bruijn ##.k.170 5 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda4) (##inline ##vcore.cdr (bruijn ##.args.55 5 1))) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37) (bruijn ##.getopt-long.37 6 4) (bruijn ##.k.170 5 0) (bruijn ##.args.55 5 1)))) (basic-block 1 1 (##.reg.219) ((##vcore.string-ref (##inline ##vcore.car (bruijn ##.args.55 5 1)) 0)) ((bruijn ##.x.61 17 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k58) (bruijn ##.reg.219 0 0) #\-)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringLength2(runtime, NULL,
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[0],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 19-1, 0)), 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda4, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 4));
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k58, self)))),
      self->vars[0],
      VEncodeChar('-'));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k56(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.x.61 15 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k57) (bruijn ##.x.190 0 0) (##string ##.string.223))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k57, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D223.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k54(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.172 0 0) (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 3 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k55) (##inline ##vcore.cdr (bruijn ##.args.55 2 1))) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k56) (##inline ##vcore.car (bruijn ##.args.55 2 1)) 0 2))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[5]);
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k55, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k56, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VEncodeInt(0l),
      VEncodeInt(2l));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k52(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k53) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k54))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k53, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k54, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.55 0 1)) ((bruijn ##.k.170 0 0) '()) ((bruijn ##.x.61 12 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k52) (##inline ##vcore.car (bruijn ##.args.55 0 1)) (##string ##.string.224)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k52, self)))),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D224.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k61(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) (bruijn ##.iter.38 2 5) (bruijn ##.k.69 4 0) (##inline ##vcore.cdr (bruijn ##.args.31 4 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[5]);
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[2]);
    if(VStackOverflow(runtime)){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure->env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k60(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k61) (bruijn ##.longs.34 1 1) (bruijn ##.x.199 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k61, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33") #f (bruijn ##.x.91 1 0) (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38")) ((bruijn ##.x.59 13 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k60) (bruijn ##.decode-longopt.33 0 0) (bruijn ##.longopts.32 2 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, self))));
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = statics->vars[0];
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k60, self)))),
      self->vars[0],
      statics->up->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt, got ~D~N"
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
  // ((bruijn ##.x.65 5 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k13) (bruijn ##.optstring.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k13, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt")) ((bruijn ##.k.58 13 0) (##inline ##vcore.cons (##inline ##vcore.cons 'getopt (bruijn ##.getopt.29 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0getopt,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 9 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k12) 'cddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k12, self)))),
      _V0cddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 8 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k11) 'cadr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k11, self)))),
      _V0cadr);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 7 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k10) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k10, self)))),
      _V0list);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 6 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k9) 'string->list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k9, self)))),
      _V0string___Glist);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 5 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k8) 'memq)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k8, self)))),
      _V0memq);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 4 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k7) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k7, self)))),
      _V0values);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 3 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k6) 'caddr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k6, self)))),
      _V0caddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 2 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k5) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k5, self)))),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 1 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k4) 'assoc)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k4, self)))),
      _V0assoc);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##..vcore.import.0 0 0) (close _V0vanity_V0compiler_V0getopt_V20_V0k3) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k3, self)))),
      _V0map);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0getopt_V20_V0k2) (##string ##.string.225) (bruijn ##.x.201 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D225.sym, VPOINTER_OTHER),
      _var0);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_V0k1) (##string ##.string.226))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D226.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda1;
