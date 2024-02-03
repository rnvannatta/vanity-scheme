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
static struct { VBlob sym; char bytes[21]; } _V10string_D55 = { { VSTRING, 21 }, "_V0vanity_V0seed_V20" };
static struct { VBlob sym; char bytes[40]; } _V10string_D54 = { { VSTRING, 40 }, "set!: procedure doesn't have a setter: " };
VWEAK VWORD _V40_V10sys_Deq_Q;VWEAK VClosure _VW_V40_V10sys_Deq_Q = { VCLOSURE, (VFunc)VEq2, NULL };
static struct { VBlob sym; char bytes[41]; } _V10string_D53 = { { VSTRING, 41 }, "set!: procedure doesn't have a mutator: " };
VWEAK VWORD _V10vcore_Dmutator;VWEAK struct { VBlob sym; char bytes[16]; } _VW_V10vcore_Dmutator = { { VSYMBOL, 16 }, "##vcore.mutator" };
VWEAK VWORD _V10vcore_Dsetter;VWEAK struct { VBlob sym; char bytes[15]; } _VW_V10vcore_Dsetter = { { VSYMBOL, 15 }, "##vcore.setter" };
VWEAK VWORD _V40_V10sys_Dset__car_B;VWEAK VClosure _VW_V40_V10sys_Dset__car_B = { VCLOSURE, (VFunc)VSetCar2, NULL };
VWEAK VWORD _V40_V10sys_Dcar;VWEAK VClosure _VW_V40_V10sys_Dcar = { VCLOSURE, (VFunc)VCar2, NULL };
VWEAK VWORD _V40_V10sys_Dset__cdr_B;VWEAK VClosure _VW_V40_V10sys_Dset__cdr_B = { VCLOSURE, (VFunc)VSetCdr2, NULL };
VWEAK VWORD _V40_V10sys_Dcdr;VWEAK VClosure _VW_V40_V10sys_Dcdr = { VCLOSURE, (VFunc)VCdr2, NULL };
VWEAK VWORD _V40_V10sys_Dvector__set_B;VWEAK VClosure _VW_V40_V10sys_Dvector__set_B = { VCLOSURE, (VFunc)VVectorSet2, NULL };
VWEAK VWORD _V40_V10sys_Dvector__ref;VWEAK VClosure _VW_V40_V10sys_Dvector__ref = { VCLOSURE, (VFunc)VVectorRef2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__set_B;VWEAK VClosure _VW_V40_V10sys_Dstring__set_B = { VCLOSURE, (VFunc)VStringSet2, NULL };
VWEAK VWORD _V40_V10sys_Dstring__ref;VWEAK VClosure _VW_V40_V10sys_Dstring__ref = { VCLOSURE, (VFunc)VStringRef2, NULL };
static __attribute__((constructor)) void VDllMain1() {
  _V40_V10sys_Deq_Q = VEncodePointer(VLookupConstant("_V40_V10sys_Deq_Q", &_VW_V40_V10sys_Deq_Q), VPOINTER_CLOSURE);
  _V10vcore_Dmutator = VEncodePointer(VLookupConstant("_V10vcore_Dmutator", &_VW_V10vcore_Dmutator), VPOINTER_OTHER);
  _V10vcore_Dsetter = VEncodePointer(VLookupConstant("_V10vcore_Dsetter", &_VW_V10vcore_Dsetter), VPOINTER_OTHER);
  _V40_V10sys_Dset__car_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dset__car_B", &_VW_V40_V10sys_Dset__car_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dcar = VEncodePointer(VLookupConstant("_V40_V10sys_Dcar", &_VW_V40_V10sys_Dcar), VPOINTER_CLOSURE);
  _V40_V10sys_Dset__cdr_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dset__cdr_B", &_VW_V40_V10sys_Dset__cdr_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dcdr = VEncodePointer(VLookupConstant("_V40_V10sys_Dcdr", &_VW_V40_V10sys_Dcdr), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector__set_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector__set_B", &_VW_V40_V10sys_Dvector__set_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dvector__ref = VEncodePointer(VLookupConstant("_V40_V10sys_Dvector__ref", &_VW_V40_V10sys_Dvector__ref), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__set_B = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__set_B", &_VW_V40_V10sys_Dstring__set_B), VPOINTER_CLOSURE);
  _V40_V10sys_Dstring__ref = VEncodePointer(VLookupConstant("_V40_V10sys_Dstring__ref", &_VW_V40_V10sys_Dstring__ref), VPOINTER_CLOSURE);
}
static void _V0vanity_V0seed_V20_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k9, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.40 5 0) (bruijn set-setter! 5 1))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0seed_V20_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-setter! 4 1) (close _V0vanity_V0seed_V20_k9) (##intrinsic ##sys.string-ref) (##intrinsic ##sys.string-set!))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k9, env)}),
      _V40_V10sys_Dstring__ref,
      _V40_V10sys_Dstring__set_B);
 }
}
static void _V0vanity_V0seed_V20_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-setter! 3 1) (close _V0vanity_V0seed_V20_k8) (##intrinsic ##sys.vector-ref) (##intrinsic ##sys.vector-set!))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k8, env)}),
      _V40_V10sys_Dvector__ref,
      _V40_V10sys_Dvector__set_B);
 }
}
static void _V0vanity_V0seed_V20_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-setter! 2 1) (close _V0vanity_V0seed_V20_k7) (##intrinsic ##sys.cdr) (##intrinsic ##sys.set-cdr!))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k7, env)}),
      _V40_V10sys_Dcdr,
      _V40_V10sys_Dset__cdr_B);
 }
}
static void _V0vanity_V0seed_V20_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k5" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-setter! 1 1) (close _V0vanity_V0seed_V20_k6) (##intrinsic ##sys.car) (##intrinsic ##sys.set-car!))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k6, env)}),
      _V40_V10sys_Dcar,
      _V40_V10sys_Dset__car_B);
 }
}
static void _V0vanity_V0seed_V20_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda4" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda4, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn set-setter! 0 1) (close _V0vanity_V0seed_V20_k5) (bruijn ##vcore.setter 4 2) (bruijn set-setter! 0 1))
V_CALL(_var1, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k5, env)}),
      upenv->up->up->up->vars[2],
      _var1);
 }
}
static void _V0vanity_V0seed_V20_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k19" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k19, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.14 5 0) (bruijn set-mutator! 5 1))
V_CALL(VGetArg(upenv, 5-1, 0), runtime,
      VGetArg(upenv, 5-1, 1));
 }
}
static void _V0vanity_V0seed_V20_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k21" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k21, runtime, upenv, 1, argc, _var0) {
  // (##sys.string-set! (bruijn ##k.20 2 0) (bruijn vec 2 1) (bruijn i 2 2) (bruijn ##x.21 0 0))
    V_CALL_FUNC(VStringSet2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0seed_V20_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k20" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn proc 1 3) (close _V0vanity_V0seed_V20_k21) (bruijn ##x.22 0 0))
V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k21, env)}),
      _var0);
 }
}
static void _V0vanity_V0seed_V20_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda6" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda6, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda6, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##sys.string-ref (close _V0vanity_V0seed_V20_k20) (bruijn vec 0 1) (bruijn i 0 2))
    V_CALL_FUNC(VStringRef2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k20, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0seed_V20_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k18" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-mutator! 4 1) (close _V0vanity_V0seed_V20_k19) (##intrinsic ##sys.string-ref) (close _V0vanity_V0seed_V20_lambda6))
V_CALL(upenv->up->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k19, env)}),
      _V40_V10sys_Dstring__ref,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda6, env)}));
 }
}
static void _V0vanity_V0seed_V20_k23(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k23" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k23, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k23, runtime, upenv, 1, argc, _var0) {
  // (##sys.vector-set! (bruijn ##k.23 2 0) (bruijn vec 2 1) (bruijn i 2 2) (bruijn ##x.24 0 0))
    V_CALL_FUNC(VVectorSet2, NULL, runtime,
      upenv->up->vars[0],
      upenv->up->vars[1],
      upenv->up->vars[2],
      _var0);
 }
}
static void _V0vanity_V0seed_V20_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k22" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k22, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn proc 1 3) (close _V0vanity_V0seed_V20_k23) (bruijn ##x.25 0 0))
V_CALL(upenv->vars[3], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k23, env)}),
      _var0);
 }
}
static void _V0vanity_V0seed_V20_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda7" };
 VRecordCall2(runtime, &dbg);
 if(argc != 4) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda7, got ~D~N"
  "-- expected 4~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda7, runtime, upenv, 4, argc, _var0, _var1, _var2, _var3) {
  struct { VEnv env; VWORD argv[4]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 4; env->var_len = 4; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  // (##sys.vector-ref (close _V0vanity_V0seed_V20_k22) (bruijn vec 0 1) (bruijn i 0 2))
    V_CALL_FUNC(VVectorRef2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k22, env)}),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0seed_V20_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k17" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-mutator! 3 1) (close _V0vanity_V0seed_V20_k18) (##intrinsic ##sys.vector-ref) (close _V0vanity_V0seed_V20_lambda7))
V_CALL(upenv->up->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k18, env)}),
      _V40_V10sys_Dvector__ref,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda7, env)}));
 }
}
static void _V0vanity_V0seed_V20_k24(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k24" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k24, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k24, runtime, upenv, 1, argc, _var0) {
  // (##sys.set-cdr! (bruijn ##k.26 1 0) (bruijn pair 1 1) (bruijn ##x.27 0 0))
    V_CALL_FUNC(VSetCdr2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0seed_V20_lambda8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda8" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda8, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda8, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn proc 0 2) (close _V0vanity_V0seed_V20_k24) (##inline ##sys.cdr (bruijn pair 0 1)))
V_CALL(_var2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k24, env)}),
      VInlineCdr(
        _var1));
 }
}
static void _V0vanity_V0seed_V20_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k16" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-mutator! 2 1) (close _V0vanity_V0seed_V20_k17) (##intrinsic ##sys.cdr) (close _V0vanity_V0seed_V20_lambda8))
V_CALL(upenv->up->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k17, env)}),
      _V40_V10sys_Dcdr,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda8, env)}));
 }
}
static void _V0vanity_V0seed_V20_k25(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k25" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k25, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k25, runtime, upenv, 1, argc, _var0) {
  // (##sys.set-car! (bruijn ##k.29 1 0) (bruijn pair 1 1) (bruijn ##x.30 0 0))
    V_CALL_FUNC(VSetCar2, NULL, runtime,
      upenv->vars[0],
      upenv->vars[1],
      _var0);
 }
}
static void _V0vanity_V0seed_V20_lambda9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda9" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda9, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda9, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn proc 0 2) (close _V0vanity_V0seed_V20_k25) (##inline ##sys.car (bruijn pair 0 1)))
V_CALL(_var2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k25, env)}),
      VInlineCar(
        _var1));
 }
}
static void _V0vanity_V0seed_V20_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn set-mutator! 1 1) (close _V0vanity_V0seed_V20_k16) (##intrinsic ##sys.car) (close _V0vanity_V0seed_V20_lambda9))
V_CALL(upenv->vars[1], runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k16, env)}),
      _V40_V10sys_Dcar,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda9, env)}));
 }
}
static void _V0vanity_V0seed_V20_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda5" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.set-setter! 9 3) (close _V0vanity_V0seed_V20_k15) (bruijn ##vcore.mutator 9 5) (bruijn set-mutator! 0 1))
V_CALL(VGetArg(upenv, 9-1, 3), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k15, env)}),
      VGetArg(upenv, 9-1, 5),
      _var1);
 }
}
static void _V0vanity_V0seed_V20_k27(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k27" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k27, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k27, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 10 0) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.setter) (bruijn ##vcore.setter 10 2)) (##inline ##sys.cons (##inline ##sys.cons (quote ##vcore.mutator) (bruijn ##vcore.mutator 10 5)) (quote ()))))
V_CALL(VGetArg(upenv, 10-1, 0), runtime,
      VInlineCons(
        VInlineCons(
        _V10vcore_Dsetter,
        VGetArg(upenv, 10-1, 2)),
        VInlineCons(
        VInlineCons(
        _V10vcore_Dmutator,
        VGetArg(upenv, 10-1, 5)),
        VNULL)));
 }
}
static void _V0vanity_V0seed_V20_k26(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k26" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k26, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k26, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k27) (bruijn ##vcore.set-mutator! 9 6) (bruijn ##x.13 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k27, env)}),
      VEncodeInt(9l), VEncodeInt(6l),
      _var0
    );
 }
}
static void _V0vanity_V0seed_V20_lambda10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda10, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda10, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.hash-table-set! (bruijn ##k.32 0 0) (bruijn mutator-table 9 4) (bruijn getter 0 1) (bruijn mutator 0 2))
    V_CALL_FUNC(VHashTableSet, NULL, runtime,
      _var0,
      VGetArg(upenv, 9-1, 4),
      _var1,
      _var2);
 }
}
static void _V0vanity_V0seed_V20_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_lambda5) (close _V0vanity_V0seed_V20_k26) (close _V0vanity_V0seed_V20_lambda10))
V_CALL_FUNC(_V0vanity_V0seed_V20_lambda5, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k26, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda10, env)}));
 }
}
static void _V10vcore_Dmutator_k31(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_k31" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dmutator_k31, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_k31, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.34 4 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10vcore_Dmutator_k30(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_k30" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dmutator_k30, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_k30, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.newline (close _V10vcore_Dmutator_k31) (bruijn err 2 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_k31, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10vcore_Dmutator_k29(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_k29" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dmutator_k29, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_k29, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.write (close _V10vcore_Dmutator_k30) (bruijn func 3 1) (bruijn err 1 0))
    V_CALL_FUNC(VWrite2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_k30, env)}),
      upenv->up->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V10vcore_Dmutator_k28(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_k28" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dmutator_k28, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_k28, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V10vcore_Dmutator_k29) (##string ##string.53) (bruijn err 0 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_k29, env)}),
      VEncodePointer(&_V10string_D53.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10vcore_Dmutator_lambda12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_lambda12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dmutator_lambda12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_lambda12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stderr->port (close _V10vcore_Dmutator_k28))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_k28, env)}));
 }
}
static void _V10vcore_Dmutator_lambda11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10vcore_Dmutator_lambda11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10vcore_Dmutator_lambda11, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dmutator_lambda11, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##k.33 0 0) (bruijn mutator-table 8 4) (bruijn func 0 1) (close _V10vcore_Dmutator_lambda12))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      VGetArg(upenv, 8-1, 4),
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_lambda12, env)}));
 }
}
static void _V0vanity_V0seed_V20_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k13, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k14) (bruijn ##vcore.mutator 7 5) (close _V10vcore_Dmutator_lambda11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k14, env)}),
      VEncodeInt(7l), VEncodeInt(5l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dmutator_lambda11, env)})
    );
 }
}
static void _V0vanity_V0seed_V20_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k12" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k13) (bruijn mutator-table 6 4) (bruijn ##x.38 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k13, env)}),
      VEncodeInt(6l), VEncodeInt(4l),
      _var0
    );
 }
}
static void _V0vanity_V0seed_V20_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k11" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_k12) (##intrinsic ##sys.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k12, env)}),
      _V40_V10sys_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
static void _V0vanity_V0seed_V20_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k10" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k11) (bruijn ##vcore.set-setter! 4 3) (bruijn ##x.39 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k11, env)}),
      VEncodeInt(4l), VEncodeInt(3l),
      _var0
    );
 }
}
static void _V0vanity_V0seed_V20_lambda13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda13" };
 VRecordCall2(runtime, &dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda13, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda13, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  // (##vcore.hash-table-set! (bruijn ##k.46 0 0) (bruijn setter-table 4 1) (bruijn getter 0 1) (bruijn setter 0 2))
    V_CALL_FUNC(VHashTableSet, NULL, runtime,
      _var0,
      upenv->up->up->up->vars[1],
      _var1,
      _var2);
 }
}
static void _V0vanity_V0seed_V20_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k4" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_lambda4) (close _V0vanity_V0seed_V20_k10) (close _V0vanity_V0seed_V20_lambda13))
V_CALL_FUNC(_V0vanity_V0seed_V20_lambda4, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k10, env)}),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_lambda13, env)}));
 }
}
static void _V10vcore_Dsetter_k35(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_k35" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dsetter_k35, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_k35, runtime, upenv, 1, argc, _var0) {
  // (##sys.abort (bruijn ##k.48 4 0))
    V_CALL_FUNC(VAbort2, NULL, runtime,
      upenv->up->up->up->vars[0]);
 }
}
static void _V10vcore_Dsetter_k34(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_k34" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dsetter_k34, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_k34, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.newline (close _V10vcore_Dsetter_k35) (bruijn err 2 0))
    V_CALL_FUNC(VNewline2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_k35, env)}),
      upenv->up->vars[0]);
 }
}
static void _V10vcore_Dsetter_k33(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_k33" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dsetter_k33, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_k33, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.write (close _V10vcore_Dsetter_k34) (bruijn func 3 1) (bruijn err 1 0))
    V_CALL_FUNC(VWrite2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_k34, env)}),
      upenv->up->up->vars[1],
      upenv->vars[0]);
 }
}
static void _V10vcore_Dsetter_k32(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_k32" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dsetter_k32, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_k32, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.display-word (close _V10vcore_Dsetter_k33) (##string ##string.54) (bruijn err 0 0))
    V_CALL_FUNC(VDisplay2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_k33, env)}),
      VEncodePointer(&_V10string_D54.sym, VPOINTER_OTHER),
      _var0);
 }
}
static void _V10vcore_Dsetter_lambda15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_lambda15" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V10vcore_Dsetter_lambda15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_lambda15, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##sys.stderr->port (close _V10vcore_Dsetter_k32))
    V_CALL_FUNC(VStderrPort, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_k32, env)}));
 }
}
static void _V10vcore_Dsetter_lambda14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "_V10vcore_Dsetter_lambda14" };
 VRecordCall2(runtime, &dbg);
 if(argc != 2) {
  VError("Not enough arguments to _V10vcore_Dsetter_lambda14, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V10vcore_Dsetter_lambda14, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // (##vcore.hash-table-ref (bruijn ##k.47 0 0) (bruijn setter-table 3 1) (bruijn func 0 1) (close _V10vcore_Dsetter_lambda15))
    V_CALL_FUNC(VHashTableRef, NULL, runtime,
      _var0,
      upenv->up->up->vars[1],
      _var1,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_lambda15, env)}));
 }
}
static void _V0vanity_V0seed_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k3" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k4) (bruijn ##vcore.setter 2 2) (close _V10vcore_Dsetter_lambda14))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k4, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V10vcore_Dsetter_lambda14, env)})
    );
 }
}
static void _V0vanity_V0seed_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k2" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0seed_V20_k3) (bruijn setter-table 1 1) (bruijn ##x.52 0 0))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k3, env)}),
      VEncodeInt(1l), VEncodeInt(1l),
      _var0
    );
 }
}
static void _V0vanity_V0seed_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda3" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda3, runtime, upenv, 7, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6) {
  struct { VEnv env; VWORD argv[7]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 7; env->var_len = 7; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  // (##vcore.make-hash-table (close _V0vanity_V0seed_V20_k2) (##intrinsic ##sys.eq?) #f 32)
    V_CALL_FUNC(VMakeHashTable, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k2, env)}),
      _V40_V10sys_Deq_Q,
      VEncodeBool(false),
      VEncodeInt(32l));
 }
}
static void _V0vanity_V0seed_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda2" };
 VRecordCall2(runtime, &dbg);
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_lambda3) (bruijn ##k.2 0 0) #f #f #f #f #f #f)
V_CALL_FUNC(_V0vanity_V0seed_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0seed_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_k1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close _V0vanity_V0seed_V20_lambda2) (bruijn ##k.1 1 0))
V_CALL_FUNC(_V0vanity_V0seed_V20_lambda2, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0seed_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0seed_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0seed_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0seed_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0seed_V20_k1) (##string ##string.55))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0seed_V20_k1, env)}),
      VEncodePointer(&_V10string_D55.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0seed_V20 = (VFunc)_V0vanity_V0seed_V20_lambda1;
