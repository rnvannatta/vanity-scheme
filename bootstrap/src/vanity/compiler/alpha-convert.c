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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D616 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D615 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0list_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D614 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0utils_V20" };
static struct { VBlob sym; char bytes[33]; } _V10_Dstring_D613 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 33 }, "_V0vanity_V0compiler_V0match_V20" };
static struct { VBlob sym; char bytes[37]; } _V10_Dstring_D612 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 37 }, "_V0vanity_V0compiler_V0variables_V20" };
static struct { VBlob sym; char bytes[27]; } _V10_Dstring_D611 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 27 }, "_V0vanity_V0intrinsics_V20" };
static struct { VBlob sym; char bytes[42]; } _V10_Dstring_D610 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 42 }, "_V0vanity_V0compiler_V0alpha__convert_V20" };
VWEAK VWORD _V0reverse;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0reverse = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "reverse" };
VWEAK VWORD _V0map;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0map = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "map" };
VWEAK VWORD _V0gensym;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0gensym = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "gensym" };
VWEAK VWORD _V0cons;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0cons = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "cons" };
VWEAK VWORD _V0list;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0list = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "list" };
VWEAK VWORD _V0append;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0append = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "append" };
VWEAK VWORD _V0values;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0values = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "values" };
VWEAK VWORD _V0symbol_Q;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0symbol_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "symbol\?" };
VWEAK VWORD _V0compiler__error;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V0compiler__error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "compiler-error" };
VWEAK VWORD _V0lookup__intrinsic;VWEAK struct { VBlob sym; char bytes[17]; } _VW_V0lookup__intrinsic = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 17 }, "lookup-intrinsic" };
VWEAK VWORD _V0pair_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0pair_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "pair\?" };
VWEAK VWORD _V0car;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0car = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "car" };
VWEAK VWORD _V0cdr;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0cdr = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "cdr" };
VWEAK VWORD _V0null_Q;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0null_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "null\?" };
VWEAK VWORD _V0error;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0error = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "error" };
VWEAK VWORD _V0assv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0assv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "assv" };
VWEAK VWORD _V0not;VWEAK struct { VBlob sym; char bytes[4]; } _VW_V0not = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 4 }, "not" };
VWEAK VWORD _V0memv;VWEAK struct { VBlob sym; char bytes[5]; } _VW_V0memv = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 5 }, "memv" };
VWEAK VWORD _V0equal_Q;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0equal_Q = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "equal\?" };
VWEAK VWORD _V0alpha__convert;VWEAK struct { VBlob sym; char bytes[14]; } _VW_V0alpha__convert = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 14 }, "alpha-convert" };
VWEAK VWORD _V0define__constant;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V0define__constant = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "define-constant" };
VWEAK VWORD _V10vcore_Ddeclare;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.declare" };
VWEAK VWORD _V10foreign_Ddeclare;VWEAK struct { VBlob sym; char bytes[18]; } _VW_V10foreign_Ddeclare = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 18 }, "##foreign.declare" };
static struct { VBlob sym; char bytes[20]; } _V10_Dstring_D609 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 20 }, "stray () in program" };
VWEAK VWORD _V0define;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0define = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "define" };
static struct { VBlob sym; char bytes[26]; } _V10_Dstring_D608 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 26 }, "match statement exhausted" };
VWEAK VWORD _V0letrec;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0letrec = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "letrec" };
VWEAK VWORD _V0or;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0or = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "or" };
VWEAK VWORD _V0if;VWEAK struct { VBlob sym; char bytes[3]; } _VW_V0if = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 3 }, "if" };
VWEAK VWORD _V0begin;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0begin = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "begin" };
VWEAK VWORD _V10foreign_Dfunction;VWEAK struct { VBlob sym; char bytes[19]; } _VW_V10foreign_Dfunction = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 19 }, "##foreign.function" };
VWEAK VWORD _V0case__lambda;VWEAK struct { VBlob sym; char bytes[12]; } _VW_V0case__lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 12 }, "case-lambda" };
VWEAK VWORD _V0lambda;VWEAK struct { VBlob sym; char bytes[7]; } _VW_V0lambda = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 7 }, "lambda" };
VWEAK VWORD _V0quote;VWEAK struct { VBlob sym; char bytes[6]; } _VW_V0quote = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 6 }, "quote" };
static __attribute__((constructor)) void VDllMain1() {
  _V0reverse = VEncodePointer(VLookupConstant("_V0reverse", &_VW_V0reverse), VPOINTER_OTHER);
  _V0map = VEncodePointer(VLookupConstant("_V0map", &_VW_V0map), VPOINTER_OTHER);
  _V0gensym = VEncodePointer(VLookupConstant("_V0gensym", &_VW_V0gensym), VPOINTER_OTHER);
  _V0cons = VEncodePointer(VLookupConstant("_V0cons", &_VW_V0cons), VPOINTER_OTHER);
  _V0list = VEncodePointer(VLookupConstant("_V0list", &_VW_V0list), VPOINTER_OTHER);
  _V0append = VEncodePointer(VLookupConstant("_V0append", &_VW_V0append), VPOINTER_OTHER);
  _V0values = VEncodePointer(VLookupConstant("_V0values", &_VW_V0values), VPOINTER_OTHER);
  _V0symbol_Q = VEncodePointer(VLookupConstant("_V0symbol_Q", &_VW_V0symbol_Q), VPOINTER_OTHER);
  _V0compiler__error = VEncodePointer(VLookupConstant("_V0compiler__error", &_VW_V0compiler__error), VPOINTER_OTHER);
  _V0lookup__intrinsic = VEncodePointer(VLookupConstant("_V0lookup__intrinsic", &_VW_V0lookup__intrinsic), VPOINTER_OTHER);
  _V0pair_Q = VEncodePointer(VLookupConstant("_V0pair_Q", &_VW_V0pair_Q), VPOINTER_OTHER);
  _V0car = VEncodePointer(VLookupConstant("_V0car", &_VW_V0car), VPOINTER_OTHER);
  _V0cdr = VEncodePointer(VLookupConstant("_V0cdr", &_VW_V0cdr), VPOINTER_OTHER);
  _V0null_Q = VEncodePointer(VLookupConstant("_V0null_Q", &_VW_V0null_Q), VPOINTER_OTHER);
  _V0error = VEncodePointer(VLookupConstant("_V0error", &_VW_V0error), VPOINTER_OTHER);
  _V0assv = VEncodePointer(VLookupConstant("_V0assv", &_VW_V0assv), VPOINTER_OTHER);
  _V0not = VEncodePointer(VLookupConstant("_V0not", &_VW_V0not), VPOINTER_OTHER);
  _V0memv = VEncodePointer(VLookupConstant("_V0memv", &_VW_V0memv), VPOINTER_OTHER);
  _V0equal_Q = VEncodePointer(VLookupConstant("_V0equal_Q", &_VW_V0equal_Q), VPOINTER_OTHER);
  _V0alpha__convert = VEncodePointer(VLookupConstant("_V0alpha__convert", &_VW_V0alpha__convert), VPOINTER_OTHER);
  _V0define__constant = VEncodePointer(VLookupConstant("_V0define__constant", &_VW_V0define__constant), VPOINTER_OTHER);
  _V10vcore_Ddeclare = VEncodePointer(VLookupConstant("_V10vcore_Ddeclare", &_VW_V10vcore_Ddeclare), VPOINTER_OTHER);
  _V10foreign_Ddeclare = VEncodePointer(VLookupConstant("_V10foreign_Ddeclare", &_VW_V10foreign_Ddeclare), VPOINTER_OTHER);
  _V0define = VEncodePointer(VLookupConstant("_V0define", &_VW_V0define), VPOINTER_OTHER);
  _V0letrec = VEncodePointer(VLookupConstant("_V0letrec", &_VW_V0letrec), VPOINTER_OTHER);
  _V0or = VEncodePointer(VLookupConstant("_V0or", &_VW_V0or), VPOINTER_OTHER);
  _V0if = VEncodePointer(VLookupConstant("_V0if", &_VW_V0if), VPOINTER_OTHER);
  _V0begin = VEncodePointer(VLookupConstant("_V0begin", &_VW_V0begin), VPOINTER_OTHER);
  _V10foreign_Dfunction = VEncodePointer(VLookupConstant("_V10foreign_Dfunction", &_VW_V10foreign_Dfunction), VPOINTER_OTHER);
  _V0case__lambda = VEncodePointer(VLookupConstant("_V0case__lambda", &_VW_V0case__lambda), VPOINTER_OTHER);
  _V0lambda = VEncodePointer(VLookupConstant("_V0lambda", &_VW_V0lambda), VPOINTER_OTHER);
  _V0quote = VEncodePointer(VLookupConstant("_V0quote", &_VW_V0quote), VPOINTER_OTHER);
}
static void _V10_Dmemtail_D91_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.memtail.91 5 0) (bruijn ##.k.282 4 0) (bruijn ##.x.93 4 1) (bruijn ##.x.285 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dmemtail_D91_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.284 0 0) ((bruijn ##.k.282 3 0) (bruijn ##.lst.94 3 2)) ((bruijn ##.cdr.84 5 12) (close _V10_Dmemtail_D91_k30) (bruijn ##.lst.94 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      upenv->up->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k30, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dmemtail_D91_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.equal?.90 4 18) (close _V10_Dmemtail_D91_k29) (bruijn ##.x.93 2 1) (bruijn ##.x.286 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[18]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k29, env)}),
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dmemtail_D91_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.287 0 0) ((bruijn ##.k.282 2 0) (bruijn ##.lst.94 2 2)) ((bruijn ##.k.282 2 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      upenv->up->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dmemtail_D91_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.283 0 0) ((bruijn ##.car.83 3 11) (close _V10_Dmemtail_D91_k28) (bruijn ##.lst.94 1 2)) ((bruijn ##.equal?.90 3 18) (close _V10_Dmemtail_D91_k31) (bruijn ##.x.93 1 1) (bruijn ##.lst.94 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[11]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k28, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[18]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k31, env)}),
      upenv->vars[1],
      upenv->vars[2]);
}
}
static void _V10_Dmemtail_D91_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dmemtail_D91_lambda3, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.pair?.82 2 10) (close _V10_Dmemtail_D91_k27) (bruijn ##.lst.94 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[10]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_k27, env)}),
      _var2);
}
static void _V10_Dapplication_Q_D96_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.88 7 16) (bruijn ##.k.289 3 0) (bruijn ##.x.291 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 16)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dapplication_Q_D96_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.89 6 17) (close _V10_Dapplication_Q_D96_k34) (bruijn ##.x.292 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_k34, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VNULL)))));
}
static void _V10_Dapplication_Q_D96_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.290 0 0) ((bruijn ##.car.83 5 11) (close _V10_Dapplication_Q_D96_k33) (bruijn ##.x.105 1 1)) ((bruijn ##.k.289 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_k33, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dapplication_Q_D96_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dapplication_Q_D96_lambda5, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.82 4 10) (close _V10_Dapplication_Q_D96_k32) (bruijn ##.x.105 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_k32, env)}),
      _var1);
}
static void _V10_Dcombination_Q_D97_k37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_k37, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.not.88 7 16) (bruijn ##.k.297 3 0) (bruijn ##.x.299 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 16)), 2,
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Dcombination_Q_D97_k36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_k36, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.memv.89 6 17) (close _V10_Dcombination_Q_D97_k37) (bruijn ##.x.300 0 0) (##inline ##vcore.qcons 'quote (##inline ##vcore.qcons 'lambda (##inline ##vcore.qcons 'case-lambda (##inline ##vcore.qcons '##foreign.function (##inline ##vcore.qcons 'begin (##inline ##vcore.qcons 'if (##inline ##vcore.qcons 'or (##inline ##vcore.qcons 'letrec '())))))))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 17)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_k37, env)}),
      _var0,
      VInlineCons2(runtime,
        _V0quote,
        VInlineCons2(runtime,
        _V0lambda,
        VInlineCons2(runtime,
        _V0case__lambda,
        VInlineCons2(runtime,
        _V10foreign_Dfunction,
        VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        _V0letrec,
        VNULL)))))))));
}
static void _V10_Dcombination_Q_D97_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.298 0 0) ((bruijn ##.car.83 5 11) (close _V10_Dcombination_Q_D97_k36) (bruijn ##.x.106 1 1)) ((bruijn ##.k.297 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_k36, env)}),
      upenv->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dcombination_Q_D97_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dcombination_Q_D97_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.pair?.82 4 10) (close _V10_Dcombination_Q_D97_k35) (bruijn ##.x.106 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[10]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_k35, env)}),
      _var1);
}
static void _V10_Dlookup__env_D98_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  // ((bruijn ##.k.309 4 0) (bruijn ##.keyval.110 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      _var0);
}
static void _V10_Dlookup__env_D98_k41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_k41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.lookup-env.98 5 2) (bruijn ##.k.309 4 0) (bruijn ##.sym.107 4 1) (bruijn ##.x.311 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 2)), 3,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0);
}
static void _V10_Dlookup__env_D98_k40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_k40, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.12.109 0 0) ((close _V10_Dlookup__env_D98_lambda8) (bruijn ##.x.12.109 0 0)) ((bruijn ##.cdr.84 7 12) (close _V10_Dlookup__env_D98_k41) (bruijn ##.env.108 3 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dlookup__env_D98_lambda8, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_k41, env)}),
      upenv->up->up->vars[2]);
}
}
static void _V10_Dlookup__env_D98_k39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_k39, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.assv.87 6 15) (close _V10_Dlookup__env_D98_k40) (bruijn ##.sym.107 2 1) (bruijn ##.x.312 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 15)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_k40, env)}),
      upenv->up->vars[1],
      _var0);
}
static void _V10_Dlookup__env_D98_k38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_k38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.310 0 0) ((bruijn ##.k.309 1 0) #f) ((bruijn ##.car.83 5 11) (close _V10_Dlookup__env_D98_k39) (bruijn ##.env.108 1 2)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_k39, env)}),
      upenv->vars[2]);
}
}
static void _V10_Dlookup__env_D98_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Dlookup__env_D98_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.null?.85 4 13) (close _V10_Dlookup__env_D98_k38) (bruijn ##.env.108 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[13]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_k38, env)}),
      _var2);
}
static void _V10_Diter__defines_D99_k42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k42, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.error.86 8 14) (bruijn ##.k.314 3 0) (##string ##.string.608))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 14)), 2,
      upenv->up->up->vars[0],
      VEncodePointer(&_V10_Dstring_D608.sym, VPOINTER_OTHER));
}
static void _V10_Dloop_D117_k45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k45, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.116 5 1) (bruijn ##.k.335 2 0) (bruijn ##.expr.20.118 3 1) (bruijn ##.x.336 1 0) (bruijn ##.x.337 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D117_k44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 13 0) (close _V10_Dloop_D117_k45) (bruijn ##.vals.17.120 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k45, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D117_k43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k43, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.20.118 1 1))) ((bruijn ##.reverse.72 12 0) (close _V10_Dloop_D117_k44) (bruijn ##.xs.16.119 1 2)) ((bruijn ##.k.335 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k44, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.23.125 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.23.125 0 0))) ((bruijn ##.kk.19.121 4 1) (bruijn ##.k.326 2 0) (##inline ##vcore.cdr (bruijn ##.expr.20.118 7 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.22.123 1 0)) (bruijn ##.xs.16.119 7 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.23.125 0 0)) (bruijn ##.vals.17.120 7 3))) ((bruijn ##.k.326 2 0) #f)) ((bruijn ##.k.326 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 4,
      upenv->up->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 7-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->vars[0]),
        VGetArg(upenv, 7-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 7-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k49, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.22.123 0 0)) ((close _V10_Dloop_D117_k50) (##inline ##vcore.cdr (bruijn ##.expr.22.123 0 0))) ((bruijn ##.k.326 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k50, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.21.122 1 0)) ((close _V10_Dloop_D117_k49) (##inline ##vcore.cdr (bruijn ##.expr.21.122 1 0))) ((bruijn ##.k.326 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k49, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D117_k53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k53, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.18.116 9 1) (bruijn ##.k.321 4 0) (bruijn ##.expr.20.118 7 1) (bruijn ##.x.323 1 0) (bruijn ##.x.324 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D117_k52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k52, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 17 0) (close _V10_Dloop_D117_k53) (bruijn ##.vals.17.120 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k53, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D117_k51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k51, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 16 0) (close _V10_Dloop_D117_k52) (bruijn ##.xs.16.119 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k52, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D117_k47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D117_k48) (close _V10_Dloop_D117_k51))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k48, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k51, env)}));
}
static void _V10_Dloop_D117_lambda17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda17, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D117_k47) (##inline ##vcore.car (bruijn ##.expr.20.118 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k47, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D117_lambda16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.320 0 0) (close _V10_Dloop_D117_lambda17))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda17, env)}));
}
static void _V10_Dloop_D117_k46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_k46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.318 1 0) (close _V10_Dloop_D117_lambda16) (bruijn ##.loop.117 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda16, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D117_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D117_lambda15, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D117_k43) (close _V10_Dloop_D117_k46))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D117_k43, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_k46, env)}));
}
static void _V10_Diter__defines_D99_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D117_lambda15)) ((bruijn ##.loop.117 0 0) (bruijn ##.k.317 1 0) (bruijn ##.expr.15.115 3 0) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D117_lambda15, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      upenv->up->up->vars[0],
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__defines_D99_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.316 0 0) (close _V10_Diter__defines_D99_lambda14))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda14, env)}));
}
static void _V10_Diter__defines_D99_k54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k54, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.341 0 0) (bruijn ##.k.339 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter__defines_D99_k59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.78 14 6) (bruijn ##.k.342 5 0) (bruijn ##.x.343 0 0) (bruijn ##.env.131 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 6)), 3,
      VGetArg(upenv, 5-1, 0),
      _var0,
      upenv->up->vars[0]);
}
static void _V10_Diter__defines_D99_lambda20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda20, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.k.344 0 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (bruijn ##.x.133 0 1) (##inline ##vcore.cons (bruijn ##.val.134 0 2) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        _var1,
        VInlineCons2(runtime,
        _var2,
        VNULL))));
}
static void _V10_Diter__defines_D99_k58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k58, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 13 1) (close _V10_Diter__defines_D99_k59) (close _V10_Diter__defines_D99_lambda20) (bruijn ##.new-xs.130 3 0) (bruijn ##.vals.132 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k59, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda20, env)}),
      upenv->up->up->vars[0],
      _var0);
}
static void _V10_Diter__defines_D99_lambda21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda21, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 10 7) (bruijn ##.k.347 0 0) (bruijn ##.val.135 0 1) (bruijn ##.env.131 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 7)), 3,
      _var0,
      _var1,
      upenv->vars[0]);
}
static void _V10_Diter__defines_D99_k57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k57, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 12 1) (close _V10_Diter__defines_D99_k58) (close _V10_Diter__defines_D99_lambda21) (bruijn ##.vals.129 4 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k58, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda21, env)}),
      upenv->up->up->up->vars[3]);
}
static void _V10_Diter__defines_D99_k56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k56, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.75 11 3) (close _V10_Diter__defines_D99_k57) (bruijn ##.x.348 0 0) (bruijn ##.env.112 7 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k57, env)}),
      _var0,
      VGetArg(upenv, 7-1, 2));
}
static void _V10_Diter__defines_D99_k55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_k55, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 10 1) (close _V10_Diter__defines_D99_k56) (bruijn ##.cons.75 10 3) (bruijn ##.xs.128 2 2) (bruijn ##.new-xs.130 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k56, env)}),
      VGetArg(upenv, 10-1, 3),
      upenv->up->vars[2],
      _var0);
}
static void _V10_Diter__defines_D99_lambda19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 9 1) (close _V10_Diter__defines_D99_k55) (bruijn ##.gensym.74 9 2) (bruijn ##.xs.128 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k55, env)}),
      VGetArg(upenv, 9-1, 2),
      upenv->vars[2]);
}
static void _V10_Diter__defines_D99_lambda18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda18, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.127 0 1)) (##vcore.call-with-values (close _V10_Diter__defines_D99_k54) (close _V10_Diter__defines_D99_lambda19) (bruijn ##.kk.13.113 3 1)) ((bruijn ##.k.339 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k54, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda19, env)}),
      upenv->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__defines_D99_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (close _V10_Diter__defines_D99_k42) (close _V10_Diter__defines_D99_lambda13) (close _V10_Diter__defines_D99_lambda18))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_k42, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda13, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda18, env)}));
}
static void _V10_Diter__defines_D99_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__defines_D99_lambda12) (bruijn ##.input.14.114 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__defines_D99_lambda12, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter__defines_D99_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda10, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__defines_D99_lambda11) (bruijn ##.defines.111 1 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__defines_D99_lambda11, .env = env }, }, 1,
      upenv->vars[1]);
}
static void _V10_Diter__defines_D99_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__defines_D99_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (##vcore.call/cc (bruijn ##.k.313 0 0) (close _V10_Diter__defines_D99_lambda10))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda10, env)}));
}
static void _V10_Diter__symbol_D138_lambda24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  // ((bruijn ##.cdr.84 8 12) (bruijn ##.k.350 2 0) (bruijn ##.keyval.143 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 12)), 2,
      upenv->up->vars[0],
      _var0);
}
static void _V10_Diter__symbol_D138_k61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_k61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.351 0 0) ((bruijn ##.k.350 2 0) (bruijn ##.sym.140 2 1)) ((bruijn ##.k.350 2 0) (bruijn ##.sym.140 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      upenv->up->vars[1]);
}
}
static void _V10_Diter__symbol_D138_k60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_k60, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.x.41.142 0 0) ((close _V10_Diter__symbol_D138_lambda24) (bruijn ##.x.41.142 0 0)) ((bruijn ##.lookup-intrinsic.81 7 9) (close _V10_Diter__symbol_D138_k61) (bruijn ##.sym.140 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__symbol_D138_lambda24, .env = env }, }, 1,
      _var0);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 9)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_k61, env)}),
      upenv->vars[1]);
}
}
static void _V10_Diter__symbol_D138_lambda23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__symbol_D138_lambda23, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.lookup-env.98 3 2) (close _V10_Diter__symbol_D138_k60) (bruijn ##.sym.140 0 1) (bruijn ##.env.141 0 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[2]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_k60, env)}),
      _var1,
      _var2);
}
static void _V10_Dgenargs_D148_k67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k67, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.75 14 3) (bruijn ##.k.353 6 0) (bruijn ##.x.356 2 0) (bruijn ##.x.357 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 3)), 3,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Dgenargs_D148_k66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k66, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.genargs.148 6 0) (close _V10_Dgenargs_D148_k67) (bruijn ##.x.358 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k67, env)}),
      _var0);
}
static void _V10_Dgenargs_D148_k65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.84 12 12) (close _V10_Dgenargs_D148_k66) (bruijn ##.args.150 4 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k66, env)}),
      upenv->up->up->up->vars[1]);
}
static void _V10_Dgenargs_D148_k64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k64, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.gensym.74 11 2) (close _V10_Dgenargs_D148_k65) (bruijn ##.x.359 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 2)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k65, env)}),
      _var0);
}
static void _V10_Dgenargs_D148_k63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.355 0 0) ((bruijn ##.car.83 10 11) (close _V10_Dgenargs_D148_k64) (bruijn ##.args.150 2 1)) ((bruijn ##.gensym.74 10 2) (bruijn ##.k.353 2 0) (bruijn ##.args.150 2 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k64, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 2)), 2,
      upenv->up->vars[0],
      upenv->up->vars[1]);
}
}
static void _V10_Dgenargs_D148_k62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_k62, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.354 0 0) ((bruijn ##.k.353 1 0) '()) ((bruijn ##.pair?.82 9 10) (close _V10_Dgenargs_D148_k63) (bruijn ##.args.150 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k63, env)}),
      upenv->vars[1]);
}
}
static void _V10_Dgenargs_D148_lambda26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dgenargs_D148_lambda26, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.85 8 13) (close _V10_Dgenargs_D148_k62) (bruijn ##.args.150 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 13)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_k62, env)}),
      _var1);
}
static void _V10_Ddedot_D149_k72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.75 13 3) (bruijn ##.k.360 5 0) (bruijn ##.x.363 2 0) (bruijn ##.x.364 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 3)), 3,
      VGetArg(upenv, 5-1, 0),
      upenv->up->vars[0],
      _var0);
}
static void _V10_Ddedot_D149_k71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.dedot.149 5 1) (close _V10_Ddedot_D149_k72) (bruijn ##.x.365 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k72, env)}),
      _var0);
}
static void _V10_Ddedot_D149_k70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k70, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cdr.84 11 12) (close _V10_Ddedot_D149_k71) (bruijn ##.args.151 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 12)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k71, env)}),
      upenv->up->up->vars[1]);
}
static void _V10_Ddedot_D149_k69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k69, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.362 0 0) ((bruijn ##.car.83 10 11) (close _V10_Ddedot_D149_k70) (bruijn ##.args.151 2 1)) ((bruijn ##.cons.75 10 3) (bruijn ##.k.360 2 0) (bruijn ##.args.151 2 1) '()))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 11)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k70, env)}),
      upenv->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 3)), 3,
      upenv->up->vars[0],
      upenv->up->vars[1],
      VNULL);
}
}
static void _V10_Ddedot_D149_k68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_k68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.361 0 0) ((bruijn ##.k.360 1 0) '()) ((bruijn ##.pair?.82 9 10) (close _V10_Ddedot_D149_k69) (bruijn ##.args.151 1 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VNULL);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 10)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k69, env)}),
      upenv->vars[1]);
}
}
static void _V10_Ddedot_D149_lambda27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Ddedot_D149_lambda27, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##.null?.85 8 13) (close _V10_Ddedot_D149_k68) (bruijn ##.args.151 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 13)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_k68, env)}),
      _var1);
}
static void _V10_Diter__lambda_D139_k81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.352 11 0) (##inline ##vcore.cons (bruijn ##.newargs.152 9 0) (bruijn ##.x.367 0 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 1,
      VInlineCons2(runtime,
        VGetArg(upenv, 9-1, 0),
        _var0));
}
static void _V10_Diter__lambda_D139_k80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k80, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.append.77 16 5) (close _V10_Diter__lambda_D139_k81) (bruijn ##.new-defines.154 3 0) (##inline ##vcore.cons (bruijn ##.x.369 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k81, env)}),
      upenv->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Diter__lambda_D139_k79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 12 7) (close _V10_Diter__lambda_D139_k80) (bruijn ##.body.146 9 3) (bruijn ##.new-env.155 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k80, env)}),
      VGetArg(upenv, 9-1, 3),
      upenv->up->vars[1]);
}
static void _V10_Diter__lambda_D139_k78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k78, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__lambda_D139_k79) (bruijn ##.dummy.44.156 1 2) (bruijn ##.x.370 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k79, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Diter__lambda_D139_lambda28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.78 14 6) (bruijn ##.k.371 0 0) (bruijn ##.defines.145 8 2) (bruijn ##.env.153 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 6)), 3,
      _var0,
      VGetArg(upenv, 8-1, 2),
      upenv->up->vars[0]);
}
static void _V10_Diter__lambda_D139_k82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k82, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.372 1 0) (bruijn ##.new-env.155 2 1) (bruijn ##.new-env.43.158 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Diter__lambda_D139_lambda29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda29, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Diter__lambda_D139_k82) (bruijn ##.new-defines.154 1 0) (bruijn ##.new-defines.42.157 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k82, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Diter__lambda_D139_k77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Diter__lambda_D139_k78) (close _V10_Diter__lambda_D139_lambda28) (close _V10_Diter__lambda_D139_lambda29)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k78, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda28, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda29, env)}));
    }
}
static void _V10_Diter__lambda_D139_k76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k76, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.75 11 3) (close _V10_Diter__lambda_D139_k77) (bruijn ##.x.374 0 0) (bruijn ##.env.147 5 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 3)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k77, env)}),
      _var0,
      VGetArg(upenv, 5-1, 4));
}
static void _V10_Diter__lambda_D139_k75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k75, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 10 1) (close _V10_Diter__lambda_D139_k76) (bruijn ##.cons.75 10 3) (bruijn ##.x.375 1 0) (bruijn ##.x.376 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k76, env)}),
      VGetArg(upenv, 10-1, 3),
      upenv->vars[0],
      _var0);
}
static void _V10_Diter__lambda_D139_k74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k74, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.dedot.149 2 1) (close _V10_Diter__lambda_D139_k75) (bruijn ##.newargs.152 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k75, env)}),
      upenv->vars[0]);
}
static void _V10_Diter__lambda_D139_k73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_k73, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.dedot.149 1 1) (close _V10_Diter__lambda_D139_k74) (bruijn ##.args.144 2 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[1]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k74, env)}),
      upenv->up->vars[1]);
}
static void _V10_Diter__lambda_D139_lambda25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4) {
 if(argc != 5) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__lambda_D139_lambda25, got ~D~N"
  "-- expected 5~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[5]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 5, 5, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  // (letrec 2 ((close _V10_Dgenargs_D148_lambda26) (close _V10_Ddedot_D149_lambda27)) ((bruijn ##.genargs.148 0 0) (close _V10_Diter__lambda_D139_k73) (bruijn ##.args.144 1 1)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dgenargs_D148_lambda26, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Ddedot_D149_lambda27, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_k73, env)}),
      upenv->vars[1]);
    }
}
static void _V10_Diter__atom_D100_k87(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k87, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.442 0 0) (bruijn ##.k.437 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D100_k88(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k88, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.75 14 3) (bruijn ##.k.443 1 0) 'lambda (bruijn ##.x.444 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 3)), 3,
      upenv->vars[0],
      _V0lambda,
      _var0);
}
static void _V10_Diter__atom_D100_lambda33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter-lambda.139 8 1) (close _V10_Diter__atom_D100_k88) (##inline ##vcore.car (bruijn ##.expr.27.162 2 0)) '() (##inline ##vcore.car (bruijn ##.expr.28.164 1 0)) (bruijn ##.env.137 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 1)), 5,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k88, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VNULL,
      VInlineCar2(runtime,
        upenv->vars[0]),
      VGetArg(upenv, 9-1, 2));
}
static void _V10_Diter__atom_D100_k86(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k86, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.28.164 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.28.164 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D100_k87) (close _V10_Diter__atom_D100_lambda33) (bruijn ##.kk.24.159 6 1)) ((bruijn ##.k.437 3 0) #f)) ((bruijn ##.k.437 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k87, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda33, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k85(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k85, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.27.162 0 0)) ((close _V10_Diter__atom_D100_k86) (##inline ##vcore.cdr (bruijn ##.expr.27.162 0 0))) ((bruijn ##.k.437 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k86, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.438 0 0) ((close _V10_Diter__atom_D100_k85) (##inline ##vcore.cdr (bruijn ##.expr.26.161 2 0))) ((bruijn ##.k.437 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k85, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.26.161 1 0)) ((bruijn ##.equal?.90 9 18) (close _V10_Diter__atom_D100_k84) 'lambda (##inline ##vcore.car (bruijn ##.expr.26.161 1 0))) ((bruijn ##.k.437 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k84, env)}),
      _V0lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k94(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k94, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.33.168 5 1) (bruijn ##.k.425 2 0) (bruijn ##.expr.35.170 3 1) (bruijn ##.x.426 1 0) (bruijn ##.x.427 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D169_k93(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k93, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 18 0) (close _V10_Dloop_D169_k94) (bruijn ##.bodies.32.172 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k94, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D169_k92(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k92, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.35.170 1 1))) ((bruijn ##.reverse.72 17 0) (close _V10_Dloop_D169_k93) (bruijn ##.args.31.171 1 2)) ((bruijn ##.k.425 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k93, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k98(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k98, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.37.176 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.37.176 0 0))) ((bruijn ##.kk.34.173 3 1) (bruijn ##.k.417 1 0) (##inline ##vcore.cdr (bruijn ##.expr.35.170 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.36.174 2 0)) (bruijn ##.args.31.171 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.37.176 0 0)) (bruijn ##.bodies.32.172 6 3))) ((bruijn ##.k.417 1 0) #f)) ((bruijn ##.k.417 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k97(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k97, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.36.174 1 0)) ((close _V10_Dloop_D169_k98) (##inline ##vcore.cdr (bruijn ##.expr.36.174 1 0))) ((bruijn ##.k.417 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k98, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D169_k101(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k101, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.33.168 9 1) (bruijn ##.k.412 4 0) (bruijn ##.expr.35.170 7 1) (bruijn ##.x.414 1 0) (bruijn ##.x.415 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D169_k100(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k100, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 22 0) (close _V10_Dloop_D169_k101) (bruijn ##.bodies.32.172 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k101, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D169_k99(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k99, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 21 0) (close _V10_Dloop_D169_k100) (bruijn ##.args.31.171 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 21-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k100, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D169_k96(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k96, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D169_k97) (close _V10_Dloop_D169_k99))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k97, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k99, env)}));
}
static void _V10_Dloop_D169_lambda39(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda39, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D169_k96) (##inline ##vcore.car (bruijn ##.expr.35.170 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k96, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D169_lambda38(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda38, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.411 0 0) (close _V10_Dloop_D169_lambda39))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda39, env)}));
}
static void _V10_Dloop_D169_k95(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_k95, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.409 1 0) (close _V10_Dloop_D169_lambda38) (bruijn ##.loop.169 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda38, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D169_lambda37(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D169_lambda37, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D169_k92) (close _V10_Dloop_D169_k95))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D169_k92, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_k95, env)}));
}
static void _V10_Diter__atom_D100_lambda36(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda36, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D169_lambda37)) ((bruijn ##.loop.169 0 0) (bruijn ##.k.408 1 0) (##inline ##vcore.cdr (bruijn ##.expr.29.166 5 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D169_lambda37, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 5-1, 0)),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter__atom_D100_lambda35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.407 0 0) (close _V10_Diter__atom_D100_lambda36))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda36, env)}));
}
static void _V10_Diter__atom_D100_k102(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k102, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.431 0 0) (bruijn ##.k.429 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter__atom_D100_k103(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k103, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.cons.75 15 3) (bruijn ##.k.432 1 0) 'case-lambda (bruijn ##.x.433 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 3)), 3,
      upenv->vars[0],
      _V0case__lambda,
      _var0);
}
static void _V10_Diter__atom_D100_lambda42(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda42, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // ((bruijn ##.iter-lambda.139 10 1) (bruijn ##.k.434 0 0) (bruijn ##.arg.181 0 1) '() (bruijn ##.body.182 0 2) (bruijn ##.env.137 11 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 1)), 5,
      _var0,
      _var1,
      VNULL,
      _var2,
      VGetArg(upenv, 11-1, 2));
}
static void _V10_Diter__atom_D100_lambda41(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda41, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 14 1) (close _V10_Diter__atom_D100_k103) (close _V10_Diter__atom_D100_lambda42) (bruijn ##.args.179 1 2) (bruijn ##.bodies.180 1 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k103, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda42, env)}),
      upenv->vars[2],
      upenv->vars[3]);
}
static void _V10_Diter__atom_D100_lambda40(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda40, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.178 0 1)) (##vcore.call-with-values (close _V10_Diter__atom_D100_k102) (close _V10_Diter__atom_D100_lambda41) (bruijn ##.kk.24.159 7 1)) ((bruijn ##.k.429 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k102, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda41, env)}),
      VGetArg(upenv, 7-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k91(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k91, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.406 0 0) (##vcore.call-with-values (bruijn ##.k.405 1 0) (close _V10_Diter__atom_D100_lambda35) (close _V10_Diter__atom_D100_lambda40)) ((bruijn ##.k.405 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda35, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda40, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k90(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k90, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.29.166 1 0)) ((bruijn ##.equal?.90 11 18) (close _V10_Diter__atom_D100_k91) 'case-lambda (##inline ##vcore.car (bruijn ##.expr.29.166 1 0))) ((bruijn ##.k.405 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k91, env)}),
      _V0case__lambda,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k107(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k107, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.401 0 0) (bruijn ##.k.399 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda44(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda44, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.402 0 0) (bruijn ##.x.136 11 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 11-1, 1));
}
static void _V10_Diter__atom_D100_k106(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k106, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.400 0 0) (##vcore.call-with-values (close _V10_Diter__atom_D100_k107) (close _V10_Diter__atom_D100_lambda44) (bruijn ##.kk.24.159 8 1)) ((bruijn ##.k.399 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k107, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda44, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k105(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k105, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.38.183 1 0)) ((bruijn ##.equal?.90 13 18) (close _V10_Diter__atom_D100_k106) '##foreign.function (##inline ##vcore.car (bruijn ##.expr.38.183 1 0))) ((bruijn ##.k.399 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k106, env)}),
      _V10foreign_Dfunction,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k112(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k112, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.394 0 0) (bruijn ##.k.390 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda46(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda46, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.395 0 0) (bruijn ##.x.136 14 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 14-1, 1));
}
static void _V10_Diter__atom_D100_k111(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k111, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.40.185 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.40.185 0 0))) (##vcore.call-with-values (close _V10_Diter__atom_D100_k112) (close _V10_Diter__atom_D100_lambda46) (bruijn ##.kk.24.159 11 1)) ((bruijn ##.k.390 2 0) #f)) ((bruijn ##.k.390 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k112, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda46, env)}),
      VGetArg(upenv, 11-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k110(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k110, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.391 0 0) ((close _V10_Diter__atom_D100_k111) (##inline ##vcore.cdr (bruijn ##.expr.39.184 2 0))) ((bruijn ##.k.390 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k111, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k109(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k109, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.39.184 1 0)) ((bruijn ##.equal?.90 15 18) (close _V10_Diter__atom_D100_k110) 'quote (##inline ##vcore.car (bruijn ##.expr.39.184 1 0))) ((bruijn ##.k.390 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k110, env)}),
      _V0quote,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k115(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k115, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.387 0 0) (bruijn ##.k.386 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->vars[0]);
}
static void _V10_Diter__atom_D100_lambda47(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda47, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.compiler-error.80 17 8) (bruijn ##.k.388 0 0) (##string ##.string.609))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 8)), 2,
      _var0,
      VEncodePointer(&_V10_Dstring_D609.sym, VPOINTER_OTHER));
}
static void _V10_Diter__atom_D100_k114(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k114, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.null? (bruijn ##.input.25.160 9 0)) (##vcore.call-with-values (close _V10_Diter__atom_D100_k115) (close _V10_Diter__atom_D100_lambda47) (bruijn ##.kk.24.159 10 1)) ((bruijn ##.k.386 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        VGetArg(upenv, 9-1, 0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k115, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda47, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter__atom_D100_k117(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k117, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (bruijn ##.p.384 0 0) ((bruijn ##.iter-symbol.138 13 0) (bruijn ##.k.383 1 0) (bruijn ##.x.136 14 1) (bruijn ##.env.137 14 2)) ((bruijn ##.k.383 1 0) (bruijn ##.x.136 14 1)))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 3,
      upenv->vars[0],
      VGetArg(upenv, 14-1, 1),
      VGetArg(upenv, 14-1, 2));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VGetArg(upenv, 14-1, 1));
}
}
static void _V10_Diter__atom_D100_lambda48(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda48, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.symbol?.79 17 7) (close _V10_Diter__atom_D100_k117) (bruijn ##.x.136 13 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 7)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k117, env)}),
      VGetArg(upenv, 13-1, 1));
}
static void _V10_Diter__atom_D100_k116(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k116, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.377 10 0) (close _V10_Diter__atom_D100_lambda48) (bruijn ##.kk.24.159 10 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 10-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda48, env)}),
      VGetArg(upenv, 10-1, 1));
}
static void _V10_Diter__atom_D100_k113(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k113, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k114) (close _V10_Diter__atom_D100_k116))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k114, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k116, env)}));
}
static void _V10_Diter__atom_D100_lambda45(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k109) (close _V10_Diter__atom_D100_k113))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k109, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k113, env)}));
}
static void _V10_Diter__atom_D100_k108(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k108, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_lambda45) (bruijn ##.input.25.160 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_lambda45, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter__atom_D100_lambda43(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k105) (close _V10_Diter__atom_D100_k108))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k105, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k108, env)}));
}
static void _V10_Diter__atom_D100_k104(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k104, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_lambda43) (bruijn ##.input.25.160 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_lambda43, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k90) (close _V10_Diter__atom_D100_k104))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k90, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k104, env)}));
}
static void _V10_Diter__atom_D100_k89(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_k89, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_lambda34) (bruijn ##.input.25.160 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_lambda34, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Diter__atom_D100_lambda32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_k83) (close _V10_Diter__atom_D100_k89))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_k83, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_k89, env)}));
}
static void _V10_Diter__atom_D100_lambda31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter__atom_D100_lambda32) (bruijn ##.input.25.160 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_lambda32, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter__atom_D100_lambda30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda30, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter__atom_D100_lambda31) (bruijn ##.x.136 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter__atom_D100_lambda31, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Diter__atom_D100_lambda22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__atom_D100_lambda22, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (letrec 2 ((close _V10_Diter__symbol_D138_lambda23) (close _V10_Diter__lambda_D139_lambda25)) (##vcore.call/cc (bruijn ##.k.349 1 0) (close _V10_Diter__atom_D100_lambda30)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__symbol_D138_lambda23, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__lambda_D139_lambda25, env)});
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda30, env)}));
    }
}
static void _V10_Diter__letrec_D101_k126(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k126, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.447 10 0) (##inline ##vcore.cons 'letrec (##inline ##vcore.cons (bruijn ##.x.450 2 0) (bruijn ##.x.451 0 0))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 1,
      VInlineCons2(runtime,
        _V0letrec,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        _var0)));
}
static void _V10_Diter__letrec_D101_k125(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k125, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.append.77 13 5) (close _V10_Diter__letrec_D101_k126) (bruijn ##.new-defines.194 4 0) (##inline ##vcore.cons (bruijn ##.x.453 0 0) '()))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 5)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k126, env)}),
      upenv->up->up->up->vars[0],
      VInlineCons2(runtime,
        _var0,
        VNULL));
}
static void _V10_Diter__letrec_D101_k124(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k124, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 9 7) (close _V10_Diter__letrec_D101_k125) (bruijn ##.body.188 8 3) (bruijn ##.new-env.195 3 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k125, env)}),
      VGetArg(upenv, 8-1, 3),
      upenv->up->up->vars[1]);
}
static void _V10_Diter__letrec_D101_k123(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k123, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 11 1) (close _V10_Diter__letrec_D101_k124) (bruijn ##.list.76 11 4) (bruijn ##.new-args.191 6 0) (bruijn ##.vals.193 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k124, env)}),
      VGetArg(upenv, 11-1, 4),
      VGetArg(upenv, 6-1, 0),
      upenv->up->up->vars[0]);
}
static void _V10_Diter__letrec_D101_k122(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k122, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V10_Diter__letrec_D101_k123) (bruijn ##.dummy.47.196 1 2) (bruijn ##.x.454 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k123, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      _var0
    );
}
static void _V10_Diter__letrec_D101_lambda50(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda50, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.values.78 10 6) (bruijn ##.k.455 0 0) (bruijn ##.defines.187 6 2) (bruijn ##.env.192 3 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 6)), 3,
      _var0,
      VGetArg(upenv, 6-1, 2),
      upenv->up->up->vars[0]);
}
static void _V10_Diter__letrec_D101_k127(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k127, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (bruijn ##.k.456 1 0) (bruijn ##.new-env.195 2 1) (bruijn ##.new-env.46.198 1 2))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      upenv->vars[0],
      VEncodeInt(2l), VEncodeInt(1l),
      upenv->vars[2]
    );
}
static void _V10_Diter__letrec_D101_lambda51(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda51, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V10_Diter__letrec_D101_k127) (bruijn ##.new-defines.194 1 0) (bruijn ##.new-defines.45.197 0 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k127, env)}),
      VEncodeInt(1l), VEncodeInt(0l),
      _var1
    );
}
static void _V10_Diter__letrec_D101_k121(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k121, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 3 (#f #f #f) (##vcore.call-with-values (close _V10_Diter__letrec_D101_k122) (close _V10_Diter__letrec_D101_lambda50) (close _V10_Diter__letrec_D101_lambda51)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[3]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 3, 3, upenv);
    env->vars[0] = VEncodeBool(false);
    env->vars[1] = VEncodeBool(false);
    env->vars[2] = VEncodeBool(false);
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k122, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda50, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda51, env)}));
    }
}
static void _V10_Diter__letrec_D101_lambda52(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda52, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 5 7) (bruijn ##.k.458 0 0) (bruijn ##.val.199 0 1) (bruijn ##.env.192 1 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 7)), 3,
      _var0,
      _var1,
      upenv->vars[0]);
}
static void _V10_Diter__letrec_D101_k120(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k120, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 7 1) (close _V10_Diter__letrec_D101_k121) (close _V10_Diter__letrec_D101_lambda52) (bruijn ##.vals.189 3 4))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 1)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k121, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda52, env)}),
      upenv->up->up->vars[4]);
}
static void _V10_Diter__letrec_D101_k119(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k119, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.cons.75 6 3) (close _V10_Diter__letrec_D101_k120) (bruijn ##.x.459 0 0) (bruijn ##.env.190 2 5))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 3)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k120, env)}),
      _var0,
      upenv->up->vars[5]);
}
static void _V10_Diter__letrec_D101_k118(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_k118, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.map.73 5 1) (close _V10_Diter__letrec_D101_k119) (bruijn ##.cons.75 5 3) (bruijn ##.args.186 1 1) (bruijn ##.new-args.191 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k119, env)}),
      VGetArg(upenv, 5-1, 3),
      upenv->vars[1],
      _var0);
}
static void _V10_Diter__letrec_D101_lambda49(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5) {
 if(argc != 6) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__letrec_D101_lambda49, got ~D~N"
  "-- expected 6~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[6]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 6, 6, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  // ((bruijn ##.map.73 4 1) (close _V10_Diter__letrec_D101_k118) (bruijn ##.gensym.74 4 2) (bruijn ##.args.186 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_k118, env)}),
      upenv->up->up->up->vars[2],
      _var1);
}
static void _V10_Diter__combination_D102_lambda54(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D102_lambda54, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 2 7) (bruijn ##.k.461 0 0) (bruijn ##.arg.202 0 1) (bruijn ##.env.201 1 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[7]), 3,
      _var0,
      _var1,
      upenv->vars[2]);
}
static void _V10_Diter__combination_D102_lambda53(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter__combination_D102_lambda53, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.map.73 4 1) (bruijn ##.k.460 0 0) (close _V10_Diter__combination_D102_lambda54) (bruijn ##.args.200 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[1]), 3,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D102_lambda54, env)}),
      _var1);
}
static void _V10_Diter_D103_k133(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k133, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.541 0 0) (bruijn ##.k.536 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D103_k135(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k135, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.542 2 0) (##inline ##vcore.cons 'begin (##inline ##vcore.cons (bruijn ##.x.544 1 0) (##inline ##vcore.cons (bruijn ##.x.546 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0begin,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D103_k134(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k134, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 11 7) (close _V10_Diter_D103_k135) (##inline ##vcore.car (bruijn ##.expr.52.210 2 0)) (bruijn ##.env.204 10 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k135, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VGetArg(upenv, 10-1, 2));
}
static void _V10_Diter_D103_lambda59(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda59, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 10 7) (close _V10_Diter_D103_k134) (##inline ##vcore.car (bruijn ##.expr.51.208 2 0)) (bruijn ##.env.204 9 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k134, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VGetArg(upenv, 9-1, 2));
}
static void _V10_Diter_D103_k132(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k132, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.52.210 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.52.210 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k133) (close _V10_Diter_D103_lambda59) (bruijn ##.kk.48.205 6 1)) ((bruijn ##.k.536 3 0) #f)) ((bruijn ##.k.536 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k133, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda59, env)}),
      VGetArg(upenv, 6-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k131(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k131, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.51.208 0 0)) ((close _V10_Diter_D103_k132) (##inline ##vcore.cdr (bruijn ##.expr.51.208 0 0))) ((bruijn ##.k.536 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k132, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k130(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k130, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.537 0 0) ((close _V10_Diter_D103_k131) (##inline ##vcore.cdr (bruijn ##.expr.50.207 2 0))) ((bruijn ##.k.536 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k131, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k129(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k129, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.50.207 1 0)) ((bruijn ##.equal?.90 9 18) (close _V10_Diter_D103_k130) 'begin (##inline ##vcore.car (bruijn ##.expr.50.207 1 0))) ((bruijn ##.k.536 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k130, env)}),
      _V0begin,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k142(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k142, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.525 0 0) (bruijn ##.k.519 5 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 5-1, 0));
}
static void _V10_Diter_D103_k145(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k145, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.526 3 0) (##inline ##vcore.cons 'if (##inline ##vcore.cons (bruijn ##.x.528 2 0) (##inline ##vcore.cons (bruijn ##.x.530 1 0) (##inline ##vcore.cons (bruijn ##.x.532 0 0) '())))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0if,
        VInlineCons2(runtime,
        upenv->up->vars[0],
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL)))));
}
static void _V10_Diter_D103_k144(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k144, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 15 7) (close _V10_Diter_D103_k145) (##inline ##vcore.car (bruijn ##.expr.56.217 3 0)) (bruijn ##.env.204 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k145, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Diter_D103_k143(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k143, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 14 7) (close _V10_Diter_D103_k144) (##inline ##vcore.car (bruijn ##.expr.55.215 3 0)) (bruijn ##.env.204 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k144, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VGetArg(upenv, 13-1, 2));
}
static void _V10_Diter_D103_lambda61(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda61, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 13 7) (close _V10_Diter_D103_k143) (##inline ##vcore.car (bruijn ##.expr.54.213 3 0)) (bruijn ##.env.204 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k143, env)}),
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VGetArg(upenv, 12-1, 2));
}
static void _V10_Diter_D103_k141(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k141, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.56.217 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.56.217 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k142) (close _V10_Diter_D103_lambda61) (bruijn ##.kk.48.205 9 1)) ((bruijn ##.k.519 4 0) #f)) ((bruijn ##.k.519 4 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k142, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda61, env)}),
      VGetArg(upenv, 9-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k140(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k140, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.55.215 0 0)) ((close _V10_Diter_D103_k141) (##inline ##vcore.cdr (bruijn ##.expr.55.215 0 0))) ((bruijn ##.k.519 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k141, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k139(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k139, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.54.213 0 0)) ((close _V10_Diter_D103_k140) (##inline ##vcore.cdr (bruijn ##.expr.54.213 0 0))) ((bruijn ##.k.519 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k140, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k138(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k138, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.520 0 0) ((close _V10_Diter_D103_k139) (##inline ##vcore.cdr (bruijn ##.expr.53.212 2 0))) ((bruijn ##.k.519 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k139, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k137(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k137, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.53.212 1 0)) ((bruijn ##.equal?.90 11 18) (close _V10_Diter_D103_k138) 'if (##inline ##vcore.car (bruijn ##.expr.53.212 1 0))) ((bruijn ##.k.519 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k138, env)}),
      _V0if,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k151(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k151, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.510 0 0) (bruijn ##.k.505 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D103_k153(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k153, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.511 2 0) (##inline ##vcore.cons 'or (##inline ##vcore.cons (bruijn ##.x.513 1 0) (##inline ##vcore.cons (bruijn ##.x.515 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VInlineCons2(runtime,
        _V0or,
        VInlineCons2(runtime,
        upenv->vars[0],
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Diter_D103_k152(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k152, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 15 7) (close _V10_Diter_D103_k153) (##inline ##vcore.car (bruijn ##.expr.59.222 2 0)) (bruijn ##.env.204 14 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k153, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VGetArg(upenv, 14-1, 2));
}
static void _V10_Diter_D103_lambda63(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda63, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.iter.103 14 7) (close _V10_Diter_D103_k152) (##inline ##vcore.car (bruijn ##.expr.58.220 2 0)) (bruijn ##.env.204 13 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 7)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k152, env)}),
      VInlineCar2(runtime,
        upenv->up->vars[0]),
      VGetArg(upenv, 13-1, 2));
}
static void _V10_Diter_D103_k150(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k150, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.59.222 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.59.222 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k151) (close _V10_Diter_D103_lambda63) (bruijn ##.kk.48.205 10 1)) ((bruijn ##.k.505 3 0) #f)) ((bruijn ##.k.505 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k151, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda63, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k149(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k149, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.58.220 0 0)) ((close _V10_Diter_D103_k150) (##inline ##vcore.cdr (bruijn ##.expr.58.220 0 0))) ((bruijn ##.k.505 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k150, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k148(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k148, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.506 0 0) ((close _V10_Diter_D103_k149) (##inline ##vcore.cdr (bruijn ##.expr.57.219 2 0))) ((bruijn ##.k.505 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k149, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k147(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k147, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.57.219 1 0)) ((bruijn ##.equal?.90 13 18) (close _V10_Diter_D103_k148) 'or (##inline ##vcore.car (bruijn ##.expr.57.219 1 0))) ((bruijn ##.k.505 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k148, env)}),
      _V0or,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k160(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k160, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.65.227 5 1) (bruijn ##.k.492 2 0) (bruijn ##.expr.67.229 3 1) (bruijn ##.x.493 1 0) (bruijn ##.x.494 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 1)), 4,
      upenv->up->vars[0],
      upenv->up->up->vars[1],
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D228_k159(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k159, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 23 0) (close _V10_Dloop_D228_k160) (bruijn ##.vals.64.231 2 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 23-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k160, env)}),
      upenv->up->vars[3]);
}
static void _V10_Dloop_D228_k158(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k158, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.not (##inline ##vcore.pair? (bruijn ##.expr.67.229 1 1))) ((bruijn ##.reverse.72 22 0) (close _V10_Dloop_D228_k159) (bruijn ##.xs.63.230 1 2)) ((bruijn ##.k.492 0 0) #f))
if(VDecodeBool(
VInlineNot2(runtime,
        VInlinePairP2(runtime,
        upenv->vars[1])))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 22-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k159, env)}),
      upenv->vars[2]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k164(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k164, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (if (##inline ##vcore.pair? (bruijn ##.expr.69.235 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.69.235 0 0))) ((bruijn ##.kk.66.232 3 1) (bruijn ##.k.484 1 0) (##inline ##vcore.cdr (bruijn ##.expr.67.229 6 1)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.68.233 2 0)) (bruijn ##.xs.63.230 6 2)) (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.69.235 0 0)) (bruijn ##.vals.64.231 6 3))) ((bruijn ##.k.484 1 0) #f)) ((bruijn ##.k.484 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[1]), 4,
      upenv->vars[0],
      VInlineCdr2(runtime,
        VGetArg(upenv, 6-1, 1)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->vars[0]),
        VGetArg(upenv, 6-1, 2)),
      VInlineCons2(runtime,
        VInlineCar2(runtime,
        _var0),
        VGetArg(upenv, 6-1, 3)));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k163(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k163, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.68.233 1 0)) ((close _V10_Dloop_D228_k164) (##inline ##vcore.cdr (bruijn ##.expr.68.233 1 0))) ((bruijn ##.k.484 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k164, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dloop_D228_k167(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k167, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.kk.65.227 9 1) (bruijn ##.k.479 4 0) (bruijn ##.expr.67.229 7 1) (bruijn ##.x.481 1 0) (bruijn ##.x.482 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 1)), 4,
      upenv->up->up->up->vars[0],
      VGetArg(upenv, 7-1, 1),
      upenv->vars[0],
      _var0);
}
static void _V10_Dloop_D228_k166(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k166, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 27 0) (close _V10_Dloop_D228_k167) (bruijn ##.vals.64.231 6 3))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 27-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k167, env)}),
      VGetArg(upenv, 6-1, 3));
}
static void _V10_Dloop_D228_k165(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k165, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.reverse.72 26 0) (close _V10_Dloop_D228_k166) (bruijn ##.xs.63.230 5 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 26-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k166, env)}),
      VGetArg(upenv, 5-1, 2));
}
static void _V10_Dloop_D228_k162(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k162, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dloop_D228_k163) (close _V10_Dloop_D228_k165))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k163, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k165, env)}));
}
static void _V10_Dloop_D228_lambda69(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda69, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dloop_D228_k162) (##inline ##vcore.car (bruijn ##.expr.67.229 3 1)))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k162, .env = env }, }, 1,
      VInlineCar2(runtime,
        upenv->up->up->vars[1]));
}
static void _V10_Dloop_D228_lambda68(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda68, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.478 0 0) (close _V10_Dloop_D228_lambda69))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda69, env)}));
}
static void _V10_Dloop_D228_k161(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_k161, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.476 1 0) (close _V10_Dloop_D228_lambda68) (bruijn ##.loop.228 2 0))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda68, env)}),
      upenv->up->vars[0]);
}
static void _V10_Dloop_D228_lambda67(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Dloop_D228_lambda67, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // ((close _V10_Dloop_D228_k158) (close _V10_Dloop_D228_k161))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dloop_D228_k158, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_k161, env)}));
}
static void _V10_Diter_D103_lambda66(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda66, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 1 ((close _V10_Dloop_D228_lambda67)) ((bruijn ##.loop.228 0 0) (bruijn ##.k.475 1 0) (##inline ##vcore.car (bruijn ##.expr.61.225 3 0)) '() '()))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[1]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 1, 1, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dloop_D228_lambda67, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, env->vars[0]), 4,
      upenv->vars[0],
      VInlineCar2(runtime,
        upenv->up->up->vars[0]),
      VNULL,
      VNULL);
    }
}
static void _V10_Diter_D103_lambda65(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda65, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call/cc (bruijn ##.k.474 0 0) (close _V10_Diter_D103_lambda66))
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      _var0,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda66, env)}));
}
static void _V10_Diter_D103_k169(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k169, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.500 0 0) (bruijn ##.k.496 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Diter_D103_lambda71(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda71, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-letrec.101 17 5) (bruijn ##.k.501 0 0) (bruijn ##.xs.238 2 2) '() (##inline ##vcore.car (bruijn ##.expr.70.240 1 0)) (bruijn ##.vals.239 2 3) (bruijn ##.env.204 16 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 5)), 6,
      _var0,
      upenv->up->vars[2],
      VNULL,
      VInlineCar2(runtime,
        upenv->vars[0]),
      upenv->up->vars[3],
      VGetArg(upenv, 16-1, 2));
}
static void _V10_Diter_D103_k168(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k168, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.70.240 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.70.240 0 0))) (##vcore.call-with-values (close _V10_Diter_D103_k169) (close _V10_Diter_D103_lambda71) (bruijn ##.kk.48.205 13 1)) ((bruijn ##.k.496 1 0) #f)) ((bruijn ##.k.496 1 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k169, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda71, env)}),
      VGetArg(upenv, 13-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_lambda70(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda70, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 4, 4, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (if (##inline ##vcore.null? (bruijn ##.tail-expr.237 0 1)) ((close _V10_Diter_D103_k168) (##inline ##vcore.cdr (bruijn ##.expr.61.225 1 0))) ((bruijn ##.k.496 0 0) #f))
if(VDecodeBool(
VInlineNullP2(runtime,
        _var1))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k168, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k157(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k157, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.61.225 0 0)) (##vcore.call-with-values (bruijn ##.k.471 2 0) (close _V10_Diter_D103_lambda65) (close _V10_Diter_D103_lambda70)) ((bruijn ##.k.471 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      upenv->up->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda65, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda70, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k156(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k156, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.472 0 0) ((close _V10_Diter_D103_k157) (##inline ##vcore.cdr (bruijn ##.expr.60.224 2 0))) ((bruijn ##.k.471 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k157, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_k155(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k155, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.60.224 1 0)) ((bruijn ##.equal?.90 15 18) (close _V10_Diter_D103_k156) 'letrec (##inline ##vcore.car (bruijn ##.expr.60.224 1 0))) ((bruijn ##.k.471 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k156, env)}),
      _V0letrec,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Diter_D103_lambda72(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda72, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.iter-combination.102 13 6) (bruijn ##.k.469 0 0) (bruijn ##.expr.203 12 1) (bruijn ##.env.204 12 2))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 6)), 3,
      _var0,
      VGetArg(upenv, 12-1, 1),
      VGetArg(upenv, 12-1, 2));
}
static void _V10_Diter_D103_k170(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k170, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.464 9 0) (close _V10_Diter_D103_lambda72) (bruijn ##.kk.48.205 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 9-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda72, env)}),
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Diter_D103_lambda64(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_k155) (close _V10_Diter_D103_k170))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k155, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k170, env)}));
}
static void _V10_Diter_D103_k154(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k154, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_lambda64) (bruijn ##.input.49.206 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_lambda64, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Diter_D103_lambda62(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_k147) (close _V10_Diter_D103_k154))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k147, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k154, env)}));
}
static void _V10_Diter_D103_k146(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k146, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_lambda62) (bruijn ##.input.49.206 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_lambda62, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Diter_D103_lambda60(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_k137) (close _V10_Diter_D103_k146))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k137, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k146, env)}));
}
static void _V10_Diter_D103_k136(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k136, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_lambda60) (bruijn ##.input.49.206 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_lambda60, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Diter_D103_lambda58(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_k129) (close _V10_Diter_D103_k136))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_k129, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k136, env)}));
}
static void _V10_Diter_D103_lambda57(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Diter_D103_lambda58) (bruijn ##.input.49.206 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_lambda58, .env = env }, }, 1,
      _var0);
}
static void _V10_Diter_D103_lambda56(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda56, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Diter_D103_lambda57) (bruijn ##.expr.203 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Diter_D103_lambda57, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Diter_D103_k128(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_k128, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.463 0 0) (##vcore.call/cc (bruijn ##.k.462 1 0) (close _V10_Diter_D103_lambda56)) ((bruijn ##.iter-atom.100 2 4) (bruijn ##.k.462 1 0) (bruijn ##.expr.203 1 1) (bruijn ##.env.204 1 2)))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda56, env)}));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[4]), 3,
      upenv->vars[0],
      upenv->vars[1],
      upenv->vars[2]);
}
}
static void _V10_Diter_D103_lambda55(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V10_Diter_D103_lambda55, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.application?.96 1 0) (close _V10_Diter_D103_k128) (bruijn ##.expr.203 0 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_k128, env)}),
      _var1);
}
static void _V10_Dalpha__convert__impl_D104_lambda73(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert__impl_D104_lambda73, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  // ((bruijn ##.iter.103 1 7) (bruijn ##.k.549 0 0) (bruijn ##.expr.242 0 1) '())
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[7]), 3,
      _var0,
      _var1,
      VNULL);
}
static void _V10_Dalpha__convert_D92_k173(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k173, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.598 0 0) (bruijn ##.k.596 2 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_lambda77(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda77, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.599 0 0) (bruijn ##.expr.95 7 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VGetArg(upenv, 7-1, 1));
}
static void _V10_Dalpha__convert_D92_k172(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k172, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.597 0 0) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k173) (close _V10_Dalpha__convert_D92_lambda77) (bruijn ##.kk.0.243 4 1)) ((bruijn ##.k.596 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k173, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda77, env)}),
      upenv->up->up->up->vars[1]);
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k171(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k171, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.2.245 1 0)) ((bruijn ##.equal?.90 7 18) (close _V10_Dalpha__convert_D92_k172) '##foreign.declare (##inline ##vcore.car (bruijn ##.expr.2.245 1 0))) ((bruijn ##.k.596 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k172, env)}),
      _V10foreign_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k179(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k179, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.588 0 0) (bruijn ##.k.583 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k180(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k180, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.589 1 0) (##inline ##vcore.cons '##vcore.declare (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.4.247 3 0)) (##inline ##vcore.cons (bruijn ##.x.592 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V10vcore_Ddeclare,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dalpha__convert_D92_lambda79(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda79, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 10 8) (close _V10_Dalpha__convert_D92_k180) (##inline ##vcore.car (bruijn ##.expr.5.249 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k180, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dalpha__convert_D92_k178(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k178, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.5.249 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.5.249 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k179) (close _V10_Dalpha__convert_D92_lambda79) (bruijn ##.kk.0.243 8 1)) ((bruijn ##.k.583 3 0) #f)) ((bruijn ##.k.583 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k179, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda79, env)}),
      VGetArg(upenv, 8-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k177(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k177, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.4.247 0 0)) ((close _V10_Dalpha__convert_D92_k178) (##inline ##vcore.cdr (bruijn ##.expr.4.247 0 0))) ((bruijn ##.k.583 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k178, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k176(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k176, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.584 0 0) ((close _V10_Dalpha__convert_D92_k177) (##inline ##vcore.cdr (bruijn ##.expr.3.246 2 0))) ((bruijn ##.k.583 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k177, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k175(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k175, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.3.246 1 0)) ((bruijn ##.equal?.90 9 18) (close _V10_Dalpha__convert_D92_k176) '##vcore.declare (##inline ##vcore.car (bruijn ##.expr.3.246 1 0))) ((bruijn ##.k.583 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k176, env)}),
      _V10vcore_Ddeclare,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k186(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k186, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.575 0 0) (bruijn ##.k.570 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k187(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k187, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.576 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.7.252 3 0)) (##inline ##vcore.cons (bruijn ##.x.579 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dalpha__convert_D92_lambda81(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda81, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 12 8) (close _V10_Dalpha__convert_D92_k187) (##inline ##vcore.car (bruijn ##.expr.8.254 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k187, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dalpha__convert_D92_k185(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k185, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.8.254 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.8.254 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k186) (close _V10_Dalpha__convert_D92_lambda81) (bruijn ##.kk.0.243 10 1)) ((bruijn ##.k.570 3 0) #f)) ((bruijn ##.k.570 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k186, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda81, env)}),
      VGetArg(upenv, 10-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k184(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k184, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.7.252 0 0)) ((close _V10_Dalpha__convert_D92_k185) (##inline ##vcore.cdr (bruijn ##.expr.7.252 0 0))) ((bruijn ##.k.570 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k185, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k183(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k183, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.571 0 0) ((close _V10_Dalpha__convert_D92_k184) (##inline ##vcore.cdr (bruijn ##.expr.6.251 2 0))) ((bruijn ##.k.570 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k184, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k182(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k182, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.6.251 1 0)) ((bruijn ##.equal?.90 11 18) (close _V10_Dalpha__convert_D92_k183) 'define (##inline ##vcore.car (bruijn ##.expr.6.251 1 0))) ((bruijn ##.k.570 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k183, env)}),
      _V0define,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k193(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k193, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.x.562 0 0) (bruijn ##.k.557 4 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_k194(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k194, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.563 1 0) (##inline ##vcore.cons 'define (##inline ##vcore.cons (##inline ##vcore.car (bruijn ##.expr.10.257 3 0)) (##inline ##vcore.cons (bruijn ##.x.566 0 0) '()))))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VInlineCons2(runtime,
        _V0define,
        VInlineCons2(runtime,
        VInlineCar2(runtime,
        upenv->up->up->vars[0]),
        VInlineCons2(runtime,
        _var0,
        VNULL))));
}
static void _V10_Dalpha__convert_D92_lambda83(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda83, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.alpha-convert-impl.104 14 8) (close _V10_Dalpha__convert_D92_k194) (##inline ##vcore.car (bruijn ##.expr.11.259 1 0)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 8)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k194, env)}),
      VInlineCar2(runtime,
        upenv->vars[0]));
}
static void _V10_Dalpha__convert_D92_k192(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k192, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.11.259 0 0)) (if (##inline ##vcore.null? (##inline ##vcore.cdr (bruijn ##.expr.11.259 0 0))) (##vcore.call-with-values (close _V10_Dalpha__convert_D92_k193) (close _V10_Dalpha__convert_D92_lambda83) (bruijn ##.kk.0.243 12 1)) ((bruijn ##.k.557 3 0) #f)) ((bruijn ##.k.557 3 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
if(VDecodeBool(
VInlineNullP2(runtime,
        VInlineCdr2(runtime,
        _var0)))) {
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k193, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda83, env)}),
      VGetArg(upenv, 12-1, 1));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k191(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k191, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.10.257 0 0)) ((close _V10_Dalpha__convert_D92_k192) (##inline ##vcore.cdr (bruijn ##.expr.10.257 0 0))) ((bruijn ##.k.557 2 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        _var0))) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k192, .env = env }, }, 1,
      VInlineCdr2(runtime,
        _var0));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k190(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k190, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (bruijn ##.p.558 0 0) ((close _V10_Dalpha__convert_D92_k191) (##inline ##vcore.cdr (bruijn ##.expr.9.256 2 0))) ((bruijn ##.k.557 1 0) #f))
if(VDecodeBool(
_var0)) {
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k191, .env = env }, }, 1,
      VInlineCdr2(runtime,
        upenv->up->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_k189(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k189, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (if (##inline ##vcore.pair? (bruijn ##.expr.9.256 1 0)) ((bruijn ##.equal?.90 13 18) (close _V10_Dalpha__convert_D92_k190) 'define-constant (##inline ##vcore.car (bruijn ##.expr.9.256 1 0))) ((bruijn ##.k.557 0 0) #f))
if(VDecodeBool(
VInlinePairP2(runtime,
        upenv->vars[0]))) {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 18)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k190, env)}),
      _V0define__constant,
      VInlineCar2(runtime,
        upenv->vars[0]));
} else {
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 1,
      VEncodeBool(false));
}
}
static void _V10_Dalpha__convert_D92_lambda84(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda84, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.alpha-convert-impl.104 11 8) (bruijn ##.k.555 0 0) (bruijn ##.expr.95 12 1))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 8)), 2,
      _var0,
      VGetArg(upenv, 12-1, 1));
}
static void _V10_Dalpha__convert_D92_k195(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k195, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.call-with-values (bruijn ##.k.550 9 0) (close _V10_Dalpha__convert_D92_lambda84) (bruijn ##.kk.0.243 9 1))
    VCallFuncWithGC(runtime, (VFunc)VCallValues2, 3,
      VGetArg(upenv, 9-1, 0),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda84, env)}),
      VGetArg(upenv, 9-1, 1));
}
static void _V10_Dalpha__convert_D92_lambda82(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k189) (close _V10_Dalpha__convert_D92_k195))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k189, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k195, env)}));
}
static void _V10_Dalpha__convert_D92_k188(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k188, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_lambda82) (bruijn ##.input.1.244 6 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_lambda82, .env = env }, }, 1,
      VGetArg(upenv, 6-1, 0));
}
static void _V10_Dalpha__convert_D92_lambda80(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k182) (close _V10_Dalpha__convert_D92_k188))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k182, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k188, env)}));
}
static void _V10_Dalpha__convert_D92_k181(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k181, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_lambda80) (bruijn ##.input.1.244 4 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_lambda80, .env = env }, }, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_lambda78(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k175) (close _V10_Dalpha__convert_D92_k181))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k175, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k181, env)}));
}
static void _V10_Dalpha__convert_D92_k174(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_k174, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_lambda78) (bruijn ##.input.1.244 2 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_lambda78, .env = env }, }, 1,
      upenv->up->vars[0]);
}
static void _V10_Dalpha__convert_D92_lambda76(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_k171) (close _V10_Dalpha__convert_D92_k174))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_k171, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_k174, env)}));
}
static void _V10_Dalpha__convert_D92_lambda75(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V10_Dalpha__convert_D92_lambda76) (bruijn ##.input.1.244 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_lambda76, .env = env }, }, 1,
      _var0);
}
static void _V10_Dalpha__convert_D92_lambda74(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda74, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((close _V10_Dalpha__convert_D92_lambda75) (bruijn ##.expr.95 2 1))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V10_Dalpha__convert_D92_lambda75, .env = env }, }, 1,
      upenv->up->vars[1]);
}
static void _V10_Dalpha__convert_D92_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_Dalpha__convert_D92_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (letrec 9 ((close _V10_Dapplication_Q_D96_lambda5) (close _V10_Dcombination_Q_D97_lambda6) (close _V10_Dlookup__env_D98_lambda7) (close _V10_Diter__defines_D99_lambda9) (close _V10_Diter__atom_D100_lambda22) (close _V10_Diter__letrec_D101_lambda49) (close _V10_Diter__combination_D102_lambda53) (close _V10_Diter_D103_lambda55) (close _V10_Dalpha__convert__impl_D104_lambda73)) (##vcore.call/cc (bruijn ##.k.288 1 0) (close _V10_Dalpha__convert_D92_lambda74)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[9]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 9, 9, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dapplication_Q_D96_lambda5, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dcombination_Q_D97_lambda6, env)});
    env->vars[2] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dlookup__env_D98_lambda7, env)});
    env->vars[3] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__defines_D99_lambda9, env)});
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__atom_D100_lambda22, env)});
    env->vars[5] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__letrec_D101_lambda49, env)});
    env->vars[6] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter__combination_D102_lambda53, env)});
    env->vars[7] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Diter_D103_lambda55, env)});
    env->vars[8] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert__impl_D104_lambda73, env)});
    VCallFuncWithGC(runtime, (VFunc)VCallCC2, 2,
      upenv->vars[0],
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda74, env)}));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7, VWORD _var8, VWORD _var9, VWORD _var10, VWORD _var11, VWORD _var12, VWORD _var13, VWORD _var14, VWORD _var15, VWORD _var16, VWORD _var17, VWORD _var18) {
  struct { VEnv env; VWORD argv[19]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 19, 19, upenv);
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
  // (letrec 2 ((close _V10_Dmemtail_D91_lambda3) (close _V10_Dalpha__convert_D92_lambda4)) ((bruijn ##.k.262 28 0) (##inline ##vcore.cons (##inline ##vcore.cons 'alpha-convert (bruijn ##.alpha-convert.92 0 1)) '())))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dmemtail_D91_lambda3, env)});
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_Dalpha__convert_D92_lambda4, env)});
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 28-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0alpha__convert,
        env->vars[1]),
        VNULL));
    }
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0alpha__convert_V20_lambda2) (bruijn ##.x.263 18 0) (bruijn ##.x.264 17 0) (bruijn ##.x.265 16 0) (bruijn ##.x.266 15 0) (bruijn ##.x.267 14 0) (bruijn ##.x.268 13 0) (bruijn ##.x.269 12 0) (bruijn ##.x.270 11 0) (bruijn ##.x.271 10 0) (bruijn ##.x.272 9 0) (bruijn ##.x.273 8 0) (bruijn ##.x.274 7 0) (bruijn ##.x.275 6 0) (bruijn ##.x.276 5 0) (bruijn ##.x.277 4 0) (bruijn ##.x.278 3 0) (bruijn ##.x.279 2 0) (bruijn ##.x.280 1 0) (bruijn ##.x.281 0 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_lambda2, .env = env }, }, 19,
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
static void _V0vanity_V0compiler_V0alpha__convert_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 18 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k26) 'equal?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k26, env)}),
      _V0equal_Q);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 17 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k25) 'memv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 17-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k25, env)}),
      _V0memv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 16 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k24) 'not)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 16-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k24, env)}),
      _V0not);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 15 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k23) 'assv)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 15-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k23, env)}),
      _V0assv);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 14 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k22) 'error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 14-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k22, env)}),
      _V0error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 13 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k21) 'null?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 13-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k21, env)}),
      _V0null_Q);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 12 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k20) 'cdr)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 12-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k20, env)}),
      _V0cdr);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 11 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k19) 'car)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 11-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k19, env)}),
      _V0car);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 10 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k18) 'pair?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 10-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k18, env)}),
      _V0pair_Q);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 9 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k17) 'lookup-intrinsic)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 9-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k17, env)}),
      _V0lookup__intrinsic);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 8 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k16) 'compiler-error)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k16, env)}),
      _V0compiler__error);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 7 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k15) 'symbol?)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 7-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k15, env)}),
      _V0symbol_Q);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 6 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k14) 'values)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 6-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k14, env)}),
      _V0values);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 5 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k13) 'append)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 5-1, 0)), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k13, env)}),
      _V0append);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 4 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k12) 'list)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k12, env)}),
      _V0list);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 3 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k11) 'cons)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k11, env)}),
      _V0cons);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 2 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k10) 'gensym)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k10, env)}),
      _V0gensym);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 1 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k9) 'map)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k9, env)}),
      _V0map);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.import.71 0 0) (close _V0vanity_V0compiler_V0alpha__convert_V20_k8) 'reverse)
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k8, env)}),
      _V0reverse);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0alpha__convert_V20_k7) (##string ##.string.610) (bruijn ##.x.602 5 0) (bruijn ##.x.603 4 0) (bruijn ##.x.604 3 0) (bruijn ##.x.605 2 0) (bruijn ##.x.606 1 0) (bruijn ##.x.607 0 0))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 8,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k7, env)}),
      VEncodePointer(&_V10_Dstring_D610.sym, VPOINTER_OTHER),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0);
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k6) (##string ##.string.611))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k6, env)}),
      VEncodePointer(&_V10_Dstring_D611.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k5) (##string ##.string.612))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k5, env)}),
      VEncodePointer(&_V10_Dstring_D612.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k4) (##string ##.string.613))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k4, env)}),
      VEncodePointer(&_V10_Dstring_D613.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k3) (##string ##.string.614))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k3, env)}),
      VEncodePointer(&_V10_Dstring_D614.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k2) (##string ##.string.615))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k2, env)}),
      VEncodePointer(&_V10_Dstring_D615.sym, VPOINTER_OTHER));
}
static void _V0vanity_V0compiler_V0alpha__convert_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0compiler_V0alpha__convert_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.load-library (close _V0vanity_V0compiler_V0alpha__convert_V20_k1) (##string ##.string.616))
    VCallFuncWithGC(runtime, (VFunc)VLoadLibrary2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D616.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0compiler_V0alpha__convert_V20 = (VFunc)_V0vanity_V0compiler_V0alpha__convert_V20_lambda1;
