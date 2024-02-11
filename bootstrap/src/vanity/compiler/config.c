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
static struct { VBlob sym; char bytes[34]; } _V10string_D12 = { { .base = { .tag = VSTRING }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
static struct { VBlob sym; char bytes[12]; } _V10string_D11 = { { .base = { .tag = VSTRING }, 12 }, "/usr/local/" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL }, 8 }, "version" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL }, 13 }, "install-root" };
static __attribute__((constructor)) void VDllMain1() {
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0config_V20_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0config_V20_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_k3, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.3 2 0) (##inline ##sys.cons (##inline ##sys.cons (quote install-root) (bruijn install-root 2 2)) (##inline ##sys.cons (##inline ##sys.cons (quote version) (bruijn version 2 1)) (quote ()))))
V_CALL(upenv->up->vars[0], runtime,
      VInlineCons(
        VInlineCons(
        _V0install__root,
        upenv->up->vars[2]),
        VInlineCons(
        VInlineCons(
        _V0version,
        upenv->up->vars[1]),
        VNULL)));
 }
}
static void _V0vanity_V0compiler_V0config_V20_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0config_V20_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (set! (close _V0vanity_V0compiler_V0config_V20_k3) (bruijn install-root 1 2) (##string ##string.11))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_k3, env)}),
      VEncodeInt(1l), VEncodeInt(2l),
      VEncodePointer(&_V10string_D11.sym, VPOINTER_OTHER)
    );
 }
}
static void _V0vanity_V0compiler_V0config_V20_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_lambda3, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 3, 3, upenv);
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close _V0vanity_V0compiler_V0config_V20_k2) (bruijn version 0 1) (##inline ##sys.qcons (quote 0) (##inline ##sys.qcons (quote 0) (quote ()))))
    V_CALL_FUNC(VSetEnvVar2, env, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_k2, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VInlineCons(
        VEncodeInt(0l),
        VInlineCons(
        VEncodeInt(0l),
        VNULL))
    );
 }
}
static void _V0vanity_V0compiler_V0config_V20_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_lambda2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0config_V20_lambda3) (bruijn ##k.2 0 0) #f #f)
V_CALL_FUNC(_V0vanity_V0compiler_V0config_V20_lambda3, env, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false));
 }
}
static void _V0vanity_V0compiler_V0config_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0config_V20_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // ((close _V0vanity_V0compiler_V0config_V20_lambda2) (bruijn ##k.1 1 0))
V_CALL_FUNC(_V0vanity_V0compiler_V0config_V20_lambda2, env, runtime,
      upenv->vars[0]);
 }
}
static void _V0vanity_V0compiler_V0config_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 if(argc != 1) {
  VError("Not enough arguments to _V0vanity_V0compiler_V0config_V20_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc)_V0vanity_V0compiler_V0config_V20_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  VInitEnv(env, 1, 1, upenv);
  env->vars[0] = _var0;
  // (##vcore.make-import (close _V0vanity_V0compiler_V0config_V20_k1) (##string ##string.12))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_k1, env)}),
      VEncodePointer(&_V10string_D12.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0config_V20 = (VFunc)_V0vanity_V0compiler_V0config_V20_lambda1;
