/* Copyright 2023 Richard N Van Natta
 *
 * This file is part of the Vanity Scheme Compiler.
 *
 * The Vanity Scheme Compiler is free software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation, either version 3 of the
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
 * This work is published with additional permission under GNU GPL
 * Version 3.0 Section 7, the Vanity Scheme Macro Exceptions, which
 * should have been included with the Vanity Scheme Compiler.
 *
 * If not, visit <https://github.com/rnvannatta>
 */
#include "vscheme/vruntime.h"
#include "vscheme/vlibrary.h"
#include "vscheme/vinlines.h"
#include <stdarg.h>
static struct { VBlob sym; char bytes[21]; } _V10string_D35 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D34 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[7]; } _V0format = { { VSYMBOL, 7 }, "format" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0filter = { { VSYMBOL, 7 }, "filter" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[8]; } _V10string_D33 = { { VSTRING, 8 }, "##~A.~A" };
static void utils_k13(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k13" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k13, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k13, runtime, upenv, 1, argc, _var0) {
  // ((bruijn string->symbol 7 2) (bruijn ##k.12 3 0) (bruijn ##x.14 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 7-1, 2)), runtime,
      upenv->up->up->vars[0],
      _var0
    );
 }
}
static void utils_k12(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k12" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k12, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k12, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn format 6 3) (close utils_k13) (##string ##string.33) (bruijn base 2 1) (bruijn x 3 1))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 3)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k13, env)}),
      VEncodePointer(&_V10string_D33.sym, VPOINTER_OTHER),
      upenv->up->vars[1],
      upenv->up->up->vars[1]
    );
 }
}
static void utils_k11(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k11" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k11, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k11, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close utils_k12) (bruijn x 2 1) (bruijn ##x.15 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k12, env)}),
      VEncodeInt(2l), VEncodeInt(1l),
      _var0
    );
 }
}
static void utils_lambda6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "utils_lambda6" };
 VRecordCall(&dbg);
 if(argc != 2) {
  VError("Not enough arguments to utils_lambda6, got ~D~N"
  "-- expected 2~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda6, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn + 4 1) (close utils_k11) (bruijn x 1 1) 1)
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k11, env)}),
      upenv->vars[1],
      VEncodeInt(1l)
    );
 }
}
static void utils_lambda5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "utils_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda5, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##k.11 0 0) (close utils_lambda6))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var0), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_lambda6, env)})
    );
 }
}
static void utils_k15(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k15" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k15, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k15, runtime, upenv, 1, argc, _var0) {
  // ((bruijn ##k.4 3 0) (##inline ##sys.cons (##inline ##sys.cons (quote gensym) (bruijn gensym 3 2)) (##inline ##sys.cons (##inline ##sys.cons (quote filter) (bruijn filter 3 1)) (quote ()))))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[0]), runtime,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER),
      upenv->up->up->vars[2]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0filter.sym, VPOINTER_OTHER),
      upenv->up->up->vars[1]
    )
,
      VNULL
    )

    )

    );
 }
}
static void utils_k14(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k14" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k14, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k14, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (set! (close utils_k15) (bruijn gensym 2 2) (bruijn ##x.10 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k15, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      _var0
    );
 }
}
static void utils_k10(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k10" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k10, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k10, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close utils_lambda5) (close utils_k14) 0)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)utils_lambda5, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k14, env)}),
      VEncodeInt(0l)
    );
 }
}
static void _V0filter_k21(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k21" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k21, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k21, runtime, upenv, 1, argc, _var0) {
  // ((bruijn cons 8 6) (bruijn ##k.16 6 0) (bruijn ##x.19 2 0) (bruijn ##x.20 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 8-1, 6)), runtime,
      VGetArg(upenv, 6-1, 0),
      upenv->up->vars[0],
      _var0
    );
 }
}
static void _V0filter_k20(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k20" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k20, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k20, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn filter 6 1) (close _V0filter_k21) (bruijn p 5 1) (bruijn ##x.21 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k21, env)}),
      VGetArg(upenv, 5-1, 1),
      _var0
    );
 }
}
static void _V0filter_k19(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k19" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k19, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k19, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn cdr 6 7) (close _V0filter_k20) (bruijn lst 4 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k20, env)}),
      upenv->up->up->up->vars[2]
    );
 }
}
static void _V0filter_k22(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k22" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k22, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k22, runtime, upenv, 1, argc, _var0) {
  // ((bruijn filter 5 1) (bruijn ##k.16 4 0) (bruijn p 4 1) (bruijn ##x.22 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      upenv->up->up->up->vars[0],
      upenv->up->up->up->vars[1],
      _var0
    );
 }
}
static void _V0filter_k18(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k18" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k18, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k18, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.18 0 0) ((bruijn car 5 5) (close _V0filter_k19) (bruijn lst 3 2)) ((bruijn cdr 5 7) (close _V0filter_k22) (bruijn lst 3 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 5)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k19, env)}),
      upenv->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 7)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k22, env)}),
      upenv->up->up->vars[2]
    );
}
 }
}
static void _V0filter_k17(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k17" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k17, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k17, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn p 2 1) (close _V0filter_k18) (bruijn ##x.23 0 0))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k18, env)}),
      _var0
    );
 }
}
static void _V0filter_k16(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "_V0filter_k16" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to _V0filter_k16, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_k16, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (if (bruijn ##p.17 0 0) ((bruijn ##k.16 1 0) (quote ())) ((bruijn car 3 5) (close _V0filter_k17) (bruijn lst 1 2)))
if(VDecodeBool(
_var0)) {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[0]), runtime,
      VNULL
    );
} else {
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[5]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k17, env)}),
      upenv->vars[2]
    );
}
 }
}
static void _V0filter_lambda7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "_V0filter_lambda7" };
 VRecordCall(&dbg);
 if(argc != 3) {
  VError("Not enough arguments to _V0filter_lambda7, got ~D~N"
  "-- expected 3~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)_V0filter_lambda7, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // ((bruijn null? 2 4) (close _V0filter_k16) (bruijn lst 0 2))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[4]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_k16, env)}),
      _var2
    );
 }
}
static void utils_lambda4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2) {
 static VDebugInfo dbg = { "utils_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda4, runtime, upenv, 3, argc, _var0, _var1, _var2) {
  struct { VEnv env; VWORD argv[3]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 3; env->var_len = 3; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  // (set! (close utils_k10) (bruijn filter 0 1) (close _V0filter_lambda7))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)VSetEnvVar2, env)}, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k10, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)_V0filter_lambda7, env)})
    );
 }
}
static void utils_lambda3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1, VWORD _var2, VWORD _var3, VWORD _var4, VWORD _var5, VWORD _var6, VWORD _var7) {
 static VDebugInfo dbg = { "utils_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda3, runtime, upenv, 8, argc, _var0, _var1, _var2, _var3, _var4, _var5, _var6, _var7) {
  struct { VEnv env; VWORD argv[8]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 8; env->var_len = 8; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  env->vars[2] = _var2;
  env->vars[3] = _var3;
  env->vars[4] = _var4;
  env->vars[5] = _var5;
  env->vars[6] = _var6;
  env->vars[7] = _var7;
  // ((close utils_lambda4) (bruijn ##k.3 0 0) #f #f)
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)utils_lambda4, env)}, runtime,
      _var0,
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void utils_k9(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k9" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k9, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k9, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close utils_lambda3) (bruijn ##k.2 7 0) (bruijn ##x.24 6 0) (bruijn ##x.25 5 0) (bruijn ##x.26 4 0) (bruijn ##x.27 3 0) (bruijn ##x.28 2 0) (bruijn ##x.29 1 0) (bruijn ##x.30 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)utils_lambda3, env)}, runtime,
      VGetArg(upenv, 7-1, 0),
      VGetArg(upenv, 6-1, 0),
      VGetArg(upenv, 5-1, 0),
      upenv->up->up->up->vars[0],
      upenv->up->up->vars[0],
      upenv->up->vars[0],
      upenv->vars[0],
      _var0
    );
 }
}
static void utils_k8(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k8" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k8, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k8, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 6 1) (close utils_k9) (quote cdr))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 6-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k9, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k7(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k7" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k7, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k7, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 5 1) (close utils_k8) (quote cons))
    V_CALL_CLOSURE2(VDecodeClosureApply(VGetArg(upenv, 5-1, 1)), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k8, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k6(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k6" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k6, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k6, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 4 1) (close utils_k7) (quote car))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k7, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k5(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k5" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k5, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k5, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 3 1) (close utils_k6) (quote null?))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k6, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k4(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k4" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k4, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k4, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 2 1) (close utils_k5) (quote format))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->up->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k5, env)}),
      VEncodePointer(&_V0format.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k3(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k3" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k3, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k3, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((bruijn ##vcore.import 1 1) (close utils_k4) (quote string->symbol))
    V_CALL_CLOSURE2(VDecodeClosureApply(upenv->vars[1]), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k4, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_lambda2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0, VWORD _var1) {
 static VDebugInfo dbg = { "utils_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda2, runtime, upenv, 2, argc, _var0, _var1) {
  struct { VEnv env; VWORD argv[2]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 2; env->var_len = 2; env->up = upenv;
  env->vars[0] = _var0;
  env->vars[1] = _var1;
  // ((bruijn ##vcore.import 0 1) (close utils_k3) (quote +))
    V_CALL_CLOSURE2(VDecodeClosureApply(_var1), runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k3, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k2(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k2" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k2, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k2, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // ((close utils_lambda2) (bruijn ##k.1 2 0) (bruijn ##x.31 0 0))
    V_CALL_CLOSURE2((VClosure[]){VMakeClosure2((VFunc2)utils_lambda2, env)}, runtime,
      upenv->up->vars[0],
      _var0
    );
 }
}
static void utils_k1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_k1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_k1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_k1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.make-import (close utils_k2) (##string ##string.34) (bruijn ##x.32 0 0))
    V_CALL_FUNC2(VMakeImport2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k2, env)}),
      VEncodePointer(&_V10string_D34.sym, VPOINTER_OTHER),
      _var0
    );
 }
}
static void utils_lambda1(VRuntime * runtime, VEnv * upenv, int argc, VWORD _var0) {
 static VDebugInfo dbg = { "utils_lambda1" };
 VRecordCall(&dbg);
 if(argc != 1) {
  VError("Not enough arguments to utils_lambda1, got ~D~N"
  "-- expected 1~N"
  , argc);
 }
 V_GC_CHECK2_VARARGS((VFunc2)utils_lambda1, runtime, upenv, 1, argc, _var0) {
  struct { VEnv env; VWORD argv[1]; } container;
  VEnv * env = &container.env;
  env->tag = VENV; env->num_vars = 1; env->var_len = 1; env->up = upenv;
  env->vars[0] = _var0;
  // (##vcore.load-library (close utils_k1) (##string ##string.35))
    V_CALL_FUNC2(VLoadLibrary2, runtime,
      VEncodeClosure((VClosure[]){VMakeClosure2((VFunc2)utils_k1, env)}),
      VEncodePointer(&_V10string_D35.sym, VPOINTER_OTHER)
    );
 }
}
VFunc2 utils = (VFunc2)utils_lambda1;
