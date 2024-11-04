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
static struct { VBlob sym; char bytes[21]; } _V10_Dstring_D74 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 21 }, "_V0vanity_V0seed_V20" };
VWEAK VWORD _V40_V10vcore_Deq_Q;VWEAK VClosure _VW_V40_V10vcore_Deq_Q = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VEq2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__car_B;VWEAK VClosure _VW_V40_V10vcore_Dset__car_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dset__cdr_B;VWEAK VClosure _VW_V40_V10vcore_Dset__cdr_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__set_B;VWEAK VClosure _VW_V40_V10vcore_Dvector__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__set_B;VWEAK VClosure _VW_V40_V10vcore_Dstring__set_B = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10vcore_Dcar;VWEAK VClosure _VW_V40_V10vcore_Dcar = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10vcore_Dcdr;VWEAK VClosure _VW_V40_V10vcore_Dcdr = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10vcore_Dvector__ref;VWEAK VClosure _VW_V40_V10vcore_Dvector__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10vcore_Dstring__ref;VWEAK VClosure _VW_V40_V10vcore_Dstring__ref = { .base = { .tag = VCLOSURE, .flags = VFLAG_STATIC }, (VFunc)VStringRef2, NULL };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 15 }, "##vcore.setter" };
static struct { VBlob sym; char bytes[41]; } _V10_Dstring_D73 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 41 }, "set!: procedure doesn't have a mutator: " };
static struct { VBlob sym; char bytes[40]; } _V10_Dstring_D72 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 40 }, "set!: procedure doesn't have a setter: " };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10vcore_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10vcore_Deq_Q", &_VW_V40_V10vcore_Deq_Q), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__car_B", &_VW_V40_V10vcore_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dset__cdr_B", &_VW_V40_V10vcore_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__set_B", &_VW_V40_V10vcore_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__set_B", &_VW_V40_V10vcore_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcar = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcar", &_VW_V40_V10vcore_Dcar), VPOINTER_CLOSURE);
  _V40_V10vcore_Dcdr = VEncodePointer(VLookupConstant("_V40_V10vcore_Dcdr", &_VW_V40_V10vcore_Dcdr), VPOINTER_CLOSURE);
  _V40_V10vcore_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dvector__ref", &_VW_V40_V10vcore_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10vcore_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10vcore_Dstring__ref", &_VW_V40_V10vcore_Dstring__ref), VPOINTER_CLOSURE);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
}
static void _V10_D_Dvcore_Dsetter_D2_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.abort (bruijn ##.k.31 4 0))
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_D_Dvcore_Dsetter_D2_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.newline (close _V10_D_Dvcore_Dsetter_D2_k7) (bruijn ##.err.8 2 0))
    VCallFuncWithGC(runtime, (VFunc)VNewline2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_k7, env)}),
      upenv->up->vars[0]);
}
static void _V10_D_Dvcore_Dsetter_D2_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.write (close _V10_D_Dvcore_Dsetter_D2_k6) (bruijn ##.func.7 3 1) (bruijn ##.err.8 1 0))
    VCallFuncWithGC(runtime, (VFunc)VWrite2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_k6, env)}),
      upenv->up->up->vars[1],
      upenv->vars[0]);
}
static void _V10_D_Dvcore_Dsetter_D2_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V10_D_Dvcore_Dsetter_D2_k5) (##string ##.string.72) (bruijn ##.err.8 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDisplay2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_k5, env)}),
      VEncodePointer(&_V10_Dstring_D72.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_D_Dvcore_Dsetter_D2_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_lambda3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stderr->port (close _V10_D_Dvcore_Dsetter_D2_k4))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_k4, env)}));
}
static void _V10_D_Dvcore_Dsetter_D2_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dsetter_D2_lambda2, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.k.30 0 0) (bruijn ##.setter-table.1 1 0) (bruijn ##.func.7 0 1) (close _V10_D_Dvcore_Dsetter_D2_lambda3))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      upenv->vars[0],
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_lambda3, env)}));
}
static void _V10_D_Dvcore_Dmutator_D5_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.abort (bruijn ##.k.37 4 0))
    VCallFuncWithGC(runtime, (VFunc)VAbort2, 1,
      upenv->up->up->up->vars[0]);
}
static void _V10_D_Dvcore_Dmutator_D5_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.newline (close _V10_D_Dvcore_Dmutator_D5_k11) (bruijn ##.err.10 2 0))
    VCallFuncWithGC(runtime, (VFunc)VNewline2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_k11, env)}),
      upenv->up->vars[0]);
}
static void _V10_D_Dvcore_Dmutator_D5_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.write (close _V10_D_Dvcore_Dmutator_D5_k10) (bruijn ##.func.9 3 1) (bruijn ##.err.10 1 0))
    VCallFuncWithGC(runtime, (VFunc)VWrite2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_k10, env)}),
      upenv->up->up->vars[1],
      upenv->vars[0]);
}
static void _V10_D_Dvcore_Dmutator_D5_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.display-word (close _V10_D_Dvcore_Dmutator_D5_k9) (##string ##.string.73) (bruijn ##.err.10 0 0))
    VCallFuncWithGC(runtime, (VFunc)VDisplay2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_k9, env)}),
      VEncodePointer(&_V10_Dstring_D73.sym, VPOINTER_OTHER),
      _var0);
}
static void _V10_D_Dvcore_Dmutator_D5_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_lambda5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.stderr->port (close _V10_D_Dvcore_Dmutator_D5_k8))
    VCallFuncWithGC(runtime, (VFunc)VStderrPort, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_k8, env)}));
}
static void _V10_D_Dvcore_Dmutator_D5_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 if(argc != 2) {
  VErrorC(runtime, "Not enough arguments to _V10_D_Dvcore_Dmutator_D5_lambda4, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 2, 2, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##.k.36 0 0) (bruijn ##.mutator-table.4 1 3) (bruijn ##.func.9 0 1) (close _V10_D_Dvcore_Dmutator_D5_lambda5))
    VCallFuncWithGC(runtime, (VFunc)VHashTableRef, 4,
      _var0,
      upenv->vars[3],
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_lambda5, env)}));
}
static void _V0vanity_V0seed_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // ((bruijn ##.k.28 18 0) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.setter (bruijn ##..vcore.setter.2 14 1)) (##inline ##vcore.cons (##inline ##vcore.cons '##vcore.mutator (bruijn ##..vcore.mutator.5 14 4)) '())))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 18-1, 0)), 1,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dsetter,
        VGetArg(upenv, 14-1, 1)),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V10vcore_Dmutator,
        VGetArg(upenv, 14-1, 4)),
        VNULL)));
}
static void _V0vanity_V0seed_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k23) (bruijn ##..vcore.set-mutator!.6 13 5) (bruijn ##.set-mutator!.14 5 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k23, env)}),
      VEncodeInt(13l), VEncodeInt(5l),
      VGetArg(upenv, 5-1, 0)
    );
}
static void _V0vanity_V0seed_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.string-set! (bruijn ##.k.53 2 0) (bruijn ##.vec.22 2 1) (bruijn ##.i.23 2 2) (bruijn ##.x.54 0 0))
    VCallFuncWithGC(runtime, (VFunc)VStringSet2, 4,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
}
static void _V0vanity_V0seed_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.proc.24 1 3) (close _V0vanity_V0seed_V20_k25) (bruijn ##.x.55 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[3]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k25, env)}),
      _var0);
}
static void _V0vanity_V0seed_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda8, got ~D~N"
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
  // (##vcore.string-ref (close _V0vanity_V0seed_V20_k24) (bruijn ##.vec.22 0 1) (bruijn ##.i.23 0 2))
    VCallFuncWithGC(runtime, (VFunc)VStringRef2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k24, env)}),
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-mutator!.14 4 0) (close _V0vanity_V0seed_V20_k22) (##intrinsic ##vcore.string-ref) (close _V0vanity_V0seed_V20_lambda8))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k22, env)}),
      _V40_V10vcore_Dstring__ref,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda8, env)}));
}
static void _V0vanity_V0seed_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.vector-set! (bruijn ##.k.56 2 0) (bruijn ##.vec.19 2 1) (bruijn ##.i.20 2 2) (bruijn ##.x.57 0 0))
    VCallFuncWithGC(runtime, (VFunc)VVectorSet2, 4,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
}
static void _V0vanity_V0seed_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.proc.21 1 3) (close _V0vanity_V0seed_V20_k27) (bruijn ##.x.58 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[3]), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k27, env)}),
      _var0);
}
static void _V0vanity_V0seed_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 if(argc != 4) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda9, got ~D~N"
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
  // (##vcore.vector-ref (close _V0vanity_V0seed_V20_k26) (bruijn ##.vec.19 0 1) (bruijn ##.i.20 0 2))
    VCallFuncWithGC(runtime, (VFunc)VVectorRef2, 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k26, env)}),
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-mutator!.14 3 0) (close _V0vanity_V0seed_V20_k21) (##intrinsic ##vcore.vector-ref) (close _V0vanity_V0seed_V20_lambda9))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k21, env)}),
      _V40_V10vcore_Dvector__ref,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda9, env)}));
}
static void _V0vanity_V0seed_V20_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-cdr! (bruijn ##.k.59 1 0) (bruijn ##.pair.17 1 1) (bruijn ##.x.60 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCdr2, 3,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.proc.18 0 2) (close _V0vanity_V0seed_V20_k28) (##inline ##vcore.cdr (bruijn ##.pair.17 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k28, env)}),
      VInlineCdr2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-mutator!.14 2 0) (close _V0vanity_V0seed_V20_k20) (##intrinsic ##vcore.cdr) (close _V0vanity_V0seed_V20_lambda10))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k20, env)}),
      _V40_V10vcore_Dcdr,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda10, env)}));
}
static void _V0vanity_V0seed_V20_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  // (##vcore.set-car! (bruijn ##.k.62 1 0) (bruijn ##.pair.15 1 1) (bruijn ##.x.63 0 0))
    VCallFuncWithGC(runtime, (VFunc)VSetCar2, 3,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda11, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn ##.proc.16 0 2) (close _V0vanity_V0seed_V20_k29) (##inline ##vcore.car (bruijn ##.pair.15 0 1)))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var2), 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k29, env)}),
      VInlineCar2(runtime,
        _var1));
}
static void _V0vanity_V0seed_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-mutator!.14 1 0) (close _V0vanity_V0seed_V20_k19) (##intrinsic ##vcore.car) (close _V0vanity_V0seed_V20_lambda11))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k19, env)}),
      _V40_V10vcore_Dcar,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda11, env)}));
}
static void _V0vanity_V0seed_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##..vcore.set-setter!.3 8 2) (close _V0vanity_V0seed_V20_k18) (bruijn ##..vcore.mutator.5 8 4) (bruijn ##.set-mutator!.14 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, VGetArg(upenv, 8-1, 2)), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k18, env)}),
      VGetArg(upenv, 8-1, 4),
      _var0);
}
static void _V0vanity_V0seed_V20_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda12, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.47 0 0) (bruijn ##.mutator-table.4 8 3) (bruijn ##.getter.25 0 1) (bruijn ##.mutator.26 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      VGetArg(upenv, 8-1, 3),
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_lambda7) (close _V0vanity_V0seed_V20_lambda12))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0seed_V20_lambda7, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda12, env)}));
}
static void _V0vanity_V0seed_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k17) (bruijn ##..vcore.set-setter!.3 6 2) (bruijn ##.set-setter!.11 5 0))
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)VSetEnvVar2, .env = env }, }, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k17, env)}),
      VEncodeInt(6l), VEncodeInt(2l),
      VGetArg(upenv, 5-1, 0)
    );
}
static void _V0vanity_V0seed_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-setter!.11 4 0) (close _V0vanity_V0seed_V20_k16) (##intrinsic ##vcore.string-ref) (##intrinsic ##vcore.string-set!))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k16, env)}),
      _V40_V10vcore_Dstring__ref,
      _V40_V10vcore_Dstring__set_B);
}
static void _V0vanity_V0seed_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-setter!.11 3 0) (close _V0vanity_V0seed_V20_k15) (##intrinsic ##vcore.vector-ref) (##intrinsic ##vcore.vector-set!))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k15, env)}),
      _V40_V10vcore_Dvector__ref,
      _V40_V10vcore_Dvector__set_B);
}
static void _V0vanity_V0seed_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-setter!.11 2 0) (close _V0vanity_V0seed_V20_k14) (##intrinsic ##vcore.cdr) (##intrinsic ##vcore.set-cdr!))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->up->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k14, env)}),
      _V40_V10vcore_Dcdr,
      _V40_V10vcore_Dset__cdr_B);
}
static void _V0vanity_V0seed_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-setter!.11 1 0) (close _V0vanity_V0seed_V20_k13) (##intrinsic ##vcore.car) (##intrinsic ##vcore.set-car!))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, upenv->vars[0]), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k13, env)}),
      _V40_V10vcore_Dcar,
      _V40_V10vcore_Dset__car_B);
}
static void _V0vanity_V0seed_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((bruijn ##.set-setter!.11 0 0) (close _V0vanity_V0seed_V20_k12) (bruijn ##..vcore.setter.2 1 1) (bruijn ##.set-setter!.11 0 0))
    VCallDecodedWithGC(runtime, VDecodeClosureApply2(runtime, _var0), 3,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k12, env)}),
      upenv->vars[1],
      _var0);
}
static void _V0vanity_V0seed_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 if(argc != 3) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
  // (##vcore.hash-table-set! (bruijn ##.k.66 0 0) (bruijn ##.setter-table.1 1 0) (bruijn ##.getter.12 0 1) (bruijn ##.setter.13 0 2))
    VCallFuncWithGC(runtime, (VFunc)VHashTableSet, 4,
      _var0,
      upenv->vars[0],
      _var1,
      _var2);
}
static void _V0vanity_V0seed_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (letrec 6 ((bruijn ##.x.29 2 0) (close _V10_D_Dvcore_Dsetter_D2_lambda2) #f (bruijn ##.x.35 1 0) (close _V10_D_Dvcore_Dmutator_D5_lambda4) #f) ((close _V0vanity_V0seed_V20_lambda6) (close _V0vanity_V0seed_V20_lambda13)))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[6]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 6, 6, upenv);
    env->vars[0] = upenv->up->vars[0];
    env->vars[1] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dsetter_D2_lambda2, env)});
    env->vars[2] = VEncodeBool(false);
    env->vars[3] = upenv->vars[0];
    env->vars[4] = VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10_D_Dvcore_Dmutator_D5_lambda4, env)});
    env->vars[5] = VEncodeBool(false);
    VCallDecodedWithGC(runtime, (VClosure[]){ { .func = (VFunc)_V0vanity_V0seed_V20_lambda6, .env = env }, }, 1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda13, env)}));
    }
}
static void _V0vanity_V0seed_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_k3) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k3, env)}),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
static void _V0vanity_V0seed_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_k2) (##intrinsic ##vcore.eq?) #f 32)
    VCallFuncWithGC(runtime, (VFunc)VMakeHashTable, 4,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k2, env)}),
      _V40_V10vcore_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
}
static void _V0vanity_V0seed_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VErrorC(runtime, "Not enough arguments to _V0vanity_V0seed_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0seed_V20_k1) (##string ##.string.74))
    VCallFuncWithGC(runtime, (VFunc)VMakeImport2, 2,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k1, env)}),
      VEncodePointer(&_V10_Dstring_D74.sym, VPOINTER_OTHER));
}
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_lambda1;
