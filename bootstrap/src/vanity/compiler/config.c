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
static struct { VBlob sym; char bytes[34]; } _V10string_D9 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 34 }, "_V0vanity_V0compiler_V0config_V20" };
VWEAK VWORD _V0version;VWEAK struct { VBlob sym; char bytes[8]; } _VW_V0version = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 8 }, "version" };
VWEAK VWORD _V0install__root;VWEAK struct { VBlob sym; char bytes[13]; } _VW_V0install__root = { { .base = { .tag = VSYMBOL, .flags = VFLAG_STATIC }, 13 }, "install-root" };
static struct { VBlob sym; char bytes[12]; } _V10string_D8 = { { .base = { .tag = VSTRING, .flags = VFLAG_STATIC | VFLAG_IMMUTABLE }, 12 }, "/usr/local/" };
static __attribute__((constructor)) void VDllMain1() {
  _V0version = VEncodePointer(VLookupConstant("_V0version", &_VW_V0version), VPOINTER_OTHER);
  _V0install__root = VEncodePointer(VLookupConstant("_V0install__root", &_VW_V0install__root), VPOINTER_OTHER);
}
static void _V0vanity_V0compiler_V0config_V20_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_k1" };
 VRecordCall2(runtime, &dbg);
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
  // (letrec 2 ((##inline ##vcore.qcons '0 (##inline ##vcore.qcons '0 '())) (##string ##string.8)) ((bruijn ##k.2 2 0) (##inline ##vcore.cons (##inline ##vcore.cons 'install-root (bruijn install-root 0 1)) (##inline ##vcore.cons (##inline ##vcore.cons 'version (bruijn version 0 0)) '()))))
    // OH NO A LETREC!
    {
    VEnv * upenv = env;
    struct { VEnv env; VWORD argv[2]; } container;
    VEnv * env = &container.env;
    VInitEnv(env, 2, 2, upenv);
    env->vars[0] = VInlineCons2(runtime,
        VEncodeInt(0l),
        VInlineCons2(runtime,
        VEncodeInt(0l),
        VNULL));
    env->vars[1] = VEncodePointer(&_V10string_D8.sym, VPOINTER_OTHER);
    V_CALL(upenv->up->vars[0], runtime,
      VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0install__root,
        env->vars[1]),
        VInlineCons2(runtime,
        VInlineCons2(runtime,
        _V0version,
        env->vars[0]),
        VNULL)));
    }
 }
}
static void _V0vanity_V0compiler_V0config_V20_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0vanity_V0compiler_V0config_V20_lambda1" };
 VRecordCall2(runtime, &dbg);
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
  // (##vcore.make-import (close _V0vanity_V0compiler_V0config_V20_k1) (##string ##string.9))
    V_CALL_FUNC(VMakeImport2, NULL, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc)_V0vanity_V0compiler_V0config_V20_k1, env)}),
      VEncodePointer(&_V10string_D9.sym, VPOINTER_OTHER));
 }
}
VFunc _V0vanity_V0compiler_V0config_V20 = (VFunc)_V0vanity_V0compiler_V0config_V20_lambda1;
