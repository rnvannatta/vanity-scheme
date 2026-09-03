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

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D291 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
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
static struct { VBlob sym; char bytes[34]; } _V10_Dstring_D290 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0getopt_V20" };
VWEAK VWORD _V0getopt;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0getopt = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "getopt" };
static struct { VBlob sym; char bytes[2]; } _V10_Dstring_D289 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 2 }, "-" };
static struct { VBlob sym; char bytes[3]; } _V10_Dstring_D288 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 3 }, "--" };
static struct { VBlob sym; char bytes[1]; } _V10_Dstring_D287 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 1 }, "" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36, _var0, _var1, _var2);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33, _var0, _var1);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0getopt_V0getopt, _var0, _var1, _var2, _var3);
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) #f (bruijn ##.decode-longopt.33 3 0) (bruijn ##.%k.60 2 0) (bruijn ##.%x.62 0 0))
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
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.196 ##.%x.197) ((##vcore.cdr (bruijn ##.longopt.39 5 1)) (##vcore.cons (bruijn ##.%x.65 1 0) (bruijn ##.%x.196 0 0))) (##qualified-call (vanity compiler getopt getopt ##.decode-longopt.33) #f (bruijn ##.decode-longopt.33 6 0) (bruijn ##.%k.60 5 0) (bruijn ##.%x.197 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      self->vars[0]);
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 5-1, 0);
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.8 11 7) (bruijn ##.%k.60 6 0) (bruijn ##.%x.201 1 0) #f (bruijn ##.%x.71 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 7)), 4,
      VGetArg(statics, 6-1, 0),
      statics->vars[0],
      VEncodeBool(false),
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.list.8 15 7) (bruijn ##.%k.60 10 0) (bruijn ##.%x.204 3 0) (bruijn ##.%x.75 2 0) (bruijn ##.%x.76 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 7)), 4,
      VGetArg(statics, 10-1, 0),
      statics->up->up->vars[0],
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.205) ((##vcore.car (bruijn ##.longopt.39 9 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9) (bruijn ##.%x.205 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k9, self)))),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.203) ((##vcore.null? (bruijn ##.%x.78 1 0))) (if (bruijn ##.%p.203 0 0) (basic-block 1 1 (##.%x.204) ((##vcore.car (bruijn ##.longopt.39 7 1))) ((bruijn ##.cadr.9 12 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8) (bruijn ##.longopt.39 7 1))) ((bruijn ##.%k.60 6 0) (bruijn ##.longopt.39 6 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k8, self)))),
      VGetArg(statics, 7-1, 1));
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 0)), 1,
      VGetArg(statics, 6-1, 1));
}
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
  // (basic-block 1 1 (##.%p.192) ((##vcore.symbol? (bruijn ##.longopt.39 1 1))) (if (bruijn ##.%p.192 0 0) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4) (bruijn ##.longopt.39 1 1)) (basic-block 2 2 (##.%x.193 ##.%p.194) ((##vcore.car (bruijn ##.longopt.39 2 1)) (##vcore.symbol? (bruijn ##.%x.193 0 0))) (if (bruijn ##.%p.194 0 1) (basic-block 1 1 (##.%x.195) ((##vcore.car (bruijn ##.longopt.39 3 1))) (##vcore.symbol->string (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5) (bruijn ##.%x.195 0 0))) (basic-block 1 1 (##.%p.198) ((##vcore.string? (bruijn ##.longopt.39 3 1))) (if (bruijn ##.%p.198 0 0) ((bruijn ##.list.8 8 7) (bruijn ##.%k.60 3 0) (bruijn ##.longopt.39 3 1) #f (bruijn ##.longopt.39 3 1)) (basic-block 2 2 (##.%x.199 ##.%p.200) ((##vcore.cdr (bruijn ##.longopt.39 4 1)) (##vcore.null? (bruijn ##.%x.199 0 0))) (if (bruijn ##.%p.200 0 1) (basic-block 2 2 (##.%x.201 ##.%x.202) ((##vcore.car (bruijn ##.longopt.39 5 1)) (##vcore.car (bruijn ##.longopt.39 5 1))) (##vcore.string->symbol (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6) (bruijn ##.%x.202 0 1))) ((bruijn ##.cddr.10 9 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7) (bruijn ##.longopt.39 4 1))))))))))
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
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k4, self)))),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VSymbolP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->vars[1]);
    VCallFuncWithGC(runtime, (VFunc)VSymbolString2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k5, self)))),
      self->vars[0]);
    }
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 7)), 4,
      statics->up->up->vars[0],
      statics->up->up->vars[1],
      VEncodeBool(false),
      statics->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VNullP2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VStringSymbol2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k6, self)))),
      self->vars[1]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33_V0k7, self)))),
      statics->up->up->up->vars[1]);
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.213) ((##vcore.cons (bruijn ##.%x.211 2 0) (bruijn ##.%x.87 1 0))) ((bruijn ##.%k.83 8 0) (bruijn ##.%r.213 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.211 ##.%x.212) ((##vcore.cons #\? (bruijn ##.%x.89 1 0)) (##vcore.cdr (bruijn ##.args.40 9 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 10 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12) (bruijn ##.%x.212 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar('?'),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k12, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.237) ((##vcore.eq? (bruijn ##.%x.117 1 0) #\:)) ((bruijn ##.%k.116 2 0) (bruijn ##.%r.237 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VEq2(runtime, NULL,
      statics->vars[0],
      VEncodeChar(':'));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.215 1 1) ((bruijn ##.cadr.9 14 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14) (bruijn ##.mem.46 3 0)) ((bruijn ##.%k.116 0 0) #f))
if(VDecodeBool(
statics->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k14, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.220) ((##vcore.cons (bruijn ##.%x.218 2 1) (bruijn ##.%x.92 1 0))) ((bruijn ##.%k.83 10 0) (bruijn ##.%r.220 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.228) ((##vcore.cons (bruijn ##.%x.226 2 0) (bruijn ##.%x.97 1 0))) ((bruijn ##.%k.83 13 0) (bruijn ##.%r.228 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.226 ##.%x.227) ((##vcore.cons (bruijn ##.%x.224 2 0) (bruijn ##.%x.100 1 0)) (##vcore.cdr (bruijn ##.args.40 14 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 15 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18) (bruijn ##.%x.227 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 15-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k18, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
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
  // (basic-block 1 1 (##.%r.236) ((##vcore.cons (bruijn ##.%x.235 3 0) (bruijn ##.%x.106 1 0))) ((bruijn ##.%k.83 15 0) (bruijn ##.%r.236 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 17 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21) (bruijn ##.%x.107 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 17-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k21, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.235) ((##vcore.cons (bruijn ##.%x.234 2 0) (bruijn ##.%x.109 1 0))) ((bruijn ##.cddr.10 20 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20) (bruijn ##.args.40 15 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 20-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k20, self)))),
      VGetArg(statics, 15-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.216) ((##vcore.not (bruijn ##.%x.114 1 0))) (if (bruijn ##.%p.216 0 0) (basic-block 3 3 (##.%x.217 ##.%x.218 ##.%x.219) ((##vcore.car (bruijn ##.mem.46 5 0)) (##vcore.cons (bruijn ##.%x.217 0 0) #f) (##vcore.+ (bruijn ##.i.45 8 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) #f (bruijn ##.loop.44 9 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16) (bruijn ##.%x.219 0 2))) (basic-block 3 3 (##.%x.221 ##.%x.222 ##.%p.223) ((##vcore.+ (bruijn ##.i.45 8 1) 1) (##vcore.= (bruijn ##.len.207 10 1) (bruijn ##.%x.221 0 0)) (##vcore.not (bruijn ##.%x.222 0 1))) (if (bruijn ##.%p.223 0 2) (basic-block 2 2 (##.%x.224 ##.%x.225) ((##vcore.car (bruijn ##.mem.46 6 0)) (##vcore.+ (bruijn ##.i.45 9 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17) (bruijn ##.arg.206 11 0) (bruijn ##.%x.225 0 1))) (basic-block 3 3 (##.%x.229 ##.%x.230 ##.%p.231) ((##vcore.cdr (bruijn ##.args.40 12 1)) (##vcore.pair? (bruijn ##.%x.229 0 0)) (##vcore.not (bruijn ##.%x.230 0 1))) (if (bruijn ##.%p.231 0 2) (basic-block 2 2 (##.%x.232 ##.%x.233) ((##vcore.car (bruijn ##.mem.46 7 0)) (##vcore.cons #\: (bruijn ##.%x.232 0 0))) ((bruijn ##.list.8 18 7) (bruijn ##.%k.83 10 0) (bruijn ##.%x.233 0 1))) (basic-block 1 1 (##.%x.234) ((##vcore.car (bruijn ##.mem.46 7 0))) ((bruijn ##.cadr.9 18 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19) (bruijn ##.args.40 13 1)))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VEncodeBool(false));
    self->vars[2] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 0));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k16, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 8-1, 1),
      VEncodeInt(1l));
    self->vars[1] = _VBasic_VCmpEq(runtime, NULL,
      VGetArg(statics, 10-1, 1),
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 6-1, 0));
    self->vars[1] = _VBasic_VAdd2(runtime, NULL,
      VGetArg(statics, 9-1, 1),
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k17, self)))),
      VGetArg(statics, 11-1, 0),
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VNot2(runtime, NULL,
      self->vars[1]);
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar(':'),
      self->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 7)), 2,
      VGetArg(statics, 10-1, 0),
      self->vars[1]);
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 7-1, 0));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k19, self)))),
      VGetArg(statics, 13-1, 1));
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.210) ((##vcore.not (bruijn ##.mem.46 1 0))) (if (bruijn ##.%p.210 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11) (bruijn ##.arg.206 6 0) (bruijn ##.i.45 4 1)) (basic-block 2 2 (##.%x.214 ##.%p.215) ((##vcore.cdr (bruijn ##.mem.46 2 0)) (##vcore.pair? (bruijn ##.%x.214 0 0))) ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k11, self)))),
      VGetArg(statics, 6-1, 0),
      statics->up->up->up->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->vars[0]);
    self->vars[1] = _VBasic_VPairP2(runtime, NULL,
      self->vars[0]);
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k13, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k15, self)))));
    }
}
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
  // (basic-block 1 1 (##.%p.208) ((##vcore.< (bruijn ##.i.45 1 1) (bruijn ##.len.207 3 1))) (if (bruijn ##.%p.208 0 0) (basic-block 1 1 (##.%x.209) ((##vcore.string-ref (bruijn ##.arg.206 4 0) (bruijn ##.i.45 2 1))) ((bruijn ##.memq.6 10 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10) (bruijn ##.%x.209 0 0) (bruijn ##.opts.41 5 2))) (basic-block 1 1 (##.%x.238) ((##vcore.cdr (bruijn ##.args.40 5 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 6 5) (bruijn ##.%k.83 2 0) (bruijn ##.%x.238 0 0)))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpLt(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 5)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44_V0k10, self)))),
      self->vars[0],
      VGetArg(statics, 5-1, 2));
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
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
  // (basic-block 2 2 (##.arg.206 ##.len.207) ((##vcore.car (bruijn ##.args.40 1 1)) (##vcore.string-length (bruijn ##.arg.206 0 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44")) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36 ##.loop.44) #f (bruijn ##.loop.44 0 0) (bruijn ##.%k.82 2 0) 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(1l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36_V10_Dloop_D44(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 11 4) (bruijn ##.%k.123 2 0) (bruijn ##.%x.125 0 0) (##string ##.string.287))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 4)), 3,
      statics->up->vars[0],
      _var0,
      VEncodePointer(&_V10_Dstring_D287.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.5 14 4) (bruijn ##.%k.123 5 0) (bruijn ##.%x.127 2 0) (bruijn ##.%x.128 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      VGetArg(statics, 5-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.244) ((##vcore.+ (bruijn ##.i.51 4 1) 1)) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24) (bruijn ##.arg.239 6 0) (bruijn ##.%x.244 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k24, self)))),
      VGetArg(statics, 6-1, 0),
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
  // (basic-block 1 1 (##.%p.241) ((##vcore.= (bruijn ##.i.51 1 1) (bruijn ##.len.240 3 1))) (if (bruijn ##.%p.241 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22) (bruijn ##.arg.239 3 0) 0 (bruijn ##.i.51 1 1)) (basic-block 2 2 (##.%x.242 ##.%p.243) ((##vcore.string-ref (bruijn ##.arg.239 4 0) (bruijn ##.i.51 2 1)) (##vcore.eq? (bruijn ##.%x.242 0 0) #\=)) (if (bruijn ##.%p.243 0 1) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23) (bruijn ##.arg.239 4 0) 0 (bruijn ##.i.51 2 1)) (basic-block 1 1 (##.%x.245) ((##vcore.+ (bruijn ##.i.51 3 1) 1)) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) #f (bruijn ##.loop.50 4 0) (bruijn ##.%k.123 3 0) (bruijn ##.%x.245 0 0)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->vars[1],
      statics->up->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k22, self)))),
      statics->up->up->vars[0],
      VEncodeInt(0l),
      statics->vars[1]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VStringRef2(runtime, NULL,
      statics->up->up->up->vars[0],
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      VEncodeChar('='));
if(VDecodeBool(
self->vars[1])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50_V0k23, self)))),
      statics->up->up->up->vars[0],
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
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.arg.239 ##.len.240) ((##vcore.car (bruijn ##.args.47 2 1)) (##vcore.string-length (bruijn ##.arg.239 0 0))) (letrec 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50")) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37 ##.loop.50) #f (bruijn ##.loop.50 0 0) (bruijn ##.%k.122 2 0) 2)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50, self))));
  {
    VClosure * _closure = VDecodeClosure(self->vars[0]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->vars[0];
    VWORD _arg1 = 
      VEncodeInt(2l);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V10_Dloop_D50(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.249) ((##vcore.cons (bruijn ##.%x.247 2 0) (bruijn ##.%x.135 1 0))) ((bruijn ##.%k.132 7 0) (bruijn ##.%r.249 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.247 ##.%x.248) ((##vcore.cons #\? (bruijn ##.%x.137 1 0)) (##vcore.cdr (bruijn ##.args.47 6 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 7 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28) (bruijn ##.%x.248 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar('?'),
      statics->vars[0]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 7-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k28, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.253) ((##vcore.cons (bruijn ##.%x.251 2 0) (bruijn ##.%x.140 1 0))) ((bruijn ##.%k.132 9 0) (bruijn ##.%r.253 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 2 2 (##.%x.251 ##.%x.252) ((##vcore.cons (bruijn ##.%x.142 1 0) #f) (##vcore.cdr (bruijn ##.args.47 8 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 9 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31) (bruijn ##.%x.252 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VEncodeBool(false));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k31, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.257) ((##vcore.cons (bruijn ##.%x.255 2 0) (bruijn ##.%x.145 1 0))) ((bruijn ##.%k.132 11 0) (bruijn ##.%r.257 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 0)), 1,
      self->vars[0]);
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
  // (basic-block 2 2 (##.%x.255 ##.%x.256) ((##vcore.cons (bruijn ##.%x.147 1 0) (bruijn ##.val.53 9 2)) (##vcore.cdr (bruijn ##.args.47 10 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 11 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34) (bruijn ##.%x.256 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->vars[0],
      VGetArg(statics, 9-1, 2));
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k34, self))));
    VWORD _arg1 = 
      self->vars[1];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
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
  // (basic-block 1 1 (##.%r.261) ((##vcore.cons (bruijn ##.%x.260 3 0) (bruijn ##.%x.150 1 0))) ((bruijn ##.%k.132 14 0) (bruijn ##.%r.261 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 1,
      self->vars[0]);
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
  // (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 14 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38) (bruijn ##.%x.151 0 0))
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 14-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k38, self))));
    VWORD _arg1 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.260) ((##vcore.cons (bruijn ##.%x.152 2 0) (bruijn ##.%x.153 1 0))) ((bruijn ##.cddr.10 17 9) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37) (bruijn ##.args.47 12 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[0],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 9)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k37, self)))),
      VGetArg(statics, 12-1, 1));
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.9 15 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36) (bruijn ##.args.47 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k36, self)))),
      VGetArg(statics, 10-1, 1));
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
  // (basic-block 1 1 (##.%x.262) ((##vcore.cons #\: (bruijn ##.%x.155 1 0))) ((bruijn ##.list.8 16 7) (bruijn ##.%k.132 10 0) (bruijn ##.%x.262 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeChar(':'),
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 7)), 2,
      VGetArg(statics, 10-1, 0),
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.254) ((##vcore.not (bruijn ##.%x.157 1 0))) (if (bruijn ##.%p.254 0 0) ((bruijn ##.caddr.4 13 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33) (bruijn ##.ass.54 5 0)) (basic-block 2 2 (##.%x.258 ##.%p.259) ((##vcore.cdr (bruijn ##.args.47 9 1)) (##vcore.pair? (bruijn ##.%x.258 0 0))) (if (bruijn ##.%p.259 0 1) ((bruijn ##.caddr.4 14 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35) (bruijn ##.ass.54 6 0)) ((bruijn ##.caddr.4 14 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39) (bruijn ##.ass.54 6 0))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k33, self)))),
      VGetArg(statics, 5-1, 0));
} else {
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k35, self)))),
      VGetArg(statics, 6-1, 0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k39, self)))),
      VGetArg(statics, 6-1, 0));
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.250) ((##vcore.not (bruijn ##.%x.158 1 0))) (if (bruijn ##.%p.250 0 0) ((bruijn ##.caddr.4 11 3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30) (bruijn ##.ass.54 3 0)) ((bruijn ##.equal?.3 11 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32) (bruijn ##.val.53 5 2) (##string ##.string.287))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k30, self)))),
      statics->up->up->vars[0]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k32, self)))),
      VGetArg(statics, 5-1, 2),
      VEncodePointer(&_V10_Dstring_D287.sym, VPOINTER_OTHER));
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%p.246) ((##vcore.not (bruijn ##.ass.54 1 0))) (if (bruijn ##.%p.246 0 0) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27) (bruijn ##.arg.52 3 1) 2) ((bruijn ##.cadr.9 9 8) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29) (bruijn ##.ass.54 1 0))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNot2(runtime, NULL,
      statics->vars[0]);
if(VDecodeBool(
self->vars[0])) {
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k27, self)))),
      statics->up->up->vars[1],
      VEncodeInt(2l));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 8)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k29, self)))),
      statics->vars[0]);
}
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.assoc.2 7 1) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26) (bruijn ##.%x.159 0 0) (bruijn ##.longs.34 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 1)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k26, self)))),
      _var0,
      statics->up->up->vars[1]);
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25) (bruijn ##.arg.52 0 1) 2)
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0k25, self)))),
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
  // (##vcore.call-with-values (bruijn ##.%k.121 0 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      _var0,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda3, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37_V0lambda4, self)))));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.182 1 0) ((bruijn ##.%k.183 0 0) (bruijn ##.%p.182 1 0)) (basic-block 3 3 (##.%x.281 ##.%x.282 ##.%r.283) ((##vcore.car (bruijn ##.args.55 5 1)) (##vcore.string-length (bruijn ##.%x.281 0 0)) (##vcore.< (bruijn ##.%x.282 0 1) 2)) ((bruijn ##.%k.183 1 0) (bruijn ##.%r.283 0 2))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      statics->vars[0]);
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCmpLt(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[2]);
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.268) ((##vcore.cons (bruijn ##.%x.266 2 1) (bruijn ##.%x.164 1 0))) ((bruijn ##.%k.160 7 0) (bruijn ##.%r.268 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 1 1 (##.%r.274) ((##vcore.cons #f (bruijn ##.e.56 1 1))) ((bruijn ##.%k.169 1 0) (bruijn ##.%r.274 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(false),
      statics->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%r.280) ((##vcore.cons (bruijn ##.%x.278 2 1) (bruijn ##.%x.175 1 0))) ((bruijn ##.%k.160 12 0) (bruijn ##.%r.280 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->vars[1],
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 0)), 1,
      self->vars[0]);
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.173 0 0) (##qualified-call (vanity compiler getopt getopt ##.getopt-short.36) #f (bruijn ##.getopt-short.36 10 3) (bruijn ##.%k.160 9 0) (bruijn ##.args.55 9 1) (bruijn ##.opts.35 10 2)) (basic-block 3 3 (##.%x.277 ##.%x.278 ##.%x.279) ((##vcore.car (bruijn ##.args.55 10 1)) (##vcore.cons #t (bruijn ##.%x.277 0 0)) (##vcore.cdr (bruijn ##.args.55 10 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 11 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47) (bruijn ##.%x.279 0 2))))
if(VDecodeBool(
_var0)) {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 10-1, 3));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 9-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 9-1, 1);
    VWORD _arg2 = 
      VGetArg(statics, 10-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 11-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k47, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.167 0 0) (basic-block 3 3 (##.%x.270 ##.%x.271 ##.%p.272) ((##vcore.car (bruijn ##.args.55 8 1)) (##vcore.string-length (bruijn ##.%x.270 0 0)) (##vcore.= (bruijn ##.%x.271 0 1) 2)) (if (bruijn ##.%p.272 0 2) (basic-block 1 1 (##.%x.273) ((##vcore.cdr (bruijn ##.args.55 9 1))) ((bruijn ##.map.1 14 0) (bruijn ##.%k.160 9 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5) (bruijn ##.%x.273 0 0))) (##qualified-call (vanity compiler getopt getopt ##.getopt-long.37) #f (bruijn ##.getopt-long.37 9 4) (bruijn ##.%k.160 8 0) (bruijn ##.args.55 8 1)))) (basic-block 2 2 (##.%x.275 ##.%x.276) ((##vcore.car (bruijn ##.args.55 8 1)) (##vcore.string-ref (bruijn ##.%x.275 0 0) 0)) ((bruijn ##.equal?.3 13 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46) (bruijn ##.%x.276 0 1) #\-)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VStringLength2(runtime, NULL,
      self->vars[0]);
    self->vars[2] = _VBasic_VCmpEq(runtime, NULL,
      self->vars[1],
      VEncodeInt(2l));
if(VDecodeBool(
self->vars[2])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 0)), 3,
      VGetArg(statics, 9-1, 0),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0lambda5, self)))),
      self->vars[0]);
    }
} else {
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 9-1, 4));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      VGetArg(statics, 8-1, 0);
    VWORD _arg1 = 
      VGetArg(statics, 8-1, 1);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VStringRef2(runtime, NULL,
      self->vars[0],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k46, self)))),
      self->vars[1],
      VEncodeChar('-'));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.equal?.3 11 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45) (bruijn ##.%x.180 0 0) (##string ##.string.288))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 11-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k45, self)))),
      _var0,
      VEncodePointer(&_V10_Dstring_D288.sym, VPOINTER_OTHER));
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.162 0 0) (basic-block 3 3 (##.%x.265 ##.%x.266 ##.%x.267) ((##vcore.car (bruijn ##.args.55 5 1)) (##vcore.cons #t (bruijn ##.%x.265 0 0)) (##vcore.cdr (bruijn ##.args.55 5 1))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 6 5) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43) (bruijn ##.%x.267 0 2))) (basic-block 1 1 (##.%x.269) ((##vcore.car (bruijn ##.args.55 5 1))) (##vcore.substring (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44) (bruijn ##.%x.269 0 0) 0 2)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      VEncodeBool(true),
      self->vars[0]);
    self->vars[2] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
  {
    VClosure * _closure = VDecodeClosure(VGetArg(statics, 6-1, 5));
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k43, self))));
    VWORD _arg1 = 
      self->vars[2];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
    VCallFuncWithGC(runtime, (VFunc)VSubstring2, 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k44, self)))),
      self->vars[0],
      VEncodeInt(0l),
      VEncodeInt(2l));
    }
}
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k41, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k42, self)))));
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
  // (basic-block 1 1 (##.%p.263) ((##vcore.null? (bruijn ##.args.55 1 1))) (if (bruijn ##.%p.263 0 0) ((bruijn ##.%k.160 1 0) '()) (basic-block 1 1 (##.%x.264) ((##vcore.car (bruijn ##.args.55 2 1))) ((bruijn ##.equal?.3 7 2) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40) (bruijn ##.%x.264 0 0) (##string ##.string.289)))))
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
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->up->vars[1]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 2)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38_V0k40, self)))),
      self->vars[0],
      VEncodePointer(&_V10_Dstring_D289.sym, VPOINTER_OTHER));
    }
}
    }
}
static void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%x.284) ((##vcore.cdr (bruijn ##.args.31 4 2))) (##qualified-call (vanity compiler getopt getopt ##.iter.38) #f (bruijn ##.iter.38 2 5) (bruijn ##.%k.59 4 0) (bruijn ##.%x.284 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
  {
    VClosure * _closure = VDecodeClosure(statics->up->vars[5]);
   VEnv * _closure_env = _closure->env;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, _closure, 2, _arg0, _arg1);
    } else {
       _V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38(runtime, _closure_env, 2, _arg0, _arg1);
    }
  }
    }
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49) (bruijn ##.longs.34 1 1) (bruijn ##.%x.188 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k49, self)))),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (letrec 6 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Ddecode__longopt_D33") #f (bruijn ##.%x.81 1 0) (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__short_D36") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Dgetopt__long_D37") (close "_V50_V0vanity_V0compiler_V0getopt_V0getopt_V10_Diter_D38")) ((bruijn ##.map.1 4 0) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48) (bruijn ##.decode-longopt.33 0 0) (bruijn ##.longopts.32 2 3)))
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
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[0]), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k48, self)))),
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
  // ((bruijn ##.string->list.7 2 6) (close _V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3) (bruijn ##.optstring.30 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[6]), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt_V0k3, self)))),
      _var1);
}
static void _V0vanity_V0compiler_V0getopt_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9) {
 if(argc != 10) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0lambda2, got ~D~N"
  "-- expected 10~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[10]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 10, 10, statics);
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
  // (##letrec (vanity compiler getopt) 1 ((close "_V50_V0vanity_V0compiler_V0getopt_V0getopt" (vanity compiler getopt))) (basic-block 2 2 (##.%x.285 ##.%r.286) ((##vcore.cons 'getopt (bruijn ##.getopt.29 1 0)) (##vcore.cons (bruijn ##.%x.285 0 0) '())) ((bruijn ##.%k.58 5 0) (bruijn ##.%r.286 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0getopt = self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0getopt_V0getopt, _V60_V0vanity_V0compiler_V0getopt))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0getopt_V20", &_V60_V0vanity_V0compiler_V0getopt);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0getopt,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 0)), 1,
      self->vars[1]);
    }
    }
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
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0getopt_V20_V0lambda2) (##string ##.string.290) (bruijn ##.%x.190 0 0) 'map 'assoc 'equal? 'caddr 'values 'memq 'string->list 'list 'cadr 'cddr)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 13,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D290.sym, VPOINTER_OTHER),
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
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0getopt_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0getopt_V20_V0k2) (bruijn ##.%x.191 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k2, self)))),
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
  // (##vcore.load-library (close _V0vanity_V0compiler_V0getopt_V20_V0k1) (##string ##.string.291))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0getopt_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D291.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0getopt_V20 = (VFunc)_V0vanity_V0compiler_V0getopt_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
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
  _V0getopt = VEncodePointer(VInternSymbol(1697444785, &_VW_V0getopt.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
