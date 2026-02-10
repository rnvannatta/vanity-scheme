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

VEnv * _V60_V0vanity_V0compiler_V0getopt;

VWEAK VWORD _V0getopt;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getopt" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D217 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D216 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D215 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D214 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
VWEAK VWORD _V0cddr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0string___Glist;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0string___Glist = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "string->list" };
VWEAK VWORD _V0memq;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memq = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memq" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D213 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V0getopt = VEncodePointer(VInternSymbol(1697444785, &_VW_V0getopt.sym), VPOINTER_OTHER);
  _V0cddr = VEncodePointer(VInternSymbol(-569180081, &_VW_V0cddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0list = VEncodePointer(VInternSymbol(-1594870040, &_VW_V0list.sym), VPOINTER_OTHER);
  _V0string___Glist = VEncodePointer(VInternSymbol(-2018065631, &_VW_V0string___Glist.sym), VPOINTER_OTHER);
  _V0memq = VEncodePointer(VInternSymbol(-1626778086, &_VW_V0memq.sym), VPOINTER_OTHER);
  _V0values = VEncodePointer(VInternSymbol(711325068, &_VW_V0values.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VInternSymbol(1746439164, &_VW_V0equal_Q.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt, _var0, _var1, _var2, _var3);
static void _V0vanity_V0compiler_V0getopt_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((##intrinsic "VMultiImport") (bruijn ##.k.58 2 0) (##string ##.string.213) (bruijn ##.x.59 0 0) 'map 'assoc 'equal? 'caddr 'values 'memq 'string->list 'list 'cadr 'cddr)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D213.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0assoc,
      _V0equal_Q,
      _V0caddr,
      _V0values,
      _V0memq,
      _V0string___Glist,
      _V0list,
      _V0cadr,
      _V0cddr);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0getopt_V20_V0k2) (bruijn ##.x.60 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k2, self)))),
      _var0);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0lambda2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_V0k1) (##string ##.string.214))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D214.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.32) #f (bruijn ##.decode-longopt.32 3 0) (bruijn ##.k.63 2 0) (bruijn ##.x.65 0 0))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.32) #f (bruijn ##.decode-longopt.32 4 0) (bruijn ##.k.63 3 0) (##inline ##vcore.cons (bruijn ##.x.68 0 0) (##inline ##vcore.cdr (bruijn ##.longopt.38 3 1))))
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->up->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCons2(runtime,
        _var0,
        VInlineCdr2(runtime,
        statics->up->up->vars[1]));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.7 9 8) (bruijn ##.k.63 4 0) (##inline ##vcore.car (bruijn ##.longopt.38 4 1)) #f (bruijn ##.x.74 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 4,
      statics->up->up->up->vars[0],
      VInlineCar2(runtime,
        statics->up->up->up->vars[1]),
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.7 11 8) (bruijn ##.k.63 6 0) (##inline ##vcore.car (bruijn ##.longopt.38 6 1)) (bruijn ##.x.78 1 0) (bruijn ##.x.79 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 4,
      VGetArg(statics, 6-1, 0),
      VInlineCar2(runtime,
        VGetArg(statics, 6-1, 1)),
      statics->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k9) (##inline ##vcore.car (bruijn ##.longopt.38 5 1)))
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k9, self)))),
      VInlineCar2(runtime,
        VGetArg(statics, 5-1, 1)));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.x.81 0 0)) ((bruijn ##.cadr.8 9 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k8) (bruijn ##.longopt.38 4 1)) ((bruijn ##.k.63 4 0) (bruijn ##.longopt.38 4 1)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k8, self)))),
      statics->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      statics->up->up->up->vars[1]);
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.193) ((##vcore.symbol? (bruijn ##.longopt.38 1 1))) (if (bruijn ##.reg.193 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k4) (bruijn ##.longopt.38 1 1)) (basic-block 1 1 (##.reg.194) ((##vcore.symbol? (##inline ##vcore.car (bruijn ##.longopt.38 2 1)))) (if (bruijn ##.reg.194 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k5) (##inline ##vcore.car (bruijn ##.longopt.38 2 1))) (basic-block 1 1 (##.reg.195) ((##vcore.string? (bruijn ##.longopt.38 3 1))) (if (bruijn ##.reg.195 0 0) ((bruijn ##.list.7 8 8) (bruijn ##.k.63 3 0) (bruijn ##.longopt.38 3 1) #f (bruijn ##.longopt.38 3 1)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.longopt.38 3 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k6) (##inline ##vcore.car (bruijn ##.longopt.38 3 1))) ((bruijn ##.cddr.9 8 10) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k7) (bruijn ##.longopt.38 3 1)))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k4, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k5, self)))),
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 8)), 4,
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k6, self)))),
      VInlineCar2(runtime,
        statics->up->up->vars[1]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32_V0k7, self)))),
      statics->up->up->vars[1]);
}
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.86 5 0) (##inline ##vcore.cons (##inline ##vcore.cons #\? (bruijn ##.x.92 1 0)) (bruijn ##.x.90 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeChar('?'),
        statics->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k13) (##inline ##vcore.cdr (bruijn ##.args.39 8 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k13, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 8-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.119 1 0) (##inline ##vcore.eq? (bruijn ##.x.120 0 0) #\:))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineEq2(runtime,
        _var0,
        VEncodeChar(':')));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.mem.45 1 0))) ((bruijn ##.cadr.8 13 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k15) (bruijn ##.mem.45 1 0)) ((bruijn ##.k.119 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        statics->vars[0])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k15, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.86 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.45 3 0)) #f) (bruijn ##.x.95 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        statics->up->up->vars[0]),
        VEncodeBool(false)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.86 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.45 5 0)) (bruijn ##.x.103 1 0)) (bruijn ##.x.100 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        statics->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 12 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k19) (##inline ##vcore.cdr (bruijn ##.args.39 11 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k19, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 11-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.86 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.mem.45 5 0)) (bruijn ##.x.112 2 0)) (bruijn ##.x.109 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        VGetArg(statics, 5-1, 0)),
        statics->up->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 12 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k22) (bruijn ##.x.110 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 12-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k22, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.9 15 10) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k21) (bruijn ##.args.39 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k21, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.117 0 0)) (basic-block 1 1 (##.reg.199) ((##vcore.+ (bruijn ##.i.44 5 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.35 ##.loop.43) #f (bruijn ##.loop.43 6 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k17) (bruijn ##.reg.199 0 0))) (basic-block 2 2 (##.reg.200 ##.reg.201) ((##vcore.+ (bruijn ##.i.44 5 1) 1) (##vcore.= (bruijn ##.reg.196 7 0) (bruijn ##.reg.200 0 0))) (if (##inline ##vcore.not (bruijn ##.reg.201 0 1)) (basic-block 1 1 (##.reg.202) ((##vcore.+ (bruijn ##.i.44 6 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k18) (bruijn ##.arg.41 9 0) (bruijn ##.reg.202 0 0))) (if (##inline ##vcore.not (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.39 9 1)))) ((bruijn ##.list.7 14 8) (bruijn ##.k.86 5 0) (##inline ##vcore.cons #\: (##inline ##vcore.car (bruijn ##.mem.45 2 0)))) ((bruijn ##.cadr.8 14 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k20) (bruijn ##.args.39 9 1))))))
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
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k17, self))));
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43(runtime, _closure_env, 2, _arg0, _arg1);
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k18, self)))),
      VGetArg(statics, 9-1, 0),
      self->vars[0]);
    }
} else {
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 9-1, 1)))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      VGetArg(statics, 5-1, 0),
      VInlineCons2(runtime,
        VEncodeChar(':'),
        VInlineCar2(runtime,
        statics->up->vars[0])));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k20, self)))),
      VGetArg(statics, 9-1, 1));
}
}
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.mem.45 0 0)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k12) (bruijn ##.arg.41 6 0) (bruijn ##.i.44 3 1)) ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k14) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k16)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k12, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k14, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k16, self)))));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.197) ((##vcore.< (bruijn ##.i.44 1 1) (bruijn ##.reg.196 3 0))) (if (bruijn ##.reg.197 0 0) (basic-block 1 1 (##.reg.198) ((##vcore.string-ref (bruijn ##.arg.41 5 0) (bruijn ##.i.44 2 1))) ((bruijn ##.memq.5 11 6) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k11) (bruijn ##.reg.198 0 0) (bruijn ##.opts.40 6 2))) (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 6 5) (bruijn ##.k.86 1 0) (##inline ##vcore.cdr (bruijn ##.args.39 5 1)))))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 6)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43_V0k11, self)))),
      self->vars[0],
      VGetArg(statics, 6-1, 2));
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V0k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.196) ((##vcore.string-length (bruijn ##.arg.41 1 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43")) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.35 ##.loop.43) #f (bruijn ##.loop.43 0 0) (bruijn ##.k.85 3 0) 1)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V10_Dloop_D43(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V0k10) (##inline ##vcore.car (bruijn ##.args.39 0 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35_V0k10, self)), 1,
      VInlineCar2(runtime,
        _var1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 12 5) (bruijn ##.k.126 2 0) (bruijn ##.x.128 0 0) (##string ##.string.215))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 5)), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D215.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.4 15 5) (bruijn ##.k.126 5 0) (bruijn ##.x.130 2 0) (bruijn ##.x.131 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 5)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.206) ((##vcore.+ (bruijn ##.i.50 4 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k26) (bruijn ##.arg.47 7 0) (bruijn ##.reg.206 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k26, self)))),
      VGetArg(statics, 7-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.reg.204) ((##vcore.= (bruijn ##.i.50 1 1) (bruijn ##.reg.203 3 0))) (if (bruijn ##.reg.204 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k24) (bruijn ##.arg.47 4 0) 0 (bruijn ##.i.50 1 1)) (basic-block 1 1 (##.reg.205) ((##vcore.string-ref (bruijn ##.arg.47 5 0) (bruijn ##.i.50 2 1))) (if (##inline ##vcore.eq? (bruijn ##.reg.205 0 0) #\=) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k25) (bruijn ##.arg.47 5 0) 0 (bruijn ##.i.50 2 1)) (basic-block 1 1 (##.reg.207) ((##vcore.+ (bruijn ##.i.50 3 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.36 ##.loop.49) #f (bruijn ##.loop.49 4 0) (bruijn ##.k.126 3 0) (bruijn ##.reg.207 0 0)))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k24, self)))),
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49_V0k25, self)))),
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
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.reg.203) ((##vcore.string-length (bruijn ##.arg.47 1 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49")) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.36 ##.loop.49) #f (bruijn ##.loop.49 0 0) (bruijn ##.k.125 3 0) 2)))
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
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(2l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V10_Dloop_D49(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k23) (##inline ##vcore.car (bruijn ##.args.46 1 1)))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k23, self)), 1,
      VInlineCar2(runtime,
        statics->vars[1]));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.135 4 0) (##inline ##vcore.cons (##inline ##vcore.cons #\? (bruijn ##.x.140 1 0)) (bruijn ##.x.138 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeChar('?'),
        statics->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 5 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k30) (##inline ##vcore.cdr (bruijn ##.args.46 4 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 5-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k30, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.135 5 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.145 1 0) #f) (bruijn ##.x.143 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VEncodeBool(false)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 6 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k33) (##inline ##vcore.cdr (bruijn ##.args.46 5 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k33, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.135 6 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.150 1 0) (bruijn ##.val.52 6 2)) (bruijn ##.x.148 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->vars[0],
        VGetArg(statics, 6-1, 2)),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k36) (##inline ##vcore.cdr (bruijn ##.args.46 6 1)))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k36, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k40" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.135 8 0) (##inline ##vcore.cons (##inline ##vcore.cons (bruijn ##.x.155 3 0) (bruijn ##.x.156 2 0)) (bruijn ##.x.153 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        statics->up->up->vars[0],
        statics->up->vars[0]),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k39(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k39" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k40) (bruijn ##.x.154 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k40, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k38(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k38" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cddr.9 12 10) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k39) (bruijn ##.args.46 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 10)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k39, self)))),
      VGetArg(statics, 7-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.8 11 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k38) (bruijn ##.args.46 6 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k38, self)))),
      VGetArg(statics, 6-1, 1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k41" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.7 11 8) (bruijn ##.k.135 5 0) (##inline ##vcore.cons #\: (bruijn ##.x.158 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 8)), 2,
      VGetArg(statics, 5-1, 0),
      VInlineCons2(runtime,
        VEncodeChar(':'),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.160 0 0)) ((bruijn ##.caddr.3 10 4) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k35) (bruijn ##.ass.53 2 0)) (if (##inline ##vcore.pair? (##inline ##vcore.cdr (bruijn ##.args.46 5 1))) ((bruijn ##.caddr.3 10 4) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k37) (bruijn ##.ass.53 2 0)) ((bruijn ##.caddr.3 10 4) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k41) (bruijn ##.ass.53 2 0))))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k35, self)))),
      statics->up->vars[0]);
} else {
if(VDecodeBool(
VInlinePairP2(runtime,
        VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1))))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k37, self)))),
      statics->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k41, self)))),
      statics->up->vars[0]);
}
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.x.161 0 0)) ((bruijn ##.caddr.3 9 4) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k32) (bruijn ##.ass.53 1 0)) ((bruijn ##.equal?.2 9 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k34) (bruijn ##.val.52 3 2) (##string ##.string.215)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 4)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k32, self)))),
      statics->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k34, self)))),
      statics->up->up->vars[2],
      VEncodePointer(&_V10_Dstring_D215.sym, VPOINTER_OTHER));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (##inline ##vcore.not (bruijn ##.ass.53 0 0)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k29) (bruijn ##.arg.51 2 1) 2) ((bruijn ##.cadr.8 8 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k31) (bruijn ##.ass.53 0 0)))
if(VDecodeBool(
VInlineNot2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k29, self)))),
      statics->up->vars[1],
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k31, self)))),
      _var0);
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.1 7 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k28) (bruijn ##.x.162 0 0) (bruijn ##.longs.33 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k28, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda5, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k27) (bruijn ##.arg.51 0 1) 2)
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0k27, self)))),
      _var1,
      VEncodeInt(2l));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (##vcore.call-with-values (bruijn ##.k.124 0 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda4) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda5))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda4, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36_V0lambda5, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k43" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.185 1 0) ((bruijn ##.k.186 0 0) (bruijn ##.p.185 1 0)) (basic-block 2 2 (##.reg.211 ##.reg.212) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.54 3 1))) (##vcore.< (bruijn ##.reg.211 0 0) 2)) ((bruijn ##.k.186 1 0) (bruijn ##.reg.212 0 1))))
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
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k45" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.163 3 0) (##inline ##vcore.cons (##inline ##vcore.cons #t (##inline ##vcore.car (bruijn ##.args.54 3 1))) (bruijn ##.x.167 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        statics->up->up->vars[1])),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.k.172 0 0) (##inline ##vcore.cons #f (bruijn ##.e.55 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        VEncodeBool(false),
        _var1));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k49(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k49" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.163 7 0) (##inline ##vcore.cons (##inline ##vcore.cons #t (##inline ##vcore.car (bruijn ##.args.54 7 1))) (bruijn ##.x.178 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        VEncodeBool(true),
        VInlineCar2(runtime,
        VGetArg(statics, 7-1, 1))),
        _var0));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k48" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.176 0 0) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.35) #f (bruijn ##.getopt-short.35 7 3) (bruijn ##.k.163 6 0) (bruijn ##.args.54 6 1) (bruijn ##.opts.34 7 2)) (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k49) (##inline ##vcore.cdr (bruijn ##.args.54 6 1))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 6-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 6-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 7-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k49, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        VGetArg(statics, 6-1, 1));
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k47" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.170 0 0) (basic-block 2 2 (##.reg.208 ##.reg.209) ((##vcore.string-length (##inline ##vcore.car (bruijn ##.args.54 5 1))) (##vcore.= (bruijn ##.reg.208 0 0) 2)) (if (bruijn ##.reg.209 0 1) ((bruijn ##.map.0 10 1) (bruijn ##.k.163 5 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0lambda6) (##inline ##vcore.cdr (bruijn ##.args.54 5 1))) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.36) #f (bruijn ##.getopt-long.36 6 4) (bruijn ##.k.163 5 0) (bruijn ##.args.54 5 1)))) (basic-block 1 1 (##.reg.210) ((##vcore.string-ref (##inline ##vcore.car (bruijn ##.args.54 5 1)) 0)) ((bruijn ##.equal?.2 10 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k48) (bruijn ##.reg.210 0 0) #\-)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 3,
      VGetArg(statics, 5-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0lambda6, self)))),
      VInlineCdr2(runtime,
        VGetArg(statics, 5-1, 1)));
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 5-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36(runtime, _closure_env, 2, _arg0, _arg1);
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k48, self)))),
      self->vars[0],
      VEncodeChar('-'));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k46" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.2 8 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k47) (bruijn ##.x.183 0 0) (##string ##.string.216))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k47, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D216.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k44" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.p.165 0 0) (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 3 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k45) (##inline ##vcore.cdr (bruijn ##.args.54 2 1))) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k46) (##inline ##vcore.car (bruijn ##.args.54 2 1)) 0 2))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(statics->up->up->vars[5]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k45, self))));
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->vars[1]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
} else {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k46, self)))),
      VInlineCar2(runtime,
        statics->up->vars[1]),
      VEncodeInt(0l),
      VEncodeInt(2l));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k42" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k43) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k44))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k43, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k44, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (if (##inline ##vcore.null? (bruijn ##.args.54 0 1)) ((bruijn ##.k.163 0 0) '()) ((bruijn ##.equal?.2 5 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k42) (##inline ##vcore.car (bruijn ##.args.54 0 1)) (##string ##.string.217)))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 3)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37_V0k42, self)))),
      VInlineCar2(runtime,
        _var1),
      VEncodePointer(&_V10_Dstring_D217.sym, VPOINTER_OTHER));
}
}
static void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k51(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.37) #f (bruijn ##.iter.37 1 5) (bruijn ##.k.62 3 0) (##inline ##vcore.cdr (bruijn ##.args.30 3 2)))
  {
    VClosure * _closure = VDecodeClosure(statics->vars[5]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      VInlineCdr2(runtime,
        statics->up->up->vars[2]);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k50(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k50" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k51) (bruijn ##.longs.33 1 1) (bruijn ##.x.191 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k51, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32") #f (bruijn ##.x.84 1 0) (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37")) ((bruijn ##.map.0 4 1) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k50) (bruijn ##.decode-longopt.32 0 0) (bruijn ##.longopts.31 2 3)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D32, self))));
    self->vars[1] = VEncodeBool(false);
    self->vars[2] = statics->vars[0];
    self->vars[3] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D35, self))));
    self->vars[4] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D36, self))));
    self->vars[5] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D37, self))));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[1]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k50, self)))),
      self->vars[0],
      statics->up->vars[3]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V50_V0vanity_V0compiler_V0getopt_V0getopt" };
 VRecordCall2(runtime, &dbg);
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
  // ((bruijn ##.string->list.6 2 7) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3) (bruijn ##.optstring.29 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[7]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0lambda3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 11) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda3, got ~D~N"
  "-- expected 11~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[11]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 11, 11, statics);
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
  // (##letrec (vanity compiler getopt) 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt" "_V60_V0vanity_V0compiler_V0getopt")) ((bruijn ##.k.61 1 0) (##inline ##vcore.cons (##inline ##vcore.cons 'getopt (bruijn ##.getopt.28 0 0)) '())))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0getopt = self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt, _V60_V0vanity_V0compiler_V0getopt))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0getopt_V20", &_V60_V0vanity_V0compiler_V0getopt);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0getopt,
        self->vars[0]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0getopt_V20_V0lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.57 0 0) (close _V0vanity_V0compiler_V0getopt_V20_V0lambda2) (close _V0vanity_V0compiler_V0getopt_V20_V0lambda3))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda2, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda3, self)))));
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda1;
