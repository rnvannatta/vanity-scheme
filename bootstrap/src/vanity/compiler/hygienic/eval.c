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

VEnv * _V60_V0vanity_V0compiler_V0hygienic_V0eval;

static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D158 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D157 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[44]; } _V10_Dstring_D156 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 44 }, "_V0vanity_V0compiler_V0hygienic_V0types_V20" };
static struct { VBlob sym; char bytes[52]; } _V10_Dstring_D155 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 52 }, "_V0vanity_V0compiler_V0hygienic_V0global__forms_V20" };
VWEAK VWORD _V0expansion__timed__out_Q;VWEAK struct { VBlob sym; char bytes[21]; } _VW_V0expansion__timed__out_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 21 }, "expansion-timed-out\?" };
VWEAK VWORD _V0assoc;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0assoc = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "assoc" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0for__each;VWEAK struct { VBlob sym; char bytes[9]; } _VW_V0for__each = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 9 }, "for-each" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0cadddr;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0cadddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "cadddr" };
VWEAK VWORD _V0caddr;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0caddr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "caddr" };
VWEAK VWORD _V0cadr;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cadr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cadr" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
static struct { VBlob sym; char bytes[43]; } _V10_Dstring_D154 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 43 }, "_V0vanity_V0compiler_V0hygienic_V0eval_V20" };
VWEAK VWORD _V0eval;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0eval = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "eval" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D153 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "too few args to lambda" };
static struct { VBlob sym; char bytes[24]; } _V10_Dstring_D152 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 24 }, "too many args to lambda" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static struct { VBlob sym; char bytes[17]; } _V10_Dstring_D151 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 17 }, "eval: stray null" };
static struct { VBlob sym; char bytes[23]; } _V10_Dstring_D150 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 23 }, "eval: symbol not found" };
static struct { VBlob sym; char bytes[55]; } _V10_Dstring_D149 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 55 }, "macro expansion timed out (inside a macro transformer)" };
VWEAK VWORD _V40VMultiImport;
VWEAK VClosure _VW_V40VMultiImport = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VMultiImport, NULL };
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _var0, _var1, _var2, _var3);
V_DECLARE_FUNC(_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _var0, _var1, _var2);
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.111 1 0) ((bruijn ##.%k.92 0 0) 0) (basic-block 1 1 (##.%r.134) ((##vcore.+ (bruijn ##.eval-poll.24 4 1) 1)) ((bruijn ##.%k.92 1 0) (bruijn ##.%r.134 0 0))))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeInt(0l));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VAdd2(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(1l));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[0]);
    }
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.112 1 0) ((bruijn ##.expansion-timed-out?.9 6 8) (bruijn ##.%k.89 0 0)) ((bruijn ##.%k.89 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 6-1, 8)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.%p.86 1 0) ((bruijn ##.error.7 7 6) (bruijn ##.%k.87 0 0) (##string ##.string.149)) ((bruijn ##.%k.87 0 0) #f))
if(VDecodeBool(
statics->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 6)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D149.sym, VPOINTER_OTHER));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.lookup.28 0 0) (basic-block 1 1 (##.%r.114) ((##vcore.cdr (bruijn ##.lookup.28 1 0))) ((bruijn ##.%k.44 7 0) (bruijn ##.%r.114 0 0))) ((bruijn ##.error.7 8 6) (bruijn ##.%k.44 6 0) (##string ##.string.150) (bruijn ##.expr.26 6 1)))
if(VDecodeBool(
_var0)) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->vars[0]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      self->vars[0]);
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 3,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D150.sym, VPOINTER_OTHER),
      VGetArg(statics, 6-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 14 0) (bruijn ##.%k.50 3 0) (bruijn ##.%x.51 2 0) (bruijn ##.%x.52 0 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->up->up->vars[0];
    VWORD _arg1 = 
      statics->up->vars[0];
    VWORD _arg2 = 
      _var0;
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval bind-formals) #t (bruijn ##.bind-formals.25 13 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16) (bruijn ##.%x.53 0 0) (bruijn ##.args.29 2 1) (bruijn ##.env.27 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k16, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->vars[1];
    VWORD _arg3 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.2 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15) (bruijn ##.expr.26 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k15, self)))),
      VGetArg(statics, 11-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, ...) {
 if(argc < 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda3, got ~D~N"
  "-- expected 1 or more~N"
  , argc);
 }
 VWORD _varargs = VNULL;
 V_GATHER_VARARGS_VARIADIC(&_varargs, 1, argc, _var0);
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _varargs;
  // ((bruijn ##.caddr.3 12 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14) (bruijn ##.expr.26 10 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k14, self)))),
      VGetArg(statics, 10-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 17 0) (bruijn ##.%k.44 16 0) (bruijn ##.%x.55 0 0) (bruijn ##.env.31 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 16-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.3 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23) (bruijn ##.expr.26 15 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k23, self)))),
      VGetArg(statics, 15-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.%k.56 0 0) (bruijn ##.binding.33 0 1) (bruijn ##.val.34 0 2))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      _var0,
      _var1,
      _var2);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.for-each.6 17 5) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4) (bruijn ##.bindings.30 3 0) (bruijn ##.vals.32 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 5)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k22, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda4, self)))),
      statics->up->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 17 0) (bruijn ##.%k.57 1 0) (bruijn ##.%x.58 0 0) (bruijn ##.env.31 3 0))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->vars[0];
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      statics->up->up->vars[0];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // ((bruijn ##.cadr.2 17 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24) (bruijn ##.pair.35 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k24, self)))),
      _var1);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.1 16 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5) (bruijn ##.%x.59 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 16-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k21, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda5, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.cadr.2 15 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20) (bruijn ##.expr.26 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k20, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.append.5 14 4) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19) (bruijn ##.bindings.30 0 0) (bruijn ##.env.27 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 4)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k19, self)))),
      _var0,
      VGetArg(statics, 12-1, 2));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[2]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 2, 2, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  // (basic-block 2 2 (##.%x.124 ##.%r.125) ((##vcore.car (bruijn ##.pair.36 1 1)) (##vcore.cons (bruijn ##.%x.124 0 0) #void)) ((bruijn ##.%k.60 1 0) (bruijn ##.%r.125 0 1)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      statics->vars[1]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VVOID);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->vars[0]), 1,
      self->vars[1]);
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((bruijn ##.map.1 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6) (bruijn ##.%x.62 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k18, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda6, self)))),
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 15 0) (bruijn ##.%k.44 14 0) (bruijn ##.%x.65 0 0) (bruijn ##.env.27 14 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 15 0) (bruijn ##.%k.44 14 0) (bruijn ##.%x.66 0 0) (bruijn ##.env.27 14 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.%p.64 0 0) ((bruijn ##.caddr.3 15 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27) (bruijn ##.expr.26 13 1)) ((bruijn ##.cadddr.4 15 3) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28) (bruijn ##.expr.26 13 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k27, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 3)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k28, self)))),
      VGetArg(statics, 13-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 13 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26) (bruijn ##.%x.67 0 0) (bruijn ##.env.27 12 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k26, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 12-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k31(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 15 0) (bruijn ##.%k.44 14 0) (bruijn ##.%x.69 0 0) (bruijn ##.env.27 14 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 14-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k30(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // ((bruijn ##.caddr.3 15 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k31) (bruijn ##.expr.26 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k31, self)))),
      VGetArg(statics, 13-1, 1));
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 14 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k30) (bruijn ##.%x.70 0 0) (bruijn ##.env.27 13 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k30, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 13-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k34(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 17 0) (bruijn ##.%k.44 16 0) (bruijn ##.%x.72 0 0) (bruijn ##.env.27 16 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      VGetArg(statics, 16-1, 0);
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 16-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k33(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (if (bruijn ##.ret.37 0 0) ((bruijn ##.%k.44 15 0) (bruijn ##.ret.37 0 0)) ((bruijn ##.caddr.3 17 2) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k34) (bruijn ##.expr.26 15 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 0)), 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 17-1, 2)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k34, self)))),
      VGetArg(statics, 15-1, 1));
}
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k32(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 15 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k33) (bruijn ##.%x.73 0 0) (bruijn ##.env.27 14 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k33, self))));
    VWORD _arg1 = 
      _var0;
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k36(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.apply (bruijn ##.%k.44 17 0) (bruijn ##.%x.74 2 0) (bruijn ##.%x.75 0 0))
    VCallFuncWithGC(runtime, (VFunc)VApply2, 3,
      VGetArg(statics, 17-1, 0),
      statics->up->vars[0],
      _var0);
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 18 0) (bruijn ##.%k.76 0 0) (bruijn ##.e.38 0 1) (bruijn ##.env.27 17 2))
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      _var0;
    VWORD _arg1 = 
      _var1;
    VWORD _arg2 = 
      VGetArg(statics, 17-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k35(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (basic-block 1 1 (##.%x.133) ((##vcore.cdr (bruijn ##.expr.26 16 1))) ((bruijn ##.map.1 18 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k36) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7) (bruijn ##.%x.133 0 0)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      VGetArg(statics, 16-1, 1));
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 18-1, 0)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k36, self)))),
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda7, self)))),
      self->vars[0]);
    }
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.113) ((##vcore.symbol? (bruijn ##.expr.26 5 1))) (if (bruijn ##.%p.113 0 0) ((bruijn ##.assoc.8 7 7) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13) (bruijn ##.expr.26 5 1) (bruijn ##.env.27 5 2)) (basic-block 1 1 (##.%p.115) ((##vcore.null? (bruijn ##.expr.26 6 1))) (if (bruijn ##.%p.115 0 0) ((bruijn ##.error.7 8 6) (bruijn ##.%k.44 6 0) (##string ##.string.151)) (basic-block 2 2 (##.%x.116 ##.%p.117) ((##vcore.pair? (bruijn ##.expr.26 7 1)) (##vcore.not (bruijn ##.%x.116 0 0))) (if (bruijn ##.%p.117 0 1) ((bruijn ##.%k.44 7 0) (bruijn ##.expr.26 7 1)) (basic-block 2 2 (##.%x.118 ##.%p.119) ((##vcore.car (bruijn ##.expr.26 8 1)) (##vcore.eq? (bruijn ##.%x.118 0 0) 'quote)) (if (bruijn ##.%p.119 0 1) ((bruijn ##.cadr.2 10 1) (bruijn ##.%k.44 8 0) (bruijn ##.expr.26 8 1)) (basic-block 2 2 (##.%x.120 ##.%p.121) ((##vcore.car (bruijn ##.expr.26 9 1)) (##vcore.eq? (bruijn ##.%x.120 0 0) 'lambda)) (if (bruijn ##.%p.121 0 1) ((bruijn ##.%k.44 9 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda3)) (basic-block 2 2 (##.%x.122 ##.%p.123) ((##vcore.car (bruijn ##.expr.26 10 1)) (##vcore.eq? (bruijn ##.%x.122 0 0) 'letrec)) (if (bruijn ##.%p.123 0 1) ((bruijn ##.cadr.2 12 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17) (bruijn ##.expr.26 10 1)) (basic-block 2 2 (##.%x.126 ##.%p.127) ((##vcore.car (bruijn ##.expr.26 11 1)) (##vcore.eq? (bruijn ##.%x.126 0 0) 'if)) (if (bruijn ##.%p.127 0 1) ((bruijn ##.cadr.2 13 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25) (bruijn ##.expr.26 11 1)) (basic-block 2 2 (##.%x.128 ##.%p.129) ((##vcore.car (bruijn ##.expr.26 12 1)) (##vcore.eq? (bruijn ##.%x.128 0 0) 'begin)) (if (bruijn ##.%p.129 0 1) ((bruijn ##.cadr.2 14 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29) (bruijn ##.expr.26 12 1)) (basic-block 2 2 (##.%x.130 ##.%p.131) ((##vcore.car (bruijn ##.expr.26 13 1)) (##vcore.eq? (bruijn ##.%x.130 0 0) 'or)) (if (bruijn ##.%p.131 0 1) ((bruijn ##.cadr.2 15 1) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k32) (bruijn ##.expr.26 13 1)) (basic-block 1 1 (##.%x.132) ((##vcore.car (bruijn ##.expr.26 14 1))) (##qualified-call (vanity compiler hygienic eval eval) #t (bruijn ##.eval.23 15 0) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k35) (bruijn ##.%x.132 0 0) (bruijn ##.env.27 14 2)))))))))))))))))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VSymbolP2(runtime, NULL,
      VGetArg(statics, 5-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 7)), 3,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k13, self)))),
      VGetArg(statics, 5-1, 1),
      VGetArg(statics, 5-1, 2));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      VGetArg(statics, 6-1, 1));
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 6)), 2,
      VGetArg(statics, 6-1, 0),
      VEncodePointer(&_V10_Dstring_D151.sym, VPOINTER_OTHER));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      VGetArg(statics, 7-1, 1));
    self->vars[1] = _VBasic_VNot2(runtime, NULL,
      self->vars[0]);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 7-1, 0)), 1,
      VGetArg(statics, 7-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 8-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0quote);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 10-1, 1)), 2,
      VGetArg(statics, 8-1, 0),
      VGetArg(statics, 8-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 9-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0lambda);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 9-1, 0)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0lambda3, self)))));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 10-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0letrec);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 12-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k17, self)))),
      VGetArg(statics, 10-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 11-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0if);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 13-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k25, self)))),
      VGetArg(statics, 11-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 12-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0begin);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 14-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k29, self)))),
      VGetArg(statics, 12-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 13-1, 1));
    self->vars[1] = _VBasic_VEq2(runtime, NULL,
      self->vars[0],
      _V0or);
if(VDecodeBool(
self->vars[1])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 15-1, 1)), 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k32, self)))),
      VGetArg(statics, 13-1, 1));
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCar2(runtime, NULL,
      VGetArg(statics, 14-1, 1));
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k35, self))));
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      VGetArg(statics, 14-1, 2);
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 3, _arg0, _arg1, _arg2);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(runtime, _closure_env, 3, _arg0, _arg1, _arg2);
    }
  }
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k11, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k12, self)))));
}
static void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8(VRuntime * runtime, VEnv * statics, int argc) {
  VEnv * self = statics;
  statics = self ? self->up : NULL;
  // (basic-block 1 1 (##.%p.112) ((##vcore.= (bruijn ##.eval-poll.24 4 1) 0)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpEq(runtime, NULL,
      statics->up->up->up->vars[1],
      VEncodeInt(0l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k9, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k10, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (set! (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8) (bruijn ##.eval-poll.24 3 1) (bruijn ##.%x.90 0 0))
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)VSetEnvVar2, self)), 4,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k8, self)))),
      VEncodeInt(3l), VEncodeInt(1l),
      _var0
    );
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[3]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 3, 3, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  // (basic-block 1 1 (##.%p.111) ((##vcore.>= (bruijn ##.eval-poll.24 2 1) 1023)) ((close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6) (close _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7)))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VCmpGe(runtime, NULL,
      statics->up->vars[1],
      VEncodeInt(1023l));
    VCallDecodedWithGC(runtime, V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k6, self)), 1,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval_V0k7, self)))));
    }
}
void _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, got ~D~N"
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
  // (basic-block 1 1 (##.%p.135) ((##vcore.null? (bruijn ##.formals.39 1 1))) (if (bruijn ##.%p.135 0 0) (basic-block 1 1 (##.%p.136) ((##vcore.null? (bruijn ##.args.40 2 2))) (if (bruijn ##.%p.136 0 0) ((bruijn ##.%k.93 2 0) (bruijn ##.env.41 2 3)) ((bruijn ##.error.7 4 6) (bruijn ##.%k.93 2 0) (##string ##.string.152)))) (basic-block 1 1 (##.%p.137) ((##vcore.pair? (bruijn ##.formals.39 2 1))) (if (bruijn ##.%p.137 0 0) (basic-block 1 1 (##.%p.138) ((##vcore.pair? (bruijn ##.args.40 3 2))) (if (bruijn ##.%p.138 0 0) (basic-block 6 6 (##.%x.139 ##.%x.140 ##.%x.141 ##.%x.142 ##.%x.143 ##.%x.144) ((##vcore.cdr (bruijn ##.formals.39 4 1)) (##vcore.cdr (bruijn ##.args.40 4 2)) (##vcore.car (bruijn ##.formals.39 4 1)) (##vcore.car (bruijn ##.args.40 4 2)) (##vcore.cons (bruijn ##.%x.141 0 2) (bruijn ##.%x.142 0 3)) (##vcore.cons (bruijn ##.%x.143 0 4) (bruijn ##.env.41 4 3))) (##qualified-call (vanity compiler hygienic eval bind-formals) #t (bruijn ##.bind-formals.25 5 2) (bruijn ##.%k.93 4 0) (bruijn ##.%x.139 0 0) (bruijn ##.%x.140 0 1) (bruijn ##.%x.144 0 5))) ((bruijn ##.error.7 5 6) (bruijn ##.%k.93 3 0) (##string ##.string.153)))) (basic-block 2 2 (##.%x.145 ##.%r.146) ((##vcore.cons (bruijn ##.formals.39 3 1) (bruijn ##.args.40 3 2)) (##vcore.cons (bruijn ##.%x.145 0 0) (bruijn ##.env.41 3 3))) ((bruijn ##.%k.93 3 0) (bruijn ##.%r.146 0 1)))))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VNullP2(runtime, NULL,
      statics->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->vars[0]), 1,
      statics->up->vars[3]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->up->vars[6]), 2,
      statics->up->vars[0],
      VEncodePointer(&_V10_Dstring_D152.sym, VPOINTER_OTHER));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->vars[1]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[1]; } container;
    self = &container.self;
    VInitEnv(self, 1, 1, statics);
    self->vars[0] = _VBasic_VPairP2(runtime, NULL,
      statics->up->up->vars[2]);
if(VDecodeBool(
self->vars[0])) {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[6]; } container;
    self = &container.self;
    VInitEnv(self, 6, 6, statics);
    self->vars[0] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[1] = _VBasic_VCdr2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[2] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[1]);
    self->vars[3] = _VBasic_VCar2(runtime, NULL,
      statics->up->up->up->vars[2]);
    self->vars[4] = _VBasic_VCons2(runtime, NULL,
      self->vars[2],
      self->vars[3]);
    self->vars[5] = _VBasic_VCons2(runtime, NULL,
      self->vars[4],
      statics->up->up->up->vars[3]);
  {
   VEnv * _closure_env = _V60_V0vanity_V0compiler_V0hygienic_V0eval;
    VWORD _arg0 = 
      statics->up->up->up->vars[0];
    VWORD _arg1 = 
      self->vars[0];
    VWORD _arg2 = 
      self->vars[1];
    VWORD _arg3 = 
      self->vars[5];
    if(V_UNLIKELY(VStackOverflow(runtime))){
      VGarbageCollect2Closure(runtime, (VClosure[]){VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval)}, 4, _arg0, _arg1, _arg2, _arg3);
    } else {
       _V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals(runtime, _closure_env, 4, _arg0, _arg1, _arg2, _arg3);
    }
  }
    }
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 5-1, 6)), 2,
      statics->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D153.sym, VPOINTER_OTHER));
}
    }
} else {
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      statics->up->up->vars[1],
      statics->up->up->vars[2]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      statics->up->up->vars[3]);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, statics->up->up->vars[0]), 1,
      self->vars[1]);
    }
}
    }
}
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8) {
 if(argc != 9) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, got ~D~N"
  "-- expected 9~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[9]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 9, 9, statics);
  self->vars[0] = _var0;
  self->vars[1] = _var1;
  self->vars[2] = _var2;
  self->vars[3] = _var3;
  self->vars[4] = _var4;
  self->vars[5] = _var5;
  self->vars[6] = _var6;
  self->vars[7] = _var7;
  self->vars[8] = _var8;
  // (##letrec (vanity compiler hygienic eval) 3 ((close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval" (vanity compiler hygienic eval)) 0 (close "_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals" (vanity compiler hygienic eval))) (basic-block 2 2 (##.%x.147 ##.%r.148) ((##vcore.cons 'eval (bruijn ##.eval.23 1 0)) (##vcore.cons (bruijn ##.%x.147 0 0) '())) ((bruijn ##.%k.43 8 0) (bruijn ##.%r.148 0 1))))
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[3]; } container;
    self = &container.self;
    _V60_V0vanity_V0compiler_V0hygienic_V0eval = self;
    VInitEnv(self, 3, 3, statics);
    self->vars[0] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0eval, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    self->vars[1] = VEncodeInt(0l);
    self->vars[2] = (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V50_V0vanity_V0compiler_V0hygienic_V0eval_V0bind__formals, _V60_V0vanity_V0compiler_V0hygienic_V0eval))));
    VRegisterStaticEnv("_V0vanity_V0compiler_V0hygienic_V0eval_V20", &_V60_V0vanity_V0compiler_V0hygienic_V0eval);
    {
    VEnv * statics = self;
    struct { VEnv self; VWORD argv[2]; } container;
    self = &container.self;
    VInitEnv(self, 2, 2, statics);
    self->vars[0] = _VBasic_VCons2(runtime, NULL,
      _V0eval,
      statics->vars[0]);
    self->vars[1] = _VBasic_VCons2(runtime, NULL,
      self->vars[0],
      VNULL);
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(statics, 8-1, 0)), 1,
      self->vars[1]);
    }
    }
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // ((##intrinsic "VMultiImport") (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2) (##string ##.string.154) (bruijn ##.%x.106 0 0) 'map 'cadr 'caddr 'cadddr 'append 'for-each 'error 'assoc 'expansion-timed-out?)
    VCallFuncWithGC(runtime, (VFunc)VMultiImport, 12,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda2, self)))),
      VEncodePointer(&_V10_Dstring_D154.sym, VPOINTER_OTHER),
      _var0,
      _V0map,
      _V0cadr,
      _V0caddr,
      _V0cadddr,
      _V0append,
      _V0for__each,
      _V0error,
      _V0assoc,
      _V0expansion__timed__out_Q);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.vector (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5) (bruijn ##.%x.107 3 0) (bruijn ##.%x.108 2 0) (bruijn ##.%x.109 1 0) (bruijn ##.%x.110 0 0))
    VCallFuncWithGC(runtime, (VFunc)VCreateVector, 5,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k5, self)))),
      statics->up->up->vars[0],
      statics->up->vars[0],
      statics->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4) (##string ##.string.155))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k4, self)))),
      VEncodePointer(&_V10_Dstring_D155.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3) (##string ##.string.156))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k3, self)))),
      VEncodePointer(&_V10_Dstring_D156.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2) (##string ##.string.157))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k2, self)))),
      VEncodePointer(&_V10_Dstring_D157.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1(VRuntime * runtime, VEnv * statics, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv self; VWORD argv[1]; } container;
  VEnv * self = &container.self;
  VInitEnv(self, 1, 1, statics);
  self->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1) (##string ##.string.158))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      (VEncodeClosure(V_EDEN_INIT(runtime, VClosure, VMakeClosure2((VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0k1, self)))),
      VEncodePointer(&_V10_Dstring_D158.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0hygienic_V0eval_V20 = (VFunc)_V0vanity_V0compiler_V0hygienic_V0eval_V20_V0lambda1;
static __attribute__((constructor)) void VDllMain1() {
  _V0expansion__timed__out_Q = VEncodePointer(VInternSymbol(281159716, &_VW_V0expansion__timed__out_Q.sym), VPOINTER_OTHER);
  _V0assoc = VEncodePointer(VInternSymbol(760827368, &_VW_V0assoc.sym), VPOINTER_OTHER);
  _V0error = VEncodePointer(VInternSymbol(147890691, &_VW_V0error.sym), VPOINTER_OTHER);
  _V0for__each = VEncodePointer(VInternSymbol(1903158638, &_VW_V0for__each.sym), VPOINTER_OTHER);
  _V0append = VEncodePointer(VInternSymbol(-700471979, &_VW_V0append.sym), VPOINTER_OTHER);
  _V0cadddr = VEncodePointer(VInternSymbol(-448763463, &_VW_V0cadddr.sym), VPOINTER_OTHER);
  _V0caddr = VEncodePointer(VInternSymbol(396082650, &_VW_V0caddr.sym), VPOINTER_OTHER);
  _V0cadr = VEncodePointer(VInternSymbol(137264287, &_VW_V0cadr.sym), VPOINTER_OTHER);
  _V0map = VEncodePointer(VInternSymbol(-1940887657, &_VW_V0map.sym), VPOINTER_OTHER);
  _V0eval = VEncodePointer(VInternSymbol(-2078907041, &_VW_V0eval.sym), VPOINTER_OTHER);
  _V0or = VEncodePointer(VInternSymbol(2016919801, &_VW_V0or.sym), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VInternSymbol(1265111139, &_VW_V0begin.sym), VPOINTER_OTHER);
  _V0if = VEncodePointer(VInternSymbol(-1008835161, &_VW_V0if.sym), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VInternSymbol(1712405540, &_VW_V0letrec.sym), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VInternSymbol(1054233532, &_VW_V0lambda.sym), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VInternSymbol(-278310088, &_VW_V0quote.sym), VPOINTER_OTHER);
  _V40VMultiImport = VEncodePointer(VLookupConstant("_V40VMultiImport", &_VW_V40VMultiImport), VPOINTER_CLOSURE);
}
