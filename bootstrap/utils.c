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
static struct { VBlob sym; char bytes[12]; } _V10string_D61 = { { VSTRING, 12 }, "VMakeImport" };
static struct { VBlob sym; char bytes[13]; } _V10string_D60 = { { VSTRING, 13 }, "VLoadLibrary" };
static struct { VBlob sym; char bytes[21]; } _V10string_D59 = { { VSTRING, 21 }, "_V0vanity_V0core_V20" };
static struct { VBlob sym; char bytes[6]; } _V10string_D58 = { { VSTRING, 6 }, "utils" };
static struct { VBlob sym; char bytes[2]; } _V0_P = { { VSYMBOL, 2 }, "+" };
static struct { VBlob sym; char bytes[15]; } _V0string___Gsymbol = { { VSYMBOL, 15 }, "string->symbol" };
static struct { VBlob sym; char bytes[7]; } _V0format = { { VSYMBOL, 7 }, "format" };
static struct { VBlob sym; char bytes[6]; } _V0null_Q = { { VSYMBOL, 6 }, "null\?" };
static struct { VBlob sym; char bytes[5]; } _V0cons = { { VSYMBOL, 5 }, "cons" };
static struct { VBlob sym; char bytes[4]; } _V0car = { { VSYMBOL, 4 }, "car" };
static struct { VBlob sym; char bytes[4]; } _V0cdr = { { VSYMBOL, 4 }, "cdr" };
static struct { VBlob sym; char bytes[7]; } _V0filter = { { VSYMBOL, 7 }, "filter" };
static struct { VBlob sym; char bytes[7]; } _V0gensym = { { VSYMBOL, 7 }, "gensym" };
static struct { VBlob sym; char bytes[8]; } _V10string_D57 = { { VSTRING, 8 }, "##~A.~A" };
static void utils_k15(VEnv * env) {
 static VDebugInfo dbg = { "utils_k15" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k15, env) {
 if (env->num_vars == 1) {
  // ((bruijn string->symbol 7 2) (bruijn ##k.22 3 0) (bruijn ##x.27 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 7, 2)),
      env->up->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k15, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k14(VEnv * env) {
 static VDebugInfo dbg = { "utils_k14" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k14, env) {
 if (env->num_vars == 1) {
  // ((bruijn format 6 3) (close utils_k15) (##string ##string.57) (bruijn base 2 1) (bruijn x 3 1))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 3)),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k15, env)}),
      VEncodePointer(&_V10string_D57.sym, VPOINTER_OTHER),
      env->up->up->vars[1],
      env->up->up->up->vars[1]
    );
 } else {
  VError("Not enough arguments to utils_k14, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k13(VEnv * env) {
 static VDebugInfo dbg = { "utils_k13" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k13, env) {
 if (env->num_vars == 1) {
  // (set! (close utils_k14) (bruijn x 2 1) (bruijn ##x.28 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k14, env)}),
      VEncodeInt(2l), VEncodeInt(1l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k13, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_lambda6(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda6" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda6, env) {
 if (env->num_vars == 2) {
  // ((bruijn + 4 1) (close utils_k13) (bruijn x 1 1) 1)
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k13, env)}),
      env->up->vars[1],
      VEncodeInt(1l)
    );
 } else {
  VError("Not enough arguments to utils_lambda6, got ~D~N"
  "-- expected 2~N"
  , env->num_vars);
 }
 }
}
static void utils_lambda5(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda5" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda5, env) {
  // ((bruijn ##k.20 0 0) (close utils_lambda6))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_lambda6, env)})
    );
 }
}
static void utils_k17(VEnv * env) {
 static VDebugInfo dbg = { "utils_k17" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k17, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##k.8 3 0) (##inline ##sys.cons (##inline ##sys.cons (quote gensym) (bruijn gensym 3 2)) (##inline ##sys.cons (##inline ##sys.cons (quote filter) (bruijn filter 3 1)) (quote ()))))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[0]),
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0gensym.sym, VPOINTER_OTHER),
      env->up->up->up->vars[2]
    )
,
      VInlineCons(
VInlineCons(
VEncodePointer(&_V0filter.sym, VPOINTER_OTHER),
      env->up->up->up->vars[1]
    )
,
      VNULL
    )

    )

    );
 } else {
  VError("Not enough arguments to utils_k17, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k16(VEnv * env) {
 static VDebugInfo dbg = { "utils_k16" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k16, env) {
 if (env->num_vars == 1) {
  // (set! (close utils_k17) (bruijn gensym 2 2) (bruijn ##x.19 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k17, env)}),
      VEncodeInt(2l), VEncodeInt(2l),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k16, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k12(VEnv * env) {
 static VDebugInfo dbg = { "utils_k12" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k12, env) {
 if (env->num_vars == 1) {
  // ((close utils_lambda5) (close utils_k16) 0)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(utils_lambda5, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k16, env)}),
      VEncodeInt(0l)
    );
 } else {
  VError("Not enough arguments to utils_k12, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k23(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k23" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k23, env) {
 if (env->num_vars == 1) {
  // ((bruijn cons 8 5) (bruijn ##k.29 6 0) (bruijn ##x.39 2 0) (bruijn ##x.40 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 8, 5)),
      VGetArg(env, 6, 0),
      env->up->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0filter_k23, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k22(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k22" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k22, env) {
 if (env->num_vars == 1) {
  // ((bruijn filter 6 1) (close _V0filter_k23) (bruijn p 5 1) (bruijn ##x.41 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k23, env)}),
      VGetArg(env, 5, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0filter_k22, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k21(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k21" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k21, env) {
 if (env->num_vars == 1) {
  // ((bruijn cdr 6 7) (close _V0filter_k22) (bruijn lst 4 2))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k22, env)}),
      VGetArg(env, 4, 2)
    );
 } else {
  VError("Not enough arguments to _V0filter_k21, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k24(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k24" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k24, env) {
 if (env->num_vars == 1) {
  // ((bruijn filter 5 1) (bruijn ##k.29 4 0) (bruijn p 4 1) (bruijn ##x.44 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VGetArg(env, 4, 0),
      VGetArg(env, 4, 1),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0filter_k24, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k20(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k20" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k20, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.36 0 0) ((bruijn car 5 6) (close _V0filter_k21) (bruijn lst 3 2)) ((bruijn cdr 5 7) (close _V0filter_k24) (bruijn lst 3 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 6)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k21, env)}),
      env->up->up->up->vars[2]
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 7)),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k24, env)}),
      env->up->up->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0filter_k20, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k19(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k19" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k19, env) {
 if (env->num_vars == 1) {
  // ((bruijn p 2 1) (close _V0filter_k20) (bruijn ##x.45 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k20, env)}),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to _V0filter_k19, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_k18(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_k18" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_k18, env) {
 if (env->num_vars == 1) {
  // (if (bruijn ##x.31 0 0) ((bruijn ##k.29 1 0) (quote ())) ((bruijn car 3 6) (close _V0filter_k19) (bruijn lst 1 2)))
if(VDecodeBool(
env->vars[0])) {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[0]),
      VNULL
    );
} else {
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[6]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k19, env)}),
      env->up->vars[2]
    );
}
 } else {
  VError("Not enough arguments to _V0filter_k18, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void _V0filter_lambda7(VEnv * env) {
 static VDebugInfo dbg = { "_V0filter_lambda7" };
 VRecordCall(&dbg);
 V_GC_CHECK(_V0filter_lambda7, env) {
 if (env->num_vars == 3) {
  // ((bruijn null? 2 4) (close _V0filter_k18) (bruijn lst 0 2))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[4]),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_k18, env)}),
      env->vars[2]
    );
 } else {
  VError("Not enough arguments to _V0filter_lambda7, got ~D~N"
  "-- expected 3~N"
  , env->num_vars);
 }
 }
}
static void utils_lambda4(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda4" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda4, env) {
  // (set! (close utils_k12) (bruijn filter 0 1) (close _V0filter_lambda7))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(VSetEnvVar, env)},
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k12, env)}),
      VEncodeInt(0l), VEncodeInt(1l),
      VEncodeClosure((VClosure[]){VMakeClosure(_V0filter_lambda7, env)})
    );
 }
}
static void utils_lambda3(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda3" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda3, env) {
  // ((close utils_lambda4) (bruijn ##k.6 0 0) #f #f)
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(utils_lambda4, env)},
      env->vars[0],
      VEncodeBool(false),
      VEncodeBool(false)
    );
 }
}
static void utils_k11(VEnv * env) {
 static VDebugInfo dbg = { "utils_k11" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k11, env) {
 if (env->num_vars == 1) {
  // ((close utils_lambda3) (bruijn ##k.4 7 0) (bruijn ##x.46 6 0) (bruijn ##x.47 5 0) (bruijn ##x.48 4 0) (bruijn ##x.49 3 0) (bruijn ##x.50 2 0) (bruijn ##x.51 1 0) (bruijn ##x.52 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(utils_lambda3, env)},
      VGetArg(env, 7, 0),
      VGetArg(env, 6, 0),
      VGetArg(env, 5, 0),
      VGetArg(env, 4, 0),
      env->up->up->up->vars[0],
      env->up->up->vars[0],
      env->up->vars[0],
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k11, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k10(VEnv * env) {
 static VDebugInfo dbg = { "utils_k10" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k10, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 6 1) (close utils_k11) (quote cdr))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 6, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k11, env)}),
      VEncodePointer(&_V0cdr.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k10, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k9(VEnv * env) {
 static VDebugInfo dbg = { "utils_k9" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k9, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 5 1) (close utils_k10) (quote car))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 5, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k10, env)}),
      VEncodePointer(&_V0car.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k9, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k8(VEnv * env) {
 static VDebugInfo dbg = { "utils_k8" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k8, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 4 1) (close utils_k9) (quote cons))
    V_CALL_CLOSURE(VDecodeClosureApply(VGetArg(env, 4, 1)),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k9, env)}),
      VEncodePointer(&_V0cons.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k8, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k7(VEnv * env) {
 static VDebugInfo dbg = { "utils_k7" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k7, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 3 1) (close utils_k8) (quote null?))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k8, env)}),
      VEncodePointer(&_V0null_Q.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k7, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k6(VEnv * env) {
 static VDebugInfo dbg = { "utils_k6" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k6, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 2 1) (close utils_k7) (quote format))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k7, env)}),
      VEncodePointer(&_V0format.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k6, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k5(VEnv * env) {
 static VDebugInfo dbg = { "utils_k5" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k5, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##vcore.import 1 1) (close utils_k6) (quote string->symbol))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k6, env)}),
      VEncodePointer(&_V0string___Gsymbol.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k5, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_lambda2(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda2" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda2, env) {
  // ((bruijn ##vcore.import 0 1) (close utils_k5) (quote +))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[1]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k5, env)}),
      VEncodePointer(&_V0_P.sym, VPOINTER_OTHER)
    );
 }
}
static void utils_k4(VEnv * env) {
 static VDebugInfo dbg = { "utils_k4" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k4, env) {
 if (env->num_vars == 1) {
  // ((close utils_lambda2) (bruijn ##k.2 4 0) (bruijn ##x.53 0 0))
    V_CALL_CLOSURE((VClosure[]){VMakeClosure(utils_lambda2, env)},
      VGetArg(env, 4, 0),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k4, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k3(VEnv * env) {
 static VDebugInfo dbg = { "utils_k3" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k3, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.54 2 0) (close utils_k4) (##string ##string.58) (bruijn ##x.55 0 0))
    V_CALL_CLOSURE(VDecodeClosureApply(env->up->up->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k4, env)}),
      VEncodePointer(&_V10string_D58.sym, VPOINTER_OTHER),
      env->vars[0]
    );
 } else {
  VError("Not enough arguments to utils_k3, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k2(VEnv * env) {
 static VDebugInfo dbg = { "utils_k2" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k2, env) {
 if (env->num_vars == 1) {
  // ((bruijn ##x.56 0 0) (close utils_k3) (##string ##string.59))
    V_CALL_CLOSURE(VDecodeClosureApply(env->vars[0]),
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k3, env)}),
      VEncodePointer(&_V10string_D59.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k2, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_k1(VEnv * env) {
 static VDebugInfo dbg = { "utils_k1" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_k1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close utils_k2) (##string ##string.60))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k2, env)}),
      VEncodePointer(&_V10string_D60.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_k1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
static void utils_lambda1(VEnv * env) {
 static VDebugInfo dbg = { "utils_lambda1" };
 VRecordCall(&dbg);
 V_GC_CHECK(utils_lambda1, env) {
 if (env->num_vars == 1) {
  // (##vcore.function (close utils_k1) (##string ##string.61))
    V_CALL_FUNC(VFunction,
      VEncodeClosure((VClosure[]){VMakeClosure(utils_k1, env)}),
      VEncodePointer(&_V10string_D61.sym, VPOINTER_OTHER)
    );
 } else {
  VError("Not enough arguments to utils_lambda1, got ~D~N"
  "-- expected 1~N"
  , env->num_vars);
 }
 }
}
void (*utils)(VEnv*) = utils_lambda1;
